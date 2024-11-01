
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/gpu_particles2d.hpp>
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void gpu_particles2d_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef gpu_particles2d_class_def = {
	"GPUParticles2D",
	.finalizer = gpu_particles2d_class_finalizer
};

static JSValue gpu_particles2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, GPUParticles2D::__class_id);
	if (JS_IsException(obj))
		return obj;

	GPUParticles2D *gpu_particles2d_class;
	if (argc == 1) 
		gpu_particles2d_class = static_cast<GPUParticles2D *>(Variant(*argv).operator Object *());
	else 
		gpu_particles2d_class = memnew(GPUParticles2D);
	if (!gpu_particles2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, gpu_particles2d_class);
	return obj;
}
static JSValue gpu_particles2d_class_set_emitting(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&GPUParticles2D::set_emitting, ctx, this_val, argc, argv);
};
static JSValue gpu_particles2d_class_set_amount(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&GPUParticles2D::set_amount, ctx, this_val, argc, argv);
};
static JSValue gpu_particles2d_class_set_lifetime(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&GPUParticles2D::set_lifetime, ctx, this_val, argc, argv);
};
static JSValue gpu_particles2d_class_set_one_shot(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&GPUParticles2D::set_one_shot, ctx, this_val, argc, argv);
};
static JSValue gpu_particles2d_class_set_pre_process_time(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&GPUParticles2D::set_pre_process_time, ctx, this_val, argc, argv);
};
static JSValue gpu_particles2d_class_set_explosiveness_ratio(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&GPUParticles2D::set_explosiveness_ratio, ctx, this_val, argc, argv);
};
static JSValue gpu_particles2d_class_set_randomness_ratio(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&GPUParticles2D::set_randomness_ratio, ctx, this_val, argc, argv);
};
static JSValue gpu_particles2d_class_set_visibility_rect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&GPUParticles2D::set_visibility_rect, ctx, this_val, argc, argv);
};
static JSValue gpu_particles2d_class_set_use_local_coordinates(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&GPUParticles2D::set_use_local_coordinates, ctx, this_val, argc, argv);
};
static JSValue gpu_particles2d_class_set_fixed_fps(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&GPUParticles2D::set_fixed_fps, ctx, this_val, argc, argv);
};
static JSValue gpu_particles2d_class_set_fractional_delta(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&GPUParticles2D::set_fractional_delta, ctx, this_val, argc, argv);
};
static JSValue gpu_particles2d_class_set_interpolate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&GPUParticles2D::set_interpolate, ctx, this_val, argc, argv);
};
static JSValue gpu_particles2d_class_set_process_material(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&GPUParticles2D::set_process_material, ctx, this_val, argc, argv);
};
static JSValue gpu_particles2d_class_set_speed_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&GPUParticles2D::set_speed_scale, ctx, this_val, argc, argv);
};
static JSValue gpu_particles2d_class_set_collision_base_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&GPUParticles2D::set_collision_base_size, ctx, this_val, argc, argv);
};
static JSValue gpu_particles2d_class_set_interp_to_end(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&GPUParticles2D::set_interp_to_end, ctx, this_val, argc, argv);
};
static JSValue gpu_particles2d_class_is_emitting(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GPUParticles2D::is_emitting, ctx, this_val, argc, argv);
};
static JSValue gpu_particles2d_class_get_amount(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GPUParticles2D::get_amount, ctx, this_val, argc, argv);
};
static JSValue gpu_particles2d_class_get_lifetime(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GPUParticles2D::get_lifetime, ctx, this_val, argc, argv);
};
static JSValue gpu_particles2d_class_get_one_shot(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GPUParticles2D::get_one_shot, ctx, this_val, argc, argv);
};
static JSValue gpu_particles2d_class_get_pre_process_time(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GPUParticles2D::get_pre_process_time, ctx, this_val, argc, argv);
};
static JSValue gpu_particles2d_class_get_explosiveness_ratio(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GPUParticles2D::get_explosiveness_ratio, ctx, this_val, argc, argv);
};
static JSValue gpu_particles2d_class_get_randomness_ratio(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GPUParticles2D::get_randomness_ratio, ctx, this_val, argc, argv);
};
static JSValue gpu_particles2d_class_get_visibility_rect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GPUParticles2D::get_visibility_rect, ctx, this_val, argc, argv);
};
static JSValue gpu_particles2d_class_get_use_local_coordinates(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GPUParticles2D::get_use_local_coordinates, ctx, this_val, argc, argv);
};
static JSValue gpu_particles2d_class_get_fixed_fps(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GPUParticles2D::get_fixed_fps, ctx, this_val, argc, argv);
};
static JSValue gpu_particles2d_class_get_fractional_delta(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GPUParticles2D::get_fractional_delta, ctx, this_val, argc, argv);
};
static JSValue gpu_particles2d_class_get_interpolate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GPUParticles2D::get_interpolate, ctx, this_val, argc, argv);
};
static JSValue gpu_particles2d_class_get_process_material(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GPUParticles2D::get_process_material, ctx, this_val, argc, argv);
};
static JSValue gpu_particles2d_class_get_speed_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GPUParticles2D::get_speed_scale, ctx, this_val, argc, argv);
};
static JSValue gpu_particles2d_class_get_collision_base_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GPUParticles2D::get_collision_base_size, ctx, this_val, argc, argv);
};
static JSValue gpu_particles2d_class_get_interp_to_end(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GPUParticles2D::get_interp_to_end, ctx, this_val, argc, argv);
};
static JSValue gpu_particles2d_class_set_draw_order(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&GPUParticles2D::set_draw_order, ctx, this_val, argc, argv);
};
static JSValue gpu_particles2d_class_get_draw_order(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GPUParticles2D::get_draw_order, ctx, this_val, argc, argv);
};
static JSValue gpu_particles2d_class_set_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&GPUParticles2D::set_texture, ctx, this_val, argc, argv);
};
static JSValue gpu_particles2d_class_get_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GPUParticles2D::get_texture, ctx, this_val, argc, argv);
};
static JSValue gpu_particles2d_class_capture_rect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GPUParticles2D::capture_rect, ctx, this_val, argc, argv);
};
static JSValue gpu_particles2d_class_restart(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&GPUParticles2D::restart, ctx, this_val, argc, argv);
};
static JSValue gpu_particles2d_class_set_sub_emitter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&GPUParticles2D::set_sub_emitter, ctx, this_val, argc, argv);
};
static JSValue gpu_particles2d_class_get_sub_emitter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GPUParticles2D::get_sub_emitter, ctx, this_val, argc, argv);
};
static JSValue gpu_particles2d_class_emit_particle(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&GPUParticles2D::emit_particle, ctx, this_val, argc, argv);
};
static JSValue gpu_particles2d_class_set_trail_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&GPUParticles2D::set_trail_enabled, ctx, this_val, argc, argv);
};
static JSValue gpu_particles2d_class_set_trail_lifetime(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&GPUParticles2D::set_trail_lifetime, ctx, this_val, argc, argv);
};
static JSValue gpu_particles2d_class_is_trail_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GPUParticles2D::is_trail_enabled, ctx, this_val, argc, argv);
};
static JSValue gpu_particles2d_class_get_trail_lifetime(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GPUParticles2D::get_trail_lifetime, ctx, this_val, argc, argv);
};
static JSValue gpu_particles2d_class_set_trail_sections(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&GPUParticles2D::set_trail_sections, ctx, this_val, argc, argv);
};
static JSValue gpu_particles2d_class_get_trail_sections(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GPUParticles2D::get_trail_sections, ctx, this_val, argc, argv);
};
static JSValue gpu_particles2d_class_set_trail_section_subdivisions(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&GPUParticles2D::set_trail_section_subdivisions, ctx, this_val, argc, argv);
};
static JSValue gpu_particles2d_class_get_trail_section_subdivisions(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GPUParticles2D::get_trail_section_subdivisions, ctx, this_val, argc, argv);
};
static JSValue gpu_particles2d_class_convert_from_particles(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&GPUParticles2D::convert_from_particles, ctx, this_val, argc, argv);
};
static JSValue gpu_particles2d_class_set_amount_ratio(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&GPUParticles2D::set_amount_ratio, ctx, this_val, argc, argv);
};
static JSValue gpu_particles2d_class_get_amount_ratio(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GPUParticles2D::get_amount_ratio, ctx, this_val, argc, argv);
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
static JSValue gpu_particles2d_class_get_finished_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	GPUParticles2D *opaque = reinterpret_cast<GPUParticles2D *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "finished_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "finished").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "finished_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}

