
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/character_body3d.hpp>
#include <godot_cpp/classes/kinematic_collision3d.hpp>
#include <godot_cpp/classes/physics_body3d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void character_body3d_class_finalizer(JSRuntime *rt, JSValue val) {
	CharacterBody3D *character_body3d = static_cast<CharacterBody3D *>(JS_GetOpaque(val, CharacterBody3D::__class_id));
	if (character_body3d)
		CharacterBody3D::free(nullptr, character_body3d);
}

static JSClassDef character_body3d_class_def = {
	"CharacterBody3D",
	.finalizer = character_body3d_class_finalizer
};

static JSValue character_body3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	CharacterBody3D *character_body3d_class;
	JSValue obj = JS_NewObjectClass(ctx, CharacterBody3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	character_body3d_class = memnew(CharacterBody3D);
	if (!character_body3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, character_body3d_class);
	return obj;
}
static JSValue character_body3d_class_move_and_slide(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&CharacterBody3D::move_and_slide, CharacterBody3D::__class_id, ctx, this_val, argv);
};
static JSValue character_body3d_class_apply_floor_snap(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CharacterBody3D::apply_floor_snap, CharacterBody3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue character_body3d_class_set_velocity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CharacterBody3D::set_velocity, CharacterBody3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue character_body3d_class_get_velocity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CharacterBody3D::get_velocity, CharacterBody3D::__class_id, ctx, this_val, argv);
};
static JSValue character_body3d_class_set_safe_margin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CharacterBody3D::set_safe_margin, CharacterBody3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue character_body3d_class_get_safe_margin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CharacterBody3D::get_safe_margin, CharacterBody3D::__class_id, ctx, this_val, argv);
};
static JSValue character_body3d_class_is_floor_stop_on_slope_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CharacterBody3D::is_floor_stop_on_slope_enabled, CharacterBody3D::__class_id, ctx, this_val, argv);
};
static JSValue character_body3d_class_set_floor_stop_on_slope_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CharacterBody3D::set_floor_stop_on_slope_enabled, CharacterBody3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue character_body3d_class_set_floor_constant_speed_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CharacterBody3D::set_floor_constant_speed_enabled, CharacterBody3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue character_body3d_class_is_floor_constant_speed_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CharacterBody3D::is_floor_constant_speed_enabled, CharacterBody3D::__class_id, ctx, this_val, argv);
};
static JSValue character_body3d_class_set_floor_block_on_wall_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CharacterBody3D::set_floor_block_on_wall_enabled, CharacterBody3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue character_body3d_class_is_floor_block_on_wall_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CharacterBody3D::is_floor_block_on_wall_enabled, CharacterBody3D::__class_id, ctx, this_val, argv);
};
static JSValue character_body3d_class_set_slide_on_ceiling_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CharacterBody3D::set_slide_on_ceiling_enabled, CharacterBody3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue character_body3d_class_is_slide_on_ceiling_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CharacterBody3D::is_slide_on_ceiling_enabled, CharacterBody3D::__class_id, ctx, this_val, argv);
};
static JSValue character_body3d_class_set_platform_floor_layers(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CharacterBody3D::set_platform_floor_layers, CharacterBody3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue character_body3d_class_get_platform_floor_layers(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CharacterBody3D::get_platform_floor_layers, CharacterBody3D::__class_id, ctx, this_val, argv);
};
static JSValue character_body3d_class_set_platform_wall_layers(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CharacterBody3D::set_platform_wall_layers, CharacterBody3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue character_body3d_class_get_platform_wall_layers(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CharacterBody3D::get_platform_wall_layers, CharacterBody3D::__class_id, ctx, this_val, argv);
};
static JSValue character_body3d_class_get_max_slides(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CharacterBody3D::get_max_slides, CharacterBody3D::__class_id, ctx, this_val, argv);
};
static JSValue character_body3d_class_set_max_slides(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CharacterBody3D::set_max_slides, CharacterBody3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue character_body3d_class_get_floor_max_angle(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CharacterBody3D::get_floor_max_angle, CharacterBody3D::__class_id, ctx, this_val, argv);
};
static JSValue character_body3d_class_set_floor_max_angle(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CharacterBody3D::set_floor_max_angle, CharacterBody3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue character_body3d_class_get_floor_snap_length(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&CharacterBody3D::get_floor_snap_length, CharacterBody3D::__class_id, ctx, this_val, argv);
};
static JSValue character_body3d_class_set_floor_snap_length(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CharacterBody3D::set_floor_snap_length, CharacterBody3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue character_body3d_class_get_wall_min_slide_angle(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CharacterBody3D::get_wall_min_slide_angle, CharacterBody3D::__class_id, ctx, this_val, argv);
};
static JSValue character_body3d_class_set_wall_min_slide_angle(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CharacterBody3D::set_wall_min_slide_angle, CharacterBody3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue character_body3d_class_get_up_direction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CharacterBody3D::get_up_direction, CharacterBody3D::__class_id, ctx, this_val, argv);
};
static JSValue character_body3d_class_set_up_direction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CharacterBody3D::set_up_direction, CharacterBody3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue character_body3d_class_set_motion_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CharacterBody3D::set_motion_mode, CharacterBody3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue character_body3d_class_get_motion_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CharacterBody3D::get_motion_mode, CharacterBody3D::__class_id, ctx, this_val, argv);
};
static JSValue character_body3d_class_set_platform_on_leave(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CharacterBody3D::set_platform_on_leave, CharacterBody3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue character_body3d_class_get_platform_on_leave(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CharacterBody3D::get_platform_on_leave, CharacterBody3D::__class_id, ctx, this_val, argv);
};
static JSValue character_body3d_class_is_on_floor(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CharacterBody3D::is_on_floor, CharacterBody3D::__class_id, ctx, this_val, argv);
};
static JSValue character_body3d_class_is_on_floor_only(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CharacterBody3D::is_on_floor_only, CharacterBody3D::__class_id, ctx, this_val, argv);
};
static JSValue character_body3d_class_is_on_ceiling(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CharacterBody3D::is_on_ceiling, CharacterBody3D::__class_id, ctx, this_val, argv);
};
static JSValue character_body3d_class_is_on_ceiling_only(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CharacterBody3D::is_on_ceiling_only, CharacterBody3D::__class_id, ctx, this_val, argv);
};
static JSValue character_body3d_class_is_on_wall(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CharacterBody3D::is_on_wall, CharacterBody3D::__class_id, ctx, this_val, argv);
};
static JSValue character_body3d_class_is_on_wall_only(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CharacterBody3D::is_on_wall_only, CharacterBody3D::__class_id, ctx, this_val, argv);
};
static JSValue character_body3d_class_get_floor_normal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CharacterBody3D::get_floor_normal, CharacterBody3D::__class_id, ctx, this_val, argv);
};
static JSValue character_body3d_class_get_wall_normal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CharacterBody3D::get_wall_normal, CharacterBody3D::__class_id, ctx, this_val, argv);
};
static JSValue character_body3d_class_get_last_motion(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CharacterBody3D::get_last_motion, CharacterBody3D::__class_id, ctx, this_val, argv);
};
static JSValue character_body3d_class_get_position_delta(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CharacterBody3D::get_position_delta, CharacterBody3D::__class_id, ctx, this_val, argv);
};
static JSValue character_body3d_class_get_real_velocity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CharacterBody3D::get_real_velocity, CharacterBody3D::__class_id, ctx, this_val, argv);
};
static JSValue character_body3d_class_get_floor_angle(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CharacterBody3D::get_floor_angle, CharacterBody3D::__class_id, ctx, this_val, argv);
};
static JSValue character_body3d_class_get_platform_velocity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CharacterBody3D::get_platform_velocity, CharacterBody3D::__class_id, ctx, this_val, argv);
};
static JSValue character_body3d_class_get_platform_angular_velocity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CharacterBody3D::get_platform_angular_velocity, CharacterBody3D::__class_id, ctx, this_val, argv);
};
static JSValue character_body3d_class_get_slide_collision_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CharacterBody3D::get_slide_collision_count, CharacterBody3D::__class_id, ctx, this_val, argv);
};
static JSValue character_body3d_class_get_slide_collision(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&CharacterBody3D::get_slide_collision, CharacterBody3D::__class_id, ctx, this_val, argv);
};
static JSValue character_body3d_class_get_last_slide_collision(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&CharacterBody3D::get_last_slide_collision, CharacterBody3D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry character_body3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("move_and_slide", 0, &character_body3d_class_move_and_slide),
	JS_CFUNC_DEF("apply_floor_snap", 0, &character_body3d_class_apply_floor_snap),
	JS_CFUNC_DEF("set_velocity", 1, &character_body3d_class_set_velocity),
	JS_CFUNC_DEF("get_velocity", 0, &character_body3d_class_get_velocity),
	JS_CFUNC_DEF("set_safe_margin", 1, &character_body3d_class_set_safe_margin),
	JS_CFUNC_DEF("get_safe_margin", 0, &character_body3d_class_get_safe_margin),
	JS_CFUNC_DEF("is_floor_stop_on_slope_enabled", 0, &character_body3d_class_is_floor_stop_on_slope_enabled),
	JS_CFUNC_DEF("set_floor_stop_on_slope_enabled", 1, &character_body3d_class_set_floor_stop_on_slope_enabled),
	JS_CFUNC_DEF("set_floor_constant_speed_enabled", 1, &character_body3d_class_set_floor_constant_speed_enabled),
	JS_CFUNC_DEF("is_floor_constant_speed_enabled", 0, &character_body3d_class_is_floor_constant_speed_enabled),
	JS_CFUNC_DEF("set_floor_block_on_wall_enabled", 1, &character_body3d_class_set_floor_block_on_wall_enabled),
	JS_CFUNC_DEF("is_floor_block_on_wall_enabled", 0, &character_body3d_class_is_floor_block_on_wall_enabled),
	JS_CFUNC_DEF("set_slide_on_ceiling_enabled", 1, &character_body3d_class_set_slide_on_ceiling_enabled),
	JS_CFUNC_DEF("is_slide_on_ceiling_enabled", 0, &character_body3d_class_is_slide_on_ceiling_enabled),
	JS_CFUNC_DEF("set_platform_floor_layers", 1, &character_body3d_class_set_platform_floor_layers),
	JS_CFUNC_DEF("get_platform_floor_layers", 0, &character_body3d_class_get_platform_floor_layers),
	JS_CFUNC_DEF("set_platform_wall_layers", 1, &character_body3d_class_set_platform_wall_layers),
	JS_CFUNC_DEF("get_platform_wall_layers", 0, &character_body3d_class_get_platform_wall_layers),
	JS_CFUNC_DEF("get_max_slides", 0, &character_body3d_class_get_max_slides),
	JS_CFUNC_DEF("set_max_slides", 1, &character_body3d_class_set_max_slides),
	JS_CFUNC_DEF("get_floor_max_angle", 0, &character_body3d_class_get_floor_max_angle),
	JS_CFUNC_DEF("set_floor_max_angle", 1, &character_body3d_class_set_floor_max_angle),
	JS_CFUNC_DEF("get_floor_snap_length", 0, &character_body3d_class_get_floor_snap_length),
	JS_CFUNC_DEF("set_floor_snap_length", 1, &character_body3d_class_set_floor_snap_length),
	JS_CFUNC_DEF("get_wall_min_slide_angle", 0, &character_body3d_class_get_wall_min_slide_angle),
	JS_CFUNC_DEF("set_wall_min_slide_angle", 1, &character_body3d_class_set_wall_min_slide_angle),
	JS_CFUNC_DEF("get_up_direction", 0, &character_body3d_class_get_up_direction),
	JS_CFUNC_DEF("set_up_direction", 1, &character_body3d_class_set_up_direction),
	JS_CFUNC_DEF("set_motion_mode", 1, &character_body3d_class_set_motion_mode),
	JS_CFUNC_DEF("get_motion_mode", 0, &character_body3d_class_get_motion_mode),
	JS_CFUNC_DEF("set_platform_on_leave", 1, &character_body3d_class_set_platform_on_leave),
	JS_CFUNC_DEF("get_platform_on_leave", 0, &character_body3d_class_get_platform_on_leave),
	JS_CFUNC_DEF("is_on_floor", 0, &character_body3d_class_is_on_floor),
	JS_CFUNC_DEF("is_on_floor_only", 0, &character_body3d_class_is_on_floor_only),
	JS_CFUNC_DEF("is_on_ceiling", 0, &character_body3d_class_is_on_ceiling),
	JS_CFUNC_DEF("is_on_ceiling_only", 0, &character_body3d_class_is_on_ceiling_only),
	JS_CFUNC_DEF("is_on_wall", 0, &character_body3d_class_is_on_wall),
	JS_CFUNC_DEF("is_on_wall_only", 0, &character_body3d_class_is_on_wall_only),
	JS_CFUNC_DEF("get_floor_normal", 0, &character_body3d_class_get_floor_normal),
	JS_CFUNC_DEF("get_wall_normal", 0, &character_body3d_class_get_wall_normal),
	JS_CFUNC_DEF("get_last_motion", 0, &character_body3d_class_get_last_motion),
	JS_CFUNC_DEF("get_position_delta", 0, &character_body3d_class_get_position_delta),
	JS_CFUNC_DEF("get_real_velocity", 0, &character_body3d_class_get_real_velocity),
	JS_CFUNC_DEF("get_floor_angle", 1, &character_body3d_class_get_floor_angle),
	JS_CFUNC_DEF("get_platform_velocity", 0, &character_body3d_class_get_platform_velocity),
	JS_CFUNC_DEF("get_platform_angular_velocity", 0, &character_body3d_class_get_platform_angular_velocity),
	JS_CFUNC_DEF("get_slide_collision_count", 0, &character_body3d_class_get_slide_collision_count),
	JS_CFUNC_DEF("get_slide_collision", 1, &character_body3d_class_get_slide_collision),
	JS_CFUNC_DEF("get_last_slide_collision", 0, &character_body3d_class_get_last_slide_collision),
};

static int js_character_body3d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&CharacterBody3D::__class_id);
	classes["CharacterBody3D"] = CharacterBody3D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), CharacterBody3D::__class_id, &character_body3d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, PhysicsBody3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, CharacterBody3D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, character_body3d_class_proto_funcs, _countof(character_body3d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, character_body3d_class_constructor, "CharacterBody3D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "CharacterBody3D", ctor);

	return 0;
}

JSModuleDef *_js_init_character_body3d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_character_body3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "CharacterBody3D");
	return m;
}

JSModuleDef *js_init_character_body3d_module(JSContext *ctx) {
	return _js_init_character_body3d_module(ctx, "godot/classes/character_body3d");
}

void register_character_body3d() {
	js_init_character_body3d_module(ctx);
}