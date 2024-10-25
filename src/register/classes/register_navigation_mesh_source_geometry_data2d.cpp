
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/navigation_mesh_source_geometry_data2d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void navigation_mesh_source_geometry_data2d_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef navigation_mesh_source_geometry_data2d_class_def = {
	"NavigationMeshSourceGeometryData2D",
	.finalizer = navigation_mesh_source_geometry_data2d_class_finalizer
};

static JSValue navigation_mesh_source_geometry_data2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, NavigationMeshSourceGeometryData2D::__class_id);
	if (JS_IsException(obj))
		return obj;
	NavigationMeshSourceGeometryData2D *navigation_mesh_source_geometry_data2d_class = memnew(NavigationMeshSourceGeometryData2D);
	if (!navigation_mesh_source_geometry_data2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, navigation_mesh_source_geometry_data2d_class);	
	return obj;
}
static JSValue navigation_mesh_source_geometry_data2d_class_clear(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&NavigationMeshSourceGeometryData2D::clear, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_mesh_source_geometry_data2d_class_has_data(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&NavigationMeshSourceGeometryData2D::has_data, ctx, this_val, argc, argv);
};
static JSValue navigation_mesh_source_geometry_data2d_class_set_traversable_outlines(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&NavigationMeshSourceGeometryData2D::set_traversable_outlines, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_mesh_source_geometry_data2d_class_get_traversable_outlines(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&NavigationMeshSourceGeometryData2D::get_traversable_outlines, ctx, this_val, argc, argv);
};
static JSValue navigation_mesh_source_geometry_data2d_class_set_obstruction_outlines(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&NavigationMeshSourceGeometryData2D::set_obstruction_outlines, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_mesh_source_geometry_data2d_class_get_obstruction_outlines(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&NavigationMeshSourceGeometryData2D::get_obstruction_outlines, ctx, this_val, argc, argv);
};
static JSValue navigation_mesh_source_geometry_data2d_class_append_traversable_outlines(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&NavigationMeshSourceGeometryData2D::append_traversable_outlines, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_mesh_source_geometry_data2d_class_append_obstruction_outlines(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&NavigationMeshSourceGeometryData2D::append_obstruction_outlines, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_mesh_source_geometry_data2d_class_add_traversable_outline(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&NavigationMeshSourceGeometryData2D::add_traversable_outline, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_mesh_source_geometry_data2d_class_add_obstruction_outline(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&NavigationMeshSourceGeometryData2D::add_obstruction_outline, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_mesh_source_geometry_data2d_class_merge(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&NavigationMeshSourceGeometryData2D::merge, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_mesh_source_geometry_data2d_class_add_projected_obstruction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&NavigationMeshSourceGeometryData2D::add_projected_obstruction, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_mesh_source_geometry_data2d_class_clear_projected_obstructions(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&NavigationMeshSourceGeometryData2D::clear_projected_obstructions, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_mesh_source_geometry_data2d_class_set_projected_obstructions(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&NavigationMeshSourceGeometryData2D::set_projected_obstructions, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue navigation_mesh_source_geometry_data2d_class_get_projected_obstructions(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&NavigationMeshSourceGeometryData2D::get_projected_obstructions, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry navigation_mesh_source_geometry_data2d_class_proto_funcs[] = {
	JS_CFUNC_DEF("clear", 0, &navigation_mesh_source_geometry_data2d_class_clear),
	JS_CFUNC_DEF("has_data", 0, &navigation_mesh_source_geometry_data2d_class_has_data),
	JS_CFUNC_DEF("set_traversable_outlines", 1, &navigation_mesh_source_geometry_data2d_class_set_traversable_outlines),
	JS_CFUNC_DEF("get_traversable_outlines", 0, &navigation_mesh_source_geometry_data2d_class_get_traversable_outlines),
	JS_CFUNC_DEF("set_obstruction_outlines", 1, &navigation_mesh_source_geometry_data2d_class_set_obstruction_outlines),
	JS_CFUNC_DEF("get_obstruction_outlines", 0, &navigation_mesh_source_geometry_data2d_class_get_obstruction_outlines),
	JS_CFUNC_DEF("append_traversable_outlines", 1, &navigation_mesh_source_geometry_data2d_class_append_traversable_outlines),
	JS_CFUNC_DEF("append_obstruction_outlines", 1, &navigation_mesh_source_geometry_data2d_class_append_obstruction_outlines),
	JS_CFUNC_DEF("add_traversable_outline", 1, &navigation_mesh_source_geometry_data2d_class_add_traversable_outline),
	JS_CFUNC_DEF("add_obstruction_outline", 1, &navigation_mesh_source_geometry_data2d_class_add_obstruction_outline),
	JS_CFUNC_DEF("merge", 1, &navigation_mesh_source_geometry_data2d_class_merge),
	JS_CFUNC_DEF("add_projected_obstruction", 2, &navigation_mesh_source_geometry_data2d_class_add_projected_obstruction),
	JS_CFUNC_DEF("clear_projected_obstructions", 0, &navigation_mesh_source_geometry_data2d_class_clear_projected_obstructions),
	JS_CFUNC_DEF("set_projected_obstructions", 1, &navigation_mesh_source_geometry_data2d_class_set_projected_obstructions),
	JS_CFUNC_DEF("get_projected_obstructions", 0, &navigation_mesh_source_geometry_data2d_class_get_projected_obstructions),
};

void define_navigation_mesh_source_geometry_data2d_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "traversable_outlines"),
        JS_NewCFunction(ctx, navigation_mesh_source_geometry_data2d_class_get_traversable_outlines, "get_traversable_outlines", 0),
        JS_NewCFunction(ctx, navigation_mesh_source_geometry_data2d_class_set_traversable_outlines, "set_traversable_outlines", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "obstruction_outlines"),
        JS_NewCFunction(ctx, navigation_mesh_source_geometry_data2d_class_get_obstruction_outlines, "get_obstruction_outlines", 0),
        JS_NewCFunction(ctx, navigation_mesh_source_geometry_data2d_class_set_obstruction_outlines, "set_obstruction_outlines", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "projected_obstructions"),
        JS_NewCFunction(ctx, navigation_mesh_source_geometry_data2d_class_get_projected_obstructions, "get_projected_obstructions", 0),
        JS_NewCFunction(ctx, navigation_mesh_source_geometry_data2d_class_set_projected_obstructions, "set_projected_obstructions", 1),
        JS_PROP_GETSET
    );
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
}

static int js_navigation_mesh_source_geometry_data2d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&NavigationMeshSourceGeometryData2D::__class_id);
	classes["NavigationMeshSourceGeometryData2D"] = NavigationMeshSourceGeometryData2D::__class_id;
	class_id_list.insert(NavigationMeshSourceGeometryData2D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), NavigationMeshSourceGeometryData2D::__class_id, &navigation_mesh_source_geometry_data2d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, NavigationMeshSourceGeometryData2D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, NavigationMeshSourceGeometryData2D::__class_id, proto);

	define_navigation_mesh_source_geometry_data2d_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, navigation_mesh_source_geometry_data2d_class_proto_funcs, _countof(navigation_mesh_source_geometry_data2d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, navigation_mesh_source_geometry_data2d_class_constructor, "NavigationMeshSourceGeometryData2D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "NavigationMeshSourceGeometryData2D", ctor);

	return 0;
}

JSModuleDef *_js_init_navigation_mesh_source_geometry_data2d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/resource';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_navigation_mesh_source_geometry_data2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "NavigationMeshSourceGeometryData2D");
	return m;
}

JSModuleDef *js_init_navigation_mesh_source_geometry_data2d_module(JSContext *ctx) {
	return _js_init_navigation_mesh_source_geometry_data2d_module(ctx, "godot/classes/navigation_mesh_source_geometry_data2d");
}

void register_navigation_mesh_source_geometry_data2d() {
	NavigationMeshSourceGeometryData2D::__init_js_class_id();
	js_init_navigation_mesh_source_geometry_data2d_module(ctx);
}