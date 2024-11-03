
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/skeleton_modification2d.hpp>
#include <godot_cpp/classes/skeleton_modification2d_physical_bones.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void skeleton_modification2d_physical_bones_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef skeleton_modification2d_physical_bones_class_def = {
	"SkeletonModification2DPhysicalBones",
	.finalizer = skeleton_modification2d_physical_bones_class_finalizer
};

static JSValue skeleton_modification2d_physical_bones_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, SkeletonModification2DPhysicalBones::__class_id);
	if (JS_IsException(obj))
		return obj;

	SkeletonModification2DPhysicalBones *skeleton_modification2d_physical_bones_class;
	if (argc == 1) 
		skeleton_modification2d_physical_bones_class = static_cast<SkeletonModification2DPhysicalBones *>(Variant(*argv).operator Object *());
	else 
		skeleton_modification2d_physical_bones_class = memnew(SkeletonModification2DPhysicalBones);
	if (!skeleton_modification2d_physical_bones_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, skeleton_modification2d_physical_bones_class);
	return obj;
}
static JSValue skeleton_modification2d_physical_bones_class_set_physical_bone_chain_length(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&SkeletonModification2DPhysicalBones::set_physical_bone_chain_length, ctx, this_val, argc, argv);
};
static JSValue skeleton_modification2d_physical_bones_class_get_physical_bone_chain_length(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&SkeletonModification2DPhysicalBones::get_physical_bone_chain_length, ctx, this_val, argc, argv);
};
static JSValue skeleton_modification2d_physical_bones_class_set_physical_bone_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&SkeletonModification2DPhysicalBones::set_physical_bone_node, ctx, this_val, argc, argv);
};
static JSValue skeleton_modification2d_physical_bones_class_get_physical_bone_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&SkeletonModification2DPhysicalBones::get_physical_bone_node, ctx, this_val, argc, argv);
};
static JSValue skeleton_modification2d_physical_bones_class_fetch_physical_bones(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&SkeletonModification2DPhysicalBones::fetch_physical_bones, ctx, this_val, argc, argv);
};
static JSValue skeleton_modification2d_physical_bones_class_start_simulation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&SkeletonModification2DPhysicalBones::start_simulation, ctx, this_val, argc, argv);
};
static JSValue skeleton_modification2d_physical_bones_class_stop_simulation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&SkeletonModification2DPhysicalBones::stop_simulation, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry skeleton_modification2d_physical_bones_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_physical_bone_chain_length", 1, &skeleton_modification2d_physical_bones_class_set_physical_bone_chain_length),
	JS_CFUNC_DEF("get_physical_bone_chain_length", 0, &skeleton_modification2d_physical_bones_class_get_physical_bone_chain_length),
	JS_CFUNC_DEF("set_physical_bone_node", 2, &skeleton_modification2d_physical_bones_class_set_physical_bone_node),
	JS_CFUNC_DEF("get_physical_bone_node", 1, &skeleton_modification2d_physical_bones_class_get_physical_bone_node),
	JS_CFUNC_DEF("fetch_physical_bones", 0, &skeleton_modification2d_physical_bones_class_fetch_physical_bones),
	JS_CFUNC_DEF("start_simulation", 1, &skeleton_modification2d_physical_bones_class_start_simulation),
	JS_CFUNC_DEF("stop_simulation", 1, &skeleton_modification2d_physical_bones_class_stop_simulation),
};

static void define_skeleton_modification2d_physical_bones_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "physical_bone_chain_length"),
        JS_NewCFunction(ctx, skeleton_modification2d_physical_bones_class_get_physical_bone_chain_length, "get_physical_bone_chain_length", 0),
        JS_NewCFunction(ctx, skeleton_modification2d_physical_bones_class_set_physical_bone_chain_length, "set_physical_bone_chain_length", 1),
        JS_PROP_GETSET
    );
	
}

static void define_skeleton_modification2d_physical_bones_enum(JSContext *ctx, JSValue proto) {
}

static int js_skeleton_modification2d_physical_bones_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["SkeletonModification2DPhysicalBones"] = SkeletonModification2DPhysicalBones::__class_id;
	class_id_list.insert(SkeletonModification2DPhysicalBones::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), SkeletonModification2DPhysicalBones::__class_id, &skeleton_modification2d_physical_bones_class_def);

	JSValue proto = JS_NewObjectClass(ctx, SkeletonModification2DPhysicalBones::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, SkeletonModification2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, SkeletonModification2DPhysicalBones::__class_id, proto);

	define_skeleton_modification2d_physical_bones_property(ctx, proto);
	define_skeleton_modification2d_physical_bones_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, skeleton_modification2d_physical_bones_class_proto_funcs, _countof(skeleton_modification2d_physical_bones_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, skeleton_modification2d_physical_bones_class_constructor, "SkeletonModification2DPhysicalBones", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "SkeletonModification2DPhysicalBones", ctor);
	constructors[SkeletonModification2DPhysicalBones::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_skeleton_modification2d_physical_bones_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/skeleton_modification2d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_skeleton_modification2d_physical_bones_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "SkeletonModification2DPhysicalBones");
	return m;
}

JSModuleDef *js_init_skeleton_modification2d_physical_bones_module(JSContext *ctx) {
	return _js_init_skeleton_modification2d_physical_bones_module(ctx, "@godot/classes/skeleton_modification2d_physical_bones");
}

void register_skeleton_modification2d_physical_bones() {
	SkeletonModification2DPhysicalBones::__init_js_class_id();
	js_init_skeleton_modification2d_physical_bones_module(ctx);
}