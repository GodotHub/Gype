
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/input_event_screen_drag.hpp>
#include <godot_cpp/classes/input_event_from_window.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void input_event_screen_drag_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef input_event_screen_drag_class_def = {
	"InputEventScreenDrag",
	.finalizer = input_event_screen_drag_class_finalizer
};

static JSValue input_event_screen_drag_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, InputEventScreenDrag::__class_id);
	if (JS_IsException(obj))
		return obj;
	InputEventScreenDrag *input_event_screen_drag_class = memnew(InputEventScreenDrag);
	if (!input_event_screen_drag_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, input_event_screen_drag_class);	
	return obj;
}
static JSValue input_event_screen_drag_class_set_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&InputEventScreenDrag::set_index, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue input_event_screen_drag_class_get_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&InputEventScreenDrag::get_index, ctx, this_val, argc, argv);
};
static JSValue input_event_screen_drag_class_set_tilt(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&InputEventScreenDrag::set_tilt, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue input_event_screen_drag_class_get_tilt(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&InputEventScreenDrag::get_tilt, ctx, this_val, argc, argv);
};
static JSValue input_event_screen_drag_class_set_pressure(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&InputEventScreenDrag::set_pressure, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue input_event_screen_drag_class_get_pressure(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&InputEventScreenDrag::get_pressure, ctx, this_val, argc, argv);
};
static JSValue input_event_screen_drag_class_set_pen_inverted(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&InputEventScreenDrag::set_pen_inverted, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue input_event_screen_drag_class_get_pen_inverted(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&InputEventScreenDrag::get_pen_inverted, ctx, this_val, argc, argv);
};
static JSValue input_event_screen_drag_class_set_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&InputEventScreenDrag::set_position, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue input_event_screen_drag_class_get_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&InputEventScreenDrag::get_position, ctx, this_val, argc, argv);
};
static JSValue input_event_screen_drag_class_set_relative(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&InputEventScreenDrag::set_relative, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue input_event_screen_drag_class_get_relative(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&InputEventScreenDrag::get_relative, ctx, this_val, argc, argv);
};
static JSValue input_event_screen_drag_class_set_screen_relative(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&InputEventScreenDrag::set_screen_relative, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue input_event_screen_drag_class_get_screen_relative(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&InputEventScreenDrag::get_screen_relative, ctx, this_val, argc, argv);
};
static JSValue input_event_screen_drag_class_set_velocity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&InputEventScreenDrag::set_velocity, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue input_event_screen_drag_class_get_velocity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&InputEventScreenDrag::get_velocity, ctx, this_val, argc, argv);
};
static JSValue input_event_screen_drag_class_set_screen_velocity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&InputEventScreenDrag::set_screen_velocity, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue input_event_screen_drag_class_get_screen_velocity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&InputEventScreenDrag::get_screen_velocity, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry input_event_screen_drag_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_index", 1, &input_event_screen_drag_class_set_index),
	JS_CFUNC_DEF("get_index", 0, &input_event_screen_drag_class_get_index),
	JS_CFUNC_DEF("set_tilt", 1, &input_event_screen_drag_class_set_tilt),
	JS_CFUNC_DEF("get_tilt", 0, &input_event_screen_drag_class_get_tilt),
	JS_CFUNC_DEF("set_pressure", 1, &input_event_screen_drag_class_set_pressure),
	JS_CFUNC_DEF("get_pressure", 0, &input_event_screen_drag_class_get_pressure),
	JS_CFUNC_DEF("set_pen_inverted", 1, &input_event_screen_drag_class_set_pen_inverted),
	JS_CFUNC_DEF("get_pen_inverted", 0, &input_event_screen_drag_class_get_pen_inverted),
	JS_CFUNC_DEF("set_position", 1, &input_event_screen_drag_class_set_position),
	JS_CFUNC_DEF("get_position", 0, &input_event_screen_drag_class_get_position),
	JS_CFUNC_DEF("set_relative", 1, &input_event_screen_drag_class_set_relative),
	JS_CFUNC_DEF("get_relative", 0, &input_event_screen_drag_class_get_relative),
	JS_CFUNC_DEF("set_screen_relative", 1, &input_event_screen_drag_class_set_screen_relative),
	JS_CFUNC_DEF("get_screen_relative", 0, &input_event_screen_drag_class_get_screen_relative),
	JS_CFUNC_DEF("set_velocity", 1, &input_event_screen_drag_class_set_velocity),
	JS_CFUNC_DEF("get_velocity", 0, &input_event_screen_drag_class_get_velocity),
	JS_CFUNC_DEF("set_screen_velocity", 1, &input_event_screen_drag_class_set_screen_velocity),
	JS_CFUNC_DEF("get_screen_velocity", 0, &input_event_screen_drag_class_get_screen_velocity),
};

