
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/skeleton_modification2dccdik.hpp>
#include <godot_cpp/classes/skeleton_modification2d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void skeleton_modification2dccdik_class_finalizer(JSRuntime *rt, JSValue val) {
	SkeletonModification2DCCDIK *skeleton_modification2dccdik = static_cast<SkeletonModification2DCCDIK *>(JS_GetOpaque(val, SkeletonModification2DCCDIK::__class_id));
	if (skeleton_modification2dccdik)
		memdelete(skeleton_modification2dccdik);
}

static JSClassDef skeleton_modification2dccdik_class_def = {
	"SkeletonModification2DCCDIK",
	.finalizer = skeleton_modification2dccdik_class_finalizer
};

static JSValue skeleton_modification2dccdik_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, SkeletonModification2DCCDIK::__class_id);
	if (JS_IsException(obj))
		return obj;
	SkeletonModification2DCCDIK *skeleton_modification2dccdik_class = memnew(SkeletonModification2DCCDIK);
	if (!skeleton_modification2dccdik_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, skeleton_modification2dccdik_class);	
	return obj;
}
static JSValue skeleton_modification2dccdik_class_set_target_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SkeletonModification2DCCDIK::set_target_node, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton_modification2dccdik_class_get_target_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SkeletonModification2DCCDIK::get_target_node, ctx, this_val, argc, argv);
};
static JSValue skeleton_modification2dccdik_class_set_tip_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SkeletonModification2DCCDIK::set_tip_node, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton_modification2dccdik_class_get_tip_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SkeletonModification2DCCDIK::get_tip_node, ctx, this_val, argc, argv);
};
static JSValue skeleton_modification2dccdik_class_set_ccdik_data_chain_length(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SkeletonModification2DCCDIK::set_ccdik_data_chain_length, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton_modification2dccdik_class_get_ccdik_data_chain_length(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&SkeletonModification2DCCDIK::get_ccdik_data_chain_length, ctx, this_val, argc, argv);
};
static JSValue skeleton_modification2dccdik_class_set_ccdik_joint_bone2d_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SkeletonModification2DCCDIK::set_ccdik_joint_bone2d_node, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton_modification2dccdik_class_get_ccdik_joint_bone2d_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SkeletonModification2DCCDIK::get_ccdik_joint_bone2d_node, ctx, this_val, argc, argv);
};
static JSValue skeleton_modification2dccdik_class_set_ccdik_joint_bone_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SkeletonModification2DCCDIK::set_ccdik_joint_bone_index, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton_modification2dccdik_class_get_ccdik_joint_bone_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SkeletonModification2DCCDIK::get_ccdik_joint_bone_index, ctx, this_val, argc, argv);
};
static JSValue skeleton_modification2dccdik_class_set_ccdik_joint_rotate_from_joint(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SkeletonModification2DCCDIK::set_ccdik_joint_rotate_from_joint, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton_modification2dccdik_class_get_ccdik_joint_rotate_from_joint(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SkeletonModification2DCCDIK::get_ccdik_joint_rotate_from_joint, ctx, this_val, argc, argv);
};
static JSValue skeleton_modification2dccdik_class_set_ccdik_joint_enable_constraint(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SkeletonModification2DCCDIK::set_ccdik_joint_enable_constraint, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton_modification2dccdik_class_get_ccdik_joint_enable_constraint(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SkeletonModification2DCCDIK::get_ccdik_joint_enable_constraint, ctx, this_val, argc, argv);
};
static JSValue skeleton_modification2dccdik_class_set_ccdik_joint_constraint_angle_min(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SkeletonModification2DCCDIK::set_ccdik_joint_constraint_angle_min, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton_modification2dccdik_class_get_ccdik_joint_constraint_angle_min(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SkeletonModification2DCCDIK::get_ccdik_joint_constraint_angle_min, ctx, this_val, argc, argv);
};
static JSValue skeleton_modification2dccdik_class_set_ccdik_joint_constraint_angle_max(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SkeletonModification2DCCDIK::set_ccdik_joint_constraint_angle_max, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton_modification2dccdik_class_get_ccdik_joint_constraint_angle_max(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SkeletonModification2DCCDIK::get_ccdik_joint_constraint_angle_max, ctx, this_val, argc, argv);
};
static JSValue skeleton_modification2dccdik_class_set_ccdik_joint_constraint_angle_invert(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SkeletonModification2DCCDIK::set_ccdik_joint_constraint_angle_invert, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton_modification2dccdik_class_get_ccdik_joint_constraint_angle_invert(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SkeletonModification2DCCDIK::get_ccdik_joint_constraint_angle_invert, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry skeleton_modification2dccdik_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_target_node", 1, &skeleton_modification2dccdik_class_set_target_node),
	JS_CFUNC_DEF("get_target_node", 0, &skeleton_modification2dccdik_class_get_target_node),
	JS_CFUNC_DEF("set_tip_node", 1, &skeleton_modification2dccdik_class_set_tip_node),
	JS_CFUNC_DEF("get_tip_node", 0, &skeleton_modification2dccdik_class_get_tip_node),
	JS_CFUNC_DEF("set_ccdik_data_chain_length", 1, &skeleton_modification2dccdik_class_set_ccdik_data_chain_length),
	JS_CFUNC_DEF("get_ccdik_data_chain_length", 0, &skeleton_modification2dccdik_class_get_ccdik_data_chain_length),
	JS_CFUNC_DEF("set_ccdik_joint_bone2d_node", 2, &skeleton_modification2dccdik_class_set_ccdik_joint_bone2d_node),
	JS_CFUNC_DEF("get_ccdik_joint_bone2d_node", 1, &skeleton_modification2dccdik_class_get_ccdik_joint_bone2d_node),
	JS_CFUNC_DEF("set_ccdik_joint_bone_index", 2, &skeleton_modification2dccdik_class_set_ccdik_joint_bone_index),
	JS_CFUNC_DEF("get_ccdik_joint_bone_index", 1, &skeleton_modification2dccdik_class_get_ccdik_joint_bone_index),
	JS_CFUNC_DEF("set_ccdik_joint_rotate_from_joint", 2, &skeleton_modification2dccdik_class_set_ccdik_joint_rotate_from_joint),
	JS_CFUNC_DEF("get_ccdik_joint_rotate_from_joint", 1, &skeleton_modification2dccdik_class_get_ccdik_joint_rotate_from_joint),
	JS_CFUNC_DEF("set_ccdik_joint_enable_constraint", 2, &skeleton_modification2dccdik_class_set_ccdik_joint_enable_constraint),
	JS_CFUNC_DEF("get_ccdik_joint_enable_constraint", 1, &skeleton_modification2dccdik_class_get_ccdik_joint_enable_constraint),
	JS_CFUNC_DEF("set_ccdik_joint_constraint_angle_min", 2, &skeleton_modification2dccdik_class_set_ccdik_joint_constraint_angle_min),
	JS_CFUNC_DEF("get_ccdik_joint_constraint_angle_min", 1, &skeleton_modification2dccdik_class_get_ccdik_joint_constraint_angle_min),
	JS_CFUNC_DEF("set_ccdik_joint_constraint_angle_max", 2, &skeleton_modification2dccdik_class_set_ccdik_joint_constraint_angle_max),
	JS_CFUNC_DEF("get_ccdik_joint_constraint_angle_max", 1, &skeleton_modification2dccdik_class_get_ccdik_joint_constraint_angle_max),
	JS_CFUNC_DEF("set_ccdik_joint_constraint_angle_invert", 2, &skeleton_modification2dccdik_class_set_ccdik_joint_constraint_angle_invert),
	JS_CFUNC_DEF("get_ccdik_joint_constraint_angle_invert", 1, &skeleton_modification2dccdik_class_get_ccdik_joint_constraint_angle_invert),
};

void define_skeleton_modification2dccdik_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "target_nodepath"),
        JS_NewCFunction(ctx, skeleton_modification2dccdik_class_get_target_node, "get_target_node", 0),
        JS_NewCFunction(ctx, skeleton_modification2dccdik_class_set_target_node, "set_target_node", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "tip_nodepath"),
        JS_NewCFunction(ctx, skeleton_modification2dccdik_class_get_tip_node, "get_tip_node", 0),
        JS_NewCFunction(ctx, skeleton_modification2dccdik_class_set_tip_node, "set_tip_node", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "ccdik_data_chain_length"),
        JS_NewCFunction(ctx, skeleton_modification2dccdik_class_get_ccdik_data_chain_length, "get_ccdik_data_chain_length", 0),
        JS_NewCFunction(ctx, skeleton_modification2dccdik_class_set_ccdik_data_chain_length, "set_ccdik_data_chain_length", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
}

