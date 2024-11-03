
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/input_event_screen_touch.hpp>
#include <godot_cpp/classes/input_event_from_window.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void input_event_screen_touch_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef input_event_screen_touch_class_def = {
	"InputEventScreenTouch",
	.finalizer = input_event_screen_touch_class_finalizer
};

static JSValue input_event_screen_touch_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, InputEventScreenTouch::__class_id);
	if (JS_IsException(obj))
		return obj;

	InputEventScreenTouch *input_event_screen_touch_class;
	if (argc == 1) 
		input_event_screen_touch_class = static_cast<InputEventScreenTouch *>(Variant(*argv).operator Object *());
	else 
		input_event_screen_touch_class = memnew(InputEventScreenTouch);
	if (!input_event_screen_touch_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, input_event_screen_touch_class);
	return obj;
}
static JSValue input_event_screen_touch_class_set_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&InputEventScreenTouch::set_index, ctx, this_val, argc, argv);
};
static JSValue input_event_screen_touch_class_get_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&InputEventScreenTouch::get_index, ctx, this_val, argc, argv);
};
static JSValue input_event_screen_touch_class_set_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&InputEventScreenTouch::set_position, ctx, this_val, argc, argv);
};
static JSValue input_event_screen_touch_class_get_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&InputEventScreenTouch::get_position, ctx, this_val, argc, argv);
};
static JSValue input_event_screen_touch_class_set_pressed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&InputEventScreenTouch::set_pressed, ctx, this_val, argc, argv);
};
static JSValue input_event_screen_touch_class_set_canceled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&InputEventScreenTouch::set_canceled, ctx, this_val, argc, argv);
};
static JSValue input_event_screen_touch_class_set_double_tap(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&InputEventScreenTouch::set_double_tap, ctx, this_val, argc, argv);
};
static JSValue input_event_screen_touch_class_is_double_tap(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&InputEventScreenTouch::is_double_tap, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry input_event_screen_touch_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_index", 1, &input_event_screen_touch_class_set_index),
	JS_CFUNC_DEF("get_index", 0, &input_event_screen_touch_class_get_index),
	JS_CFUNC_DEF("set_position", 1, &input_event_screen_touch_class_set_position),
	JS_CFUNC_DEF("get_position", 0, &input_event_screen_touch_class_get_position),
	JS_CFUNC_DEF("set_pressed", 1, &input_event_screen_touch_class_set_pressed),
	JS_CFUNC_DEF("set_canceled", 1, &input_event_screen_touch_class_set_canceled),
	JS_CFUNC_DEF("set_double_tap", 1, &input_event_screen_touch_class_set_double_tap),
	JS_CFUNC_DEF("is_double_tap", 0, &input_event_screen_touch_class_is_double_tap),
};

static void define_input_event_screen_touch_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "index"),
        JS_NewCFunction(ctx, input_event_screen_touch_class_get_index, "get_index", 0),
        JS_NewCFunction(ctx, input_event_screen_touch_class_set_index, "set_index", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "position"),
        JS_NewCFunction(ctx, input_event_screen_touch_class_get_position, "get_position", 0),
        JS_NewCFunction(ctx, input_event_screen_touch_class_set_position, "set_position", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "canceled"),
        JS_UNDEFINED,
        JS_NewCFunction(ctx, input_event_screen_touch_class_set_canceled, "set_canceled", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "pressed"),
        JS_UNDEFINED,
        JS_NewCFunction(ctx, input_event_screen_touch_class_set_pressed, "set_pressed", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "double_tap"),
        JS_NewCFunction(ctx, input_event_screen_touch_class_is_double_tap, "is_double_tap", 0),
        JS_NewCFunction(ctx, input_event_screen_touch_class_set_double_tap, "set_double_tap", 1),
        JS_PROP_GETSET
    );
	
}

static void define_input_event_screen_touch_enum(JSContext *ctx, JSValue proto) {
}

static int js_input_event_screen_touch_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["InputEventScreenTouch"] = InputEventScreenTouch::__class_id;
	class_id_list.insert(InputEventScreenTouch::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), InputEventScreenTouch::__class_id, &input_event_screen_touch_class_def);

	JSValue proto = JS_NewObjectClass(ctx, InputEventScreenTouch::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, InputEventFromWindow::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, InputEventScreenTouch::__class_id, proto);

	define_input_event_screen_touch_property(ctx, proto);
	define_input_event_screen_touch_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, input_event_screen_touch_class_proto_funcs, _countof(input_event_screen_touch_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, input_event_screen_touch_class_constructor, "InputEventScreenTouch", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "InputEventScreenTouch", ctor);
	constructors[InputEventScreenTouch::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_input_event_screen_touch_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/input_event_from_window';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_input_event_screen_touch_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "InputEventScreenTouch");
	return m;
}

JSModuleDef *js_init_input_event_screen_touch_module(JSContext *ctx) {
	return _js_init_input_event_screen_touch_module(ctx, "@godot/classes/input_event_screen_touch");
}

void register_input_event_screen_touch() {
	InputEventScreenTouch::__init_js_class_id();
	js_init_input_event_screen_touch_module(ctx);
}