void define_input_event_screen_drag_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "index"),
        JS_NewCFunction(ctx, input_event_screen_drag_class_get_index, "get_index", 0),
        JS_NewCFunction(ctx, input_event_screen_drag_class_set_index, "set_index", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "tilt"),
        JS_NewCFunction(ctx, input_event_screen_drag_class_get_tilt, "get_tilt", 0),
        JS_NewCFunction(ctx, input_event_screen_drag_class_set_tilt, "set_tilt", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "pressure"),
        JS_NewCFunction(ctx, input_event_screen_drag_class_get_pressure, "get_pressure", 0),
        JS_NewCFunction(ctx, input_event_screen_drag_class_set_pressure, "set_pressure", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "pen_inverted"),
        JS_NewCFunction(ctx, input_event_screen_drag_class_get_pen_inverted, "get_pen_inverted", 0),
        JS_NewCFunction(ctx, input_event_screen_drag_class_set_pen_inverted, "set_pen_inverted", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "position"),
        JS_NewCFunction(ctx, input_event_screen_drag_class_get_position, "get_position", 0),
        JS_NewCFunction(ctx, input_event_screen_drag_class_set_position, "set_position", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "relative"),
        JS_NewCFunction(ctx, input_event_screen_drag_class_get_relative, "get_relative", 0),
        JS_NewCFunction(ctx, input_event_screen_drag_class_set_relative, "set_relative", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "screen_relative"),
        JS_NewCFunction(ctx, input_event_screen_drag_class_get_screen_relative, "get_screen_relative", 0),
        JS_NewCFunction(ctx, input_event_screen_drag_class_set_screen_relative, "set_screen_relative", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "velocity"),
        JS_NewCFunction(ctx, input_event_screen_drag_class_get_velocity, "get_velocity", 0),
        JS_NewCFunction(ctx, input_event_screen_drag_class_set_velocity, "set_velocity", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "screen_velocity"),
        JS_NewCFunction(ctx, input_event_screen_drag_class_get_screen_velocity, "get_screen_velocity", 0),
        JS_NewCFunction(ctx, input_event_screen_drag_class_set_screen_velocity, "set_screen_velocity", 1),
        JS_PROP_GETSET
    );
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
}

static int js_input_event_screen_drag_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&InputEventScreenDrag::__class_id);
	classes["InputEventScreenDrag"] = InputEventScreenDrag::__class_id;
	class_id_list.insert(InputEventScreenDrag::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), InputEventScreenDrag::__class_id, &input_event_screen_drag_class_def);

	JSValue proto = JS_NewObjectClass(ctx, InputEventScreenDrag::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, InputEventFromWindow::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, InputEventScreenDrag::__class_id, proto);

	define_input_event_screen_drag_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, input_event_screen_drag_class_proto_funcs, _countof(input_event_screen_drag_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, input_event_screen_drag_class_constructor, "InputEventScreenDrag", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "InputEventScreenDrag", ctor);

	return 0;
}

JSModuleDef *_js_init_input_event_screen_drag_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/input_event_from_window';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_input_event_screen_drag_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "InputEventScreenDrag");
	return m;
}

JSModuleDef *js_init_input_event_screen_drag_module(JSContext *ctx) {
	return _js_init_input_event_screen_drag_module(ctx, "@godot/classes/input_event_screen_drag");
}

void register_input_event_screen_drag() {
	InputEventScreenDrag::__init_js_class_id();
	js_init_input_event_screen_drag_module(ctx);
}