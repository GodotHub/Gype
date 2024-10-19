
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/style_box_texture.hpp>
#include <godot_cpp/classes/style_box.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void style_box_texture_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef style_box_texture_class_def = {
	"StyleBoxTexture",
	.finalizer = style_box_texture_class_finalizer
};

static JSValue style_box_texture_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, StyleBoxTexture::__class_id);
	if (JS_IsException(obj))
		return obj;
	StyleBoxTexture *style_box_texture_class = memnew(StyleBoxTexture);
	if (!style_box_texture_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, style_box_texture_class);	
	return obj;
}
static JSValue style_box_texture_class_set_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&StyleBoxTexture::set_texture, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue style_box_texture_class_get_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&StyleBoxTexture::get_texture, ctx, this_val, argc, argv);
};
static JSValue style_box_texture_class_set_texture_margin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&StyleBoxTexture::set_texture_margin, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue style_box_texture_class_set_texture_margin_all(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&StyleBoxTexture::set_texture_margin_all, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue style_box_texture_class_get_texture_margin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&StyleBoxTexture::get_texture_margin, ctx, this_val, argc, argv);
};
static JSValue style_box_texture_class_set_expand_margin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&StyleBoxTexture::set_expand_margin, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue style_box_texture_class_set_expand_margin_all(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&StyleBoxTexture::set_expand_margin_all, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue style_box_texture_class_get_expand_margin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&StyleBoxTexture::get_expand_margin, ctx, this_val, argc, argv);
};
static JSValue style_box_texture_class_set_region_rect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&StyleBoxTexture::set_region_rect, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue style_box_texture_class_get_region_rect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&StyleBoxTexture::get_region_rect, ctx, this_val, argc, argv);
};
static JSValue style_box_texture_class_set_draw_center(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&StyleBoxTexture::set_draw_center, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue style_box_texture_class_is_draw_center_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&StyleBoxTexture::is_draw_center_enabled, ctx, this_val, argc, argv);
};
static JSValue style_box_texture_class_set_modulate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&StyleBoxTexture::set_modulate, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue style_box_texture_class_get_modulate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&StyleBoxTexture::get_modulate, ctx, this_val, argc, argv);
};
static JSValue style_box_texture_class_set_h_axis_stretch_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&StyleBoxTexture::set_h_axis_stretch_mode, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue style_box_texture_class_get_h_axis_stretch_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&StyleBoxTexture::get_h_axis_stretch_mode, ctx, this_val, argc, argv);
};
static JSValue style_box_texture_class_set_v_axis_stretch_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&StyleBoxTexture::set_v_axis_stretch_mode, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue style_box_texture_class_get_v_axis_stretch_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&StyleBoxTexture::get_v_axis_stretch_mode, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry style_box_texture_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_texture", 1, &style_box_texture_class_set_texture),
	JS_CFUNC_DEF("get_texture", 0, &style_box_texture_class_get_texture),
	JS_CFUNC_DEF("set_texture_margin", 2, &style_box_texture_class_set_texture_margin),
	JS_CFUNC_DEF("set_texture_margin_all", 1, &style_box_texture_class_set_texture_margin_all),
	JS_CFUNC_DEF("get_texture_margin", 1, &style_box_texture_class_get_texture_margin),
	JS_CFUNC_DEF("set_expand_margin", 2, &style_box_texture_class_set_expand_margin),
	JS_CFUNC_DEF("set_expand_margin_all", 1, &style_box_texture_class_set_expand_margin_all),
	JS_CFUNC_DEF("get_expand_margin", 1, &style_box_texture_class_get_expand_margin),
	JS_CFUNC_DEF("set_region_rect", 1, &style_box_texture_class_set_region_rect),
	JS_CFUNC_DEF("get_region_rect", 0, &style_box_texture_class_get_region_rect),
	JS_CFUNC_DEF("set_draw_center", 1, &style_box_texture_class_set_draw_center),
	JS_CFUNC_DEF("is_draw_center_enabled", 0, &style_box_texture_class_is_draw_center_enabled),
	JS_CFUNC_DEF("set_modulate", 1, &style_box_texture_class_set_modulate),
	JS_CFUNC_DEF("get_modulate", 0, &style_box_texture_class_get_modulate),
	JS_CFUNC_DEF("set_h_axis_stretch_mode", 1, &style_box_texture_class_set_h_axis_stretch_mode),
	JS_CFUNC_DEF("get_h_axis_stretch_mode", 0, &style_box_texture_class_get_h_axis_stretch_mode),
	JS_CFUNC_DEF("set_v_axis_stretch_mode", 1, &style_box_texture_class_set_v_axis_stretch_mode),
	JS_CFUNC_DEF("get_v_axis_stretch_mode", 0, &style_box_texture_class_get_v_axis_stretch_mode),
};

