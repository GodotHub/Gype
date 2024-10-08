
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/input_event_gesture.hpp>
#include <godot_cpp/classes/input_event_pan_gesture.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void input_event_pan_gesture_class_finalizer(JSRuntime *rt, JSValue val) {
	InputEventPanGesture *input_event_pan_gesture = static_cast<InputEventPanGesture *>(JS_GetOpaque(val, InputEventPanGesture::__class_id));
	if (input_event_pan_gesture)
		InputEventPanGesture::free(nullptr, input_event_pan_gesture);
}

static JSClassDef input_event_pan_gesture_class_def = {
	"InputEventPanGesture",
	.finalizer = input_event_pan_gesture_class_finalizer
};

static JSValue input_event_pan_gesture_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	InputEventPanGesture *input_event_pan_gesture_class;
	JSValue obj = JS_NewObjectClass(ctx, InputEventPanGesture::__class_id);
	if (JS_IsException(obj))
		return obj;
	input_event_pan_gesture_class = memnew(InputEventPanGesture);
	if (!input_event_pan_gesture_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, input_event_pan_gesture_class);
	return obj;
}
static JSValue input_event_pan_gesture_class_set_delta(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&InputEventPanGesture::set_delta, InputEventPanGesture::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue input_event_pan_gesture_class_get_delta(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&InputEventPanGesture::get_delta, InputEventPanGesture::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry input_event_pan_gesture_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_delta", 1, &input_event_pan_gesture_class_set_delta),
	JS_CFUNC_DEF("get_delta", 0, &input_event_pan_gesture_class_get_delta),
};

static int js_input_event_pan_gesture_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&InputEventPanGesture::__class_id);
	classes["InputEventPanGesture"] = InputEventPanGesture::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), InputEventPanGesture::__class_id, &input_event_pan_gesture_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, InputEventGesture::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, InputEventPanGesture::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, input_event_pan_gesture_class_proto_funcs, _countof(input_event_pan_gesture_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, input_event_pan_gesture_class_constructor, "InputEventPanGesture", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "InputEventPanGesture", ctor);

	return 0;
}

JSModuleDef *_js_init_input_event_pan_gesture_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_input_event_pan_gesture_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "InputEventPanGesture");
	return m;
}

JSModuleDef *js_init_input_event_pan_gesture_module(JSContext *ctx) {
	return _js_init_input_event_pan_gesture_module(ctx, "godot/classes/input_event_pan_gesture");
}

void register_input_event_pan_gesture() {
	js_init_input_event_pan_gesture_module(ctx);
}