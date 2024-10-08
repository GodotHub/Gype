
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/physics_direct_space_state2d_extension.hpp>
#include <godot_cpp/classes/physics_direct_space_state2d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void physics_direct_space_state2d_extension_class_finalizer(JSRuntime *rt, JSValue val) {
	PhysicsDirectSpaceState2DExtension *physics_direct_space_state2d_extension = static_cast<PhysicsDirectSpaceState2DExtension *>(JS_GetOpaque(val, PhysicsDirectSpaceState2DExtension::__class_id));
	if (physics_direct_space_state2d_extension)
		PhysicsDirectSpaceState2DExtension::free(nullptr, physics_direct_space_state2d_extension);
}

static JSClassDef physics_direct_space_state2d_extension_class_def = {
	"PhysicsDirectSpaceState2DExtension",
	.finalizer = physics_direct_space_state2d_extension_class_finalizer
};

static JSValue physics_direct_space_state2d_extension_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	PhysicsDirectSpaceState2DExtension *physics_direct_space_state2d_extension_class;
	JSValue obj = JS_NewObjectClass(ctx, PhysicsDirectSpaceState2DExtension::__class_id);
	if (JS_IsException(obj))
		return obj;
	physics_direct_space_state2d_extension_class = memnew(PhysicsDirectSpaceState2DExtension);
	if (!physics_direct_space_state2d_extension_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, physics_direct_space_state2d_extension_class);
	return obj;
}
static JSValue physics_direct_space_state2d_extension_class_is_body_excluded_from_query(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PhysicsDirectSpaceState2DExtension::is_body_excluded_from_query, PhysicsDirectSpaceState2DExtension::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry physics_direct_space_state2d_extension_class_proto_funcs[] = {
	JS_CFUNC_DEF("is_body_excluded_from_query", 1, &physics_direct_space_state2d_extension_class_is_body_excluded_from_query),
};

static int js_physics_direct_space_state2d_extension_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&PhysicsDirectSpaceState2DExtension::__class_id);
	classes["PhysicsDirectSpaceState2DExtension"] = PhysicsDirectSpaceState2DExtension::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), PhysicsDirectSpaceState2DExtension::__class_id, &physics_direct_space_state2d_extension_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, PhysicsDirectSpaceState2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, PhysicsDirectSpaceState2DExtension::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, physics_direct_space_state2d_extension_class_proto_funcs, _countof(physics_direct_space_state2d_extension_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, physics_direct_space_state2d_extension_class_constructor, "PhysicsDirectSpaceState2DExtension", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "PhysicsDirectSpaceState2DExtension", ctor);

	return 0;
}

JSModuleDef *_js_init_physics_direct_space_state2d_extension_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_physics_direct_space_state2d_extension_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "PhysicsDirectSpaceState2DExtension");
	return m;
}

JSModuleDef *js_init_physics_direct_space_state2d_extension_module(JSContext *ctx) {
	return _js_init_physics_direct_space_state2d_extension_module(ctx, "godot/classes/physics_direct_space_state2d_extension");
}

void register_physics_direct_space_state2d_extension() {
	js_init_physics_direct_space_state2d_extension_module(ctx);
}