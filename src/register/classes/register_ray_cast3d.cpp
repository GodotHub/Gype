
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/collision_object3d.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/classes/ray_cast3d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void ray_cast3d_class_finalizer(JSRuntime *rt, JSValue val) {
	RayCast3D *ray_cast3d = static_cast<RayCast3D *>(JS_GetOpaque(val, RayCast3D::__class_id));
	if (ray_cast3d)
		RayCast3D::free(nullptr, ray_cast3d);
}

static JSClassDef ray_cast3d_class_def = {
	"RayCast3D",
	.finalizer = ray_cast3d_class_finalizer
};

static JSValue ray_cast3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	RayCast3D *ray_cast3d_class;
	JSValue obj = JS_NewObjectClass(ctx, RayCast3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	ray_cast3d_class = memnew(RayCast3D);
	if (!ray_cast3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, ray_cast3d_class);
	return obj;
}
static JSValue ray_cast3d_class_set_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RayCast3D::set_enabled, RayCast3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue ray_cast3d_class_is_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RayCast3D::is_enabled, RayCast3D::__class_id, ctx, this_val, argv);
};
static JSValue ray_cast3d_class_set_target_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RayCast3D::set_target_position, RayCast3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue ray_cast3d_class_get_target_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RayCast3D::get_target_position, RayCast3D::__class_id, ctx, this_val, argv);
};
static JSValue ray_cast3d_class_is_colliding(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RayCast3D::is_colliding, RayCast3D::__class_id, ctx, this_val, argv);
};
static JSValue ray_cast3d_class_force_raycast_update(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RayCast3D::force_raycast_update, RayCast3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue ray_cast3d_class_get_collider(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RayCast3D::get_collider, RayCast3D::__class_id, ctx, this_val, argv);
};
static JSValue ray_cast3d_class_get_collider_rid(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RayCast3D::get_collider_rid, RayCast3D::__class_id, ctx, this_val, argv);
};
static JSValue ray_cast3d_class_get_collider_shape(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RayCast3D::get_collider_shape, RayCast3D::__class_id, ctx, this_val, argv);
};
static JSValue ray_cast3d_class_get_collision_point(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RayCast3D::get_collision_point, RayCast3D::__class_id, ctx, this_val, argv);
};
static JSValue ray_cast3d_class_get_collision_normal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RayCast3D::get_collision_normal, RayCast3D::__class_id, ctx, this_val, argv);
};
static JSValue ray_cast3d_class_get_collision_face_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RayCast3D::get_collision_face_index, RayCast3D::__class_id, ctx, this_val, argv);
};
static JSValue ray_cast3d_class_add_exception_rid(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RayCast3D::add_exception_rid, RayCast3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue ray_cast3d_class_add_exception(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RayCast3D::add_exception, RayCast3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue ray_cast3d_class_remove_exception_rid(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RayCast3D::remove_exception_rid, RayCast3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue ray_cast3d_class_remove_exception(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RayCast3D::remove_exception, RayCast3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue ray_cast3d_class_clear_exceptions(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RayCast3D::clear_exceptions, RayCast3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue ray_cast3d_class_set_collision_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RayCast3D::set_collision_mask, RayCast3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue ray_cast3d_class_get_collision_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RayCast3D::get_collision_mask, RayCast3D::__class_id, ctx, this_val, argv);
};
static JSValue ray_cast3d_class_set_collision_mask_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RayCast3D::set_collision_mask_value, RayCast3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue ray_cast3d_class_get_collision_mask_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RayCast3D::get_collision_mask_value, RayCast3D::__class_id, ctx, this_val, argv);
};
static JSValue ray_cast3d_class_set_exclude_parent_body(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RayCast3D::set_exclude_parent_body, RayCast3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue ray_cast3d_class_get_exclude_parent_body(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RayCast3D::get_exclude_parent_body, RayCast3D::__class_id, ctx, this_val, argv);
};
static JSValue ray_cast3d_class_set_collide_with_areas(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RayCast3D::set_collide_with_areas, RayCast3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue ray_cast3d_class_is_collide_with_areas_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RayCast3D::is_collide_with_areas_enabled, RayCast3D::__class_id, ctx, this_val, argv);
};
static JSValue ray_cast3d_class_set_collide_with_bodies(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RayCast3D::set_collide_with_bodies, RayCast3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue ray_cast3d_class_is_collide_with_bodies_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RayCast3D::is_collide_with_bodies_enabled, RayCast3D::__class_id, ctx, this_val, argv);
};
static JSValue ray_cast3d_class_set_hit_from_inside(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RayCast3D::set_hit_from_inside, RayCast3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue ray_cast3d_class_is_hit_from_inside_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RayCast3D::is_hit_from_inside_enabled, RayCast3D::__class_id, ctx, this_val, argv);
};
static JSValue ray_cast3d_class_set_hit_back_faces(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RayCast3D::set_hit_back_faces, RayCast3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue ray_cast3d_class_is_hit_back_faces_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RayCast3D::is_hit_back_faces_enabled, RayCast3D::__class_id, ctx, this_val, argv);
};
static JSValue ray_cast3d_class_set_debug_shape_custom_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RayCast3D::set_debug_shape_custom_color, RayCast3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue ray_cast3d_class_get_debug_shape_custom_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RayCast3D::get_debug_shape_custom_color, RayCast3D::__class_id, ctx, this_val, argv);
};
static JSValue ray_cast3d_class_set_debug_shape_thickness(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RayCast3D::set_debug_shape_thickness, RayCast3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue ray_cast3d_class_get_debug_shape_thickness(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RayCast3D::get_debug_shape_thickness, RayCast3D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry ray_cast3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_enabled", 1, &ray_cast3d_class_set_enabled),
	JS_CFUNC_DEF("is_enabled", 0, &ray_cast3d_class_is_enabled),
	JS_CFUNC_DEF("set_target_position", 1, &ray_cast3d_class_set_target_position),
	JS_CFUNC_DEF("get_target_position", 0, &ray_cast3d_class_get_target_position),
	JS_CFUNC_DEF("is_colliding", 0, &ray_cast3d_class_is_colliding),
	JS_CFUNC_DEF("force_raycast_update", 0, &ray_cast3d_class_force_raycast_update),
	JS_CFUNC_DEF("get_collider", 0, &ray_cast3d_class_get_collider),
	JS_CFUNC_DEF("get_collider_rid", 0, &ray_cast3d_class_get_collider_rid),
	JS_CFUNC_DEF("get_collider_shape", 0, &ray_cast3d_class_get_collider_shape),
	JS_CFUNC_DEF("get_collision_point", 0, &ray_cast3d_class_get_collision_point),
	JS_CFUNC_DEF("get_collision_normal", 0, &ray_cast3d_class_get_collision_normal),
	JS_CFUNC_DEF("get_collision_face_index", 0, &ray_cast3d_class_get_collision_face_index),
	JS_CFUNC_DEF("add_exception_rid", 1, &ray_cast3d_class_add_exception_rid),
	JS_CFUNC_DEF("add_exception", 1, &ray_cast3d_class_add_exception),
	JS_CFUNC_DEF("remove_exception_rid", 1, &ray_cast3d_class_remove_exception_rid),
	JS_CFUNC_DEF("remove_exception", 1, &ray_cast3d_class_remove_exception),
	JS_CFUNC_DEF("clear_exceptions", 0, &ray_cast3d_class_clear_exceptions),
	JS_CFUNC_DEF("set_collision_mask", 1, &ray_cast3d_class_set_collision_mask),
	JS_CFUNC_DEF("get_collision_mask", 0, &ray_cast3d_class_get_collision_mask),
	JS_CFUNC_DEF("set_collision_mask_value", 2, &ray_cast3d_class_set_collision_mask_value),
	JS_CFUNC_DEF("get_collision_mask_value", 1, &ray_cast3d_class_get_collision_mask_value),
	JS_CFUNC_DEF("set_exclude_parent_body", 1, &ray_cast3d_class_set_exclude_parent_body),
	JS_CFUNC_DEF("get_exclude_parent_body", 0, &ray_cast3d_class_get_exclude_parent_body),
	JS_CFUNC_DEF("set_collide_with_areas", 1, &ray_cast3d_class_set_collide_with_areas),
	JS_CFUNC_DEF("is_collide_with_areas_enabled", 0, &ray_cast3d_class_is_collide_with_areas_enabled),
	JS_CFUNC_DEF("set_collide_with_bodies", 1, &ray_cast3d_class_set_collide_with_bodies),
	JS_CFUNC_DEF("is_collide_with_bodies_enabled", 0, &ray_cast3d_class_is_collide_with_bodies_enabled),
	JS_CFUNC_DEF("set_hit_from_inside", 1, &ray_cast3d_class_set_hit_from_inside),
	JS_CFUNC_DEF("is_hit_from_inside_enabled", 0, &ray_cast3d_class_is_hit_from_inside_enabled),
	JS_CFUNC_DEF("set_hit_back_faces", 1, &ray_cast3d_class_set_hit_back_faces),
	JS_CFUNC_DEF("is_hit_back_faces_enabled", 0, &ray_cast3d_class_is_hit_back_faces_enabled),
	JS_CFUNC_DEF("set_debug_shape_custom_color", 1, &ray_cast3d_class_set_debug_shape_custom_color),
	JS_CFUNC_DEF("get_debug_shape_custom_color", 0, &ray_cast3d_class_get_debug_shape_custom_color),
	JS_CFUNC_DEF("set_debug_shape_thickness", 1, &ray_cast3d_class_set_debug_shape_thickness),
	JS_CFUNC_DEF("get_debug_shape_thickness", 0, &ray_cast3d_class_get_debug_shape_thickness),
};

static int js_ray_cast3d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&RayCast3D::__class_id);
	classes["RayCast3D"] = RayCast3D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), RayCast3D::__class_id, &ray_cast3d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Node3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, RayCast3D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, ray_cast3d_class_proto_funcs, _countof(ray_cast3d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, ray_cast3d_class_constructor, "RayCast3D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "RayCast3D", ctor);

	return 0;
}

JSModuleDef *_js_init_ray_cast3d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_ray_cast3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "RayCast3D");
	return m;
}

JSModuleDef *js_init_ray_cast3d_module(JSContext *ctx) {
	return _js_init_ray_cast3d_module(ctx, "godot/classes/ray_cast3d");
}

void register_ray_cast3d() {
	js_init_ray_cast3d_module(ctx);
}