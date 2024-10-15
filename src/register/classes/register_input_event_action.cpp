
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/input_event.hpp>
#include <godot_cpp/classes/input_event_action.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void input_event_action_class_finalizer(JSRuntime *rt, JSValue val) {
	InputEventAction *input_event_action = static_cast<InputEventAction *>(JS_GetOpaque(val, InputEventAction::__class_id));
	if (input_event_action)
		memdelete(input_event_action);
}

static JSClassDef input_event_action_class_def = {
	"InputEventAction",
	.finalizer = input_event_action_class_finalizer
};

static JSValue input_event_action_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, InputEventAction::__class_id);
	if (JS_IsException(obj))
		return obj;
	InputEventAction *input_event_action_class = memnew(InputEventAction);
	if (!input_event_action_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, input_event_action_class);	
	return obj;
}
static JSValue input_event_action_class_set_action(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&InputEventAction::set_action, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue input_event_action_class_get_action(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&InputEventAction::get_action, ctx, this_val, argc, argv);
};
static JSValue input_event_action_class_set_pressed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&InputEventAction::set_pressed, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue input_event_action_class_set_strength(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&InputEventAction::set_strength, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue input_event_action_class_get_strength(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&InputEventAction::get_strength, ctx, this_val, argc, argv);
};
static JSValue input_event_action_class_set_event_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&InputEventAction::set_event_index, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue input_event_action_class_get_event_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&InputEventAction::get_event_index, ctx, this_val, argc, argv);
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

void define_input_event_action_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "action"),
        JS_NewCFunction(ctx, input_event_action_class_get_action, "get_action", 0),
        JS_NewCFunction(ctx, input_event_action_class_set_action, "set_action", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "pressed"),
        JS_UNDEFINED,
        JS_NewCFunction(ctx, input_event_action_class_set_pressed, "set_pressed", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "strength"),
        JS_NewCFunction(ctx, input_event_action_class_get_strength, "get_strength", 0),
        JS_NewCFunction(ctx, input_event_action_class_set_strength, "set_strength", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "event_index"),
        JS_NewCFunction(ctx, input_event_action_class_get_event_index, "get_event_index", 0),
        JS_NewCFunction(ctx, input_event_action_class_set_event_index, "set_event_index", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
}

static int js_input_event_action_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&InputEventAction::__class_id);
	classes["InputEventAction"] = InputEventAction::__class_id;
	class_id_list.insert(InputEventAction::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), InputEventAction::__class_id, &input_event_action_class_def);

	JSValue proto = JS_NewObjectClass(ctx, InputEventAction::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, InputEvent::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, InputEventAction::__class_id, proto);

	define_input_event_action_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, input_event_action_class_proto_funcs, _countof(input_event_action_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, input_event_action_class_constructor, "InputEventAction", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "InputEventAction", ctor);

	return 0;
}

JSModuleDef *_js_init_input_event_action_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/input_event';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
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
	InputEventAction::__init_js_class_id();
	js_init_input_event_action_module(ctx);
}