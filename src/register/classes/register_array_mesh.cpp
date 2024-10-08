
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/array_mesh.hpp>
#include <godot_cpp/classes/mesh.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void array_mesh_class_finalizer(JSRuntime *rt, JSValue val) {
	ArrayMesh *array_mesh = static_cast<ArrayMesh *>(JS_GetOpaque(val, ArrayMesh::__class_id));
	if (array_mesh)
		ArrayMesh::free(nullptr, array_mesh);
}

static JSClassDef array_mesh_class_def = {
	"ArrayMesh",
	.finalizer = array_mesh_class_finalizer
};

static JSValue array_mesh_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	ArrayMesh *array_mesh_class;
	JSValue obj = JS_NewObjectClass(ctx, ArrayMesh::__class_id);
	if (JS_IsException(obj))
		return obj;
	array_mesh_class = memnew(ArrayMesh);
	if (!array_mesh_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, array_mesh_class);
	return obj;
}
static JSValue array_mesh_class_add_blend_shape(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ArrayMesh::add_blend_shape, ArrayMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue array_mesh_class_get_blend_shape_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ArrayMesh::get_blend_shape_count, ArrayMesh::__class_id, ctx, this_val, argv);
};
static JSValue array_mesh_class_get_blend_shape_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ArrayMesh::get_blend_shape_name, ArrayMesh::__class_id, ctx, this_val, argv);
};
static JSValue array_mesh_class_set_blend_shape_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ArrayMesh::set_blend_shape_name, ArrayMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue array_mesh_class_clear_blend_shapes(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ArrayMesh::clear_blend_shapes, ArrayMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue array_mesh_class_set_blend_shape_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ArrayMesh::set_blend_shape_mode, ArrayMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue array_mesh_class_get_blend_shape_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ArrayMesh::get_blend_shape_mode, ArrayMesh::__class_id, ctx, this_val, argv);
};
static JSValue array_mesh_class_add_surface_from_arrays(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ArrayMesh::add_surface_from_arrays, ArrayMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue array_mesh_class_clear_surfaces(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ArrayMesh::clear_surfaces, ArrayMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue array_mesh_class_surface_update_vertex_region(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ArrayMesh::surface_update_vertex_region, ArrayMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue array_mesh_class_surface_update_attribute_region(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ArrayMesh::surface_update_attribute_region, ArrayMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue array_mesh_class_surface_update_skin_region(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ArrayMesh::surface_update_skin_region, ArrayMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue array_mesh_class_surface_get_array_len(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ArrayMesh::surface_get_array_len, ArrayMesh::__class_id, ctx, this_val, argv);
};
static JSValue array_mesh_class_surface_get_array_index_len(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ArrayMesh::surface_get_array_index_len, ArrayMesh::__class_id, ctx, this_val, argv);
};
static JSValue array_mesh_class_surface_get_format(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ArrayMesh::surface_get_format, ArrayMesh::__class_id, ctx, this_val, argv);
};
static JSValue array_mesh_class_surface_get_primitive_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ArrayMesh::surface_get_primitive_type, ArrayMesh::__class_id, ctx, this_val, argv);
};
static JSValue array_mesh_class_surface_find_by_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ArrayMesh::surface_find_by_name, ArrayMesh::__class_id, ctx, this_val, argv);
};
static JSValue array_mesh_class_surface_set_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ArrayMesh::surface_set_name, ArrayMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue array_mesh_class_surface_get_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ArrayMesh::surface_get_name, ArrayMesh::__class_id, ctx, this_val, argv);
};
static JSValue array_mesh_class_regen_normal_maps(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ArrayMesh::regen_normal_maps, ArrayMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue array_mesh_class_lightmap_unwrap(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&ArrayMesh::lightmap_unwrap, ArrayMesh::__class_id, ctx, this_val, argv);
};
static JSValue array_mesh_class_set_custom_aabb(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ArrayMesh::set_custom_aabb, ArrayMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue array_mesh_class_get_custom_aabb(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ArrayMesh::get_custom_aabb, ArrayMesh::__class_id, ctx, this_val, argv);
};
static JSValue array_mesh_class_set_shadow_mesh(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ArrayMesh::set_shadow_mesh, ArrayMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue array_mesh_class_get_shadow_mesh(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ArrayMesh::get_shadow_mesh, ArrayMesh::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry array_mesh_class_proto_funcs[] = {
	JS_CFUNC_DEF("add_blend_shape", 1, &array_mesh_class_add_blend_shape),
	JS_CFUNC_DEF("get_blend_shape_count", 0, &array_mesh_class_get_blend_shape_count),
	JS_CFUNC_DEF("get_blend_shape_name", 1, &array_mesh_class_get_blend_shape_name),
	JS_CFUNC_DEF("set_blend_shape_name", 2, &array_mesh_class_set_blend_shape_name),
	JS_CFUNC_DEF("clear_blend_shapes", 0, &array_mesh_class_clear_blend_shapes),
	JS_CFUNC_DEF("set_blend_shape_mode", 1, &array_mesh_class_set_blend_shape_mode),
	JS_CFUNC_DEF("get_blend_shape_mode", 0, &array_mesh_class_get_blend_shape_mode),
	JS_CFUNC_DEF("add_surface_from_arrays", 5, &array_mesh_class_add_surface_from_arrays),
	JS_CFUNC_DEF("clear_surfaces", 0, &array_mesh_class_clear_surfaces),
	JS_CFUNC_DEF("surface_update_vertex_region", 3, &array_mesh_class_surface_update_vertex_region),
	JS_CFUNC_DEF("surface_update_attribute_region", 3, &array_mesh_class_surface_update_attribute_region),
	JS_CFUNC_DEF("surface_update_skin_region", 3, &array_mesh_class_surface_update_skin_region),
	JS_CFUNC_DEF("surface_get_array_len", 1, &array_mesh_class_surface_get_array_len),
	JS_CFUNC_DEF("surface_get_array_index_len", 1, &array_mesh_class_surface_get_array_index_len),
	JS_CFUNC_DEF("surface_get_format", 1, &array_mesh_class_surface_get_format),
	JS_CFUNC_DEF("surface_get_primitive_type", 1, &array_mesh_class_surface_get_primitive_type),
	JS_CFUNC_DEF("surface_find_by_name", 1, &array_mesh_class_surface_find_by_name),
	JS_CFUNC_DEF("surface_set_name", 2, &array_mesh_class_surface_set_name),
	JS_CFUNC_DEF("surface_get_name", 1, &array_mesh_class_surface_get_name),
	JS_CFUNC_DEF("regen_normal_maps", 0, &array_mesh_class_regen_normal_maps),
	JS_CFUNC_DEF("lightmap_unwrap", 2, &array_mesh_class_lightmap_unwrap),
	JS_CFUNC_DEF("set_custom_aabb", 1, &array_mesh_class_set_custom_aabb),
	JS_CFUNC_DEF("get_custom_aabb", 0, &array_mesh_class_get_custom_aabb),
	JS_CFUNC_DEF("set_shadow_mesh", 1, &array_mesh_class_set_shadow_mesh),
	JS_CFUNC_DEF("get_shadow_mesh", 0, &array_mesh_class_get_shadow_mesh),
};

static int js_array_mesh_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&ArrayMesh::__class_id);
	classes["ArrayMesh"] = ArrayMesh::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), ArrayMesh::__class_id, &array_mesh_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Mesh::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ArrayMesh::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, array_mesh_class_proto_funcs, _countof(array_mesh_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, array_mesh_class_constructor, "ArrayMesh", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "ArrayMesh", ctor);

	return 0;
}

JSModuleDef *_js_init_array_mesh_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_array_mesh_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "ArrayMesh");
	return m;
}

JSModuleDef *js_init_array_mesh_module(JSContext *ctx) {
	return _js_init_array_mesh_module(ctx, "godot/classes/array_mesh");
}

void register_array_mesh() {
	js_init_array_mesh_module(ctx);
}