
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/triangle_mesh.hpp>
#include <godot_cpp/classes/sprite_base3d.hpp>
#include <godot_cpp/classes/geometry_instance3d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void sprite_base3d_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef sprite_base3d_class_def = {
	"SpriteBase3D",
	.finalizer = sprite_base3d_class_finalizer
};

static JSValue sprite_base3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, SpriteBase3D::__class_id);
	if (JS_IsException(obj))
		return obj;

	SpriteBase3D *sprite_base3d_class;
	if (argc == 1) 
		sprite_base3d_class = static_cast<SpriteBase3D *>(Variant(*argv).operator Object *());
	else 
		sprite_base3d_class = memnew(SpriteBase3D);
	if (!sprite_base3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, sprite_base3d_class);
	return obj;
}
static JSValue sprite_base3d_class_set_centered(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&SpriteBase3D::set_centered, ctx, this_val, argc, argv);
};
static JSValue sprite_base3d_class_is_centered(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&SpriteBase3D::is_centered, ctx, this_val, argc, argv);
};
static JSValue sprite_base3d_class_set_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&SpriteBase3D::set_offset, ctx, this_val, argc, argv);
};
static JSValue sprite_base3d_class_get_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&SpriteBase3D::get_offset, ctx, this_val, argc, argv);
};
static JSValue sprite_base3d_class_set_flip_h(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&SpriteBase3D::set_flip_h, ctx, this_val, argc, argv);
};
static JSValue sprite_base3d_class_is_flipped_h(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&SpriteBase3D::is_flipped_h, ctx, this_val, argc, argv);
};
static JSValue sprite_base3d_class_set_flip_v(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&SpriteBase3D::set_flip_v, ctx, this_val, argc, argv);
};
static JSValue sprite_base3d_class_is_flipped_v(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&SpriteBase3D::is_flipped_v, ctx, this_val, argc, argv);
};
static JSValue sprite_base3d_class_set_modulate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&SpriteBase3D::set_modulate, ctx, this_val, argc, argv);
};
static JSValue sprite_base3d_class_get_modulate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&SpriteBase3D::get_modulate, ctx, this_val, argc, argv);
};
static JSValue sprite_base3d_class_set_render_priority(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&SpriteBase3D::set_render_priority, ctx, this_val, argc, argv);
};
static JSValue sprite_base3d_class_get_render_priority(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&SpriteBase3D::get_render_priority, ctx, this_val, argc, argv);
};
static JSValue sprite_base3d_class_set_pixel_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&SpriteBase3D::set_pixel_size, ctx, this_val, argc, argv);
};
static JSValue sprite_base3d_class_get_pixel_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&SpriteBase3D::get_pixel_size, ctx, this_val, argc, argv);
};
static JSValue sprite_base3d_class_set_axis(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&SpriteBase3D::set_axis, ctx, this_val, argc, argv);
};
static JSValue sprite_base3d_class_get_axis(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&SpriteBase3D::get_axis, ctx, this_val, argc, argv);
};
static JSValue sprite_base3d_class_set_draw_flag(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&SpriteBase3D::set_draw_flag, ctx, this_val, argc, argv);
};
static JSValue sprite_base3d_class_get_draw_flag(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&SpriteBase3D::get_draw_flag, ctx, this_val, argc, argv);
};
static JSValue sprite_base3d_class_set_alpha_cut_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&SpriteBase3D::set_alpha_cut_mode, ctx, this_val, argc, argv);
};
static JSValue sprite_base3d_class_get_alpha_cut_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&SpriteBase3D::get_alpha_cut_mode, ctx, this_val, argc, argv);
};
static JSValue sprite_base3d_class_set_alpha_scissor_threshold(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&SpriteBase3D::set_alpha_scissor_threshold, ctx, this_val, argc, argv);
};
static JSValue sprite_base3d_class_get_alpha_scissor_threshold(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&SpriteBase3D::get_alpha_scissor_threshold, ctx, this_val, argc, argv);
};
static JSValue sprite_base3d_class_set_alpha_hash_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&SpriteBase3D::set_alpha_hash_scale, ctx, this_val, argc, argv);
};
static JSValue sprite_base3d_class_get_alpha_hash_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&SpriteBase3D::get_alpha_hash_scale, ctx, this_val, argc, argv);
};
static JSValue sprite_base3d_class_set_alpha_antialiasing(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&SpriteBase3D::set_alpha_antialiasing, ctx, this_val, argc, argv);
};
static JSValue sprite_base3d_class_get_alpha_antialiasing(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&SpriteBase3D::get_alpha_antialiasing, ctx, this_val, argc, argv);
};
static JSValue sprite_base3d_class_set_alpha_antialiasing_edge(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&SpriteBase3D::set_alpha_antialiasing_edge, ctx, this_val, argc, argv);
};
static JSValue sprite_base3d_class_get_alpha_antialiasing_edge(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&SpriteBase3D::get_alpha_antialiasing_edge, ctx, this_val, argc, argv);
};
static JSValue sprite_base3d_class_set_billboard_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&SpriteBase3D::set_billboard_mode, ctx, this_val, argc, argv);
};
static JSValue sprite_base3d_class_get_billboard_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&SpriteBase3D::get_billboard_mode, ctx, this_val, argc, argv);
};
static JSValue sprite_base3d_class_set_texture_filter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&SpriteBase3D::set_texture_filter, ctx, this_val, argc, argv);
};
static JSValue sprite_base3d_class_get_texture_filter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&SpriteBase3D::get_texture_filter, ctx, this_val, argc, argv);
};
static JSValue sprite_base3d_class_get_item_rect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&SpriteBase3D::get_item_rect, ctx, this_val, argc, argv);
};
static JSValue sprite_base3d_class_generate_triangle_mesh(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&SpriteBase3D::generate_triangle_mesh, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry sprite_base3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_centered", 1, &sprite_base3d_class_set_centered),
	JS_CFUNC_DEF("is_centered", 0, &sprite_base3d_class_is_centered),
	JS_CFUNC_DEF("set_offset", 1, &sprite_base3d_class_set_offset),
	JS_CFUNC_DEF("get_offset", 0, &sprite_base3d_class_get_offset),
	JS_CFUNC_DEF("set_flip_h", 1, &sprite_base3d_class_set_flip_h),
	JS_CFUNC_DEF("is_flipped_h", 0, &sprite_base3d_class_is_flipped_h),
	JS_CFUNC_DEF("set_flip_v", 1, &sprite_base3d_class_set_flip_v),
	JS_CFUNC_DEF("is_flipped_v", 0, &sprite_base3d_class_is_flipped_v),
	JS_CFUNC_DEF("set_modulate", 1, &sprite_base3d_class_set_modulate),
	JS_CFUNC_DEF("get_modulate", 0, &sprite_base3d_class_get_modulate),
	JS_CFUNC_DEF("set_render_priority", 1, &sprite_base3d_class_set_render_priority),
	JS_CFUNC_DEF("get_render_priority", 0, &sprite_base3d_class_get_render_priority),
	JS_CFUNC_DEF("set_pixel_size", 1, &sprite_base3d_class_set_pixel_size),
	JS_CFUNC_DEF("get_pixel_size", 0, &sprite_base3d_class_get_pixel_size),
	JS_CFUNC_DEF("set_axis", 1, &sprite_base3d_class_set_axis),
	JS_CFUNC_DEF("get_axis", 0, &sprite_base3d_class_get_axis),
	JS_CFUNC_DEF("set_draw_flag", 2, &sprite_base3d_class_set_draw_flag),
	JS_CFUNC_DEF("get_draw_flag", 1, &sprite_base3d_class_get_draw_flag),
	JS_CFUNC_DEF("set_alpha_cut_mode", 1, &sprite_base3d_class_set_alpha_cut_mode),
	JS_CFUNC_DEF("get_alpha_cut_mode", 0, &sprite_base3d_class_get_alpha_cut_mode),
	JS_CFUNC_DEF("set_alpha_scissor_threshold", 1, &sprite_base3d_class_set_alpha_scissor_threshold),
	JS_CFUNC_DEF("get_alpha_scissor_threshold", 0, &sprite_base3d_class_get_alpha_scissor_threshold),
	JS_CFUNC_DEF("set_alpha_hash_scale", 1, &sprite_base3d_class_set_alpha_hash_scale),
	JS_CFUNC_DEF("get_alpha_hash_scale", 0, &sprite_base3d_class_get_alpha_hash_scale),
	JS_CFUNC_DEF("set_alpha_antialiasing", 1, &sprite_base3d_class_set_alpha_antialiasing),
	JS_CFUNC_DEF("get_alpha_antialiasing", 0, &sprite_base3d_class_get_alpha_antialiasing),
	JS_CFUNC_DEF("set_alpha_antialiasing_edge", 1, &sprite_base3d_class_set_alpha_antialiasing_edge),
	JS_CFUNC_DEF("get_alpha_antialiasing_edge", 0, &sprite_base3d_class_get_alpha_antialiasing_edge),
	JS_CFUNC_DEF("set_billboard_mode", 1, &sprite_base3d_class_set_billboard_mode),
	JS_CFUNC_DEF("get_billboard_mode", 0, &sprite_base3d_class_get_billboard_mode),
	JS_CFUNC_DEF("set_texture_filter", 1, &sprite_base3d_class_set_texture_filter),
	JS_CFUNC_DEF("get_texture_filter", 0, &sprite_base3d_class_get_texture_filter),
	JS_CFUNC_DEF("get_item_rect", 0, &sprite_base3d_class_get_item_rect),
	JS_CFUNC_DEF("generate_triangle_mesh", 0, &sprite_base3d_class_generate_triangle_mesh),
};

