
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/array_mesh.hpp>
#include <godot_cpp/classes/geometry_instance3d.hpp>
#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/classes/mesh_instance3d.hpp>
#include <godot_cpp/classes/skin_reference.hpp>
#include <godot_cpp/classes/mesh_convex_decomposition_settings.hpp>
#include <godot_cpp/classes/mesh.hpp>
#include <godot_cpp/classes/skin.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void mesh_instance3d_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef mesh_instance3d_class_def = {
	"MeshInstance3D",
	.finalizer = mesh_instance3d_class_finalizer
};

static JSValue mesh_instance3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, MeshInstance3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	MeshInstance3D *mesh_instance3d_class = memnew(MeshInstance3D);
	if (!mesh_instance3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, mesh_instance3d_class);	
	return obj;
}
static JSValue mesh_instance3d_class_set_mesh(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&MeshInstance3D::set_mesh, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue mesh_instance3d_class_get_mesh(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&MeshInstance3D::get_mesh, ctx, this_val, argc, argv);
};
static JSValue mesh_instance3d_class_set_skeleton_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&MeshInstance3D::set_skeleton_path, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue mesh_instance3d_class_get_skeleton_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&MeshInstance3D::get_skeleton_path, ctx, this_val, argc, argv);
};
static JSValue mesh_instance3d_class_set_skin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&MeshInstance3D::set_skin, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue mesh_instance3d_class_get_skin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&MeshInstance3D::get_skin, ctx, this_val, argc, argv);
};
static JSValue mesh_instance3d_class_get_skin_reference(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&MeshInstance3D::get_skin_reference, ctx, this_val, argc, argv);
};
static JSValue mesh_instance3d_class_get_surface_override_material_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&MeshInstance3D::get_surface_override_material_count, ctx, this_val, argc, argv);
};
static JSValue mesh_instance3d_class_set_surface_override_material(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&MeshInstance3D::set_surface_override_material, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue mesh_instance3d_class_get_surface_override_material(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&MeshInstance3D::get_surface_override_material, ctx, this_val, argc, argv);
};
static JSValue mesh_instance3d_class_get_active_material(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&MeshInstance3D::get_active_material, ctx, this_val, argc, argv);
};
static JSValue mesh_instance3d_class_create_trimesh_collision(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&MeshInstance3D::create_trimesh_collision, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue mesh_instance3d_class_create_convex_collision(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&MeshInstance3D::create_convex_collision, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue mesh_instance3d_class_create_multiple_convex_collisions(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&MeshInstance3D::create_multiple_convex_collisions, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue mesh_instance3d_class_get_blend_shape_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&MeshInstance3D::get_blend_shape_count, ctx, this_val, argc, argv);
};
static JSValue mesh_instance3d_class_find_blend_shape_by_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&MeshInstance3D::find_blend_shape_by_name, ctx, this_val, argc, argv);
};
static JSValue mesh_instance3d_class_get_blend_shape_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&MeshInstance3D::get_blend_shape_value, ctx, this_val, argc, argv);
};
static JSValue mesh_instance3d_class_set_blend_shape_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&MeshInstance3D::set_blend_shape_value, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue mesh_instance3d_class_create_debug_tangents(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&MeshInstance3D::create_debug_tangents, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue mesh_instance3d_class_bake_mesh_from_current_blend_shape_mix(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&MeshInstance3D::bake_mesh_from_current_blend_shape_mix, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry mesh_instance3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_mesh", 1, &mesh_instance3d_class_set_mesh),
	JS_CFUNC_DEF("get_mesh", 0, &mesh_instance3d_class_get_mesh),
	JS_CFUNC_DEF("set_skeleton_path", 1, &mesh_instance3d_class_set_skeleton_path),
	JS_CFUNC_DEF("get_skeleton_path", 0, &mesh_instance3d_class_get_skeleton_path),
	JS_CFUNC_DEF("set_skin", 1, &mesh_instance3d_class_set_skin),
	JS_CFUNC_DEF("get_skin", 0, &mesh_instance3d_class_get_skin),
	JS_CFUNC_DEF("get_skin_reference", 0, &mesh_instance3d_class_get_skin_reference),
	JS_CFUNC_DEF("get_surface_override_material_count", 0, &mesh_instance3d_class_get_surface_override_material_count),
	JS_CFUNC_DEF("set_surface_override_material", 2, &mesh_instance3d_class_set_surface_override_material),
	JS_CFUNC_DEF("get_surface_override_material", 1, &mesh_instance3d_class_get_surface_override_material),
	JS_CFUNC_DEF("get_active_material", 1, &mesh_instance3d_class_get_active_material),
	JS_CFUNC_DEF("create_trimesh_collision", 0, &mesh_instance3d_class_create_trimesh_collision),
	JS_CFUNC_DEF("create_convex_collision", 2, &mesh_instance3d_class_create_convex_collision),
	JS_CFUNC_DEF("create_multiple_convex_collisions", 1, &mesh_instance3d_class_create_multiple_convex_collisions),
	JS_CFUNC_DEF("get_blend_shape_count", 0, &mesh_instance3d_class_get_blend_shape_count),
	JS_CFUNC_DEF("find_blend_shape_by_name", 1, &mesh_instance3d_class_find_blend_shape_by_name),
	JS_CFUNC_DEF("get_blend_shape_value", 1, &mesh_instance3d_class_get_blend_shape_value),
	JS_CFUNC_DEF("set_blend_shape_value", 2, &mesh_instance3d_class_set_blend_shape_value),
	JS_CFUNC_DEF("create_debug_tangents", 0, &mesh_instance3d_class_create_debug_tangents),
	JS_CFUNC_DEF("bake_mesh_from_current_blend_shape_mix", 1, &mesh_instance3d_class_bake_mesh_from_current_blend_shape_mix),
};

void define_mesh_instance3d_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "mesh"),
        JS_NewCFunction(ctx, mesh_instance3d_class_get_mesh, "get_mesh", 0),
        JS_NewCFunction(ctx, mesh_instance3d_class_set_mesh, "set_mesh", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "skin"),
        JS_NewCFunction(ctx, mesh_instance3d_class_get_skin, "get_skin", 0),
        JS_NewCFunction(ctx, mesh_instance3d_class_set_skin, "set_skin", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "skeleton"),
        JS_NewCFunction(ctx, mesh_instance3d_class_get_skeleton_path, "get_skeleton_path", 0),
        JS_NewCFunction(ctx, mesh_instance3d_class_set_skeleton_path, "set_skeleton_path", 1),
        JS_PROP_GETSET
    );
}

static int js_mesh_instance3d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&MeshInstance3D::__class_id);
	classes["MeshInstance3D"] = MeshInstance3D::__class_id;
	class_id_list.insert(MeshInstance3D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), MeshInstance3D::__class_id, &mesh_instance3d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, MeshInstance3D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, GeometryInstance3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, MeshInstance3D::__class_id, proto);

	define_mesh_instance3d_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, mesh_instance3d_class_proto_funcs, _countof(mesh_instance3d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, mesh_instance3d_class_constructor, "MeshInstance3D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "MeshInstance3D", ctor);

	return 0;
}

JSModuleDef *_js_init_mesh_instance3d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/geometry_instance3d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_mesh_instance3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "MeshInstance3D");
	return m;
}

JSModuleDef *js_init_mesh_instance3d_module(JSContext *ctx) {
	return _js_init_mesh_instance3d_module(ctx, "godot/classes/mesh_instance3d");
}

void register_mesh_instance3d() {
	MeshInstance3D::__init_js_class_id();
	js_init_mesh_instance3d_module(ctx);
}