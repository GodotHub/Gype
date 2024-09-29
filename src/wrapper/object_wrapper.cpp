#include "wrapper/object_wrapper.h"
#include "wrapper/js_object.h"
#include <godot_cpp/variant/variant.hpp>

struct ObjectWrapper {
	void *opaque;
};

ObjectWrapper *gd_new_object_wrapper(JSValue *val) {
	return new ObjectWrapper{ memnew(godot::JSObject(*val)) };
}