void define_style_box_texture_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "texture"),
        JS_NewCFunction(ctx, style_box_texture_class_get_texture, "get_texture", 0),
        JS_NewCFunction(ctx, style_box_texture_class_set_texture, "set_texture", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "texture_margin_left"),
        JS_NewCFunction(ctx, style_box_texture_class_get_texture_margin, "get_texture_margin", 0),
        JS_NewCFunction(ctx, style_box_texture_class_set_texture_margin, "set_texture_margin", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "texture_margin_top"),
        JS_NewCFunction(ctx, style_box_texture_class_get_texture_margin, "get_texture_margin", 0),
        JS_NewCFunction(ctx, style_box_texture_class_set_texture_margin, "set_texture_margin", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "texture_margin_right"),
        JS_NewCFunction(ctx, style_box_texture_class_get_texture_margin, "get_texture_margin", 0),
        JS_NewCFunction(ctx, style_box_texture_class_set_texture_margin, "set_texture_margin", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "texture_margin_bottom"),
        JS_NewCFunction(ctx, style_box_texture_class_get_texture_margin, "get_texture_margin", 0),
        JS_NewCFunction(ctx, style_box_texture_class_set_texture_margin, "set_texture_margin", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "expand_margin_left"),
        JS_NewCFunction(ctx, style_box_texture_class_get_expand_margin, "get_expand_margin", 0),
        JS_NewCFunction(ctx, style_box_texture_class_set_expand_margin, "set_expand_margin", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "expand_margin_top"),
        JS_NewCFunction(ctx, style_box_texture_class_get_expand_margin, "get_expand_margin", 0),
        JS_NewCFunction(ctx, style_box_texture_class_set_expand_margin, "set_expand_margin", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "expand_margin_right"),
        JS_NewCFunction(ctx, style_box_texture_class_get_expand_margin, "get_expand_margin", 0),
        JS_NewCFunction(ctx, style_box_texture_class_set_expand_margin, "set_expand_margin", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "expand_margin_bottom"),
        JS_NewCFunction(ctx, style_box_texture_class_get_expand_margin, "get_expand_margin", 0),
        JS_NewCFunction(ctx, style_box_texture_class_set_expand_margin, "set_expand_margin", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "axis_stretch_horizontal"),
        JS_NewCFunction(ctx, style_box_texture_class_get_h_axis_stretch_mode, "get_h_axis_stretch_mode", 0),
        JS_NewCFunction(ctx, style_box_texture_class_set_h_axis_stretch_mode, "set_h_axis_stretch_mode", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "axis_stretch_vertical"),
        JS_NewCFunction(ctx, style_box_texture_class_get_v_axis_stretch_mode, "get_v_axis_stretch_mode", 0),
        JS_NewCFunction(ctx, style_box_texture_class_set_v_axis_stretch_mode, "set_v_axis_stretch_mode", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "region_rect"),
        JS_NewCFunction(ctx, style_box_texture_class_get_region_rect, "get_region_rect", 0),
        JS_NewCFunction(ctx, style_box_texture_class_set_region_rect, "set_region_rect", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "modulate_color"),
        JS_NewCFunction(ctx, style_box_texture_class_get_modulate, "get_modulate", 0),
        JS_NewCFunction(ctx, style_box_texture_class_set_modulate, "set_modulate", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "draw_center"),
        JS_NewCFunction(ctx, style_box_texture_class_is_draw_center_enabled, "is_draw_center_enabled", 0),
        JS_NewCFunction(ctx, style_box_texture_class_set_draw_center, "set_draw_center", 1),
        JS_PROP_GETSET
    );
}

static int js_style_box_texture_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&StyleBoxTexture::__class_id);
	classes["StyleBoxTexture"] = StyleBoxTexture::__class_id;
	class_id_list.insert(StyleBoxTexture::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), StyleBoxTexture::__class_id, &style_box_texture_class_def);

	JSValue proto = JS_NewObjectClass(ctx, StyleBoxTexture::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, StyleBox::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, StyleBoxTexture::__class_id, proto);

	define_style_box_texture_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, style_box_texture_class_proto_funcs, _countof(style_box_texture_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, style_box_texture_class_constructor, "StyleBoxTexture", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "StyleBoxTexture", ctor);

	return 0;
}

JSModuleDef *_js_init_style_box_texture_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/style_box';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_style_box_texture_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "StyleBoxTexture");
	return m;
}

JSModuleDef *js_init_style_box_texture_module(JSContext *ctx) {
	return _js_init_style_box_texture_module(ctx, "godot/classes/style_box_texture");
}

void register_style_box_texture() {
	StyleBoxTexture::__init_js_class_id();
	js_init_style_box_texture_module(ctx);
}