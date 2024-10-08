
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/input_event_screen_touch.hpp>
#include <godot_cpp/classes/input_event_from_window.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void input_event_screen_touch_class_finalizer(JSRuntime *rt, JSValue val) {
	InputEventScreenTouch *input_event_screen_touch = static_cast<InputEventScreenTouch *>(JS_GetOpaque(val, InputEventScreenTouch::__class_id));
	if (input_event_screen_touch)
		InputEventScreenTouch::free(nullptr, input_event_screen_touch);
}

static JSClassDef input_event_screen_touch_class_def = {
	"InputEventScreenTouch",
	.finalizer = input_event_screen_touch_class_finalizer
};

static JSValue input_event_screen_touch_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	InputEventScreenTouch *input_event_screen_touch_class;
	JSValue obj = JS_NewObjectClass(ctx, InputEventScreenTouch::__class_id);
	if (JS_IsException(obj))
		return obj;
	input_event_screen_touch_class = memnew(InputEventScreenTouch);
	if (!input_event_screen_touch_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, input_event_screen_touch_class);
	return obj;
}
static JSValue input_event_screen_touch_class_set_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&InputEventScreenTouch::set_index, InputEventScreenTouch::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue input_event_screen_touch_class_get_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&InputEventScreenTouch::get_index, InputEventScreenTouch::__class_id, ctx, this_val, argv);
};
static JSValue input_event_screen_touch_class_set_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&InputEventScreenTouch::set_position, InputEventScreenTouch::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue input_event_screen_touch_class_get_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&InputEventScreenTouch::get_position, InputEventScreenTouch::__class_id, ctx, this_val, argv);
};
static JSValue input_event_screen_touch_class_set_pressed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&InputEventScreenTouch::set_pressed, InputEventScreenTouch::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue input_event_screen_touch_class_set_canceled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&InputEventScreenTouch::set_canceled, InputEventScreenTouch::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue input_event_screen_touch_class_set_double_tap(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&InputEventScreenTouch::set_double_tap, InputEventScreenTouch::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue input_event_screen_touch_class_is_double_tap(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&InputEventScreenTouch::is_double_tap, InputEventScreenTouch::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry input_event_screen_touch_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_index", 1, &input_event_screen_touch_class_set_index),
	JS_CFUNC_DEF("get_index", 0, &input_event_screen_touch_class_get_index),
	JS_CFUNC_DEF("set_position", 1, &input_event_screen_touch_class_set_position),
	JS_CFUNC_DEF("get_position", 0, &input_event_screen_touch_class_get_position),
	JS_CFUNC_DEF("set_pressed", 1, &input_event_screen_touch_class_set_pressed),
	JS_CFUNC_DEF("set_canceled", 1, &input_event_screen_touch_class_set_canceled),
	JS_CFUNC_DEF("set_double_tap", 1, &input_event_screen_touch_class_set_double_tap),
	JS_CFUNC_DEF("is_double_tap", 0, &input_event_screen_touch_class_is_double_tap),
};

static int js_input_event_screen_touch_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&InputEventScreenTouch::__class_id);
	classes["InputEventScreenTouch"] = InputEventScreenTouch::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), InputEventScreenTouch::__class_id, &input_event_screen_touch_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, InputEventFromWindow::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, InputEventScreenTouch::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, input_event_screen_touch_class_proto_funcs, _countof(input_event_screen_touch_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, input_event_screen_touch_class_constructor, "InputEventScreenTouch", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "InputEventScreenTouch", ctor);

	return 0;
}

JSModuleDef *_js_init_input_event_screen_touch_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_input_event_screen_touch_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "InputEventScreenTouch");
	return m;
}

JSModuleDef *js_init_input_event_screen_touch_module(JSContext *ctx) {
	return _js_init_input_event_screen_touch_module(ctx, "godot/classes/input_event_screen_touch");
}

void register_input_event_screen_touch() {
	js_init_input_event_screen_touch_module(ctx);
}