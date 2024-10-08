
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/input_event.hpp>
#include <godot_cpp/classes/input_event_joypad_button.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void input_event_joypad_button_class_finalizer(JSRuntime *rt, JSValue val) {
	InputEventJoypadButton *input_event_joypad_button = static_cast<InputEventJoypadButton *>(JS_GetOpaque(val, InputEventJoypadButton::__class_id));
	if (input_event_joypad_button)
		InputEventJoypadButton::free(nullptr, input_event_joypad_button);
}

static JSClassDef input_event_joypad_button_class_def = {
	"InputEventJoypadButton",
	.finalizer = input_event_joypad_button_class_finalizer
};

static JSValue input_event_joypad_button_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	InputEventJoypadButton *input_event_joypad_button_class;
	JSValue obj = JS_NewObjectClass(ctx, InputEventJoypadButton::__class_id);
	if (JS_IsException(obj))
		return obj;
	input_event_joypad_button_class = memnew(InputEventJoypadButton);
	if (!input_event_joypad_button_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, input_event_joypad_button_class);
	return obj;
}
static JSValue input_event_joypad_button_class_set_button_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&InputEventJoypadButton::set_button_index, InputEventJoypadButton::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue input_event_joypad_button_class_get_button_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&InputEventJoypadButton::get_button_index, InputEventJoypadButton::__class_id, ctx, this_val, argv);
};
static JSValue input_event_joypad_button_class_set_pressure(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&InputEventJoypadButton::set_pressure, InputEventJoypadButton::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue input_event_joypad_button_class_get_pressure(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&InputEventJoypadButton::get_pressure, InputEventJoypadButton::__class_id, ctx, this_val, argv);
};
static JSValue input_event_joypad_button_class_set_pressed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&InputEventJoypadButton::set_pressed, InputEventJoypadButton::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry input_event_joypad_button_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_button_index", 1, &input_event_joypad_button_class_set_button_index),
	JS_CFUNC_DEF("get_button_index", 0, &input_event_joypad_button_class_get_button_index),
	JS_CFUNC_DEF("set_pressure", 1, &input_event_joypad_button_class_set_pressure),
	JS_CFUNC_DEF("get_pressure", 0, &input_event_joypad_button_class_get_pressure),
	JS_CFUNC_DEF("set_pressed", 1, &input_event_joypad_button_class_set_pressed),
};

static int js_input_event_joypad_button_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&InputEventJoypadButton::__class_id);
	classes["InputEventJoypadButton"] = InputEventJoypadButton::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), InputEventJoypadButton::__class_id, &input_event_joypad_button_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, InputEvent::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, InputEventJoypadButton::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, input_event_joypad_button_class_proto_funcs, _countof(input_event_joypad_button_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, input_event_joypad_button_class_constructor, "InputEventJoypadButton", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "InputEventJoypadButton", ctor);

	return 0;
}

JSModuleDef *_js_init_input_event_joypad_button_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_input_event_joypad_button_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "InputEventJoypadButton");
	return m;
}

JSModuleDef *js_init_input_event_joypad_button_module(JSContext *ctx) {
	return _js_init_input_event_joypad_button_module(ctx, "godot/classes/input_event_joypad_button");
}

void register_input_event_joypad_button() {
	js_init_input_event_joypad_button_module(ctx);
}