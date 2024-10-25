
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/bit_map.hpp>
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/touch_screen_button.hpp>
#include <godot_cpp/classes/shape2d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void touch_screen_button_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef touch_screen_button_class_def = {
	"TouchScreenButton",
	.finalizer = touch_screen_button_class_finalizer
};

static JSValue touch_screen_button_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, TouchScreenButton::__class_id);
	if (JS_IsException(obj))
		return obj;
	TouchScreenButton *touch_screen_button_class = memnew(TouchScreenButton);
	if (!touch_screen_button_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, touch_screen_button_class);	
	return obj;
}
static JSValue touch_screen_button_class_set_texture_normal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&TouchScreenButton::set_texture_normal, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue touch_screen_button_class_get_texture_normal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TouchScreenButton::get_texture_normal, ctx, this_val, argc, argv);
};
static JSValue touch_screen_button_class_set_texture_pressed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&TouchScreenButton::set_texture_pressed, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue touch_screen_button_class_get_texture_pressed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TouchScreenButton::get_texture_pressed, ctx, this_val, argc, argv);
};
static JSValue touch_screen_button_class_set_bitmask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&TouchScreenButton::set_bitmask, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue touch_screen_button_class_get_bitmask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TouchScreenButton::get_bitmask, ctx, this_val, argc, argv);
};
static JSValue touch_screen_button_class_set_shape(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&TouchScreenButton::set_shape, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue touch_screen_button_class_get_shape(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TouchScreenButton::get_shape, ctx, this_val, argc, argv);
};
static JSValue touch_screen_button_class_set_shape_centered(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&TouchScreenButton::set_shape_centered, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue touch_screen_button_class_is_shape_centered(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TouchScreenButton::is_shape_centered, ctx, this_val, argc, argv);
};
static JSValue touch_screen_button_class_set_shape_visible(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&TouchScreenButton::set_shape_visible, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue touch_screen_button_class_is_shape_visible(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TouchScreenButton::is_shape_visible, ctx, this_val, argc, argv);
};
static JSValue touch_screen_button_class_set_action(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&TouchScreenButton::set_action, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue touch_screen_button_class_get_action(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TouchScreenButton::get_action, ctx, this_val, argc, argv);
};
static JSValue touch_screen_button_class_set_visibility_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&TouchScreenButton::set_visibility_mode, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue touch_screen_button_class_get_visibility_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TouchScreenButton::get_visibility_mode, ctx, this_val, argc, argv);
};
static JSValue touch_screen_button_class_set_passby_press(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&TouchScreenButton::set_passby_press, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue touch_screen_button_class_is_passby_press_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TouchScreenButton::is_passby_press_enabled, ctx, this_val, argc, argv);
};
static JSValue touch_screen_button_class_is_pressed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TouchScreenButton::is_pressed, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry touch_screen_button_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_texture_normal", 1, &touch_screen_button_class_set_texture_normal),
	JS_CFUNC_DEF("get_texture_normal", 0, &touch_screen_button_class_get_texture_normal),
	JS_CFUNC_DEF("set_texture_pressed", 1, &touch_screen_button_class_set_texture_pressed),
	JS_CFUNC_DEF("get_texture_pressed", 0, &touch_screen_button_class_get_texture_pressed),
	JS_CFUNC_DEF("set_bitmask", 1, &touch_screen_button_class_set_bitmask),
	JS_CFUNC_DEF("get_bitmask", 0, &touch_screen_button_class_get_bitmask),
	JS_CFUNC_DEF("set_shape", 1, &touch_screen_button_class_set_shape),
	JS_CFUNC_DEF("get_shape", 0, &touch_screen_button_class_get_shape),
	JS_CFUNC_DEF("set_shape_centered", 1, &touch_screen_button_class_set_shape_centered),
	JS_CFUNC_DEF("is_shape_centered", 0, &touch_screen_button_class_is_shape_centered),
	JS_CFUNC_DEF("set_shape_visible", 1, &touch_screen_button_class_set_shape_visible),
	JS_CFUNC_DEF("is_shape_visible", 0, &touch_screen_button_class_is_shape_visible),
	JS_CFUNC_DEF("set_action", 1, &touch_screen_button_class_set_action),
	JS_CFUNC_DEF("get_action", 0, &touch_screen_button_class_get_action),
	JS_CFUNC_DEF("set_visibility_mode", 1, &touch_screen_button_class_set_visibility_mode),
	JS_CFUNC_DEF("get_visibility_mode", 0, &touch_screen_button_class_get_visibility_mode),
	JS_CFUNC_DEF("set_passby_press", 1, &touch_screen_button_class_set_passby_press),
	JS_CFUNC_DEF("is_passby_press_enabled", 0, &touch_screen_button_class_is_passby_press_enabled),
	JS_CFUNC_DEF("is_pressed", 0, &touch_screen_button_class_is_pressed),
};