static void define_gpu_particles2d_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "emitting"),
        JS_NewCFunction(ctx, gpu_particles2d_class_is_emitting, "is_emitting", 0),
        JS_NewCFunction(ctx, gpu_particles2d_class_set_emitting, "set_emitting", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "amount"),
        JS_NewCFunction(ctx, gpu_particles2d_class_get_amount, "get_amount", 0),
        JS_NewCFunction(ctx, gpu_particles2d_class_set_amount, "set_amount", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "amount_ratio"),
        JS_NewCFunction(ctx, gpu_particles2d_class_get_amount_ratio, "get_amount_ratio", 0),
        JS_NewCFunction(ctx, gpu_particles2d_class_set_amount_ratio, "set_amount_ratio", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "sub_emitter"),
        JS_NewCFunction(ctx, gpu_particles2d_class_get_sub_emitter, "get_sub_emitter", 0),
        JS_NewCFunction(ctx, gpu_particles2d_class_set_sub_emitter, "set_sub_emitter", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "process_material"),
        JS_NewCFunction(ctx, gpu_particles2d_class_get_process_material, "get_process_material", 0),
        JS_NewCFunction(ctx, gpu_particles2d_class_set_process_material, "set_process_material", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "texture"),
        JS_NewCFunction(ctx, gpu_particles2d_class_get_texture, "get_texture", 0),
        JS_NewCFunction(ctx, gpu_particles2d_class_set_texture, "set_texture", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "lifetime"),
        JS_NewCFunction(ctx, gpu_particles2d_class_get_lifetime, "get_lifetime", 0),
        JS_NewCFunction(ctx, gpu_particles2d_class_set_lifetime, "set_lifetime", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "one_shot"),
        JS_NewCFunction(ctx, gpu_particles2d_class_get_one_shot, "get_one_shot", 0),
        JS_NewCFunction(ctx, gpu_particles2d_class_set_one_shot, "set_one_shot", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "preprocess"),
        JS_NewCFunction(ctx, gpu_particles2d_class_get_pre_process_time, "get_pre_process_time", 0),
        JS_NewCFunction(ctx, gpu_particles2d_class_set_pre_process_time, "set_pre_process_time", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "speed_scale"),
        JS_NewCFunction(ctx, gpu_particles2d_class_get_speed_scale, "get_speed_scale", 0),
        JS_NewCFunction(ctx, gpu_particles2d_class_set_speed_scale, "set_speed_scale", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "explosiveness"),
        JS_NewCFunction(ctx, gpu_particles2d_class_get_explosiveness_ratio, "get_explosiveness_ratio", 0),
        JS_NewCFunction(ctx, gpu_particles2d_class_set_explosiveness_ratio, "set_explosiveness_ratio", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "randomness"),
        JS_NewCFunction(ctx, gpu_particles2d_class_get_randomness_ratio, "get_randomness_ratio", 0),
        JS_NewCFunction(ctx, gpu_particles2d_class_set_randomness_ratio, "set_randomness_ratio", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "fixed_fps"),
        JS_NewCFunction(ctx, gpu_particles2d_class_get_fixed_fps, "get_fixed_fps", 0),
        JS_NewCFunction(ctx, gpu_particles2d_class_set_fixed_fps, "set_fixed_fps", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "interpolate"),
        JS_NewCFunction(ctx, gpu_particles2d_class_get_interpolate, "get_interpolate", 0),
        JS_NewCFunction(ctx, gpu_particles2d_class_set_interpolate, "set_interpolate", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "fract_delta"),
        JS_NewCFunction(ctx, gpu_particles2d_class_get_fractional_delta, "get_fractional_delta", 0),
        JS_NewCFunction(ctx, gpu_particles2d_class_set_fractional_delta, "set_fractional_delta", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "interp_to_end"),
        JS_NewCFunction(ctx, gpu_particles2d_class_get_interp_to_end, "get_interp_to_end", 0),
        JS_NewCFunction(ctx, gpu_particles2d_class_set_interp_to_end, "set_interp_to_end", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "collision_base_size"),
        JS_NewCFunction(ctx, gpu_particles2d_class_get_collision_base_size, "get_collision_base_size", 0),
        JS_NewCFunction(ctx, gpu_particles2d_class_set_collision_base_size, "set_collision_base_size", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "visibility_rect"),
        JS_NewCFunction(ctx, gpu_particles2d_class_get_visibility_rect, "get_visibility_rect", 0),
        JS_NewCFunction(ctx, gpu_particles2d_class_set_visibility_rect, "set_visibility_rect", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "local_coords"),
        JS_NewCFunction(ctx, gpu_particles2d_class_get_use_local_coordinates, "get_use_local_coordinates", 0),
        JS_NewCFunction(ctx, gpu_particles2d_class_set_use_local_coordinates, "set_use_local_coordinates", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "draw_order"),
        JS_NewCFunction(ctx, gpu_particles2d_class_get_draw_order, "get_draw_order", 0),
        JS_NewCFunction(ctx, gpu_particles2d_class_set_draw_order, "set_draw_order", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "trail_enabled"),
        JS_NewCFunction(ctx, gpu_particles2d_class_is_trail_enabled, "is_trail_enabled", 0),
        JS_NewCFunction(ctx, gpu_particles2d_class_set_trail_enabled, "set_trail_enabled", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "trail_lifetime"),
        JS_NewCFunction(ctx, gpu_particles2d_class_get_trail_lifetime, "get_trail_lifetime", 0),
        JS_NewCFunction(ctx, gpu_particles2d_class_set_trail_lifetime, "set_trail_lifetime", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "trail_sections"),
        JS_NewCFunction(ctx, gpu_particles2d_class_get_trail_sections, "get_trail_sections", 0),
        JS_NewCFunction(ctx, gpu_particles2d_class_set_trail_sections, "set_trail_sections", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "trail_section_subdivisions"),
        JS_NewCFunction(ctx, gpu_particles2d_class_get_trail_section_subdivisions, "get_trail_section_subdivisions", 0),
        JS_NewCFunction(ctx, gpu_particles2d_class_set_trail_section_subdivisions, "set_trail_section_subdivisions", 1),
        JS_PROP_GETSET
    );
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "finished"),
		JS_NewCFunction(ctx, gpu_particles2d_class_get_finished_signal, "get_finished_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
}

