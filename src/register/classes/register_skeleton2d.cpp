
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/skeleton_modification_stack2d.hpp>
#include <godot_cpp/classes/bone2d.hpp>
#include <godot_cpp/classes/skeleton2d.hpp>
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void skeleton2d_class_finalizer(JSRuntime *rt, JSValue val) {
	Skeleton2D *skeleton2d = static_cast<Skeleton2D *>(JS_GetOpaque(val, Skeleton2D::__class_id));
	if (skeleton2d)
		Skeleton2D::free(nullptr, skeleton2d);
}

static JSClassDef skeleton2d_class_def = {
	"Skeleton2D",
	.finalizer = skeleton2d_class_finalizer
};

static JSValue skeleton2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	Skeleton2D *skeleton2d_class;
	JSValue obj = JS_NewObjectClass(ctx, Skeleton2D::__class_id);
	if (JS_IsException(obj))
		return obj;
	skeleton2d_class = memnew(Skeleton2D);
	if (!skeleton2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, skeleton2d_class);
	return obj;
}
static JSValue skeleton2d_class_get_bone_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Skeleton2D::get_bone_count, Skeleton2D::__class_id, ctx, this_val, argv);
};
static JSValue skeleton2d_class_get_bone(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Skeleton2D::get_bone, Skeleton2D::__class_id, ctx, this_val, argv);
};
static JSValue skeleton2d_class_get_skeleton(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Skeleton2D::get_skeleton, Skeleton2D::__class_id, ctx, this_val, argv);
};
static JSValue skeleton2d_class_set_modification_stack(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Skeleton2D::set_modification_stack, Skeleton2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton2d_class_get_modification_stack(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Skeleton2D::get_modification_stack, Skeleton2D::__class_id, ctx, this_val, argv);
};
static JSValue skeleton2d_class_execute_modifications(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Skeleton2D::execute_modifications, Skeleton2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton2d_class_set_bone_local_pose_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Skeleton2D::set_bone_local_pose_override, Skeleton2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton2d_class_get_bone_local_pose_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Skeleton2D::get_bone_local_pose_override, Skeleton2D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry skeleton2d_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_bone_count", 0, &skeleton2d_class_get_bone_count),
	JS_CFUNC_DEF("get_bone", 1, &skeleton2d_class_get_bone),
	JS_CFUNC_DEF("get_skeleton", 0, &skeleton2d_class_get_skeleton),
	JS_CFUNC_DEF("set_modification_stack", 1, &skeleton2d_class_set_modification_stack),
	JS_CFUNC_DEF("get_modification_stack", 0, &skeleton2d_class_get_modification_stack),
	JS_CFUNC_DEF("execute_modifications", 2, &skeleton2d_class_execute_modifications),
	JS_CFUNC_DEF("set_bone_local_pose_override", 4, &skeleton2d_class_set_bone_local_pose_override),
	JS_CFUNC_DEF("get_bone_local_pose_override", 1, &skeleton2d_class_get_bone_local_pose_override),
};

static int js_skeleton2d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&Skeleton2D::__class_id);
	classes["Skeleton2D"] = Skeleton2D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), Skeleton2D::__class_id, &skeleton2d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Node2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Skeleton2D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, skeleton2d_class_proto_funcs, _countof(skeleton2d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, skeleton2d_class_constructor, "Skeleton2D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "Skeleton2D", ctor);

	return 0;
}

JSModuleDef *_js_init_skeleton2d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_skeleton2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Skeleton2D");
	return m;
}

JSModuleDef *js_init_skeleton2d_module(JSContext *ctx) {
	return _js_init_skeleton2d_module(ctx, "godot/classes/skeleton2d");
}

void register_skeleton2d() {
	js_init_skeleton2d_module(ctx);
}