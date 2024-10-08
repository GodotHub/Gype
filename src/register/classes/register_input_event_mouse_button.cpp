
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/input_event_mouse_button.hpp>
#include <godot_cpp/classes/input_event_mouse.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void input_event_mouse_button_class_finalizer(JSRuntime *rt, JSValue val) {
	InputEventMouseButton *input_event_mouse_button = static_cast<InputEventMouseButton *>(JS_GetOpaque(val, InputEventMouseButton::__class_id));
	if (input_event_mouse_button)
		InputEventMouseButton::free(nullptr, input_event_mouse_button);
}

static JSClassDef input_event_mouse_button_class_def = {
	"InputEventMouseButton",
	.finalizer = input_event_mouse_button_class_finalizer
};

static JSValue input_event_mouse_button_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	InputEventMouseButton *input_event_mouse_button_class;
	JSValue obj = JS_NewObjectClass(ctx, InputEventMouseButton::__class_id);
	if (JS_IsException(obj))
		return obj;
	input_event_mouse_button_class = memnew(InputEventMouseButton);
	if (!input_event_mouse_button_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, input_event_mouse_button_class);
	return obj;
}
static JSValue input_event_mouse_button_class_set_factor(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&InputEventMouseButton::set_factor, InputEventMouseButton::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue input_event_mouse_button_class_get_factor(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&InputEventMouseButton::get_factor, InputEventMouseButton::__class_id, ctx, this_val, argv);
};
static JSValue input_event_mouse_button_class_set_button_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&InputEventMouseButton::set_button_index, InputEventMouseButton::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue input_event_mouse_button_class_get_button_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&InputEventMouseButton::get_button_index, InputEventMouseButton::__class_id, ctx, this_val, argv);
};
static JSValue input_event_mouse_button_class_set_pressed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&InputEventMouseButton::set_pressed, InputEventMouseButton::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue input_event_mouse_button_class_set_canceled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&InputEventMouseButton::set_canceled, InputEventMouseButton::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue input_event_mouse_button_class_set_double_click(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&InputEventMouseButton::set_double_click, InputEventMouseButton::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue input_event_mouse_button_class_is_double_click(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&InputEventMouseButton::is_double_click, InputEventMouseButton::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry input_event_mouse_button_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_factor", 1, &input_event_mouse_button_class_set_factor),
	JS_CFUNC_DEF("get_factor", 0, &input_event_mouse_button_class_get_factor),
	JS_CFUNC_DEF("set_button_index", 1, &input_event_mouse_button_class_set_button_index),
	JS_CFUNC_DEF("get_button_index", 0, &input_event_mouse_button_class_get_button_index),
	JS_CFUNC_DEF("set_pressed", 1, &input_event_mouse_button_class_set_pressed),
	JS_CFUNC_DEF("set_canceled", 1, &input_event_mouse_button_class_set_canceled),
	JS_CFUNC_DEF("set_double_click", 1, &input_event_mouse_button_class_set_double_click),
	JS_CFUNC_DEF("is_double_click", 0, &input_event_mouse_button_class_is_double_click),
};

static int js_input_event_mouse_button_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&InputEventMouseButton::__class_id);
	classes["InputEventMouseButton"] = InputEventMouseButton::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), InputEventMouseButton::__class_id, &input_event_mouse_button_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, InputEventMouse::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, InputEventMouseButton::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, input_event_mouse_button_class_proto_funcs, _countof(input_event_mouse_button_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, input_event_mouse_button_class_constructor, "InputEventMouseButton", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "InputEventMouseButton", ctor);

	return 0;
}

JSModuleDef *_js_init_input_event_mouse_button_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_input_event_mouse_button_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "InputEventMouseButton");
	return m;
}

JSModuleDef *js_init_input_event_mouse_button_module(JSContext *ctx) {
	return _js_init_input_event_mouse_button_module(ctx, "godot/classes/input_event_mouse_button");
}

void register_input_event_mouse_button() {
	js_init_input_event_mouse_button_module(ctx);
}