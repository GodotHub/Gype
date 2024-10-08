
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/base_button.hpp>
#include <godot_cpp/classes/texture_button.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/bit_map.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void texture_button_class_finalizer(JSRuntime *rt, JSValue val) {
	TextureButton *texture_button = static_cast<TextureButton *>(JS_GetOpaque(val, TextureButton::__class_id));
	if (texture_button)
		TextureButton::free(nullptr, texture_button);
}

static JSClassDef texture_button_class_def = {
	"TextureButton",
	.finalizer = texture_button_class_finalizer
};

static JSValue texture_button_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	TextureButton *texture_button_class;
	JSValue obj = JS_NewObjectClass(ctx, TextureButton::__class_id);
	if (JS_IsException(obj))
		return obj;
	texture_button_class = memnew(TextureButton);
	if (!texture_button_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, texture_button_class);
	return obj;
}
static JSValue texture_button_class_set_texture_normal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextureButton::set_texture_normal, TextureButton::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue texture_button_class_set_texture_pressed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextureButton::set_texture_pressed, TextureButton::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue texture_button_class_set_texture_hover(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextureButton::set_texture_hover, TextureButton::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue texture_button_class_set_texture_disabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextureButton::set_texture_disabled, TextureButton::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue texture_button_class_set_texture_focused(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextureButton::set_texture_focused, TextureButton::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue texture_button_class_set_click_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextureButton::set_click_mask, TextureButton::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue texture_button_class_set_ignore_texture_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextureButton::set_ignore_texture_size, TextureButton::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue texture_button_class_set_stretch_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextureButton::set_stretch_mode, TextureButton::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue texture_button_class_set_flip_h(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextureButton::set_flip_h, TextureButton::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue texture_button_class_is_flipped_h(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextureButton::is_flipped_h, TextureButton::__class_id, ctx, this_val, argv);
};
static JSValue texture_button_class_set_flip_v(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextureButton::set_flip_v, TextureButton::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue texture_button_class_is_flipped_v(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextureButton::is_flipped_v, TextureButton::__class_id, ctx, this_val, argv);
};
static JSValue texture_button_class_get_texture_normal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextureButton::get_texture_normal, TextureButton::__class_id, ctx, this_val, argv);
};
static JSValue texture_button_class_get_texture_pressed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextureButton::get_texture_pressed, TextureButton::__class_id, ctx, this_val, argv);
};
static JSValue texture_button_class_get_texture_hover(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextureButton::get_texture_hover, TextureButton::__class_id, ctx, this_val, argv);
};
static JSValue texture_button_class_get_texture_disabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextureButton::get_texture_disabled, TextureButton::__class_id, ctx, this_val, argv);
};
static JSValue texture_button_class_get_texture_focused(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextureButton::get_texture_focused, TextureButton::__class_id, ctx, this_val, argv);
};
static JSValue texture_button_class_get_click_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextureButton::get_click_mask, TextureButton::__class_id, ctx, this_val, argv);
};
static JSValue texture_button_class_get_ignore_texture_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextureButton::get_ignore_texture_size, TextureButton::__class_id, ctx, this_val, argv);
};
static JSValue texture_button_class_get_stretch_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextureButton::get_stretch_mode, TextureButton::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry texture_button_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_texture_normal", 1, &texture_button_class_set_texture_normal),
	JS_CFUNC_DEF("set_texture_pressed", 1, &texture_button_class_set_texture_pressed),
	JS_CFUNC_DEF("set_texture_hover", 1, &texture_button_class_set_texture_hover),
	JS_CFUNC_DEF("set_texture_disabled", 1, &texture_button_class_set_texture_disabled),
	JS_CFUNC_DEF("set_texture_focused", 1, &texture_button_class_set_texture_focused),
	JS_CFUNC_DEF("set_click_mask", 1, &texture_button_class_set_click_mask),
	JS_CFUNC_DEF("set_ignore_texture_size", 1, &texture_button_class_set_ignore_texture_size),
	JS_CFUNC_DEF("set_stretch_mode", 1, &texture_button_class_set_stretch_mode),
	JS_CFUNC_DEF("set_flip_h", 1, &texture_button_class_set_flip_h),
	JS_CFUNC_DEF("is_flipped_h", 0, &texture_button_class_is_flipped_h),
	JS_CFUNC_DEF("set_flip_v", 1, &texture_button_class_set_flip_v),
	JS_CFUNC_DEF("is_flipped_v", 0, &texture_button_class_is_flipped_v),
	JS_CFUNC_DEF("get_texture_normal", 0, &texture_button_class_get_texture_normal),
	JS_CFUNC_DEF("get_texture_pressed", 0, &texture_button_class_get_texture_pressed),
	JS_CFUNC_DEF("get_texture_hover", 0, &texture_button_class_get_texture_hover),
	JS_CFUNC_DEF("get_texture_disabled", 0, &texture_button_class_get_texture_disabled),
	JS_CFUNC_DEF("get_texture_focused", 0, &texture_button_class_get_texture_focused),
	JS_CFUNC_DEF("get_click_mask", 0, &texture_button_class_get_click_mask),
	JS_CFUNC_DEF("get_ignore_texture_size", 0, &texture_button_class_get_ignore_texture_size),
	JS_CFUNC_DEF("get_stretch_mode", 0, &texture_button_class_get_stretch_mode),
};

static int js_texture_button_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&TextureButton::__class_id);
	classes["TextureButton"] = TextureButton::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), TextureButton::__class_id, &texture_button_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, BaseButton::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, TextureButton::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, texture_button_class_proto_funcs, _countof(texture_button_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, texture_button_class_constructor, "TextureButton", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "TextureButton", ctor);

	return 0;
}

JSModuleDef *_js_init_texture_button_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_texture_button_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "TextureButton");
	return m;
}

JSModuleDef *js_init_texture_button_module(JSContext *ctx) {
	return _js_init_texture_button_module(ctx, "godot/classes/texture_button");
}

void register_texture_button() {
	js_init_texture_button_module(ctx);
}