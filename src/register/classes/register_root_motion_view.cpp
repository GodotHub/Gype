
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/root_motion_view.hpp>
#include <godot_cpp/classes/visual_instance3d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void root_motion_view_class_finalizer(JSRuntime *rt, JSValue val) {
	RootMotionView *root_motion_view = static_cast<RootMotionView *>(JS_GetOpaque(val, RootMotionView::__class_id));
	if (root_motion_view)
		RootMotionView::free(nullptr, root_motion_view);
}

static JSClassDef root_motion_view_class_def = {
	"RootMotionView",
	.finalizer = root_motion_view_class_finalizer
};

static JSValue root_motion_view_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	RootMotionView *root_motion_view_class;
	JSValue obj = JS_NewObjectClass(ctx, RootMotionView::__class_id);
	if (JS_IsException(obj))
		return obj;
	root_motion_view_class = memnew(RootMotionView);
	if (!root_motion_view_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, root_motion_view_class);
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");

	if (JS_IsObject(proto)) {
		JS_SetPrototype(ctx, obj, proto);
	}
	JS_FreeValue(ctx, proto);

	
	return obj;
}
static JSValue root_motion_view_class_set_animation_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RootMotionView::set_animation_path, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue root_motion_view_class_get_animation_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RootMotionView::get_animation_path, ctx, this_val, argc, argv);
};
static JSValue root_motion_view_class_set_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RootMotionView::set_color, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue root_motion_view_class_get_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RootMotionView::get_color, ctx, this_val, argc, argv);
};
static JSValue root_motion_view_class_set_cell_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RootMotionView::set_cell_size, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue root_motion_view_class_get_cell_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RootMotionView::get_cell_size, ctx, this_val, argc, argv);
};
static JSValue root_motion_view_class_set_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RootMotionView::set_radius, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue root_motion_view_class_get_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RootMotionView::get_radius, ctx, this_val, argc, argv);
};
static JSValue root_motion_view_class_set_zero_y(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RootMotionView::set_zero_y, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue root_motion_view_class_get_zero_y(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RootMotionView::get_zero_y, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry root_motion_view_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_animation_path", 1, &root_motion_view_class_set_animation_path),
	JS_CFUNC_DEF("get_animation_path", 0, &root_motion_view_class_get_animation_path),
	JS_CFUNC_DEF("set_color", 1, &root_motion_view_class_set_color),
	JS_CFUNC_DEF("get_color", 0, &root_motion_view_class_get_color),
	JS_CFUNC_DEF("set_cell_size", 1, &root_motion_view_class_set_cell_size),
	JS_CFUNC_DEF("get_cell_size", 0, &root_motion_view_class_get_cell_size),
	JS_CFUNC_DEF("set_radius", 1, &root_motion_view_class_set_radius),
	JS_CFUNC_DEF("get_radius", 0, &root_motion_view_class_get_radius),
	JS_CFUNC_DEF("set_zero_y", 1, &root_motion_view_class_set_zero_y),
	JS_CFUNC_DEF("get_zero_y", 0, &root_motion_view_class_get_zero_y),
};

void define_root_motion_view_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "animation_path"),
        JS_NewCFunction(ctx, root_motion_view_class_get_animation_path, "get_animation_path", 0),
        JS_NewCFunction(ctx, root_motion_view_class_set_animation_path, "set_animation_path", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "color"),
        JS_NewCFunction(ctx, root_motion_view_class_get_color, "get_color", 0),
        JS_NewCFunction(ctx, root_motion_view_class_set_color, "set_color", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "cell_size"),
        JS_NewCFunction(ctx, root_motion_view_class_get_cell_size, "get_cell_size", 0),
        JS_NewCFunction(ctx, root_motion_view_class_set_cell_size, "set_cell_size", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "radius"),
        JS_NewCFunction(ctx, root_motion_view_class_get_radius, "get_radius", 0),
        JS_NewCFunction(ctx, root_motion_view_class_set_radius, "set_radius", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "zero_y"),
        JS_NewCFunction(ctx, root_motion_view_class_get_zero_y, "get_zero_y", 0),
        JS_NewCFunction(ctx, root_motion_view_class_set_zero_y, "set_zero_y", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
}

static int js_root_motion_view_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&RootMotionView::__class_id);
	classes["RootMotionView"] = RootMotionView::__class_id;
	class_id_list.insert(RootMotionView::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), RootMotionView::__class_id, &root_motion_view_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, VisualInstance3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, RootMotionView::__class_id, proto);
	define_root_motion_view_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, root_motion_view_class_proto_funcs, _countof(root_motion_view_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, root_motion_view_class_constructor, "RootMotionView", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "RootMotionView", ctor);

	return 0;
}

JSModuleDef *_js_init_root_motion_view_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/visual_instance3d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_root_motion_view_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "RootMotionView");
	return m;
}

JSModuleDef *js_init_root_motion_view_module(JSContext *ctx) {
	return _js_init_root_motion_view_module(ctx, "godot/classes/root_motion_view");
}

void register_root_motion_view() {
	RootMotionView::__init_js_class_id();
	js_init_root_motion_view_module(ctx);
}