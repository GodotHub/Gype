
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/input_event.hpp>
#include <godot_cpp/classes/input_event_joypad_button.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void input_event_joypad_button_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef input_event_joypad_button_class_def = {
	"InputEventJoypadButton",
	.finalizer = input_event_joypad_button_class_finalizer
};

static JSValue input_event_joypad_button_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, InputEventJoypadButton::__class_id);
	if (JS_IsException(obj))
		return obj;
	InputEventJoypadButton *input_event_joypad_button_class;
	if (argc == 1) {
		Variant vobj = *argv;
		input_event_joypad_button_class = static_cast<InputEventJoypadButton *>(static_cast<Object *>(vobj));
	} else {
		input_event_joypad_button_class = memnew(InputEventJoypadButton);
	}
	if (!input_event_joypad_button_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, input_event_joypad_button_class);	
	return obj;
}
static JSValue input_event_joypad_button_class_set_button_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&InputEventJoypadButton::set_button_index, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue input_event_joypad_button_class_get_button_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&InputEventJoypadButton::get_button_index, ctx, this_val, argc, argv);
};
static JSValue input_event_joypad_button_class_set_pressure(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&InputEventJoypadButton::set_pressure, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue input_event_joypad_button_class_get_pressure(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&InputEventJoypadButton::get_pressure, ctx, this_val, argc, argv);
};
static JSValue input_event_joypad_button_class_set_pressed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&InputEventJoypadButton::set_pressed, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry input_event_joypad_button_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_button_index", 1, &input_event_joypad_button_class_set_button_index),
	JS_CFUNC_DEF("get_button_index", 0, &input_event_joypad_button_class_get_button_index),
	JS_CFUNC_DEF("set_pressure", 1, &input_event_joypad_button_class_set_pressure),
	JS_CFUNC_DEF("get_pressure", 0, &input_event_joypad_button_class_get_pressure),
	JS_CFUNC_DEF("set_pressed", 1, &input_event_joypad_button_class_set_pressed),
};

void define_input_event_joypad_button_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "button_index"),
        JS_NewCFunction(ctx, input_event_joypad_button_class_get_button_index, "get_button_index", 0),
        JS_NewCFunction(ctx, input_event_joypad_button_class_set_button_index, "set_button_index", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "pressure"),
        JS_NewCFunction(ctx, input_event_joypad_button_class_get_pressure, "get_pressure", 0),
        JS_NewCFunction(ctx, input_event_joypad_button_class_set_pressure, "set_pressure", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "pressed"),
        JS_UNDEFINED,
        JS_NewCFunction(ctx, input_event_joypad_button_class_set_pressed, "set_pressed", 1),
        JS_PROP_GETSET
    );
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
}

static int js_input_event_joypad_button_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&InputEventJoypadButton::__class_id);
	classes["InputEventJoypadButton"] = InputEventJoypadButton::__class_id;
	class_id_list.insert(InputEventJoypadButton::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), InputEventJoypadButton::__class_id, &input_event_joypad_button_class_def);

	JSValue proto = JS_NewObjectClass(ctx, InputEventJoypadButton::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, InputEvent::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, InputEventJoypadButton::__class_id, proto);

	define_input_event_joypad_button_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, input_event_joypad_button_class_proto_funcs, _countof(input_event_joypad_button_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, input_event_joypad_button_class_constructor, "InputEventJoypadButton", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "InputEventJoypadButton", ctor);

	return 0;
}

JSModuleDef *_js_init_input_event_joypad_button_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/input_event';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_input_event_joypad_button_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "InputEventJoypadButton");
	return m;
}

JSModuleDef *js_init_input_event_joypad_button_module(JSContext *ctx) {
	return _js_init_input_event_joypad_button_module(ctx, "@godot/classes/input_event_joypad_button");
}

void register_input_event_joypad_button() {
	InputEventJoypadButton::__init_js_class_id();
	js_init_input_event_joypad_button_module(ctx);
}