#include "support/typescript_instance.hpp"
#include "quickjs/event_loop.h"
#include "quickjs/quickjs_helper.h"
#include "quickjs/str_helper.h"
#include "support/typescript.hpp"
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

const char *TypeScriptInstance::symbol_mask = "_GodotClass";

TypeScriptInstance::TypeScriptInstance(Object *p_godot_object, TypeScript *script, bool is_placeholder) {
	this->script = script;
	String code = script->_get_source_code();
	std::string code_str = std::string(code.utf8().get_data());
	JSValue ret = JS_Eval(ctx, code_str.c_str(), code_str.size(), "<input>", JS_EVAL_TYPE_MODULE | JS_EVAL_FLAG_COMPILE_ONLY);
	JSModuleDef *md = (JSModuleDef *)JS_VALUE_GET_PTR(ret);
	ret = JS_EvalFunction(ctx, ret);
	if (!is_exception(ctx, ret)) {
		JSValue ns = JS_GetModuleNamespace(ctx, md);
		ERR_FAIL_COND(is_exception(ctx, ns));
		JSPropertyEnum *props;
		uint32_t len;
		ERR_FAIL_COND_MSG(JS_GetOwnPropertyNames(ctx, &props, &len, ns, JS_GPN_STRING_MASK) < 0, "Error getting module property\n");
		for (uint32_t i = 0; i < len; i++) {
			JSAtom class_atom = props[i].atom;
			const char *prop_name = JS_AtomToCString(ctx, class_atom);
			ret = JS_GetPropertyStr(ctx, ns, prop_name);
			if (!is_exception(ctx, ret) && JS_IsObject(ret)) {
				JSValue clazz = ret;
				JSPropertyEnum *class_props;
				uint32_t class_len;

				ERR_FAIL_COND_MSG(JS_GetOwnPropertyNames(ctx, &class_props, &class_len, clazz, JS_GPN_SYMBOL_MASK) < 0, "Error getting class property\n");
				for (uint32_t j = 0; j < class_len; j++) {
					JSAtom symbol = class_props[j].atom;
					const char *symbol_name = JS_AtomToCString(ctx, symbol);
					ret = JS_GetProperty(ctx, ret, symbol);
					if (strcmp(symbol_mask, symbol_name) == 0 || true) {
						binding = internal::get_object_instance_binding(p_godot_object->_owner);
						JSValue vbinding = static_cast<Variant>(binding);
						JSValue js_instance = JS_CallConstructor(ctx, clazz, 1, &vbinding);
						JS_SetOpaque(js_instance, binding);
						binding->js_instance = js_instance;
						script->instances.insert(binding->get_instance_id());
					}
				}
			}
		}
	}
}

godot::TypeScriptInstance::~TypeScriptInstance() {
	// TODO remove instance
}

JSModuleDef *godot::TypeScriptInstance::get_module(const char *path) {
	char *code = new char[512];
	sprintf(code, "import * as md from \"%s\";", path);
	JSValue js_module = JS_Eval(ctx, code, strlen(code), "<input>", JS_EVAL_FLAG_COMPILE_ONLY | JS_EVAL_TYPE_MODULE);
	JSModuleDef *md = (JSModuleDef *)JS_VALUE_GET_PTR(js_module);
	js_module = JS_EvalFunction(ctx, js_module);
	return is_exception(ctx, js_module) ? nullptr : md;
}

