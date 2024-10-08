
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/sky.hpp>
#include <godot_cpp/classes/material.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void sky_class_finalizer(JSRuntime *rt, JSValue val) {
	Sky *sky = static_cast<Sky *>(JS_GetOpaque(val, Sky::__class_id));
	if (sky)
		Sky::free(nullptr, sky);
}

static JSClassDef sky_class_def = {
	"Sky",
	.finalizer = sky_class_finalizer
};

static JSValue sky_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	Sky *sky_class;
	JSValue obj = JS_NewObjectClass(ctx, Sky::__class_id);
	if (JS_IsException(obj))
		return obj;
	sky_class = memnew(Sky);
	if (!sky_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, sky_class);
	return obj;
}
static JSValue sky_class_set_radiance_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Sky::set_radiance_size, Sky::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue sky_class_get_radiance_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Sky::get_radiance_size, Sky::__class_id, ctx, this_val, argv);
};
static JSValue sky_class_set_process_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Sky::set_process_mode, Sky::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue sky_class_get_process_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Sky::get_process_mode, Sky::__class_id, ctx, this_val, argv);
};
static JSValue sky_class_set_material(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Sky::set_material, Sky::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue sky_class_get_material(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Sky::get_material, Sky::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry sky_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_radiance_size", 1, &sky_class_set_radiance_size),
	JS_CFUNC_DEF("get_radiance_size", 0, &sky_class_get_radiance_size),
	JS_CFUNC_DEF("set_process_mode", 1, &sky_class_set_process_mode),
	JS_CFUNC_DEF("get_process_mode", 0, &sky_class_get_process_mode),
	JS_CFUNC_DEF("set_material", 1, &sky_class_set_material),
	JS_CFUNC_DEF("get_material", 0, &sky_class_get_material),
};

static int js_sky_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&Sky::__class_id);
	classes["Sky"] = Sky::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), Sky::__class_id, &sky_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Sky::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, sky_class_proto_funcs, _countof(sky_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, sky_class_constructor, "Sky", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "Sky", ctor);

	return 0;
}

JSModuleDef *_js_init_sky_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_sky_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Sky");
	return m;
}

JSModuleDef *js_init_sky_module(JSContext *ctx) {
	return _js_init_sky_module(ctx, "godot/classes/sky");
}

void register_sky() {
	js_init_sky_module(ctx);
}