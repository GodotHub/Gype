
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/bit_map.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/texture_button.hpp>
#include <godot_cpp/classes/base_button.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void texture_button_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef texture_button_class_def = {
	"TextureButton",
	.finalizer = texture_button_class_finalizer
};

static JSValue texture_button_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, TextureButton::__class_id);
	if (JS_IsException(obj))
		return obj;
	TextureButton *texture_button_class = memnew(TextureButton);
	if (!texture_button_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, texture_button_class);	
	return obj;
}
static JSValue texture_button_class_set_texture_normal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&TextureButton::set_texture_normal, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue texture_button_class_set_texture_pressed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&TextureButton::set_texture_pressed, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue texture_button_class_set_texture_hover(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&TextureButton::set_texture_hover, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue texture_button_class_set_texture_disabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&TextureButton::set_texture_disabled, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue texture_button_class_set_texture_focused(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&TextureButton::set_texture_focused, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue texture_button_class_set_click_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&TextureButton::set_click_mask, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue texture_button_class_set_ignore_texture_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&TextureButton::set_ignore_texture_size, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue texture_button_class_set_stretch_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&TextureButton::set_stretch_mode, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue texture_button_class_set_flip_h(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&TextureButton::set_flip_h, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue texture_button_class_is_flipped_h(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TextureButton::is_flipped_h, ctx, this_val, argc, argv);
};
static JSValue texture_button_class_set_flip_v(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&TextureButton::set_flip_v, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue texture_button_class_is_flipped_v(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TextureButton::is_flipped_v, ctx, this_val, argc, argv);
};
static JSValue texture_button_class_get_texture_normal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TextureButton::get_texture_normal, ctx, this_val, argc, argv);
};
static JSValue texture_button_class_get_texture_pressed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TextureButton::get_texture_pressed, ctx, this_val, argc, argv);
};
static JSValue texture_button_class_get_texture_hover(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TextureButton::get_texture_hover, ctx, this_val, argc, argv);
};
static JSValue texture_button_class_get_texture_disabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TextureButton::get_texture_disabled, ctx, this_val, argc, argv);
};
static JSValue texture_button_class_get_texture_focused(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TextureButton::get_texture_focused, ctx, this_val, argc, argv);
};
static JSValue texture_button_class_get_click_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TextureButton::get_click_mask, ctx, this_val, argc, argv);
};
static JSValue texture_button_class_get_ignore_texture_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TextureButton::get_ignore_texture_size, ctx, this_val, argc, argv);
};
static JSValue texture_button_class_get_stretch_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TextureButton::get_stretch_mode, ctx, this_val, argc, argv);
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

void define_texture_button_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "texture_normal"),
        JS_NewCFunction(ctx, texture_button_class_get_texture_normal, "get_texture_normal", 0),
        JS_NewCFunction(ctx, texture_button_class_set_texture_normal, "set_texture_normal", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "texture_pressed"),
        JS_NewCFunction(ctx, texture_button_class_get_texture_pressed, "get_texture_pressed", 0),
        JS_NewCFunction(ctx, texture_button_class_set_texture_pressed, "set_texture_pressed", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "texture_hover"),
        JS_NewCFunction(ctx, texture_button_class_get_texture_hover, "get_texture_hover", 0),
        JS_NewCFunction(ctx, texture_button_class_set_texture_hover, "set_texture_hover", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "texture_disabled"),
        JS_NewCFunction(ctx, texture_button_class_get_texture_disabled, "get_texture_disabled", 0),
        JS_NewCFunction(ctx, texture_button_class_set_texture_disabled, "set_texture_disabled", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "texture_focused"),
        JS_NewCFunction(ctx, texture_button_class_get_texture_focused, "get_texture_focused", 0),
        JS_NewCFunction(ctx, texture_button_class_set_texture_focused, "set_texture_focused", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "texture_click_mask"),
        JS_NewCFunction(ctx, texture_button_class_get_click_mask, "get_click_mask", 0),
        JS_NewCFunction(ctx, texture_button_class_set_click_mask, "set_click_mask", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "ignore_texture_size"),
        JS_NewCFunction(ctx, texture_button_class_get_ignore_texture_size, "get_ignore_texture_size", 0),
        JS_NewCFunction(ctx, texture_button_class_set_ignore_texture_size, "set_ignore_texture_size", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "stretch_mode"),
        JS_NewCFunction(ctx, texture_button_class_get_stretch_mode, "get_stretch_mode", 0),
        JS_NewCFunction(ctx, texture_button_class_set_stretch_mode, "set_stretch_mode", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "flip_h"),
        JS_NewCFunction(ctx, texture_button_class_is_flipped_h, "is_flipped_h", 0),
        JS_NewCFunction(ctx, texture_button_class_set_flip_h, "set_flip_h", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "flip_v"),
        JS_NewCFunction(ctx, texture_button_class_is_flipped_v, "is_flipped_v", 0),
        JS_NewCFunction(ctx, texture_button_class_set_flip_v, "set_flip_v", 1),
        JS_PROP_GETSET
    );
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
	JSValue StretchMode_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, StretchMode_obj, "STRETCH_SCALE", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, StretchMode_obj, "STRETCH_TILE", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, StretchMode_obj, "STRETCH_KEEP", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, StretchMode_obj, "STRETCH_KEEP_CENTERED", JS_NewInt64(ctx, 3));
	JS_SetPropertyStr(ctx, StretchMode_obj, "STRETCH_KEEP_ASPECT", JS_NewInt64(ctx, 4));
	JS_SetPropertyStr(ctx, StretchMode_obj, "STRETCH_KEEP_ASPECT_CENTERED", JS_NewInt64(ctx, 5));
	JS_SetPropertyStr(ctx, StretchMode_obj, "STRETCH_KEEP_ASPECT_COVERED", JS_NewInt64(ctx, 6));
	JS_SetPropertyStr(ctx, proto, "StretchMode", StretchMode_obj);
}

static int js_texture_button_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&TextureButton::__class_id);
	classes["TextureButton"] = TextureButton::__class_id;
	class_id_list.insert(TextureButton::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), TextureButton::__class_id, &texture_button_class_def);

	JSValue proto = JS_NewObjectClass(ctx, TextureButton::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, BaseButton::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, TextureButton::__class_id, proto);

	define_texture_button_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, texture_button_class_proto_funcs, _countof(texture_button_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, texture_button_class_constructor, "TextureButton", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "TextureButton", ctor);

	return 0;
}

JSModuleDef *_js_init_texture_button_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/base_button';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
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
	TextureButton::__init_js_class_id();
	js_init_texture_button_module(ctx);
}