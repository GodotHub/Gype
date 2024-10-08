
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/physics_server3d_rendering_server_handler.hpp>
#include <godot_cpp/classes/physics_server3d_extension.hpp>
#include <godot_cpp/classes/physics_direct_space_state3d.hpp>
#include <godot_cpp/classes/physics_direct_body_state3d.hpp>
#include <godot_cpp/classes/physics_server3d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void physics_server3d_extension_class_finalizer(JSRuntime *rt, JSValue val) {
	PhysicsServer3DExtension *physics_server3d_extension = static_cast<PhysicsServer3DExtension *>(JS_GetOpaque(val, PhysicsServer3DExtension::__class_id));
	if (physics_server3d_extension)
		PhysicsServer3DExtension::free(nullptr, physics_server3d_extension);
}

static JSClassDef physics_server3d_extension_class_def = {
	"PhysicsServer3DExtension",
	.finalizer = physics_server3d_extension_class_finalizer
};

static JSValue physics_server3d_extension_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	PhysicsServer3DExtension *physics_server3d_extension_class;
	JSValue obj = JS_NewObjectClass(ctx, PhysicsServer3DExtension::__class_id);
	if (JS_IsException(obj))
		return obj;
	physics_server3d_extension_class = memnew(PhysicsServer3DExtension);
	if (!physics_server3d_extension_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, physics_server3d_extension_class);
	return obj;
}
static JSValue physics_server3d_extension_class_body_test_motion_is_excluding_body(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsServer3DExtension::body_test_motion_is_excluding_body, PhysicsServer3DExtension::__class_id, ctx, this_val, argv);
};
static JSValue physics_server3d_extension_class_body_test_motion_is_excluding_object(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsServer3DExtension::body_test_motion_is_excluding_object, PhysicsServer3DExtension::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry physics_server3d_extension_class_proto_funcs[] = {
	JS_CFUNC_DEF("body_test_motion_is_excluding_body", 1, &physics_server3d_extension_class_body_test_motion_is_excluding_body),
	JS_CFUNC_DEF("body_test_motion_is_excluding_object", 1, &physics_server3d_extension_class_body_test_motion_is_excluding_object),
};

static int js_physics_server3d_extension_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&PhysicsServer3DExtension::__class_id);
	classes["PhysicsServer3DExtension"] = PhysicsServer3DExtension::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), PhysicsServer3DExtension::__class_id, &physics_server3d_extension_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, PhysicsServer3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, PhysicsServer3DExtension::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, physics_server3d_extension_class_proto_funcs, _countof(physics_server3d_extension_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, physics_server3d_extension_class_constructor, "PhysicsServer3DExtension", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "PhysicsServer3DExtension", ctor);

	return 0;
}

JSModuleDef *_js_init_physics_server3d_extension_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_physics_server3d_extension_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "PhysicsServer3DExtension");
	return m;
}

JSModuleDef *js_init_physics_server3d_extension_module(JSContext *ctx) {
	return _js_init_physics_server3d_extension_module(ctx, "godot/classes/physics_server3d_extension");
}

void register_physics_server3d_extension() {
	js_init_physics_server3d_extension_module(ctx);
}