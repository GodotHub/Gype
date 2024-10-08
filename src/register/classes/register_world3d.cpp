
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/physics_direct_space_state3d.hpp>
#include <godot_cpp/classes/world3d.hpp>
#include <godot_cpp/classes/camera_attributes.hpp>
#include <godot_cpp/classes/environment.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void world3d_class_finalizer(JSRuntime *rt, JSValue val) {
	World3D *world3d = static_cast<World3D *>(JS_GetOpaque(val, World3D::__class_id));
	if (world3d)
		World3D::free(nullptr, world3d);
}

static JSClassDef world3d_class_def = {
	"World3D",
	.finalizer = world3d_class_finalizer
};

static JSValue world3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	World3D *world3d_class;
	JSValue obj = JS_NewObjectClass(ctx, World3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	world3d_class = memnew(World3D);
	if (!world3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, world3d_class);
	return obj;
}
static JSValue world3d_class_get_space(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&World3D::get_space, World3D::__class_id, ctx, this_val, argv);
};
static JSValue world3d_class_get_navigation_map(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&World3D::get_navigation_map, World3D::__class_id, ctx, this_val, argv);
};
static JSValue world3d_class_get_scenario(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&World3D::get_scenario, World3D::__class_id, ctx, this_val, argv);
};
static JSValue world3d_class_set_environment(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&World3D::set_environment, World3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue world3d_class_get_environment(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&World3D::get_environment, World3D::__class_id, ctx, this_val, argv);
};
static JSValue world3d_class_set_fallback_environment(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&World3D::set_fallback_environment, World3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue world3d_class_get_fallback_environment(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&World3D::get_fallback_environment, World3D::__class_id, ctx, this_val, argv);
};
static JSValue world3d_class_set_camera_attributes(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&World3D::set_camera_attributes, World3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue world3d_class_get_camera_attributes(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&World3D::get_camera_attributes, World3D::__class_id, ctx, this_val, argv);
};
static JSValue world3d_class_get_direct_space_state(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&World3D::get_direct_space_state, World3D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry world3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_space", 0, &world3d_class_get_space),
	JS_CFUNC_DEF("get_navigation_map", 0, &world3d_class_get_navigation_map),
	JS_CFUNC_DEF("get_scenario", 0, &world3d_class_get_scenario),
	JS_CFUNC_DEF("set_environment", 1, &world3d_class_set_environment),
	JS_CFUNC_DEF("get_environment", 0, &world3d_class_get_environment),
	JS_CFUNC_DEF("set_fallback_environment", 1, &world3d_class_set_fallback_environment),
	JS_CFUNC_DEF("get_fallback_environment", 0, &world3d_class_get_fallback_environment),
	JS_CFUNC_DEF("set_camera_attributes", 1, &world3d_class_set_camera_attributes),
	JS_CFUNC_DEF("get_camera_attributes", 0, &world3d_class_get_camera_attributes),
	JS_CFUNC_DEF("get_direct_space_state", 0, &world3d_class_get_direct_space_state),
};

static int js_world3d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&World3D::__class_id);
	classes["World3D"] = World3D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), World3D::__class_id, &world3d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, World3D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, world3d_class_proto_funcs, _countof(world3d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, world3d_class_constructor, "World3D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "World3D", ctor);

	return 0;
}

JSModuleDef *_js_init_world3d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_world3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "World3D");
	return m;
}

JSModuleDef *js_init_world3d_module(JSContext *ctx) {
	return _js_init_world3d_module(ctx, "godot/classes/world3d");
}

void register_world3d() {
	js_init_world3d_module(ctx);
}