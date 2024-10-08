
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/skeleton_modification2d.hpp>
#include <godot_cpp/classes/skeleton_modification2d_physical_bones.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void skeleton_modification2d_physical_bones_class_finalizer(JSRuntime *rt, JSValue val) {
	SkeletonModification2DPhysicalBones *skeleton_modification2d_physical_bones = static_cast<SkeletonModification2DPhysicalBones *>(JS_GetOpaque(val, SkeletonModification2DPhysicalBones::__class_id));
	if (skeleton_modification2d_physical_bones)
		SkeletonModification2DPhysicalBones::free(nullptr, skeleton_modification2d_physical_bones);
}

static JSClassDef skeleton_modification2d_physical_bones_class_def = {
	"SkeletonModification2DPhysicalBones",
	.finalizer = skeleton_modification2d_physical_bones_class_finalizer
};

static JSValue skeleton_modification2d_physical_bones_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	SkeletonModification2DPhysicalBones *skeleton_modification2d_physical_bones_class;
	JSValue obj = JS_NewObjectClass(ctx, SkeletonModification2DPhysicalBones::__class_id);
	if (JS_IsException(obj))
		return obj;
	skeleton_modification2d_physical_bones_class = memnew(SkeletonModification2DPhysicalBones);
	if (!skeleton_modification2d_physical_bones_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, skeleton_modification2d_physical_bones_class);
	return obj;
}
static JSValue skeleton_modification2d_physical_bones_class_set_physical_bone_chain_length(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SkeletonModification2DPhysicalBones::set_physical_bone_chain_length, SkeletonModification2DPhysicalBones::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton_modification2d_physical_bones_class_get_physical_bone_chain_length(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&SkeletonModification2DPhysicalBones::get_physical_bone_chain_length, SkeletonModification2DPhysicalBones::__class_id, ctx, this_val, argv);
};
static JSValue skeleton_modification2d_physical_bones_class_set_physical_bone_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SkeletonModification2DPhysicalBones::set_physical_bone_node, SkeletonModification2DPhysicalBones::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton_modification2d_physical_bones_class_get_physical_bone_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SkeletonModification2DPhysicalBones::get_physical_bone_node, SkeletonModification2DPhysicalBones::__class_id, ctx, this_val, argv);
};
static JSValue skeleton_modification2d_physical_bones_class_fetch_physical_bones(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SkeletonModification2DPhysicalBones::fetch_physical_bones, SkeletonModification2DPhysicalBones::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton_modification2d_physical_bones_class_start_simulation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SkeletonModification2DPhysicalBones::start_simulation, SkeletonModification2DPhysicalBones::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton_modification2d_physical_bones_class_stop_simulation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SkeletonModification2DPhysicalBones::stop_simulation, SkeletonModification2DPhysicalBones::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
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

static int js_skeleton_modification2d_physical_bones_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&SkeletonModification2DPhysicalBones::__class_id);
	classes["SkeletonModification2DPhysicalBones"] = SkeletonModification2DPhysicalBones::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), SkeletonModification2DPhysicalBones::__class_id, &skeleton_modification2d_physical_bones_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, SkeletonModification2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, SkeletonModification2DPhysicalBones::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, skeleton_modification2d_physical_bones_class_proto_funcs, _countof(skeleton_modification2d_physical_bones_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, skeleton_modification2d_physical_bones_class_constructor, "SkeletonModification2DPhysicalBones", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "SkeletonModification2DPhysicalBones", ctor);

	return 0;
}

JSModuleDef *_js_init_skeleton_modification2d_physical_bones_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_skeleton_modification2d_physical_bones_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "SkeletonModification2DPhysicalBones");
	return m;
}

JSModuleDef *js_init_skeleton_modification2d_physical_bones_module(JSContext *ctx) {
	return _js_init_skeleton_modification2d_physical_bones_module(ctx, "godot/classes/skeleton_modification2d_physical_bones");
}

void register_skeleton_modification2d_physical_bones() {
	js_init_skeleton_modification2d_physical_bones_module(ctx);
}