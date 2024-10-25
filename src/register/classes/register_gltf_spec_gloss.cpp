
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/image.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/gltf_spec_gloss.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void gltf_spec_gloss_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef gltf_spec_gloss_class_def = {
	"GLTFSpecGloss",
	.finalizer = gltf_spec_gloss_class_finalizer
};

static JSValue gltf_spec_gloss_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, GLTFSpecGloss::__class_id);
	if (JS_IsException(obj))
		return obj;
	GLTFSpecGloss *gltf_spec_gloss_class = memnew(GLTFSpecGloss);
	if (!gltf_spec_gloss_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, gltf_spec_gloss_class);	
	return obj;
}
static JSValue gltf_spec_gloss_class_get_diffuse_img(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&GLTFSpecGloss::get_diffuse_img, ctx, this_val, argc, argv);
};
static JSValue gltf_spec_gloss_class_set_diffuse_img(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&GLTFSpecGloss::set_diffuse_img, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_spec_gloss_class_get_diffuse_factor(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&GLTFSpecGloss::get_diffuse_factor, ctx, this_val, argc, argv);
};
static JSValue gltf_spec_gloss_class_set_diffuse_factor(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&GLTFSpecGloss::set_diffuse_factor, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_spec_gloss_class_get_gloss_factor(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&GLTFSpecGloss::get_gloss_factor, ctx, this_val, argc, argv);
};
static JSValue gltf_spec_gloss_class_set_gloss_factor(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&GLTFSpecGloss::set_gloss_factor, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_spec_gloss_class_get_specular_factor(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&GLTFSpecGloss::get_specular_factor, ctx, this_val, argc, argv);
};
static JSValue gltf_spec_gloss_class_set_specular_factor(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&GLTFSpecGloss::set_specular_factor, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_spec_gloss_class_get_spec_gloss_img(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&GLTFSpecGloss::get_spec_gloss_img, ctx, this_val, argc, argv);
};
static JSValue gltf_spec_gloss_class_set_spec_gloss_img(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&GLTFSpecGloss::set_spec_gloss_img, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry gltf_spec_gloss_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_diffuse_img", 0, &gltf_spec_gloss_class_get_diffuse_img),
	JS_CFUNC_DEF("set_diffuse_img", 1, &gltf_spec_gloss_class_set_diffuse_img),
	JS_CFUNC_DEF("get_diffuse_factor", 0, &gltf_spec_gloss_class_get_diffuse_factor),
	JS_CFUNC_DEF("set_diffuse_factor", 1, &gltf_spec_gloss_class_set_diffuse_factor),
	JS_CFUNC_DEF("get_gloss_factor", 0, &gltf_spec_gloss_class_get_gloss_factor),
	JS_CFUNC_DEF("set_gloss_factor", 1, &gltf_spec_gloss_class_set_gloss_factor),
	JS_CFUNC_DEF("get_specular_factor", 0, &gltf_spec_gloss_class_get_specular_factor),
	JS_CFUNC_DEF("set_specular_factor", 1, &gltf_spec_gloss_class_set_specular_factor),
	JS_CFUNC_DEF("get_spec_gloss_img", 0, &gltf_spec_gloss_class_get_spec_gloss_img),
	JS_CFUNC_DEF("set_spec_gloss_img", 1, &gltf_spec_gloss_class_set_spec_gloss_img),
};

void define_gltf_spec_gloss_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "diffuse_img"),
        JS_NewCFunction(ctx, gltf_spec_gloss_class_get_diffuse_img, "get_diffuse_img", 0),
        JS_NewCFunction(ctx, gltf_spec_gloss_class_set_diffuse_img, "set_diffuse_img", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "diffuse_factor"),
        JS_NewCFunction(ctx, gltf_spec_gloss_class_get_diffuse_factor, "get_diffuse_factor", 0),
        JS_NewCFunction(ctx, gltf_spec_gloss_class_set_diffuse_factor, "set_diffuse_factor", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "gloss_factor"),
        JS_NewCFunction(ctx, gltf_spec_gloss_class_get_gloss_factor, "get_gloss_factor", 0),
        JS_NewCFunction(ctx, gltf_spec_gloss_class_set_gloss_factor, "set_gloss_factor", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "specular_factor"),
        JS_NewCFunction(ctx, gltf_spec_gloss_class_get_specular_factor, "get_specular_factor", 0),
        JS_NewCFunction(ctx, gltf_spec_gloss_class_set_specular_factor, "set_specular_factor", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "spec_gloss_img"),
        JS_NewCFunction(ctx, gltf_spec_gloss_class_get_spec_gloss_img, "get_spec_gloss_img", 0),
        JS_NewCFunction(ctx, gltf_spec_gloss_class_set_spec_gloss_img, "set_spec_gloss_img", 1),
        JS_PROP_GETSET
    );
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
}

static int js_gltf_spec_gloss_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&GLTFSpecGloss::__class_id);
	classes["GLTFSpecGloss"] = GLTFSpecGloss::__class_id;
	class_id_list.insert(GLTFSpecGloss::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), GLTFSpecGloss::__class_id, &gltf_spec_gloss_class_def);

	JSValue proto = JS_NewObjectClass(ctx, GLTFSpecGloss::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, GLTFSpecGloss::__class_id, proto);

	define_gltf_spec_gloss_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, gltf_spec_gloss_class_proto_funcs, _countof(gltf_spec_gloss_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, gltf_spec_gloss_class_constructor, "GLTFSpecGloss", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "GLTFSpecGloss", ctor);

	return 0;
}

JSModuleDef *_js_init_gltf_spec_gloss_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/resource';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_gltf_spec_gloss_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "GLTFSpecGloss");
	return m;
}

JSModuleDef *js_init_gltf_spec_gloss_module(JSContext *ctx) {
	return _js_init_gltf_spec_gloss_module(ctx, "godot/classes/gltf_spec_gloss");
}

void register_gltf_spec_gloss() {
	GLTFSpecGloss::__init_js_class_id();
	js_init_gltf_spec_gloss_module(ctx);
}