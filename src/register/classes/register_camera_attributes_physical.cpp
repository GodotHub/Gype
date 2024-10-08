
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/camera_attributes.hpp>
#include <godot_cpp/classes/camera_attributes_physical.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void camera_attributes_physical_class_finalizer(JSRuntime *rt, JSValue val) {
	CameraAttributesPhysical *camera_attributes_physical = static_cast<CameraAttributesPhysical *>(JS_GetOpaque(val, CameraAttributesPhysical::__class_id));
	if (camera_attributes_physical)
		CameraAttributesPhysical::free(nullptr, camera_attributes_physical);
}

static JSClassDef camera_attributes_physical_class_def = {
	"CameraAttributesPhysical",
	.finalizer = camera_attributes_physical_class_finalizer
};

static JSValue camera_attributes_physical_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	CameraAttributesPhysical *camera_attributes_physical_class;
	JSValue obj = JS_NewObjectClass(ctx, CameraAttributesPhysical::__class_id);
	if (JS_IsException(obj))
		return obj;
	camera_attributes_physical_class = memnew(CameraAttributesPhysical);
	if (!camera_attributes_physical_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, camera_attributes_physical_class);
	return obj;
}
static JSValue camera_attributes_physical_class_set_aperture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CameraAttributesPhysical::set_aperture, CameraAttributesPhysical::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue camera_attributes_physical_class_get_aperture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CameraAttributesPhysical::get_aperture, CameraAttributesPhysical::__class_id, ctx, this_val, argv);
};
static JSValue camera_attributes_physical_class_set_shutter_speed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CameraAttributesPhysical::set_shutter_speed, CameraAttributesPhysical::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue camera_attributes_physical_class_get_shutter_speed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CameraAttributesPhysical::get_shutter_speed, CameraAttributesPhysical::__class_id, ctx, this_val, argv);
};
static JSValue camera_attributes_physical_class_set_focal_length(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CameraAttributesPhysical::set_focal_length, CameraAttributesPhysical::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue camera_attributes_physical_class_get_focal_length(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CameraAttributesPhysical::get_focal_length, CameraAttributesPhysical::__class_id, ctx, this_val, argv);
};
static JSValue camera_attributes_physical_class_set_focus_distance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CameraAttributesPhysical::set_focus_distance, CameraAttributesPhysical::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue camera_attributes_physical_class_get_focus_distance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CameraAttributesPhysical::get_focus_distance, CameraAttributesPhysical::__class_id, ctx, this_val, argv);
};
static JSValue camera_attributes_physical_class_set_near(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CameraAttributesPhysical::set_near, CameraAttributesPhysical::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue camera_attributes_physical_class_get_near(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CameraAttributesPhysical::get_near, CameraAttributesPhysical::__class_id, ctx, this_val, argv);
};
static JSValue camera_attributes_physical_class_set_far(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CameraAttributesPhysical::set_far, CameraAttributesPhysical::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue camera_attributes_physical_class_get_far(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CameraAttributesPhysical::get_far, CameraAttributesPhysical::__class_id, ctx, this_val, argv);
};
static JSValue camera_attributes_physical_class_get_fov(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CameraAttributesPhysical::get_fov, CameraAttributesPhysical::__class_id, ctx, this_val, argv);
};
static JSValue camera_attributes_physical_class_set_auto_exposure_max_exposure_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CameraAttributesPhysical::set_auto_exposure_max_exposure_value, CameraAttributesPhysical::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue camera_attributes_physical_class_get_auto_exposure_max_exposure_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CameraAttributesPhysical::get_auto_exposure_max_exposure_value, CameraAttributesPhysical::__class_id, ctx, this_val, argv);
};
static JSValue camera_attributes_physical_class_set_auto_exposure_min_exposure_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CameraAttributesPhysical::set_auto_exposure_min_exposure_value, CameraAttributesPhysical::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue camera_attributes_physical_class_get_auto_exposure_min_exposure_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CameraAttributesPhysical::get_auto_exposure_min_exposure_value, CameraAttributesPhysical::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry camera_attributes_physical_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_aperture", 1, &camera_attributes_physical_class_set_aperture),
	JS_CFUNC_DEF("get_aperture", 0, &camera_attributes_physical_class_get_aperture),
	JS_CFUNC_DEF("set_shutter_speed", 1, &camera_attributes_physical_class_set_shutter_speed),
	JS_CFUNC_DEF("get_shutter_speed", 0, &camera_attributes_physical_class_get_shutter_speed),
	JS_CFUNC_DEF("set_focal_length", 1, &camera_attributes_physical_class_set_focal_length),
	JS_CFUNC_DEF("get_focal_length", 0, &camera_attributes_physical_class_get_focal_length),
	JS_CFUNC_DEF("set_focus_distance", 1, &camera_attributes_physical_class_set_focus_distance),
	JS_CFUNC_DEF("get_focus_distance", 0, &camera_attributes_physical_class_get_focus_distance),
	JS_CFUNC_DEF("set_near", 1, &camera_attributes_physical_class_set_near),
	JS_CFUNC_DEF("get_near", 0, &camera_attributes_physical_class_get_near),
	JS_CFUNC_DEF("set_far", 1, &camera_attributes_physical_class_set_far),
	JS_CFUNC_DEF("get_far", 0, &camera_attributes_physical_class_get_far),
	JS_CFUNC_DEF("get_fov", 0, &camera_attributes_physical_class_get_fov),
	JS_CFUNC_DEF("set_auto_exposure_max_exposure_value", 1, &camera_attributes_physical_class_set_auto_exposure_max_exposure_value),
	JS_CFUNC_DEF("get_auto_exposure_max_exposure_value", 0, &camera_attributes_physical_class_get_auto_exposure_max_exposure_value),
	JS_CFUNC_DEF("set_auto_exposure_min_exposure_value", 1, &camera_attributes_physical_class_set_auto_exposure_min_exposure_value),
	JS_CFUNC_DEF("get_auto_exposure_min_exposure_value", 0, &camera_attributes_physical_class_get_auto_exposure_min_exposure_value),
};

static int js_camera_attributes_physical_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&CameraAttributesPhysical::__class_id);
	classes["CameraAttributesPhysical"] = CameraAttributesPhysical::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), CameraAttributesPhysical::__class_id, &camera_attributes_physical_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, CameraAttributes::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, CameraAttributesPhysical::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, camera_attributes_physical_class_proto_funcs, _countof(camera_attributes_physical_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, camera_attributes_physical_class_constructor, "CameraAttributesPhysical", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "CameraAttributesPhysical", ctor);

	return 0;
}

JSModuleDef *_js_init_camera_attributes_physical_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_camera_attributes_physical_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "CameraAttributesPhysical");
	return m;
}

JSModuleDef *js_init_camera_attributes_physical_module(JSContext *ctx) {
	return _js_init_camera_attributes_physical_module(ctx, "godot/classes/camera_attributes_physical");
}

void register_camera_attributes_physical() {
	js_init_camera_attributes_physical_module(ctx);
}