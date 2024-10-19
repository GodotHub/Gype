
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/input_event.hpp>
#include <godot_cpp/classes/input_event_joypad_motion.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void input_event_joypad_motion_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef input_event_joypad_motion_class_def = {
	"InputEventJoypadMotion",
	.finalizer = input_event_joypad_motion_class_finalizer
};

static JSValue input_event_joypad_motion_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, InputEventJoypadMotion::__class_id);
	if (JS_IsException(obj))
		return obj;
	InputEventJoypadMotion *input_event_joypad_motion_class = memnew(InputEventJoypadMotion);
	if (!input_event_joypad_motion_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, input_event_joypad_motion_class);	
	return obj;
}
static JSValue input_event_joypad_motion_class_set_axis(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&InputEventJoypadMotion::set_axis, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue input_event_joypad_motion_class_get_axis(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&InputEventJoypadMotion::get_axis, ctx, this_val, argc, argv);
};
static JSValue input_event_joypad_motion_class_set_axis_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&InputEventJoypadMotion::set_axis_value, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue input_event_joypad_motion_class_get_axis_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&InputEventJoypadMotion::get_axis_value, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry input_event_joypad_motion_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_axis", 1, &input_event_joypad_motion_class_set_axis),
	JS_CFUNC_DEF("get_axis", 0, &input_event_joypad_motion_class_get_axis),
	JS_CFUNC_DEF("set_axis_value", 1, &input_event_joypad_motion_class_set_axis_value),
	JS_CFUNC_DEF("get_axis_value", 0, &input_event_joypad_motion_class_get_axis_value),
};

void define_input_event_joypad_motion_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "axis"),
        JS_NewCFunction(ctx, input_event_joypad_motion_class_get_axis, "get_axis", 0),
        JS_NewCFunction(ctx, input_event_joypad_motion_class_set_axis, "set_axis", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "axis_value"),
        JS_NewCFunction(ctx, input_event_joypad_motion_class_get_axis_value, "get_axis_value", 0),
        JS_NewCFunction(ctx, input_event_joypad_motion_class_set_axis_value, "set_axis_value", 1),
        JS_PROP_GETSET
    );
}

static int js_input_event_joypad_motion_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&InputEventJoypadMotion::__class_id);
	classes["InputEventJoypadMotion"] = InputEventJoypadMotion::__class_id;
	class_id_list.insert(InputEventJoypadMotion::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), InputEventJoypadMotion::__class_id, &input_event_joypad_motion_class_def);

	JSValue proto = JS_NewObjectClass(ctx, InputEventJoypadMotion::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, InputEvent::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, InputEventJoypadMotion::__class_id, proto);

	define_input_event_joypad_motion_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, input_event_joypad_motion_class_proto_funcs, _countof(input_event_joypad_motion_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, input_event_joypad_motion_class_constructor, "InputEventJoypadMotion", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "InputEventJoypadMotion", ctor);

	return 0;
}

JSModuleDef *_js_init_input_event_joypad_motion_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/input_event';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
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
	InputEventJoypadMotion::__init_js_class_id();
	js_init_input_event_joypad_motion_module(ctx);
}