
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/input_event_from_window.hpp>
#include <godot_cpp/classes/input_event_with_modifiers.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void input_event_with_modifiers_class_finalizer(JSRuntime *rt, JSValue val) {
	InputEventWithModifiers *input_event_with_modifiers = static_cast<InputEventWithModifiers *>(JS_GetOpaque(val, InputEventWithModifiers::__class_id));
	if (input_event_with_modifiers)
		InputEventWithModifiers::free(nullptr, input_event_with_modifiers);
}

static JSClassDef input_event_with_modifiers_class_def = {
	"InputEventWithModifiers",
	.finalizer = input_event_with_modifiers_class_finalizer
};

static JSValue input_event_with_modifiers_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	InputEventWithModifiers *input_event_with_modifiers_class;
	JSValue obj = JS_NewObjectClass(ctx, InputEventWithModifiers::__class_id);
	if (JS_IsException(obj))
		return obj;
	input_event_with_modifiers_class = memnew(InputEventWithModifiers);
	if (!input_event_with_modifiers_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, input_event_with_modifiers_class);
	return obj;
}
static JSValue input_event_with_modifiers_class_set_command_or_control_autoremap(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&InputEventWithModifiers::set_command_or_control_autoremap, InputEventWithModifiers::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue input_event_with_modifiers_class_is_command_or_control_autoremap(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&InputEventWithModifiers::is_command_or_control_autoremap, InputEventWithModifiers::__class_id, ctx, this_val, argv);
};
static JSValue input_event_with_modifiers_class_is_command_or_control_pressed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&InputEventWithModifiers::is_command_or_control_pressed, InputEventWithModifiers::__class_id, ctx, this_val, argv);
};
static JSValue input_event_with_modifiers_class_set_alt_pressed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&InputEventWithModifiers::set_alt_pressed, InputEventWithModifiers::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue input_event_with_modifiers_class_is_alt_pressed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&InputEventWithModifiers::is_alt_pressed, InputEventWithModifiers::__class_id, ctx, this_val, argv);
};
static JSValue input_event_with_modifiers_class_set_shift_pressed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&InputEventWithModifiers::set_shift_pressed, InputEventWithModifiers::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue input_event_with_modifiers_class_is_shift_pressed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&InputEventWithModifiers::is_shift_pressed, InputEventWithModifiers::__class_id, ctx, this_val, argv);
};
static JSValue input_event_with_modifiers_class_set_ctrl_pressed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&InputEventWithModifiers::set_ctrl_pressed, InputEventWithModifiers::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue input_event_with_modifiers_class_is_ctrl_pressed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&InputEventWithModifiers::is_ctrl_pressed, InputEventWithModifiers::__class_id, ctx, this_val, argv);
};
static JSValue input_event_with_modifiers_class_set_meta_pressed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&InputEventWithModifiers::set_meta_pressed, InputEventWithModifiers::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue input_event_with_modifiers_class_is_meta_pressed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&InputEventWithModifiers::is_meta_pressed, InputEventWithModifiers::__class_id, ctx, this_val, argv);
};
static JSValue input_event_with_modifiers_class_get_modifiers_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&InputEventWithModifiers::get_modifiers_mask, InputEventWithModifiers::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry input_event_with_modifiers_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_command_or_control_autoremap", 1, &input_event_with_modifiers_class_set_command_or_control_autoremap),
	JS_CFUNC_DEF("is_command_or_control_autoremap", 0, &input_event_with_modifiers_class_is_command_or_control_autoremap),
	JS_CFUNC_DEF("is_command_or_control_pressed", 0, &input_event_with_modifiers_class_is_command_or_control_pressed),
	JS_CFUNC_DEF("set_alt_pressed", 1, &input_event_with_modifiers_class_set_alt_pressed),
	JS_CFUNC_DEF("is_alt_pressed", 0, &input_event_with_modifiers_class_is_alt_pressed),
	JS_CFUNC_DEF("set_shift_pressed", 1, &input_event_with_modifiers_class_set_shift_pressed),
	JS_CFUNC_DEF("is_shift_pressed", 0, &input_event_with_modifiers_class_is_shift_pressed),
	JS_CFUNC_DEF("set_ctrl_pressed", 1, &input_event_with_modifiers_class_set_ctrl_pressed),
	JS_CFUNC_DEF("is_ctrl_pressed", 0, &input_event_with_modifiers_class_is_ctrl_pressed),
	JS_CFUNC_DEF("set_meta_pressed", 1, &input_event_with_modifiers_class_set_meta_pressed),
	JS_CFUNC_DEF("is_meta_pressed", 0, &input_event_with_modifiers_class_is_meta_pressed),
	JS_CFUNC_DEF("get_modifiers_mask", 0, &input_event_with_modifiers_class_get_modifiers_mask),
};

static int js_input_event_with_modifiers_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&InputEventWithModifiers::__class_id);
	classes["InputEventWithModifiers"] = InputEventWithModifiers::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), InputEventWithModifiers::__class_id, &input_event_with_modifiers_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, InputEventFromWindow::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, InputEventWithModifiers::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, input_event_with_modifiers_class_proto_funcs, _countof(input_event_with_modifiers_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, input_event_with_modifiers_class_constructor, "InputEventWithModifiers", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "InputEventWithModifiers", ctor);

	return 0;
}

JSModuleDef *_js_init_input_event_with_modifiers_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_input_event_with_modifiers_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "InputEventWithModifiers");
	return m;
}

JSModuleDef *js_init_input_event_with_modifiers_module(JSContext *ctx) {
	return _js_init_input_event_with_modifiers_module(ctx, "godot/classes/input_event_with_modifiers");
}

void register_input_event_with_modifiers() {
	js_init_input_event_with_modifiers_module(ctx);
}