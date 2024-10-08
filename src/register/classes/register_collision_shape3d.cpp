
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/shape3d.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/collision_shape3d.hpp>
#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void collision_shape3d_class_finalizer(JSRuntime *rt, JSValue val) {
	CollisionShape3D *collision_shape3d = static_cast<CollisionShape3D *>(JS_GetOpaque(val, CollisionShape3D::__class_id));
	if (collision_shape3d)
		CollisionShape3D::free(nullptr, collision_shape3d);
}

static JSClassDef collision_shape3d_class_def = {
	"CollisionShape3D",
	.finalizer = collision_shape3d_class_finalizer
};

static JSValue collision_shape3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	CollisionShape3D *collision_shape3d_class;
	JSValue obj = JS_NewObjectClass(ctx, CollisionShape3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	collision_shape3d_class = memnew(CollisionShape3D);
	if (!collision_shape3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, collision_shape3d_class);
	return obj;
}
static JSValue collision_shape3d_class_resource_changed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CollisionShape3D::resource_changed, CollisionShape3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue collision_shape3d_class_set_shape(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CollisionShape3D::set_shape, CollisionShape3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue collision_shape3d_class_get_shape(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CollisionShape3D::get_shape, CollisionShape3D::__class_id, ctx, this_val, argv);
};
static JSValue collision_shape3d_class_set_disabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CollisionShape3D::set_disabled, CollisionShape3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue collision_shape3d_class_is_disabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CollisionShape3D::is_disabled, CollisionShape3D::__class_id, ctx, this_val, argv);
};
static JSValue collision_shape3d_class_make_convex_from_siblings(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CollisionShape3D::make_convex_from_siblings, CollisionShape3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry collision_shape3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("resource_changed", 1, &collision_shape3d_class_resource_changed),
	JS_CFUNC_DEF("set_shape", 1, &collision_shape3d_class_set_shape),
	JS_CFUNC_DEF("get_shape", 0, &collision_shape3d_class_get_shape),
	JS_CFUNC_DEF("set_disabled", 1, &collision_shape3d_class_set_disabled),
	JS_CFUNC_DEF("is_disabled", 0, &collision_shape3d_class_is_disabled),
	JS_CFUNC_DEF("make_convex_from_siblings", 0, &collision_shape3d_class_make_convex_from_siblings),
};

static int js_collision_shape3d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&CollisionShape3D::__class_id);
	classes["CollisionShape3D"] = CollisionShape3D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), CollisionShape3D::__class_id, &collision_shape3d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Node3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, CollisionShape3D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, collision_shape3d_class_proto_funcs, _countof(collision_shape3d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, collision_shape3d_class_constructor, "CollisionShape3D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "CollisionShape3D", ctor);

	return 0;
}

JSModuleDef *_js_init_collision_shape3d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_collision_shape3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "CollisionShape3D");
	return m;
}

JSModuleDef *js_init_collision_shape3d_module(JSContext *ctx) {
	return _js_init_collision_shape3d_module(ctx, "godot/classes/collision_shape3d");
}

void register_collision_shape3d() {
	js_init_collision_shape3d_module(ctx);
}