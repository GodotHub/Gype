
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/gltf_texture.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void gltf_texture_class_finalizer(JSRuntime *rt, JSValue val) {
	GLTFTexture *gltf_texture = static_cast<GLTFTexture *>(JS_GetOpaque(val, GLTFTexture::__class_id));
	if (gltf_texture)
		GLTFTexture::free(nullptr, gltf_texture);
}

static JSClassDef gltf_texture_class_def = {
	"GLTFTexture",
	.finalizer = gltf_texture_class_finalizer
};

static JSValue gltf_texture_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	GLTFTexture *gltf_texture_class;
	JSValue obj = JS_NewObjectClass(ctx, GLTFTexture::__class_id);
	if (JS_IsException(obj))
		return obj;
	gltf_texture_class = memnew(GLTFTexture);
	if (!gltf_texture_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, gltf_texture_class);
	return obj;
}
static JSValue gltf_texture_class_get_src_image(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GLTFTexture::get_src_image, GLTFTexture::__class_id, ctx, this_val, argv);
};
static JSValue gltf_texture_class_set_src_image(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GLTFTexture::set_src_image, GLTFTexture::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_texture_class_get_sampler(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GLTFTexture::get_sampler, GLTFTexture::__class_id, ctx, this_val, argv);
};
static JSValue gltf_texture_class_set_sampler(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GLTFTexture::set_sampler, GLTFTexture::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry gltf_texture_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_src_image", 0, &gltf_texture_class_get_src_image),
	JS_CFUNC_DEF("set_src_image", 1, &gltf_texture_class_set_src_image),
	JS_CFUNC_DEF("get_sampler", 0, &gltf_texture_class_get_sampler),
	JS_CFUNC_DEF("set_sampler", 1, &gltf_texture_class_set_sampler),
};

static int js_gltf_texture_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&GLTFTexture::__class_id);
	classes["GLTFTexture"] = GLTFTexture::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), GLTFTexture::__class_id, &gltf_texture_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, GLTFTexture::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, gltf_texture_class_proto_funcs, _countof(gltf_texture_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, gltf_texture_class_constructor, "GLTFTexture", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "GLTFTexture", ctor);

	return 0;
}

JSModuleDef *_js_init_gltf_texture_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_gltf_texture_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "GLTFTexture");
	return m;
}

JSModuleDef *js_init_gltf_texture_module(JSContext *ctx) {
	return _js_init_gltf_texture_module(ctx, "godot/classes/gltf_texture");
}

void register_gltf_texture() {
	js_init_gltf_texture_module(ctx);
}