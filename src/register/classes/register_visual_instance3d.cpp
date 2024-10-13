
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/classes/visual_instance3d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void visual_instance3d_class_finalizer(JSRuntime *rt, JSValue val) {
	VisualInstance3D *visual_instance3d = static_cast<VisualInstance3D *>(JS_GetOpaque(val, VisualInstance3D::__class_id));
	if (visual_instance3d)
		VisualInstance3D::free(nullptr, visual_instance3d);
}

static JSClassDef visual_instance3d_class_def = {
	"VisualInstance3D",
	.finalizer = visual_instance3d_class_finalizer
};

static JSValue visual_instance3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	VisualInstance3D *visual_instance3d_class;
	JSValue obj = JS_NewObjectClass(ctx, VisualInstance3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	visual_instance3d_class = memnew(VisualInstance3D);
	if (!visual_instance3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, visual_instance3d_class);
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");

	if (JS_IsObject(proto)) {
		JS_SetPrototype(ctx, obj, proto);
	}
	JS_FreeValue(ctx, proto);

	
	return obj;
}
static JSValue visual_instance3d_class_set_base(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&VisualInstance3D::set_base, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue visual_instance3d_class_get_base(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&VisualInstance3D::get_base, ctx, this_val, argc, argv);
};
static JSValue visual_instance3d_class_get_instance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&VisualInstance3D::get_instance, ctx, this_val, argc, argv);
};
static JSValue visual_instance3d_class_set_layer_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&VisualInstance3D::set_layer_mask, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue visual_instance3d_class_get_layer_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&VisualInstance3D::get_layer_mask, ctx, this_val, argc, argv);
};
static JSValue visual_instance3d_class_set_layer_mask_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&VisualInstance3D::set_layer_mask_value, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue visual_instance3d_class_get_layer_mask_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&VisualInstance3D::get_layer_mask_value, ctx, this_val, argc, argv);
};
static JSValue visual_instance3d_class_set_sorting_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&VisualInstance3D::set_sorting_offset, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue visual_instance3d_class_get_sorting_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&VisualInstance3D::get_sorting_offset, ctx, this_val, argc, argv);
};
static JSValue visual_instance3d_class_set_sorting_use_aabb_center(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&VisualInstance3D::set_sorting_use_aabb_center, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue visual_instance3d_class_is_sorting_use_aabb_center(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&VisualInstance3D::is_sorting_use_aabb_center, ctx, this_val, argc, argv);
};
static JSValue visual_instance3d_class_get_aabb(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&VisualInstance3D::get_aabb, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry visual_instance3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_base", 1, &visual_instance3d_class_set_base),
	JS_CFUNC_DEF("get_base", 0, &visual_instance3d_class_get_base),
	JS_CFUNC_DEF("get_instance", 0, &visual_instance3d_class_get_instance),
	JS_CFUNC_DEF("set_layer_mask", 1, &visual_instance3d_class_set_layer_mask),
	JS_CFUNC_DEF("get_layer_mask", 0, &visual_instance3d_class_get_layer_mask),
	JS_CFUNC_DEF("set_layer_mask_value", 2, &visual_instance3d_class_set_layer_mask_value),
	JS_CFUNC_DEF("get_layer_mask_value", 1, &visual_instance3d_class_get_layer_mask_value),
	JS_CFUNC_DEF("set_sorting_offset", 1, &visual_instance3d_class_set_sorting_offset),
	JS_CFUNC_DEF("get_sorting_offset", 0, &visual_instance3d_class_get_sorting_offset),
	JS_CFUNC_DEF("set_sorting_use_aabb_center", 1, &visual_instance3d_class_set_sorting_use_aabb_center),
	JS_CFUNC_DEF("is_sorting_use_aabb_center", 0, &visual_instance3d_class_is_sorting_use_aabb_center),
	JS_CFUNC_DEF("get_aabb", 0, &visual_instance3d_class_get_aabb),
};

void define_visual_instance3d_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "layers"),
        JS_NewCFunction(ctx, visual_instance3d_class_get_layer_mask, "get_layer_mask", 0),
        JS_NewCFunction(ctx, visual_instance3d_class_set_layer_mask, "set_layer_mask", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "sorting_offset"),
        JS_NewCFunction(ctx, visual_instance3d_class_get_sorting_offset, "get_sorting_offset", 0),
        JS_NewCFunction(ctx, visual_instance3d_class_set_sorting_offset, "set_sorting_offset", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "sorting_use_aabb_center"),
        JS_NewCFunction(ctx, visual_instance3d_class_is_sorting_use_aabb_center, "is_sorting_use_aabb_center", 0),
        JS_NewCFunction(ctx, visual_instance3d_class_set_sorting_use_aabb_center, "set_sorting_use_aabb_center", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
}

static int js_visual_instance3d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&VisualInstance3D::__class_id);
	classes["VisualInstance3D"] = VisualInstance3D::__class_id;
	class_id_list.insert(VisualInstance3D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), VisualInstance3D::__class_id, &visual_instance3d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Node3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, VisualInstance3D::__class_id, proto);
	define_visual_instance3d_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, visual_instance3d_class_proto_funcs, _countof(visual_instance3d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, visual_instance3d_class_constructor, "VisualInstance3D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "VisualInstance3D", ctor);

	return 0;
}

JSModuleDef *_js_init_visual_instance3d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/node3d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_visual_instance3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "VisualInstance3D");
	return m;
}

JSModuleDef *js_init_visual_instance3d_module(JSContext *ctx) {
	return _js_init_visual_instance3d_module(ctx, "godot/classes/visual_instance3d");
}

void register_visual_instance3d() {
	VisualInstance3D::__init_js_class_id();
	js_init_visual_instance3d_module(ctx);
}