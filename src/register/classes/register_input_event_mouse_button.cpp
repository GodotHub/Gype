
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/input_event_mouse_button.hpp>
#include <godot_cpp/classes/input_event_mouse.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void input_event_mouse_button_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef input_event_mouse_button_class_def = {
	"InputEventMouseButton",
	.finalizer = input_event_mouse_button_class_finalizer
};

static JSValue input_event_mouse_button_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, InputEventMouseButton::__class_id);
	if (JS_IsException(obj))
		return obj;
	InputEventMouseButton *input_event_mouse_button_class = memnew(InputEventMouseButton);
	if (!input_event_mouse_button_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, input_event_mouse_button_class);	
	return obj;
}
static JSValue input_event_mouse_button_class_set_factor(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&InputEventMouseButton::set_factor, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue input_event_mouse_button_class_get_factor(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&InputEventMouseButton::get_factor, ctx, this_val, argc, argv);
};
static JSValue input_event_mouse_button_class_set_button_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&InputEventMouseButton::set_button_index, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue input_event_mouse_button_class_get_button_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&InputEventMouseButton::get_button_index, ctx, this_val, argc, argv);
};
static JSValue input_event_mouse_button_class_set_pressed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&InputEventMouseButton::set_pressed, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue input_event_mouse_button_class_set_canceled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&InputEventMouseButton::set_canceled, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue input_event_mouse_button_class_set_double_click(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&InputEventMouseButton::set_double_click, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue input_event_mouse_button_class_is_double_click(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&InputEventMouseButton::is_double_click, ctx, this_val, argc, argv);
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

void define_input_event_mouse_button_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "factor"),
        JS_NewCFunction(ctx, input_event_mouse_button_class_get_factor, "get_factor", 0),
        JS_NewCFunction(ctx, input_event_mouse_button_class_set_factor, "set_factor", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "button_index"),
        JS_NewCFunction(ctx, input_event_mouse_button_class_get_button_index, "get_button_index", 0),
        JS_NewCFunction(ctx, input_event_mouse_button_class_set_button_index, "set_button_index", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "canceled"),
        JS_UNDEFINED,
        JS_NewCFunction(ctx, input_event_mouse_button_class_set_canceled, "set_canceled", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "pressed"),
        JS_UNDEFINED,
        JS_NewCFunction(ctx, input_event_mouse_button_class_set_pressed, "set_pressed", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "double_click"),
        JS_NewCFunction(ctx, input_event_mouse_button_class_is_double_click, "is_double_click", 0),
        JS_NewCFunction(ctx, input_event_mouse_button_class_set_double_click, "set_double_click", 1),
        JS_PROP_GETSET
    );
}

static int js_input_event_mouse_button_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&InputEventMouseButton::__class_id);
	classes["InputEventMouseButton"] = InputEventMouseButton::__class_id;
	class_id_list.insert(InputEventMouseButton::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), InputEventMouseButton::__class_id, &input_event_mouse_button_class_def);

	JSValue proto = JS_NewObjectClass(ctx, InputEventMouseButton::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, InputEventMouse::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, InputEventMouseButton::__class_id, proto);

	define_input_event_mouse_button_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, input_event_mouse_button_class_proto_funcs, _countof(input_event_mouse_button_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, input_event_mouse_button_class_constructor, "InputEventMouseButton", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "InputEventMouseButton", ctor);

	return 0;
}

JSModuleDef *_js_init_input_event_mouse_button_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/input_event_mouse';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
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
	InputEventMouseButton::__init_js_class_id();
	js_init_input_event_mouse_button_module(ctx);
}