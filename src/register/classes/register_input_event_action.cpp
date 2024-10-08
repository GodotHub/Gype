
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/input_event.hpp>
#include <godot_cpp/classes/input_event_action.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void input_event_action_class_finalizer(JSRuntime *rt, JSValue val) {
	InputEventAction *input_event_action = static_cast<InputEventAction *>(JS_GetOpaque(val, InputEventAction::__class_id));
	if (input_event_action)
		InputEventAction::free(nullptr, input_event_action);
}

static JSClassDef input_event_action_class_def = {
	"InputEventAction",
	.finalizer = input_event_action_class_finalizer
};

static JSValue input_event_action_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	InputEventAction *input_event_action_class;
	JSValue obj = JS_NewObjectClass(ctx, InputEventAction::__class_id);
	if (JS_IsException(obj))
		return obj;
	input_event_action_class = memnew(InputEventAction);
	if (!input_event_action_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, input_event_action_class);
	return obj;
}
static JSValue input_event_action_class_set_action(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&InputEventAction::set_action, InputEventAction::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue input_event_action_class_get_action(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&InputEventAction::get_action, InputEventAction::__class_id, ctx, this_val, argv);
};
static JSValue input_event_action_class_set_pressed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&InputEventAction::set_pressed, InputEventAction::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue input_event_action_class_set_strength(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&InputEventAction::set_strength, InputEventAction::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue input_event_action_class_get_strength(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&InputEventAction::get_strength, InputEventAction::__class_id, ctx, this_val, argv);
};
static JSValue input_event_action_class_set_event_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&InputEventAction::set_event_index, InputEventAction::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue input_event_action_class_get_event_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&InputEventAction::get_event_index, InputEventAction::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry input_event_action_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_action", 1, &input_event_action_class_set_action),
	JS_CFUNC_DEF("get_action", 0, &input_event_action_class_get_action),
	JS_CFUNC_DEF("set_pressed", 1, &input_event_action_class_set_pressed),
	JS_CFUNC_DEF("set_strength", 1, &input_event_action_class_set_strength),
	JS_CFUNC_DEF("get_strength", 0, &input_event_action_class_get_strength),
	JS_CFUNC_DEF("set_event_index", 1, &input_event_action_class_set_event_index),
	JS_CFUNC_DEF("get_event_index", 0, &input_event_action_class_get_event_index),
};

static int js_input_event_action_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&InputEventAction::__class_id);
	classes["InputEventAction"] = InputEventAction::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), InputEventAction::__class_id, &input_event_action_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, InputEvent::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, InputEventAction::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, input_event_action_class_proto_funcs, _countof(input_event_action_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, input_event_action_class_constructor, "InputEventAction", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "InputEventAction", ctor);

	return 0;
}

JSModuleDef *_js_init_input_event_action_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_input_event_action_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "InputEventAction");
	return m;
}

JSModuleDef *js_init_input_event_action_module(JSContext *ctx) {
	return _js_init_input_event_action_module(ctx, "godot/classes/input_event_action");
}

void register_input_event_action() {
	js_init_input_event_action_module(ctx);
}