void define_touch_screen_button_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "texture_normal"),
        JS_NewCFunction(ctx, touch_screen_button_class_get_texture_normal, "get_texture_normal", 0),
        JS_NewCFunction(ctx, touch_screen_button_class_set_texture_normal, "set_texture_normal", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "texture_pressed"),
        JS_NewCFunction(ctx, touch_screen_button_class_get_texture_pressed, "get_texture_pressed", 0),
        JS_NewCFunction(ctx, touch_screen_button_class_set_texture_pressed, "set_texture_pressed", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "bitmask"),
        JS_NewCFunction(ctx, touch_screen_button_class_get_bitmask, "get_bitmask", 0),
        JS_NewCFunction(ctx, touch_screen_button_class_set_bitmask, "set_bitmask", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "shape"),
        JS_NewCFunction(ctx, touch_screen_button_class_get_shape, "get_shape", 0),
        JS_NewCFunction(ctx, touch_screen_button_class_set_shape, "set_shape", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "shape_centered"),
        JS_NewCFunction(ctx, touch_screen_button_class_is_shape_centered, "is_shape_centered", 0),
        JS_NewCFunction(ctx, touch_screen_button_class_set_shape_centered, "set_shape_centered", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "shape_visible"),
        JS_NewCFunction(ctx, touch_screen_button_class_is_shape_visible, "is_shape_visible", 0),
        JS_NewCFunction(ctx, touch_screen_button_class_set_shape_visible, "set_shape_visible", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "passby_press"),
        JS_NewCFunction(ctx, touch_screen_button_class_is_passby_press_enabled, "is_passby_press_enabled", 0),
        JS_NewCFunction(ctx, touch_screen_button_class_set_passby_press, "set_passby_press", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "action"),
        JS_NewCFunction(ctx, touch_screen_button_class_get_action, "get_action", 0),
        JS_NewCFunction(ctx, touch_screen_button_class_set_action, "set_action", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "visibility_mode"),
        JS_NewCFunction(ctx, touch_screen_button_class_get_visibility_mode, "get_visibility_mode", 0),
        JS_NewCFunction(ctx, touch_screen_button_class_set_visibility_mode, "set_visibility_mode", 1),
        JS_PROP_GETSET
    );
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
	JSValue VisibilityMode_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, VisibilityMode_obj, "VISIBILITY_ALWAYS", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, VisibilityMode_obj, "VISIBILITY_TOUCHSCREEN_ONLY", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, proto, "VisibilityMode", VisibilityMode_obj);
}

static int js_touch_screen_button_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&TouchScreenButton::__class_id);
	classes["TouchScreenButton"] = TouchScreenButton::__class_id;
	class_id_list.insert(TouchScreenButton::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), TouchScreenButton::__class_id, &touch_screen_button_class_def);

	JSValue proto = JS_NewObjectClass(ctx, TouchScreenButton::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Node2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, TouchScreenButton::__class_id, proto);

	define_touch_screen_button_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, touch_screen_button_class_proto_funcs, _countof(touch_screen_button_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, touch_screen_button_class_constructor, "TouchScreenButton", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "TouchScreenButton", ctor);

	return 0;
}

JSModuleDef *_js_init_touch_screen_button_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/node2d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_touch_screen_button_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "TouchScreenButton");
	return m;
}

JSModuleDef *js_init_touch_screen_button_module(JSContext *ctx) {
	return _js_init_touch_screen_button_module(ctx, "godot/classes/touch_screen_button");
}

void register_touch_screen_button() {
	TouchScreenButton::__init_js_class_id();
	js_init_touch_screen_button_module(ctx);
}