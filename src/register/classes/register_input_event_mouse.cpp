
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/input_event_with_modifiers.hpp>
#include <godot_cpp/classes/input_event_mouse.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void input_event_mouse_class_finalizer(JSRuntime *rt, JSValue val) {
	InputEventMouse *input_event_mouse = static_cast<InputEventMouse *>(JS_GetOpaque(val, InputEventMouse::__class_id));
	if (input_event_mouse)
		InputEventMouse::free(nullptr, input_event_mouse);
}

static JSClassDef input_event_mouse_class_def = {
	"InputEventMouse",
	.finalizer = input_event_mouse_class_finalizer
};

static JSValue input_event_mouse_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	InputEventMouse *input_event_mouse_class;
	JSValue obj = JS_NewObjectClass(ctx, InputEventMouse::__class_id);
	if (JS_IsException(obj))
		return obj;
	input_event_mouse_class = memnew(InputEventMouse);
	if (!input_event_mouse_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, input_event_mouse_class);
	return obj;
}
static JSValue input_event_mouse_class_set_button_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&InputEventMouse::set_button_mask, InputEventMouse::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue input_event_mouse_class_get_button_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&InputEventMouse::get_button_mask, InputEventMouse::__class_id, ctx, this_val, argv);
};
static JSValue input_event_mouse_class_set_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&InputEventMouse::set_position, InputEventMouse::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue input_event_mouse_class_get_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&InputEventMouse::get_position, InputEventMouse::__class_id, ctx, this_val, argv);
};
static JSValue input_event_mouse_class_set_global_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&InputEventMouse::set_global_position, InputEventMouse::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue input_event_mouse_class_get_global_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&InputEventMouse::get_global_position, InputEventMouse::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry input_event_mouse_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_button_mask", 1, &input_event_mouse_class_set_button_mask),
	JS_CFUNC_DEF("get_button_mask", 0, &input_event_mouse_class_get_button_mask),
	JS_CFUNC_DEF("set_position", 1, &input_event_mouse_class_set_position),
	JS_CFUNC_DEF("get_position", 0, &input_event_mouse_class_get_position),
	JS_CFUNC_DEF("set_global_position", 1, &input_event_mouse_class_set_global_position),
	JS_CFUNC_DEF("get_global_position", 0, &input_event_mouse_class_get_global_position),
};

static int js_input_event_mouse_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&InputEventMouse::__class_id);
	classes["InputEventMouse"] = InputEventMouse::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), InputEventMouse::__class_id, &input_event_mouse_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, InputEventWithModifiers::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, InputEventMouse::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, input_event_mouse_class_proto_funcs, _countof(input_event_mouse_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, input_event_mouse_class_constructor, "InputEventMouse", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "InputEventMouse", ctor);

	return 0;
}

JSModuleDef *_js_init_input_event_mouse_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_input_event_mouse_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "InputEventMouse");
	return m;
}

JSModuleDef *js_init_input_event_mouse_module(JSContext *ctx) {
	return _js_init_input_event_mouse_module(ctx, "godot/classes/input_event_mouse");
}

void register_input_event_mouse() {
	js_init_input_event_mouse_module(ctx);
}