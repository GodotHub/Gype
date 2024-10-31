
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/physics_body2d.hpp>
#include <godot_cpp/classes/kinematic_collision2d.hpp>
#include <godot_cpp/classes/character_body2d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void character_body2d_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef character_body2d_class_def = {
	"CharacterBody2D",
	.finalizer = character_body2d_class_finalizer
};

static JSValue character_body2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, CharacterBody2D::__class_id);
	if (JS_IsException(obj))
		return obj;

	CharacterBody2D *character_body2d_class;
	if (argc == 1) 
		character_body2d_class = static_cast<CharacterBody2D *>(Variant(*argv).operator Object *());
	else 
		character_body2d_class = memnew(CharacterBody2D);
	if (!character_body2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, character_body2d_class);
	return obj;
}
static JSValue character_body2d_class_move_and_slide(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&CharacterBody2D::move_and_slide, ctx, this_val, argc, argv);
};
static JSValue character_body2d_class_apply_floor_snap(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&CharacterBody2D::apply_floor_snap, ctx, this_val, argc, argv);
};
static JSValue character_body2d_class_set_velocity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&CharacterBody2D::set_velocity, ctx, this_val, argc, argv);
};
static JSValue character_body2d_class_get_velocity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CharacterBody2D::get_velocity, ctx, this_val, argc, argv);
};
static JSValue character_body2d_class_set_safe_margin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&CharacterBody2D::set_safe_margin, ctx, this_val, argc, argv);
};
static JSValue character_body2d_class_get_safe_margin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CharacterBody2D::get_safe_margin, ctx, this_val, argc, argv);
};
static JSValue character_body2d_class_is_floor_stop_on_slope_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CharacterBody2D::is_floor_stop_on_slope_enabled, ctx, this_val, argc, argv);
};
static JSValue character_body2d_class_set_floor_stop_on_slope_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&CharacterBody2D::set_floor_stop_on_slope_enabled, ctx, this_val, argc, argv);
};
static JSValue character_body2d_class_set_floor_constant_speed_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&CharacterBody2D::set_floor_constant_speed_enabled, ctx, this_val, argc, argv);
};
static JSValue character_body2d_class_is_floor_constant_speed_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CharacterBody2D::is_floor_constant_speed_enabled, ctx, this_val, argc, argv);
};
static JSValue character_body2d_class_set_floor_block_on_wall_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&CharacterBody2D::set_floor_block_on_wall_enabled, ctx, this_val, argc, argv);
};
static JSValue character_body2d_class_is_floor_block_on_wall_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CharacterBody2D::is_floor_block_on_wall_enabled, ctx, this_val, argc, argv);
};
static JSValue character_body2d_class_set_slide_on_ceiling_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&CharacterBody2D::set_slide_on_ceiling_enabled, ctx, this_val, argc, argv);
};
static JSValue character_body2d_class_is_slide_on_ceiling_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CharacterBody2D::is_slide_on_ceiling_enabled, ctx, this_val, argc, argv);
};
static JSValue character_body2d_class_set_platform_floor_layers(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&CharacterBody2D::set_platform_floor_layers, ctx, this_val, argc, argv);
};
static JSValue character_body2d_class_get_platform_floor_layers(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CharacterBody2D::get_platform_floor_layers, ctx, this_val, argc, argv);
};
static JSValue character_body2d_class_set_platform_wall_layers(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&CharacterBody2D::set_platform_wall_layers, ctx, this_val, argc, argv);
};
static JSValue character_body2d_class_get_platform_wall_layers(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CharacterBody2D::get_platform_wall_layers, ctx, this_val, argc, argv);
};
static JSValue character_body2d_class_get_max_slides(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CharacterBody2D::get_max_slides, ctx, this_val, argc, argv);
};
static JSValue character_body2d_class_set_max_slides(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&CharacterBody2D::set_max_slides, ctx, this_val, argc, argv);
};
static JSValue character_body2d_class_get_floor_max_angle(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CharacterBody2D::get_floor_max_angle, ctx, this_val, argc, argv);
};
static JSValue character_body2d_class_set_floor_max_angle(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&CharacterBody2D::set_floor_max_angle, ctx, this_val, argc, argv);
};
static JSValue character_body2d_class_get_floor_snap_length(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&CharacterBody2D::get_floor_snap_length, ctx, this_val, argc, argv);
};
static JSValue character_body2d_class_set_floor_snap_length(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&CharacterBody2D::set_floor_snap_length, ctx, this_val, argc, argv);
};
static JSValue character_body2d_class_get_wall_min_slide_angle(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CharacterBody2D::get_wall_min_slide_angle, ctx, this_val, argc, argv);
};
static JSValue character_body2d_class_set_wall_min_slide_angle(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&CharacterBody2D::set_wall_min_slide_angle, ctx, this_val, argc, argv);
};
static JSValue character_body2d_class_get_up_direction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CharacterBody2D::get_up_direction, ctx, this_val, argc, argv);
};
static JSValue character_body2d_class_set_up_direction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&CharacterBody2D::set_up_direction, ctx, this_val, argc, argv);
};
static JSValue character_body2d_class_set_motion_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&CharacterBody2D::set_motion_mode, ctx, this_val, argc, argv);
};
static JSValue character_body2d_class_get_motion_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CharacterBody2D::get_motion_mode, ctx, this_val, argc, argv);
};
static JSValue character_body2d_class_set_platform_on_leave(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&CharacterBody2D::set_platform_on_leave, ctx, this_val, argc, argv);
};
static JSValue character_body2d_class_get_platform_on_leave(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CharacterBody2D::get_platform_on_leave, ctx, this_val, argc, argv);
};
static JSValue character_body2d_class_is_on_floor(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CharacterBody2D::is_on_floor, ctx, this_val, argc, argv);
};
static JSValue character_body2d_class_is_on_floor_only(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CharacterBody2D::is_on_floor_only, ctx, this_val, argc, argv);
};
static JSValue character_body2d_class_is_on_ceiling(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CharacterBody2D::is_on_ceiling, ctx, this_val, argc, argv);
};
static JSValue character_body2d_class_is_on_ceiling_only(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CharacterBody2D::is_on_ceiling_only, ctx, this_val, argc, argv);
};
static JSValue character_body2d_class_is_on_wall(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CharacterBody2D::is_on_wall, ctx, this_val, argc, argv);
};
static JSValue character_body2d_class_is_on_wall_only(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CharacterBody2D::is_on_wall_only, ctx, this_val, argc, argv);
};
static JSValue character_body2d_class_get_floor_normal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CharacterBody2D::get_floor_normal, ctx, this_val, argc, argv);
};
static JSValue character_body2d_class_get_wall_normal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CharacterBody2D::get_wall_normal, ctx, this_val, argc, argv);
};
static JSValue character_body2d_class_get_last_motion(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CharacterBody2D::get_last_motion, ctx, this_val, argc, argv);
};
static JSValue character_body2d_class_get_position_delta(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CharacterBody2D::get_position_delta, ctx, this_val, argc, argv);
};
static JSValue character_body2d_class_get_real_velocity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CharacterBody2D::get_real_velocity, ctx, this_val, argc, argv);
};
static JSValue character_body2d_class_get_floor_angle(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CharacterBody2D::get_floor_angle, ctx, this_val, argc, argv);
};
static JSValue character_body2d_class_get_platform_velocity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CharacterBody2D::get_platform_velocity, ctx, this_val, argc, argv);
};
static JSValue character_body2d_class_get_slide_collision_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CharacterBody2D::get_slide_collision_count, ctx, this_val, argc, argv);
};
static JSValue character_body2d_class_get_slide_collision(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&CharacterBody2D::get_slide_collision, ctx, this_val, argc, argv);
};
static JSValue character_body2d_class_get_last_slide_collision(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&CharacterBody2D::get_last_slide_collision, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry character_body2d_class_proto_funcs[] = {
	JS_CFUNC_DEF("move_and_slide", 0, &character_body2d_class_move_and_slide),
	JS_CFUNC_DEF("apply_floor_snap", 0, &character_body2d_class_apply_floor_snap),
	JS_CFUNC_DEF("set_velocity", 1, &character_body2d_class_set_velocity),
	JS_CFUNC_DEF("get_velocity", 0, &character_body2d_class_get_velocity),
	JS_CFUNC_DEF("set_safe_margin", 1, &character_body2d_class_set_safe_margin),
	JS_CFUNC_DEF("get_safe_margin", 0, &character_body2d_class_get_safe_margin),
	JS_CFUNC_DEF("is_floor_stop_on_slope_enabled", 0, &character_body2d_class_is_floor_stop_on_slope_enabled),
	JS_CFUNC_DEF("set_floor_stop_on_slope_enabled", 1, &character_body2d_class_set_floor_stop_on_slope_enabled),
	JS_CFUNC_DEF("set_floor_constant_speed_enabled", 1, &character_body2d_class_set_floor_constant_speed_enabled),
	JS_CFUNC_DEF("is_floor_constant_speed_enabled", 0, &character_body2d_class_is_floor_constant_speed_enabled),
	JS_CFUNC_DEF("set_floor_block_on_wall_enabled", 1, &character_body2d_class_set_floor_block_on_wall_enabled),
	JS_CFUNC_DEF("is_floor_block_on_wall_enabled", 0, &character_body2d_class_is_floor_block_on_wall_enabled),
	JS_CFUNC_DEF("set_slide_on_ceiling_enabled", 1, &character_body2d_class_set_slide_on_ceiling_enabled),
	JS_CFUNC_DEF("is_slide_on_ceiling_enabled", 0, &character_body2d_class_is_slide_on_ceiling_enabled),
	JS_CFUNC_DEF("set_platform_floor_layers", 1, &character_body2d_class_set_platform_floor_layers),
	JS_CFUNC_DEF("get_platform_floor_layers", 0, &character_body2d_class_get_platform_floor_layers),
	JS_CFUNC_DEF("set_platform_wall_layers", 1, &character_body2d_class_set_platform_wall_layers),
	JS_CFUNC_DEF("get_platform_wall_layers", 0, &character_body2d_class_get_platform_wall_layers),
	JS_CFUNC_DEF("get_max_slides", 0, &character_body2d_class_get_max_slides),
	JS_CFUNC_DEF("set_max_slides", 1, &character_body2d_class_set_max_slides),
	JS_CFUNC_DEF("get_floor_max_angle", 0, &character_body2d_class_get_floor_max_angle),
	JS_CFUNC_DEF("set_floor_max_angle", 1, &character_body2d_class_set_floor_max_angle),
	JS_CFUNC_DEF("get_floor_snap_length", 0, &character_body2d_class_get_floor_snap_length),
	JS_CFUNC_DEF("set_floor_snap_length", 1, &character_body2d_class_set_floor_snap_length),
	JS_CFUNC_DEF("get_wall_min_slide_angle", 0, &character_body2d_class_get_wall_min_slide_angle),
	JS_CFUNC_DEF("set_wall_min_slide_angle", 1, &character_body2d_class_set_wall_min_slide_angle),
	JS_CFUNC_DEF("get_up_direction", 0, &character_body2d_class_get_up_direction),
	JS_CFUNC_DEF("set_up_direction", 1, &character_body2d_class_set_up_direction),
	JS_CFUNC_DEF("set_motion_mode", 1, &character_body2d_class_set_motion_mode),
	JS_CFUNC_DEF("get_motion_mode", 0, &character_body2d_class_get_motion_mode),
	JS_CFUNC_DEF("set_platform_on_leave", 1, &character_body2d_class_set_platform_on_leave),
	JS_CFUNC_DEF("get_platform_on_leave", 0, &character_body2d_class_get_platform_on_leave),
	JS_CFUNC_DEF("is_on_floor", 0, &character_body2d_class_is_on_floor),
	JS_CFUNC_DEF("is_on_floor_only", 0, &character_body2d_class_is_on_floor_only),
	JS_CFUNC_DEF("is_on_ceiling", 0, &character_body2d_class_is_on_ceiling),
	JS_CFUNC_DEF("is_on_ceiling_only", 0, &character_body2d_class_is_on_ceiling_only),
	JS_CFUNC_DEF("is_on_wall", 0, &character_body2d_class_is_on_wall),
	JS_CFUNC_DEF("is_on_wall_only", 0, &character_body2d_class_is_on_wall_only),
	JS_CFUNC_DEF("get_floor_normal", 0, &character_body2d_class_get_floor_normal),
	JS_CFUNC_DEF("get_wall_normal", 0, &character_body2d_class_get_wall_normal),
	JS_CFUNC_DEF("get_last_motion", 0, &character_body2d_class_get_last_motion),
	JS_CFUNC_DEF("get_position_delta", 0, &character_body2d_class_get_position_delta),
	JS_CFUNC_DEF("get_real_velocity", 0, &character_body2d_class_get_real_velocity),
	JS_CFUNC_DEF("get_floor_angle", 1, &character_body2d_class_get_floor_angle),
	JS_CFUNC_DEF("get_platform_velocity", 0, &character_body2d_class_get_platform_velocity),
	JS_CFUNC_DEF("get_slide_collision_count", 0, &character_body2d_class_get_slide_collision_count),
	JS_CFUNC_DEF("get_slide_collision", 1, &character_body2d_class_get_slide_collision),
	JS_CFUNC_DEF("get_last_slide_collision", 0, &character_body2d_class_get_last_slide_collision),
};

static void define_character_body2d_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "motion_mode"),
        JS_NewCFunction(ctx, character_body2d_class_get_motion_mode, "get_motion_mode", 0),
        JS_NewCFunction(ctx, character_body2d_class_set_motion_mode, "set_motion_mode", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "up_direction"),
        JS_NewCFunction(ctx, character_body2d_class_get_up_direction, "get_up_direction", 0),
        JS_NewCFunction(ctx, character_body2d_class_set_up_direction, "set_up_direction", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "velocity"),
        JS_NewCFunction(ctx, character_body2d_class_get_velocity, "get_velocity", 0),
        JS_NewCFunction(ctx, character_body2d_class_set_velocity, "set_velocity", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "slide_on_ceiling"),
        JS_NewCFunction(ctx, character_body2d_class_is_slide_on_ceiling_enabled, "is_slide_on_ceiling_enabled", 0),
        JS_NewCFunction(ctx, character_body2d_class_set_slide_on_ceiling_enabled, "set_slide_on_ceiling_enabled", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "max_slides"),
        JS_NewCFunction(ctx, character_body2d_class_get_max_slides, "get_max_slides", 0),
        JS_NewCFunction(ctx, character_body2d_class_set_max_slides, "set_max_slides", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "wall_min_slide_angle"),
        JS_NewCFunction(ctx, character_body2d_class_get_wall_min_slide_angle, "get_wall_min_slide_angle", 0),
        JS_NewCFunction(ctx, character_body2d_class_set_wall_min_slide_angle, "set_wall_min_slide_angle", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "floor_stop_on_slope"),
        JS_NewCFunction(ctx, character_body2d_class_is_floor_stop_on_slope_enabled, "is_floor_stop_on_slope_enabled", 0),
        JS_NewCFunction(ctx, character_body2d_class_set_floor_stop_on_slope_enabled, "set_floor_stop_on_slope_enabled", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "floor_constant_speed"),
        JS_NewCFunction(ctx, character_body2d_class_is_floor_constant_speed_enabled, "is_floor_constant_speed_enabled", 0),
        JS_NewCFunction(ctx, character_body2d_class_set_floor_constant_speed_enabled, "set_floor_constant_speed_enabled", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "floor_block_on_wall"),
        JS_NewCFunction(ctx, character_body2d_class_is_floor_block_on_wall_enabled, "is_floor_block_on_wall_enabled", 0),
        JS_NewCFunction(ctx, character_body2d_class_set_floor_block_on_wall_enabled, "set_floor_block_on_wall_enabled", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "floor_max_angle"),
        JS_NewCFunction(ctx, character_body2d_class_get_floor_max_angle, "get_floor_max_angle", 0),
        JS_NewCFunction(ctx, character_body2d_class_set_floor_max_angle, "set_floor_max_angle", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "floor_snap_length"),
        JS_NewCFunction(ctx, character_body2d_class_get_floor_snap_length, "get_floor_snap_length", 0),
        JS_NewCFunction(ctx, character_body2d_class_set_floor_snap_length, "set_floor_snap_length", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "platform_on_leave"),
        JS_NewCFunction(ctx, character_body2d_class_get_platform_on_leave, "get_platform_on_leave", 0),
        JS_NewCFunction(ctx, character_body2d_class_set_platform_on_leave, "set_platform_on_leave", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "platform_floor_layers"),
        JS_NewCFunction(ctx, character_body2d_class_get_platform_floor_layers, "get_platform_floor_layers", 0),
        JS_NewCFunction(ctx, character_body2d_class_set_platform_floor_layers, "set_platform_floor_layers", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "platform_wall_layers"),
        JS_NewCFunction(ctx, character_body2d_class_get_platform_wall_layers, "get_platform_wall_layers", 0),
        JS_NewCFunction(ctx, character_body2d_class_set_platform_wall_layers, "set_platform_wall_layers", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "safe_margin"),
        JS_NewCFunction(ctx, character_body2d_class_get_safe_margin, "get_safe_margin", 0),
        JS_NewCFunction(ctx, character_body2d_class_set_safe_margin, "set_safe_margin", 1),
        JS_PROP_GETSET
    );
	
}

