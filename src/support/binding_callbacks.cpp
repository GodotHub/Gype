#include "support/binding_callbacks.hpp"
#include "quickjs/env.h"
#include "quickjs/quickjs.h"
#include "support/instance_binding.hpp"

namespace godot {

namespace internal {
const GDExtensionInstanceBindingCallbacks _js_callbacks = {
	// create
	[](void *p_token, void *p_instance) -> void * {
		GodotInstanceBinding *binding = new GodotInstanceBinding(reinterpret_cast<Object *>(p_instance));
		return binding;
	},
	// free
	[](void *p_token, void *p_instance, void *p_binding) -> void {
		(reinterpret_cast<GodotInstanceBinding *>(p_binding))->~GodotInstanceBinding();
	},
	// reference
	[](void *p_token, void *p_binding, GDExtensionBool p_reference) -> GDExtensionBool {
		GodotInstanceBinding *binding = reinterpret_cast<GodotInstanceBinding *>(p_binding);
		return true;
		// GodotInstanceBinding *binding = reinterpret_cast<GodotInstanceBinding *>(p_binding);
		// if (JS_IsUndefined(binding->get_instance()))
		// 	return true;
		// JSValue count_func = JS_GetPropertyStr(ctx, binding->get_instance(), "get_reference_count");
		// JSValue js_count = JS_Call(ctx, count_func, binding->get_instance(), 0, NULL);
		// int64_t count;
		// JS_ToInt64(ctx, &count, js_count);
		// if (count == 0) {
		// 	binding->~GodotInstanceBinding();
		// 	return true;
		// }
		// if (p_reference) {
		// 	binding->dup();
		// 	return false;
		// } else {
		// 	binding->free();
		// 	return false;
		// }
	}
};
} //namespace internal
} // namespace godot
