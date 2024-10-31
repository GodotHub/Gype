
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/style_box.hpp>
#include <godot_cpp/classes/style_box_flat.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void style_box_flat_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef style_box_flat_class_def = {
	"StyleBoxFlat",
	.finalizer = style_box_flat_class_finalizer
};

static JSValue style_box_flat_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, StyleBoxFlat::__class_id);
	if (JS_IsException(obj))
		return obj;

	StyleBoxFlat *style_box_flat_class;
	if (argc == 1) 
		style_box_flat_class = static_cast<StyleBoxFlat *>(static_cast<Object *>(Variant(*argv)));
	else 
		style_box_flat_class = memnew(StyleBoxFlat);
	if (!style_box_flat_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, style_box_flat_class);	
	return obj;
}
static JSValue style_box_flat_class_set_bg_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&StyleBoxFlat::set_bg_color, ctx, this_val, argc, argv);
};
static JSValue style_box_flat_class_get_bg_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&StyleBoxFlat::get_bg_color, ctx, this_val, argc, argv);
};
static JSValue style_box_flat_class_set_border_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&StyleBoxFlat::set_border_color, ctx, this_val, argc, argv);
};
static JSValue style_box_flat_class_get_border_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&StyleBoxFlat::get_border_color, ctx, this_val, argc, argv);
};
static JSValue style_box_flat_class_set_border_width_all(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&StyleBoxFlat::set_border_width_all, ctx, this_val, argc, argv);
};
static JSValue style_box_flat_class_get_border_width_min(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&StyleBoxFlat::get_border_width_min, ctx, this_val, argc, argv);
};
static JSValue style_box_flat_class_set_border_width(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&StyleBoxFlat::set_border_width, ctx, this_val, argc, argv);
};
static JSValue style_box_flat_class_get_border_width(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&StyleBoxFlat::get_border_width, ctx, this_val, argc, argv);
};
static JSValue style_box_flat_class_set_border_blend(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&StyleBoxFlat::set_border_blend, ctx, this_val, argc, argv);
};
static JSValue style_box_flat_class_get_border_blend(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&StyleBoxFlat::get_border_blend, ctx, this_val, argc, argv);
};
static JSValue style_box_flat_class_set_corner_radius_all(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&StyleBoxFlat::set_corner_radius_all, ctx, this_val, argc, argv);
};
static JSValue style_box_flat_class_set_corner_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&StyleBoxFlat::set_corner_radius, ctx, this_val, argc, argv);
};
static JSValue style_box_flat_class_get_corner_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&StyleBoxFlat::get_corner_radius, ctx, this_val, argc, argv);
};
static JSValue style_box_flat_class_set_expand_margin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&StyleBoxFlat::set_expand_margin, ctx, this_val, argc, argv);
};
static JSValue style_box_flat_class_set_expand_margin_all(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&StyleBoxFlat::set_expand_margin_all, ctx, this_val, argc, argv);
};
static JSValue style_box_flat_class_get_expand_margin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&StyleBoxFlat::get_expand_margin, ctx, this_val, argc, argv);
};
static JSValue style_box_flat_class_set_draw_center(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&StyleBoxFlat::set_draw_center, ctx, this_val, argc, argv);
};
static JSValue style_box_flat_class_is_draw_center_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&StyleBoxFlat::is_draw_center_enabled, ctx, this_val, argc, argv);
};
static JSValue style_box_flat_class_set_skew(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&StyleBoxFlat::set_skew, ctx, this_val, argc, argv);
};
static JSValue style_box_flat_class_get_skew(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&StyleBoxFlat::get_skew, ctx, this_val, argc, argv);
};
static JSValue style_box_flat_class_set_shadow_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&StyleBoxFlat::set_shadow_color, ctx, this_val, argc, argv);
};
static JSValue style_box_flat_class_get_shadow_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&StyleBoxFlat::get_shadow_color, ctx, this_val, argc, argv);
};
static JSValue style_box_flat_class_set_shadow_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&StyleBoxFlat::set_shadow_size, ctx, this_val, argc, argv);
};
static JSValue style_box_flat_class_get_shadow_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&StyleBoxFlat::get_shadow_size, ctx, this_val, argc, argv);
};
static JSValue style_box_flat_class_set_shadow_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&StyleBoxFlat::set_shadow_offset, ctx, this_val, argc, argv);
};
static JSValue style_box_flat_class_get_shadow_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&StyleBoxFlat::get_shadow_offset, ctx, this_val, argc, argv);
};
static JSValue style_box_flat_class_set_anti_aliased(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&StyleBoxFlat::set_anti_aliased, ctx, this_val, argc, argv);
};
static JSValue style_box_flat_class_is_anti_aliased(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&StyleBoxFlat::is_anti_aliased, ctx, this_val, argc, argv);
};
static JSValue style_box_flat_class_set_aa_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&StyleBoxFlat::set_aa_size, ctx, this_val, argc, argv);
};
static JSValue style_box_flat_class_get_aa_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&StyleBoxFlat::get_aa_size, ctx, this_val, argc, argv);
};
static JSValue style_box_flat_class_set_corner_detail(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&StyleBoxFlat::set_corner_detail, ctx, this_val, argc, argv);
};
static JSValue style_box_flat_class_get_corner_detail(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&StyleBoxFlat::get_corner_detail, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry style_box_flat_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_bg_color", 1, &style_box_flat_class_set_bg_color),
	JS_CFUNC_DEF("get_bg_color", 0, &style_box_flat_class_get_bg_color),
	JS_CFUNC_DEF("set_border_color", 1, &style_box_flat_class_set_border_color),
	JS_CFUNC_DEF("get_border_color", 0, &style_box_flat_class_get_border_color),
	JS_CFUNC_DEF("set_border_width_all", 1, &style_box_flat_class_set_border_width_all),
	JS_CFUNC_DEF("get_border_width_min", 0, &style_box_flat_class_get_border_width_min),
	JS_CFUNC_DEF("set_border_width", 2, &style_box_flat_class_set_border_width),
	JS_CFUNC_DEF("get_border_width", 1, &style_box_flat_class_get_border_width),
	JS_CFUNC_DEF("set_border_blend", 1, &style_box_flat_class_set_border_blend),
	JS_CFUNC_DEF("get_border_blend", 0, &style_box_flat_class_get_border_blend),
	JS_CFUNC_DEF("set_corner_radius_all", 1, &style_box_flat_class_set_corner_radius_all),
	JS_CFUNC_DEF("set_corner_radius", 2, &style_box_flat_class_set_corner_radius),
	JS_CFUNC_DEF("get_corner_radius", 1, &style_box_flat_class_get_corner_radius),
	JS_CFUNC_DEF("set_expand_margin", 2, &style_box_flat_class_set_expand_margin),
	JS_CFUNC_DEF("set_expand_margin_all", 1, &style_box_flat_class_set_expand_margin_all),
	JS_CFUNC_DEF("get_expand_margin", 1, &style_box_flat_class_get_expand_margin),
	JS_CFUNC_DEF("set_draw_center", 1, &style_box_flat_class_set_draw_center),
	JS_CFUNC_DEF("is_draw_center_enabled", 0, &style_box_flat_class_is_draw_center_enabled),
	JS_CFUNC_DEF("set_skew", 1, &style_box_flat_class_set_skew),
	JS_CFUNC_DEF("get_skew", 0, &style_box_flat_class_get_skew),
	JS_CFUNC_DEF("set_shadow_color", 1, &style_box_flat_class_set_shadow_color),
	JS_CFUNC_DEF("get_shadow_color", 0, &style_box_flat_class_get_shadow_color),
	JS_CFUNC_DEF("set_shadow_size", 1, &style_box_flat_class_set_shadow_size),
	JS_CFUNC_DEF("get_shadow_size", 0, &style_box_flat_class_get_shadow_size),
	JS_CFUNC_DEF("set_shadow_offset", 1, &style_box_flat_class_set_shadow_offset),
	JS_CFUNC_DEF("get_shadow_offset", 0, &style_box_flat_class_get_shadow_offset),
	JS_CFUNC_DEF("set_anti_aliased", 1, &style_box_flat_class_set_anti_aliased),
	JS_CFUNC_DEF("is_anti_aliased", 0, &style_box_flat_class_is_anti_aliased),
	JS_CFUNC_DEF("set_aa_size", 1, &style_box_flat_class_set_aa_size),
	JS_CFUNC_DEF("get_aa_size", 0, &style_box_flat_class_get_aa_size),
	JS_CFUNC_DEF("set_corner_detail", 1, &style_box_flat_class_set_corner_detail),
	JS_CFUNC_DEF("get_corner_detail", 0, &style_box_flat_class_get_corner_detail),
};

