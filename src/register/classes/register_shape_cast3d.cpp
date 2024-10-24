
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/shape3d.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/shape_cast3d.hpp>
#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/classes/collision_object3d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void shape_cast3d_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef shape_cast3d_class_def = {
	"ShapeCast3D",
	.finalizer = shape_cast3d_class_finalizer
};

static JSValue shape_cast3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, ShapeCast3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	ShapeCast3D *shape_cast3d_class = memnew(ShapeCast3D);
	if (!shape_cast3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, shape_cast3d_class);	
	return obj;
}
static JSValue shape_cast3d_class_resource_changed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ShapeCast3D::resource_changed, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue shape_cast3d_class_set_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ShapeCast3D::set_enabled, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue shape_cast3d_class_is_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ShapeCast3D::is_enabled, ctx, this_val, argc, argv);
};
static JSValue shape_cast3d_class_set_shape(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ShapeCast3D::set_shape, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue shape_cast3d_class_get_shape(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ShapeCast3D::get_shape, ctx, this_val, argc, argv);
};
static JSValue shape_cast3d_class_set_target_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ShapeCast3D::set_target_position, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue shape_cast3d_class_get_target_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ShapeCast3D::get_target_position, ctx, this_val, argc, argv);
};
static JSValue shape_cast3d_class_set_margin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ShapeCast3D::set_margin, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue shape_cast3d_class_get_margin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ShapeCast3D::get_margin, ctx, this_val, argc, argv);
};
static JSValue shape_cast3d_class_set_max_results(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ShapeCast3D::set_max_results, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue shape_cast3d_class_get_max_results(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ShapeCast3D::get_max_results, ctx, this_val, argc, argv);
};
static JSValue shape_cast3d_class_is_colliding(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ShapeCast3D::is_colliding, ctx, this_val, argc, argv);
};
static JSValue shape_cast3d_class_get_collision_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ShapeCast3D::get_collision_count, ctx, this_val, argc, argv);
};
static JSValue shape_cast3d_class_force_shapecast_update(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ShapeCast3D::force_shapecast_update, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue shape_cast3d_class_get_collider(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ShapeCast3D::get_collider, ctx, this_val, argc, argv);
};
static JSValue shape_cast3d_class_get_collider_rid(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ShapeCast3D::get_collider_rid, ctx, this_val, argc, argv);
};
static JSValue shape_cast3d_class_get_collider_shape(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ShapeCast3D::get_collider_shape, ctx, this_val, argc, argv);
};
static JSValue shape_cast3d_class_get_collision_point(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ShapeCast3D::get_collision_point, ctx, this_val, argc, argv);
};
static JSValue shape_cast3d_class_get_collision_normal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ShapeCast3D::get_collision_normal, ctx, this_val, argc, argv);
};
static JSValue shape_cast3d_class_get_closest_collision_safe_fraction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ShapeCast3D::get_closest_collision_safe_fraction, ctx, this_val, argc, argv);
};
static JSValue shape_cast3d_class_get_closest_collision_unsafe_fraction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ShapeCast3D::get_closest_collision_unsafe_fraction, ctx, this_val, argc, argv);
};
static JSValue shape_cast3d_class_add_exception_rid(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ShapeCast3D::add_exception_rid, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue shape_cast3d_class_add_exception(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ShapeCast3D::add_exception, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue shape_cast3d_class_remove_exception_rid(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ShapeCast3D::remove_exception_rid, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue shape_cast3d_class_remove_exception(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ShapeCast3D::remove_exception, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue shape_cast3d_class_clear_exceptions(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ShapeCast3D::clear_exceptions, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue shape_cast3d_class_set_collision_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ShapeCast3D::set_collision_mask, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue shape_cast3d_class_get_collision_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ShapeCast3D::get_collision_mask, ctx, this_val, argc, argv);
};
static JSValue shape_cast3d_class_set_collision_mask_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ShapeCast3D::set_collision_mask_value, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue shape_cast3d_class_get_collision_mask_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ShapeCast3D::get_collision_mask_value, ctx, this_val, argc, argv);
};
static JSValue shape_cast3d_class_set_exclude_parent_body(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ShapeCast3D::set_exclude_parent_body, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue shape_cast3d_class_get_exclude_parent_body(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ShapeCast3D::get_exclude_parent_body, ctx, this_val, argc, argv);
};
static JSValue shape_cast3d_class_set_collide_with_areas(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ShapeCast3D::set_collide_with_areas, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue shape_cast3d_class_is_collide_with_areas_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ShapeCast3D::is_collide_with_areas_enabled, ctx, this_val, argc, argv);
};
static JSValue shape_cast3d_class_set_collide_with_bodies(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ShapeCast3D::set_collide_with_bodies, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue shape_cast3d_class_is_collide_with_bodies_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ShapeCast3D::is_collide_with_bodies_enabled, ctx, this_val, argc, argv);
};
static JSValue shape_cast3d_class_set_debug_shape_custom_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ShapeCast3D::set_debug_shape_custom_color, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue shape_cast3d_class_get_debug_shape_custom_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ShapeCast3D::get_debug_shape_custom_color, ctx, this_val, argc, argv);
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