static int js_skeleton_modification2dccdik_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&SkeletonModification2DCCDIK::__class_id);
	classes["SkeletonModification2DCCDIK"] = SkeletonModification2DCCDIK::__class_id;
	class_id_list.insert(SkeletonModification2DCCDIK::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), SkeletonModification2DCCDIK::__class_id, &skeleton_modification2dccdik_class_def);

	JSValue proto = JS_NewObjectClass(ctx, SkeletonModification2DCCDIK::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, SkeletonModification2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, SkeletonModification2DCCDIK::__class_id, proto);

	define_skeleton_modification2dccdik_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, skeleton_modification2dccdik_class_proto_funcs, _countof(skeleton_modification2dccdik_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, skeleton_modification2dccdik_class_constructor, "SkeletonModification2DCCDIK", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "SkeletonModification2DCCDIK", ctor);

	return 0;
}

JSModuleDef *_js_init_skeleton_modification2dccdik_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/skeleton_modification2d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_skeleton_modification2dccdik_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "SkeletonModification2DCCDIK");
	return m;
}

JSModuleDef *js_init_skeleton_modification2dccdik_module(JSContext *ctx) {
	return _js_init_skeleton_modification2dccdik_module(ctx, "godot/classes/skeleton_modification2dccdik");
}

void register_skeleton_modification2dccdik() {
	SkeletonModification2DCCDIK::__init_js_class_id();
	js_init_skeleton_modification2dccdik_module(ctx);
}