static void define_sprite_base3d_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "centered"),
        JS_NewCFunction(ctx, sprite_base3d_class_is_centered, "is_centered", 0),
        JS_NewCFunction(ctx, sprite_base3d_class_set_centered, "set_centered", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "offset"),
        JS_NewCFunction(ctx, sprite_base3d_class_get_offset, "get_offset", 0),
        JS_NewCFunction(ctx, sprite_base3d_class_set_offset, "set_offset", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "flip_h"),
        JS_NewCFunction(ctx, sprite_base3d_class_is_flipped_h, "is_flipped_h", 0),
        JS_NewCFunction(ctx, sprite_base3d_class_set_flip_h, "set_flip_h", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "flip_v"),
        JS_NewCFunction(ctx, sprite_base3d_class_is_flipped_v, "is_flipped_v", 0),
        JS_NewCFunction(ctx, sprite_base3d_class_set_flip_v, "set_flip_v", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "modulate"),
        JS_NewCFunction(ctx, sprite_base3d_class_get_modulate, "get_modulate", 0),
        JS_NewCFunction(ctx, sprite_base3d_class_set_modulate, "set_modulate", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "pixel_size"),
        JS_NewCFunction(ctx, sprite_base3d_class_get_pixel_size, "get_pixel_size", 0),
        JS_NewCFunction(ctx, sprite_base3d_class_set_pixel_size, "set_pixel_size", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "axis"),
        JS_NewCFunction(ctx, sprite_base3d_class_get_axis, "get_axis", 0),
        JS_NewCFunction(ctx, sprite_base3d_class_set_axis, "set_axis", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "billboard"),
        JS_NewCFunction(ctx, sprite_base3d_class_get_billboard_mode, "get_billboard_mode", 0),
        JS_NewCFunction(ctx, sprite_base3d_class_set_billboard_mode, "set_billboard_mode", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "transparent"),
        JS_NewCFunction(ctx, sprite_base3d_class_get_draw_flag, "get_draw_flag", 0),
        JS_NewCFunction(ctx, sprite_base3d_class_set_draw_flag, "set_draw_flag", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "shaded"),
        JS_NewCFunction(ctx, sprite_base3d_class_get_draw_flag, "get_draw_flag", 0),
        JS_NewCFunction(ctx, sprite_base3d_class_set_draw_flag, "set_draw_flag", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "double_sided"),
        JS_NewCFunction(ctx, sprite_base3d_class_get_draw_flag, "get_draw_flag", 0),
        JS_NewCFunction(ctx, sprite_base3d_class_set_draw_flag, "set_draw_flag", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "no_depth_test"),
        JS_NewCFunction(ctx, sprite_base3d_class_get_draw_flag, "get_draw_flag", 0),
        JS_NewCFunction(ctx, sprite_base3d_class_set_draw_flag, "set_draw_flag", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "fixed_size"),
        JS_NewCFunction(ctx, sprite_base3d_class_get_draw_flag, "get_draw_flag", 0),
        JS_NewCFunction(ctx, sprite_base3d_class_set_draw_flag, "set_draw_flag", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "alpha_cut"),
        JS_NewCFunction(ctx, sprite_base3d_class_get_alpha_cut_mode, "get_alpha_cut_mode", 0),
        JS_NewCFunction(ctx, sprite_base3d_class_set_alpha_cut_mode, "set_alpha_cut_mode", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "alpha_scissor_threshold"),
        JS_NewCFunction(ctx, sprite_base3d_class_get_alpha_scissor_threshold, "get_alpha_scissor_threshold", 0),
        JS_NewCFunction(ctx, sprite_base3d_class_set_alpha_scissor_threshold, "set_alpha_scissor_threshold", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "alpha_hash_scale"),
        JS_NewCFunction(ctx, sprite_base3d_class_get_alpha_hash_scale, "get_alpha_hash_scale", 0),
        JS_NewCFunction(ctx, sprite_base3d_class_set_alpha_hash_scale, "set_alpha_hash_scale", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "alpha_antialiasing_mode"),
        JS_NewCFunction(ctx, sprite_base3d_class_get_alpha_antialiasing, "get_alpha_antialiasing", 0),
        JS_NewCFunction(ctx, sprite_base3d_class_set_alpha_antialiasing, "set_alpha_antialiasing", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "alpha_antialiasing_edge"),
        JS_NewCFunction(ctx, sprite_base3d_class_get_alpha_antialiasing_edge, "get_alpha_antialiasing_edge", 0),
        JS_NewCFunction(ctx, sprite_base3d_class_set_alpha_antialiasing_edge, "set_alpha_antialiasing_edge", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "texture_filter"),
        JS_NewCFunction(ctx, sprite_base3d_class_get_texture_filter, "get_texture_filter", 0),
        JS_NewCFunction(ctx, sprite_base3d_class_set_texture_filter, "set_texture_filter", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "render_priority"),
        JS_NewCFunction(ctx, sprite_base3d_class_get_render_priority, "get_render_priority", 0),
        JS_NewCFunction(ctx, sprite_base3d_class_set_render_priority, "set_render_priority", 1),
        JS_PROP_GETSET
    );
	
}

