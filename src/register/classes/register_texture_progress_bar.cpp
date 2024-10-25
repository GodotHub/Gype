
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/texture_progress_bar.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/range.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void texture_progress_bar_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef texture_progress_bar_class_def = {
	"TextureProgressBar",
	.finalizer = texture_progress_bar_class_finalizer
};

static JSValue texture_progress_bar_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, TextureProgressBar::__class_id);
	if (JS_IsException(obj))
		return obj;
	TextureProgressBar *texture_progress_bar_class = memnew(TextureProgressBar);
	if (!texture_progress_bar_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, texture_progress_bar_class);	
	return obj;
}
static JSValue texture_progress_bar_class_set_under_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&TextureProgressBar::set_under_texture, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue texture_progress_bar_class_get_under_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TextureProgressBar::get_under_texture, ctx, this_val, argc, argv);
};
static JSValue texture_progress_bar_class_set_progress_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&TextureProgressBar::set_progress_texture, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue texture_progress_bar_class_get_progress_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TextureProgressBar::get_progress_texture, ctx, this_val, argc, argv);
};
static JSValue texture_progress_bar_class_set_over_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&TextureProgressBar::set_over_texture, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue texture_progress_bar_class_get_over_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TextureProgressBar::get_over_texture, ctx, this_val, argc, argv);
};
static JSValue texture_progress_bar_class_set_fill_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&TextureProgressBar::set_fill_mode, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue texture_progress_bar_class_get_fill_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&TextureProgressBar::get_fill_mode, ctx, this_val, argc, argv);
};
static JSValue texture_progress_bar_class_set_tint_under(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&TextureProgressBar::set_tint_under, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue texture_progress_bar_class_get_tint_under(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TextureProgressBar::get_tint_under, ctx, this_val, argc, argv);
};
static JSValue texture_progress_bar_class_set_tint_progress(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&TextureProgressBar::set_tint_progress, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue texture_progress_bar_class_get_tint_progress(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TextureProgressBar::get_tint_progress, ctx, this_val, argc, argv);
};
static JSValue texture_progress_bar_class_set_tint_over(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&TextureProgressBar::set_tint_over, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue texture_progress_bar_class_get_tint_over(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TextureProgressBar::get_tint_over, ctx, this_val, argc, argv);
};
static JSValue texture_progress_bar_class_set_texture_progress_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&TextureProgressBar::set_texture_progress_offset, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue texture_progress_bar_class_get_texture_progress_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TextureProgressBar::get_texture_progress_offset, ctx, this_val, argc, argv);
};
static JSValue texture_progress_bar_class_set_radial_initial_angle(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&TextureProgressBar::set_radial_initial_angle, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue texture_progress_bar_class_get_radial_initial_angle(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&TextureProgressBar::get_radial_initial_angle, ctx, this_val, argc, argv);
};
static JSValue texture_progress_bar_class_set_radial_center_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&TextureProgressBar::set_radial_center_offset, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue texture_progress_bar_class_get_radial_center_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&TextureProgressBar::get_radial_center_offset, ctx, this_val, argc, argv);
};
static JSValue texture_progress_bar_class_set_fill_degrees(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&TextureProgressBar::set_fill_degrees, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue texture_progress_bar_class_get_fill_degrees(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&TextureProgressBar::get_fill_degrees, ctx, this_val, argc, argv);
};
static JSValue texture_progress_bar_class_set_stretch_margin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&TextureProgressBar::set_stretch_margin, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue texture_progress_bar_class_get_stretch_margin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TextureProgressBar::get_stretch_margin, ctx, this_val, argc, argv);
};
static JSValue texture_progress_bar_class_set_nine_patch_stretch(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&TextureProgressBar::set_nine_patch_stretch, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue texture_progress_bar_class_get_nine_patch_stretch(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&TextureProgressBar::get_nine_patch_stretch, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry texture_progress_bar_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_under_texture", 1, &texture_progress_bar_class_set_under_texture),
	JS_CFUNC_DEF("get_under_texture", 0, &texture_progress_bar_class_get_under_texture),
	JS_CFUNC_DEF("set_progress_texture", 1, &texture_progress_bar_class_set_progress_texture),
	JS_CFUNC_DEF("get_progress_texture", 0, &texture_progress_bar_class_get_progress_texture),
	JS_CFUNC_DEF("set_over_texture", 1, &texture_progress_bar_class_set_over_texture),
	JS_CFUNC_DEF("get_over_texture", 0, &texture_progress_bar_class_get_over_texture),
	JS_CFUNC_DEF("set_fill_mode", 1, &texture_progress_bar_class_set_fill_mode),
	JS_CFUNC_DEF("get_fill_mode", 0, &texture_progress_bar_class_get_fill_mode),
	JS_CFUNC_DEF("set_tint_under", 1, &texture_progress_bar_class_set_tint_under),
	JS_CFUNC_DEF("get_tint_under", 0, &texture_progress_bar_class_get_tint_under),
	JS_CFUNC_DEF("set_tint_progress", 1, &texture_progress_bar_class_set_tint_progress),
	JS_CFUNC_DEF("get_tint_progress", 0, &texture_progress_bar_class_get_tint_progress),
	JS_CFUNC_DEF("set_tint_over", 1, &texture_progress_bar_class_set_tint_over),
	JS_CFUNC_DEF("get_tint_over", 0, &texture_progress_bar_class_get_tint_over),
	JS_CFUNC_DEF("set_texture_progress_offset", 1, &texture_progress_bar_class_set_texture_progress_offset),
	JS_CFUNC_DEF("get_texture_progress_offset", 0, &texture_progress_bar_class_get_texture_progress_offset),
	JS_CFUNC_DEF("set_radial_initial_angle", 1, &texture_progress_bar_class_set_radial_initial_angle),
	JS_CFUNC_DEF("get_radial_initial_angle", 0, &texture_progress_bar_class_get_radial_initial_angle),
	JS_CFUNC_DEF("set_radial_center_offset", 1, &texture_progress_bar_class_set_radial_center_offset),
	JS_CFUNC_DEF("get_radial_center_offset", 0, &texture_progress_bar_class_get_radial_center_offset),
	JS_CFUNC_DEF("set_fill_degrees", 1, &texture_progress_bar_class_set_fill_degrees),
	JS_CFUNC_DEF("get_fill_degrees", 0, &texture_progress_bar_class_get_fill_degrees),
	JS_CFUNC_DEF("set_stretch_margin", 2, &texture_progress_bar_class_set_stretch_margin),
	JS_CFUNC_DEF("get_stretch_margin", 1, &texture_progress_bar_class_get_stretch_margin),
	JS_CFUNC_DEF("set_nine_patch_stretch", 1, &texture_progress_bar_class_set_nine_patch_stretch),
	JS_CFUNC_DEF("get_nine_patch_stretch", 0, &texture_progress_bar_class_get_nine_patch_stretch),
};

void define_texture_progress_bar_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "fill_mode"),
        JS_NewCFunction(ctx, texture_progress_bar_class_get_fill_mode, "get_fill_mode", 0),
        JS_NewCFunction(ctx, texture_progress_bar_class_set_fill_mode, "set_fill_mode", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "radial_initial_angle"),
        JS_NewCFunction(ctx, texture_progress_bar_class_get_radial_initial_angle, "get_radial_initial_angle", 0),
        JS_NewCFunction(ctx, texture_progress_bar_class_set_radial_initial_angle, "set_radial_initial_angle", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "radial_fill_degrees"),
        JS_NewCFunction(ctx, texture_progress_bar_class_get_fill_degrees, "get_fill_degrees", 0),
        JS_NewCFunction(ctx, texture_progress_bar_class_set_fill_degrees, "set_fill_degrees", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "radial_center_offset"),
        JS_NewCFunction(ctx, texture_progress_bar_class_get_radial_center_offset, "get_radial_center_offset", 0),
        JS_NewCFunction(ctx, texture_progress_bar_class_set_radial_center_offset, "set_radial_center_offset", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "nine_patch_stretch"),
        JS_NewCFunction(ctx, texture_progress_bar_class_get_nine_patch_stretch, "get_nine_patch_stretch", 0),
        JS_NewCFunction(ctx, texture_progress_bar_class_set_nine_patch_stretch, "set_nine_patch_stretch", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "stretch_margin_left"),
        JS_NewCFunction(ctx, texture_progress_bar_class_get_stretch_margin, "get_stretch_margin", 0),
        JS_NewCFunction(ctx, texture_progress_bar_class_set_stretch_margin, "set_stretch_margin", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "stretch_margin_top"),
        JS_NewCFunction(ctx, texture_progress_bar_class_get_stretch_margin, "get_stretch_margin", 0),
        JS_NewCFunction(ctx, texture_progress_bar_class_set_stretch_margin, "set_stretch_margin", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "stretch_margin_right"),
        JS_NewCFunction(ctx, texture_progress_bar_class_get_stretch_margin, "get_stretch_margin", 0),
        JS_NewCFunction(ctx, texture_progress_bar_class_set_stretch_margin, "set_stretch_margin", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "stretch_margin_bottom"),
        JS_NewCFunction(ctx, texture_progress_bar_class_get_stretch_margin, "get_stretch_margin", 0),
        JS_NewCFunction(ctx, texture_progress_bar_class_set_stretch_margin, "set_stretch_margin", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "texture_under"),
        JS_NewCFunction(ctx, texture_progress_bar_class_get_under_texture, "get_under_texture", 0),
        JS_NewCFunction(ctx, texture_progress_bar_class_set_under_texture, "set_under_texture", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "texture_over"),
        JS_NewCFunction(ctx, texture_progress_bar_class_get_over_texture, "get_over_texture", 0),
        JS_NewCFunction(ctx, texture_progress_bar_class_set_over_texture, "set_over_texture", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "texture_progress"),
        JS_NewCFunction(ctx, texture_progress_bar_class_get_progress_texture, "get_progress_texture", 0),
        JS_NewCFunction(ctx, texture_progress_bar_class_set_progress_texture, "set_progress_texture", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "texture_progress_offset"),
        JS_NewCFunction(ctx, texture_progress_bar_class_get_texture_progress_offset, "get_texture_progress_offset", 0),
        JS_NewCFunction(ctx, texture_progress_bar_class_set_texture_progress_offset, "set_texture_progress_offset", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "tint_under"),
        JS_NewCFunction(ctx, texture_progress_bar_class_get_tint_under, "get_tint_under", 0),
        JS_NewCFunction(ctx, texture_progress_bar_class_set_tint_under, "set_tint_under", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "tint_over"),
        JS_NewCFunction(ctx, texture_progress_bar_class_get_tint_over, "get_tint_over", 0),
        JS_NewCFunction(ctx, texture_progress_bar_class_set_tint_over, "set_tint_over", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "tint_progress"),
        JS_NewCFunction(ctx, texture_progress_bar_class_get_tint_progress, "get_tint_progress", 0),
        JS_NewCFunction(ctx, texture_progress_bar_class_set_tint_progress, "set_tint_progress", 1),
        JS_PROP_GETSET
    );
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
	JSValue FillMode_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, FillMode_obj, "FILL_LEFT_TO_RIGHT", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, FillMode_obj, "FILL_RIGHT_TO_LEFT", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, FillMode_obj, "FILL_TOP_TO_BOTTOM", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, FillMode_obj, "FILL_BOTTOM_TO_TOP", JS_NewInt64(ctx, 3));
	JS_SetPropertyStr(ctx, FillMode_obj, "FILL_CLOCKWISE", JS_NewInt64(ctx, 4));
	JS_SetPropertyStr(ctx, FillMode_obj, "FILL_COUNTER_CLOCKWISE", JS_NewInt64(ctx, 5));
	JS_SetPropertyStr(ctx, FillMode_obj, "FILL_BILINEAR_LEFT_AND_RIGHT", JS_NewInt64(ctx, 6));
	JS_SetPropertyStr(ctx, FillMode_obj, "FILL_BILINEAR_TOP_AND_BOTTOM", JS_NewInt64(ctx, 7));
	JS_SetPropertyStr(ctx, FillMode_obj, "FILL_CLOCKWISE_AND_COUNTER_CLOCKWISE", JS_NewInt64(ctx, 8));
	JS_SetPropertyStr(ctx, proto, "FillMode", FillMode_obj);
}

static int js_texture_progress_bar_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&TextureProgressBar::__class_id);
	classes["TextureProgressBar"] = TextureProgressBar::__class_id;
	class_id_list.insert(TextureProgressBar::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), TextureProgressBar::__class_id, &texture_progress_bar_class_def);

	JSValue proto = JS_NewObjectClass(ctx, TextureProgressBar::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Range::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, TextureProgressBar::__class_id, proto);

	define_texture_progress_bar_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, texture_progress_bar_class_proto_funcs, _countof(texture_progress_bar_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, texture_progress_bar_class_constructor, "TextureProgressBar", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "TextureProgressBar", ctor);

	return 0;
}

JSModuleDef *_js_init_texture_progress_bar_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/range';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_texture_progress_bar_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "TextureProgressBar");
	return m;
}

JSModuleDef *js_init_texture_progress_bar_module(JSContext *ctx) {
	return _js_init_texture_progress_bar_module(ctx, "godot/classes/texture_progress_bar");
}

void register_texture_progress_bar() {
	TextureProgressBar::__init_js_class_id();
	js_init_texture_progress_bar_module(ctx);
}