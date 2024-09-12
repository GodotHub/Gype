#include "support/javascript_instance.hpp"
#include "quickjs/js_pointer.h"
#include "quickjs/str_utils.h"
#include "support/javascript.hpp"
#include <godot_cpp/classes/class_db_singleton.hpp>
#include <godot_cpp/classes/resource_loader.hpp>
#include <godot_cpp/core/error_macros.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/utility_functions.hpp>
#include <godot_cpp/variant/variant_size.hpp>
#include <memory>

using namespace godot;

const char *JavaScriptInstance::symbol_mask = "GodotClass";

JavaScriptInstance::JavaScriptInstance(Object *p_godot_object, JavaScript *script) {
	script->instances[p_godot_object] = this;
	this->p_godot_object = p_godot_object;
	this->script = script;
	std::string path = std::string(script->origin_path.ascii());
	String code = script->_get_source_code();
	std::string code_str = std::string(code.ascii().get_data());
	JSValue ret = context.eval(code_str, "<input>", JS_EVAL_TYPE_MODULE | JS_EVAL_FLAG_COMPILE_ONLY);
	JSModuleDef *md = (JSModuleDef *)JS_VALUE_GET_PTR(ret);
	ret = JS_EvalFunction(context.ctx, ret);
	if (!JS_IsException(ret)) {
		JSValue ns = JS_GetModuleNamespace(context.ctx, md);
		JSPropertyEnum *props;
		uint32_t len;
		ERR_FAIL_COND_MSG(JS_GetOwnPropertyNames(context.ctx, &props, &len, ns, JS_GPN_STRING_MASK) < 0, "Error getting module property\n");
		for (uint32_t i = 0; i < len; i++) {
			JSAtom class_atom = props[i].atom;
			const char *prop_name = JS_AtomToCString(context.ctx, class_atom);
			ret = JS_GetPropertyStr(context.ctx, ns, prop_name);
			if (!qjs::is_exception(context.ctx, ret) && JS_IsObject(ret)) {
				JSValue clazz = ret;
				JSPropertyEnum *class_props;
				uint32_t class_len;
				ERR_FAIL_COND_MSG(JS_GetOwnPropertyNames(context.ctx, &class_props, &class_len, ret, JS_GPN_SYMBOL_MASK) < 0, "Error getting class property\n");
				for (uint32_t j = 0; j < class_len; j++) {
					JSAtom symbol = class_props[j].atom;
					const char *symbol_name = JS_AtomToCString(context.ctx, symbol);
					ret = JS_GetProperty(context.ctx, ret, symbol);
					if (strcmp(symbol_mask, symbol_name) == 0) {
						JSValue js_instance = JS_CallConstructor(context.ctx, clazz, 0, NULL);
						ERR_FAIL_COND_EDMSG(JS_IsUndefined(js_instance) || qjs::is_exception(context.ctx, js_instance), "Error creating script instance");
						ERR_FAIL_COND_EDMSG(JS_SetPropertyStr(context.ctx, js_instance, "_owner", qjs::js_traits<void *>::wrap(context.ctx, ((void *)p_godot_object))) <= 0, "Error setting owner");
						binding = GodotInstanceBinding(js_instance);
						godot::internal::gdextension_interface_object_get_instance_binding(p_godot_object->_owner, godot::internal::token, &godot::internal::callbacks);
					}
				}
			}
		}
	}
}

void register_class(JSValue) {}

JSModuleDef *godot::JavaScriptInstance::get_module(const char *path) {
	char *code = new char[512];
	sprintf(code, "import * as md from \"%s\";", path);
	JSValue js_module = context.eval(code, "<input>", JS_EVAL_FLAG_COMPILE_ONLY | JS_EVAL_TYPE_MODULE);
	JSModuleDef *md = (JSModuleDef *)JS_VALUE_GET_PTR(js_module);
	js_module = JS_EvalFunction(context.ctx, js_module);
	return qjs::is_exception(context.ctx, js_module) ? nullptr : md;
}

JSValue JavaScriptInstance::find_ns_property(JSModuleDef *md, const char *name) {
	JSValue ns = JS_GetModuleNamespace(context.ctx, md);
	return JS_GetPropertyStr(context.ctx, ns, name);
}

#define SET_JS_PROPERTY_WITH_MSG(prop_name, var)                            \
	if (JS_SetPropertyStr(context.ctx, js_instance, prop_name, var) <= 0) { \
		qjs::print_exception(context.ctx);                                  \
		ERR_FAIL_V_EDMSG(false, "Error setting js_instance property.");     \
	}                                                                       \
	return true;