static void define_sprite_base3d_enum(JSContext *ctx, JSValue proto) {
	JSValue DrawFlags_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, DrawFlags_obj, "FLAG_TRANSPARENT", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, DrawFlags_obj, "FLAG_SHADED", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, DrawFlags_obj, "FLAG_DOUBLE_SIDED", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, DrawFlags_obj, "FLAG_DISABLE_DEPTH_TEST", JS_NewInt64(ctx, 3));
	JS_SetPropertyStr(ctx, DrawFlags_obj, "FLAG_FIXED_SIZE", JS_NewInt64(ctx, 4));
	JS_SetPropertyStr(ctx, DrawFlags_obj, "FLAG_MAX", JS_NewInt64(ctx, 5));
	JS_SetPropertyStr(ctx, proto, "DrawFlags", DrawFlags_obj);
	JSValue AlphaCutMode_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, AlphaCutMode_obj, "ALPHA_CUT_DISABLED", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, AlphaCutMode_obj, "ALPHA_CUT_DISCARD", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, AlphaCutMode_obj, "ALPHA_CUT_OPAQUE_PREPASS", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, AlphaCutMode_obj, "ALPHA_CUT_HASH", JS_NewInt64(ctx, 3));
	JS_SetPropertyStr(ctx, proto, "AlphaCutMode", AlphaCutMode_obj);
}

static int js_sprite_base3d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["SpriteBase3D"] = SpriteBase3D::__class_id;
	class_id_list.insert(SpriteBase3D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), SpriteBase3D::__class_id, &sprite_base3d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, SpriteBase3D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, GeometryInstance3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, SpriteBase3D::__class_id, proto);

	define_sprite_base3d_property(ctx, proto);
	define_sprite_base3d_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, sprite_base3d_class_proto_funcs, _countof(sprite_base3d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, sprite_base3d_class_constructor, "SpriteBase3D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "SpriteBase3D", ctor);

	return 0;
}

JSModuleDef *_js_init_sprite_base3d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/geometry_instance3d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_sprite_base3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "SpriteBase3D");
	return m;
}

JSModuleDef *js_init_sprite_base3d_module(JSContext *ctx) {
	return _js_init_sprite_base3d_module(ctx, "@godot/classes/sprite_base3d");
}

void register_sprite_base3d() {
	SpriteBase3D::__init_js_class_id();
	js_init_sprite_base3d_module(ctx);
}