static void define_style_box_flat_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "bg_color"),
        JS_NewCFunction(ctx, style_box_flat_class_get_bg_color, "get_bg_color", 0),
        JS_NewCFunction(ctx, style_box_flat_class_set_bg_color, "set_bg_color", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "draw_center"),
        JS_NewCFunction(ctx, style_box_flat_class_is_draw_center_enabled, "is_draw_center_enabled", 0),
        JS_NewCFunction(ctx, style_box_flat_class_set_draw_center, "set_draw_center", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "skew"),
        JS_NewCFunction(ctx, style_box_flat_class_get_skew, "get_skew", 0),
        JS_NewCFunction(ctx, style_box_flat_class_set_skew, "set_skew", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "border_width_left"),
        JS_NewCFunction(ctx, style_box_flat_class_get_border_width, "get_border_width", 0),
        JS_NewCFunction(ctx, style_box_flat_class_set_border_width, "set_border_width", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "border_width_top"),
        JS_NewCFunction(ctx, style_box_flat_class_get_border_width, "get_border_width", 0),
        JS_NewCFunction(ctx, style_box_flat_class_set_border_width, "set_border_width", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "border_width_right"),
        JS_NewCFunction(ctx, style_box_flat_class_get_border_width, "get_border_width", 0),
        JS_NewCFunction(ctx, style_box_flat_class_set_border_width, "set_border_width", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "border_width_bottom"),
        JS_NewCFunction(ctx, style_box_flat_class_get_border_width, "get_border_width", 0),
        JS_NewCFunction(ctx, style_box_flat_class_set_border_width, "set_border_width", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "border_color"),
        JS_NewCFunction(ctx, style_box_flat_class_get_border_color, "get_border_color", 0),
        JS_NewCFunction(ctx, style_box_flat_class_set_border_color, "set_border_color", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "border_blend"),
        JS_NewCFunction(ctx, style_box_flat_class_get_border_blend, "get_border_blend", 0),
        JS_NewCFunction(ctx, style_box_flat_class_set_border_blend, "set_border_blend", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "corner_radius_top_left"),
        JS_NewCFunction(ctx, style_box_flat_class_get_corner_radius, "get_corner_radius", 0),
        JS_NewCFunction(ctx, style_box_flat_class_set_corner_radius, "set_corner_radius", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "corner_radius_top_right"),
        JS_NewCFunction(ctx, style_box_flat_class_get_corner_radius, "get_corner_radius", 0),
        JS_NewCFunction(ctx, style_box_flat_class_set_corner_radius, "set_corner_radius", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "corner_radius_bottom_right"),
        JS_NewCFunction(ctx, style_box_flat_class_get_corner_radius, "get_corner_radius", 0),
        JS_NewCFunction(ctx, style_box_flat_class_set_corner_radius, "set_corner_radius", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "corner_radius_bottom_left"),
        JS_NewCFunction(ctx, style_box_flat_class_get_corner_radius, "get_corner_radius", 0),
        JS_NewCFunction(ctx, style_box_flat_class_set_corner_radius, "set_corner_radius", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "corner_detail"),
        JS_NewCFunction(ctx, style_box_flat_class_get_corner_detail, "get_corner_detail", 0),
        JS_NewCFunction(ctx, style_box_flat_class_set_corner_detail, "set_corner_detail", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "expand_margin_left"),
        JS_NewCFunction(ctx, style_box_flat_class_get_expand_margin, "get_expand_margin", 0),
        JS_NewCFunction(ctx, style_box_flat_class_set_expand_margin, "set_expand_margin", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "expand_margin_top"),
        JS_NewCFunction(ctx, style_box_flat_class_get_expand_margin, "get_expand_margin", 0),
        JS_NewCFunction(ctx, style_box_flat_class_set_expand_margin, "set_expand_margin", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "expand_margin_right"),
        JS_NewCFunction(ctx, style_box_flat_class_get_expand_margin, "get_expand_margin", 0),
        JS_NewCFunction(ctx, style_box_flat_class_set_expand_margin, "set_expand_margin", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "expand_margin_bottom"),
        JS_NewCFunction(ctx, style_box_flat_class_get_expand_margin, "get_expand_margin", 0),
        JS_NewCFunction(ctx, style_box_flat_class_set_expand_margin, "set_expand_margin", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "shadow_color"),
        JS_NewCFunction(ctx, style_box_flat_class_get_shadow_color, "get_shadow_color", 0),
        JS_NewCFunction(ctx, style_box_flat_class_set_shadow_color, "set_shadow_color", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "shadow_size"),
        JS_NewCFunction(ctx, style_box_flat_class_get_shadow_size, "get_shadow_size", 0),
        JS_NewCFunction(ctx, style_box_flat_class_set_shadow_size, "set_shadow_size", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "shadow_offset"),
        JS_NewCFunction(ctx, style_box_flat_class_get_shadow_offset, "get_shadow_offset", 0),
        JS_NewCFunction(ctx, style_box_flat_class_set_shadow_offset, "set_shadow_offset", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "anti_aliasing"),
        JS_NewCFunction(ctx, style_box_flat_class_is_anti_aliased, "is_anti_aliased", 0),
        JS_NewCFunction(ctx, style_box_flat_class_set_anti_aliased, "set_anti_aliased", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "anti_aliasing_size"),
        JS_NewCFunction(ctx, style_box_flat_class_get_aa_size, "get_aa_size", 0),
        JS_NewCFunction(ctx, style_box_flat_class_set_aa_size, "set_aa_size", 1),
        JS_PROP_GETSET
    );
	
}

static void define_style_box_flat_enum(JSContext *ctx, JSValue proto) {
}

static int js_style_box_flat_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&StyleBoxFlat::__class_id);
	classes["StyleBoxFlat"] = StyleBoxFlat::__class_id;
	class_id_list.insert(StyleBoxFlat::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), StyleBoxFlat::__class_id, &style_box_flat_class_def);

	JSValue proto = JS_NewObjectClass(ctx, StyleBoxFlat::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, StyleBox::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, StyleBoxFlat::__class_id, proto);

	define_style_box_flat_property(ctx, proto);
	define_style_box_flat_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, style_box_flat_class_proto_funcs, _countof(style_box_flat_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, style_box_flat_class_constructor, "StyleBoxFlat", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "StyleBoxFlat", ctor);

	return 0;
}

JSModuleDef *_js_init_style_box_flat_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/style_box';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_style_box_flat_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "StyleBoxFlat");
	return m;
}

JSModuleDef *js_init_style_box_flat_module(JSContext *ctx) {
	return _js_init_style_box_flat_module(ctx, "@godot/classes/style_box_flat");
}

void register_style_box_flat() {
	StyleBoxFlat::__init_js_class_id();
	js_init_style_box_flat_module(ctx);
}