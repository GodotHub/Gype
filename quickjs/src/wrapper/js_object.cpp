#include "quickjs/wrapper/js_object.h"

godot::JSObject::JSObject(JSContext *ctx, JSValue instance) {
	this->ctx = ctx;
	this->instance = instance;
	JS_DupValue(ctx, instance);
}