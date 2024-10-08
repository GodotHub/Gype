
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/physics_server3d_manager.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void physics_server3d_manager_class_finalizer(JSRuntime *rt, JSValue val) {
	PhysicsServer3DManager *physics_server3d_manager = static_cast<PhysicsServer3DManager *>(JS_GetOpaque(val, PhysicsServer3DManager::__class_id));
	if (physics_server3d_manager)
		PhysicsServer3DManager::free(nullptr, physics_server3d_manager);
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
    call_builtin_method_no_ret(&PhysicsServer3DManager::register_server, PhysicsServer3DManager::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue physics_server3d_manager_class_set_default_server(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PhysicsServer3DManager::set_default_server, PhysicsServer3DManager::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry physics_server3d_manager_class_proto_funcs[] = {
	JS_CFUNC_DEF("register_server", 2, &physics_server3d_manager_class_register_server),
	JS_CFUNC_DEF("set_default_server", 2, &physics_server3d_manager_class_set_default_server),
};

static int js_physics_server3d_manager_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&PhysicsServer3DManager::__class_id);
	classes["PhysicsServer3DManager"] = PhysicsServer3DManager::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), PhysicsServer3DManager::__class_id, &physics_server3d_manager_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Object::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, PhysicsServer3DManager::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, physics_server3d_manager_class_proto_funcs, _countof(physics_server3d_manager_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, physics_server3d_manager_class_constructor, "PhysicsServer3DManager", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "PhysicsServer3DManager", ctor);

	return 0;
}

JSModuleDef *_js_init_physics_server3d_manager_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_physics_server3d_manager_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "PhysicsServer3DManager");
	return m;
}

JSModuleDef *js_init_physics_server3d_manager_module(JSContext *ctx) {
	return _js_init_physics_server3d_manager_module(ctx, "godot/classes/physics_server3d_manager");
}

void register_physics_server3d_manager() {
	js_init_physics_server3d_manager_module(ctx);
}