
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/mesh.hpp>
#include <godot_cpp/classes/navigation_mesh_source_geometry_data3d.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void navigation_mesh_source_geometry_data3d_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef navigation_mesh_source_geometry_data3d_class_def = {
	"NavigationMeshSourceGeometryData3D",
	.finalizer = navigation_mesh_source_geometry_data3d_class_finalizer
};

static JSValue navigation_mesh_source_geometry_data3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, NavigationMeshSourceGeometryData3D::__class_id);
	if (JS_IsException(obj))
		return obj;

	NavigationMeshSourceGeometryData3D *navigation_mesh_source_geometry_data3d_class;
	if (argc == 1) 
		navigation_mesh_source_geometry_data3d_class = static_cast<NavigationMeshSourceGeometryData3D *>(Variant(*argv).operator Object *());
	else 
		navigation_mesh_source_geometry_data3d_class = memnew(NavigationMeshSourceGeometryData3D);
	if (!navigation_mesh_source_geometry_data3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, navigation_mesh_source_geometry_data3d_class);
	return obj;
}
static JSValue navigation_mesh_source_geometry_data3d_class_set_vertices(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&NavigationMeshSourceGeometryData3D::set_vertices, ctx, this_val, argc, argv);
};
static JSValue navigation_mesh_source_geometry_data3d_class_get_vertices(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&NavigationMeshSourceGeometryData3D::get_vertices, ctx, this_val, argc, argv);
};
static JSValue navigation_mesh_source_geometry_data3d_class_set_indices(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&NavigationMeshSourceGeometryData3D::set_indices, ctx, this_val, argc, argv);
};
static JSValue navigation_mesh_source_geometry_data3d_class_get_indices(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&NavigationMeshSourceGeometryData3D::get_indices, ctx, this_val, argc, argv);
};
static JSValue navigation_mesh_source_geometry_data3d_class_append_arrays(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&NavigationMeshSourceGeometryData3D::append_arrays, ctx, this_val, argc, argv);
};
static JSValue navigation_mesh_source_geometry_data3d_class_clear(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&NavigationMeshSourceGeometryData3D::clear, ctx, this_val, argc, argv);
};
static JSValue navigation_mesh_source_geometry_data3d_class_has_data(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&NavigationMeshSourceGeometryData3D::has_data, ctx, this_val, argc, argv);
};
static JSValue navigation_mesh_source_geometry_data3d_class_add_mesh(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&NavigationMeshSourceGeometryData3D::add_mesh, ctx, this_val, argc, argv);
};
static JSValue navigation_mesh_source_geometry_data3d_class_add_mesh_array(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&NavigationMeshSourceGeometryData3D::add_mesh_array, ctx, this_val, argc, argv);
};
static JSValue navigation_mesh_source_geometry_data3d_class_add_faces(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&NavigationMeshSourceGeometryData3D::add_faces, ctx, this_val, argc, argv);
};
static JSValue navigation_mesh_source_geometry_data3d_class_merge(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&NavigationMeshSourceGeometryData3D::merge, ctx, this_val, argc, argv);
};
static JSValue navigation_mesh_source_geometry_data3d_class_add_projected_obstruction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&NavigationMeshSourceGeometryData3D::add_projected_obstruction, ctx, this_val, argc, argv);
};
static JSValue navigation_mesh_source_geometry_data3d_class_clear_projected_obstructions(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&NavigationMeshSourceGeometryData3D::clear_projected_obstructions, ctx, this_val, argc, argv);
};
static JSValue navigation_mesh_source_geometry_data3d_class_set_projected_obstructions(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&NavigationMeshSourceGeometryData3D::set_projected_obstructions, ctx, this_val, argc, argv);
};
static JSValue navigation_mesh_source_geometry_data3d_class_get_projected_obstructions(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&NavigationMeshSourceGeometryData3D::get_projected_obstructions, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry navigation_mesh_source_geometry_data3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_vertices", 1, &navigation_mesh_source_geometry_data3d_class_set_vertices),
	JS_CFUNC_DEF("get_vertices", 0, &navigation_mesh_source_geometry_data3d_class_get_vertices),
	JS_CFUNC_DEF("set_indices", 1, &navigation_mesh_source_geometry_data3d_class_set_indices),
	JS_CFUNC_DEF("get_indices", 0, &navigation_mesh_source_geometry_data3d_class_get_indices),
	JS_CFUNC_DEF("append_arrays", 2, &navigation_mesh_source_geometry_data3d_class_append_arrays),
	JS_CFUNC_DEF("clear", 0, &navigation_mesh_source_geometry_data3d_class_clear),
	JS_CFUNC_DEF("has_data", 0, &navigation_mesh_source_geometry_data3d_class_has_data),
	JS_CFUNC_DEF("add_mesh", 2, &navigation_mesh_source_geometry_data3d_class_add_mesh),
	JS_CFUNC_DEF("add_mesh_array", 2, &navigation_mesh_source_geometry_data3d_class_add_mesh_array),
	JS_CFUNC_DEF("add_faces", 2, &navigation_mesh_source_geometry_data3d_class_add_faces),
	JS_CFUNC_DEF("merge", 1, &navigation_mesh_source_geometry_data3d_class_merge),
	JS_CFUNC_DEF("add_projected_obstruction", 4, &navigation_mesh_source_geometry_data3d_class_add_projected_obstruction),
	JS_CFUNC_DEF("clear_projected_obstructions", 0, &navigation_mesh_source_geometry_data3d_class_clear_projected_obstructions),
	JS_CFUNC_DEF("set_projected_obstructions", 1, &navigation_mesh_source_geometry_data3d_class_set_projected_obstructions),
	JS_CFUNC_DEF("get_projected_obstructions", 0, &navigation_mesh_source_geometry_data3d_class_get_projected_obstructions),
};

