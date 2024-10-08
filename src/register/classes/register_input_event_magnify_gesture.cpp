
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/input_event_gesture.hpp>
#include <godot_cpp/classes/input_event_magnify_gesture.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void input_event_magnify_gesture_class_finalizer(JSRuntime *rt, JSValue val) {
	InputEventMagnifyGesture *input_event_magnify_gesture = static_cast<InputEventMagnifyGesture *>(JS_GetOpaque(val, InputEventMagnifyGesture::__class_id));
	if (input_event_magnify_gesture)
		InputEventMagnifyGesture::free(nullptr, input_event_magnify_gesture);
}

static JSClassDef input_event_magnify_gesture_class_def = {
	"InputEventMagnifyGesture",
	.finalizer = input_event_magnify_gesture_class_finalizer
};

static JSValue input_event_magnify_gesture_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	InputEventMagnifyGesture *input_event_magnify_gesture_class;
	JSValue obj = JS_NewObjectClass(ctx, InputEventMagnifyGesture::__class_id);
	if (JS_IsException(obj))
		return obj;
	input_event_magnify_gesture_class = memnew(InputEventMagnifyGesture);
	if (!input_event_magnify_gesture_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, input_event_magnify_gesture_class);
	return obj;
}
static JSValue input_event_magnify_gesture_class_set_factor(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&InputEventMagnifyGesture::set_factor, InputEventMagnifyGesture::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue input_event_magnify_gesture_class_get_factor(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&InputEventMagnifyGesture::get_factor, InputEventMagnifyGesture::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry input_event_magnify_gesture_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_factor", 1, &input_event_magnify_gesture_class_set_factor),
	JS_CFUNC_DEF("get_factor", 0, &input_event_magnify_gesture_class_get_factor),
};

static int js_input_event_magnify_gesture_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&InputEventMagnifyGesture::__class_id);
	classes["InputEventMagnifyGesture"] = InputEventMagnifyGesture::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), InputEventMagnifyGesture::__class_id, &input_event_magnify_gesture_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, InputEventGesture::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, InputEventMagnifyGesture::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, input_event_magnify_gesture_class_proto_funcs, _countof(input_event_magnify_gesture_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, input_event_magnify_gesture_class_constructor, "InputEventMagnifyGesture", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "InputEventMagnifyGesture", ctor);

	return 0;
}

JSModuleDef *_js_init_input_event_magnify_gesture_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_input_event_magnify_gesture_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "InputEventMagnifyGesture");
	return m;
}

JSModuleDef *js_init_input_event_magnify_gesture_module(JSContext *ctx) {
	return _js_init_input_event_magnify_gesture_module(ctx, "godot/classes/input_event_magnify_gesture");
}

void register_input_event_magnify_gesture() {
	js_init_input_event_magnify_gesture_module(ctx);
}