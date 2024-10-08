
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/gpu_particles2d.hpp>
#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void gpu_particles2d_class_finalizer(JSRuntime *rt, JSValue val) {
	GPUParticles2D *gpu_particles2d = static_cast<GPUParticles2D *>(JS_GetOpaque(val, GPUParticles2D::__class_id));
	if (gpu_particles2d)
		GPUParticles2D::free(nullptr, gpu_particles2d);
}

static JSClassDef gpu_particles2d_class_def = {
	"GPUParticles2D",
	.finalizer = gpu_particles2d_class_finalizer
};

static JSValue gpu_particles2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	GPUParticles2D *gpu_particles2d_class;
	JSValue obj = JS_NewObjectClass(ctx, GPUParticles2D::__class_id);
	if (JS_IsException(obj))
		return obj;
	gpu_particles2d_class = memnew(GPUParticles2D);
	if (!gpu_particles2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, gpu_particles2d_class);
	return obj;
}
static JSValue gpu_particles2d_class_set_emitting(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GPUParticles2D::set_emitting, GPUParticles2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gpu_particles2d_class_set_amount(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GPUParticles2D::set_amount, GPUParticles2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gpu_particles2d_class_set_lifetime(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GPUParticles2D::set_lifetime, GPUParticles2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gpu_particles2d_class_set_one_shot(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GPUParticles2D::set_one_shot, GPUParticles2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gpu_particles2d_class_set_pre_process_time(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GPUParticles2D::set_pre_process_time, GPUParticles2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gpu_particles2d_class_set_explosiveness_ratio(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GPUParticles2D::set_explosiveness_ratio, GPUParticles2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gpu_particles2d_class_set_randomness_ratio(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GPUParticles2D::set_randomness_ratio, GPUParticles2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gpu_particles2d_class_set_visibility_rect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GPUParticles2D::set_visibility_rect, GPUParticles2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gpu_particles2d_class_set_use_local_coordinates(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GPUParticles2D::set_use_local_coordinates, GPUParticles2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gpu_particles2d_class_set_fixed_fps(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GPUParticles2D::set_fixed_fps, GPUParticles2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gpu_particles2d_class_set_fractional_delta(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GPUParticles2D::set_fractional_delta, GPUParticles2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gpu_particles2d_class_set_interpolate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GPUParticles2D::set_interpolate, GPUParticles2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gpu_particles2d_class_set_process_material(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GPUParticles2D::set_process_material, GPUParticles2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gpu_particles2d_class_set_speed_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GPUParticles2D::set_speed_scale, GPUParticles2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gpu_particles2d_class_set_collision_base_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GPUParticles2D::set_collision_base_size, GPUParticles2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gpu_particles2d_class_set_interp_to_end(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GPUParticles2D::set_interp_to_end, GPUParticles2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gpu_particles2d_class_is_emitting(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GPUParticles2D::is_emitting, GPUParticles2D::__class_id, ctx, this_val, argv);
};
static JSValue gpu_particles2d_class_get_amount(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GPUParticles2D::get_amount, GPUParticles2D::__class_id, ctx, this_val, argv);
};
static JSValue gpu_particles2d_class_get_lifetime(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GPUParticles2D::get_lifetime, GPUParticles2D::__class_id, ctx, this_val, argv);
};
static JSValue gpu_particles2d_class_get_one_shot(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GPUParticles2D::get_one_shot, GPUParticles2D::__class_id, ctx, this_val, argv);
};
static JSValue gpu_particles2d_class_get_pre_process_time(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GPUParticles2D::get_pre_process_time, GPUParticles2D::__class_id, ctx, this_val, argv);
};
static JSValue gpu_particles2d_class_get_explosiveness_ratio(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GPUParticles2D::get_explosiveness_ratio, GPUParticles2D::__class_id, ctx, this_val, argv);
};
static JSValue gpu_particles2d_class_get_randomness_ratio(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GPUParticles2D::get_randomness_ratio, GPUParticles2D::__class_id, ctx, this_val, argv);
};
static JSValue gpu_particles2d_class_get_visibility_rect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GPUParticles2D::get_visibility_rect, GPUParticles2D::__class_id, ctx, this_val, argv);
};
static JSValue gpu_particles2d_class_get_use_local_coordinates(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GPUParticles2D::get_use_local_coordinates, GPUParticles2D::__class_id, ctx, this_val, argv);
};
static JSValue gpu_particles2d_class_get_fixed_fps(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GPUParticles2D::get_fixed_fps, GPUParticles2D::__class_id, ctx, this_val, argv);
};
static JSValue gpu_particles2d_class_get_fractional_delta(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GPUParticles2D::get_fractional_delta, GPUParticles2D::__class_id, ctx, this_val, argv);
};
static JSValue gpu_particles2d_class_get_interpolate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GPUParticles2D::get_interpolate, GPUParticles2D::__class_id, ctx, this_val, argv);
};
static JSValue gpu_particles2d_class_get_process_material(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GPUParticles2D::get_process_material, GPUParticles2D::__class_id, ctx, this_val, argv);
};
static JSValue gpu_particles2d_class_get_speed_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GPUParticles2D::get_speed_scale, GPUParticles2D::__class_id, ctx, this_val, argv);
};
static JSValue gpu_particles2d_class_get_collision_base_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GPUParticles2D::get_collision_base_size, GPUParticles2D::__class_id, ctx, this_val, argv);
};
static JSValue gpu_particles2d_class_get_interp_to_end(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GPUParticles2D::get_interp_to_end, GPUParticles2D::__class_id, ctx, this_val, argv);
};
static JSValue gpu_particles2d_class_set_draw_order(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GPUParticles2D::set_draw_order, GPUParticles2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gpu_particles2d_class_get_draw_order(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GPUParticles2D::get_draw_order, GPUParticles2D::__class_id, ctx, this_val, argv);
};
static JSValue gpu_particles2d_class_set_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GPUParticles2D::set_texture, GPUParticles2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gpu_particles2d_class_get_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GPUParticles2D::get_texture, GPUParticles2D::__class_id, ctx, this_val, argv);
};
static JSValue gpu_particles2d_class_capture_rect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GPUParticles2D::capture_rect, GPUParticles2D::__class_id, ctx, this_val, argv);
};
static JSValue gpu_particles2d_class_restart(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GPUParticles2D::restart, GPUParticles2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gpu_particles2d_class_set_sub_emitter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GPUParticles2D::set_sub_emitter, GPUParticles2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gpu_particles2d_class_get_sub_emitter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GPUParticles2D::get_sub_emitter, GPUParticles2D::__class_id, ctx, this_val, argv);
};
static JSValue gpu_particles2d_class_emit_particle(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GPUParticles2D::emit_particle, GPUParticles2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gpu_particles2d_class_set_trail_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GPUParticles2D::set_trail_enabled, GPUParticles2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gpu_particles2d_class_set_trail_lifetime(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GPUParticles2D::set_trail_lifetime, GPUParticles2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gpu_particles2d_class_is_trail_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GPUParticles2D::is_trail_enabled, GPUParticles2D::__class_id, ctx, this_val, argv);
};
static JSValue gpu_particles2d_class_get_trail_lifetime(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GPUParticles2D::get_trail_lifetime, GPUParticles2D::__class_id, ctx, this_val, argv);
};
static JSValue gpu_particles2d_class_set_trail_sections(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GPUParticles2D::set_trail_sections, GPUParticles2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gpu_particles2d_class_get_trail_sections(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GPUParticles2D::get_trail_sections, GPUParticles2D::__class_id, ctx, this_val, argv);
};
static JSValue gpu_particles2d_class_set_trail_section_subdivisions(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GPUParticles2D::set_trail_section_subdivisions, GPUParticles2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gpu_particles2d_class_get_trail_section_subdivisions(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GPUParticles2D::get_trail_section_subdivisions, GPUParticles2D::__class_id, ctx, this_val, argv);
};
static JSValue gpu_particles2d_class_convert_from_particles(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GPUParticles2D::convert_from_particles, GPUParticles2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gpu_particles2d_class_set_amount_ratio(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GPUParticles2D::set_amount_ratio, GPUParticles2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gpu_particles2d_class_get_amount_ratio(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GPUParticles2D::get_amount_ratio, GPUParticles2D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry gpu_particles2d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_emitting", 1, &gpu_particles2d_class_set_emitting),
	JS_CFUNC_DEF("set_amount", 1, &gpu_particles2d_class_set_amount),
	JS_CFUNC_DEF("set_lifetime", 1, &gpu_particles2d_class_set_lifetime),
	JS_CFUNC_DEF("set_one_shot", 1, &gpu_particles2d_class_set_one_shot),
	JS_CFUNC_DEF("set_pre_process_time", 1, &gpu_particles2d_class_set_pre_process_time),
	JS_CFUNC_DEF("set_explosiveness_ratio", 1, &gpu_particles2d_class_set_explosiveness_ratio),
	JS_CFUNC_DEF("set_randomness_ratio", 1, &gpu_particles2d_class_set_randomness_ratio),
	JS_CFUNC_DEF("set_visibility_rect", 1, &gpu_particles2d_class_set_visibility_rect),
	JS_CFUNC_DEF("set_use_local_coordinates", 1, &gpu_particles2d_class_set_use_local_coordinates),
	JS_CFUNC_DEF("set_fixed_fps", 1, &gpu_particles2d_class_set_fixed_fps),
	JS_CFUNC_DEF("set_fractional_delta", 1, &gpu_particles2d_class_set_fractional_delta),
	JS_CFUNC_DEF("set_interpolate", 1, &gpu_particles2d_class_set_interpolate),
	JS_CFUNC_DEF("set_process_material", 1, &gpu_particles2d_class_set_process_material),
	JS_CFUNC_DEF("set_speed_scale", 1, &gpu_particles2d_class_set_speed_scale),
	JS_CFUNC_DEF("set_collision_base_size", 1, &gpu_particles2d_class_set_collision_base_size),
	JS_CFUNC_DEF("set_interp_to_end", 1, &gpu_particles2d_class_set_interp_to_end),
	JS_CFUNC_DEF("is_emitting", 0, &gpu_particles2d_class_is_emitting),
	JS_CFUNC_DEF("get_amount", 0, &gpu_particles2d_class_get_amount),
	JS_CFUNC_DEF("get_lifetime", 0, &gpu_particles2d_class_get_lifetime),
	JS_CFUNC_DEF("get_one_shot", 0, &gpu_particles2d_class_get_one_shot),
	JS_CFUNC_DEF("get_pre_process_time", 0, &gpu_particles2d_class_get_pre_process_time),
	JS_CFUNC_DEF("get_explosiveness_ratio", 0, &gpu_particles2d_class_get_explosiveness_ratio),
	JS_CFUNC_DEF("get_randomness_ratio", 0, &gpu_particles2d_class_get_randomness_ratio),
	JS_CFUNC_DEF("get_visibility_rect", 0, &gpu_particles2d_class_get_visibility_rect),
	JS_CFUNC_DEF("get_use_local_coordinates", 0, &gpu_particles2d_class_get_use_local_coordinates),
	JS_CFUNC_DEF("get_fixed_fps", 0, &gpu_particles2d_class_get_fixed_fps),
	JS_CFUNC_DEF("get_fractional_delta", 0, &gpu_particles2d_class_get_fractional_delta),
	JS_CFUNC_DEF("get_interpolate", 0, &gpu_particles2d_class_get_interpolate),
	JS_CFUNC_DEF("get_process_material", 0, &gpu_particles2d_class_get_process_material),
	JS_CFUNC_DEF("get_speed_scale", 0, &gpu_particles2d_class_get_speed_scale),
	JS_CFUNC_DEF("get_collision_base_size", 0, &gpu_particles2d_class_get_collision_base_size),
	JS_CFUNC_DEF("get_interp_to_end", 0, &gpu_particles2d_class_get_interp_to_end),
	JS_CFUNC_DEF("set_draw_order", 1, &gpu_particles2d_class_set_draw_order),
	JS_CFUNC_DEF("get_draw_order", 0, &gpu_particles2d_class_get_draw_order),
	JS_CFUNC_DEF("set_texture", 1, &gpu_particles2d_class_set_texture),
	JS_CFUNC_DEF("get_texture", 0, &gpu_particles2d_class_get_texture),
	JS_CFUNC_DEF("capture_rect", 0, &gpu_particles2d_class_capture_rect),
	JS_CFUNC_DEF("restart", 0, &gpu_particles2d_class_restart),
	JS_CFUNC_DEF("set_sub_emitter", 1, &gpu_particles2d_class_set_sub_emitter),
	JS_CFUNC_DEF("get_sub_emitter", 0, &gpu_particles2d_class_get_sub_emitter),
	JS_CFUNC_DEF("emit_particle", 5, &gpu_particles2d_class_emit_particle),
	JS_CFUNC_DEF("set_trail_enabled", 1, &gpu_particles2d_class_set_trail_enabled),
	JS_CFUNC_DEF("set_trail_lifetime", 1, &gpu_particles2d_class_set_trail_lifetime),
	JS_CFUNC_DEF("is_trail_enabled", 0, &gpu_particles2d_class_is_trail_enabled),
	JS_CFUNC_DEF("get_trail_lifetime", 0, &gpu_particles2d_class_get_trail_lifetime),
	JS_CFUNC_DEF("set_trail_sections", 1, &gpu_particles2d_class_set_trail_sections),
	JS_CFUNC_DEF("get_trail_sections", 0, &gpu_particles2d_class_get_trail_sections),
	JS_CFUNC_DEF("set_trail_section_subdivisions", 1, &gpu_particles2d_class_set_trail_section_subdivisions),
	JS_CFUNC_DEF("get_trail_section_subdivisions", 0, &gpu_particles2d_class_get_trail_section_subdivisions),
	JS_CFUNC_DEF("convert_from_particles", 1, &gpu_particles2d_class_convert_from_particles),
	JS_CFUNC_DEF("set_amount_ratio", 1, &gpu_particles2d_class_set_amount_ratio),
	JS_CFUNC_DEF("get_amount_ratio", 0, &gpu_particles2d_class_get_amount_ratio),
};

static int js_gpu_particles2d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&GPUParticles2D::__class_id);
	classes["GPUParticles2D"] = GPUParticles2D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), GPUParticles2D::__class_id, &gpu_particles2d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Node2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, GPUParticles2D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, gpu_particles2d_class_proto_funcs, _countof(gpu_particles2d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, gpu_particles2d_class_constructor, "GPUParticles2D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "GPUParticles2D", ctor);

	return 0;
}

JSModuleDef *_js_init_gpu_particles2d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_gpu_particles2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "GPUParticles2D");
	return m;
}

JSModuleDef *js_init_gpu_particles2d_module(JSContext *ctx) {
	return _js_init_gpu_particles2d_module(ctx, "godot/classes/gpu_particles2d");
}

void register_gpu_particles2d() {
	js_init_gpu_particles2d_module(ctx);
}