
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/light3d.hpp>
#include <godot_cpp/classes/directional_light3d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void directional_light3d_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef directional_light3d_class_def = {
	"DirectionalLight3D",
	.finalizer = directional_light3d_class_finalizer
};

static JSValue directional_light3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, DirectionalLight3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	DirectionalLight3D *directional_light3d_class = memnew(DirectionalLight3D);
	if (!directional_light3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, directional_light3d_class);	
	return obj;
}
static JSValue directional_light3d_class_set_shadow_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&DirectionalLight3D::set_shadow_mode, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue directional_light3d_class_get_shadow_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&DirectionalLight3D::get_shadow_mode, ctx, this_val, argc, argv);
};
static JSValue directional_light3d_class_set_blend_splits(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&DirectionalLight3D::set_blend_splits, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue directional_light3d_class_is_blend_splits_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&DirectionalLight3D::is_blend_splits_enabled, ctx, this_val, argc, argv);
};
static JSValue directional_light3d_class_set_sky_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&DirectionalLight3D::set_sky_mode, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue directional_light3d_class_get_sky_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&DirectionalLight3D::get_sky_mode, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry directional_light3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_shadow_mode", 1, &directional_light3d_class_set_shadow_mode),
	JS_CFUNC_DEF("get_shadow_mode", 0, &directional_light3d_class_get_shadow_mode),
	JS_CFUNC_DEF("set_blend_splits", 1, &directional_light3d_class_set_blend_splits),
	JS_CFUNC_DEF("is_blend_splits_enabled", 0, &directional_light3d_class_is_blend_splits_enabled),
	JS_CFUNC_DEF("set_sky_mode", 1, &directional_light3d_class_set_sky_mode),
	JS_CFUNC_DEF("get_sky_mode", 0, &directional_light3d_class_get_sky_mode),
};

void define_directional_light3d_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "directional_shadow_mode"),
        JS_NewCFunction(ctx, directional_light3d_class_get_shadow_mode, "get_shadow_mode", 0),
        JS_NewCFunction(ctx, directional_light3d_class_set_shadow_mode, "set_shadow_mode", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "directional_shadow_blend_splits"),
        JS_NewCFunction(ctx, directional_light3d_class_is_blend_splits_enabled, "is_blend_splits_enabled", 0),
        JS_NewCFunction(ctx, directional_light3d_class_set_blend_splits, "set_blend_splits", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "sky_mode"),
        JS_NewCFunction(ctx, directional_light3d_class_get_sky_mode, "get_sky_mode", 0),
        JS_NewCFunction(ctx, directional_light3d_class_set_sky_mode, "set_sky_mode", 1),
        JS_PROP_GETSET
    );
}

static int js_directional_light3d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&DirectionalLight3D::__class_id);
	classes["DirectionalLight3D"] = DirectionalLight3D::__class_id;
	class_id_list.insert(DirectionalLight3D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), DirectionalLight3D::__class_id, &directional_light3d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, DirectionalLight3D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Light3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, DirectionalLight3D::__class_id, proto);

	define_directional_light3d_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, directional_light3d_class_proto_funcs, _countof(directional_light3d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, directional_light3d_class_constructor, "DirectionalLight3D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "DirectionalLight3D", ctor);

	return 0;
}

JSModuleDef *_js_init_directional_light3d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/light3d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_directional_light3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "DirectionalLight3D");
	return m;
}

JSModuleDef *js_init_directional_light3d_module(JSContext *ctx) {
	return _js_init_directional_light3d_module(ctx, "godot/classes/directional_light3d");
}

void register_directional_light3d() {
	DirectionalLight3D::__init_js_class_id();
	js_init_directional_light3d_module(ctx);
}