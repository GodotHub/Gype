
#include "quickjs/env.h"
#include "quickjs/quickjs.h"
#include "quickjs/quickjs_helper.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/func_utils.h"
#include <godot_cpp/classes/navigation_mesh.hpp>
#include <godot_cpp/classes/navigation_mesh_generator.hpp>
#include <godot_cpp/classes/navigation_mesh_source_geometry_data3d.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static JSValue navigation_mesh_generator_instance;

static void js_navigation_mesh_generator_singleton();

static void navigation_mesh_generator_class_finalizer(JSRuntime *rt, JSValue val) {
	// nothing
}

static JSClassDef navigation_mesh_generator_class_def = {
	"NavigationMeshGenerator",
	.finalizer = navigation_mesh_generator_class_finalizer
};

static JSValue navigation_mesh_generator_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	NavigationMeshGenerator *navigation_mesh_generator_class;
	JSValue obj = JS_NewObjectClass(ctx, NavigationMeshGenerator::__class_id);
	if (JS_IsException(obj))
		return obj;
	navigation_mesh_generator_class = NavigationMeshGenerator::get_singleton();
	if (!navigation_mesh_generator_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, navigation_mesh_generator_class);
	return obj;
}
static JSValue navigation_mesh_generator_class_bake(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	js_navigation_mesh_generator_singleton();
	call_builtin_method_no_ret(&NavigationMeshGenerator::bake, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_mesh_generator_class_clear(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	js_navigation_mesh_generator_singleton();
	call_builtin_method_no_ret(&NavigationMeshGenerator::clear, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_mesh_generator_class_parse_source_geometry_data(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	js_navigation_mesh_generator_singleton();
	call_builtin_method_no_ret(&NavigationMeshGenerator::parse_source_geometry_data, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_mesh_generator_class_bake_from_source_geometry_data(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	js_navigation_mesh_generator_singleton();
	call_builtin_method_no_ret(&NavigationMeshGenerator::bake_from_source_geometry_data, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry navigation_mesh_generator_class_proto_funcs[] = {
	JS_CFUNC_DEF("bake", 2, &navigation_mesh_generator_class_bake),
	JS_CFUNC_DEF("clear", 1, &navigation_mesh_generator_class_clear),
	JS_CFUNC_DEF("parse_source_geometry_data", 4, &navigation_mesh_generator_class_parse_source_geometry_data),
	JS_CFUNC_DEF("bake_from_source_geometry_data", 3, &navigation_mesh_generator_class_bake_from_source_geometry_data),
};

static int js_navigation_mesh_generator_class_init(JSContext *ctx) {
	JS_NewClassID(&NavigationMeshGenerator::__class_id);
	classes["NavigationMeshGenerator"] = NavigationMeshGenerator::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), NavigationMeshGenerator::__class_id, &navigation_mesh_generator_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Object::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, NavigationMeshGenerator::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, navigation_mesh_generator_class_proto_funcs, _countof(navigation_mesh_generator_class_proto_funcs));
	return 0;
}

static void js_navigation_mesh_generator_singleton() {
	if (JS_IsUninitialized(navigation_mesh_generator_instance)) {
		JSValue global = JS_GetGlobalObject(ctx);
		navigation_mesh_generator_instance = navigation_mesh_generator_class_constructor(ctx, global, 0, NULL);
		JS_SetPropertyStr(ctx, global, "NavigationMeshGenerator", navigation_mesh_generator_instance);
	}
}

void register_navigation_mesh_generator() {
	js_navigation_mesh_generator_class_init(ctx);
}