static void define_character_body2d_enum(JSContext *ctx, JSValue proto) {
	JSValue MotionMode_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, MotionMode_obj, "MOTION_MODE_GROUNDED", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, MotionMode_obj, "MOTION_MODE_FLOATING", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, proto, "MotionMode", MotionMode_obj);
	JSValue PlatformOnLeave_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, PlatformOnLeave_obj, "PLATFORM_ON_LEAVE_ADD_VELOCITY", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, PlatformOnLeave_obj, "PLATFORM_ON_LEAVE_ADD_UPWARD_VELOCITY", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, PlatformOnLeave_obj, "PLATFORM_ON_LEAVE_DO_NOTHING", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, proto, "PlatformOnLeave", PlatformOnLeave_obj);
}

static int js_character_body2d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["CharacterBody2D"] = CharacterBody2D::__class_id;
	class_id_list.insert(CharacterBody2D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), CharacterBody2D::__class_id, &character_body2d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, CharacterBody2D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, PhysicsBody2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, CharacterBody2D::__class_id, proto);

	define_character_body2d_property(ctx, proto);
	define_character_body2d_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, character_body2d_class_proto_funcs, _countof(character_body2d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, character_body2d_class_constructor, "CharacterBody2D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "CharacterBody2D", ctor);

	return 0;
}

JSModuleDef *_js_init_character_body2d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/physics_body2d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_character_body2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "CharacterBody2D");
	return m;
}

JSModuleDef *js_init_character_body2d_module(JSContext *ctx) {
	return _js_init_character_body2d_module(ctx, "@godot/classes/character_body2d");
}

void register_character_body2d() {
	CharacterBody2D::__init_js_class_id();
	js_init_character_body2d_module(ctx);
}