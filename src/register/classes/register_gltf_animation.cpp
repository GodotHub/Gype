
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/gltf_animation.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void gltf_animation_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef gltf_animation_class_def = {
	"GLTFAnimation",
	.finalizer = gltf_animation_class_finalizer
};

static JSValue gltf_animation_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, GLTFAnimation::__class_id);
	if (JS_IsException(obj))
		return obj;
	GLTFAnimation *gltf_animation_class = memnew(GLTFAnimation);
	if (!gltf_animation_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, gltf_animation_class);	
	return obj;
}
static JSValue gltf_animation_class_get_original_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&GLTFAnimation::get_original_name, ctx, this_val, argc, argv);
};
static JSValue gltf_animation_class_set_original_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&GLTFAnimation::set_original_name, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_animation_class_get_loop(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GLTFAnimation::get_loop, ctx, this_val, argc, argv);
};
static JSValue gltf_animation_class_set_loop(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&GLTFAnimation::set_loop, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_animation_class_get_additional_data(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&GLTFAnimation::get_additional_data, ctx, this_val, argc, argv);
};
static JSValue gltf_animation_class_set_additional_data(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&GLTFAnimation::set_additional_data, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry gltf_animation_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_original_name", 0, &gltf_animation_class_get_original_name),
	JS_CFUNC_DEF("set_original_name", 1, &gltf_animation_class_set_original_name),
	JS_CFUNC_DEF("get_loop", 0, &gltf_animation_class_get_loop),
	JS_CFUNC_DEF("set_loop", 1, &gltf_animation_class_set_loop),
	JS_CFUNC_DEF("get_additional_data", 1, &gltf_animation_class_get_additional_data),
	JS_CFUNC_DEF("set_additional_data", 2, &gltf_animation_class_set_additional_data),
};

void define_gltf_animation_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "original_name"),
        JS_NewCFunction(ctx, gltf_animation_class_get_original_name, "get_original_name", 0),
        JS_NewCFunction(ctx, gltf_animation_class_set_original_name, "set_original_name", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "loop"),
        JS_NewCFunction(ctx, gltf_animation_class_get_loop, "get_loop", 0),
        JS_NewCFunction(ctx, gltf_animation_class_set_loop, "set_loop", 1),
        JS_PROP_GETSET
    );
}

static int js_gltf_animation_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&GLTFAnimation::__class_id);
	classes["GLTFAnimation"] = GLTFAnimation::__class_id;
	class_id_list.insert(GLTFAnimation::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), GLTFAnimation::__class_id, &gltf_animation_class_def);

	JSValue proto = JS_NewObjectClass(ctx, GLTFAnimation::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, GLTFAnimation::__class_id, proto);

	define_gltf_animation_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, gltf_animation_class_proto_funcs, _countof(gltf_animation_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, gltf_animation_class_constructor, "GLTFAnimation", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "GLTFAnimation", ctor);

	return 0;
}

JSModuleDef *_js_init_gltf_animation_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/resource';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_gltf_animation_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "GLTFAnimation");
	return m;
}

JSModuleDef *js_init_gltf_animation_module(JSContext *ctx) {
	return _js_init_gltf_animation_module(ctx, "godot/classes/gltf_animation");
}

void register_gltf_animation() {
	GLTFAnimation::__init_js_class_id();
	js_init_gltf_animation_module(ctx);
}