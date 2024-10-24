
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/open_xr_composition_layer_quad.hpp>
#include <godot_cpp/classes/open_xr_composition_layer.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void open_xr_composition_layer_quad_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef open_xr_composition_layer_quad_class_def = {
	"OpenXRCompositionLayerQuad",
	.finalizer = open_xr_composition_layer_quad_class_finalizer
};

static JSValue open_xr_composition_layer_quad_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, OpenXRCompositionLayerQuad::__class_id);
	if (JS_IsException(obj))
		return obj;
	OpenXRCompositionLayerQuad *open_xr_composition_layer_quad_class = memnew(OpenXRCompositionLayerQuad);
	if (!open_xr_composition_layer_quad_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, open_xr_composition_layer_quad_class);	
	return obj;
}
static JSValue open_xr_composition_layer_quad_class_set_quad_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&OpenXRCompositionLayerQuad::set_quad_size, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue open_xr_composition_layer_quad_class_get_quad_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&OpenXRCompositionLayerQuad::get_quad_size, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry open_xr_composition_layer_quad_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_quad_size", 1, &open_xr_composition_layer_quad_class_set_quad_size),
	JS_CFUNC_DEF("get_quad_size", 0, &open_xr_composition_layer_quad_class_get_quad_size),
};

void define_open_xr_composition_layer_quad_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "quad_size"),
        JS_NewCFunction(ctx, open_xr_composition_layer_quad_class_get_quad_size, "get_quad_size", 0),
        JS_NewCFunction(ctx, open_xr_composition_layer_quad_class_set_quad_size, "set_quad_size", 1),
        JS_PROP_GETSET
    );
}

static int js_open_xr_composition_layer_quad_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&OpenXRCompositionLayerQuad::__class_id);
	classes["OpenXRCompositionLayerQuad"] = OpenXRCompositionLayerQuad::__class_id;
	class_id_list.insert(OpenXRCompositionLayerQuad::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), OpenXRCompositionLayerQuad::__class_id, &open_xr_composition_layer_quad_class_def);

	JSValue proto = JS_NewObjectClass(ctx, OpenXRCompositionLayerQuad::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, OpenXRCompositionLayer::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, OpenXRCompositionLayerQuad::__class_id, proto);

	define_open_xr_composition_layer_quad_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, open_xr_composition_layer_quad_class_proto_funcs, _countof(open_xr_composition_layer_quad_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, open_xr_composition_layer_quad_class_constructor, "OpenXRCompositionLayerQuad", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "OpenXRCompositionLayerQuad", ctor);

	return 0;
}

JSModuleDef *_js_init_open_xr_composition_layer_quad_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/open_xr_composition_layer';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
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
	OpenXRCompositionLayerQuad::__init_js_class_id();
	js_init_open_xr_composition_layer_quad_module(ctx);
}