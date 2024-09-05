#include "support/javascript_instance.hpp"
#include "support/javascript.hpp"
#include <godot_cpp/classes/resource_loader.hpp>
#include <godot_cpp/core/error_macros.hpp>
#include <godot_cpp/variant/utility_functions.hpp>
#include <godot_cpp/variant/variant_size.hpp>

using namespace godot;

JavaScriptInstance::JavaScriptInstance(Object *p_godot_object, const JavaScript *script) {
	this->p_godot_object = p_godot_object;
	this->script = script;
	std::string path = std::string(script->origin_path.ascii());
	printf("%s\n", path.c_str());
	String code = script->_get_source_code();
	std::string code_str = std::string(code.ascii());
	JSValue ret = context.eval(code_str, path.c_str(), JS_EVAL_TYPE_MODULE | JS_EVAL_FLAG_COMPILE_ONLY);
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
			if (JS_IsObject(ret)) {
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
						if (JS_IsException(js_instance)) {
							JSValue exp = JS_GetException(context.ctx);
							JSValue message = JS_GetPropertyStr(context.ctx, exp, "message");
							JSValue stack = JS_GetPropertyStr(context.ctx, exp, "stack");
							const char *mssage_str = JS_ToCString(context.ctx, message);
							const char *stack_str = JS_ToCString(context.ctx, stack);
							printf("%s\n", mssage_str);
							printf("%s\n", stack_str);
							JS_FreeValue(context.ctx, exp);
							JS_FreeValue(context.ctx, message);
							JS_FreeValue(context.ctx, stack);
							JS_FreeCString(context.ctx, mssage_str);
							JS_FreeCString(context.ctx, stack_str);
						}
						ERR_FAIL_COND_EDMSG(JS_IsUndefined(js_instance) || JS_IsException(js_instance), "Error mounting the script");
						binding = GodotInstanceBinding(js_instance);
						godot::internal::gdextension_interface_object_get_instance_binding(p_godot_object->_owner, godot::internal::token, &godot::internal::callbacks);
					}
				}
			}
		}
	} else {
		JSValue message = JS_GetPropertyStr(context.ctx, ret, "message");
		const char *m = JS_ToCString(context.ctx, message);
		printf("%s\n", m);
	}
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

JSValue JavaScriptInstance::get_jsvalue_from_type(Variant::Type type, const Variant *p_variant) {
	JSValue var;
	switch (type) {
		case Variant::Type::NIL: {
			return JS_UNDEFINED;
		} break;
		case Variant::Type::INT: {
			return JS_NewInt64(context.ctx, *p_variant);
		} break;
		case Variant::Type::FLOAT: {
			return JS_NewFloat64(context.ctx, *p_variant);
		} break;
		case Variant::Type::BOOL: {
			return JS_NewBool(context.ctx, *p_variant);
		} break;
		case Variant::Type::STRING: {
			String str = String(*p_variant);
			std::string std_str = std::string(str.ascii().get_data());
			return JS_NewString(context.ctx, std_str.c_str());
		} break;
		case Variant::Type::STRING_NAME: {
			String str = StringName(*p_variant);
			std::string std_str = std::string(str.ascii().get_data());
			return JS_NewString(context.ctx, std_str.c_str());
		} break;
		default: {
			return qjs::to_js_value(&context, (int)type, p_variant->_native_ptr(), qjs::variant_size((int)type));
		} break;
	}
}

GDExtensionBool JavaScriptInstance::set(GDExtensionConstStringNamePtr p_name, GDExtensionConstVariantPtr p_variant) {
	const StringName *name = reinterpret_cast<const StringName *>(p_name);
	JSValue js_instance = binding.get_instance();
	std::string prop_name = name->to_ascii_buffer().get_string_from_ascii().ascii().get_data();
	JSValue prop = JS_GetPropertyStr(context.ctx, js_instance, prop_name.c_str());
	if (!JS_IsUndefined(prop)) {
		Variant *p_variant_cp = memnew(Variant);
		godot::internal::gdextension_interface_variant_new_copy(p_variant_cp->_native_ptr(), reinterpret_cast<const Variant *>(p_variant)->_native_ptr());
		Variant::Type type = p_variant_cp->get_type();
		JSValue var = get_jsvalue_from_type(type, p_variant_cp);
		SET_JS_PROPERTY_WITH_MSG(prop_name.c_str(), var);
	} else {
		return false;
	}
}

GDExtensionBool JavaScriptInstance::get(GDExtensionConstStringNamePtr p_name, GDExtensionVariantPtr r_ret) {
	JSValue js_instance = binding.get_instance();
	const StringName *name = reinterpret_cast<const StringName *>(p_name);
	std::string prop_name = name->to_ascii_buffer().get_string_from_ascii().ascii().get_data();
	JSValue prop = JS_GetPropertyStr(context.ctx, js_instance, prop_name.c_str());
	JSAtom opaque_atom = JS_NewAtom(context.ctx, "opaque");
	if (!qjs::is_exception(context.ctx, prop) && !JS_IsUndefined(prop)) {
		Variant src = qjs::to_gd_value(context.ctx, prop);
		godot::internal::gdextension_interface_variant_new_copy(r_ret, src._native_ptr());
		return true;
	}
	return false;
}