JSValue TypeScriptInstance::find_ns_property(JSModuleDef *md, const char *name) {
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

GDExtensionBool TypeScriptInstance::set(GDExtensionConstStringNamePtr p_name, GDExtensionConstVariantPtr p_variant) {
	const char *name = to_chars(*reinterpret_cast<const StringName *>(p_name));
	if (script->is_tool || !Engine::get_singleton()->is_editor_hint()) {
		JSValue js_instance = binding->js_instance;
		Variant varg;
		internal::gdextension_interface_variant_new_copy(varg._native_ptr(), p_variant);
		return JS_SetPropertyStr(ctx, js_instance, name, varg) > 0;
	}
	return false;
}

GDExtensionBool TypeScriptInstance::get(GDExtensionConstStringNamePtr p_name, GDExtensionVariantPtr r_ret) {
	const char *name = to_chars(*reinterpret_cast<const StringName *>(p_name));
	if (script->is_tool || !Engine::get_singleton()->is_editor_hint()) {
		JSValue js_instance = binding->js_instance;
		JSValue js_ret = JS_GetPropertyStr(ctx, js_instance, name);
		if (JS_IsUndefined(js_ret))
			return false;
		Variant ret = js_ret;
		internal::gdextension_interface_variant_new_copy(r_ret, ret._native_ptr());
		return true;
	}
	return false;
}

// const GDExtensionPropertyInfo *JavaScriptInstance::get_property_list(uint32_t *r_count) {
// 	return nullptr;
// }

// GDExtensionBool JavaScriptInstance::property_can_revert(GDExtensionConstStringNamePtr p_name) {
// 	return false;
// }

// GDExtensionBool JavaScriptInstance::property_get_revert(GDExtensionConstStringNamePtr p_name, GDExtensionVariantPtr r_ret) {
// StringName *name = (StringName *)p_name;
// *(Variant *)r_ret = p_godot_object->property_get_revert(*name);
// return true;
// }

GDExtensionBool TypeScriptInstance::has_method(GDExtensionConstStringNamePtr p_name) {
	JSValue js_instance = binding->js_instance;
	StringName method = *reinterpret_cast<const StringName *>(p_name);
	const char *name = to_chars(method);
	JSValue js_method = JS_GetPropertyStr(ctx, js_instance, name);
	return JS_IsFunction(ctx, js_method);
}

GDExtensionInt TypeScriptInstance::get_method_argument_count(GDExtensionConstStringNamePtr p_name, GDExtensionBool *r_is_valid) {
	JSValue js_instance = binding->js_instance;
	const char *name = to_chars(*reinterpret_cast<const StringName *>(p_name));
	JSValue js_method = JS_GetPropertyStr(ctx, js_instance, name);
	JSValue js_len = JS_GetPropertyStr(ctx, js_method, "length");
	int64_t len;
	*r_is_valid = !JS_ToInt64(ctx, &len, js_len);
	return len;
}

void TypeScriptInstance::call(GDExtensionConstStringNamePtr p_method, const GDExtensionConstVariantPtr *p_args, GDExtensionInt p_argument_count, GDExtensionVariantPtr r_return, GDExtensionCallError *r_error) {
	JSValue js_instance = binding->js_instance;
	JSValue prototype = JS_GetPrototype(ctx, js_instance);
	const char *method = to_chars(*reinterpret_cast<const StringName *>(p_method));
	JSAtom atom = JS_NewAtom(ctx, method);

	if (!script->is_tool && Engine::get_singleton()->is_editor_hint() && method[0] == '_') {
		r_error->error = GDExtensionCallErrorType::GDEXTENSION_CALL_ERROR_INVALID_METHOD;
		return;
	}
	int it = 0;
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
			Variant ret = JS_Call(ctx, js_method, js_instance, p_argument_count, js_args.data());
			internal::gdextension_interface_variant_new_copy(r_return, ret._native_ptr());
			r_error->error = GDExtensionCallErrorType::GDEXTENSION_CALL_OK;
			execute_events();
			return;
		}
		prototype = JS_GetPrototype(ctx, prototype);
		++it;
	}
	r_error->error = GDExtensionCallErrorType::GDEXTENSION_CALL_ERROR_INVALID_METHOD;
}

void TypeScriptInstance::notification(int32_t p_what, GDExtensionBool p_reversed) {
	JSAtom atom = JS_NewAtom(ctx, "_notification");
	if (script->is_tool || !Engine::get_singleton()->is_editor_hint()) {
		JSValue js_instance = binding->js_instance;
		if (JS_HasProperty(ctx, js_instance, atom)) {
			notification_bind(js_instance, JS_GetPrototype(ctx, js_instance), p_what, p_reversed);
		}
	}
}

void TypeScriptInstance::to_string(GDExtensionBool *r_is_valid, GDExtensionStringPtr r_out) {
	static JSAtom to_string_atom = JS_NewAtom(ctx, "toString");
	JSValue js_instance = binding->js_instance;
	JSValue ret = JS_Invoke(ctx, js_instance, to_string_atom, 0, NULL);
	const char *cstr = JS_ToCString(ctx, ret);
	internal::gdextension_interface_variant_new_copy(r_out, String(cstr)._native_ptr());
	*r_is_valid = true;
}

void TypeScriptInstance::refcount_incremented() {
	JSValue js_instance = binding->js_instance;
	JS_DupValue(ctx, js_instance);
}

GDExtensionBool TypeScriptInstance::refcount_decremented() {
	JSValue js_instance = binding->js_instance;
	JS_FreeValue(ctx, js_instance);
	return true;
}

GDExtensionObjectPtr TypeScriptInstance::get_owner() {
	return p_godot_object->_owner;
}

GDExtensionObjectPtr TypeScriptInstance::get_script() {
	return script;
}

GDExtensionBool godot::TypeScriptInstance::is_placeholder() {
	return false;
}

GDExtensionScriptLanguagePtr TypeScriptInstance::get_language() {
	return TypeScriptLanguage::get_singleton();
}

static void notification_bind(JSValue instance, JSValue prototype, int32_t p_what, GDExtensionBool p_reversed) {
	if (JS_IsNull(prototype))
		return;
	JSAtom method_atom = JS_NewAtom(ctx, "_notification");
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
	JS_FreeAtom(ctx, method_atom);
}
