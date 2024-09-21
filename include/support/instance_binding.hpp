#ifndef __INSTANCE_BINDING_H__
#define __INSTANCE_BINDING_H__

#include "quickjs/env.h"
#include <gdextension_interface.h>
#include <godot_cpp/classes/object.hpp>

namespace godot {

class GodotInstanceBinding {
	JSValue p_instance;

public:
	GodotInstanceBinding(JSValue p_instance = JS_UNDEFINED) :
			p_instance(p_instance) {};

	void free() {
		JS_FreeValue(context.ctx, p_instance);
	}

	void dup() {
		JS_DupValue(context.ctx, p_instance);
	}

	JSValue get_instance() {
		return p_instance;
	}
};

namespace internal {

extern GDExtensionInstanceBindingCallbacks callbacks;
} // namespace internal

} //namespace godot

#endif // __INSTANCE_BINDING_H__