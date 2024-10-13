
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/skeleton_modification2d_two_bone_ik.hpp>
#include <godot_cpp/classes/skeleton_modification2d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void skeleton_modification2d_two_bone_ik_class_finalizer(JSRuntime *rt, JSValue val) {
	SkeletonModification2DTwoBoneIK *skeleton_modification2d_two_bone_ik = static_cast<SkeletonModification2DTwoBoneIK *>(JS_GetOpaque(val, SkeletonModification2DTwoBoneIK::__class_id));
	if (skeleton_modification2d_two_bone_ik)
		SkeletonModification2DTwoBoneIK::free(nullptr, skeleton_modification2d_two_bone_ik);
}

static JSClassDef skeleton_modification2d_two_bone_ik_class_def = {
	"SkeletonModification2DTwoBoneIK",
	.finalizer = skeleton_modification2d_two_bone_ik_class_finalizer
};

static JSValue skeleton_modification2d_two_bone_ik_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	SkeletonModification2DTwoBoneIK *skeleton_modification2d_two_bone_ik_class;
	JSValue obj = JS_NewObjectClass(ctx, SkeletonModification2DTwoBoneIK::__class_id);
	if (JS_IsException(obj))
		return obj;
	skeleton_modification2d_two_bone_ik_class = memnew(SkeletonModification2DTwoBoneIK);
	if (!skeleton_modification2d_two_bone_ik_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, skeleton_modification2d_two_bone_ik_class);
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");

	if (JS_IsObject(proto)) {
		JS_SetPrototype(ctx, obj, proto);
	}
	JS_FreeValue(ctx, proto);

	
	return obj;
}
static JSValue skeleton_modification2d_two_bone_ik_class_set_target_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SkeletonModification2DTwoBoneIK::set_target_node, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton_modification2d_two_bone_ik_class_get_target_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SkeletonModification2DTwoBoneIK::get_target_node, ctx, this_val, argc, argv);
};
static JSValue skeleton_modification2d_two_bone_ik_class_set_target_minimum_distance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SkeletonModification2DTwoBoneIK::set_target_minimum_distance, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton_modification2d_two_bone_ik_class_get_target_minimum_distance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SkeletonModification2DTwoBoneIK::get_target_minimum_distance, ctx, this_val, argc, argv);
};
static JSValue skeleton_modification2d_two_bone_ik_class_set_target_maximum_distance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SkeletonModification2DTwoBoneIK::set_target_maximum_distance, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton_modification2d_two_bone_ik_class_get_target_maximum_distance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SkeletonModification2DTwoBoneIK::get_target_maximum_distance, ctx, this_val, argc, argv);
};
static JSValue skeleton_modification2d_two_bone_ik_class_set_flip_bend_direction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SkeletonModification2DTwoBoneIK::set_flip_bend_direction, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton_modification2d_two_bone_ik_class_get_flip_bend_direction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SkeletonModification2DTwoBoneIK::get_flip_bend_direction, ctx, this_val, argc, argv);
};
static JSValue skeleton_modification2d_two_bone_ik_class_set_joint_one_bone2d_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SkeletonModification2DTwoBoneIK::set_joint_one_bone2d_node, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton_modification2d_two_bone_ik_class_get_joint_one_bone2d_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SkeletonModification2DTwoBoneIK::get_joint_one_bone2d_node, ctx, this_val, argc, argv);
};
static JSValue skeleton_modification2d_two_bone_ik_class_set_joint_one_bone_idx(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SkeletonModification2DTwoBoneIK::set_joint_one_bone_idx, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton_modification2d_two_bone_ik_class_get_joint_one_bone_idx(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SkeletonModification2DTwoBoneIK::get_joint_one_bone_idx, ctx, this_val, argc, argv);
};
static JSValue skeleton_modification2d_two_bone_ik_class_set_joint_two_bone2d_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SkeletonModification2DTwoBoneIK::set_joint_two_bone2d_node, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton_modification2d_two_bone_ik_class_get_joint_two_bone2d_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SkeletonModification2DTwoBoneIK::get_joint_two_bone2d_node, ctx, this_val, argc, argv);
};
static JSValue skeleton_modification2d_two_bone_ik_class_set_joint_two_bone_idx(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SkeletonModification2DTwoBoneIK::set_joint_two_bone_idx, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton_modification2d_two_bone_ik_class_get_joint_two_bone_idx(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SkeletonModification2DTwoBoneIK::get_joint_two_bone_idx, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry skeleton_modification2d_two_bone_ik_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_target_node", 1, &skeleton_modification2d_two_bone_ik_class_set_target_node),
	JS_CFUNC_DEF("get_target_node", 0, &skeleton_modification2d_two_bone_ik_class_get_target_node),
	JS_CFUNC_DEF("set_target_minimum_distance", 1, &skeleton_modification2d_two_bone_ik_class_set_target_minimum_distance),
	JS_CFUNC_DEF("get_target_minimum_distance", 0, &skeleton_modification2d_two_bone_ik_class_get_target_minimum_distance),
	JS_CFUNC_DEF("set_target_maximum_distance", 1, &skeleton_modification2d_two_bone_ik_class_set_target_maximum_distance),
	JS_CFUNC_DEF("get_target_maximum_distance", 0, &skeleton_modification2d_two_bone_ik_class_get_target_maximum_distance),
	JS_CFUNC_DEF("set_flip_bend_direction", 1, &skeleton_modification2d_two_bone_ik_class_set_flip_bend_direction),
	JS_CFUNC_DEF("get_flip_bend_direction", 0, &skeleton_modification2d_two_bone_ik_class_get_flip_bend_direction),
	JS_CFUNC_DEF("set_joint_one_bone2d_node", 1, &skeleton_modification2d_two_bone_ik_class_set_joint_one_bone2d_node),
	JS_CFUNC_DEF("get_joint_one_bone2d_node", 0, &skeleton_modification2d_two_bone_ik_class_get_joint_one_bone2d_node),
	JS_CFUNC_DEF("set_joint_one_bone_idx", 1, &skeleton_modification2d_two_bone_ik_class_set_joint_one_bone_idx),
	JS_CFUNC_DEF("get_joint_one_bone_idx", 0, &skeleton_modification2d_two_bone_ik_class_get_joint_one_bone_idx),
	JS_CFUNC_DEF("set_joint_two_bone2d_node", 1, &skeleton_modification2d_two_bone_ik_class_set_joint_two_bone2d_node),
	JS_CFUNC_DEF("get_joint_two_bone2d_node", 0, &skeleton_modification2d_two_bone_ik_class_get_joint_two_bone2d_node),
	JS_CFUNC_DEF("set_joint_two_bone_idx", 1, &skeleton_modification2d_two_bone_ik_class_set_joint_two_bone_idx),
	JS_CFUNC_DEF("get_joint_two_bone_idx", 0, &skeleton_modification2d_two_bone_ik_class_get_joint_two_bone_idx),
};

void define_skeleton_modification2d_two_bone_ik_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "target_nodepath"),
        JS_NewCFunction(ctx, skeleton_modification2d_two_bone_ik_class_get_target_node, "get_target_node", 0),
        JS_NewCFunction(ctx, skeleton_modification2d_two_bone_ik_class_set_target_node, "set_target_node", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "target_minimum_distance"),
        JS_NewCFunction(ctx, skeleton_modification2d_two_bone_ik_class_get_target_minimum_distance, "get_target_minimum_distance", 0),
        JS_NewCFunction(ctx, skeleton_modification2d_two_bone_ik_class_set_target_minimum_distance, "set_target_minimum_distance", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "target_maximum_distance"),
        JS_NewCFunction(ctx, skeleton_modification2d_two_bone_ik_class_get_target_maximum_distance, "get_target_maximum_distance", 0),
        JS_NewCFunction(ctx, skeleton_modification2d_two_bone_ik_class_set_target_maximum_distance, "set_target_maximum_distance", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "flip_bend_direction"),
        JS_NewCFunction(ctx, skeleton_modification2d_two_bone_ik_class_get_flip_bend_direction, "get_flip_bend_direction", 0),
        JS_NewCFunction(ctx, skeleton_modification2d_two_bone_ik_class_set_flip_bend_direction, "set_flip_bend_direction", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
}

