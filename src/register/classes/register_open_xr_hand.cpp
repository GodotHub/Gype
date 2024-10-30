
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/classes/open_xr_hand.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void open_xr_hand_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef open_xr_hand_class_def = {
	"OpenXRHand",
	.finalizer = open_xr_hand_class_finalizer
};

static JSValue open_xr_hand_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, OpenXRHand::__class_id);
	if (JS_IsException(obj))
		return obj;
	OpenXRHand *open_xr_hand_class;
	if (argc == 1) {
		Variant vobj = *argv;
		open_xr_hand_class = static_cast<OpenXRHand *>(static_cast<Object *>(vobj));
	} else {
		open_xr_hand_class = memnew(OpenXRHand);
	}
	if (!open_xr_hand_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, open_xr_hand_class);	
	return obj;
}
static JSValue open_xr_hand_class_set_hand(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&OpenXRHand::set_hand, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue open_xr_hand_class_get_hand(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&OpenXRHand::get_hand, ctx, this_val, argc, argv);
};
static JSValue open_xr_hand_class_set_hand_skeleton(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&OpenXRHand::set_hand_skeleton, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue open_xr_hand_class_get_hand_skeleton(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&OpenXRHand::get_hand_skeleton, ctx, this_val, argc, argv);
};
static JSValue open_xr_hand_class_set_motion_range(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&OpenXRHand::set_motion_range, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue open_xr_hand_class_get_motion_range(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&OpenXRHand::get_motion_range, ctx, this_val, argc, argv);
};
static JSValue open_xr_hand_class_set_skeleton_rig(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&OpenXRHand::set_skeleton_rig, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue open_xr_hand_class_get_skeleton_rig(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&OpenXRHand::get_skeleton_rig, ctx, this_val, argc, argv);
};
static JSValue open_xr_hand_class_set_bone_update(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&OpenXRHand::set_bone_update, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue open_xr_hand_class_get_bone_update(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&OpenXRHand::get_bone_update, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry open_xr_hand_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_hand", 1, &open_xr_hand_class_set_hand),
	JS_CFUNC_DEF("get_hand", 0, &open_xr_hand_class_get_hand),
	JS_CFUNC_DEF("set_hand_skeleton", 1, &open_xr_hand_class_set_hand_skeleton),
	JS_CFUNC_DEF("get_hand_skeleton", 0, &open_xr_hand_class_get_hand_skeleton),
	JS_CFUNC_DEF("set_motion_range", 1, &open_xr_hand_class_set_motion_range),
	JS_CFUNC_DEF("get_motion_range", 0, &open_xr_hand_class_get_motion_range),
	JS_CFUNC_DEF("set_skeleton_rig", 1, &open_xr_hand_class_set_skeleton_rig),
	JS_CFUNC_DEF("get_skeleton_rig", 0, &open_xr_hand_class_get_skeleton_rig),
	JS_CFUNC_DEF("set_bone_update", 1, &open_xr_hand_class_set_bone_update),
	JS_CFUNC_DEF("get_bone_update", 0, &open_xr_hand_class_get_bone_update),
};

void define_open_xr_hand_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "hand"),
        JS_NewCFunction(ctx, open_xr_hand_class_get_hand, "get_hand", 0),
        JS_NewCFunction(ctx, open_xr_hand_class_set_hand, "set_hand", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "motion_range"),
        JS_NewCFunction(ctx, open_xr_hand_class_get_motion_range, "get_motion_range", 0),
        JS_NewCFunction(ctx, open_xr_hand_class_set_motion_range, "set_motion_range", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "hand_skeleton"),
        JS_NewCFunction(ctx, open_xr_hand_class_get_hand_skeleton, "get_hand_skeleton", 0),
        JS_NewCFunction(ctx, open_xr_hand_class_set_hand_skeleton, "set_hand_skeleton", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "skeleton_rig"),
        JS_NewCFunction(ctx, open_xr_hand_class_get_skeleton_rig, "get_skeleton_rig", 0),
        JS_NewCFunction(ctx, open_xr_hand_class_set_skeleton_rig, "set_skeleton_rig", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "bone_update"),
        JS_NewCFunction(ctx, open_xr_hand_class_get_bone_update, "get_bone_update", 0),
        JS_NewCFunction(ctx, open_xr_hand_class_set_bone_update, "set_bone_update", 1),
        JS_PROP_GETSET
    );
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
	JSValue Hands_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, Hands_obj, "HAND_LEFT", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, Hands_obj, "HAND_RIGHT", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, Hands_obj, "HAND_MAX", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, proto, "Hands", Hands_obj);
	JSValue MotionRange_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, MotionRange_obj, "MOTION_RANGE_UNOBSTRUCTED", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, MotionRange_obj, "MOTION_RANGE_CONFORM_TO_CONTROLLER", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, MotionRange_obj, "MOTION_RANGE_MAX", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, proto, "MotionRange", MotionRange_obj);
	JSValue SkeletonRig_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, SkeletonRig_obj, "SKELETON_RIG_OPENXR", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, SkeletonRig_obj, "SKELETON_RIG_HUMANOID", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, SkeletonRig_obj, "SKELETON_RIG_MAX", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, proto, "SkeletonRig", SkeletonRig_obj);
	JSValue BoneUpdate_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, BoneUpdate_obj, "BONE_UPDATE_FULL", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, BoneUpdate_obj, "BONE_UPDATE_ROTATION_ONLY", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, BoneUpdate_obj, "BONE_UPDATE_MAX", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, proto, "BoneUpdate", BoneUpdate_obj);
}

static int js_open_xr_hand_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&OpenXRHand::__class_id);
	classes["OpenXRHand"] = OpenXRHand::__class_id;
	class_id_list.insert(OpenXRHand::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), OpenXRHand::__class_id, &open_xr_hand_class_def);

	JSValue proto = JS_NewObjectClass(ctx, OpenXRHand::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Node3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, OpenXRHand::__class_id, proto);

	define_open_xr_hand_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, open_xr_hand_class_proto_funcs, _countof(open_xr_hand_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, open_xr_hand_class_constructor, "OpenXRHand", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "OpenXRHand", ctor);

	return 0;
}

JSModuleDef *_js_init_open_xr_hand_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/node3d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_open_xr_hand_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "OpenXRHand");
	return m;
}

JSModuleDef *js_init_open_xr_hand_module(JSContext *ctx) {
	return _js_init_open_xr_hand_module(ctx, "@godot/classes/open_xr_hand");
}

void register_open_xr_hand() {
	OpenXRHand::__init_js_class_id();
	js_init_open_xr_hand_module(ctx);
}