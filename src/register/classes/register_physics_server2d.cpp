
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/physics_direct_body_state2d.hpp>
#include <godot_cpp/classes/physics_direct_space_state2d.hpp>
#include <godot_cpp/classes/physics_server2d.hpp>
#include <godot_cpp/classes/physics_test_motion_parameters2d.hpp>
#include <godot_cpp/classes/physics_test_motion_result2d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void physics_server2d_class_finalizer(JSRuntime *rt, JSValue val) {
	PhysicsServer2D *physics_server2d = static_cast<PhysicsServer2D *>(JS_GetOpaque(val, PhysicsServer2D::__class_id));
	if (physics_server2d)
		PhysicsServer2D::free(nullptr, physics_server2d);
}

static JSClassDef physics_server2d_class_def = {
	"PhysicsServer2D",
	.finalizer = physics_server2d_class_finalizer
};

static JSValue physics_server2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	PhysicsServer2D *physics_server2d_class;
	JSValue obj = JS_NewObjectClass(ctx, PhysicsServer2D::__class_id);
	if (JS_IsException(obj))
		return obj;
	physics_server2d_class = PhysicsServer2D::get_singleton();
	if (!physics_server2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, physics_server2d_class);
	return obj;
}
static JSValue physics_server2d_class_world_boundary_shape_create(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&PhysicsServer2D::world_boundary_shape_create, PhysicsServer2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_server2d_class_separation_ray_shape_create(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&PhysicsServer2D::separation_ray_shape_create, PhysicsServer2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_server2d_class_segment_shape_create(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&PhysicsServer2D::segment_shape_create, PhysicsServer2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_server2d_class_circle_shape_create(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&PhysicsServer2D::circle_shape_create, PhysicsServer2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_server2d_class_rectangle_shape_create(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&PhysicsServer2D::rectangle_shape_create, PhysicsServer2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_server2d_class_capsule_shape_create(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&PhysicsServer2D::capsule_shape_create, PhysicsServer2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_server2d_class_convex_polygon_shape_create(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&PhysicsServer2D::convex_polygon_shape_create, PhysicsServer2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_server2d_class_concave_polygon_shape_create(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&PhysicsServer2D::concave_polygon_shape_create, PhysicsServer2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_server2d_class_shape_set_data(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PhysicsServer2D::shape_set_data, PhysicsServer2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_server2d_class_shape_get_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsServer2D::shape_get_type, PhysicsServer2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_server2d_class_shape_get_data(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsServer2D::shape_get_data, PhysicsServer2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_server2d_class_space_create(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&PhysicsServer2D::space_create, PhysicsServer2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_server2d_class_space_set_active(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PhysicsServer2D::space_set_active, PhysicsServer2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_server2d_class_space_is_active(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsServer2D::space_is_active, PhysicsServer2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_server2d_class_space_set_param(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PhysicsServer2D::space_set_param, PhysicsServer2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_server2d_class_space_get_param(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsServer2D::space_get_param, PhysicsServer2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_server2d_class_space_get_direct_state(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&PhysicsServer2D::space_get_direct_state, PhysicsServer2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_server2d_class_area_create(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&PhysicsServer2D::area_create, PhysicsServer2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_server2d_class_area_set_space(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PhysicsServer2D::area_set_space, PhysicsServer2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_server2d_class_area_get_space(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsServer2D::area_get_space, PhysicsServer2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_server2d_class_area_add_shape(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PhysicsServer2D::area_add_shape, PhysicsServer2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_server2d_class_area_set_shape(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PhysicsServer2D::area_set_shape, PhysicsServer2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_server2d_class_area_set_shape_transform(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PhysicsServer2D::area_set_shape_transform, PhysicsServer2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_server2d_class_area_set_shape_disabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PhysicsServer2D::area_set_shape_disabled, PhysicsServer2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_server2d_class_area_get_shape_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsServer2D::area_get_shape_count, PhysicsServer2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_server2d_class_area_get_shape(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsServer2D::area_get_shape, PhysicsServer2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_server2d_class_area_get_shape_transform(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsServer2D::area_get_shape_transform, PhysicsServer2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_server2d_class_area_remove_shape(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PhysicsServer2D::area_remove_shape, PhysicsServer2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_server2d_class_area_clear_shapes(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PhysicsServer2D::area_clear_shapes, PhysicsServer2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_server2d_class_area_set_collision_layer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PhysicsServer2D::area_set_collision_layer, PhysicsServer2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_server2d_class_area_get_collision_layer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsServer2D::area_get_collision_layer, PhysicsServer2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_server2d_class_area_set_collision_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PhysicsServer2D::area_set_collision_mask, PhysicsServer2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_server2d_class_area_get_collision_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsServer2D::area_get_collision_mask, PhysicsServer2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_server2d_class_area_set_param(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PhysicsServer2D::area_set_param, PhysicsServer2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_server2d_class_area_set_transform(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PhysicsServer2D::area_set_transform, PhysicsServer2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_server2d_class_area_get_param(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsServer2D::area_get_param, PhysicsServer2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_server2d_class_area_get_transform(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsServer2D::area_get_transform, PhysicsServer2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_server2d_class_area_attach_object_instance_id(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PhysicsServer2D::area_attach_object_instance_id, PhysicsServer2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_server2d_class_area_get_object_instance_id(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsServer2D::area_get_object_instance_id, PhysicsServer2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_server2d_class_area_attach_canvas_instance_id(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PhysicsServer2D::area_attach_canvas_instance_id, PhysicsServer2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_server2d_class_area_get_canvas_instance_id(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsServer2D::area_get_canvas_instance_id, PhysicsServer2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_server2d_class_area_set_monitor_callback(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PhysicsServer2D::area_set_monitor_callback, PhysicsServer2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_server2d_class_area_set_area_monitor_callback(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PhysicsServer2D::area_set_area_monitor_callback, PhysicsServer2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_server2d_class_area_set_monitorable(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PhysicsServer2D::area_set_monitorable, PhysicsServer2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_server2d_class_body_create(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&PhysicsServer2D::body_create, PhysicsServer2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_server2d_class_body_set_space(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PhysicsServer2D::body_set_space, PhysicsServer2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_server2d_class_body_get_space(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsServer2D::body_get_space, PhysicsServer2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_server2d_class_body_set_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PhysicsServer2D::body_set_mode, PhysicsServer2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_server2d_class_body_get_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsServer2D::body_get_mode, PhysicsServer2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_server2d_class_body_add_shape(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PhysicsServer2D::body_add_shape, PhysicsServer2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_server2d_class_body_set_shape(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PhysicsServer2D::body_set_shape, PhysicsServer2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_server2d_class_body_set_shape_transform(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PhysicsServer2D::body_set_shape_transform, PhysicsServer2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_server2d_class_body_get_shape_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsServer2D::body_get_shape_count, PhysicsServer2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_server2d_class_body_get_shape(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsServer2D::body_get_shape, PhysicsServer2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_server2d_class_body_get_shape_transform(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsServer2D::body_get_shape_transform, PhysicsServer2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_server2d_class_body_remove_shape(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PhysicsServer2D::body_remove_shape, PhysicsServer2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_server2d_class_body_clear_shapes(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PhysicsServer2D::body_clear_shapes, PhysicsServer2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_server2d_class_body_set_shape_disabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PhysicsServer2D::body_set_shape_disabled, PhysicsServer2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_server2d_class_body_set_shape_as_one_way_collision(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PhysicsServer2D::body_set_shape_as_one_way_collision, PhysicsServer2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_server2d_class_body_attach_object_instance_id(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PhysicsServer2D::body_attach_object_instance_id, PhysicsServer2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_server2d_class_body_get_object_instance_id(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsServer2D::body_get_object_instance_id, PhysicsServer2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_server2d_class_body_attach_canvas_instance_id(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PhysicsServer2D::body_attach_canvas_instance_id, PhysicsServer2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_server2d_class_body_get_canvas_instance_id(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsServer2D::body_get_canvas_instance_id, PhysicsServer2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_server2d_class_body_set_continuous_collision_detection_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PhysicsServer2D::body_set_continuous_collision_detection_mode, PhysicsServer2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_server2d_class_body_get_continuous_collision_detection_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsServer2D::body_get_continuous_collision_detection_mode, PhysicsServer2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_server2d_class_body_set_collision_layer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PhysicsServer2D::body_set_collision_layer, PhysicsServer2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_server2d_class_body_get_collision_layer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsServer2D::body_get_collision_layer, PhysicsServer2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_server2d_class_body_set_collision_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PhysicsServer2D::body_set_collision_mask, PhysicsServer2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_server2d_class_body_get_collision_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsServer2D::body_get_collision_mask, PhysicsServer2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_server2d_class_body_set_collision_priority(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PhysicsServer2D::body_set_collision_priority, PhysicsServer2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_server2d_class_body_get_collision_priority(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsServer2D::body_get_collision_priority, PhysicsServer2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_server2d_class_body_set_param(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PhysicsServer2D::body_set_param, PhysicsServer2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_server2d_class_body_get_param(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsServer2D::body_get_param, PhysicsServer2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_server2d_class_body_reset_mass_properties(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PhysicsServer2D::body_reset_mass_properties, PhysicsServer2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_server2d_class_body_set_state(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PhysicsServer2D::body_set_state, PhysicsServer2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_server2d_class_body_get_state(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsServer2D::body_get_state, PhysicsServer2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_server2d_class_body_apply_central_impulse(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PhysicsServer2D::body_apply_central_impulse, PhysicsServer2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_server2d_class_body_apply_torque_impulse(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PhysicsServer2D::body_apply_torque_impulse, PhysicsServer2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_server2d_class_body_apply_impulse(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PhysicsServer2D::body_apply_impulse, PhysicsServer2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_server2d_class_body_apply_central_force(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PhysicsServer2D::body_apply_central_force, PhysicsServer2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_server2d_class_body_apply_force(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PhysicsServer2D::body_apply_force, PhysicsServer2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_server2d_class_body_apply_torque(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PhysicsServer2D::body_apply_torque, PhysicsServer2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_server2d_class_body_add_constant_central_force(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PhysicsServer2D::body_add_constant_central_force, PhysicsServer2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_server2d_class_body_add_constant_force(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PhysicsServer2D::body_add_constant_force, PhysicsServer2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_server2d_class_body_add_constant_torque(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PhysicsServer2D::body_add_constant_torque, PhysicsServer2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_server2d_class_body_set_constant_force(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PhysicsServer2D::body_set_constant_force, PhysicsServer2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_server2d_class_body_get_constant_force(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsServer2D::body_get_constant_force, PhysicsServer2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_server2d_class_body_set_constant_torque(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PhysicsServer2D::body_set_constant_torque, PhysicsServer2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_server2d_class_body_get_constant_torque(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsServer2D::body_get_constant_torque, PhysicsServer2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_server2d_class_body_set_axis_velocity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PhysicsServer2D::body_set_axis_velocity, PhysicsServer2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_server2d_class_body_add_collision_exception(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PhysicsServer2D::body_add_collision_exception, PhysicsServer2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_server2d_class_body_remove_collision_exception(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PhysicsServer2D::body_remove_collision_exception, PhysicsServer2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_server2d_class_body_set_max_contacts_reported(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PhysicsServer2D::body_set_max_contacts_reported, PhysicsServer2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_server2d_class_body_get_max_contacts_reported(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsServer2D::body_get_max_contacts_reported, PhysicsServer2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_server2d_class_body_set_omit_force_integration(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PhysicsServer2D::body_set_omit_force_integration, PhysicsServer2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_server2d_class_body_is_omitting_force_integration(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsServer2D::body_is_omitting_force_integration, PhysicsServer2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_server2d_class_body_set_state_sync_callback(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PhysicsServer2D::body_set_state_sync_callback, PhysicsServer2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_server2d_class_body_set_force_integration_callback(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PhysicsServer2D::body_set_force_integration_callback, PhysicsServer2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_server2d_class_body_test_motion(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&PhysicsServer2D::body_test_motion, PhysicsServer2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_server2d_class_body_get_direct_state(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&PhysicsServer2D::body_get_direct_state, PhysicsServer2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_server2d_class_joint_create(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&PhysicsServer2D::joint_create, PhysicsServer2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_server2d_class_joint_clear(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PhysicsServer2D::joint_clear, PhysicsServer2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_server2d_class_joint_set_param(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PhysicsServer2D::joint_set_param, PhysicsServer2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_server2d_class_joint_get_param(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsServer2D::joint_get_param, PhysicsServer2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_server2d_class_joint_disable_collisions_between_bodies(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PhysicsServer2D::joint_disable_collisions_between_bodies, PhysicsServer2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_server2d_class_joint_is_disabled_collisions_between_bodies(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsServer2D::joint_is_disabled_collisions_between_bodies, PhysicsServer2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_server2d_class_joint_make_pin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PhysicsServer2D::joint_make_pin, PhysicsServer2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_server2d_class_joint_make_groove(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PhysicsServer2D::joint_make_groove, PhysicsServer2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_server2d_class_joint_make_damped_spring(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PhysicsServer2D::joint_make_damped_spring, PhysicsServer2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_server2d_class_pin_joint_set_flag(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PhysicsServer2D::pin_joint_set_flag, PhysicsServer2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_server2d_class_pin_joint_get_flag(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsServer2D::pin_joint_get_flag, PhysicsServer2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_server2d_class_pin_joint_set_param(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PhysicsServer2D::pin_joint_set_param, PhysicsServer2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_server2d_class_pin_joint_get_param(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsServer2D::pin_joint_get_param, PhysicsServer2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_server2d_class_damped_spring_joint_set_param(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PhysicsServer2D::damped_spring_joint_set_param, PhysicsServer2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_server2d_class_damped_spring_joint_get_param(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsServer2D::damped_spring_joint_get_param, PhysicsServer2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_server2d_class_joint_get_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsServer2D::joint_get_type, PhysicsServer2D::__class_id, ctx, this_val, argv);
};
static JSValue physics_server2d_class_free_rid(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PhysicsServer2D::free_rid, PhysicsServer2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_server2d_class_set_active(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PhysicsServer2D::set_active, PhysicsServer2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_server2d_class_get_process_info(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&PhysicsServer2D::get_process_info, PhysicsServer2D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry physics_server2d_class_proto_funcs[] = {
	JS_CFUNC_DEF("world_boundary_shape_create", 0, &physics_server2d_class_world_boundary_shape_create),
	JS_CFUNC_DEF("separation_ray_shape_create", 0, &physics_server2d_class_separation_ray_shape_create),
	JS_CFUNC_DEF("segment_shape_create", 0, &physics_server2d_class_segment_shape_create),
	JS_CFUNC_DEF("circle_shape_create", 0, &physics_server2d_class_circle_shape_create),
	JS_CFUNC_DEF("rectangle_shape_create", 0, &physics_server2d_class_rectangle_shape_create),
	JS_CFUNC_DEF("capsule_shape_create", 0, &physics_server2d_class_capsule_shape_create),
	JS_CFUNC_DEF("convex_polygon_shape_create", 0, &physics_server2d_class_convex_polygon_shape_create),
	JS_CFUNC_DEF("concave_polygon_shape_create", 0, &physics_server2d_class_concave_polygon_shape_create),
	JS_CFUNC_DEF("shape_set_data", 2, &physics_server2d_class_shape_set_data),
	JS_CFUNC_DEF("shape_get_type", 1, &physics_server2d_class_shape_get_type),
	JS_CFUNC_DEF("shape_get_data", 1, &physics_server2d_class_shape_get_data),
	JS_CFUNC_DEF("space_create", 0, &physics_server2d_class_space_create),
	JS_CFUNC_DEF("space_set_active", 2, &physics_server2d_class_space_set_active),
	JS_CFUNC_DEF("space_is_active", 1, &physics_server2d_class_space_is_active),
	JS_CFUNC_DEF("space_set_param", 3, &physics_server2d_class_space_set_param),
	JS_CFUNC_DEF("space_get_param", 2, &physics_server2d_class_space_get_param),
	JS_CFUNC_DEF("space_get_direct_state", 1, &physics_server2d_class_space_get_direct_state),
	JS_CFUNC_DEF("area_create", 0, &physics_server2d_class_area_create),
	JS_CFUNC_DEF("area_set_space", 2, &physics_server2d_class_area_set_space),
	JS_CFUNC_DEF("area_get_space", 1, &physics_server2d_class_area_get_space),
	JS_CFUNC_DEF("area_add_shape", 4, &physics_server2d_class_area_add_shape),
	JS_CFUNC_DEF("area_set_shape", 3, &physics_server2d_class_area_set_shape),
	JS_CFUNC_DEF("area_set_shape_transform", 3, &physics_server2d_class_area_set_shape_transform),
	JS_CFUNC_DEF("area_set_shape_disabled", 3, &physics_server2d_class_area_set_shape_disabled),
	JS_CFUNC_DEF("area_get_shape_count", 1, &physics_server2d_class_area_get_shape_count),
	JS_CFUNC_DEF("area_get_shape", 2, &physics_server2d_class_area_get_shape),
	JS_CFUNC_DEF("area_get_shape_transform", 2, &physics_server2d_class_area_get_shape_transform),
	JS_CFUNC_DEF("area_remove_shape", 2, &physics_server2d_class_area_remove_shape),
	JS_CFUNC_DEF("area_clear_shapes", 1, &physics_server2d_class_area_clear_shapes),
	JS_CFUNC_DEF("area_set_collision_layer", 2, &physics_server2d_class_area_set_collision_layer),
	JS_CFUNC_DEF("area_get_collision_layer", 1, &physics_server2d_class_area_get_collision_layer),
	JS_CFUNC_DEF("area_set_collision_mask", 2, &physics_server2d_class_area_set_collision_mask),
	JS_CFUNC_DEF("area_get_collision_mask", 1, &physics_server2d_class_area_get_collision_mask),
	JS_CFUNC_DEF("area_set_param", 3, &physics_server2d_class_area_set_param),
	JS_CFUNC_DEF("area_set_transform", 2, &physics_server2d_class_area_set_transform),
	JS_CFUNC_DEF("area_get_param", 2, &physics_server2d_class_area_get_param),
	JS_CFUNC_DEF("area_get_transform", 1, &physics_server2d_class_area_get_transform),
	JS_CFUNC_DEF("area_attach_object_instance_id", 2, &physics_server2d_class_area_attach_object_instance_id),
	JS_CFUNC_DEF("area_get_object_instance_id", 1, &physics_server2d_class_area_get_object_instance_id),
	JS_CFUNC_DEF("area_attach_canvas_instance_id", 2, &physics_server2d_class_area_attach_canvas_instance_id),
	JS_CFUNC_DEF("area_get_canvas_instance_id", 1, &physics_server2d_class_area_get_canvas_instance_id),
	JS_CFUNC_DEF("area_set_monitor_callback", 2, &physics_server2d_class_area_set_monitor_callback),
	JS_CFUNC_DEF("area_set_area_monitor_callback", 2, &physics_server2d_class_area_set_area_monitor_callback),
	JS_CFUNC_DEF("area_set_monitorable", 2, &physics_server2d_class_area_set_monitorable),
	JS_CFUNC_DEF("body_create", 0, &physics_server2d_class_body_create),
	JS_CFUNC_DEF("body_set_space", 2, &physics_server2d_class_body_set_space),
	JS_CFUNC_DEF("body_get_space", 1, &physics_server2d_class_body_get_space),
	JS_CFUNC_DEF("body_set_mode", 2, &physics_server2d_class_body_set_mode),
	JS_CFUNC_DEF("body_get_mode", 1, &physics_server2d_class_body_get_mode),
	JS_CFUNC_DEF("body_add_shape", 4, &physics_server2d_class_body_add_shape),
	JS_CFUNC_DEF("body_set_shape", 3, &physics_server2d_class_body_set_shape),
	JS_CFUNC_DEF("body_set_shape_transform", 3, &physics_server2d_class_body_set_shape_transform),
	JS_CFUNC_DEF("body_get_shape_count", 1, &physics_server2d_class_body_get_shape_count),
	JS_CFUNC_DEF("body_get_shape", 2, &physics_server2d_class_body_get_shape),
	JS_CFUNC_DEF("body_get_shape_transform", 2, &physics_server2d_class_body_get_shape_transform),
	JS_CFUNC_DEF("body_remove_shape", 2, &physics_server2d_class_body_remove_shape),
	JS_CFUNC_DEF("body_clear_shapes", 1, &physics_server2d_class_body_clear_shapes),
	JS_CFUNC_DEF("body_set_shape_disabled", 3, &physics_server2d_class_body_set_shape_disabled),
	JS_CFUNC_DEF("body_set_shape_as_one_way_collision", 4, &physics_server2d_class_body_set_shape_as_one_way_collision),
	JS_CFUNC_DEF("body_attach_object_instance_id", 2, &physics_server2d_class_body_attach_object_instance_id),
	JS_CFUNC_DEF("body_get_object_instance_id", 1, &physics_server2d_class_body_get_object_instance_id),
	JS_CFUNC_DEF("body_attach_canvas_instance_id", 2, &physics_server2d_class_body_attach_canvas_instance_id),
	JS_CFUNC_DEF("body_get_canvas_instance_id", 1, &physics_server2d_class_body_get_canvas_instance_id),
	JS_CFUNC_DEF("body_set_continuous_collision_detection_mode", 2, &physics_server2d_class_body_set_continuous_collision_detection_mode),
	JS_CFUNC_DEF("body_get_continuous_collision_detection_mode", 1, &physics_server2d_class_body_get_continuous_collision_detection_mode),
	JS_CFUNC_DEF("body_set_collision_layer", 2, &physics_server2d_class_body_set_collision_layer),
	JS_CFUNC_DEF("body_get_collision_layer", 1, &physics_server2d_class_body_get_collision_layer),
	JS_CFUNC_DEF("body_set_collision_mask", 2, &physics_server2d_class_body_set_collision_mask),
	JS_CFUNC_DEF("body_get_collision_mask", 1, &physics_server2d_class_body_get_collision_mask),
	JS_CFUNC_DEF("body_set_collision_priority", 2, &physics_server2d_class_body_set_collision_priority),
	JS_CFUNC_DEF("body_get_collision_priority", 1, &physics_server2d_class_body_get_collision_priority),
	JS_CFUNC_DEF("body_set_param", 3, &physics_server2d_class_body_set_param),
	JS_CFUNC_DEF("body_get_param", 2, &physics_server2d_class_body_get_param),
	JS_CFUNC_DEF("body_reset_mass_properties", 1, &physics_server2d_class_body_reset_mass_properties),
	JS_CFUNC_DEF("body_set_state", 3, &physics_server2d_class_body_set_state),
	JS_CFUNC_DEF("body_get_state", 2, &physics_server2d_class_body_get_state),
	JS_CFUNC_DEF("body_apply_central_impulse", 2, &physics_server2d_class_body_apply_central_impulse),
	JS_CFUNC_DEF("body_apply_torque_impulse", 2, &physics_server2d_class_body_apply_torque_impulse),
	JS_CFUNC_DEF("body_apply_impulse", 3, &physics_server2d_class_body_apply_impulse),
	JS_CFUNC_DEF("body_apply_central_force", 2, &physics_server2d_class_body_apply_central_force),
	JS_CFUNC_DEF("body_apply_force", 3, &physics_server2d_class_body_apply_force),
	JS_CFUNC_DEF("body_apply_torque", 2, &physics_server2d_class_body_apply_torque),
	JS_CFUNC_DEF("body_add_constant_central_force", 2, &physics_server2d_class_body_add_constant_central_force),
	JS_CFUNC_DEF("body_add_constant_force", 3, &physics_server2d_class_body_add_constant_force),
	JS_CFUNC_DEF("body_add_constant_torque", 2, &physics_server2d_class_body_add_constant_torque),
	JS_CFUNC_DEF("body_set_constant_force", 2, &physics_server2d_class_body_set_constant_force),
	JS_CFUNC_DEF("body_get_constant_force", 1, &physics_server2d_class_body_get_constant_force),
	JS_CFUNC_DEF("body_set_constant_torque", 2, &physics_server2d_class_body_set_constant_torque),
	JS_CFUNC_DEF("body_get_constant_torque", 1, &physics_server2d_class_body_get_constant_torque),
	JS_CFUNC_DEF("body_set_axis_velocity", 2, &physics_server2d_class_body_set_axis_velocity),
	JS_CFUNC_DEF("body_add_collision_exception", 2, &physics_server2d_class_body_add_collision_exception),
	JS_CFUNC_DEF("body_remove_collision_exception", 2, &physics_server2d_class_body_remove_collision_exception),
	JS_CFUNC_DEF("body_set_max_contacts_reported", 2, &physics_server2d_class_body_set_max_contacts_reported),
	JS_CFUNC_DEF("body_get_max_contacts_reported", 1, &physics_server2d_class_body_get_max_contacts_reported),
	JS_CFUNC_DEF("body_set_omit_force_integration", 2, &physics_server2d_class_body_set_omit_force_integration),
	JS_CFUNC_DEF("body_is_omitting_force_integration", 1, &physics_server2d_class_body_is_omitting_force_integration),
	JS_CFUNC_DEF("body_set_state_sync_callback", 2, &physics_server2d_class_body_set_state_sync_callback),
	JS_CFUNC_DEF("body_set_force_integration_callback", 3, &physics_server2d_class_body_set_force_integration_callback),
	JS_CFUNC_DEF("body_test_motion", 3, &physics_server2d_class_body_test_motion),
	JS_CFUNC_DEF("body_get_direct_state", 1, &physics_server2d_class_body_get_direct_state),
	JS_CFUNC_DEF("joint_create", 0, &physics_server2d_class_joint_create),
	JS_CFUNC_DEF("joint_clear", 1, &physics_server2d_class_joint_clear),
	JS_CFUNC_DEF("joint_set_param", 3, &physics_server2d_class_joint_set_param),
	JS_CFUNC_DEF("joint_get_param", 2, &physics_server2d_class_joint_get_param),
	JS_CFUNC_DEF("joint_disable_collisions_between_bodies", 2, &physics_server2d_class_joint_disable_collisions_between_bodies),
	JS_CFUNC_DEF("joint_is_disabled_collisions_between_bodies", 1, &physics_server2d_class_joint_is_disabled_collisions_between_bodies),
	JS_CFUNC_DEF("joint_make_pin", 4, &physics_server2d_class_joint_make_pin),
	JS_CFUNC_DEF("joint_make_groove", 6, &physics_server2d_class_joint_make_groove),
	JS_CFUNC_DEF("joint_make_damped_spring", 5, &physics_server2d_class_joint_make_damped_spring),
	JS_CFUNC_DEF("pin_joint_set_flag", 3, &physics_server2d_class_pin_joint_set_flag),
	JS_CFUNC_DEF("pin_joint_get_flag", 2, &physics_server2d_class_pin_joint_get_flag),
	JS_CFUNC_DEF("pin_joint_set_param", 3, &physics_server2d_class_pin_joint_set_param),
	JS_CFUNC_DEF("pin_joint_get_param", 2, &physics_server2d_class_pin_joint_get_param),
	JS_CFUNC_DEF("damped_spring_joint_set_param", 3, &physics_server2d_class_damped_spring_joint_set_param),
	JS_CFUNC_DEF("damped_spring_joint_get_param", 2, &physics_server2d_class_damped_spring_joint_get_param),
	JS_CFUNC_DEF("joint_get_type", 1, &physics_server2d_class_joint_get_type),
	JS_CFUNC_DEF("free_rid", 1, &physics_server2d_class_free_rid),
	JS_CFUNC_DEF("set_active", 1, &physics_server2d_class_set_active),
	JS_CFUNC_DEF("get_process_info", 1, &physics_server2d_class_get_process_info),
};

static int js_physics_server2d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&PhysicsServer2D::__class_id);
	classes["PhysicsServer2D"] = PhysicsServer2D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), PhysicsServer2D::__class_id, &physics_server2d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Object::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, PhysicsServer2D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, physics_server2d_class_proto_funcs, _countof(physics_server2d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, physics_server2d_class_constructor, "PhysicsServer2D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "PhysicsServer2D", ctor);

	return 0;
}

JSModuleDef *_js_init_physics_server2d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_physics_server2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "PhysicsServer2D");
	return m;
}

JSModuleDef *js_init_physics_server2d_module(JSContext *ctx) {
	return _js_init_physics_server2d_module(ctx, "godot/classes/physics_server2d");
}

void register_physics_server2d() {
	js_init_physics_server2d_module(ctx);
}