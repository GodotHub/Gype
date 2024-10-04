#ifndef __JS_OBJECT_H__
#define __JS_OBJECT_H__

#include "quickjs/quickjs.h"
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/variant/dictionary.hpp>

namespace godot {
class JSObject : public Object {
	GDCLASS(JSObject, Object);

	JSContext *ctx;
	JSValue instance;
	Dictionary property_dict;

protected:
	static void _bind_methods() {}

public:
	Dictionary get_property_dict() {
		return property_dict;
	}

	JSValue get_instance() {
		return instance;
	}

	JSObject() {};
	JSObject(JSContext *ctx, JSValue instance);

	~JSObject() {
		JS_FreeValue(ctx, instance);
	}
};

} // namespace godot
#endif // __JS_OBJECT_H__