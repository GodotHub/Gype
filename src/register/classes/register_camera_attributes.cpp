
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/camera_attributes.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void camera_attributes_class_finalizer(JSRuntime *rt, JSValue val) {
	CameraAttributes *camera_attributes = static_cast<CameraAttributes *>(JS_GetOpaque(val, CameraAttributes::__class_id));
	if (camera_attributes)
		CameraAttributes::free(nullptr, camera_attributes);
}

static JSClassDef camera_attributes_class_def = {
	"CameraAttributes",
	.finalizer = camera_attributes_class_finalizer
};

static JSValue camera_attributes_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	CameraAttributes *camera_attributes_class;
	JSValue obj = JS_NewObjectClass(ctx, CameraAttributes::__class_id);
	if (JS_IsException(obj))
		return obj;
	camera_attributes_class = memnew(CameraAttributes);
	if (!camera_attributes_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, camera_attributes_class);
	return obj;
}
static JSValue camera_attributes_class_set_exposure_multiplier(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CameraAttributes::set_exposure_multiplier, CameraAttributes::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue camera_attributes_class_get_exposure_multiplier(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CameraAttributes::get_exposure_multiplier, CameraAttributes::__class_id, ctx, this_val, argv);
};
static JSValue camera_attributes_class_set_exposure_sensitivity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CameraAttributes::set_exposure_sensitivity, CameraAttributes::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue camera_attributes_class_get_exposure_sensitivity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CameraAttributes::get_exposure_sensitivity, CameraAttributes::__class_id, ctx, this_val, argv);
};
static JSValue camera_attributes_class_set_auto_exposure_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CameraAttributes::set_auto_exposure_enabled, CameraAttributes::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue camera_attributes_class_is_auto_exposure_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CameraAttributes::is_auto_exposure_enabled, CameraAttributes::__class_id, ctx, this_val, argv);
};
static JSValue camera_attributes_class_set_auto_exposure_speed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CameraAttributes::set_auto_exposure_speed, CameraAttributes::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue camera_attributes_class_get_auto_exposure_speed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CameraAttributes::get_auto_exposure_speed, CameraAttributes::__class_id, ctx, this_val, argv);
};
static JSValue camera_attributes_class_set_auto_exposure_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CameraAttributes::set_auto_exposure_scale, CameraAttributes::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue camera_attributes_class_get_auto_exposure_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CameraAttributes::get_auto_exposure_scale, CameraAttributes::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry camera_attributes_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_exposure_multiplier", 1, &camera_attributes_class_set_exposure_multiplier),
	JS_CFUNC_DEF("get_exposure_multiplier", 0, &camera_attributes_class_get_exposure_multiplier),
	JS_CFUNC_DEF("set_exposure_sensitivity", 1, &camera_attributes_class_set_exposure_sensitivity),
	JS_CFUNC_DEF("get_exposure_sensitivity", 0, &camera_attributes_class_get_exposure_sensitivity),
	JS_CFUNC_DEF("set_auto_exposure_enabled", 1, &camera_attributes_class_set_auto_exposure_enabled),
	JS_CFUNC_DEF("is_auto_exposure_enabled", 0, &camera_attributes_class_is_auto_exposure_enabled),
	JS_CFUNC_DEF("set_auto_exposure_speed", 1, &camera_attributes_class_set_auto_exposure_speed),
	JS_CFUNC_DEF("get_auto_exposure_speed", 0, &camera_attributes_class_get_auto_exposure_speed),
	JS_CFUNC_DEF("set_auto_exposure_scale", 1, &camera_attributes_class_set_auto_exposure_scale),
	JS_CFUNC_DEF("get_auto_exposure_scale", 0, &camera_attributes_class_get_auto_exposure_scale),
};

static int js_camera_attributes_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&CameraAttributes::__class_id);
	classes["CameraAttributes"] = CameraAttributes::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), CameraAttributes::__class_id, &camera_attributes_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, CameraAttributes::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, camera_attributes_class_proto_funcs, _countof(camera_attributes_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, camera_attributes_class_constructor, "CameraAttributes", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "CameraAttributes", ctor);

	return 0;
}

JSModuleDef *_js_init_camera_attributes_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_camera_attributes_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "CameraAttributes");
	return m;
}

JSModuleDef *js_init_camera_attributes_module(JSContext *ctx) {
	return _js_init_camera_attributes_module(ctx, "godot/classes/camera_attributes");
}

void register_camera_attributes() {
	js_init_camera_attributes_module(ctx);
}