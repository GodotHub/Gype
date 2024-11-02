
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/shape2d.hpp>
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/classes/shape_cast2d.hpp>
#include <godot_cpp/classes/collision_object2d.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void shape_cast2d_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef shape_cast2d_class_def = {
	"ShapeCast2D",
	.finalizer = shape_cast2d_class_finalizer
};

static JSValue shape_cast2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, ShapeCast2D::__class_id);
	if (JS_IsException(obj))
		return obj;

	ShapeCast2D *shape_cast2d_class;
	if (argc == 1) 
		shape_cast2d_class = static_cast<ShapeCast2D *>(Variant(*argv).operator Object *());
	else 
		shape_cast2d_class = memnew(ShapeCast2D);
	if (!shape_cast2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, shape_cast2d_class);
	return obj;
}
static JSValue shape_cast2d_class_set_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&ShapeCast2D::set_enabled, ctx, this_val, argc, argv);
};
static JSValue shape_cast2d_class_is_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ShapeCast2D::is_enabled, ctx, this_val, argc, argv);
};
static JSValue shape_cast2d_class_set_shape(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&ShapeCast2D::set_shape, ctx, this_val, argc, argv);
};
static JSValue shape_cast2d_class_get_shape(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ShapeCast2D::get_shape, ctx, this_val, argc, argv);
};
static JSValue shape_cast2d_class_set_target_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&ShapeCast2D::set_target_position, ctx, this_val, argc, argv);
};
static JSValue shape_cast2d_class_get_target_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ShapeCast2D::get_target_position, ctx, this_val, argc, argv);
};
static JSValue shape_cast2d_class_set_margin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&ShapeCast2D::set_margin, ctx, this_val, argc, argv);
};
static JSValue shape_cast2d_class_get_margin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ShapeCast2D::get_margin, ctx, this_val, argc, argv);
};
static JSValue shape_cast2d_class_set_max_results(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&ShapeCast2D::set_max_results, ctx, this_val, argc, argv);
};
static JSValue shape_cast2d_class_get_max_results(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ShapeCast2D::get_max_results, ctx, this_val, argc, argv);
};
static JSValue shape_cast2d_class_is_colliding(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ShapeCast2D::is_colliding, ctx, this_val, argc, argv);
};
static JSValue shape_cast2d_class_get_collision_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ShapeCast2D::get_collision_count, ctx, this_val, argc, argv);
};
static JSValue shape_cast2d_class_force_shapecast_update(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&ShapeCast2D::force_shapecast_update, ctx, this_val, argc, argv);
};
static JSValue shape_cast2d_class_get_collider(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ShapeCast2D::get_collider, ctx, this_val, argc, argv);
};
static JSValue shape_cast2d_class_get_collider_rid(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ShapeCast2D::get_collider_rid, ctx, this_val, argc, argv);
};
static JSValue shape_cast2d_class_get_collider_shape(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ShapeCast2D::get_collider_shape, ctx, this_val, argc, argv);
};
static JSValue shape_cast2d_class_get_collision_point(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ShapeCast2D::get_collision_point, ctx, this_val, argc, argv);
};
static JSValue shape_cast2d_class_get_collision_normal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ShapeCast2D::get_collision_normal, ctx, this_val, argc, argv);
};
static JSValue shape_cast2d_class_get_closest_collision_safe_fraction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ShapeCast2D::get_closest_collision_safe_fraction, ctx, this_val, argc, argv);
};
static JSValue shape_cast2d_class_get_closest_collision_unsafe_fraction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ShapeCast2D::get_closest_collision_unsafe_fraction, ctx, this_val, argc, argv);
};
static JSValue shape_cast2d_class_add_exception_rid(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&ShapeCast2D::add_exception_rid, ctx, this_val, argc, argv);
};
static JSValue shape_cast2d_class_add_exception(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&ShapeCast2D::add_exception, ctx, this_val, argc, argv);
};
static JSValue shape_cast2d_class_remove_exception_rid(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&ShapeCast2D::remove_exception_rid, ctx, this_val, argc, argv);
};
static JSValue shape_cast2d_class_remove_exception(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&ShapeCast2D::remove_exception, ctx, this_val, argc, argv);
};
static JSValue shape_cast2d_class_clear_exceptions(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&ShapeCast2D::clear_exceptions, ctx, this_val, argc, argv);
};
static JSValue shape_cast2d_class_set_collision_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&ShapeCast2D::set_collision_mask, ctx, this_val, argc, argv);
};
static JSValue shape_cast2d_class_get_collision_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ShapeCast2D::get_collision_mask, ctx, this_val, argc, argv);
};
static JSValue shape_cast2d_class_set_collision_mask_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&ShapeCast2D::set_collision_mask_value, ctx, this_val, argc, argv);
};
static JSValue shape_cast2d_class_get_collision_mask_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ShapeCast2D::get_collision_mask_value, ctx, this_val, argc, argv);
};
static JSValue shape_cast2d_class_set_exclude_parent_body(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&ShapeCast2D::set_exclude_parent_body, ctx, this_val, argc, argv);
};
static JSValue shape_cast2d_class_get_exclude_parent_body(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ShapeCast2D::get_exclude_parent_body, ctx, this_val, argc, argv);
};
static JSValue shape_cast2d_class_set_collide_with_areas(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&ShapeCast2D::set_collide_with_areas, ctx, this_val, argc, argv);
};
static JSValue shape_cast2d_class_is_collide_with_areas_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ShapeCast2D::is_collide_with_areas_enabled, ctx, this_val, argc, argv);
};
static JSValue shape_cast2d_class_set_collide_with_bodies(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&ShapeCast2D::set_collide_with_bodies, ctx, this_val, argc, argv);
};
static JSValue shape_cast2d_class_is_collide_with_bodies_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ShapeCast2D::is_collide_with_bodies_enabled, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry shape_cast2d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_enabled", 1, &shape_cast2d_class_set_enabled),
	JS_CFUNC_DEF("is_enabled", 0, &shape_cast2d_class_is_enabled),
	JS_CFUNC_DEF("set_shape", 1, &shape_cast2d_class_set_shape),
	JS_CFUNC_DEF("get_shape", 0, &shape_cast2d_class_get_shape),
	JS_CFUNC_DEF("set_target_position", 1, &shape_cast2d_class_set_target_position),
	JS_CFUNC_DEF("get_target_position", 0, &shape_cast2d_class_get_target_position),
	JS_CFUNC_DEF("set_margin", 1, &shape_cast2d_class_set_margin),
	JS_CFUNC_DEF("get_margin", 0, &shape_cast2d_class_get_margin),
	JS_CFUNC_DEF("set_max_results", 1, &shape_cast2d_class_set_max_results),
	JS_CFUNC_DEF("get_max_results", 0, &shape_cast2d_class_get_max_results),
	JS_CFUNC_DEF("is_colliding", 0, &shape_cast2d_class_is_colliding),
	JS_CFUNC_DEF("get_collision_count", 0, &shape_cast2d_class_get_collision_count),
	JS_CFUNC_DEF("force_shapecast_update", 0, &shape_cast2d_class_force_shapecast_update),
	JS_CFUNC_DEF("get_collider", 1, &shape_cast2d_class_get_collider),
	JS_CFUNC_DEF("get_collider_rid", 1, &shape_cast2d_class_get_collider_rid),
	JS_CFUNC_DEF("get_collider_shape", 1, &shape_cast2d_class_get_collider_shape),
	JS_CFUNC_DEF("get_collision_point", 1, &shape_cast2d_class_get_collision_point),
	JS_CFUNC_DEF("get_collision_normal", 1, &shape_cast2d_class_get_collision_normal),
	JS_CFUNC_DEF("get_closest_collision_safe_fraction", 0, &shape_cast2d_class_get_closest_collision_safe_fraction),
	JS_CFUNC_DEF("get_closest_collision_unsafe_fraction", 0, &shape_cast2d_class_get_closest_collision_unsafe_fraction),
	JS_CFUNC_DEF("add_exception_rid", 1, &shape_cast2d_class_add_exception_rid),
	JS_CFUNC_DEF("add_exception", 1, &shape_cast2d_class_add_exception),
	JS_CFUNC_DEF("remove_exception_rid", 1, &shape_cast2d_class_remove_exception_rid),
	JS_CFUNC_DEF("remove_exception", 1, &shape_cast2d_class_remove_exception),
	JS_CFUNC_DEF("clear_exceptions", 0, &shape_cast2d_class_clear_exceptions),
	JS_CFUNC_DEF("set_collision_mask", 1, &shape_cast2d_class_set_collision_mask),
	JS_CFUNC_DEF("get_collision_mask", 0, &shape_cast2d_class_get_collision_mask),
	JS_CFUNC_DEF("set_collision_mask_value", 2, &shape_cast2d_class_set_collision_mask_value),
	JS_CFUNC_DEF("get_collision_mask_value", 1, &shape_cast2d_class_get_collision_mask_value),
	JS_CFUNC_DEF("set_exclude_parent_body", 1, &shape_cast2d_class_set_exclude_parent_body),
	JS_CFUNC_DEF("get_exclude_parent_body", 0, &shape_cast2d_class_get_exclude_parent_body),
	JS_CFUNC_DEF("set_collide_with_areas", 1, &shape_cast2d_class_set_collide_with_areas),
	JS_CFUNC_DEF("is_collide_with_areas_enabled", 0, &shape_cast2d_class_is_collide_with_areas_enabled),
	JS_CFUNC_DEF("set_collide_with_bodies", 1, &shape_cast2d_class_set_collide_with_bodies),
	JS_CFUNC_DEF("is_collide_with_bodies_enabled", 0, &shape_cast2d_class_is_collide_with_bodies_enabled),
};

