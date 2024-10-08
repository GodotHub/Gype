
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/skeleton_modification2d.hpp>
#include <godot_cpp/classes/skeleton_modification_stack2d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void skeleton_modification2d_class_finalizer(JSRuntime *rt, JSValue val) {
	SkeletonModification2D *skeleton_modification2d = static_cast<SkeletonModification2D *>(JS_GetOpaque(val, SkeletonModification2D::__class_id));
	if (skeleton_modification2d)
		SkeletonModification2D::free(nullptr, skeleton_modification2d);
}

static JSClassDef skeleton_modification2d_class_def = {
	"SkeletonModification2D",
	.finalizer = skeleton_modification2d_class_finalizer
};

static JSValue skeleton_modification2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	SkeletonModification2D *skeleton_modification2d_class;
	JSValue obj = JS_NewObjectClass(ctx, SkeletonModification2D::__class_id);
	if (JS_IsException(obj))
		return obj;
	skeleton_modification2d_class = memnew(SkeletonModification2D);
	if (!skeleton_modification2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, skeleton_modification2d_class);
	return obj;
}
static JSValue skeleton_modification2d_class_set_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SkeletonModification2D::set_enabled, SkeletonModification2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton_modification2d_class_get_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&SkeletonModification2D::get_enabled, SkeletonModification2D::__class_id, ctx, this_val, argv);
};
static JSValue skeleton_modification2d_class_get_modification_stack(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&SkeletonModification2D::get_modification_stack, SkeletonModification2D::__class_id, ctx, this_val, argv);
};
static JSValue skeleton_modification2d_class_set_is_setup(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SkeletonModification2D::set_is_setup, SkeletonModification2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton_modification2d_class_get_is_setup(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SkeletonModification2D::get_is_setup, SkeletonModification2D::__class_id, ctx, this_val, argv);
};
static JSValue skeleton_modification2d_class_set_execution_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SkeletonModification2D::set_execution_mode, SkeletonModification2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton_modification2d_class_get_execution_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SkeletonModification2D::get_execution_mode, SkeletonModification2D::__class_id, ctx, this_val, argv);
};
static JSValue skeleton_modification2d_class_clamp_angle(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&SkeletonModification2D::clamp_angle, SkeletonModification2D::__class_id, ctx, this_val, argv);
};
static JSValue skeleton_modification2d_class_set_editor_draw_gizmo(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SkeletonModification2D::set_editor_draw_gizmo, SkeletonModification2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton_modification2d_class_get_editor_draw_gizmo(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SkeletonModification2D::get_editor_draw_gizmo, SkeletonModification2D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry skeleton_modification2d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_enabled", 1, &skeleton_modification2d_class_set_enabled),
	JS_CFUNC_DEF("get_enabled", 0, &skeleton_modification2d_class_get_enabled),
	JS_CFUNC_DEF("get_modification_stack", 0, &skeleton_modification2d_class_get_modification_stack),
	JS_CFUNC_DEF("set_is_setup", 1, &skeleton_modification2d_class_set_is_setup),
	JS_CFUNC_DEF("get_is_setup", 0, &skeleton_modification2d_class_get_is_setup),
	JS_CFUNC_DEF("set_execution_mode", 1, &skeleton_modification2d_class_set_execution_mode),
	JS_CFUNC_DEF("get_execution_mode", 0, &skeleton_modification2d_class_get_execution_mode),
	JS_CFUNC_DEF("clamp_angle", 4, &skeleton_modification2d_class_clamp_angle),
	JS_CFUNC_DEF("set_editor_draw_gizmo", 1, &skeleton_modification2d_class_set_editor_draw_gizmo),
	JS_CFUNC_DEF("get_editor_draw_gizmo", 0, &skeleton_modification2d_class_get_editor_draw_gizmo),
};

static int js_skeleton_modification2d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&SkeletonModification2D::__class_id);
	classes["SkeletonModification2D"] = SkeletonModification2D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), SkeletonModification2D::__class_id, &skeleton_modification2d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, SkeletonModification2D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, skeleton_modification2d_class_proto_funcs, _countof(skeleton_modification2d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, skeleton_modification2d_class_constructor, "SkeletonModification2D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "SkeletonModification2D", ctor);

	return 0;
}

JSModuleDef *_js_init_skeleton_modification2d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_skeleton_modification2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "SkeletonModification2D");
	return m;
}

JSModuleDef *js_init_skeleton_modification2d_module(JSContext *ctx) {
	return _js_init_skeleton_modification2d_module(ctx, "godot/classes/skeleton_modification2d");
}

void register_skeleton_modification2d() {
	js_init_skeleton_modification2d_module(ctx);
}