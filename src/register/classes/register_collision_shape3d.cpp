
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/collision_shape3d.hpp>
#include <godot_cpp/classes/shape3d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void collision_shape3d_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef collision_shape3d_class_def = {
	"CollisionShape3D",
	.finalizer = collision_shape3d_class_finalizer
};

static JSValue collision_shape3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, CollisionShape3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	CollisionShape3D *collision_shape3d_class = memnew(CollisionShape3D);
	if (!collision_shape3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, collision_shape3d_class);	
	return obj;
}
static JSValue collision_shape3d_class_resource_changed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&CollisionShape3D::resource_changed, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue collision_shape3d_class_set_shape(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&CollisionShape3D::set_shape, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue collision_shape3d_class_get_shape(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CollisionShape3D::get_shape, ctx, this_val, argc, argv);
};
static JSValue collision_shape3d_class_set_disabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&CollisionShape3D::set_disabled, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue collision_shape3d_class_is_disabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&CollisionShape3D::is_disabled, ctx, this_val, argc, argv);
};
static JSValue collision_shape3d_class_make_convex_from_siblings(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&CollisionShape3D::make_convex_from_siblings, ctx, this_val, argc, argv);
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

void define_collision_shape3d_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "shape"),
        JS_NewCFunction(ctx, collision_shape3d_class_get_shape, "get_shape", 0),
        JS_NewCFunction(ctx, collision_shape3d_class_set_shape, "set_shape", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "disabled"),
        JS_NewCFunction(ctx, collision_shape3d_class_is_disabled, "is_disabled", 0),
        JS_NewCFunction(ctx, collision_shape3d_class_set_disabled, "set_disabled", 1),
        JS_PROP_GETSET
    );
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
}

static int js_collision_shape3d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&CollisionShape3D::__class_id);
	classes["CollisionShape3D"] = CollisionShape3D::__class_id;
	class_id_list.insert(CollisionShape3D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), CollisionShape3D::__class_id, &collision_shape3d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, CollisionShape3D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Node3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, CollisionShape3D::__class_id, proto);

	define_collision_shape3d_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, collision_shape3d_class_proto_funcs, _countof(collision_shape3d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, collision_shape3d_class_constructor, "CollisionShape3D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "CollisionShape3D", ctor);

	return 0;
}

JSModuleDef *_js_init_collision_shape3d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/node3d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
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
	CollisionShape3D::__init_js_class_id();
	js_init_collision_shape3d_module(ctx);
}