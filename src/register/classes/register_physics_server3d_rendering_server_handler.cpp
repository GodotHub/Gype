
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/physics_server3d_rendering_server_handler.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void physics_server3d_rendering_server_handler_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef physics_server3d_rendering_server_handler_class_def = {
	"PhysicsServer3DRenderingServerHandler",
	.finalizer = physics_server3d_rendering_server_handler_class_finalizer
};

static JSValue physics_server3d_rendering_server_handler_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, PhysicsServer3DRenderingServerHandler::__class_id);
	if (JS_IsException(obj))
		return obj;

	PhysicsServer3DRenderingServerHandler *physics_server3d_rendering_server_handler_class;
	if (argc == 1) 
		physics_server3d_rendering_server_handler_class = static_cast<PhysicsServer3DRenderingServerHandler *>(Variant(*argv).operator Object *());
	else 
		physics_server3d_rendering_server_handler_class = memnew(PhysicsServer3DRenderingServerHandler);
	if (!physics_server3d_rendering_server_handler_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, physics_server3d_rendering_server_handler_class);
	return obj;
}
static JSValue physics_server3d_rendering_server_handler_class_set_vertex(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&PhysicsServer3DRenderingServerHandler::set_vertex, ctx, this_val, argc, argv);
};
static JSValue physics_server3d_rendering_server_handler_class_set_normal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&PhysicsServer3DRenderingServerHandler::set_normal, ctx, this_val, argc, argv);
};
static JSValue physics_server3d_rendering_server_handler_class_set_aabb(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&PhysicsServer3DRenderingServerHandler::set_aabb, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry physics_server3d_rendering_server_handler_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_vertex", 2, &physics_server3d_rendering_server_handler_class_set_vertex),
	JS_CFUNC_DEF("set_normal", 2, &physics_server3d_rendering_server_handler_class_set_normal),
	JS_CFUNC_DEF("set_aabb", 1, &physics_server3d_rendering_server_handler_class_set_aabb),
};

static void define_physics_server3d_rendering_server_handler_property(JSContext *ctx, JSValue proto) {
	
}

static void define_physics_server3d_rendering_server_handler_enum(JSContext *ctx, JSValue proto) {
}

static int js_physics_server3d_rendering_server_handler_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["PhysicsServer3DRenderingServerHandler"] = PhysicsServer3DRenderingServerHandler::__class_id;
	class_id_list.insert(PhysicsServer3DRenderingServerHandler::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), PhysicsServer3DRenderingServerHandler::__class_id, &physics_server3d_rendering_server_handler_class_def);

	JSValue proto = JS_NewObjectClass(ctx, PhysicsServer3DRenderingServerHandler::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Object::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, PhysicsServer3DRenderingServerHandler::__class_id, proto);

	define_physics_server3d_rendering_server_handler_property(ctx, proto);
	define_physics_server3d_rendering_server_handler_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, physics_server3d_rendering_server_handler_class_proto_funcs, _countof(physics_server3d_rendering_server_handler_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, physics_server3d_rendering_server_handler_class_constructor, "PhysicsServer3DRenderingServerHandler", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "PhysicsServer3DRenderingServerHandler", ctor);
	constructors[PhysicsServer3DRenderingServerHandler::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_physics_server3d_rendering_server_handler_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/godot_object';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_physics_server3d_rendering_server_handler_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "PhysicsServer3DRenderingServerHandler");
	return m;
}

JSModuleDef *js_init_physics_server3d_rendering_server_handler_module(JSContext *ctx) {
	return _js_init_physics_server3d_rendering_server_handler_module(ctx, "@godot/classes/physics_server3d_rendering_server_handler");
}

void register_physics_server3d_rendering_server_handler() {
	PhysicsServer3DRenderingServerHandler::__init_js_class_id();
	js_init_physics_server3d_rendering_server_handler_module(ctx);
}