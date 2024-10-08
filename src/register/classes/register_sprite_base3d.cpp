
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/geometry_instance3d.hpp>
#include <godot_cpp/classes/sprite_base3d.hpp>
#include <godot_cpp/classes/triangle_mesh.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void sprite_base3d_class_finalizer(JSRuntime *rt, JSValue val) {
	SpriteBase3D *sprite_base3d = static_cast<SpriteBase3D *>(JS_GetOpaque(val, SpriteBase3D::__class_id));
	if (sprite_base3d)
		SpriteBase3D::free(nullptr, sprite_base3d);
}

static JSClassDef sprite_base3d_class_def = {
	"SpriteBase3D",
	.finalizer = sprite_base3d_class_finalizer
};

static JSValue sprite_base3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	SpriteBase3D *sprite_base3d_class;
	JSValue obj = JS_NewObjectClass(ctx, SpriteBase3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	sprite_base3d_class = memnew(SpriteBase3D);
	if (!sprite_base3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, sprite_base3d_class);
	return obj;
}
static JSValue sprite_base3d_class_set_centered(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SpriteBase3D::set_centered, SpriteBase3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue sprite_base3d_class_is_centered(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SpriteBase3D::is_centered, SpriteBase3D::__class_id, ctx, this_val, argv);
};
static JSValue sprite_base3d_class_set_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SpriteBase3D::set_offset, SpriteBase3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue sprite_base3d_class_get_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SpriteBase3D::get_offset, SpriteBase3D::__class_id, ctx, this_val, argv);
};
static JSValue sprite_base3d_class_set_flip_h(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SpriteBase3D::set_flip_h, SpriteBase3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue sprite_base3d_class_is_flipped_h(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SpriteBase3D::is_flipped_h, SpriteBase3D::__class_id, ctx, this_val, argv);
};
static JSValue sprite_base3d_class_set_flip_v(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SpriteBase3D::set_flip_v, SpriteBase3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue sprite_base3d_class_is_flipped_v(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SpriteBase3D::is_flipped_v, SpriteBase3D::__class_id, ctx, this_val, argv);
};
static JSValue sprite_base3d_class_set_modulate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SpriteBase3D::set_modulate, SpriteBase3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue sprite_base3d_class_get_modulate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SpriteBase3D::get_modulate, SpriteBase3D::__class_id, ctx, this_val, argv);
};
static JSValue sprite_base3d_class_set_render_priority(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SpriteBase3D::set_render_priority, SpriteBase3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue sprite_base3d_class_get_render_priority(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SpriteBase3D::get_render_priority, SpriteBase3D::__class_id, ctx, this_val, argv);
};
static JSValue sprite_base3d_class_set_pixel_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SpriteBase3D::set_pixel_size, SpriteBase3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue sprite_base3d_class_get_pixel_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SpriteBase3D::get_pixel_size, SpriteBase3D::__class_id, ctx, this_val, argv);
};
static JSValue sprite_base3d_class_set_axis(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SpriteBase3D::set_axis, SpriteBase3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue sprite_base3d_class_get_axis(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SpriteBase3D::get_axis, SpriteBase3D::__class_id, ctx, this_val, argv);
};
static JSValue sprite_base3d_class_set_draw_flag(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SpriteBase3D::set_draw_flag, SpriteBase3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue sprite_base3d_class_get_draw_flag(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SpriteBase3D::get_draw_flag, SpriteBase3D::__class_id, ctx, this_val, argv);
};
static JSValue sprite_base3d_class_set_alpha_cut_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SpriteBase3D::set_alpha_cut_mode, SpriteBase3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue sprite_base3d_class_get_alpha_cut_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SpriteBase3D::get_alpha_cut_mode, SpriteBase3D::__class_id, ctx, this_val, argv);
};
static JSValue sprite_base3d_class_set_alpha_scissor_threshold(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SpriteBase3D::set_alpha_scissor_threshold, SpriteBase3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue sprite_base3d_class_get_alpha_scissor_threshold(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SpriteBase3D::get_alpha_scissor_threshold, SpriteBase3D::__class_id, ctx, this_val, argv);
};
static JSValue sprite_base3d_class_set_alpha_hash_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SpriteBase3D::set_alpha_hash_scale, SpriteBase3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue sprite_base3d_class_get_alpha_hash_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SpriteBase3D::get_alpha_hash_scale, SpriteBase3D::__class_id, ctx, this_val, argv);
};
static JSValue sprite_base3d_class_set_alpha_antialiasing(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SpriteBase3D::set_alpha_antialiasing, SpriteBase3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue sprite_base3d_class_get_alpha_antialiasing(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SpriteBase3D::get_alpha_antialiasing, SpriteBase3D::__class_id, ctx, this_val, argv);
};
static JSValue sprite_base3d_class_set_alpha_antialiasing_edge(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SpriteBase3D::set_alpha_antialiasing_edge, SpriteBase3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue sprite_base3d_class_get_alpha_antialiasing_edge(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SpriteBase3D::get_alpha_antialiasing_edge, SpriteBase3D::__class_id, ctx, this_val, argv);
};
static JSValue sprite_base3d_class_set_billboard_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SpriteBase3D::set_billboard_mode, SpriteBase3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue sprite_base3d_class_get_billboard_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SpriteBase3D::get_billboard_mode, SpriteBase3D::__class_id, ctx, this_val, argv);
};
static JSValue sprite_base3d_class_set_texture_filter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SpriteBase3D::set_texture_filter, SpriteBase3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue sprite_base3d_class_get_texture_filter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SpriteBase3D::get_texture_filter, SpriteBase3D::__class_id, ctx, this_val, argv);
};
static JSValue sprite_base3d_class_get_item_rect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SpriteBase3D::get_item_rect, SpriteBase3D::__class_id, ctx, this_val, argv);
};
static JSValue sprite_base3d_class_generate_triangle_mesh(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SpriteBase3D::generate_triangle_mesh, SpriteBase3D::__class_id, ctx, this_val, argv);
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

static int js_sprite_base3d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&SpriteBase3D::__class_id);
	classes["SpriteBase3D"] = SpriteBase3D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), SpriteBase3D::__class_id, &sprite_base3d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, GeometryInstance3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, SpriteBase3D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, sprite_base3d_class_proto_funcs, _countof(sprite_base3d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, sprite_base3d_class_constructor, "SpriteBase3D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "SpriteBase3D", ctor);

	return 0;
}

JSModuleDef *_js_init_sprite_base3d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_sprite_base3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "SpriteBase3D");
	return m;
}

JSModuleDef *js_init_sprite_base3d_module(JSContext *ctx) {
	return _js_init_sprite_base3d_module(ctx, "godot/classes/sprite_base3d");
}

void register_sprite_base3d() {
	js_init_sprite_base3d_module(ctx);
}