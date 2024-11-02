
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/skeleton_modification2d.hpp>
#include <godot_cpp/classes/skeleton_modification2dfabrik.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void skeleton_modification2dfabrik_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef skeleton_modification2dfabrik_class_def = {
	"SkeletonModification2DFABRIK",
	.finalizer = skeleton_modification2dfabrik_class_finalizer
};

static JSValue skeleton_modification2dfabrik_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, SkeletonModification2DFABRIK::__class_id);
	if (JS_IsException(obj))
		return obj;

	SkeletonModification2DFABRIK *skeleton_modification2dfabrik_class;
	if (argc == 1) 
		skeleton_modification2dfabrik_class = static_cast<SkeletonModification2DFABRIK *>(Variant(*argv).operator Object *());
	else 
		skeleton_modification2dfabrik_class = memnew(SkeletonModification2DFABRIK);
	if (!skeleton_modification2dfabrik_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, skeleton_modification2dfabrik_class);
	return obj;
}
static JSValue skeleton_modification2dfabrik_class_set_target_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&SkeletonModification2DFABRIK::set_target_node, ctx, this_val, argc, argv);
};
static JSValue skeleton_modification2dfabrik_class_get_target_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&SkeletonModification2DFABRIK::get_target_node, ctx, this_val, argc, argv);
};
static JSValue skeleton_modification2dfabrik_class_set_fabrik_data_chain_length(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&SkeletonModification2DFABRIK::set_fabrik_data_chain_length, ctx, this_val, argc, argv);
};
static JSValue skeleton_modification2dfabrik_class_get_fabrik_data_chain_length(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&SkeletonModification2DFABRIK::get_fabrik_data_chain_length, ctx, this_val, argc, argv);
};
static JSValue skeleton_modification2dfabrik_class_set_fabrik_joint_bone2d_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&SkeletonModification2DFABRIK::set_fabrik_joint_bone2d_node, ctx, this_val, argc, argv);
};
static JSValue skeleton_modification2dfabrik_class_get_fabrik_joint_bone2d_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&SkeletonModification2DFABRIK::get_fabrik_joint_bone2d_node, ctx, this_val, argc, argv);
};
static JSValue skeleton_modification2dfabrik_class_set_fabrik_joint_bone_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&SkeletonModification2DFABRIK::set_fabrik_joint_bone_index, ctx, this_val, argc, argv);
};
static JSValue skeleton_modification2dfabrik_class_get_fabrik_joint_bone_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&SkeletonModification2DFABRIK::get_fabrik_joint_bone_index, ctx, this_val, argc, argv);
};
static JSValue skeleton_modification2dfabrik_class_set_fabrik_joint_magnet_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&SkeletonModification2DFABRIK::set_fabrik_joint_magnet_position, ctx, this_val, argc, argv);
};
static JSValue skeleton_modification2dfabrik_class_get_fabrik_joint_magnet_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&SkeletonModification2DFABRIK::get_fabrik_joint_magnet_position, ctx, this_val, argc, argv);
};
static JSValue skeleton_modification2dfabrik_class_set_fabrik_joint_use_target_rotation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&SkeletonModification2DFABRIK::set_fabrik_joint_use_target_rotation, ctx, this_val, argc, argv);
};
static JSValue skeleton_modification2dfabrik_class_get_fabrik_joint_use_target_rotation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&SkeletonModification2DFABRIK::get_fabrik_joint_use_target_rotation, ctx, this_val, argc, argv);
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

static void define_skeleton_modification2dfabrik_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "target_nodepath"),
        JS_NewCFunction(ctx, skeleton_modification2dfabrik_class_get_target_node, "get_target_node", 0),
        JS_NewCFunction(ctx, skeleton_modification2dfabrik_class_set_target_node, "set_target_node", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "fabrik_data_chain_length"),
        JS_NewCFunction(ctx, skeleton_modification2dfabrik_class_get_fabrik_data_chain_length, "get_fabrik_data_chain_length", 0),
        JS_NewCFunction(ctx, skeleton_modification2dfabrik_class_set_fabrik_data_chain_length, "set_fabrik_data_chain_length", 1),
        JS_PROP_GETSET
    );
	
}

static void define_skeleton_modification2dfabrik_enum(JSContext *ctx, JSValue proto) {
}

static int js_skeleton_modification2dfabrik_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["SkeletonModification2DFABRIK"] = SkeletonModification2DFABRIK::__class_id;
	class_id_list.insert(SkeletonModification2DFABRIK::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), SkeletonModification2DFABRIK::__class_id, &skeleton_modification2dfabrik_class_def);

	JSValue proto = JS_NewObjectClass(ctx, SkeletonModification2DFABRIK::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, SkeletonModification2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, SkeletonModification2DFABRIK::__class_id, proto);

	define_skeleton_modification2dfabrik_property(ctx, proto);
	define_skeleton_modification2dfabrik_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, skeleton_modification2dfabrik_class_proto_funcs, _countof(skeleton_modification2dfabrik_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, skeleton_modification2dfabrik_class_constructor, "SkeletonModification2DFABRIK", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "SkeletonModification2DFABRIK", ctor);

	return 0;
}

JSModuleDef *_js_init_skeleton_modification2dfabrik_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/skeleton_modification2d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_skeleton_modification2dfabrik_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "SkeletonModification2DFABRIK");
	return m;
}

JSModuleDef *js_init_skeleton_modification2dfabrik_module(JSContext *ctx) {
	return _js_init_skeleton_modification2dfabrik_module(ctx, "@godot/classes/skeleton_modification2dfabrik");
}

void register_skeleton_modification2dfabrik() {
	SkeletonModification2DFABRIK::__init_js_class_id();
	js_init_skeleton_modification2dfabrik_module(ctx);
}