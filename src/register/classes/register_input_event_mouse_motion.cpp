
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/input_event_mouse.hpp>
#include <godot_cpp/classes/input_event_mouse_motion.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void input_event_mouse_motion_class_finalizer(JSRuntime *rt, JSValue val) {
	InputEventMouseMotion *input_event_mouse_motion = static_cast<InputEventMouseMotion *>(JS_GetOpaque(val, InputEventMouseMotion::__class_id));
	if (input_event_mouse_motion)
		InputEventMouseMotion::free(nullptr, input_event_mouse_motion);
}

static JSClassDef input_event_mouse_motion_class_def = {
	"InputEventMouseMotion",
	.finalizer = input_event_mouse_motion_class_finalizer
};

static JSValue input_event_mouse_motion_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	InputEventMouseMotion *input_event_mouse_motion_class;
	JSValue obj = JS_NewObjectClass(ctx, InputEventMouseMotion::__class_id);
	if (JS_IsException(obj))
		return obj;
	input_event_mouse_motion_class = memnew(InputEventMouseMotion);
	if (!input_event_mouse_motion_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, input_event_mouse_motion_class);
	return obj;
}
static JSValue input_event_mouse_motion_class_set_tilt(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&InputEventMouseMotion::set_tilt, InputEventMouseMotion::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue input_event_mouse_motion_class_get_tilt(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&InputEventMouseMotion::get_tilt, InputEventMouseMotion::__class_id, ctx, this_val, argv);
};
static JSValue input_event_mouse_motion_class_set_pressure(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&InputEventMouseMotion::set_pressure, InputEventMouseMotion::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue input_event_mouse_motion_class_get_pressure(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&InputEventMouseMotion::get_pressure, InputEventMouseMotion::__class_id, ctx, this_val, argv);
};
static JSValue input_event_mouse_motion_class_set_pen_inverted(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&InputEventMouseMotion::set_pen_inverted, InputEventMouseMotion::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue input_event_mouse_motion_class_get_pen_inverted(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&InputEventMouseMotion::get_pen_inverted, InputEventMouseMotion::__class_id, ctx, this_val, argv);
};
static JSValue input_event_mouse_motion_class_set_relative(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&InputEventMouseMotion::set_relative, InputEventMouseMotion::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue input_event_mouse_motion_class_get_relative(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&InputEventMouseMotion::get_relative, InputEventMouseMotion::__class_id, ctx, this_val, argv);
};
static JSValue input_event_mouse_motion_class_set_screen_relative(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&InputEventMouseMotion::set_screen_relative, InputEventMouseMotion::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue input_event_mouse_motion_class_get_screen_relative(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&InputEventMouseMotion::get_screen_relative, InputEventMouseMotion::__class_id, ctx, this_val, argv);
};
static JSValue input_event_mouse_motion_class_set_velocity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&InputEventMouseMotion::set_velocity, InputEventMouseMotion::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue input_event_mouse_motion_class_get_velocity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&InputEventMouseMotion::get_velocity, InputEventMouseMotion::__class_id, ctx, this_val, argv);
};
static JSValue input_event_mouse_motion_class_set_screen_velocity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&InputEventMouseMotion::set_screen_velocity, InputEventMouseMotion::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue input_event_mouse_motion_class_get_screen_velocity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&InputEventMouseMotion::get_screen_velocity, InputEventMouseMotion::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry input_event_mouse_motion_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_tilt", 1, &input_event_mouse_motion_class_set_tilt),
	JS_CFUNC_DEF("get_tilt", 0, &input_event_mouse_motion_class_get_tilt),
	JS_CFUNC_DEF("set_pressure", 1, &input_event_mouse_motion_class_set_pressure),
	JS_CFUNC_DEF("get_pressure", 0, &input_event_mouse_motion_class_get_pressure),
	JS_CFUNC_DEF("set_pen_inverted", 1, &input_event_mouse_motion_class_set_pen_inverted),
	JS_CFUNC_DEF("get_pen_inverted", 0, &input_event_mouse_motion_class_get_pen_inverted),
	JS_CFUNC_DEF("set_relative", 1, &input_event_mouse_motion_class_set_relative),
	JS_CFUNC_DEF("get_relative", 0, &input_event_mouse_motion_class_get_relative),
	JS_CFUNC_DEF("set_screen_relative", 1, &input_event_mouse_motion_class_set_screen_relative),
	JS_CFUNC_DEF("get_screen_relative", 0, &input_event_mouse_motion_class_get_screen_relative),
	JS_CFUNC_DEF("set_velocity", 1, &input_event_mouse_motion_class_set_velocity),
	JS_CFUNC_DEF("get_velocity", 0, &input_event_mouse_motion_class_get_velocity),
	JS_CFUNC_DEF("set_screen_velocity", 1, &input_event_mouse_motion_class_set_screen_velocity),
	JS_CFUNC_DEF("get_screen_velocity", 0, &input_event_mouse_motion_class_get_screen_velocity),
};

static int js_input_event_mouse_motion_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&InputEventMouseMotion::__class_id);
	classes["InputEventMouseMotion"] = InputEventMouseMotion::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), InputEventMouseMotion::__class_id, &input_event_mouse_motion_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, InputEventMouse::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, InputEventMouseMotion::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, input_event_mouse_motion_class_proto_funcs, _countof(input_event_mouse_motion_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, input_event_mouse_motion_class_constructor, "InputEventMouseMotion", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "InputEventMouseMotion", ctor);

	return 0;
}

JSModuleDef *_js_init_input_event_mouse_motion_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_input_event_mouse_motion_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "InputEventMouseMotion");
	return m;
}

JSModuleDef *js_init_input_event_mouse_motion_module(JSContext *ctx) {
	return _js_init_input_event_mouse_motion_module(ctx, "godot/classes/input_event_mouse_motion");
}

void register_input_event_mouse_motion() {
	js_init_input_event_mouse_motion_module(ctx);
}