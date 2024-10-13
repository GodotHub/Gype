
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/input_event_with_modifiers.hpp>
#include <godot_cpp/classes/input_event_from_window.hpp>
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
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");

	if (JS_IsObject(proto)) {
		JS_SetPrototype(ctx, obj, proto);
	}
	JS_FreeValue(ctx, proto);

	
	return obj;
}
static JSValue input_event_with_modifiers_class_set_command_or_control_autoremap(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&InputEventWithModifiers::set_command_or_control_autoremap, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue input_event_with_modifiers_class_is_command_or_control_autoremap(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&InputEventWithModifiers::is_command_or_control_autoremap, ctx, this_val, argc, argv);
};
static JSValue input_event_with_modifiers_class_is_command_or_control_pressed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&InputEventWithModifiers::is_command_or_control_pressed, ctx, this_val, argc, argv);
};
static JSValue input_event_with_modifiers_class_set_alt_pressed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&InputEventWithModifiers::set_alt_pressed, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue input_event_with_modifiers_class_is_alt_pressed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&InputEventWithModifiers::is_alt_pressed, ctx, this_val, argc, argv);
};
static JSValue input_event_with_modifiers_class_set_shift_pressed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&InputEventWithModifiers::set_shift_pressed, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue input_event_with_modifiers_class_is_shift_pressed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&InputEventWithModifiers::is_shift_pressed, ctx, this_val, argc, argv);
};
static JSValue input_event_with_modifiers_class_set_ctrl_pressed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&InputEventWithModifiers::set_ctrl_pressed, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue input_event_with_modifiers_class_is_ctrl_pressed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&InputEventWithModifiers::is_ctrl_pressed, ctx, this_val, argc, argv);
};
static JSValue input_event_with_modifiers_class_set_meta_pressed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&InputEventWithModifiers::set_meta_pressed, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue input_event_with_modifiers_class_is_meta_pressed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&InputEventWithModifiers::is_meta_pressed, ctx, this_val, argc, argv);
};
static JSValue input_event_with_modifiers_class_get_modifiers_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&InputEventWithModifiers::get_modifiers_mask, ctx, this_val, argc, argv);
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

void define_input_event_with_modifiers_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "command_or_control_autoremap"),
        JS_NewCFunction(ctx, input_event_with_modifiers_class_is_command_or_control_autoremap, "is_command_or_control_autoremap", 0),
        JS_NewCFunction(ctx, input_event_with_modifiers_class_set_command_or_control_autoremap, "set_command_or_control_autoremap", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "alt_pressed"),
        JS_NewCFunction(ctx, input_event_with_modifiers_class_is_alt_pressed, "is_alt_pressed", 0),
        JS_NewCFunction(ctx, input_event_with_modifiers_class_set_alt_pressed, "set_alt_pressed", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "shift_pressed"),
        JS_NewCFunction(ctx, input_event_with_modifiers_class_is_shift_pressed, "is_shift_pressed", 0),
        JS_NewCFunction(ctx, input_event_with_modifiers_class_set_shift_pressed, "set_shift_pressed", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "ctrl_pressed"),
        JS_NewCFunction(ctx, input_event_with_modifiers_class_is_ctrl_pressed, "is_ctrl_pressed", 0),
        JS_NewCFunction(ctx, input_event_with_modifiers_class_set_ctrl_pressed, "set_ctrl_pressed", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "meta_pressed"),
        JS_NewCFunction(ctx, input_event_with_modifiers_class_is_meta_pressed, "is_meta_pressed", 0),
        JS_NewCFunction(ctx, input_event_with_modifiers_class_set_meta_pressed, "set_meta_pressed", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
}

static int js_input_event_with_modifiers_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&InputEventWithModifiers::__class_id);
	classes["InputEventWithModifiers"] = InputEventWithModifiers::__class_id;
	class_id_list.insert(InputEventWithModifiers::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), InputEventWithModifiers::__class_id, &input_event_with_modifiers_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, InputEventFromWindow::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, InputEventWithModifiers::__class_id, proto);
	define_input_event_with_modifiers_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, input_event_with_modifiers_class_proto_funcs, _countof(input_event_with_modifiers_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, input_event_with_modifiers_class_constructor, "InputEventWithModifiers", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "InputEventWithModifiers", ctor);

	return 0;
}

JSModuleDef *_js_init_input_event_with_modifiers_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/input_event_from_window';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
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
	InputEventWithModifiers::__init_js_class_id();
	js_init_input_event_with_modifiers_module(ctx);
}