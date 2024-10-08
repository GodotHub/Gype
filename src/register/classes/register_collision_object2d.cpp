
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/collision_object2d.hpp>
#include <godot_cpp/classes/input_event.hpp>
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/shape2d.hpp>
#include <godot_cpp/classes/viewport.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void collision_object2d_class_finalizer(JSRuntime *rt, JSValue val) {
	CollisionObject2D *collision_object2d = static_cast<CollisionObject2D *>(JS_GetOpaque(val, CollisionObject2D::__class_id));
	if (collision_object2d)
		CollisionObject2D::free(nullptr, collision_object2d);
}

static JSClassDef collision_object2d_class_def = {
	"CollisionObject2D",
	.finalizer = collision_object2d_class_finalizer
};

static JSValue collision_object2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	CollisionObject2D *collision_object2d_class;
	JSValue obj = JS_NewObjectClass(ctx, CollisionObject2D::__class_id);
	if (JS_IsException(obj))
		return obj;
	collision_object2d_class = memnew(CollisionObject2D);
	if (!collision_object2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, collision_object2d_class);
	return obj;
}
static JSValue collision_object2d_class_get_rid(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CollisionObject2D::get_rid, CollisionObject2D::__class_id, ctx, this_val, argv);
};
static JSValue collision_object2d_class_set_collision_layer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CollisionObject2D::set_collision_layer, CollisionObject2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue collision_object2d_class_get_collision_layer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CollisionObject2D::get_collision_layer, CollisionObject2D::__class_id, ctx, this_val, argv);
};
static JSValue collision_object2d_class_set_collision_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CollisionObject2D::set_collision_mask, CollisionObject2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue collision_object2d_class_get_collision_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CollisionObject2D::get_collision_mask, CollisionObject2D::__class_id, ctx, this_val, argv);
};
static JSValue collision_object2d_class_set_collision_layer_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CollisionObject2D::set_collision_layer_value, CollisionObject2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue collision_object2d_class_get_collision_layer_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CollisionObject2D::get_collision_layer_value, CollisionObject2D::__class_id, ctx, this_val, argv);
};
static JSValue collision_object2d_class_set_collision_mask_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CollisionObject2D::set_collision_mask_value, CollisionObject2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue collision_object2d_class_get_collision_mask_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CollisionObject2D::get_collision_mask_value, CollisionObject2D::__class_id, ctx, this_val, argv);
};
static JSValue collision_object2d_class_set_collision_priority(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CollisionObject2D::set_collision_priority, CollisionObject2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue collision_object2d_class_get_collision_priority(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CollisionObject2D::get_collision_priority, CollisionObject2D::__class_id, ctx, this_val, argv);
};
static JSValue collision_object2d_class_set_disable_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CollisionObject2D::set_disable_mode, CollisionObject2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue collision_object2d_class_get_disable_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CollisionObject2D::get_disable_mode, CollisionObject2D::__class_id, ctx, this_val, argv);
};
static JSValue collision_object2d_class_set_pickable(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CollisionObject2D::set_pickable, CollisionObject2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue collision_object2d_class_is_pickable(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CollisionObject2D::is_pickable, CollisionObject2D::__class_id, ctx, this_val, argv);
};
static JSValue collision_object2d_class_create_shape_owner(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&CollisionObject2D::create_shape_owner, CollisionObject2D::__class_id, ctx, this_val, argv);
};
static JSValue collision_object2d_class_remove_shape_owner(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CollisionObject2D::remove_shape_owner, CollisionObject2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue collision_object2d_class_get_shape_owners(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&CollisionObject2D::get_shape_owners, CollisionObject2D::__class_id, ctx, this_val, argv);
};
static JSValue collision_object2d_class_shape_owner_set_transform(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CollisionObject2D::shape_owner_set_transform, CollisionObject2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue collision_object2d_class_shape_owner_get_transform(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CollisionObject2D::shape_owner_get_transform, CollisionObject2D::__class_id, ctx, this_val, argv);
};
static JSValue collision_object2d_class_shape_owner_get_owner(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CollisionObject2D::shape_owner_get_owner, CollisionObject2D::__class_id, ctx, this_val, argv);
};
static JSValue collision_object2d_class_shape_owner_set_disabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CollisionObject2D::shape_owner_set_disabled, CollisionObject2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue collision_object2d_class_is_shape_owner_disabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CollisionObject2D::is_shape_owner_disabled, CollisionObject2D::__class_id, ctx, this_val, argv);
};
static JSValue collision_object2d_class_shape_owner_set_one_way_collision(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CollisionObject2D::shape_owner_set_one_way_collision, CollisionObject2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue collision_object2d_class_is_shape_owner_one_way_collision_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CollisionObject2D::is_shape_owner_one_way_collision_enabled, CollisionObject2D::__class_id, ctx, this_val, argv);
};
static JSValue collision_object2d_class_shape_owner_set_one_way_collision_margin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CollisionObject2D::shape_owner_set_one_way_collision_margin, CollisionObject2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue collision_object2d_class_get_shape_owner_one_way_collision_margin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CollisionObject2D::get_shape_owner_one_way_collision_margin, CollisionObject2D::__class_id, ctx, this_val, argv);
};
static JSValue collision_object2d_class_shape_owner_add_shape(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CollisionObject2D::shape_owner_add_shape, CollisionObject2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue collision_object2d_class_shape_owner_get_shape_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CollisionObject2D::shape_owner_get_shape_count, CollisionObject2D::__class_id, ctx, this_val, argv);
};
static JSValue collision_object2d_class_shape_owner_get_shape(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CollisionObject2D::shape_owner_get_shape, CollisionObject2D::__class_id, ctx, this_val, argv);
};
static JSValue collision_object2d_class_shape_owner_get_shape_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CollisionObject2D::shape_owner_get_shape_index, CollisionObject2D::__class_id, ctx, this_val, argv);
};
static JSValue collision_object2d_class_shape_owner_remove_shape(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CollisionObject2D::shape_owner_remove_shape, CollisionObject2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue collision_object2d_class_shape_owner_clear_shapes(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CollisionObject2D::shape_owner_clear_shapes, CollisionObject2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue collision_object2d_class_shape_find_owner(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CollisionObject2D::shape_find_owner, CollisionObject2D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry collision_object2d_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_rid", 0, &collision_object2d_class_get_rid),
	JS_CFUNC_DEF("set_collision_layer", 1, &collision_object2d_class_set_collision_layer),
	JS_CFUNC_DEF("get_collision_layer", 0, &collision_object2d_class_get_collision_layer),
	JS_CFUNC_DEF("set_collision_mask", 1, &collision_object2d_class_set_collision_mask),
	JS_CFUNC_DEF("get_collision_mask", 0, &collision_object2d_class_get_collision_mask),
	JS_CFUNC_DEF("set_collision_layer_value", 2, &collision_object2d_class_set_collision_layer_value),
	JS_CFUNC_DEF("get_collision_layer_value", 1, &collision_object2d_class_get_collision_layer_value),
	JS_CFUNC_DEF("set_collision_mask_value", 2, &collision_object2d_class_set_collision_mask_value),
	JS_CFUNC_DEF("get_collision_mask_value", 1, &collision_object2d_class_get_collision_mask_value),
	JS_CFUNC_DEF("set_collision_priority", 1, &collision_object2d_class_set_collision_priority),
	JS_CFUNC_DEF("get_collision_priority", 0, &collision_object2d_class_get_collision_priority),
	JS_CFUNC_DEF("set_disable_mode", 1, &collision_object2d_class_set_disable_mode),
	JS_CFUNC_DEF("get_disable_mode", 0, &collision_object2d_class_get_disable_mode),
	JS_CFUNC_DEF("set_pickable", 1, &collision_object2d_class_set_pickable),
	JS_CFUNC_DEF("is_pickable", 0, &collision_object2d_class_is_pickable),
	JS_CFUNC_DEF("create_shape_owner", 1, &collision_object2d_class_create_shape_owner),
	JS_CFUNC_DEF("remove_shape_owner", 1, &collision_object2d_class_remove_shape_owner),
	JS_CFUNC_DEF("get_shape_owners", 0, &collision_object2d_class_get_shape_owners),
	JS_CFUNC_DEF("shape_owner_set_transform", 2, &collision_object2d_class_shape_owner_set_transform),
	JS_CFUNC_DEF("shape_owner_get_transform", 1, &collision_object2d_class_shape_owner_get_transform),
	JS_CFUNC_DEF("shape_owner_get_owner", 1, &collision_object2d_class_shape_owner_get_owner),
	JS_CFUNC_DEF("shape_owner_set_disabled", 2, &collision_object2d_class_shape_owner_set_disabled),
	JS_CFUNC_DEF("is_shape_owner_disabled", 1, &collision_object2d_class_is_shape_owner_disabled),
	JS_CFUNC_DEF("shape_owner_set_one_way_collision", 2, &collision_object2d_class_shape_owner_set_one_way_collision),
	JS_CFUNC_DEF("is_shape_owner_one_way_collision_enabled", 1, &collision_object2d_class_is_shape_owner_one_way_collision_enabled),
	JS_CFUNC_DEF("shape_owner_set_one_way_collision_margin", 2, &collision_object2d_class_shape_owner_set_one_way_collision_margin),
	JS_CFUNC_DEF("get_shape_owner_one_way_collision_margin", 1, &collision_object2d_class_get_shape_owner_one_way_collision_margin),
	JS_CFUNC_DEF("shape_owner_add_shape", 2, &collision_object2d_class_shape_owner_add_shape),
	JS_CFUNC_DEF("shape_owner_get_shape_count", 1, &collision_object2d_class_shape_owner_get_shape_count),
	JS_CFUNC_DEF("shape_owner_get_shape", 2, &collision_object2d_class_shape_owner_get_shape),
	JS_CFUNC_DEF("shape_owner_get_shape_index", 2, &collision_object2d_class_shape_owner_get_shape_index),
	JS_CFUNC_DEF("shape_owner_remove_shape", 2, &collision_object2d_class_shape_owner_remove_shape),
	JS_CFUNC_DEF("shape_owner_clear_shapes", 1, &collision_object2d_class_shape_owner_clear_shapes),
	JS_CFUNC_DEF("shape_find_owner", 1, &collision_object2d_class_shape_find_owner),
};

static int js_collision_object2d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&CollisionObject2D::__class_id);
	classes["CollisionObject2D"] = CollisionObject2D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), CollisionObject2D::__class_id, &collision_object2d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Node2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, CollisionObject2D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, collision_object2d_class_proto_funcs, _countof(collision_object2d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, collision_object2d_class_constructor, "CollisionObject2D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "CollisionObject2D", ctor);

	return 0;
}

JSModuleDef *_js_init_collision_object2d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_collision_object2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "CollisionObject2D");
	return m;
}

JSModuleDef *js_init_collision_object2d_module(JSContext *ctx) {
	return _js_init_collision_object2d_module(ctx, "godot/classes/collision_object2d");
}

void register_collision_object2d() {
	js_init_collision_object2d_module(ctx);
}