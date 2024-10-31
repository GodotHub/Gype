
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/ray_cast2d.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/collision_object2d.hpp>
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void ray_cast2d_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef ray_cast2d_class_def = {
	"RayCast2D",
	.finalizer = ray_cast2d_class_finalizer
};

static JSValue ray_cast2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, RayCast2D::__class_id);
	if (JS_IsException(obj))
		return obj;

	RayCast2D *ray_cast2d_class;
	if (argc == 1) 
		ray_cast2d_class = static_cast<RayCast2D *>(Variant(*argv).operator Object *());
	else 
		ray_cast2d_class = memnew(RayCast2D);
	if (!ray_cast2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, ray_cast2d_class);
	return obj;
}
static JSValue ray_cast2d_class_set_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RayCast2D::set_enabled, ctx, this_val, argc, argv);
};
static JSValue ray_cast2d_class_is_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RayCast2D::is_enabled, ctx, this_val, argc, argv);
};
static JSValue ray_cast2d_class_set_target_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RayCast2D::set_target_position, ctx, this_val, argc, argv);
};
static JSValue ray_cast2d_class_get_target_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RayCast2D::get_target_position, ctx, this_val, argc, argv);
};
static JSValue ray_cast2d_class_is_colliding(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RayCast2D::is_colliding, ctx, this_val, argc, argv);
};
static JSValue ray_cast2d_class_force_raycast_update(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RayCast2D::force_raycast_update, ctx, this_val, argc, argv);
};
static JSValue ray_cast2d_class_get_collider(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RayCast2D::get_collider, ctx, this_val, argc, argv);
};
static JSValue ray_cast2d_class_get_collider_rid(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RayCast2D::get_collider_rid, ctx, this_val, argc, argv);
};
static JSValue ray_cast2d_class_get_collider_shape(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RayCast2D::get_collider_shape, ctx, this_val, argc, argv);
};
static JSValue ray_cast2d_class_get_collision_point(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RayCast2D::get_collision_point, ctx, this_val, argc, argv);
};
static JSValue ray_cast2d_class_get_collision_normal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RayCast2D::get_collision_normal, ctx, this_val, argc, argv);
};
static JSValue ray_cast2d_class_add_exception_rid(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RayCast2D::add_exception_rid, ctx, this_val, argc, argv);
};
static JSValue ray_cast2d_class_add_exception(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RayCast2D::add_exception, ctx, this_val, argc, argv);
};
static JSValue ray_cast2d_class_remove_exception_rid(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RayCast2D::remove_exception_rid, ctx, this_val, argc, argv);
};
static JSValue ray_cast2d_class_remove_exception(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RayCast2D::remove_exception, ctx, this_val, argc, argv);
};
static JSValue ray_cast2d_class_clear_exceptions(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RayCast2D::clear_exceptions, ctx, this_val, argc, argv);
};
static JSValue ray_cast2d_class_set_collision_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RayCast2D::set_collision_mask, ctx, this_val, argc, argv);
};
static JSValue ray_cast2d_class_get_collision_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RayCast2D::get_collision_mask, ctx, this_val, argc, argv);
};
static JSValue ray_cast2d_class_set_collision_mask_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RayCast2D::set_collision_mask_value, ctx, this_val, argc, argv);
};
static JSValue ray_cast2d_class_get_collision_mask_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RayCast2D::get_collision_mask_value, ctx, this_val, argc, argv);
};
static JSValue ray_cast2d_class_set_exclude_parent_body(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RayCast2D::set_exclude_parent_body, ctx, this_val, argc, argv);
};
static JSValue ray_cast2d_class_get_exclude_parent_body(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RayCast2D::get_exclude_parent_body, ctx, this_val, argc, argv);
};
static JSValue ray_cast2d_class_set_collide_with_areas(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RayCast2D::set_collide_with_areas, ctx, this_val, argc, argv);
};
static JSValue ray_cast2d_class_is_collide_with_areas_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RayCast2D::is_collide_with_areas_enabled, ctx, this_val, argc, argv);
};
static JSValue ray_cast2d_class_set_collide_with_bodies(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RayCast2D::set_collide_with_bodies, ctx, this_val, argc, argv);
};
static JSValue ray_cast2d_class_is_collide_with_bodies_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RayCast2D::is_collide_with_bodies_enabled, ctx, this_val, argc, argv);
};
static JSValue ray_cast2d_class_set_hit_from_inside(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RayCast2D::set_hit_from_inside, ctx, this_val, argc, argv);
};
static JSValue ray_cast2d_class_is_hit_from_inside_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&RayCast2D::is_hit_from_inside_enabled, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry ray_cast2d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_enabled", 1, &ray_cast2d_class_set_enabled),
	JS_CFUNC_DEF("is_enabled", 0, &ray_cast2d_class_is_enabled),
	JS_CFUNC_DEF("set_target_position", 1, &ray_cast2d_class_set_target_position),
	JS_CFUNC_DEF("get_target_position", 0, &ray_cast2d_class_get_target_position),
	JS_CFUNC_DEF("is_colliding", 0, &ray_cast2d_class_is_colliding),
	JS_CFUNC_DEF("force_raycast_update", 0, &ray_cast2d_class_force_raycast_update),
	JS_CFUNC_DEF("get_collider", 0, &ray_cast2d_class_get_collider),
	JS_CFUNC_DEF("get_collider_rid", 0, &ray_cast2d_class_get_collider_rid),
	JS_CFUNC_DEF("get_collider_shape", 0, &ray_cast2d_class_get_collider_shape),
	JS_CFUNC_DEF("get_collision_point", 0, &ray_cast2d_class_get_collision_point),
	JS_CFUNC_DEF("get_collision_normal", 0, &ray_cast2d_class_get_collision_normal),
	JS_CFUNC_DEF("add_exception_rid", 1, &ray_cast2d_class_add_exception_rid),
	JS_CFUNC_DEF("add_exception", 1, &ray_cast2d_class_add_exception),
	JS_CFUNC_DEF("remove_exception_rid", 1, &ray_cast2d_class_remove_exception_rid),
	JS_CFUNC_DEF("remove_exception", 1, &ray_cast2d_class_remove_exception),
	JS_CFUNC_DEF("clear_exceptions", 0, &ray_cast2d_class_clear_exceptions),
	JS_CFUNC_DEF("set_collision_mask", 1, &ray_cast2d_class_set_collision_mask),
	JS_CFUNC_DEF("get_collision_mask", 0, &ray_cast2d_class_get_collision_mask),
	JS_CFUNC_DEF("set_collision_mask_value", 2, &ray_cast2d_class_set_collision_mask_value),
	JS_CFUNC_DEF("get_collision_mask_value", 1, &ray_cast2d_class_get_collision_mask_value),
	JS_CFUNC_DEF("set_exclude_parent_body", 1, &ray_cast2d_class_set_exclude_parent_body),
	JS_CFUNC_DEF("get_exclude_parent_body", 0, &ray_cast2d_class_get_exclude_parent_body),
	JS_CFUNC_DEF("set_collide_with_areas", 1, &ray_cast2d_class_set_collide_with_areas),
	JS_CFUNC_DEF("is_collide_with_areas_enabled", 0, &ray_cast2d_class_is_collide_with_areas_enabled),
	JS_CFUNC_DEF("set_collide_with_bodies", 1, &ray_cast2d_class_set_collide_with_bodies),
	JS_CFUNC_DEF("is_collide_with_bodies_enabled", 0, &ray_cast2d_class_is_collide_with_bodies_enabled),
	JS_CFUNC_DEF("set_hit_from_inside", 1, &ray_cast2d_class_set_hit_from_inside),
	JS_CFUNC_DEF("is_hit_from_inside_enabled", 0, &ray_cast2d_class_is_hit_from_inside_enabled),
};

