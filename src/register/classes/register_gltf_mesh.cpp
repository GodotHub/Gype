
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/classes/importer_mesh.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/gltf_mesh.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void gltf_mesh_class_finalizer(JSRuntime *rt, JSValue val) {
	GLTFMesh *gltf_mesh = static_cast<GLTFMesh *>(JS_GetOpaque(val, GLTFMesh::__class_id));
	if (gltf_mesh)
		memdelete(gltf_mesh);
}

static JSClassDef gltf_mesh_class_def = {
	"GLTFMesh",
	.finalizer = gltf_mesh_class_finalizer
};

static JSValue gltf_mesh_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, GLTFMesh::__class_id);
	if (JS_IsException(obj))
		return obj;

	GLTFMesh *gltf_mesh_class;
	if (argc == 1) 
		gltf_mesh_class = static_cast<GLTFMesh *>(Variant(*argv).operator Object *());
	else 
		gltf_mesh_class = memnew(GLTFMesh);
	if (!gltf_mesh_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, gltf_mesh_class);
	return obj;
}
static JSValue gltf_mesh_class_get_original_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&GLTFMesh::get_original_name, ctx, this_val, argc, argv);
};
static JSValue gltf_mesh_class_set_original_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&GLTFMesh::set_original_name, ctx, this_val, argc, argv);
};
static JSValue gltf_mesh_class_get_mesh(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&GLTFMesh::get_mesh, ctx, this_val, argc, argv);
};
static JSValue gltf_mesh_class_set_mesh(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&GLTFMesh::set_mesh, ctx, this_val, argc, argv);
};
static JSValue gltf_mesh_class_get_blend_weights(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&GLTFMesh::get_blend_weights, ctx, this_val, argc, argv);
};
static JSValue gltf_mesh_class_set_blend_weights(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&GLTFMesh::set_blend_weights, ctx, this_val, argc, argv);
};
static JSValue gltf_mesh_class_get_instance_materials(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&GLTFMesh::get_instance_materials, ctx, this_val, argc, argv);
};
static JSValue gltf_mesh_class_set_instance_materials(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&GLTFMesh::set_instance_materials, ctx, this_val, argc, argv);
};
static JSValue gltf_mesh_class_get_additional_data(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&GLTFMesh::get_additional_data, ctx, this_val, argc, argv);
};
static JSValue gltf_mesh_class_set_additional_data(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&GLTFMesh::set_additional_data, ctx, this_val, argc, argv);
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

static void define_gltf_mesh_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "original_name"),
        JS_NewCFunction(ctx, gltf_mesh_class_get_original_name, "get_original_name", 0),
        JS_NewCFunction(ctx, gltf_mesh_class_set_original_name, "set_original_name", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "mesh"),
        JS_NewCFunction(ctx, gltf_mesh_class_get_mesh, "get_mesh", 0),
        JS_NewCFunction(ctx, gltf_mesh_class_set_mesh, "set_mesh", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "blend_weights"),
        JS_NewCFunction(ctx, gltf_mesh_class_get_blend_weights, "get_blend_weights", 0),
        JS_NewCFunction(ctx, gltf_mesh_class_set_blend_weights, "set_blend_weights", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "instance_materials"),
        JS_NewCFunction(ctx, gltf_mesh_class_get_instance_materials, "get_instance_materials", 0),
        JS_NewCFunction(ctx, gltf_mesh_class_set_instance_materials, "set_instance_materials", 1),
        JS_PROP_GETSET
    );
	
}

static void define_gltf_mesh_enum(JSContext *ctx, JSValue proto) {
}

static int js_gltf_mesh_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["GLTFMesh"] = GLTFMesh::__class_id;
	class_id_list.insert(GLTFMesh::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), GLTFMesh::__class_id, &gltf_mesh_class_def);

	JSValue proto = JS_NewObjectClass(ctx, GLTFMesh::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, GLTFMesh::__class_id, proto);

	define_gltf_mesh_property(ctx, proto);
	define_gltf_mesh_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, gltf_mesh_class_proto_funcs, _countof(gltf_mesh_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, gltf_mesh_class_constructor, "GLTFMesh", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "GLTFMesh", ctor);
	constructors[GLTFMesh::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_gltf_mesh_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/resource';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_gltf_mesh_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "GLTFMesh");
	return m;
}

JSModuleDef *js_init_gltf_mesh_module(JSContext *ctx) {
	return _js_init_gltf_mesh_module(ctx, "@godot/classes/gltf_mesh");
}

void register_gltf_mesh() {
	GLTFMesh::__init_js_class_id();
	js_init_gltf_mesh_module(ctx);
}