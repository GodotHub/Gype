
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/navigation_mesh_source_geometry_data3d.hpp>
#include <godot_cpp/classes/navigation_mesh.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/navigation_mesh_generator.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void navigation_mesh_generator_class_finalizer(JSRuntime *rt, JSValue val) {
	NavigationMeshGenerator *navigation_mesh_generator = static_cast<NavigationMeshGenerator *>(JS_GetOpaque(val, NavigationMeshGenerator::__class_id));
	if (navigation_mesh_generator)
		NavigationMeshGenerator::free(nullptr, navigation_mesh_generator);
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
    call_builtin_method_no_ret(&NavigationMeshGenerator::bake, NavigationMeshGenerator::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_mesh_generator_class_clear(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&NavigationMeshGenerator::clear, NavigationMeshGenerator::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_mesh_generator_class_parse_source_geometry_data(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&NavigationMeshGenerator::parse_source_geometry_data, NavigationMeshGenerator::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_mesh_generator_class_bake_from_source_geometry_data(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&NavigationMeshGenerator::bake_from_source_geometry_data, NavigationMeshGenerator::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry navigation_mesh_generator_class_proto_funcs[] = {
	JS_CFUNC_DEF("bake", 2, &navigation_mesh_generator_class_bake),
	JS_CFUNC_DEF("clear", 1, &navigation_mesh_generator_class_clear),
	JS_CFUNC_DEF("parse_source_geometry_data", 4, &navigation_mesh_generator_class_parse_source_geometry_data),
	JS_CFUNC_DEF("bake_from_source_geometry_data", 3, &navigation_mesh_generator_class_bake_from_source_geometry_data),
};

static int js_navigation_mesh_generator_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&NavigationMeshGenerator::__class_id);
	classes["NavigationMeshGenerator"] = NavigationMeshGenerator::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), NavigationMeshGenerator::__class_id, &navigation_mesh_generator_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Object::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, NavigationMeshGenerator::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, navigation_mesh_generator_class_proto_funcs, _countof(navigation_mesh_generator_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, navigation_mesh_generator_class_constructor, "NavigationMeshGenerator", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "NavigationMeshGenerator", ctor);

	return 0;
}

JSModuleDef *_js_init_navigation_mesh_generator_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_navigation_mesh_generator_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "NavigationMeshGenerator");
	return m;
}

JSModuleDef *js_init_navigation_mesh_generator_module(JSContext *ctx) {
	return _js_init_navigation_mesh_generator_module(ctx, "godot/classes/navigation_mesh_generator");
}

void register_navigation_mesh_generator() {
	js_init_navigation_mesh_generator_module(ctx);
}