
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/directional_light3d.hpp>
#include <godot_cpp/classes/light3d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void directional_light3d_class_finalizer(JSRuntime *rt, JSValue val) {
	DirectionalLight3D *directional_light3d = static_cast<DirectionalLight3D *>(JS_GetOpaque(val, DirectionalLight3D::__class_id));
	if (directional_light3d)
		DirectionalLight3D::free(nullptr, directional_light3d);
}

static JSClassDef directional_light3d_class_def = {
	"DirectionalLight3D",
	.finalizer = directional_light3d_class_finalizer
};

static JSValue directional_light3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	DirectionalLight3D *directional_light3d_class;
	JSValue obj = JS_NewObjectClass(ctx, DirectionalLight3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	directional_light3d_class = memnew(DirectionalLight3D);
	if (!directional_light3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, directional_light3d_class);
	return obj;
}
static JSValue directional_light3d_class_set_shadow_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&DirectionalLight3D::set_shadow_mode, DirectionalLight3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue directional_light3d_class_get_shadow_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&DirectionalLight3D::get_shadow_mode, DirectionalLight3D::__class_id, ctx, this_val, argv);
};
static JSValue directional_light3d_class_set_blend_splits(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&DirectionalLight3D::set_blend_splits, DirectionalLight3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue directional_light3d_class_is_blend_splits_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&DirectionalLight3D::is_blend_splits_enabled, DirectionalLight3D::__class_id, ctx, this_val, argv);
};
static JSValue directional_light3d_class_set_sky_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&DirectionalLight3D::set_sky_mode, DirectionalLight3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue directional_light3d_class_get_sky_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&DirectionalLight3D::get_sky_mode, DirectionalLight3D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry directional_light3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_shadow_mode", 1, &directional_light3d_class_set_shadow_mode),
	JS_CFUNC_DEF("get_shadow_mode", 0, &directional_light3d_class_get_shadow_mode),
	JS_CFUNC_DEF("set_blend_splits", 1, &directional_light3d_class_set_blend_splits),
	JS_CFUNC_DEF("is_blend_splits_enabled", 0, &directional_light3d_class_is_blend_splits_enabled),
	JS_CFUNC_DEF("set_sky_mode", 1, &directional_light3d_class_set_sky_mode),
	JS_CFUNC_DEF("get_sky_mode", 0, &directional_light3d_class_get_sky_mode),
};

static int js_directional_light3d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&DirectionalLight3D::__class_id);
	classes["DirectionalLight3D"] = DirectionalLight3D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), DirectionalLight3D::__class_id, &directional_light3d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Light3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, DirectionalLight3D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, directional_light3d_class_proto_funcs, _countof(directional_light3d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, directional_light3d_class_constructor, "DirectionalLight3D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "DirectionalLight3D", ctor);

	return 0;
}

JSModuleDef *_js_init_directional_light3d_module(JSContext *ctx, const char *module_name) {
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
	js_init_directional_light3d_module(ctx);
}