#define SETTER_JS_PROPERTY_WITH_MSG(js_setter, var)                                                                                              \
	JSValue _var = var;                                                                                                                          \
	ERR_FAIL_COND_V_EDMSG(JS_IsException(JS_Call(context.ctx, js_setter, js_instance, 1, &_var)), false, "Error setting js_instance property."); \
	return true;

#define SETTER_GD_PROPERTY_WITH_MSG(gd_setter, var)                                                                                              \
	JSValue _var = var;                                                                                                                          \
	ERR_FAIL_COND_V_EDMSG(JS_IsException(JS_Call(context.ctx, gd_setter, js_instance, 1, &_var)), false, "Error setting js_instance property."); \
	return true;

JSValue JavaScriptInstance::get_jsvalue_from_type(Variant::Type type, const Variant &p_variant) {
	uint8_t *buf = *(uint8_t(*)[GODOT_CPP_VARIANT_SIZE])p_variant._native_ptr();
	JSValue opaque = qjs::to_js_u8arr(context.ctx, (GDExtensionVariantType)(int)type, buf);
	return qjs::to_js_variant(context.ctx, (int)type, opaque);
}

// GDExtensionBool JavaScriptInstance::set(GDExtensionConstStringNamePtr p_name, GDExtensionConstVariantPtr p_variant) {
// const StringName *name = reinterpret_cast<const StringName *>(p_name);
// JSValue js_instance = binding.get_instance();
// std::string prop_name = name->to_ascii_buffer().get_string_from_ascii().ascii().get_data();
// JSPropertyDescriptor desc;
// Variant p_variant_cpy = Variant();
// godot::internal::gdextension_interface_variant_new_copy(p_variant_cpy._native_ptr(), p_variant);
// JSAtom prop_atom = JS_NewAtom(context.ctx, prop_name.c_str());
// bool has_prop = false;
// JSValue prototype = js_instance;
// while (!JS_IsUndefined(prototype) && !JS_IsNull(prototype)) {
// 	has_prop = JS_GetOwnProperty(context.ctx, &desc, prototype, prop_atom);
// 	if (has_prop) {
// 		Variant p_variant_cpy = Variant();
// 		godot::internal::gdextension_interface_variant_new_copy(p_variant_cpy._native_ptr(), p_variant);
// 		Variant::Type type = p_variant_cpy.get_type();
// 		JSValue var = get_jsvalue_from_type(type, p_variant_cpy);
// 		JSValue state = JS_Call(context.ctx, desc.setter, js_instance, 1, &var);
// 		return true;
// 	}
// 	prototype = JS_GetPrototype(context.ctx, prototype);
// }
// return false;
// }

// GDExtensionBool JavaScriptInstance::get(GDExtensionConstStringNamePtr p_name, GDExtensionVariantPtr r_ret) {
// JSValue js_instance = binding.get_instance();
// const StringName *name = reinterpret_cast<const StringName *>(p_name);
// std::string prop_name = name->to_ascii_buffer().get_string_from_ascii().ascii().get_data();
// JSValue prop = JS_GetPropertyStr(context.ctx, js_instance, prop_name.c_str());
// if (!qjs::is_exception(context.ctx, prop) && !JS_IsUndefined(prop)) {
// 	JSValue opaque = JS_GetPropertyStr(context.ctx, prop, "opaque");
// 	JSPropertyEnum *props = nullptr;
// 	uint32_t len;
// 	std::string error = "Error getting " + prop_name + "'s opaque property";
// 	ERR_FAIL_COND_V_EDMSG(JS_GetOwnPropertyNames(context.ctx, &props, &len, opaque, JS_GPN_SYMBOL_MASK) < 0, false, error.c_str());
// 	for (uint32_t i = 0; i < len; i++) {
// 		JSAtom prop = props[i].atom;
// 		const char *c_prop = JS_AtomToCString(context.ctx, prop);
// 		if (strcmp(c_prop, "OpaqueType") == 0) {
// 			uint8_t *src_opaque = qjs::get_typed_array_buf(context.ctx, opaque);
// 			godot::internal::gdextension_interface_variant_new_copy(r_ret, src_opaque);
// 			return true;
// 		}
// 	}
// }
// return false;
// }

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

// GDExtensionObjectPtr godot::JavaScriptInstance::get_owner_func() {
// 	return p_godot_object->_owner;
// }

// GDExtensionObjectPtr godot::JavaScriptInstance::get_script() {
// 	return script;
// }

// GDExtensionScriptLanguagePtr godot::JavaScriptInstance::get_language() {
// 	return JavaScriptLanguage::get_singleton();
// }
