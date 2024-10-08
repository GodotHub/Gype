
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/skeleton3d.hpp>
#include <godot_cpp/classes/skeleton_modifier3d.hpp>
#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void skeleton_modifier3d_class_finalizer(JSRuntime *rt, JSValue val) {
	SkeletonModifier3D *skeleton_modifier3d = static_cast<SkeletonModifier3D *>(JS_GetOpaque(val, SkeletonModifier3D::__class_id));
	if (skeleton_modifier3d)
		SkeletonModifier3D::free(nullptr, skeleton_modifier3d);
}

static JSClassDef skeleton_modifier3d_class_def = {
	"SkeletonModifier3D",
	.finalizer = skeleton_modifier3d_class_finalizer
};

static JSValue skeleton_modifier3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	SkeletonModifier3D *skeleton_modifier3d_class;
	JSValue obj = JS_NewObjectClass(ctx, SkeletonModifier3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	skeleton_modifier3d_class = memnew(SkeletonModifier3D);
	if (!skeleton_modifier3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, skeleton_modifier3d_class);
	return obj;
}
static JSValue skeleton_modifier3d_class_get_skeleton(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SkeletonModifier3D::get_skeleton, SkeletonModifier3D::__class_id, ctx, this_val, argv);
};
static JSValue skeleton_modifier3d_class_set_active(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SkeletonModifier3D::set_active, SkeletonModifier3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton_modifier3d_class_is_active(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SkeletonModifier3D::is_active, SkeletonModifier3D::__class_id, ctx, this_val, argv);
};
static JSValue skeleton_modifier3d_class_set_influence(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SkeletonModifier3D::set_influence, SkeletonModifier3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton_modifier3d_class_get_influence(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SkeletonModifier3D::get_influence, SkeletonModifier3D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry skeleton_modifier3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_skeleton", 0, &skeleton_modifier3d_class_get_skeleton),
	JS_CFUNC_DEF("set_active", 1, &skeleton_modifier3d_class_set_active),
	JS_CFUNC_DEF("is_active", 0, &skeleton_modifier3d_class_is_active),
	JS_CFUNC_DEF("set_influence", 1, &skeleton_modifier3d_class_set_influence),
	JS_CFUNC_DEF("get_influence", 0, &skeleton_modifier3d_class_get_influence),
};

static int js_skeleton_modifier3d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&SkeletonModifier3D::__class_id);
	classes["SkeletonModifier3D"] = SkeletonModifier3D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), SkeletonModifier3D::__class_id, &skeleton_modifier3d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Node3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, SkeletonModifier3D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, skeleton_modifier3d_class_proto_funcs, _countof(skeleton_modifier3d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, skeleton_modifier3d_class_constructor, "SkeletonModifier3D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "SkeletonModifier3D", ctor);

	return 0;
}

JSModuleDef *_js_init_skeleton_modifier3d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_skeleton_modifier3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "SkeletonModifier3D");
	return m;
}

JSModuleDef *js_init_skeleton_modifier3d_module(JSContext *ctx) {
	return _js_init_skeleton_modifier3d_module(ctx, "godot/classes/skeleton_modifier3d");
}

void register_skeleton_modifier3d() {
	js_init_skeleton_modifier3d_module(ctx);
}