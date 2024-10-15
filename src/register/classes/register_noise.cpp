
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/image.hpp>
#include <godot_cpp/classes/noise.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/image.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void noise_class_finalizer(JSRuntime *rt, JSValue val) {
	Noise *noise = static_cast<Noise *>(JS_GetOpaque(val, Noise::__class_id));
	if (noise)
		memdelete(noise);
}

static JSClassDef noise_class_def = {
	"Noise",
	.finalizer = noise_class_finalizer
};

static JSValue noise_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, Noise::__class_id);
	if (JS_IsException(obj))
		return obj;
	Noise *noise_class = memnew(Noise);
	if (!noise_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, noise_class);	
	return obj;
}
static JSValue noise_class_get_noise_1d(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Noise::get_noise_1d, ctx, this_val, argc, argv);
};
static JSValue noise_class_get_noise_2d(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Noise::get_noise_2d, ctx, this_val, argc, argv);
};
static JSValue noise_class_get_noise_2dv(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Noise::get_noise_2dv, ctx, this_val, argc, argv);
};
static JSValue noise_class_get_noise_3d(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Noise::get_noise_3d, ctx, this_val, argc, argv);
};
static JSValue noise_class_get_noise_3dv(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Noise::get_noise_3dv, ctx, this_val, argc, argv);
};
static JSValue noise_class_get_image(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Noise::get_image, ctx, this_val, argc, argv);
};
static JSValue noise_class_get_seamless_image(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Noise::get_seamless_image, ctx, this_val, argc, argv);
};
static JSValue noise_class_get_image_3d(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Noise::get_image_3d, ctx, this_val, argc, argv);
};
static JSValue noise_class_get_seamless_image_3d(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Noise::get_seamless_image_3d, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry noise_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_noise_1d", 1, &noise_class_get_noise_1d),
	JS_CFUNC_DEF("get_noise_2d", 2, &noise_class_get_noise_2d),
	JS_CFUNC_DEF("get_noise_2dv", 1, &noise_class_get_noise_2dv),
	JS_CFUNC_DEF("get_noise_3d", 3, &noise_class_get_noise_3d),
	JS_CFUNC_DEF("get_noise_3dv", 1, &noise_class_get_noise_3dv),
	JS_CFUNC_DEF("get_image", 5, &noise_class_get_image),
	JS_CFUNC_DEF("get_seamless_image", 6, &noise_class_get_seamless_image),
	JS_CFUNC_DEF("get_image_3d", 5, &noise_class_get_image_3d),
	JS_CFUNC_DEF("get_seamless_image_3d", 6, &noise_class_get_seamless_image_3d),
};

void define_noise_property(JSContext *ctx, JSValue obj) {
}

static int js_noise_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&Noise::__class_id);
	classes["Noise"] = Noise::__class_id;
	class_id_list.insert(Noise::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), Noise::__class_id, &noise_class_def);

	JSValue proto = JS_NewObjectClass(ctx, Noise::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Noise::__class_id, proto);

	define_noise_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, noise_class_proto_funcs, _countof(noise_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, noise_class_constructor, "Noise", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "Noise", ctor);

	return 0;
}

JSModuleDef *_js_init_noise_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/resource';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_noise_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Noise");
	return m;
}

JSModuleDef *js_init_noise_module(JSContext *ctx) {
	return _js_init_noise_module(ctx, "godot/classes/noise");
}

void register_noise() {
	Noise::__init_js_class_id();
	js_init_noise_module(ctx);
}