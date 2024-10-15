#include "support/placeholder_javascript_instance.hpp"
#include "quickjs/quickjs_helper.h"
#include "quickjs/str_helper.h"
#include "support/javascript.hpp"
#include <godot_cpp/classes/class_db_singleton.hpp>
#include <godot_cpp/classes/engine.hpp>
#include <godot_cpp/classes/resource_loader.hpp>
#include <godot_cpp/core/error_macros.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/utility_functions.hpp>
#include <godot_cpp/variant/variant_size.hpp>
#include <memory>

using namespace godot;

static void notification_bind(JSValue instance, JSValue prototype, int32_t p_what, GDExtensionBool p_reversed);

const char *PlaceholderJavaScriptInstance::symbol_mask = "_GodotClass";

PlaceholderJavaScriptInstance::PlaceholderJavaScriptInstance(Object *p_godot_object, JavaScript *script, bool is_placeholder) {
	this->_is_placeholder = is_placeholder;
	this->script = script;
	binding = internal::get_object_instance_binding(p_godot_object->_owner);
	int class_id = binding->__get_js_class_id();
	JSValue js_instance = JS_NewObjectClass(ctx, class_id);
	JS_SetOpaque(js_instance, binding);
	binding->js_instance = js_instance;
	binding->ctx = ctx;
}

godot::PlaceholderJavaScriptInstance::~PlaceholderJavaScriptInstance() {
	// JS_FreeValue(ctx, binding->js_instance);
}

JSModuleDef *godot::PlaceholderJavaScriptInstance::get_module(const char *path) {
	char *code = new char[512];
	sprintf(code, "import * as md from \"%s\";", path);
	JSValue js_module = JS_Eval(ctx, code, strlen(code), "<input>", JS_EVAL_FLAG_COMPILE_ONLY | JS_EVAL_TYPE_MODULE);
	JSModuleDef *md = (JSModuleDef *)JS_VALUE_GET_PTR(js_module);
	js_module = JS_EvalFunction(ctx, js_module);
	return is_exception(ctx, js_module) ? nullptr : md;
}

JSValue PlaceholderJavaScriptInstance::find_ns_property(JSModuleDef *md, const char *name) {
	JSValue ns = JS_GetModuleNamespace(ctx, md);
	return JS_GetPropertyStr(ctx, ns, name);
}

#define SET_JS_PROPERTY_WITH_MSG(prop_name, var)                        \
	if (JS_SetPropertyStr(ctx, js_instance, prop_name, var) <= 0) {     \
		qjs::print_exception(ctx);                                      \
		ERR_FAIL_V_EDMSG(false, "Error setting js_instance property."); \
	}                                                                   \
	return true;

#define SETTER_JS_PROPERTY_WITH_MSG(js_setter, var)                                                                                      \
	JSValue _var = var;                                                                                                                  \
	ERR_FAIL_COND_V_EDMSG(JS_IsException(JS_Call(ctx, js_setter, js_instance, 1, &_var)), false, "Error setting js_instance property."); \
	return true;

#define SETTER_GD_PROPERTY_WITH_MSG(gd_setter, var)                                                                                      \
	JSValue _var = var;                                                                                                                  \
	ERR_FAIL_COND_V_EDMSG(JS_IsException(JS_Call(ctx, gd_setter, js_instance, 1, &_var)), false, "Error setting js_instance property."); \
	return true;

GDExtensionBool PlaceholderJavaScriptInstance::set(GDExtensionConstStringNamePtr p_name, GDExtensionConstVariantPtr p_variant) {
	JSValue js_instance = binding->js_instance;
	const char *name = to_chars(*reinterpret_cast<const StringName *>(p_name));
	JSPropertyDescriptor prop;
	JSAtom atom = JS_NewAtom(ctx, name);
	if (JS_GetOwnProperty(ctx, &prop, js_instance, atom) <= 0)
		return false;
	Variant variant;
	internal::gdextension_interface_variant_new_copy(variant._native_ptr(), p_variant);
	JSValue arg = variant;
	JSValue state = JS_Call(ctx, prop.setter, js_instance, 1, &arg);
	return is_exception(ctx, state);
}

GDExtensionBool PlaceholderJavaScriptInstance::get(GDExtensionConstStringNamePtr p_name, GDExtensionVariantPtr r_ret) {
	JSValue js_instance = binding->js_instance;
	const char *name = to_chars(*reinterpret_cast<const StringName *>(p_name));
	JSPropertyDescriptor prop;
	JSAtom atom = JS_NewAtom(ctx, name);
	if (JS_GetOwnProperty(ctx, &prop, js_instance, atom) <= 0)
		return false;
	Variant ret = prop.value;
	internal::gdextension_interface_variant_new_copy(r_ret, ret._native_ptr());
	return true;
}

// const GDExtensionPropertyInfo *PlaceholderJavaScriptInstance::get_property_list(uint32_t *r_count) {
// 	return nullptr;
// }

// GDExtensionBool PlaceholderJavaScriptInstance::property_can_revert(GDExtensionConstStringNamePtr p_name) {
// 	return false;
// }

// GDExtensionBool PlaceholderJavaScriptInstance::property_get_revert(GDExtensionConstStringNamePtr p_name, GDExtensionVariantPtr r_ret) {
// StringName *name = (StringName *)p_name;
// *(Variant *)r_ret = p_godot_object->property_get_revert(*name);
// return true;
// }

