#include "support/instance_binding.hpp"

namespace godot {
namespace internal {

GDExtensionInstanceBindingCallbacks callbacks = {
	// create
	[](void *p_token, void *p_instance) -> void * {
		return new GodotInstanceBinding(*(JSValue *)p_instance);
	},
	// free
	[](void *p_token, void *p_instance, void *p_binding) -> void {
		(reinterpret_cast<GodotInstanceBinding *>(p_binding))->free();
	},
	// reference
	[](void *p_token, void *p_binding, GDExtensionBool p_reference) -> GDExtensionBool {
		GodotInstanceBinding *binding = reinterpret_cast<GodotInstanceBinding *>(p_binding);
		JSValue count_func = JS_GetPropertyStr(context.ctx, binding->get_instance(), "get_reference_count");
		int count = qjs::js_traits<int>::unwrap(context.ctx, JS_Call(context.ctx, count_func, binding->get_instance(), 0, NULL));
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
} //namespace internal
} // namespace godot