static void define_shape_cast2d_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "enabled"),
        JS_NewCFunction(ctx, shape_cast2d_class_is_enabled, "is_enabled", 0),
        JS_NewCFunction(ctx, shape_cast2d_class_set_enabled, "set_enabled", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "shape"),
        JS_NewCFunction(ctx, shape_cast2d_class_get_shape, "get_shape", 0),
        JS_NewCFunction(ctx, shape_cast2d_class_set_shape, "set_shape", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "exclude_parent"),
        JS_NewCFunction(ctx, shape_cast2d_class_get_exclude_parent_body, "get_exclude_parent_body", 0),
        JS_NewCFunction(ctx, shape_cast2d_class_set_exclude_parent_body, "set_exclude_parent_body", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "target_position"),
        JS_NewCFunction(ctx, shape_cast2d_class_get_target_position, "get_target_position", 0),
        JS_NewCFunction(ctx, shape_cast2d_class_set_target_position, "set_target_position", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "margin"),
        JS_NewCFunction(ctx, shape_cast2d_class_get_margin, "get_margin", 0),
        JS_NewCFunction(ctx, shape_cast2d_class_set_margin, "set_margin", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "max_results"),
        JS_NewCFunction(ctx, shape_cast2d_class_get_max_results, "get_max_results", 0),
        JS_NewCFunction(ctx, shape_cast2d_class_set_max_results, "set_max_results", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "collision_mask"),
        JS_NewCFunction(ctx, shape_cast2d_class_get_collision_mask, "get_collision_mask", 0),
        JS_NewCFunction(ctx, shape_cast2d_class_set_collision_mask, "set_collision_mask", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "collide_with_areas"),
        JS_NewCFunction(ctx, shape_cast2d_class_is_collide_with_areas_enabled, "is_collide_with_areas_enabled", 0),
        JS_NewCFunction(ctx, shape_cast2d_class_set_collide_with_areas, "set_collide_with_areas", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "collide_with_bodies"),
        JS_NewCFunction(ctx, shape_cast2d_class_is_collide_with_bodies_enabled, "is_collide_with_bodies_enabled", 0),
        JS_NewCFunction(ctx, shape_cast2d_class_set_collide_with_bodies, "set_collide_with_bodies", 1),
        JS_PROP_GETSET
    );
	
}

static void define_shape_cast2d_enum(JSContext *ctx, JSValue proto) {
}

static int js_shape_cast2d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["ShapeCast2D"] = ShapeCast2D::__class_id;
	class_id_list.insert(ShapeCast2D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), ShapeCast2D::__class_id, &shape_cast2d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, ShapeCast2D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Node2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ShapeCast2D::__class_id, proto);

	define_shape_cast2d_property(ctx, proto);
	define_shape_cast2d_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, shape_cast2d_class_proto_funcs, _countof(shape_cast2d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, shape_cast2d_class_constructor, "ShapeCast2D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "ShapeCast2D", ctor);

	return 0;
}

JSModuleDef *_js_init_shape_cast2d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/node2d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_shape_cast2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "ShapeCast2D");
	return m;
}

JSModuleDef *js_init_shape_cast2d_module(JSContext *ctx) {
	return _js_init_shape_cast2d_module(ctx, "@godot/classes/shape_cast2d");
}

void register_shape_cast2d() {
	ShapeCast2D::__init_js_class_id();
	js_init_shape_cast2d_module(ctx);
}