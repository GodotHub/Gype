
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/open_xr_composition_layer.hpp>
#include <godot_cpp/classes/open_xr_composition_layer_cylinder.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void open_xr_composition_layer_cylinder_class_finalizer(JSRuntime *rt, JSValue val) {
	OpenXRCompositionLayerCylinder *open_xr_composition_layer_cylinder = static_cast<OpenXRCompositionLayerCylinder *>(JS_GetOpaque(val, OpenXRCompositionLayerCylinder::__class_id));
	if (open_xr_composition_layer_cylinder)
		OpenXRCompositionLayerCylinder::free(nullptr, open_xr_composition_layer_cylinder);
}

static JSClassDef open_xr_composition_layer_cylinder_class_def = {
	"OpenXRCompositionLayerCylinder",
	.finalizer = open_xr_composition_layer_cylinder_class_finalizer
};

static JSValue open_xr_composition_layer_cylinder_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	OpenXRCompositionLayerCylinder *open_xr_composition_layer_cylinder_class;
	JSValue obj = JS_NewObjectClass(ctx, OpenXRCompositionLayerCylinder::__class_id);
	if (JS_IsException(obj))
		return obj;
	open_xr_composition_layer_cylinder_class = memnew(OpenXRCompositionLayerCylinder);
	if (!open_xr_composition_layer_cylinder_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, open_xr_composition_layer_cylinder_class);
	return obj;
}
static JSValue open_xr_composition_layer_cylinder_class_set_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&OpenXRCompositionLayerCylinder::set_radius, OpenXRCompositionLayerCylinder::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue open_xr_composition_layer_cylinder_class_get_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&OpenXRCompositionLayerCylinder::get_radius, OpenXRCompositionLayerCylinder::__class_id, ctx, this_val, argv);
};
static JSValue open_xr_composition_layer_cylinder_class_set_aspect_ratio(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&OpenXRCompositionLayerCylinder::set_aspect_ratio, OpenXRCompositionLayerCylinder::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue open_xr_composition_layer_cylinder_class_get_aspect_ratio(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&OpenXRCompositionLayerCylinder::get_aspect_ratio, OpenXRCompositionLayerCylinder::__class_id, ctx, this_val, argv);
};
static JSValue open_xr_composition_layer_cylinder_class_set_central_angle(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&OpenXRCompositionLayerCylinder::set_central_angle, OpenXRCompositionLayerCylinder::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue open_xr_composition_layer_cylinder_class_get_central_angle(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&OpenXRCompositionLayerCylinder::get_central_angle, OpenXRCompositionLayerCylinder::__class_id, ctx, this_val, argv);
};
static JSValue open_xr_composition_layer_cylinder_class_set_fallback_segments(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&OpenXRCompositionLayerCylinder::set_fallback_segments, OpenXRCompositionLayerCylinder::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue open_xr_composition_layer_cylinder_class_get_fallback_segments(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&OpenXRCompositionLayerCylinder::get_fallback_segments, OpenXRCompositionLayerCylinder::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry open_xr_composition_layer_cylinder_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_radius", 1, &open_xr_composition_layer_cylinder_class_set_radius),
	JS_CFUNC_DEF("get_radius", 0, &open_xr_composition_layer_cylinder_class_get_radius),
	JS_CFUNC_DEF("set_aspect_ratio", 1, &open_xr_composition_layer_cylinder_class_set_aspect_ratio),
	JS_CFUNC_DEF("get_aspect_ratio", 0, &open_xr_composition_layer_cylinder_class_get_aspect_ratio),
	JS_CFUNC_DEF("set_central_angle", 1, &open_xr_composition_layer_cylinder_class_set_central_angle),
	JS_CFUNC_DEF("get_central_angle", 0, &open_xr_composition_layer_cylinder_class_get_central_angle),
	JS_CFUNC_DEF("set_fallback_segments", 1, &open_xr_composition_layer_cylinder_class_set_fallback_segments),
	JS_CFUNC_DEF("get_fallback_segments", 0, &open_xr_composition_layer_cylinder_class_get_fallback_segments),
};

static int js_open_xr_composition_layer_cylinder_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&OpenXRCompositionLayerCylinder::__class_id);
	classes["OpenXRCompositionLayerCylinder"] = OpenXRCompositionLayerCylinder::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), OpenXRCompositionLayerCylinder::__class_id, &open_xr_composition_layer_cylinder_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, OpenXRCompositionLayer::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, OpenXRCompositionLayerCylinder::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, open_xr_composition_layer_cylinder_class_proto_funcs, _countof(open_xr_composition_layer_cylinder_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, open_xr_composition_layer_cylinder_class_constructor, "OpenXRCompositionLayerCylinder", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "OpenXRCompositionLayerCylinder", ctor);

	return 0;
}

JSModuleDef *_js_init_open_xr_composition_layer_cylinder_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_open_xr_composition_layer_cylinder_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "OpenXRCompositionLayerCylinder");
	return m;
}

JSModuleDef *js_init_open_xr_composition_layer_cylinder_module(JSContext *ctx) {
	return _js_init_open_xr_composition_layer_cylinder_module(ctx, "godot/classes/open_xr_composition_layer_cylinder");
}

void register_open_xr_composition_layer_cylinder() {
	js_init_open_xr_composition_layer_cylinder_module(ctx);
}