static void define_ray_cast2d_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "enabled"),
        JS_NewCFunction(ctx, ray_cast2d_class_is_enabled, "is_enabled", 0),
        JS_NewCFunction(ctx, ray_cast2d_class_set_enabled, "set_enabled", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "exclude_parent"),
        JS_NewCFunction(ctx, ray_cast2d_class_get_exclude_parent_body, "get_exclude_parent_body", 0),
        JS_NewCFunction(ctx, ray_cast2d_class_set_exclude_parent_body, "set_exclude_parent_body", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "target_position"),
        JS_NewCFunction(ctx, ray_cast2d_class_get_target_position, "get_target_position", 0),
        JS_NewCFunction(ctx, ray_cast2d_class_set_target_position, "set_target_position", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "collision_mask"),
        JS_NewCFunction(ctx, ray_cast2d_class_get_collision_mask, "get_collision_mask", 0),
        JS_NewCFunction(ctx, ray_cast2d_class_set_collision_mask, "set_collision_mask", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "hit_from_inside"),
        JS_NewCFunction(ctx, ray_cast2d_class_is_hit_from_inside_enabled, "is_hit_from_inside_enabled", 0),
        JS_NewCFunction(ctx, ray_cast2d_class_set_hit_from_inside, "set_hit_from_inside", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "collide_with_areas"),
        JS_NewCFunction(ctx, ray_cast2d_class_is_collide_with_areas_enabled, "is_collide_with_areas_enabled", 0),
        JS_NewCFunction(ctx, ray_cast2d_class_set_collide_with_areas, "set_collide_with_areas", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "collide_with_bodies"),
        JS_NewCFunction(ctx, ray_cast2d_class_is_collide_with_bodies_enabled, "is_collide_with_bodies_enabled", 0),
        JS_NewCFunction(ctx, ray_cast2d_class_set_collide_with_bodies, "set_collide_with_bodies", 1),
        JS_PROP_GETSET
    );
	
}

static void define_ray_cast2d_enum(JSContext *ctx, JSValue proto) {
}

static int js_ray_cast2d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["RayCast2D"] = RayCast2D::__class_id;
	class_id_list.insert(RayCast2D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), RayCast2D::__class_id, &ray_cast2d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, RayCast2D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Node2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, RayCast2D::__class_id, proto);

	define_ray_cast2d_property(ctx, proto);
	define_ray_cast2d_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, ray_cast2d_class_proto_funcs, _countof(ray_cast2d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, ray_cast2d_class_constructor, "RayCast2D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "RayCast2D", ctor);

	return 0;
}

JSModuleDef *_js_init_ray_cast2d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/node2d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_ray_cast2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "RayCast2D");
	return m;
}

JSModuleDef *js_init_ray_cast2d_module(JSContext *ctx) {
	return _js_init_ray_cast2d_module(ctx, "@godot/classes/ray_cast2d");
}

void register_ray_cast2d() {
	RayCast2D::__init_js_class_id();
	js_init_ray_cast2d_module(ctx);
}