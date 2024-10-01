#ifndef __JS_OBJECT_H__
#define __JS_OBJECT_H__

#include "quickjs/quickjs.h"
#include "utils/env.h"
#include <godot_cpp/classes/object.hpp>

namespace godot {
class JSObject : public Object {
	GDCLASS(JSObject, Object);

	JSValue val;

protected:
	static void _bind_methods() {}

public:
	JSObject() {};
	JSObject(JSValue val) :
			val(val) {};
	~JSObject() {
		JS_FreeValue(ctx, val);
	}
};

} // namespace godot
#endif // __JS_OBJECT_H__