
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/mesh.hpp>
#include <godot_cpp/classes/mesh_texture.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void mesh_texture_class_finalizer(JSRuntime *rt, JSValue val) {
	MeshTexture *mesh_texture = static_cast<MeshTexture *>(JS_GetOpaque(val, MeshTexture::__class_id));
	if (mesh_texture)
		MeshTexture::free(nullptr, mesh_texture);
}

static JSClassDef mesh_texture_class_def = {
	"MeshTexture",
	.finalizer = mesh_texture_class_finalizer
};

static JSValue mesh_texture_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	MeshTexture *mesh_texture_class;
	JSValue obj = JS_NewObjectClass(ctx, MeshTexture::__class_id);
	if (JS_IsException(obj))
		return obj;
	mesh_texture_class = memnew(MeshTexture);
	if (!mesh_texture_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, mesh_texture_class);
	return obj;
}
static JSValue mesh_texture_class_set_mesh(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&MeshTexture::set_mesh, MeshTexture::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue mesh_texture_class_get_mesh(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MeshTexture::get_mesh, MeshTexture::__class_id, ctx, this_val, argv);
};
static JSValue mesh_texture_class_set_image_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&MeshTexture::set_image_size, MeshTexture::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue mesh_texture_class_get_image_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MeshTexture::get_image_size, MeshTexture::__class_id, ctx, this_val, argv);
};
static JSValue mesh_texture_class_set_base_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&MeshTexture::set_base_texture, MeshTexture::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue mesh_texture_class_get_base_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&MeshTexture::get_base_texture, MeshTexture::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry mesh_texture_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_mesh", 1, &mesh_texture_class_set_mesh),
	JS_CFUNC_DEF("get_mesh", 0, &mesh_texture_class_get_mesh),
	JS_CFUNC_DEF("set_image_size", 1, &mesh_texture_class_set_image_size),
	JS_CFUNC_DEF("get_image_size", 0, &mesh_texture_class_get_image_size),
	JS_CFUNC_DEF("set_base_texture", 1, &mesh_texture_class_set_base_texture),
	JS_CFUNC_DEF("get_base_texture", 0, &mesh_texture_class_get_base_texture),
};

static int js_mesh_texture_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&MeshTexture::__class_id);
	classes["MeshTexture"] = MeshTexture::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), MeshTexture::__class_id, &mesh_texture_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Texture2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, MeshTexture::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, mesh_texture_class_proto_funcs, _countof(mesh_texture_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, mesh_texture_class_constructor, "MeshTexture", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "MeshTexture", ctor);

	return 0;
}

JSModuleDef *_js_init_mesh_texture_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_mesh_texture_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "MeshTexture");
	return m;
}

JSModuleDef *js_init_mesh_texture_module(JSContext *ctx) {
	return _js_init_mesh_texture_module(ctx, "godot/classes/mesh_texture");
}

void register_mesh_texture() {
	js_init_mesh_texture_module(ctx);
}