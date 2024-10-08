
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/open_xr_composition_layer.hpp>
#include <godot_cpp/classes/open_xr_composition_layer_equirect.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void open_xr_composition_layer_equirect_class_finalizer(JSRuntime *rt, JSValue val) {
	OpenXRCompositionLayerEquirect *open_xr_composition_layer_equirect = static_cast<OpenXRCompositionLayerEquirect *>(JS_GetOpaque(val, OpenXRCompositionLayerEquirect::__class_id));
	if (open_xr_composition_layer_equirect)
		OpenXRCompositionLayerEquirect::free(nullptr, open_xr_composition_layer_equirect);
}

static JSClassDef open_xr_composition_layer_equirect_class_def = {
	"OpenXRCompositionLayerEquirect",
	.finalizer = open_xr_composition_layer_equirect_class_finalizer
};

static JSValue open_xr_composition_layer_equirect_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	OpenXRCompositionLayerEquirect *open_xr_composition_layer_equirect_class;
	JSValue obj = JS_NewObjectClass(ctx, OpenXRCompositionLayerEquirect::__class_id);
	if (JS_IsException(obj))
		return obj;
	open_xr_composition_layer_equirect_class = memnew(OpenXRCompositionLayerEquirect);
	if (!open_xr_composition_layer_equirect_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, open_xr_composition_layer_equirect_class);
	return obj;
}
static JSValue open_xr_composition_layer_equirect_class_set_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&OpenXRCompositionLayerEquirect::set_radius, OpenXRCompositionLayerEquirect::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue open_xr_composition_layer_equirect_class_get_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&OpenXRCompositionLayerEquirect::get_radius, OpenXRCompositionLayerEquirect::__class_id, ctx, this_val, argv);
};
static JSValue open_xr_composition_layer_equirect_class_set_central_horizontal_angle(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&OpenXRCompositionLayerEquirect::set_central_horizontal_angle, OpenXRCompositionLayerEquirect::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue open_xr_composition_layer_equirect_class_get_central_horizontal_angle(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&OpenXRCompositionLayerEquirect::get_central_horizontal_angle, OpenXRCompositionLayerEquirect::__class_id, ctx, this_val, argv);
};
static JSValue open_xr_composition_layer_equirect_class_set_upper_vertical_angle(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&OpenXRCompositionLayerEquirect::set_upper_vertical_angle, OpenXRCompositionLayerEquirect::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue open_xr_composition_layer_equirect_class_get_upper_vertical_angle(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&OpenXRCompositionLayerEquirect::get_upper_vertical_angle, OpenXRCompositionLayerEquirect::__class_id, ctx, this_val, argv);
};
static JSValue open_xr_composition_layer_equirect_class_set_lower_vertical_angle(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&OpenXRCompositionLayerEquirect::set_lower_vertical_angle, OpenXRCompositionLayerEquirect::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue open_xr_composition_layer_equirect_class_get_lower_vertical_angle(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&OpenXRCompositionLayerEquirect::get_lower_vertical_angle, OpenXRCompositionLayerEquirect::__class_id, ctx, this_val, argv);
};
static JSValue open_xr_composition_layer_equirect_class_set_fallback_segments(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&OpenXRCompositionLayerEquirect::set_fallback_segments, OpenXRCompositionLayerEquirect::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue open_xr_composition_layer_equirect_class_get_fallback_segments(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&OpenXRCompositionLayerEquirect::get_fallback_segments, OpenXRCompositionLayerEquirect::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry open_xr_composition_layer_equirect_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_radius", 1, &open_xr_composition_layer_equirect_class_set_radius),
	JS_CFUNC_DEF("get_radius", 0, &open_xr_composition_layer_equirect_class_get_radius),
	JS_CFUNC_DEF("set_central_horizontal_angle", 1, &open_xr_composition_layer_equirect_class_set_central_horizontal_angle),
	JS_CFUNC_DEF("get_central_horizontal_angle", 0, &open_xr_composition_layer_equirect_class_get_central_horizontal_angle),
	JS_CFUNC_DEF("set_upper_vertical_angle", 1, &open_xr_composition_layer_equirect_class_set_upper_vertical_angle),
	JS_CFUNC_DEF("get_upper_vertical_angle", 0, &open_xr_composition_layer_equirect_class_get_upper_vertical_angle),
	JS_CFUNC_DEF("set_lower_vertical_angle", 1, &open_xr_composition_layer_equirect_class_set_lower_vertical_angle),
	JS_CFUNC_DEF("get_lower_vertical_angle", 0, &open_xr_composition_layer_equirect_class_get_lower_vertical_angle),
	JS_CFUNC_DEF("set_fallback_segments", 1, &open_xr_composition_layer_equirect_class_set_fallback_segments),
	JS_CFUNC_DEF("get_fallback_segments", 0, &open_xr_composition_layer_equirect_class_get_fallback_segments),
};

static int js_open_xr_composition_layer_equirect_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&OpenXRCompositionLayerEquirect::__class_id);
	classes["OpenXRCompositionLayerEquirect"] = OpenXRCompositionLayerEquirect::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), OpenXRCompositionLayerEquirect::__class_id, &open_xr_composition_layer_equirect_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, OpenXRCompositionLayer::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, OpenXRCompositionLayerEquirect::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, open_xr_composition_layer_equirect_class_proto_funcs, _countof(open_xr_composition_layer_equirect_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, open_xr_composition_layer_equirect_class_constructor, "OpenXRCompositionLayerEquirect", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "OpenXRCompositionLayerEquirect", ctor);

	return 0;
}

JSModuleDef *_js_init_open_xr_composition_layer_equirect_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_open_xr_composition_layer_equirect_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "OpenXRCompositionLayerEquirect");
	return m;
}

JSModuleDef *js_init_open_xr_composition_layer_equirect_module(JSContext *ctx) {
	return _js_init_open_xr_composition_layer_equirect_module(ctx, "godot/classes/open_xr_composition_layer_equirect");
}

void register_open_xr_composition_layer_equirect() {
	js_init_open_xr_composition_layer_equirect_module(ctx);
}