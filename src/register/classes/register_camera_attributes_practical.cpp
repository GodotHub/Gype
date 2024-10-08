
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/camera_attributes.hpp>
#include <godot_cpp/classes/camera_attributes_practical.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void camera_attributes_practical_class_finalizer(JSRuntime *rt, JSValue val) {
	CameraAttributesPractical *camera_attributes_practical = static_cast<CameraAttributesPractical *>(JS_GetOpaque(val, CameraAttributesPractical::__class_id));
	if (camera_attributes_practical)
		CameraAttributesPractical::free(nullptr, camera_attributes_practical);
}

static JSClassDef camera_attributes_practical_class_def = {
	"CameraAttributesPractical",
	.finalizer = camera_attributes_practical_class_finalizer
};

static JSValue camera_attributes_practical_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	CameraAttributesPractical *camera_attributes_practical_class;
	JSValue obj = JS_NewObjectClass(ctx, CameraAttributesPractical::__class_id);
	if (JS_IsException(obj))
		return obj;
	camera_attributes_practical_class = memnew(CameraAttributesPractical);
	if (!camera_attributes_practical_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, camera_attributes_practical_class);
	return obj;
}
static JSValue camera_attributes_practical_class_set_dof_blur_far_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CameraAttributesPractical::set_dof_blur_far_enabled, CameraAttributesPractical::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue camera_attributes_practical_class_is_dof_blur_far_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CameraAttributesPractical::is_dof_blur_far_enabled, CameraAttributesPractical::__class_id, ctx, this_val, argv);
};
static JSValue camera_attributes_practical_class_set_dof_blur_far_distance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CameraAttributesPractical::set_dof_blur_far_distance, CameraAttributesPractical::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue camera_attributes_practical_class_get_dof_blur_far_distance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CameraAttributesPractical::get_dof_blur_far_distance, CameraAttributesPractical::__class_id, ctx, this_val, argv);
};
static JSValue camera_attributes_practical_class_set_dof_blur_far_transition(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CameraAttributesPractical::set_dof_blur_far_transition, CameraAttributesPractical::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue camera_attributes_practical_class_get_dof_blur_far_transition(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CameraAttributesPractical::get_dof_blur_far_transition, CameraAttributesPractical::__class_id, ctx, this_val, argv);
};
static JSValue camera_attributes_practical_class_set_dof_blur_near_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CameraAttributesPractical::set_dof_blur_near_enabled, CameraAttributesPractical::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue camera_attributes_practical_class_is_dof_blur_near_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CameraAttributesPractical::is_dof_blur_near_enabled, CameraAttributesPractical::__class_id, ctx, this_val, argv);
};
static JSValue camera_attributes_practical_class_set_dof_blur_near_distance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CameraAttributesPractical::set_dof_blur_near_distance, CameraAttributesPractical::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue camera_attributes_practical_class_get_dof_blur_near_distance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CameraAttributesPractical::get_dof_blur_near_distance, CameraAttributesPractical::__class_id, ctx, this_val, argv);
};
static JSValue camera_attributes_practical_class_set_dof_blur_near_transition(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CameraAttributesPractical::set_dof_blur_near_transition, CameraAttributesPractical::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue camera_attributes_practical_class_get_dof_blur_near_transition(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CameraAttributesPractical::get_dof_blur_near_transition, CameraAttributesPractical::__class_id, ctx, this_val, argv);
};
static JSValue camera_attributes_practical_class_set_dof_blur_amount(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CameraAttributesPractical::set_dof_blur_amount, CameraAttributesPractical::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue camera_attributes_practical_class_get_dof_blur_amount(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CameraAttributesPractical::get_dof_blur_amount, CameraAttributesPractical::__class_id, ctx, this_val, argv);
};
static JSValue camera_attributes_practical_class_set_auto_exposure_max_sensitivity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CameraAttributesPractical::set_auto_exposure_max_sensitivity, CameraAttributesPractical::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue camera_attributes_practical_class_get_auto_exposure_max_sensitivity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CameraAttributesPractical::get_auto_exposure_max_sensitivity, CameraAttributesPractical::__class_id, ctx, this_val, argv);
};
static JSValue camera_attributes_practical_class_set_auto_exposure_min_sensitivity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CameraAttributesPractical::set_auto_exposure_min_sensitivity, CameraAttributesPractical::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue camera_attributes_practical_class_get_auto_exposure_min_sensitivity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CameraAttributesPractical::get_auto_exposure_min_sensitivity, CameraAttributesPractical::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry camera_attributes_practical_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_dof_blur_far_enabled", 1, &camera_attributes_practical_class_set_dof_blur_far_enabled),
	JS_CFUNC_DEF("is_dof_blur_far_enabled", 0, &camera_attributes_practical_class_is_dof_blur_far_enabled),
	JS_CFUNC_DEF("set_dof_blur_far_distance", 1, &camera_attributes_practical_class_set_dof_blur_far_distance),
	JS_CFUNC_DEF("get_dof_blur_far_distance", 0, &camera_attributes_practical_class_get_dof_blur_far_distance),
	JS_CFUNC_DEF("set_dof_blur_far_transition", 1, &camera_attributes_practical_class_set_dof_blur_far_transition),
	JS_CFUNC_DEF("get_dof_blur_far_transition", 0, &camera_attributes_practical_class_get_dof_blur_far_transition),
	JS_CFUNC_DEF("set_dof_blur_near_enabled", 1, &camera_attributes_practical_class_set_dof_blur_near_enabled),
	JS_CFUNC_DEF("is_dof_blur_near_enabled", 0, &camera_attributes_practical_class_is_dof_blur_near_enabled),
	JS_CFUNC_DEF("set_dof_blur_near_distance", 1, &camera_attributes_practical_class_set_dof_blur_near_distance),
	JS_CFUNC_DEF("get_dof_blur_near_distance", 0, &camera_attributes_practical_class_get_dof_blur_near_distance),
	JS_CFUNC_DEF("set_dof_blur_near_transition", 1, &camera_attributes_practical_class_set_dof_blur_near_transition),
	JS_CFUNC_DEF("get_dof_blur_near_transition", 0, &camera_attributes_practical_class_get_dof_blur_near_transition),
	JS_CFUNC_DEF("set_dof_blur_amount", 1, &camera_attributes_practical_class_set_dof_blur_amount),
	JS_CFUNC_DEF("get_dof_blur_amount", 0, &camera_attributes_practical_class_get_dof_blur_amount),
	JS_CFUNC_DEF("set_auto_exposure_max_sensitivity", 1, &camera_attributes_practical_class_set_auto_exposure_max_sensitivity),
	JS_CFUNC_DEF("get_auto_exposure_max_sensitivity", 0, &camera_attributes_practical_class_get_auto_exposure_max_sensitivity),
	JS_CFUNC_DEF("set_auto_exposure_min_sensitivity", 1, &camera_attributes_practical_class_set_auto_exposure_min_sensitivity),
	JS_CFUNC_DEF("get_auto_exposure_min_sensitivity", 0, &camera_attributes_practical_class_get_auto_exposure_min_sensitivity),
};

static int js_camera_attributes_practical_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&CameraAttributesPractical::__class_id);
	classes["CameraAttributesPractical"] = CameraAttributesPractical::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), CameraAttributesPractical::__class_id, &camera_attributes_practical_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, CameraAttributes::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, CameraAttributesPractical::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, camera_attributes_practical_class_proto_funcs, _countof(camera_attributes_practical_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, camera_attributes_practical_class_constructor, "CameraAttributesPractical", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "CameraAttributesPractical", ctor);

	return 0;
}

JSModuleDef *_js_init_camera_attributes_practical_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_camera_attributes_practical_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "CameraAttributesPractical");
	return m;
}

JSModuleDef *js_init_camera_attributes_practical_module(JSContext *ctx) {
	return _js_init_camera_attributes_practical_module(ctx, "godot/classes/camera_attributes_practical");
}

void register_camera_attributes_practical() {
	js_init_camera_attributes_practical_module(ctx);
}