static int js_skeleton_modification2d_two_bone_ik_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&SkeletonModification2DTwoBoneIK::__class_id);
	classes["SkeletonModification2DTwoBoneIK"] = SkeletonModification2DTwoBoneIK::__class_id;
	class_id_list.insert(SkeletonModification2DTwoBoneIK::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), SkeletonModification2DTwoBoneIK::__class_id, &skeleton_modification2d_two_bone_ik_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, SkeletonModification2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, SkeletonModification2DTwoBoneIK::__class_id, proto);
	define_skeleton_modification2d_two_bone_ik_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, skeleton_modification2d_two_bone_ik_class_proto_funcs, _countof(skeleton_modification2d_two_bone_ik_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, skeleton_modification2d_two_bone_ik_class_constructor, "SkeletonModification2DTwoBoneIK", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "SkeletonModification2DTwoBoneIK", ctor);

	return 0;
}

JSModuleDef *_js_init_skeleton_modification2d_two_bone_ik_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/skeleton_modification2d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_skeleton_modification2d_two_bone_ik_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "SkeletonModification2DTwoBoneIK");
	return m;
}

JSModuleDef *js_init_skeleton_modification2d_two_bone_ik_module(JSContext *ctx) {
	return _js_init_skeleton_modification2d_two_bone_ik_module(ctx, "godot/classes/skeleton_modification2d_two_bone_ik");
}

void register_skeleton_modification2d_two_bone_ik() {
	SkeletonModification2DTwoBoneIK::__init_js_class_id();
	js_init_skeleton_modification2d_two_bone_ik_module(ctx);
}