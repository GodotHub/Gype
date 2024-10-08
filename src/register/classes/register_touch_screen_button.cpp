
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/touch_screen_button.hpp>
#include <godot_cpp/classes/shape2d.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/classes/bit_map.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void touch_screen_button_class_finalizer(JSRuntime *rt, JSValue val) {
	TouchScreenButton *touch_screen_button = static_cast<TouchScreenButton *>(JS_GetOpaque(val, TouchScreenButton::__class_id));
	if (touch_screen_button)
		TouchScreenButton::free(nullptr, touch_screen_button);
}

static JSClassDef touch_screen_button_class_def = {
	"TouchScreenButton",
	.finalizer = touch_screen_button_class_finalizer
};

static JSValue touch_screen_button_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	TouchScreenButton *touch_screen_button_class;
	JSValue obj = JS_NewObjectClass(ctx, TouchScreenButton::__class_id);
	if (JS_IsException(obj))
		return obj;
	touch_screen_button_class = memnew(TouchScreenButton);
	if (!touch_screen_button_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, touch_screen_button_class);
	return obj;
}
static JSValue touch_screen_button_class_set_texture_normal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TouchScreenButton::set_texture_normal, TouchScreenButton::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue touch_screen_button_class_get_texture_normal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TouchScreenButton::get_texture_normal, TouchScreenButton::__class_id, ctx, this_val, argv);
};
static JSValue touch_screen_button_class_set_texture_pressed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TouchScreenButton::set_texture_pressed, TouchScreenButton::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue touch_screen_button_class_get_texture_pressed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TouchScreenButton::get_texture_pressed, TouchScreenButton::__class_id, ctx, this_val, argv);
};
static JSValue touch_screen_button_class_set_bitmask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TouchScreenButton::set_bitmask, TouchScreenButton::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue touch_screen_button_class_get_bitmask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TouchScreenButton::get_bitmask, TouchScreenButton::__class_id, ctx, this_val, argv);
};
static JSValue touch_screen_button_class_set_shape(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TouchScreenButton::set_shape, TouchScreenButton::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue touch_screen_button_class_get_shape(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TouchScreenButton::get_shape, TouchScreenButton::__class_id, ctx, this_val, argv);
};
static JSValue touch_screen_button_class_set_shape_centered(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TouchScreenButton::set_shape_centered, TouchScreenButton::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue touch_screen_button_class_is_shape_centered(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TouchScreenButton::is_shape_centered, TouchScreenButton::__class_id, ctx, this_val, argv);
};
static JSValue touch_screen_button_class_set_shape_visible(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TouchScreenButton::set_shape_visible, TouchScreenButton::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue touch_screen_button_class_is_shape_visible(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TouchScreenButton::is_shape_visible, TouchScreenButton::__class_id, ctx, this_val, argv);
};
static JSValue touch_screen_button_class_set_action(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TouchScreenButton::set_action, TouchScreenButton::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue touch_screen_button_class_get_action(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TouchScreenButton::get_action, TouchScreenButton::__class_id, ctx, this_val, argv);
};
static JSValue touch_screen_button_class_set_visibility_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TouchScreenButton::set_visibility_mode, TouchScreenButton::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue touch_screen_button_class_get_visibility_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TouchScreenButton::get_visibility_mode, TouchScreenButton::__class_id, ctx, this_val, argv);
};
static JSValue touch_screen_button_class_set_passby_press(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TouchScreenButton::set_passby_press, TouchScreenButton::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue touch_screen_button_class_is_passby_press_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TouchScreenButton::is_passby_press_enabled, TouchScreenButton::__class_id, ctx, this_val, argv);
};
static JSValue touch_screen_button_class_is_pressed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TouchScreenButton::is_pressed, TouchScreenButton::__class_id, ctx, this_val, argv);
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

static int js_touch_screen_button_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&TouchScreenButton::__class_id);
	classes["TouchScreenButton"] = TouchScreenButton::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), TouchScreenButton::__class_id, &touch_screen_button_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Node2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, TouchScreenButton::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, touch_screen_button_class_proto_funcs, _countof(touch_screen_button_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, touch_screen_button_class_constructor, "TouchScreenButton", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "TouchScreenButton", ctor);

	return 0;
}

JSModuleDef *_js_init_touch_screen_button_module(JSContext *ctx, const char *module_name) {
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
	js_init_touch_screen_button_module(ctx);
}