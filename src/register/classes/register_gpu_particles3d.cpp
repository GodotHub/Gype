
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/geometry_instance3d.hpp>
#include <godot_cpp/classes/gpu_particles3d.hpp>
#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/classes/mesh.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/skin.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void gpu_particles3d_class_finalizer(JSRuntime *rt, JSValue val) {
	GPUParticles3D *gpu_particles3d = static_cast<GPUParticles3D *>(JS_GetOpaque(val, GPUParticles3D::__class_id));
	if (gpu_particles3d)
		GPUParticles3D::free(nullptr, gpu_particles3d);
}

static JSClassDef gpu_particles3d_class_def = {
	"GPUParticles3D",
	.finalizer = gpu_particles3d_class_finalizer
};

static JSValue gpu_particles3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	GPUParticles3D *gpu_particles3d_class;
	JSValue obj = JS_NewObjectClass(ctx, GPUParticles3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	gpu_particles3d_class = memnew(GPUParticles3D);
	if (!gpu_particles3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, gpu_particles3d_class);
	return obj;
}
static JSValue gpu_particles3d_class_set_emitting(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GPUParticles3D::set_emitting, GPUParticles3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gpu_particles3d_class_set_amount(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GPUParticles3D::set_amount, GPUParticles3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gpu_particles3d_class_set_lifetime(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GPUParticles3D::set_lifetime, GPUParticles3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gpu_particles3d_class_set_one_shot(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GPUParticles3D::set_one_shot, GPUParticles3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gpu_particles3d_class_set_pre_process_time(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GPUParticles3D::set_pre_process_time, GPUParticles3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gpu_particles3d_class_set_explosiveness_ratio(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GPUParticles3D::set_explosiveness_ratio, GPUParticles3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gpu_particles3d_class_set_randomness_ratio(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GPUParticles3D::set_randomness_ratio, GPUParticles3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gpu_particles3d_class_set_visibility_aabb(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GPUParticles3D::set_visibility_aabb, GPUParticles3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gpu_particles3d_class_set_use_local_coordinates(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GPUParticles3D::set_use_local_coordinates, GPUParticles3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gpu_particles3d_class_set_fixed_fps(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GPUParticles3D::set_fixed_fps, GPUParticles3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gpu_particles3d_class_set_fractional_delta(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GPUParticles3D::set_fractional_delta, GPUParticles3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gpu_particles3d_class_set_interpolate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GPUParticles3D::set_interpolate, GPUParticles3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gpu_particles3d_class_set_process_material(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GPUParticles3D::set_process_material, GPUParticles3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gpu_particles3d_class_set_speed_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GPUParticles3D::set_speed_scale, GPUParticles3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gpu_particles3d_class_set_collision_base_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GPUParticles3D::set_collision_base_size, GPUParticles3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gpu_particles3d_class_set_interp_to_end(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GPUParticles3D::set_interp_to_end, GPUParticles3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gpu_particles3d_class_is_emitting(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GPUParticles3D::is_emitting, GPUParticles3D::__class_id, ctx, this_val, argv);
};
static JSValue gpu_particles3d_class_get_amount(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GPUParticles3D::get_amount, GPUParticles3D::__class_id, ctx, this_val, argv);
};
static JSValue gpu_particles3d_class_get_lifetime(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GPUParticles3D::get_lifetime, GPUParticles3D::__class_id, ctx, this_val, argv);
};
static JSValue gpu_particles3d_class_get_one_shot(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GPUParticles3D::get_one_shot, GPUParticles3D::__class_id, ctx, this_val, argv);
};
static JSValue gpu_particles3d_class_get_pre_process_time(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GPUParticles3D::get_pre_process_time, GPUParticles3D::__class_id, ctx, this_val, argv);
};
static JSValue gpu_particles3d_class_get_explosiveness_ratio(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GPUParticles3D::get_explosiveness_ratio, GPUParticles3D::__class_id, ctx, this_val, argv);
};
static JSValue gpu_particles3d_class_get_randomness_ratio(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GPUParticles3D::get_randomness_ratio, GPUParticles3D::__class_id, ctx, this_val, argv);
};
static JSValue gpu_particles3d_class_get_visibility_aabb(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GPUParticles3D::get_visibility_aabb, GPUParticles3D::__class_id, ctx, this_val, argv);
};
static JSValue gpu_particles3d_class_get_use_local_coordinates(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GPUParticles3D::get_use_local_coordinates, GPUParticles3D::__class_id, ctx, this_val, argv);
};
static JSValue gpu_particles3d_class_get_fixed_fps(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GPUParticles3D::get_fixed_fps, GPUParticles3D::__class_id, ctx, this_val, argv);
};
static JSValue gpu_particles3d_class_get_fractional_delta(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GPUParticles3D::get_fractional_delta, GPUParticles3D::__class_id, ctx, this_val, argv);
};
static JSValue gpu_particles3d_class_get_interpolate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GPUParticles3D::get_interpolate, GPUParticles3D::__class_id, ctx, this_val, argv);
};
static JSValue gpu_particles3d_class_get_process_material(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GPUParticles3D::get_process_material, GPUParticles3D::__class_id, ctx, this_val, argv);
};
static JSValue gpu_particles3d_class_get_speed_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GPUParticles3D::get_speed_scale, GPUParticles3D::__class_id, ctx, this_val, argv);
};
static JSValue gpu_particles3d_class_get_collision_base_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GPUParticles3D::get_collision_base_size, GPUParticles3D::__class_id, ctx, this_val, argv);
};
static JSValue gpu_particles3d_class_get_interp_to_end(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GPUParticles3D::get_interp_to_end, GPUParticles3D::__class_id, ctx, this_val, argv);
};
static JSValue gpu_particles3d_class_set_draw_order(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GPUParticles3D::set_draw_order, GPUParticles3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gpu_particles3d_class_get_draw_order(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GPUParticles3D::get_draw_order, GPUParticles3D::__class_id, ctx, this_val, argv);
};
static JSValue gpu_particles3d_class_set_draw_passes(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GPUParticles3D::set_draw_passes, GPUParticles3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gpu_particles3d_class_set_draw_pass_mesh(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GPUParticles3D::set_draw_pass_mesh, GPUParticles3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gpu_particles3d_class_get_draw_passes(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GPUParticles3D::get_draw_passes, GPUParticles3D::__class_id, ctx, this_val, argv);
};
static JSValue gpu_particles3d_class_get_draw_pass_mesh(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GPUParticles3D::get_draw_pass_mesh, GPUParticles3D::__class_id, ctx, this_val, argv);
};
static JSValue gpu_particles3d_class_set_skin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GPUParticles3D::set_skin, GPUParticles3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gpu_particles3d_class_get_skin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GPUParticles3D::get_skin, GPUParticles3D::__class_id, ctx, this_val, argv);
};
static JSValue gpu_particles3d_class_restart(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GPUParticles3D::restart, GPUParticles3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gpu_particles3d_class_capture_aabb(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GPUParticles3D::capture_aabb, GPUParticles3D::__class_id, ctx, this_val, argv);
};
static JSValue gpu_particles3d_class_set_sub_emitter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GPUParticles3D::set_sub_emitter, GPUParticles3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gpu_particles3d_class_get_sub_emitter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GPUParticles3D::get_sub_emitter, GPUParticles3D::__class_id, ctx, this_val, argv);
};
static JSValue gpu_particles3d_class_emit_particle(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GPUParticles3D::emit_particle, GPUParticles3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gpu_particles3d_class_set_trail_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GPUParticles3D::set_trail_enabled, GPUParticles3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gpu_particles3d_class_set_trail_lifetime(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GPUParticles3D::set_trail_lifetime, GPUParticles3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gpu_particles3d_class_is_trail_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GPUParticles3D::is_trail_enabled, GPUParticles3D::__class_id, ctx, this_val, argv);
};
static JSValue gpu_particles3d_class_get_trail_lifetime(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GPUParticles3D::get_trail_lifetime, GPUParticles3D::__class_id, ctx, this_val, argv);
};
static JSValue gpu_particles3d_class_set_transform_align(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GPUParticles3D::set_transform_align, GPUParticles3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gpu_particles3d_class_get_transform_align(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GPUParticles3D::get_transform_align, GPUParticles3D::__class_id, ctx, this_val, argv);
};
static JSValue gpu_particles3d_class_convert_from_particles(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GPUParticles3D::convert_from_particles, GPUParticles3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gpu_particles3d_class_set_amount_ratio(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GPUParticles3D::set_amount_ratio, GPUParticles3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gpu_particles3d_class_get_amount_ratio(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GPUParticles3D::get_amount_ratio, GPUParticles3D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry gpu_particles3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_emitting", 1, &gpu_particles3d_class_set_emitting),
	JS_CFUNC_DEF("set_amount", 1, &gpu_particles3d_class_set_amount),
	JS_CFUNC_DEF("set_lifetime", 1, &gpu_particles3d_class_set_lifetime),
	JS_CFUNC_DEF("set_one_shot", 1, &gpu_particles3d_class_set_one_shot),
	JS_CFUNC_DEF("set_pre_process_time", 1, &gpu_particles3d_class_set_pre_process_time),
	JS_CFUNC_DEF("set_explosiveness_ratio", 1, &gpu_particles3d_class_set_explosiveness_ratio),
	JS_CFUNC_DEF("set_randomness_ratio", 1, &gpu_particles3d_class_set_randomness_ratio),
	JS_CFUNC_DEF("set_visibility_aabb", 1, &gpu_particles3d_class_set_visibility_aabb),
	JS_CFUNC_DEF("set_use_local_coordinates", 1, &gpu_particles3d_class_set_use_local_coordinates),
	JS_CFUNC_DEF("set_fixed_fps", 1, &gpu_particles3d_class_set_fixed_fps),
	JS_CFUNC_DEF("set_fractional_delta", 1, &gpu_particles3d_class_set_fractional_delta),
	JS_CFUNC_DEF("set_interpolate", 1, &gpu_particles3d_class_set_interpolate),
	JS_CFUNC_DEF("set_process_material", 1, &gpu_particles3d_class_set_process_material),
	JS_CFUNC_DEF("set_speed_scale", 1, &gpu_particles3d_class_set_speed_scale),
	JS_CFUNC_DEF("set_collision_base_size", 1, &gpu_particles3d_class_set_collision_base_size),
	JS_CFUNC_DEF("set_interp_to_end", 1, &gpu_particles3d_class_set_interp_to_end),
	JS_CFUNC_DEF("is_emitting", 0, &gpu_particles3d_class_is_emitting),
	JS_CFUNC_DEF("get_amount", 0, &gpu_particles3d_class_get_amount),
	JS_CFUNC_DEF("get_lifetime", 0, &gpu_particles3d_class_get_lifetime),
	JS_CFUNC_DEF("get_one_shot", 0, &gpu_particles3d_class_get_one_shot),
	JS_CFUNC_DEF("get_pre_process_time", 0, &gpu_particles3d_class_get_pre_process_time),
	JS_CFUNC_DEF("get_explosiveness_ratio", 0, &gpu_particles3d_class_get_explosiveness_ratio),
	JS_CFUNC_DEF("get_randomness_ratio", 0, &gpu_particles3d_class_get_randomness_ratio),
	JS_CFUNC_DEF("get_visibility_aabb", 0, &gpu_particles3d_class_get_visibility_aabb),
	JS_CFUNC_DEF("get_use_local_coordinates", 0, &gpu_particles3d_class_get_use_local_coordinates),
	JS_CFUNC_DEF("get_fixed_fps", 0, &gpu_particles3d_class_get_fixed_fps),
	JS_CFUNC_DEF("get_fractional_delta", 0, &gpu_particles3d_class_get_fractional_delta),
	JS_CFUNC_DEF("get_interpolate", 0, &gpu_particles3d_class_get_interpolate),
	JS_CFUNC_DEF("get_process_material", 0, &gpu_particles3d_class_get_process_material),
	JS_CFUNC_DEF("get_speed_scale", 0, &gpu_particles3d_class_get_speed_scale),
	JS_CFUNC_DEF("get_collision_base_size", 0, &gpu_particles3d_class_get_collision_base_size),
	JS_CFUNC_DEF("get_interp_to_end", 0, &gpu_particles3d_class_get_interp_to_end),
	JS_CFUNC_DEF("set_draw_order", 1, &gpu_particles3d_class_set_draw_order),
	JS_CFUNC_DEF("get_draw_order", 0, &gpu_particles3d_class_get_draw_order),
	JS_CFUNC_DEF("set_draw_passes", 1, &gpu_particles3d_class_set_draw_passes),
	JS_CFUNC_DEF("set_draw_pass_mesh", 2, &gpu_particles3d_class_set_draw_pass_mesh),
	JS_CFUNC_DEF("get_draw_passes", 0, &gpu_particles3d_class_get_draw_passes),
	JS_CFUNC_DEF("get_draw_pass_mesh", 1, &gpu_particles3d_class_get_draw_pass_mesh),
	JS_CFUNC_DEF("set_skin", 1, &gpu_particles3d_class_set_skin),
	JS_CFUNC_DEF("get_skin", 0, &gpu_particles3d_class_get_skin),
	JS_CFUNC_DEF("restart", 0, &gpu_particles3d_class_restart),
	JS_CFUNC_DEF("capture_aabb", 0, &gpu_particles3d_class_capture_aabb),
	JS_CFUNC_DEF("set_sub_emitter", 1, &gpu_particles3d_class_set_sub_emitter),
	JS_CFUNC_DEF("get_sub_emitter", 0, &gpu_particles3d_class_get_sub_emitter),
	JS_CFUNC_DEF("emit_particle", 5, &gpu_particles3d_class_emit_particle),
	JS_CFUNC_DEF("set_trail_enabled", 1, &gpu_particles3d_class_set_trail_enabled),
	JS_CFUNC_DEF("set_trail_lifetime", 1, &gpu_particles3d_class_set_trail_lifetime),
	JS_CFUNC_DEF("is_trail_enabled", 0, &gpu_particles3d_class_is_trail_enabled),
	JS_CFUNC_DEF("get_trail_lifetime", 0, &gpu_particles3d_class_get_trail_lifetime),
	JS_CFUNC_DEF("set_transform_align", 1, &gpu_particles3d_class_set_transform_align),
	JS_CFUNC_DEF("get_transform_align", 0, &gpu_particles3d_class_get_transform_align),
	JS_CFUNC_DEF("convert_from_particles", 1, &gpu_particles3d_class_convert_from_particles),
	JS_CFUNC_DEF("set_amount_ratio", 1, &gpu_particles3d_class_set_amount_ratio),
	JS_CFUNC_DEF("get_amount_ratio", 0, &gpu_particles3d_class_get_amount_ratio),
};

static int js_gpu_particles3d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&GPUParticles3D::__class_id);
	classes["GPUParticles3D"] = GPUParticles3D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), GPUParticles3D::__class_id, &gpu_particles3d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, GeometryInstance3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, GPUParticles3D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, gpu_particles3d_class_proto_funcs, _countof(gpu_particles3d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, gpu_particles3d_class_constructor, "GPUParticles3D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "GPUParticles3D", ctor);

	return 0;
}

JSModuleDef *_js_init_gpu_particles3d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_gpu_particles3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "GPUParticles3D");
	return m;
}

JSModuleDef *js_init_gpu_particles3d_module(JSContext *ctx) {
	return _js_init_gpu_particles3d_module(ctx, "godot/classes/gpu_particles3d");
}

void register_gpu_particles3d() {
	js_init_gpu_particles3d_module(ctx);
}