
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/physics_server3d_manager.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void physics_server3d_manager_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef physics_server3d_manager_class_def = {
	"_PhysicsServer3DManager",
	.finalizer = physics_server3d_manager_class_finalizer
};

static JSValue physics_server3d_manager_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue obj = JS_NewObjectClass(ctx, PhysicsServer3DManager::__class_id);
	if (JS_IsException(obj))
		return obj;
	PhysicsServer3DManager *physics_server3d_manager_class = PhysicsServer3DManager::get_singleton();
	if (!physics_server3d_manager_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, physics_server3d_manager_class);
	return obj;
}
static JSValue physics_server3d_manager_class_register_server(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PhysicsServer3DManager::register_server, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue physics_server3d_manager_class_set_default_server(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PhysicsServer3DManager::set_default_server, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry physics_server3d_manager_class_proto_funcs[] = {
	JS_CFUNC_DEF("register_server", 2, &physics_server3d_manager_class_register_server),
	JS_CFUNC_DEF("set_default_server", 2, &physics_server3d_manager_class_set_default_server),
};

static int js_physics_server3d_manager_class_init(JSContext *ctx) {
	classes["PhysicsServer3DManager"] = PhysicsServer3DManager::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), PhysicsServer3DManager::__class_id, &physics_server3d_manager_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Object::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, PhysicsServer3DManager::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, physics_server3d_manager_class_proto_funcs, _countof(physics_server3d_manager_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, physics_server3d_manager_class_constructor, "_PhysicsServer3DManager", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JSValue global = JS_GetGlobalObject(ctx);
	JS_SetPropertyStr(ctx, global, "_PhysicsServer3DManager", ctor);
	JS_FreeValue(ctx, global);
	return 0;
}

void register_physics_server3d_manager() {
	PhysicsServer3DManager::__init_js_class_id();
	js_physics_server3d_manager_class_init(ctx);
}