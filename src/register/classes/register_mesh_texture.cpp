
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/mesh_texture.hpp>
#include <godot_cpp/classes/mesh.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void mesh_texture_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef mesh_texture_class_def = {
	"MeshTexture",
	.finalizer = mesh_texture_class_finalizer
};

static JSValue mesh_texture_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, MeshTexture::__class_id);
	if (JS_IsException(obj))
		return obj;
	MeshTexture *mesh_texture_class = memnew(MeshTexture);
	if (!mesh_texture_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, mesh_texture_class);	
	return obj;
}
static JSValue mesh_texture_class_set_mesh(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&MeshTexture::set_mesh, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue mesh_texture_class_get_mesh(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&MeshTexture::get_mesh, ctx, this_val, argc, argv);
};
static JSValue mesh_texture_class_set_image_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&MeshTexture::set_image_size, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue mesh_texture_class_get_image_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&MeshTexture::get_image_size, ctx, this_val, argc, argv);
};
static JSValue mesh_texture_class_set_base_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&MeshTexture::set_base_texture, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue mesh_texture_class_get_base_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&MeshTexture::get_base_texture, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry mesh_texture_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_mesh", 1, &mesh_texture_class_set_mesh),
	JS_CFUNC_DEF("get_mesh", 0, &mesh_texture_class_get_mesh),
	JS_CFUNC_DEF("set_image_size", 1, &mesh_texture_class_set_image_size),
	JS_CFUNC_DEF("get_image_size", 0, &mesh_texture_class_get_image_size),
	JS_CFUNC_DEF("set_base_texture", 1, &mesh_texture_class_set_base_texture),
	JS_CFUNC_DEF("get_base_texture", 0, &mesh_texture_class_get_base_texture),
};

void define_mesh_texture_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "mesh"),
        JS_NewCFunction(ctx, mesh_texture_class_get_mesh, "get_mesh", 0),
        JS_NewCFunction(ctx, mesh_texture_class_set_mesh, "set_mesh", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "base_texture"),
        JS_NewCFunction(ctx, mesh_texture_class_get_base_texture, "get_base_texture", 0),
        JS_NewCFunction(ctx, mesh_texture_class_set_base_texture, "set_base_texture", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "image_size"),
        JS_NewCFunction(ctx, mesh_texture_class_get_image_size, "get_image_size", 0),
        JS_NewCFunction(ctx, mesh_texture_class_set_image_size, "set_image_size", 1),
        JS_PROP_GETSET
    );
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
}

static int js_mesh_texture_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&MeshTexture::__class_id);
	classes["MeshTexture"] = MeshTexture::__class_id;
	class_id_list.insert(MeshTexture::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), MeshTexture::__class_id, &mesh_texture_class_def);

	JSValue proto = JS_NewObjectClass(ctx, MeshTexture::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Texture2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, MeshTexture::__class_id, proto);

	define_mesh_texture_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, mesh_texture_class_proto_funcs, _countof(mesh_texture_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, mesh_texture_class_constructor, "MeshTexture", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "MeshTexture", ctor);

	return 0;
}

JSModuleDef *_js_init_mesh_texture_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/texture2d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_mesh_texture_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "MeshTexture");
	return m;
}

JSModuleDef *js_init_mesh_texture_module(JSContext *ctx) {
	return _js_init_mesh_texture_module(ctx, "@godot/classes/mesh_texture");
}

void register_mesh_texture() {
	MeshTexture::__init_js_class_id();
	js_init_mesh_texture_module(ctx);
}