
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/shape3d.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/collision_object3d.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/classes/shape_cast3d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void shape_cast3d_class_finalizer(JSRuntime *rt, JSValue val) {
	ShapeCast3D *shape_cast3d = static_cast<ShapeCast3D *>(JS_GetOpaque(val, ShapeCast3D::__class_id));
	if (shape_cast3d)
		ShapeCast3D::free(nullptr, shape_cast3d);
}

static JSClassDef shape_cast3d_class_def = {
	"ShapeCast3D",
	.finalizer = shape_cast3d_class_finalizer
};

static JSValue shape_cast3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	ShapeCast3D *shape_cast3d_class;
	JSValue obj = JS_NewObjectClass(ctx, ShapeCast3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	shape_cast3d_class = memnew(ShapeCast3D);
	if (!shape_cast3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, shape_cast3d_class);
	return obj;
}
static JSValue shape_cast3d_class_resource_changed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ShapeCast3D::resource_changed, ShapeCast3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue shape_cast3d_class_set_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ShapeCast3D::set_enabled, ShapeCast3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue shape_cast3d_class_is_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ShapeCast3D::is_enabled, ShapeCast3D::__class_id, ctx, this_val, argv);
};
static JSValue shape_cast3d_class_set_shape(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ShapeCast3D::set_shape, ShapeCast3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue shape_cast3d_class_get_shape(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ShapeCast3D::get_shape, ShapeCast3D::__class_id, ctx, this_val, argv);
};
static JSValue shape_cast3d_class_set_target_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ShapeCast3D::set_target_position, ShapeCast3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue shape_cast3d_class_get_target_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ShapeCast3D::get_target_position, ShapeCast3D::__class_id, ctx, this_val, argv);
};
static JSValue shape_cast3d_class_set_margin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ShapeCast3D::set_margin, ShapeCast3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue shape_cast3d_class_get_margin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ShapeCast3D::get_margin, ShapeCast3D::__class_id, ctx, this_val, argv);
};
static JSValue shape_cast3d_class_set_max_results(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ShapeCast3D::set_max_results, ShapeCast3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue shape_cast3d_class_get_max_results(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ShapeCast3D::get_max_results, ShapeCast3D::__class_id, ctx, this_val, argv);
};
static JSValue shape_cast3d_class_is_colliding(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ShapeCast3D::is_colliding, ShapeCast3D::__class_id, ctx, this_val, argv);
};
static JSValue shape_cast3d_class_get_collision_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ShapeCast3D::get_collision_count, ShapeCast3D::__class_id, ctx, this_val, argv);
};
static JSValue shape_cast3d_class_force_shapecast_update(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ShapeCast3D::force_shapecast_update, ShapeCast3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue shape_cast3d_class_get_collider(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ShapeCast3D::get_collider, ShapeCast3D::__class_id, ctx, this_val, argv);
};
static JSValue shape_cast3d_class_get_collider_rid(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ShapeCast3D::get_collider_rid, ShapeCast3D::__class_id, ctx, this_val, argv);
};
static JSValue shape_cast3d_class_get_collider_shape(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ShapeCast3D::get_collider_shape, ShapeCast3D::__class_id, ctx, this_val, argv);
};
static JSValue shape_cast3d_class_get_collision_point(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ShapeCast3D::get_collision_point, ShapeCast3D::__class_id, ctx, this_val, argv);
};
static JSValue shape_cast3d_class_get_collision_normal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ShapeCast3D::get_collision_normal, ShapeCast3D::__class_id, ctx, this_val, argv);
};
static JSValue shape_cast3d_class_get_closest_collision_safe_fraction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ShapeCast3D::get_closest_collision_safe_fraction, ShapeCast3D::__class_id, ctx, this_val, argv);
};
static JSValue shape_cast3d_class_get_closest_collision_unsafe_fraction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ShapeCast3D::get_closest_collision_unsafe_fraction, ShapeCast3D::__class_id, ctx, this_val, argv);
};
static JSValue shape_cast3d_class_add_exception_rid(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ShapeCast3D::add_exception_rid, ShapeCast3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue shape_cast3d_class_add_exception(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ShapeCast3D::add_exception, ShapeCast3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue shape_cast3d_class_remove_exception_rid(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ShapeCast3D::remove_exception_rid, ShapeCast3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue shape_cast3d_class_remove_exception(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ShapeCast3D::remove_exception, ShapeCast3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue shape_cast3d_class_clear_exceptions(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ShapeCast3D::clear_exceptions, ShapeCast3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue shape_cast3d_class_set_collision_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ShapeCast3D::set_collision_mask, ShapeCast3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue shape_cast3d_class_get_collision_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ShapeCast3D::get_collision_mask, ShapeCast3D::__class_id, ctx, this_val, argv);
};
static JSValue shape_cast3d_class_set_collision_mask_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ShapeCast3D::set_collision_mask_value, ShapeCast3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue shape_cast3d_class_get_collision_mask_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ShapeCast3D::get_collision_mask_value, ShapeCast3D::__class_id, ctx, this_val, argv);
};
static JSValue shape_cast3d_class_set_exclude_parent_body(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ShapeCast3D::set_exclude_parent_body, ShapeCast3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue shape_cast3d_class_get_exclude_parent_body(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ShapeCast3D::get_exclude_parent_body, ShapeCast3D::__class_id, ctx, this_val, argv);
};
static JSValue shape_cast3d_class_set_collide_with_areas(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ShapeCast3D::set_collide_with_areas, ShapeCast3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue shape_cast3d_class_is_collide_with_areas_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ShapeCast3D::is_collide_with_areas_enabled, ShapeCast3D::__class_id, ctx, this_val, argv);
};
static JSValue shape_cast3d_class_set_collide_with_bodies(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ShapeCast3D::set_collide_with_bodies, ShapeCast3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue shape_cast3d_class_is_collide_with_bodies_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ShapeCast3D::is_collide_with_bodies_enabled, ShapeCast3D::__class_id, ctx, this_val, argv);
};
static JSValue shape_cast3d_class_set_debug_shape_custom_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ShapeCast3D::set_debug_shape_custom_color, ShapeCast3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue shape_cast3d_class_get_debug_shape_custom_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ShapeCast3D::get_debug_shape_custom_color, ShapeCast3D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry shape_cast3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("resource_changed", 1, &shape_cast3d_class_resource_changed),
	JS_CFUNC_DEF("set_enabled", 1, &shape_cast3d_class_set_enabled),
	JS_CFUNC_DEF("is_enabled", 0, &shape_cast3d_class_is_enabled),
	JS_CFUNC_DEF("set_shape", 1, &shape_cast3d_class_set_shape),
	JS_CFUNC_DEF("get_shape", 0, &shape_cast3d_class_get_shape),
	JS_CFUNC_DEF("set_target_position", 1, &shape_cast3d_class_set_target_position),
	JS_CFUNC_DEF("get_target_position", 0, &shape_cast3d_class_get_target_position),
	JS_CFUNC_DEF("set_margin", 1, &shape_cast3d_class_set_margin),
	JS_CFUNC_DEF("get_margin", 0, &shape_cast3d_class_get_margin),
	JS_CFUNC_DEF("set_max_results", 1, &shape_cast3d_class_set_max_results),
	JS_CFUNC_DEF("get_max_results", 0, &shape_cast3d_class_get_max_results),
	JS_CFUNC_DEF("is_colliding", 0, &shape_cast3d_class_is_colliding),
	JS_CFUNC_DEF("get_collision_count", 0, &shape_cast3d_class_get_collision_count),
	JS_CFUNC_DEF("force_shapecast_update", 0, &shape_cast3d_class_force_shapecast_update),
	JS_CFUNC_DEF("get_collider", 1, &shape_cast3d_class_get_collider),
	JS_CFUNC_DEF("get_collider_rid", 1, &shape_cast3d_class_get_collider_rid),
	JS_CFUNC_DEF("get_collider_shape", 1, &shape_cast3d_class_get_collider_shape),
	JS_CFUNC_DEF("get_collision_point", 1, &shape_cast3d_class_get_collision_point),
	JS_CFUNC_DEF("get_collision_normal", 1, &shape_cast3d_class_get_collision_normal),
	JS_CFUNC_DEF("get_closest_collision_safe_fraction", 0, &shape_cast3d_class_get_closest_collision_safe_fraction),
	JS_CFUNC_DEF("get_closest_collision_unsafe_fraction", 0, &shape_cast3d_class_get_closest_collision_unsafe_fraction),
	JS_CFUNC_DEF("add_exception_rid", 1, &shape_cast3d_class_add_exception_rid),
	JS_CFUNC_DEF("add_exception", 1, &shape_cast3d_class_add_exception),
	JS_CFUNC_DEF("remove_exception_rid", 1, &shape_cast3d_class_remove_exception_rid),
	JS_CFUNC_DEF("remove_exception", 1, &shape_cast3d_class_remove_exception),
	JS_CFUNC_DEF("clear_exceptions", 0, &shape_cast3d_class_clear_exceptions),
	JS_CFUNC_DEF("set_collision_mask", 1, &shape_cast3d_class_set_collision_mask),
	JS_CFUNC_DEF("get_collision_mask", 0, &shape_cast3d_class_get_collision_mask),
	JS_CFUNC_DEF("set_collision_mask_value", 2, &shape_cast3d_class_set_collision_mask_value),
	JS_CFUNC_DEF("get_collision_mask_value", 1, &shape_cast3d_class_get_collision_mask_value),
	JS_CFUNC_DEF("set_exclude_parent_body", 1, &shape_cast3d_class_set_exclude_parent_body),
	JS_CFUNC_DEF("get_exclude_parent_body", 0, &shape_cast3d_class_get_exclude_parent_body),
	JS_CFUNC_DEF("set_collide_with_areas", 1, &shape_cast3d_class_set_collide_with_areas),
	JS_CFUNC_DEF("is_collide_with_areas_enabled", 0, &shape_cast3d_class_is_collide_with_areas_enabled),
	JS_CFUNC_DEF("set_collide_with_bodies", 1, &shape_cast3d_class_set_collide_with_bodies),
	JS_CFUNC_DEF("is_collide_with_bodies_enabled", 0, &shape_cast3d_class_is_collide_with_bodies_enabled),
	JS_CFUNC_DEF("set_debug_shape_custom_color", 1, &shape_cast3d_class_set_debug_shape_custom_color),
	JS_CFUNC_DEF("get_debug_shape_custom_color", 0, &shape_cast3d_class_get_debug_shape_custom_color),
};

static int js_shape_cast3d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&ShapeCast3D::__class_id);
	classes["ShapeCast3D"] = ShapeCast3D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), ShapeCast3D::__class_id, &shape_cast3d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Node3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ShapeCast3D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, shape_cast3d_class_proto_funcs, _countof(shape_cast3d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, shape_cast3d_class_constructor, "ShapeCast3D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "ShapeCast3D", ctor);

	return 0;
}

JSModuleDef *_js_init_shape_cast3d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_shape_cast3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "ShapeCast3D");
	return m;
}

JSModuleDef *js_init_shape_cast3d_module(JSContext *ctx) {
	return _js_init_shape_cast3d_module(ctx, "godot/classes/shape_cast3d");
}

void register_shape_cast3d() {
	js_init_shape_cast3d_module(ctx);
}