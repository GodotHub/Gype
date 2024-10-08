
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/skeleton_modification2d.hpp>
#include <godot_cpp/classes/skeleton_modification2dfabrik.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void skeleton_modification2dfabrik_class_finalizer(JSRuntime *rt, JSValue val) {
	SkeletonModification2DFABRIK *skeleton_modification2dfabrik = static_cast<SkeletonModification2DFABRIK *>(JS_GetOpaque(val, SkeletonModification2DFABRIK::__class_id));
	if (skeleton_modification2dfabrik)
		SkeletonModification2DFABRIK::free(nullptr, skeleton_modification2dfabrik);
}

static JSClassDef skeleton_modification2dfabrik_class_def = {
	"SkeletonModification2DFABRIK",
	.finalizer = skeleton_modification2dfabrik_class_finalizer
};

static JSValue skeleton_modification2dfabrik_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	SkeletonModification2DFABRIK *skeleton_modification2dfabrik_class;
	JSValue obj = JS_NewObjectClass(ctx, SkeletonModification2DFABRIK::__class_id);
	if (JS_IsException(obj))
		return obj;
	skeleton_modification2dfabrik_class = memnew(SkeletonModification2DFABRIK);
	if (!skeleton_modification2dfabrik_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, skeleton_modification2dfabrik_class);
	return obj;
}
static JSValue skeleton_modification2dfabrik_class_set_target_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SkeletonModification2DFABRIK::set_target_node, SkeletonModification2DFABRIK::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton_modification2dfabrik_class_get_target_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SkeletonModification2DFABRIK::get_target_node, SkeletonModification2DFABRIK::__class_id, ctx, this_val, argv);
};
static JSValue skeleton_modification2dfabrik_class_set_fabrik_data_chain_length(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SkeletonModification2DFABRIK::set_fabrik_data_chain_length, SkeletonModification2DFABRIK::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton_modification2dfabrik_class_get_fabrik_data_chain_length(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&SkeletonModification2DFABRIK::get_fabrik_data_chain_length, SkeletonModification2DFABRIK::__class_id, ctx, this_val, argv);
};
static JSValue skeleton_modification2dfabrik_class_set_fabrik_joint_bone2d_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SkeletonModification2DFABRIK::set_fabrik_joint_bone2d_node, SkeletonModification2DFABRIK::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton_modification2dfabrik_class_get_fabrik_joint_bone2d_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SkeletonModification2DFABRIK::get_fabrik_joint_bone2d_node, SkeletonModification2DFABRIK::__class_id, ctx, this_val, argv);
};
static JSValue skeleton_modification2dfabrik_class_set_fabrik_joint_bone_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SkeletonModification2DFABRIK::set_fabrik_joint_bone_index, SkeletonModification2DFABRIK::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton_modification2dfabrik_class_get_fabrik_joint_bone_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SkeletonModification2DFABRIK::get_fabrik_joint_bone_index, SkeletonModification2DFABRIK::__class_id, ctx, this_val, argv);
};
static JSValue skeleton_modification2dfabrik_class_set_fabrik_joint_magnet_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SkeletonModification2DFABRIK::set_fabrik_joint_magnet_position, SkeletonModification2DFABRIK::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton_modification2dfabrik_class_get_fabrik_joint_magnet_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SkeletonModification2DFABRIK::get_fabrik_joint_magnet_position, SkeletonModification2DFABRIK::__class_id, ctx, this_val, argv);
};
static JSValue skeleton_modification2dfabrik_class_set_fabrik_joint_use_target_rotation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SkeletonModification2DFABRIK::set_fabrik_joint_use_target_rotation, SkeletonModification2DFABRIK::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton_modification2dfabrik_class_get_fabrik_joint_use_target_rotation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SkeletonModification2DFABRIK::get_fabrik_joint_use_target_rotation, SkeletonModification2DFABRIK::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry skeleton_modification2dfabrik_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_target_node", 1, &skeleton_modification2dfabrik_class_set_target_node),
	JS_CFUNC_DEF("get_target_node", 0, &skeleton_modification2dfabrik_class_get_target_node),
	JS_CFUNC_DEF("set_fabrik_data_chain_length", 1, &skeleton_modification2dfabrik_class_set_fabrik_data_chain_length),
	JS_CFUNC_DEF("get_fabrik_data_chain_length", 0, &skeleton_modification2dfabrik_class_get_fabrik_data_chain_length),
	JS_CFUNC_DEF("set_fabrik_joint_bone2d_node", 2, &skeleton_modification2dfabrik_class_set_fabrik_joint_bone2d_node),
	JS_CFUNC_DEF("get_fabrik_joint_bone2d_node", 1, &skeleton_modification2dfabrik_class_get_fabrik_joint_bone2d_node),
	JS_CFUNC_DEF("set_fabrik_joint_bone_index", 2, &skeleton_modification2dfabrik_class_set_fabrik_joint_bone_index),
	JS_CFUNC_DEF("get_fabrik_joint_bone_index", 1, &skeleton_modification2dfabrik_class_get_fabrik_joint_bone_index),
	JS_CFUNC_DEF("set_fabrik_joint_magnet_position", 2, &skeleton_modification2dfabrik_class_set_fabrik_joint_magnet_position),
	JS_CFUNC_DEF("get_fabrik_joint_magnet_position", 1, &skeleton_modification2dfabrik_class_get_fabrik_joint_magnet_position),
	JS_CFUNC_DEF("set_fabrik_joint_use_target_rotation", 2, &skeleton_modification2dfabrik_class_set_fabrik_joint_use_target_rotation),
	JS_CFUNC_DEF("get_fabrik_joint_use_target_rotation", 1, &skeleton_modification2dfabrik_class_get_fabrik_joint_use_target_rotation),
};

static int js_skeleton_modification2dfabrik_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&SkeletonModification2DFABRIK::__class_id);
	classes["SkeletonModification2DFABRIK"] = SkeletonModification2DFABRIK::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), SkeletonModification2DFABRIK::__class_id, &skeleton_modification2dfabrik_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, SkeletonModification2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, SkeletonModification2DFABRIK::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, skeleton_modification2dfabrik_class_proto_funcs, _countof(skeleton_modification2dfabrik_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, skeleton_modification2dfabrik_class_constructor, "SkeletonModification2DFABRIK", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "SkeletonModification2DFABRIK", ctor);

	return 0;
}

JSModuleDef *_js_init_skeleton_modification2dfabrik_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_skeleton_modification2dfabrik_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "SkeletonModification2DFABRIK");
	return m;
}

JSModuleDef *js_init_skeleton_modification2dfabrik_module(JSContext *ctx) {
	return _js_init_skeleton_modification2dfabrik_module(ctx, "godot/classes/skeleton_modification2dfabrik");
}

void register_skeleton_modification2dfabrik() {
	js_init_skeleton_modification2dfabrik_module(ctx);
}