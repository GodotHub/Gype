
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/physics_direct_body_state2d.hpp>
#include <godot_cpp/classes/physics_server2d.hpp>
#include <godot_cpp/classes/physics_direct_space_state2d.hpp>
#include <godot_cpp/classes/physics_server2d_extension.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void physics_server2d_extension_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef physics_server2d_extension_class_def = {
	"PhysicsServer2DExtension",
	.finalizer = physics_server2d_extension_class_finalizer
};

static JSValue physics_server2d_extension_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, PhysicsServer2DExtension::__class_id);
	if (JS_IsException(obj))
		return obj;
	PhysicsServer2DExtension *physics_server2d_extension_class = memnew(PhysicsServer2DExtension);
	if (!physics_server2d_extension_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, physics_server2d_extension_class);	
	return obj;
}
static JSValue physics_server2d_extension_class_body_test_motion_is_excluding_body(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&PhysicsServer2DExtension::body_test_motion_is_excluding_body, ctx, this_val, argc, argv);
};
static JSValue physics_server2d_extension_class_body_test_motion_is_excluding_object(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&PhysicsServer2DExtension::body_test_motion_is_excluding_object, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry physics_server2d_extension_class_proto_funcs[] = {
	JS_CFUNC_DEF("body_test_motion_is_excluding_body", 1, &physics_server2d_extension_class_body_test_motion_is_excluding_body),
	JS_CFUNC_DEF("body_test_motion_is_excluding_object", 1, &physics_server2d_extension_class_body_test_motion_is_excluding_object),
};

void define_physics_server2d_extension_property(JSContext *ctx, JSValue obj) {
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
}

static int js_physics_server2d_extension_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&PhysicsServer2DExtension::__class_id);
	classes["PhysicsServer2DExtension"] = PhysicsServer2DExtension::__class_id;
	class_id_list.insert(PhysicsServer2DExtension::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), PhysicsServer2DExtension::__class_id, &physics_server2d_extension_class_def);

	JSValue proto = JS_NewObjectClass(ctx, PhysicsServer2DExtension::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, PhysicsServer2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, PhysicsServer2DExtension::__class_id, proto);

	define_physics_server2d_extension_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, physics_server2d_extension_class_proto_funcs, _countof(physics_server2d_extension_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, physics_server2d_extension_class_constructor, "PhysicsServer2DExtension", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "PhysicsServer2DExtension", ctor);

	return 0;
}

JSModuleDef *_js_init_physics_server2d_extension_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/physics_server2d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_physics_server2d_extension_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "PhysicsServer2DExtension");
	return m;
}

JSModuleDef *js_init_physics_server2d_extension_module(JSContext *ctx) {
	return _js_init_physics_server2d_extension_module(ctx, "godot/classes/physics_server2d_extension");
}

void register_physics_server2d_extension() {
	PhysicsServer2DExtension::__init_js_class_id();
	js_init_physics_server2d_extension_module(ctx);
}