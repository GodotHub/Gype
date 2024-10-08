
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/input_event.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void input_event_class_finalizer(JSRuntime *rt, JSValue val) {
	InputEvent *input_event = static_cast<InputEvent *>(JS_GetOpaque(val, InputEvent::__class_id));
	if (input_event)
		InputEvent::free(nullptr, input_event);
}

static JSClassDef input_event_class_def = {
	"InputEvent",
	.finalizer = input_event_class_finalizer
};

static JSValue input_event_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	InputEvent *input_event_class;
	JSValue obj = JS_NewObjectClass(ctx, InputEvent::__class_id);
	if (JS_IsException(obj))
		return obj;
	input_event_class = memnew(InputEvent);
	if (!input_event_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, input_event_class);
	return obj;
}
static JSValue input_event_class_set_device(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&InputEvent::set_device, InputEvent::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue input_event_class_get_device(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&InputEvent::get_device, InputEvent::__class_id, ctx, this_val, argv);
};
static JSValue input_event_class_is_action(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&InputEvent::is_action, InputEvent::__class_id, ctx, this_val, argv);
};
static JSValue input_event_class_is_action_pressed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&InputEvent::is_action_pressed, InputEvent::__class_id, ctx, this_val, argv);
};
static JSValue input_event_class_is_action_released(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&InputEvent::is_action_released, InputEvent::__class_id, ctx, this_val, argv);
};
static JSValue input_event_class_get_action_strength(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&InputEvent::get_action_strength, InputEvent::__class_id, ctx, this_val, argv);
};
static JSValue input_event_class_is_canceled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&InputEvent::is_canceled, InputEvent::__class_id, ctx, this_val, argv);
};
static JSValue input_event_class_is_pressed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&InputEvent::is_pressed, InputEvent::__class_id, ctx, this_val, argv);
};
static JSValue input_event_class_is_released(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&InputEvent::is_released, InputEvent::__class_id, ctx, this_val, argv);
};
static JSValue input_event_class_is_echo(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&InputEvent::is_echo, InputEvent::__class_id, ctx, this_val, argv);
};
static JSValue input_event_class_as_text(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&InputEvent::as_text, InputEvent::__class_id, ctx, this_val, argv);
};
static JSValue input_event_class_is_match(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&InputEvent::is_match, InputEvent::__class_id, ctx, this_val, argv);
};
static JSValue input_event_class_is_action_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&InputEvent::is_action_type, InputEvent::__class_id, ctx, this_val, argv);
};
static JSValue input_event_class_accumulate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&InputEvent::accumulate, InputEvent::__class_id, ctx, this_val, argv);
};
static JSValue input_event_class_xformed_by(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&InputEvent::xformed_by, InputEvent::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry input_event_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_device", 1, &input_event_class_set_device),
	JS_CFUNC_DEF("get_device", 0, &input_event_class_get_device),
	JS_CFUNC_DEF("is_action", 2, &input_event_class_is_action),
	JS_CFUNC_DEF("is_action_pressed", 3, &input_event_class_is_action_pressed),
	JS_CFUNC_DEF("is_action_released", 2, &input_event_class_is_action_released),
	JS_CFUNC_DEF("get_action_strength", 2, &input_event_class_get_action_strength),
	JS_CFUNC_DEF("is_canceled", 0, &input_event_class_is_canceled),
	JS_CFUNC_DEF("is_pressed", 0, &input_event_class_is_pressed),
	JS_CFUNC_DEF("is_released", 0, &input_event_class_is_released),
	JS_CFUNC_DEF("is_echo", 0, &input_event_class_is_echo),
	JS_CFUNC_DEF("as_text", 0, &input_event_class_as_text),
	JS_CFUNC_DEF("is_match", 2, &input_event_class_is_match),
	JS_CFUNC_DEF("is_action_type", 0, &input_event_class_is_action_type),
	JS_CFUNC_DEF("accumulate", 1, &input_event_class_accumulate),
	JS_CFUNC_DEF("xformed_by", 2, &input_event_class_xformed_by),
};

static int js_input_event_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&InputEvent::__class_id);
	classes["InputEvent"] = InputEvent::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), InputEvent::__class_id, &input_event_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, InputEvent::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, input_event_class_proto_funcs, _countof(input_event_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, input_event_class_constructor, "InputEvent", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "InputEvent", ctor);

	return 0;
}

JSModuleDef *_js_init_input_event_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_input_event_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "InputEvent");
	return m;
}

JSModuleDef *js_init_input_event_module(JSContext *ctx) {
	return _js_init_input_event_module(ctx, "godot/classes/input_event");
}

void register_input_event() {
	js_init_input_event_module(ctx);
}