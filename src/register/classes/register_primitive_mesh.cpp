
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/classes/mesh.hpp>
#include <godot_cpp/classes/primitive_mesh.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void primitive_mesh_class_finalizer(JSRuntime *rt, JSValue val) {
	PrimitiveMesh *primitive_mesh = static_cast<PrimitiveMesh *>(JS_GetOpaque(val, PrimitiveMesh::__class_id));
	if (primitive_mesh)
		PrimitiveMesh::free(nullptr, primitive_mesh);
}

static JSClassDef primitive_mesh_class_def = {
	"PrimitiveMesh",
	.finalizer = primitive_mesh_class_finalizer
};

static JSValue primitive_mesh_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	PrimitiveMesh *primitive_mesh_class;
	JSValue obj = JS_NewObjectClass(ctx, PrimitiveMesh::__class_id);
	if (JS_IsException(obj))
		return obj;
	primitive_mesh_class = memnew(PrimitiveMesh);
	if (!primitive_mesh_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, primitive_mesh_class);
	return obj;
}
static JSValue primitive_mesh_class_set_material(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PrimitiveMesh::set_material, PrimitiveMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue primitive_mesh_class_get_material(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PrimitiveMesh::get_material, PrimitiveMesh::__class_id, ctx, this_val, argv);
};
static JSValue primitive_mesh_class_get_mesh_arrays(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PrimitiveMesh::get_mesh_arrays, PrimitiveMesh::__class_id, ctx, this_val, argv);
};
static JSValue primitive_mesh_class_set_custom_aabb(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PrimitiveMesh::set_custom_aabb, PrimitiveMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue primitive_mesh_class_get_custom_aabb(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PrimitiveMesh::get_custom_aabb, PrimitiveMesh::__class_id, ctx, this_val, argv);
};
static JSValue primitive_mesh_class_set_flip_faces(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PrimitiveMesh::set_flip_faces, PrimitiveMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue primitive_mesh_class_get_flip_faces(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PrimitiveMesh::get_flip_faces, PrimitiveMesh::__class_id, ctx, this_val, argv);
};
static JSValue primitive_mesh_class_set_add_uv2(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PrimitiveMesh::set_add_uv2, PrimitiveMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue primitive_mesh_class_get_add_uv2(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PrimitiveMesh::get_add_uv2, PrimitiveMesh::__class_id, ctx, this_val, argv);
};
static JSValue primitive_mesh_class_set_uv2_padding(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PrimitiveMesh::set_uv2_padding, PrimitiveMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue primitive_mesh_class_get_uv2_padding(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PrimitiveMesh::get_uv2_padding, PrimitiveMesh::__class_id, ctx, this_val, argv);
};
static JSValue primitive_mesh_class_request_update(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PrimitiveMesh::request_update, PrimitiveMesh::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry primitive_mesh_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_material", 1, &primitive_mesh_class_set_material),
	JS_CFUNC_DEF("get_material", 0, &primitive_mesh_class_get_material),
	JS_CFUNC_DEF("get_mesh_arrays", 0, &primitive_mesh_class_get_mesh_arrays),
	JS_CFUNC_DEF("set_custom_aabb", 1, &primitive_mesh_class_set_custom_aabb),
	JS_CFUNC_DEF("get_custom_aabb", 0, &primitive_mesh_class_get_custom_aabb),
	JS_CFUNC_DEF("set_flip_faces", 1, &primitive_mesh_class_set_flip_faces),
	JS_CFUNC_DEF("get_flip_faces", 0, &primitive_mesh_class_get_flip_faces),
	JS_CFUNC_DEF("set_add_uv2", 1, &primitive_mesh_class_set_add_uv2),
	JS_CFUNC_DEF("get_add_uv2", 0, &primitive_mesh_class_get_add_uv2),
	JS_CFUNC_DEF("set_uv2_padding", 1, &primitive_mesh_class_set_uv2_padding),
	JS_CFUNC_DEF("get_uv2_padding", 0, &primitive_mesh_class_get_uv2_padding),
	JS_CFUNC_DEF("request_update", 0, &primitive_mesh_class_request_update),
};

static int js_primitive_mesh_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&PrimitiveMesh::__class_id);
	classes["PrimitiveMesh"] = PrimitiveMesh::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), PrimitiveMesh::__class_id, &primitive_mesh_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Mesh::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, PrimitiveMesh::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, primitive_mesh_class_proto_funcs, _countof(primitive_mesh_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, primitive_mesh_class_constructor, "PrimitiveMesh", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "PrimitiveMesh", ctor);

	return 0;
}

JSModuleDef *_js_init_primitive_mesh_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_primitive_mesh_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "PrimitiveMesh");
	return m;
}

JSModuleDef *js_init_primitive_mesh_module(JSContext *ctx) {
	return _js_init_primitive_mesh_module(ctx, "godot/classes/primitive_mesh");
}

void register_primitive_mesh() {
	js_init_primitive_mesh_module(ctx);
}