
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/physics_server3d_manager.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static JSValue physics_server3d_manager_instance;

static void js_physics_server3d_manager_singleton();

static void physics_server3d_manager_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef physics_server3d_manager_class_def = {
	"PhysicsServer3DManager",
	.finalizer = physics_server3d_manager_class_finalizer
};

static JSValue physics_server3d_manager_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	PhysicsServer3DManager *physics_server3d_manager_class;
	JSValue obj = JS_NewObjectClass(ctx, PhysicsServer3DManager::__class_id);
	if (JS_IsException(obj))
		return obj;
	physics_server3d_manager_class = PhysicsServer3DManager::get_singleton();
	if (!physics_server3d_manager_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, physics_server3d_manager_class);
	return obj;
}
static JSValue physics_server3d_manager_class_register_server(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_physics_server3d_manager_singleton();
    call_builtin_method_no_ret(&PhysicsServer3DManager::register_server, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue physics_server3d_manager_class_set_default_server(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_physics_server3d_manager_singleton();
    call_builtin_method_no_ret(&PhysicsServer3DManager::set_default_server, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry physics_server3d_manager_class_proto_funcs[] = {
	JS_CFUNC_DEF("register_server", 2, &physics_server3d_manager_class_register_server),
	JS_CFUNC_DEF("set_default_server", 2, &physics_server3d_manager_class_set_default_server),
};

static int js_physics_server3d_manager_class_init(JSContext *ctx) {
	JS_NewClassID(&PhysicsServer3DManager::__class_id);
	classes["PhysicsServer3DManager"] = PhysicsServer3DManager::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), PhysicsServer3DManager::__class_id, &physics_server3d_manager_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Object::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, PhysicsServer3DManager::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, physics_server3d_manager_class_proto_funcs, _countof(physics_server3d_manager_class_proto_funcs));
	return 0;
}

static void js_physics_server3d_manager_singleton() {
	if (JS_IsUninitialized(physics_server3d_manager_instance)) {
		JSValue global = JS_GetGlobalObject(ctx);
		physics_server3d_manager_instance = physics_server3d_manager_class_constructor(ctx, global, 0, NULL);
		JS_SetPropertyStr(ctx, global, "PhysicsServer3DManager", physics_server3d_manager_instance);
	}
}


void register_physics_server3d_manager() {
	js_physics_server3d_manager_class_init(ctx);
}