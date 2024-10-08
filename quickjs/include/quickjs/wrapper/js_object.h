#ifndef __JS_OBJECT_H__
#define __JS_OBJECT_H__

#include "quickjs/quickjs.h"
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/variant/dictionary.hpp>

namespace godot {
class JSObject : public Object {
	GDCLASS(JSObject, Object);

	JSContext *ctx = nullptr;
	JSValue instance = JS_UNDEFINED;

protected:
	static void _bind_methods() {}

public:
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