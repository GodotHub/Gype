
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/classes/open_xr_composition_layer.hpp>
#include <godot_cpp/classes/sub_viewport.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void open_xr_composition_layer_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef open_xr_composition_layer_class_def = {
	"OpenXRCompositionLayer",
	.finalizer = open_xr_composition_layer_class_finalizer
};

static JSValue open_xr_composition_layer_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, OpenXRCompositionLayer::__class_id);
	if (JS_IsException(obj))
		return obj;

	OpenXRCompositionLayer *open_xr_composition_layer_class;
	if (argc == 1) 
		open_xr_composition_layer_class = static_cast<OpenXRCompositionLayer *>(Variant(*argv).operator Object *());
	else 
		open_xr_composition_layer_class = memnew(OpenXRCompositionLayer);
	if (!open_xr_composition_layer_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, open_xr_composition_layer_class);
	return obj;
}
static JSValue open_xr_composition_layer_class_set_layer_viewport(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&OpenXRCompositionLayer::set_layer_viewport, ctx, this_val, argc, argv);
};
static JSValue open_xr_composition_layer_class_get_layer_viewport(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&OpenXRCompositionLayer::get_layer_viewport, ctx, this_val, argc, argv);
};
static JSValue open_xr_composition_layer_class_set_enable_hole_punch(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&OpenXRCompositionLayer::set_enable_hole_punch, ctx, this_val, argc, argv);
};
static JSValue open_xr_composition_layer_class_get_enable_hole_punch(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&OpenXRCompositionLayer::get_enable_hole_punch, ctx, this_val, argc, argv);
};
static JSValue open_xr_composition_layer_class_set_sort_order(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&OpenXRCompositionLayer::set_sort_order, ctx, this_val, argc, argv);
};
static JSValue open_xr_composition_layer_class_get_sort_order(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&OpenXRCompositionLayer::get_sort_order, ctx, this_val, argc, argv);
};
static JSValue open_xr_composition_layer_class_set_alpha_blend(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&OpenXRCompositionLayer::set_alpha_blend, ctx, this_val, argc, argv);
};
static JSValue open_xr_composition_layer_class_get_alpha_blend(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&OpenXRCompositionLayer::get_alpha_blend, ctx, this_val, argc, argv);
};
static JSValue open_xr_composition_layer_class_is_natively_supported(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&OpenXRCompositionLayer::is_natively_supported, ctx, this_val, argc, argv);
};
static JSValue open_xr_composition_layer_class_intersects_ray(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&OpenXRCompositionLayer::intersects_ray, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry open_xr_composition_layer_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_layer_viewport", 1, &open_xr_composition_layer_class_set_layer_viewport),
	JS_CFUNC_DEF("get_layer_viewport", 0, &open_xr_composition_layer_class_get_layer_viewport),
	JS_CFUNC_DEF("set_enable_hole_punch", 1, &open_xr_composition_layer_class_set_enable_hole_punch),
	JS_CFUNC_DEF("get_enable_hole_punch", 0, &open_xr_composition_layer_class_get_enable_hole_punch),
	JS_CFUNC_DEF("set_sort_order", 1, &open_xr_composition_layer_class_set_sort_order),
	JS_CFUNC_DEF("get_sort_order", 0, &open_xr_composition_layer_class_get_sort_order),
	JS_CFUNC_DEF("set_alpha_blend", 1, &open_xr_composition_layer_class_set_alpha_blend),
	JS_CFUNC_DEF("get_alpha_blend", 0, &open_xr_composition_layer_class_get_alpha_blend),
	JS_CFUNC_DEF("is_natively_supported", 0, &open_xr_composition_layer_class_is_natively_supported),
	JS_CFUNC_DEF("intersects_ray", 2, &open_xr_composition_layer_class_intersects_ray),
};

static void define_open_xr_composition_layer_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "layer_viewport"),
        JS_NewCFunction(ctx, open_xr_composition_layer_class_get_layer_viewport, "get_layer_viewport", 0),
        JS_NewCFunction(ctx, open_xr_composition_layer_class_set_layer_viewport, "set_layer_viewport", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "sort_order"),
        JS_NewCFunction(ctx, open_xr_composition_layer_class_get_sort_order, "get_sort_order", 0),
        JS_NewCFunction(ctx, open_xr_composition_layer_class_set_sort_order, "set_sort_order", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "alpha_blend"),
        JS_NewCFunction(ctx, open_xr_composition_layer_class_get_alpha_blend, "get_alpha_blend", 0),
        JS_NewCFunction(ctx, open_xr_composition_layer_class_set_alpha_blend, "set_alpha_blend", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "enable_hole_punch"),
        JS_NewCFunction(ctx, open_xr_composition_layer_class_get_enable_hole_punch, "get_enable_hole_punch", 0),
        JS_NewCFunction(ctx, open_xr_composition_layer_class_set_enable_hole_punch, "set_enable_hole_punch", 1),
        JS_PROP_GETSET
    );
	
}

static void define_open_xr_composition_layer_enum(JSContext *ctx, JSValue proto) {
}

static int js_open_xr_composition_layer_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["OpenXRCompositionLayer"] = OpenXRCompositionLayer::__class_id;
	class_id_list.insert(OpenXRCompositionLayer::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), OpenXRCompositionLayer::__class_id, &open_xr_composition_layer_class_def);

	JSValue proto = JS_NewObjectClass(ctx, OpenXRCompositionLayer::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Node3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, OpenXRCompositionLayer::__class_id, proto);

	define_open_xr_composition_layer_property(ctx, proto);
	define_open_xr_composition_layer_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, open_xr_composition_layer_class_proto_funcs, _countof(open_xr_composition_layer_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, open_xr_composition_layer_class_constructor, "OpenXRCompositionLayer", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "OpenXRCompositionLayer", ctor);

	return 0;
}

JSModuleDef *_js_init_open_xr_composition_layer_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/node3d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_open_xr_composition_layer_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "OpenXRCompositionLayer");
	return m;
}

JSModuleDef *js_init_open_xr_composition_layer_module(JSContext *ctx) {
	return _js_init_open_xr_composition_layer_module(ctx, "@godot/classes/open_xr_composition_layer");
}

void register_open_xr_composition_layer() {
	OpenXRCompositionLayer::__init_js_class_id();
	js_init_open_xr_composition_layer_module(ctx);
}