GDExtensionBool PlaceholderJavaScriptInstance::has_method(GDExtensionConstStringNamePtr p_name) {
	JSValue js_instance = binding->js_instance;
	const char *name = to_chars(*reinterpret_cast<const StringName *>(p_name));
	JSValue js_method = JS_GetPropertyStr(ctx, js_instance, name);
	return JS_IsFunction(ctx, js_method);
}

GDExtensionInt PlaceholderJavaScriptInstance::get_method_argument_count(GDExtensionConstStringNamePtr p_name, GDExtensionBool *r_is_valid) {
	JSValue js_instance = binding->js_instance;
	const char *name = to_chars(*reinterpret_cast<const StringName *>(p_name));
	JSValue js_method = JS_GetPropertyStr(ctx, js_instance, name);
	JSValue js_len = JS_GetPropertyStr(ctx, js_method, "length");
	int64_t len;
	if (JS_ToInt64(ctx, &len, js_len))
		*r_is_valid = false;
	*r_is_valid = true;
	return len;
}

void PlaceholderJavaScriptInstance::call(GDExtensionConstStringNamePtr p_method, const GDExtensionConstVariantPtr *p_args, GDExtensionInt p_argument_count, GDExtensionVariantPtr r_return, GDExtensionCallError *r_error) {
	if (script->is_tool || Engine::get_singleton()->is_editor_hint())
		return;
	JSValue js_instance = binding->js_instance;
	JSValue prototype = JS_GetPrototype(ctx, js_instance);
	const char *method = to_chars(*reinterpret_cast<const StringName *>(p_method));
	JSAtom atom = JS_NewAtom(ctx, method);
	while (!JS_IsNull(prototype)) {
		JSPropertyDescriptor prop;
		if (JS_GetOwnProperty(ctx, &prop, prototype, atom) > 0) {
			JSValue js_method = prop.value;
			if (!JS_IsFunction(ctx, js_method)) {
				r_error->error = GDExtensionCallErrorType::GDEXTENSION_CALL_ERROR_INVALID_METHOD;
				return;
			}
			const Variant *variant_args = p_args ? *reinterpret_cast<const Variant *const *>(p_args) : nullptr;
			std::vector<JSValue> js_args(p_argument_count);
			for (int i = 0; i < p_argument_count; i++)
				js_args[i] = static_cast<JSValue>(variant_args[i]);
			JSValue js_ret = JS_Call(ctx, js_method, js_instance, p_argument_count, js_args.data());
			Variant ret = Variant(js_ret);
			internal::gdextension_interface_variant_new_copy(r_return, ret._native_ptr());
			r_error->error = GDExtensionCallErrorType::GDEXTENSION_CALL_OK;
			return;
		}
		prototype = JS_GetPrototype(ctx, prototype);
	}
}

void PlaceholderJavaScriptInstance::notification(int32_t p_what, GDExtensionBool p_reversed) {
	JSValue js_instance = binding->js_instance;
	notification_bind(js_instance, JS_GetPrototype(ctx, js_instance), p_what, p_reversed);
}

void PlaceholderJavaScriptInstance::to_string(GDExtensionBool *r_is_valid, GDExtensionStringPtr r_out) {
	static JSAtom to_string_atom = JS_NewAtom(ctx, "toString");
	JSValue js_instance = binding->js_instance;
	JSValue ret = JS_Invoke(ctx, js_instance, to_string_atom, 0, NULL);
	const char *cstr = JS_ToCString(ctx, ret);
	internal::gdextension_interface_variant_new_copy(r_out, String(cstr)._native_ptr());
	*r_is_valid = true;
}

void PlaceholderJavaScriptInstance::refcount_incremented() {
	JSValue js_instance = binding->js_instance;
	JS_DupValue(ctx, js_instance);
}

GDExtensionBool PlaceholderJavaScriptInstance::refcount_decremented() {
	JSValue js_instance = binding->js_instance;
	JS_FreeValue(ctx, js_instance);
	return true;
}

GDExtensionObjectPtr PlaceholderJavaScriptInstance::get_owner() {
	return p_godot_object->_owner;
}

GDExtensionObjectPtr PlaceholderJavaScriptInstance::get_script() {
	return script;
}

GDExtensionBool godot::PlaceholderJavaScriptInstance::is_placeholder() {
	return _is_placeholder;
}

GDExtensionScriptLanguagePtr PlaceholderJavaScriptInstance::get_language() {
	return JavaScriptLanguage::get_singleton();
}

static void notification_bind(JSValue instance, JSValue prototype, int32_t p_what, GDExtensionBool p_reversed) {
	if (JS_IsNull(prototype))
		return;
	static JSAtom method_atom = JS_NewAtom(ctx, "_notification");
	JSValue what = JS_NewInt32(ctx, p_what);
	JSPropertyDescriptor prop;
	JS_GetOwnProperty(ctx, &prop, prototype, method_atom);
	JSValue js_method = prop.value;
	if (p_reversed && JS_IsFunction(ctx, js_method))
		JS_Call(ctx, js_method, instance, 1, &what);
	prototype = JS_GetPrototype(ctx, prototype);
	notification_bind(instance, prototype, p_what, p_reversed);
	if (!p_reversed && JS_IsFunction(ctx, js_method))
		JS_Call(ctx, js_method, instance, 1, &what);
}
