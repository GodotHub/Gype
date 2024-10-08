
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/open_xr_composition_layer.hpp>
#include <godot_cpp/classes/open_xr_composition_layer_quad.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void open_xr_composition_layer_quad_class_finalizer(JSRuntime *rt, JSValue val) {
	OpenXRCompositionLayerQuad *open_xr_composition_layer_quad = static_cast<OpenXRCompositionLayerQuad *>(JS_GetOpaque(val, OpenXRCompositionLayerQuad::__class_id));
	if (open_xr_composition_layer_quad)
		OpenXRCompositionLayerQuad::free(nullptr, open_xr_composition_layer_quad);
}

static JSClassDef open_xr_composition_layer_quad_class_def = {
	"OpenXRCompositionLayerQuad",
	.finalizer = open_xr_composition_layer_quad_class_finalizer
};

static JSValue open_xr_composition_layer_quad_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	OpenXRCompositionLayerQuad *open_xr_composition_layer_quad_class;
	JSValue obj = JS_NewObjectClass(ctx, OpenXRCompositionLayerQuad::__class_id);
	if (JS_IsException(obj))
		return obj;
	open_xr_composition_layer_quad_class = memnew(OpenXRCompositionLayerQuad);
	if (!open_xr_composition_layer_quad_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, open_xr_composition_layer_quad_class);
	return obj;
}
static JSValue open_xr_composition_layer_quad_class_set_quad_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&OpenXRCompositionLayerQuad::set_quad_size, OpenXRCompositionLayerQuad::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue open_xr_composition_layer_quad_class_get_quad_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&OpenXRCompositionLayerQuad::get_quad_size, OpenXRCompositionLayerQuad::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry open_xr_composition_layer_quad_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_quad_size", 1, &open_xr_composition_layer_quad_class_set_quad_size),
	JS_CFUNC_DEF("get_quad_size", 0, &open_xr_composition_layer_quad_class_get_quad_size),
};

static int js_open_xr_composition_layer_quad_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&OpenXRCompositionLayerQuad::__class_id);
	classes["OpenXRCompositionLayerQuad"] = OpenXRCompositionLayerQuad::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), OpenXRCompositionLayerQuad::__class_id, &open_xr_composition_layer_quad_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, OpenXRCompositionLayer::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, OpenXRCompositionLayerQuad::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, open_xr_composition_layer_quad_class_proto_funcs, _countof(open_xr_composition_layer_quad_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, open_xr_composition_layer_quad_class_constructor, "OpenXRCompositionLayerQuad", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "OpenXRCompositionLayerQuad", ctor);

	return 0;
}

JSModuleDef *_js_init_open_xr_composition_layer_quad_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_open_xr_composition_layer_quad_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "OpenXRCompositionLayerQuad");
	return m;
}

JSModuleDef *js_init_open_xr_composition_layer_quad_module(JSContext *ctx) {
	return _js_init_open_xr_composition_layer_quad_module(ctx, "godot/classes/open_xr_composition_layer_quad");
}

void register_open_xr_composition_layer_quad() {
	js_init_open_xr_composition_layer_quad_module(ctx);
}