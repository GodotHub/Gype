#pragma once

#include "quickjs/env.h"
#include <godot_cpp/godot.hpp>

namespace JSGodot {

class JSGodotInstanceBinding {
	JSValue *p_instance;

public:
	JSGodotInstanceBinding(JSValue *p_instance) :
			p_instance(p_instance) {
			};

	void free() {
		JS_FreeValue(context.ctx, *p_instance);
	}

	void dup() {
		JS_DupValue(context.ctx, *p_instance);
	}

	JSValue *get_instance() {
		return p_instance;
	}
};

namespace internal {

static GDExtensionInstanceBindingCallbacks callbacks = {
	// create
	[](void *p_token, void *p_instance) -> void * {
		return new JSGodotInstanceBinding((JSValue *)p_instance);
	},
	// free
	[](void *p_token, void *p_instance, void *p_binding) -> void {
		(reinterpret_cast<JSGodotInstanceBinding *>(p_binding))->free();
	},
	// reference
	[](void *p_token, void *p_binding, GDExtensionBool p_reference) -> GDExtensionBool {
		JSGodotInstanceBinding *binding = reinterpret_cast<JSGodotInstanceBinding *>(p_binding);
		JSValue count_func = JS_GetPropertyStr(context.ctx, *binding->get_instance(), "get_reference_count");
		int count = qjs::js_traits<int>::unwrap(context.ctx, JS_Call(context.ctx, count_func, *binding->get_instance(), 0, NULL));
		if (count == 0) {
			binding->free();
			free(binding);
			return true;
		}
		if (p_reference) {
			binding->dup();
			return false;
		} else {
			binding->free();
			return false;
		}
	}
};
} // namespace internal

} // namespace JSGodot
