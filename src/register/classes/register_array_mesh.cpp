
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/array_mesh.hpp>
#include <godot_cpp/classes/mesh.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void array_mesh_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef array_mesh_class_def = {
	"ArrayMesh",
	.finalizer = array_mesh_class_finalizer
};

static JSValue array_mesh_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, ArrayMesh::__class_id);
	if (JS_IsException(obj))
		return obj;
	ArrayMesh *array_mesh_class = memnew(ArrayMesh);
	if (!array_mesh_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, array_mesh_class);	
	return obj;
}
static JSValue array_mesh_class_add_blend_shape(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ArrayMesh::add_blend_shape, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue array_mesh_class_get_blend_shape_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ArrayMesh::get_blend_shape_count, ctx, this_val, argc, argv);
};
static JSValue array_mesh_class_get_blend_shape_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ArrayMesh::get_blend_shape_name, ctx, this_val, argc, argv);
};
static JSValue array_mesh_class_set_blend_shape_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ArrayMesh::set_blend_shape_name, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue array_mesh_class_clear_blend_shapes(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ArrayMesh::clear_blend_shapes, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue array_mesh_class_set_blend_shape_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ArrayMesh::set_blend_shape_mode, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue array_mesh_class_get_blend_shape_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ArrayMesh::get_blend_shape_mode, ctx, this_val, argc, argv);
};
static JSValue array_mesh_class_add_surface_from_arrays(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ArrayMesh::add_surface_from_arrays, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue array_mesh_class_clear_surfaces(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ArrayMesh::clear_surfaces, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue array_mesh_class_surface_update_vertex_region(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ArrayMesh::surface_update_vertex_region, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue array_mesh_class_surface_update_attribute_region(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ArrayMesh::surface_update_attribute_region, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue array_mesh_class_surface_update_skin_region(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ArrayMesh::surface_update_skin_region, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue array_mesh_class_surface_get_array_len(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ArrayMesh::surface_get_array_len, ctx, this_val, argc, argv);
};
static JSValue array_mesh_class_surface_get_array_index_len(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ArrayMesh::surface_get_array_index_len, ctx, this_val, argc, argv);
};
static JSValue array_mesh_class_surface_get_format(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ArrayMesh::surface_get_format, ctx, this_val, argc, argv);
};
static JSValue array_mesh_class_surface_get_primitive_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ArrayMesh::surface_get_primitive_type, ctx, this_val, argc, argv);
};
static JSValue array_mesh_class_surface_find_by_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ArrayMesh::surface_find_by_name, ctx, this_val, argc, argv);
};
static JSValue array_mesh_class_surface_set_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ArrayMesh::surface_set_name, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue array_mesh_class_surface_get_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ArrayMesh::surface_get_name, ctx, this_val, argc, argv);
};
static JSValue array_mesh_class_regen_normal_maps(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ArrayMesh::regen_normal_maps, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue array_mesh_class_lightmap_unwrap(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&ArrayMesh::lightmap_unwrap, ctx, this_val, argc, argv);
};
static JSValue array_mesh_class_set_custom_aabb(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ArrayMesh::set_custom_aabb, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue array_mesh_class_get_custom_aabb(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ArrayMesh::get_custom_aabb, ctx, this_val, argc, argv);
};
static JSValue array_mesh_class_set_shadow_mesh(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ArrayMesh::set_shadow_mesh, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue array_mesh_class_get_shadow_mesh(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ArrayMesh::get_shadow_mesh, ctx, this_val, argc, argv);
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

void define_array_mesh_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "blend_shape_mode"),
        JS_NewCFunction(ctx, array_mesh_class_get_blend_shape_mode, "get_blend_shape_mode", 0),
        JS_NewCFunction(ctx, array_mesh_class_set_blend_shape_mode, "set_blend_shape_mode", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "custom_aabb"),
        JS_NewCFunction(ctx, array_mesh_class_get_custom_aabb, "get_custom_aabb", 0),
        JS_NewCFunction(ctx, array_mesh_class_set_custom_aabb, "set_custom_aabb", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "shadow_mesh"),
        JS_NewCFunction(ctx, array_mesh_class_get_shadow_mesh, "get_shadow_mesh", 0),
        JS_NewCFunction(ctx, array_mesh_class_set_shadow_mesh, "set_shadow_mesh", 1),
        JS_PROP_GETSET
    );
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
}

static int js_array_mesh_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&ArrayMesh::__class_id);
	classes["ArrayMesh"] = ArrayMesh::__class_id;
	class_id_list.insert(ArrayMesh::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), ArrayMesh::__class_id, &array_mesh_class_def);

	JSValue proto = JS_NewObjectClass(ctx, ArrayMesh::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Mesh::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ArrayMesh::__class_id, proto);

	define_array_mesh_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, array_mesh_class_proto_funcs, _countof(array_mesh_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, array_mesh_class_constructor, "ArrayMesh", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "ArrayMesh", ctor);

	return 0;
}

JSModuleDef *_js_init_array_mesh_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/mesh';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
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
	ArrayMesh::__init_js_class_id();
	js_init_array_mesh_module(ctx);
}