#ifndef __INSTANCE_BINDING_H__
#define __INSTANCE_BINDING_H__

#include "quickjs/quickjs.h"
#include <gdextension_interface.h>

namespace godot {

class Object;

class GodotInstanceBinding {
	Object *obj;
	JSContext *ctx;
	JSValue instance;

	friend class JavaScriptInstance;

public:
	GodotInstanceBinding(Object *obj) {
		this->obj = obj;
		this->instance = JS_UNDEFINED;
		this->ctx = nullptr;
	};
	~GodotInstanceBinding();

	void free() {
		if (!JS_IsUndefined(instance))
			JS_FreeValue(ctx, instance);
	}

	void dup() {
		if (!JS_IsUndefined(instance))
			JS_DupValue(ctx, instance);
	}

	Object *get_obj() {
		return obj;
	}

	JSValue get_instance() {
		return instance;
	}
};

} //namespace godot

#endif // __INSTANCE_BINDING_H__