static void define_navigation_mesh_source_geometry_data3d_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "vertices"),
        JS_NewCFunction(ctx, navigation_mesh_source_geometry_data3d_class_get_vertices, "get_vertices", 0),
        JS_NewCFunction(ctx, navigation_mesh_source_geometry_data3d_class_set_vertices, "set_vertices", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "indices"),
        JS_NewCFunction(ctx, navigation_mesh_source_geometry_data3d_class_get_indices, "get_indices", 0),
        JS_NewCFunction(ctx, navigation_mesh_source_geometry_data3d_class_set_indices, "set_indices", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "projected_obstructions"),
        JS_NewCFunction(ctx, navigation_mesh_source_geometry_data3d_class_get_projected_obstructions, "get_projected_obstructions", 0),
        JS_NewCFunction(ctx, navigation_mesh_source_geometry_data3d_class_set_projected_obstructions, "set_projected_obstructions", 1),
        JS_PROP_GETSET
    );
	
}

static void define_navigation_mesh_source_geometry_data3d_enum(JSContext *ctx, JSValue proto) {
}

static int js_navigation_mesh_source_geometry_data3d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["NavigationMeshSourceGeometryData3D"] = NavigationMeshSourceGeometryData3D::__class_id;
	class_id_list.insert(NavigationMeshSourceGeometryData3D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), NavigationMeshSourceGeometryData3D::__class_id, &navigation_mesh_source_geometry_data3d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, NavigationMeshSourceGeometryData3D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, NavigationMeshSourceGeometryData3D::__class_id, proto);

	define_navigation_mesh_source_geometry_data3d_property(ctx, proto);
	define_navigation_mesh_source_geometry_data3d_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, navigation_mesh_source_geometry_data3d_class_proto_funcs, _countof(navigation_mesh_source_geometry_data3d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, navigation_mesh_source_geometry_data3d_class_constructor, "NavigationMeshSourceGeometryData3D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "NavigationMeshSourceGeometryData3D", ctor);

	return 0;
}

JSModuleDef *_js_init_navigation_mesh_source_geometry_data3d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/resource';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_navigation_mesh_source_geometry_data3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "NavigationMeshSourceGeometryData3D");
	return m;
}

JSModuleDef *js_init_navigation_mesh_source_geometry_data3d_module(JSContext *ctx) {
	return _js_init_navigation_mesh_source_geometry_data3d_module(ctx, "@godot/classes/navigation_mesh_source_geometry_data3d");
}

void register_navigation_mesh_source_geometry_data3d() {
	NavigationMeshSourceGeometryData3D::__init_js_class_id();
	js_init_navigation_mesh_source_geometry_data3d_module(ctx);
}