void define_shape_cast3d_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "enabled"),
        JS_NewCFunction(ctx, shape_cast3d_class_is_enabled, "is_enabled", 0),
        JS_NewCFunction(ctx, shape_cast3d_class_set_enabled, "set_enabled", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "shape"),
        JS_NewCFunction(ctx, shape_cast3d_class_get_shape, "get_shape", 0),
        JS_NewCFunction(ctx, shape_cast3d_class_set_shape, "set_shape", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "exclude_parent"),
        JS_NewCFunction(ctx, shape_cast3d_class_get_exclude_parent_body, "get_exclude_parent_body", 0),
        JS_NewCFunction(ctx, shape_cast3d_class_set_exclude_parent_body, "set_exclude_parent_body", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "target_position"),
        JS_NewCFunction(ctx, shape_cast3d_class_get_target_position, "get_target_position", 0),
        JS_NewCFunction(ctx, shape_cast3d_class_set_target_position, "set_target_position", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "margin"),
        JS_NewCFunction(ctx, shape_cast3d_class_get_margin, "get_margin", 0),
        JS_NewCFunction(ctx, shape_cast3d_class_set_margin, "set_margin", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "max_results"),
        JS_NewCFunction(ctx, shape_cast3d_class_get_max_results, "get_max_results", 0),
        JS_NewCFunction(ctx, shape_cast3d_class_set_max_results, "set_max_results", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "collision_mask"),
        JS_NewCFunction(ctx, shape_cast3d_class_get_collision_mask, "get_collision_mask", 0),
        JS_NewCFunction(ctx, shape_cast3d_class_set_collision_mask, "set_collision_mask", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "collide_with_areas"),
        JS_NewCFunction(ctx, shape_cast3d_class_is_collide_with_areas_enabled, "is_collide_with_areas_enabled", 0),
        JS_NewCFunction(ctx, shape_cast3d_class_set_collide_with_areas, "set_collide_with_areas", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "collide_with_bodies"),
        JS_NewCFunction(ctx, shape_cast3d_class_is_collide_with_bodies_enabled, "is_collide_with_bodies_enabled", 0),
        JS_NewCFunction(ctx, shape_cast3d_class_set_collide_with_bodies, "set_collide_with_bodies", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "debug_shape_custom_color"),
        JS_NewCFunction(ctx, shape_cast3d_class_get_debug_shape_custom_color, "get_debug_shape_custom_color", 0),
        JS_NewCFunction(ctx, shape_cast3d_class_set_debug_shape_custom_color, "set_debug_shape_custom_color", 1),
        JS_PROP_GETSET
    );
}

static int js_shape_cast3d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&ShapeCast3D::__class_id);
	classes["ShapeCast3D"] = ShapeCast3D::__class_id;
	class_id_list.insert(ShapeCast3D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), ShapeCast3D::__class_id, &shape_cast3d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, ShapeCast3D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Node3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ShapeCast3D::__class_id, proto);

	define_shape_cast3d_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, shape_cast3d_class_proto_funcs, _countof(shape_cast3d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, shape_cast3d_class_constructor, "ShapeCast3D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "ShapeCast3D", ctor);

	return 0;
}

JSModuleDef *_js_init_shape_cast3d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/node3d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
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
	ShapeCast3D::__init_js_class_id();
	js_init_shape_cast3d_module(ctx);
}