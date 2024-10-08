
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/gltf_mesh.hpp>
#include <godot_cpp/classes/importer_mesh.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void gltf_mesh_class_finalizer(JSRuntime *rt, JSValue val) {
	GLTFMesh *gltf_mesh = static_cast<GLTFMesh *>(JS_GetOpaque(val, GLTFMesh::__class_id));
	if (gltf_mesh)
		GLTFMesh::free(nullptr, gltf_mesh);
}

static JSClassDef gltf_mesh_class_def = {
	"GLTFMesh",
	.finalizer = gltf_mesh_class_finalizer
};

static JSValue gltf_mesh_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	GLTFMesh *gltf_mesh_class;
	JSValue obj = JS_NewObjectClass(ctx, GLTFMesh::__class_id);
	if (JS_IsException(obj))
		return obj;
	gltf_mesh_class = memnew(GLTFMesh);
	if (!gltf_mesh_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, gltf_mesh_class);
	return obj;
}
static JSValue gltf_mesh_class_get_original_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFMesh::get_original_name, GLTFMesh::__class_id, ctx, this_val, argv);
};
static JSValue gltf_mesh_class_set_original_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GLTFMesh::set_original_name, GLTFMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_mesh_class_get_mesh(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFMesh::get_mesh, GLTFMesh::__class_id, ctx, this_val, argv);
};
static JSValue gltf_mesh_class_set_mesh(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GLTFMesh::set_mesh, GLTFMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_mesh_class_get_blend_weights(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFMesh::get_blend_weights, GLTFMesh::__class_id, ctx, this_val, argv);
};
static JSValue gltf_mesh_class_set_blend_weights(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GLTFMesh::set_blend_weights, GLTFMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_mesh_class_get_instance_materials(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFMesh::get_instance_materials, GLTFMesh::__class_id, ctx, this_val, argv);
};
static JSValue gltf_mesh_class_set_instance_materials(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GLTFMesh::set_instance_materials, GLTFMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_mesh_class_get_additional_data(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFMesh::get_additional_data, GLTFMesh::__class_id, ctx, this_val, argv);
};
static JSValue gltf_mesh_class_set_additional_data(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GLTFMesh::set_additional_data, GLTFMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry gltf_mesh_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_original_name", 0, &gltf_mesh_class_get_original_name),
	JS_CFUNC_DEF("set_original_name", 1, &gltf_mesh_class_set_original_name),
	JS_CFUNC_DEF("get_mesh", 0, &gltf_mesh_class_get_mesh),
	JS_CFUNC_DEF("set_mesh", 1, &gltf_mesh_class_set_mesh),
	JS_CFUNC_DEF("get_blend_weights", 0, &gltf_mesh_class_get_blend_weights),
	JS_CFUNC_DEF("set_blend_weights", 1, &gltf_mesh_class_set_blend_weights),
	JS_CFUNC_DEF("get_instance_materials", 0, &gltf_mesh_class_get_instance_materials),
	JS_CFUNC_DEF("set_instance_materials", 1, &gltf_mesh_class_set_instance_materials),
	JS_CFUNC_DEF("get_additional_data", 1, &gltf_mesh_class_get_additional_data),
	JS_CFUNC_DEF("set_additional_data", 2, &gltf_mesh_class_set_additional_data),
};

static int js_gltf_mesh_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&GLTFMesh::__class_id);
	classes["GLTFMesh"] = GLTFMesh::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), GLTFMesh::__class_id, &gltf_mesh_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, GLTFMesh::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, gltf_mesh_class_proto_funcs, _countof(gltf_mesh_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, gltf_mesh_class_constructor, "GLTFMesh", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "GLTFMesh", ctor);

	return 0;
}

JSModuleDef *_js_init_gltf_mesh_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_gltf_mesh_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "GLTFMesh");
	return m;
}

JSModuleDef *js_init_gltf_mesh_module(JSContext *ctx) {
	return _js_init_gltf_mesh_module(ctx, "godot/classes/gltf_mesh");
}

void register_gltf_mesh() {
	js_init_gltf_mesh_module(ctx);
}