static void define_gpu_particles2d_enum(JSContext *ctx, JSValue proto) {
	JSValue DrawOrder_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, DrawOrder_obj, "DRAW_ORDER_INDEX", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, DrawOrder_obj, "DRAW_ORDER_LIFETIME", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, DrawOrder_obj, "DRAW_ORDER_REVERSE_LIFETIME", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, proto, "DrawOrder", DrawOrder_obj);
	JSValue EmitFlags_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, EmitFlags_obj, "EMIT_FLAG_POSITION", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, EmitFlags_obj, "EMIT_FLAG_ROTATION_SCALE", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, EmitFlags_obj, "EMIT_FLAG_VELOCITY", JS_NewInt64(ctx, 4));
	JS_SetPropertyStr(ctx, EmitFlags_obj, "EMIT_FLAG_COLOR", JS_NewInt64(ctx, 8));
	JS_SetPropertyStr(ctx, EmitFlags_obj, "EMIT_FLAG_CUSTOM", JS_NewInt64(ctx, 16));
	JS_SetPropertyStr(ctx, proto, "EmitFlags", EmitFlags_obj);
}

static int js_gpu_particles2d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["GPUParticles2D"] = GPUParticles2D::__class_id;
	class_id_list.insert(GPUParticles2D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), GPUParticles2D::__class_id, &gpu_particles2d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, GPUParticles2D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Node2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, GPUParticles2D::__class_id, proto);

	define_gpu_particles2d_property(ctx, proto);
	define_gpu_particles2d_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, gpu_particles2d_class_proto_funcs, _countof(gpu_particles2d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, gpu_particles2d_class_constructor, "GPUParticles2D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "GPUParticles2D", ctor);

	return 0;
}

JSModuleDef *_js_init_gpu_particles2d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/node2d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_gpu_particles2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "GPUParticles2D");
	return m;
}

JSModuleDef *js_init_gpu_particles2d_module(JSContext *ctx) {
	return _js_init_gpu_particles2d_module(ctx, "@godot/classes/gpu_particles2d");
}

void register_gpu_particles2d() {
	GPUParticles2D::__init_js_class_id();
	js_init_gpu_particles2d_module(ctx);
}