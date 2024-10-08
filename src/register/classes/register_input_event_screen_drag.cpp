
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/input_event_from_window.hpp>
#include <godot_cpp/classes/input_event_screen_drag.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void input_event_screen_drag_class_finalizer(JSRuntime *rt, JSValue val) {
	InputEventScreenDrag *input_event_screen_drag = static_cast<InputEventScreenDrag *>(JS_GetOpaque(val, InputEventScreenDrag::__class_id));
	if (input_event_screen_drag)
		InputEventScreenDrag::free(nullptr, input_event_screen_drag);
}

static JSClassDef input_event_screen_drag_class_def = {
	"InputEventScreenDrag",
	.finalizer = input_event_screen_drag_class_finalizer
};

static JSValue input_event_screen_drag_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	InputEventScreenDrag *input_event_screen_drag_class;
	JSValue obj = JS_NewObjectClass(ctx, InputEventScreenDrag::__class_id);
	if (JS_IsException(obj))
		return obj;
	input_event_screen_drag_class = memnew(InputEventScreenDrag);
	if (!input_event_screen_drag_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, input_event_screen_drag_class);
	return obj;
}
static JSValue input_event_screen_drag_class_set_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&InputEventScreenDrag::set_index, InputEventScreenDrag::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue input_event_screen_drag_class_get_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&InputEventScreenDrag::get_index, InputEventScreenDrag::__class_id, ctx, this_val, argv);
};
static JSValue input_event_screen_drag_class_set_tilt(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&InputEventScreenDrag::set_tilt, InputEventScreenDrag::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue input_event_screen_drag_class_get_tilt(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&InputEventScreenDrag::get_tilt, InputEventScreenDrag::__class_id, ctx, this_val, argv);
};
static JSValue input_event_screen_drag_class_set_pressure(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&InputEventScreenDrag::set_pressure, InputEventScreenDrag::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue input_event_screen_drag_class_get_pressure(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&InputEventScreenDrag::get_pressure, InputEventScreenDrag::__class_id, ctx, this_val, argv);
};
static JSValue input_event_screen_drag_class_set_pen_inverted(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&InputEventScreenDrag::set_pen_inverted, InputEventScreenDrag::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue input_event_screen_drag_class_get_pen_inverted(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&InputEventScreenDrag::get_pen_inverted, InputEventScreenDrag::__class_id, ctx, this_val, argv);
};
static JSValue input_event_screen_drag_class_set_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&InputEventScreenDrag::set_position, InputEventScreenDrag::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue input_event_screen_drag_class_get_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&InputEventScreenDrag::get_position, InputEventScreenDrag::__class_id, ctx, this_val, argv);
};
static JSValue input_event_screen_drag_class_set_relative(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&InputEventScreenDrag::set_relative, InputEventScreenDrag::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue input_event_screen_drag_class_get_relative(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&InputEventScreenDrag::get_relative, InputEventScreenDrag::__class_id, ctx, this_val, argv);
};
static JSValue input_event_screen_drag_class_set_screen_relative(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&InputEventScreenDrag::set_screen_relative, InputEventScreenDrag::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue input_event_screen_drag_class_get_screen_relative(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&InputEventScreenDrag::get_screen_relative, InputEventScreenDrag::__class_id, ctx, this_val, argv);
};
static JSValue input_event_screen_drag_class_set_velocity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&InputEventScreenDrag::set_velocity, InputEventScreenDrag::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue input_event_screen_drag_class_get_velocity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&InputEventScreenDrag::get_velocity, InputEventScreenDrag::__class_id, ctx, this_val, argv);
};
static JSValue input_event_screen_drag_class_set_screen_velocity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&InputEventScreenDrag::set_screen_velocity, InputEventScreenDrag::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue input_event_screen_drag_class_get_screen_velocity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&InputEventScreenDrag::get_screen_velocity, InputEventScreenDrag::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry input_event_screen_drag_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_index", 1, &input_event_screen_drag_class_set_index),
	JS_CFUNC_DEF("get_index", 0, &input_event_screen_drag_class_get_index),
	JS_CFUNC_DEF("set_tilt", 1, &input_event_screen_drag_class_set_tilt),
	JS_CFUNC_DEF("get_tilt", 0, &input_event_screen_drag_class_get_tilt),
	JS_CFUNC_DEF("set_pressure", 1, &input_event_screen_drag_class_set_pressure),
	JS_CFUNC_DEF("get_pressure", 0, &input_event_screen_drag_class_get_pressure),
	JS_CFUNC_DEF("set_pen_inverted", 1, &input_event_screen_drag_class_set_pen_inverted),
	JS_CFUNC_DEF("get_pen_inverted", 0, &input_event_screen_drag_class_get_pen_inverted),
	JS_CFUNC_DEF("set_position", 1, &input_event_screen_drag_class_set_position),
	JS_CFUNC_DEF("get_position", 0, &input_event_screen_drag_class_get_position),
	JS_CFUNC_DEF("set_relative", 1, &input_event_screen_drag_class_set_relative),
	JS_CFUNC_DEF("get_relative", 0, &input_event_screen_drag_class_get_relative),
	JS_CFUNC_DEF("set_screen_relative", 1, &input_event_screen_drag_class_set_screen_relative),
	JS_CFUNC_DEF("get_screen_relative", 0, &input_event_screen_drag_class_get_screen_relative),
	JS_CFUNC_DEF("set_velocity", 1, &input_event_screen_drag_class_set_velocity),
	JS_CFUNC_DEF("get_velocity", 0, &input_event_screen_drag_class_get_velocity),
	JS_CFUNC_DEF("set_screen_velocity", 1, &input_event_screen_drag_class_set_screen_velocity),
	JS_CFUNC_DEF("get_screen_velocity", 0, &input_event_screen_drag_class_get_screen_velocity),
};

static int js_input_event_screen_drag_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&InputEventScreenDrag::__class_id);
	classes["InputEventScreenDrag"] = InputEventScreenDrag::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), InputEventScreenDrag::__class_id, &input_event_screen_drag_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, InputEventFromWindow::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, InputEventScreenDrag::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, input_event_screen_drag_class_proto_funcs, _countof(input_event_screen_drag_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, input_event_screen_drag_class_constructor, "InputEventScreenDrag", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "InputEventScreenDrag", ctor);

	return 0;
}

JSModuleDef *_js_init_input_event_screen_drag_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_input_event_screen_drag_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "InputEventScreenDrag");
	return m;
}

JSModuleDef *js_init_input_event_screen_drag_module(JSContext *ctx) {
	return _js_init_input_event_screen_drag_module(ctx, "godot/classes/input_event_screen_drag");
}

void register_input_event_screen_drag() {
	js_init_input_event_screen_drag_module(ctx);
}