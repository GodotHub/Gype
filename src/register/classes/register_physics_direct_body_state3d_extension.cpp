
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/physics_direct_space_state3d.hpp>
#include <godot_cpp/classes/physics_direct_body_state3d.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/physics_direct_body_state3d_extension.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void physics_direct_body_state3d_extension_class_finalizer(JSRuntime *rt, JSValue val) {
	PhysicsDirectBodyState3DExtension *physics_direct_body_state3d_extension = static_cast<PhysicsDirectBodyState3DExtension *>(JS_GetOpaque(val, PhysicsDirectBodyState3DExtension::__class_id));
	if (physics_direct_body_state3d_extension)
		PhysicsDirectBodyState3DExtension::free(nullptr, physics_direct_body_state3d_extension);
}

static JSClassDef physics_direct_body_state3d_extension_class_def = {
	"PhysicsDirectBodyState3DExtension",
	.finalizer = physics_direct_body_state3d_extension_class_finalizer
};

static JSValue physics_direct_body_state3d_extension_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	PhysicsDirectBodyState3DExtension *physics_direct_body_state3d_extension_class;
	JSValue obj = JS_NewObjectClass(ctx, PhysicsDirectBodyState3DExtension::__class_id);
	if (JS_IsException(obj))
		return obj;
	physics_direct_body_state3d_extension_class = memnew(PhysicsDirectBodyState3DExtension);
	if (!physics_direct_body_state3d_extension_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, physics_direct_body_state3d_extension_class);
	return obj;
}

static int js_physics_direct_body_state3d_extension_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&PhysicsDirectBodyState3DExtension::__class_id);
	classes["PhysicsDirectBodyState3DExtension"] = PhysicsDirectBodyState3DExtension::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), PhysicsDirectBodyState3DExtension::__class_id, &physics_direct_body_state3d_extension_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, PhysicsDirectBodyState3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, PhysicsDirectBodyState3DExtension::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, physics_direct_body_state3d_extension_class_constructor, "PhysicsDirectBodyState3DExtension", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "PhysicsDirectBodyState3DExtension", ctor);

	return 0;
}

JSModuleDef *_js_init_physics_direct_body_state3d_extension_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_physics_direct_body_state3d_extension_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "PhysicsDirectBodyState3DExtension");
	return m;
}

JSModuleDef *js_init_physics_direct_body_state3d_extension_module(JSContext *ctx) {
	return _js_init_physics_direct_body_state3d_extension_module(ctx, "godot/classes/physics_direct_body_state3d_extension");
}

void register_physics_direct_body_state3d_extension() {
	js_init_physics_direct_body_state3d_extension_module(ctx);
}