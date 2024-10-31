
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/gltf_texture.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void gltf_texture_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef gltf_texture_class_def = {
	"GLTFTexture",
	.finalizer = gltf_texture_class_finalizer
};

static JSValue gltf_texture_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, GLTFTexture::__class_id);
	if (JS_IsException(obj))
		return obj;

	GLTFTexture *gltf_texture_class;
	if (argc == 1) 
		gltf_texture_class = static_cast<GLTFTexture *>(static_cast<Object *>(Variant(*argv)));
	else 
		gltf_texture_class = memnew(GLTFTexture);
	if (!gltf_texture_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, gltf_texture_class);	
	return obj;
}
static JSValue gltf_texture_class_get_src_image(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GLTFTexture::get_src_image, ctx, this_val, argc, argv);
};
static JSValue gltf_texture_class_set_src_image(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&GLTFTexture::set_src_image, ctx, this_val, argc, argv);
};
static JSValue gltf_texture_class_get_sampler(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GLTFTexture::get_sampler, ctx, this_val, argc, argv);
};
static JSValue gltf_texture_class_set_sampler(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&GLTFTexture::set_sampler, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry gltf_texture_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_src_image", 0, &gltf_texture_class_get_src_image),
	JS_CFUNC_DEF("set_src_image", 1, &gltf_texture_class_set_src_image),
	JS_CFUNC_DEF("get_sampler", 0, &gltf_texture_class_get_sampler),
	JS_CFUNC_DEF("set_sampler", 1, &gltf_texture_class_set_sampler),
};

static void define_gltf_texture_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "src_image"),
        JS_NewCFunction(ctx, gltf_texture_class_get_src_image, "get_src_image", 0),
        JS_NewCFunction(ctx, gltf_texture_class_set_src_image, "set_src_image", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "sampler"),
        JS_NewCFunction(ctx, gltf_texture_class_get_sampler, "get_sampler", 0),
        JS_NewCFunction(ctx, gltf_texture_class_set_sampler, "set_sampler", 1),
        JS_PROP_GETSET
    );
	
}

static void define_gltf_texture_enum(JSContext *ctx, JSValue proto) {
}

static int js_gltf_texture_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&GLTFTexture::__class_id);
	classes["GLTFTexture"] = GLTFTexture::__class_id;
	class_id_list.insert(GLTFTexture::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), GLTFTexture::__class_id, &gltf_texture_class_def);

	JSValue proto = JS_NewObjectClass(ctx, GLTFTexture::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, GLTFTexture::__class_id, proto);

	define_gltf_texture_property(ctx, proto);
	define_gltf_texture_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, gltf_texture_class_proto_funcs, _countof(gltf_texture_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, gltf_texture_class_constructor, "GLTFTexture", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "GLTFTexture", ctor);

	return 0;
}

JSModuleDef *_js_init_gltf_texture_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/resource';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_gltf_texture_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "GLTFTexture");
	return m;
}

JSModuleDef *js_init_gltf_texture_module(JSContext *ctx) {
	return _js_init_gltf_texture_module(ctx, "@godot/classes/gltf_texture");
}

void register_gltf_texture() {
	GLTFTexture::__init_js_class_id();
	js_init_gltf_texture_module(ctx);
}