
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/gltf_texture_sampler.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void gltf_texture_sampler_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef gltf_texture_sampler_class_def = {
	"GLTFTextureSampler",
	.finalizer = gltf_texture_sampler_class_finalizer
};

static JSValue gltf_texture_sampler_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, GLTFTextureSampler::__class_id);
	if (JS_IsException(obj))
		return obj;

	GLTFTextureSampler *gltf_texture_sampler_class;
	if (argc == 1) 
		gltf_texture_sampler_class = static_cast<GLTFTextureSampler *>(Variant(*argv).operator Object *());
	else 
		gltf_texture_sampler_class = memnew(GLTFTextureSampler);
	if (!gltf_texture_sampler_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, gltf_texture_sampler_class);
	return obj;
}
static JSValue gltf_texture_sampler_class_get_mag_filter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GLTFTextureSampler::get_mag_filter, ctx, this_val, argc, argv);
};
static JSValue gltf_texture_sampler_class_set_mag_filter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&GLTFTextureSampler::set_mag_filter, ctx, this_val, argc, argv);
};
static JSValue gltf_texture_sampler_class_get_min_filter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GLTFTextureSampler::get_min_filter, ctx, this_val, argc, argv);
};
static JSValue gltf_texture_sampler_class_set_min_filter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&GLTFTextureSampler::set_min_filter, ctx, this_val, argc, argv);
};
static JSValue gltf_texture_sampler_class_get_wrap_s(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GLTFTextureSampler::get_wrap_s, ctx, this_val, argc, argv);
};
static JSValue gltf_texture_sampler_class_set_wrap_s(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&GLTFTextureSampler::set_wrap_s, ctx, this_val, argc, argv);
};
static JSValue gltf_texture_sampler_class_get_wrap_t(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GLTFTextureSampler::get_wrap_t, ctx, this_val, argc, argv);
};
static JSValue gltf_texture_sampler_class_set_wrap_t(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&GLTFTextureSampler::set_wrap_t, ctx, this_val, argc, argv);
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

static void define_gltf_texture_sampler_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "mag_filter"),
        JS_NewCFunction(ctx, gltf_texture_sampler_class_get_mag_filter, "get_mag_filter", 0),
        JS_NewCFunction(ctx, gltf_texture_sampler_class_set_mag_filter, "set_mag_filter", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "min_filter"),
        JS_NewCFunction(ctx, gltf_texture_sampler_class_get_min_filter, "get_min_filter", 0),
        JS_NewCFunction(ctx, gltf_texture_sampler_class_set_min_filter, "set_min_filter", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "wrap_s"),
        JS_NewCFunction(ctx, gltf_texture_sampler_class_get_wrap_s, "get_wrap_s", 0),
        JS_NewCFunction(ctx, gltf_texture_sampler_class_set_wrap_s, "set_wrap_s", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "wrap_t"),
        JS_NewCFunction(ctx, gltf_texture_sampler_class_get_wrap_t, "get_wrap_t", 0),
        JS_NewCFunction(ctx, gltf_texture_sampler_class_set_wrap_t, "set_wrap_t", 1),
        JS_PROP_GETSET
    );
	
}

static void define_gltf_texture_sampler_enum(JSContext *ctx, JSValue proto) {
}

static int js_gltf_texture_sampler_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["GLTFTextureSampler"] = GLTFTextureSampler::__class_id;
	class_id_list.insert(GLTFTextureSampler::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), GLTFTextureSampler::__class_id, &gltf_texture_sampler_class_def);

	JSValue proto = JS_NewObjectClass(ctx, GLTFTextureSampler::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, GLTFTextureSampler::__class_id, proto);

	define_gltf_texture_sampler_property(ctx, proto);
	define_gltf_texture_sampler_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, gltf_texture_sampler_class_proto_funcs, _countof(gltf_texture_sampler_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, gltf_texture_sampler_class_constructor, "GLTFTextureSampler", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "GLTFTextureSampler", ctor);
	constructors[GLTFTextureSampler::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_gltf_texture_sampler_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/resource';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_gltf_texture_sampler_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "GLTFTextureSampler");
	return m;
}

JSModuleDef *js_init_gltf_texture_sampler_module(JSContext *ctx) {
	return _js_init_gltf_texture_sampler_module(ctx, "@godot/classes/gltf_texture_sampler");
}

void register_gltf_texture_sampler() {
	GLTFTextureSampler::__init_js_class_id();
	js_init_gltf_texture_sampler_module(ctx);
}