
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/input_event_joypad_motion.hpp>
#include <godot_cpp/classes/input_event.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void input_event_joypad_motion_class_finalizer(JSRuntime *rt, JSValue val) {
	InputEventJoypadMotion *input_event_joypad_motion = static_cast<InputEventJoypadMotion *>(JS_GetOpaque(val, InputEventJoypadMotion::__class_id));
	if (input_event_joypad_motion)
		InputEventJoypadMotion::free(nullptr, input_event_joypad_motion);
}

static JSClassDef input_event_joypad_motion_class_def = {
	"InputEventJoypadMotion",
	.finalizer = input_event_joypad_motion_class_finalizer
};

static JSValue input_event_joypad_motion_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	InputEventJoypadMotion *input_event_joypad_motion_class;
	JSValue obj = JS_NewObjectClass(ctx, InputEventJoypadMotion::__class_id);
	if (JS_IsException(obj))
		return obj;
	input_event_joypad_motion_class = memnew(InputEventJoypadMotion);
	if (!input_event_joypad_motion_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, input_event_joypad_motion_class);
	return obj;
}
static JSValue input_event_joypad_motion_class_set_axis(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&InputEventJoypadMotion::set_axis, InputEventJoypadMotion::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue input_event_joypad_motion_class_get_axis(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&InputEventJoypadMotion::get_axis, InputEventJoypadMotion::__class_id, ctx, this_val, argv);
};
static JSValue input_event_joypad_motion_class_set_axis_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&InputEventJoypadMotion::set_axis_value, InputEventJoypadMotion::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue input_event_joypad_motion_class_get_axis_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&InputEventJoypadMotion::get_axis_value, InputEventJoypadMotion::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry input_event_joypad_motion_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_axis", 1, &input_event_joypad_motion_class_set_axis),
	JS_CFUNC_DEF("get_axis", 0, &input_event_joypad_motion_class_get_axis),
	JS_CFUNC_DEF("set_axis_value", 1, &input_event_joypad_motion_class_set_axis_value),
	JS_CFUNC_DEF("get_axis_value", 0, &input_event_joypad_motion_class_get_axis_value),
};

static int js_input_event_joypad_motion_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&InputEventJoypadMotion::__class_id);
	classes["InputEventJoypadMotion"] = InputEventJoypadMotion::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), InputEventJoypadMotion::__class_id, &input_event_joypad_motion_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, InputEvent::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, InputEventJoypadMotion::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, input_event_joypad_motion_class_proto_funcs, _countof(input_event_joypad_motion_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, input_event_joypad_motion_class_constructor, "InputEventJoypadMotion", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "InputEventJoypadMotion", ctor);

	return 0;
}

JSModuleDef *_js_init_input_event_joypad_motion_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_input_event_joypad_motion_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "InputEventJoypadMotion");
	return m;
}

JSModuleDef *js_init_input_event_joypad_motion_module(JSContext *ctx) {
	return _js_init_input_event_joypad_motion_module(ctx, "godot/classes/input_event_joypad_motion");
}

void register_input_event_joypad_motion() {
	js_init_input_event_joypad_motion_module(ctx);
}