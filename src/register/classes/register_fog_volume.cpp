
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/fog_volume.hpp>
#include <godot_cpp/classes/visual_instance3d.hpp>
#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void fog_volume_class_finalizer(JSRuntime *rt, JSValue val) {
	FogVolume *fog_volume = static_cast<FogVolume *>(JS_GetOpaque(val, FogVolume::__class_id));
	if (fog_volume)
		FogVolume::free(nullptr, fog_volume);
}

static JSClassDef fog_volume_class_def = {
	"FogVolume",
	.finalizer = fog_volume_class_finalizer
};

static JSValue fog_volume_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	FogVolume *fog_volume_class;
	JSValue obj = JS_NewObjectClass(ctx, FogVolume::__class_id);
	if (JS_IsException(obj))
		return obj;
	fog_volume_class = memnew(FogVolume);
	if (!fog_volume_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, fog_volume_class);
	return obj;
}
static JSValue fog_volume_class_set_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&FogVolume::set_size, FogVolume::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue fog_volume_class_get_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FogVolume::get_size, FogVolume::__class_id, ctx, this_val, argv);
};
static JSValue fog_volume_class_set_shape(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&FogVolume::set_shape, FogVolume::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue fog_volume_class_get_shape(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FogVolume::get_shape, FogVolume::__class_id, ctx, this_val, argv);
};
static JSValue fog_volume_class_set_material(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&FogVolume::set_material, FogVolume::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue fog_volume_class_get_material(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FogVolume::get_material, FogVolume::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry fog_volume_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_size", 1, &fog_volume_class_set_size),
	JS_CFUNC_DEF("get_size", 0, &fog_volume_class_get_size),
	JS_CFUNC_DEF("set_shape", 1, &fog_volume_class_set_shape),
	JS_CFUNC_DEF("get_shape", 0, &fog_volume_class_get_shape),
	JS_CFUNC_DEF("set_material", 1, &fog_volume_class_set_material),
	JS_CFUNC_DEF("get_material", 0, &fog_volume_class_get_material),
};

static int js_fog_volume_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&FogVolume::__class_id);
	classes["FogVolume"] = FogVolume::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), FogVolume::__class_id, &fog_volume_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, VisualInstance3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, FogVolume::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, fog_volume_class_proto_funcs, _countof(fog_volume_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, fog_volume_class_constructor, "FogVolume", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "FogVolume", ctor);

	return 0;
}

JSModuleDef *_js_init_fog_volume_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_fog_volume_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "FogVolume");
	return m;
}

JSModuleDef *js_init_fog_volume_module(JSContext *ctx) {
	return _js_init_fog_volume_module(ctx, "godot/classes/fog_volume");
}

void register_fog_volume() {
	js_init_fog_volume_module(ctx);
}