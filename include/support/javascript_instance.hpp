#pragma once

#include "quickjs/env.h"
#include "support/javascript.hpp"
#include <gdextension_interface.h>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/utility_functions.hpp>

using namespace godot;

class JavaScriptInstance {
	Object *p_godot_object;
	const JavaScript *script;
	JSValue js_instance;

public:
	GDExtensionBool set(GDExtensionConstStringNamePtr p_name, GDExtensionConstVariantPtr p_variant);
	GDExtensionBool get(GDExtensionConstStringNamePtr p_name, GDExtensionVariantPtr r_ret);

	JavaScriptInstance(Object *p_godot_object, const JavaScript *script) :
			p_godot_object(p_godot_object), script(script) {
		String code = script->_get_source_code();
		std::string origin_code = code.ascii().get_data();
		js_instance = context.eval(origin_code, "<input>", JS_EVAL_TYPE_MODULE | JS_EVAL_FLAG_COMPILE_ONLY);
		if (!JS_IsException(js_instance)) {
			if (js_instance.tag == JS_TAG_MODULE) {
				// JSValue global_obj = JS_GetGlobalObject(context.ctx);
				JSValue np = JS_GetModuleNamespace(context.ctx, (JSModuleDef *)JS_VALUE_GET_PTR(js_instance));
				JSValue exports = JS_GetPropertyStr(context.ctx, np, "MyNode");
				printf("");
			}
		}
	};
};