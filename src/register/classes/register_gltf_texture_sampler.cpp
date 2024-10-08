
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/gltf_texture_sampler.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void gltf_texture_sampler_class_finalizer(JSRuntime *rt, JSValue val) {
	GLTFTextureSampler *gltf_texture_sampler = static_cast<GLTFTextureSampler *>(JS_GetOpaque(val, GLTFTextureSampler::__class_id));
	if (gltf_texture_sampler)
		GLTFTextureSampler::free(nullptr, gltf_texture_sampler);
}

static JSClassDef gltf_texture_sampler_class_def = {
	"GLTFTextureSampler",
	.finalizer = gltf_texture_sampler_class_finalizer
};

static JSValue gltf_texture_sampler_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	GLTFTextureSampler *gltf_texture_sampler_class;
	JSValue obj = JS_NewObjectClass(ctx, GLTFTextureSampler::__class_id);
	if (JS_IsException(obj))
		return obj;
	gltf_texture_sampler_class = memnew(GLTFTextureSampler);
	if (!gltf_texture_sampler_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, gltf_texture_sampler_class);
	return obj;
}
static JSValue gltf_texture_sampler_class_get_mag_filter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GLTFTextureSampler::get_mag_filter, GLTFTextureSampler::__class_id, ctx, this_val, argv);
};
static JSValue gltf_texture_sampler_class_set_mag_filter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GLTFTextureSampler::set_mag_filter, GLTFTextureSampler::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_texture_sampler_class_get_min_filter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GLTFTextureSampler::get_min_filter, GLTFTextureSampler::__class_id, ctx, this_val, argv);
};
static JSValue gltf_texture_sampler_class_set_min_filter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GLTFTextureSampler::set_min_filter, GLTFTextureSampler::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_texture_sampler_class_get_wrap_s(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GLTFTextureSampler::get_wrap_s, GLTFTextureSampler::__class_id, ctx, this_val, argv);
};
static JSValue gltf_texture_sampler_class_set_wrap_s(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GLTFTextureSampler::set_wrap_s, GLTFTextureSampler::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_texture_sampler_class_get_wrap_t(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GLTFTextureSampler::get_wrap_t, GLTFTextureSampler::__class_id, ctx, this_val, argv);
};
static JSValue gltf_texture_sampler_class_set_wrap_t(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GLTFTextureSampler::set_wrap_t, GLTFTextureSampler::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry gltf_texture_sampler_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_mag_filter", 0, &gltf_texture_sampler_class_get_mag_filter),
	JS_CFUNC_DEF("set_mag_filter", 1, &gltf_texture_sampler_class_set_mag_filter),
	JS_CFUNC_DEF("get_min_filter", 0, &gltf_texture_sampler_class_get_min_filter),
	JS_CFUNC_DEF("set_min_filter", 1, &gltf_texture_sampler_class_set_min_filter),
	JS_CFUNC_DEF("get_wrap_s", 0, &gltf_texture_sampler_class_get_wrap_s),
	JS_CFUNC_DEF("set_wrap_s", 1, &gltf_texture_sampler_class_set_wrap_s),
	JS_CFUNC_DEF("get_wrap_t", 0, &gltf_texture_sampler_class_get_wrap_t),
	JS_CFUNC_DEF("set_wrap_t", 1, &gltf_texture_sampler_class_set_wrap_t),
};

static int js_gltf_texture_sampler_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&GLTFTextureSampler::__class_id);
	classes["GLTFTextureSampler"] = GLTFTextureSampler::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), GLTFTextureSampler::__class_id, &gltf_texture_sampler_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, GLTFTextureSampler::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, gltf_texture_sampler_class_proto_funcs, _countof(gltf_texture_sampler_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, gltf_texture_sampler_class_constructor, "GLTFTextureSampler", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "GLTFTextureSampler", ctor);

	return 0;
}

JSModuleDef *_js_init_gltf_texture_sampler_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_gltf_texture_sampler_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "GLTFTextureSampler");
	return m;
}

JSModuleDef *js_init_gltf_texture_sampler_module(JSContext *ctx) {
	return _js_init_gltf_texture_sampler_module(ctx, "godot/classes/gltf_texture_sampler");
}

void register_gltf_texture_sampler() {
	js_init_gltf_texture_sampler_module(ctx);
}