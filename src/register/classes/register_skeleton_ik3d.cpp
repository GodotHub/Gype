
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/skeleton3d.hpp>
#include <godot_cpp/classes/skeleton_ik3d.hpp>
#include <godot_cpp/classes/skeleton_modifier3d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void skeleton_ik3d_class_finalizer(JSRuntime *rt, JSValue val) {
	SkeletonIK3D *skeleton_ik3d = static_cast<SkeletonIK3D *>(JS_GetOpaque(val, SkeletonIK3D::__class_id));
	if (skeleton_ik3d)
		SkeletonIK3D::free(nullptr, skeleton_ik3d);
}

static JSClassDef skeleton_ik3d_class_def = {
	"SkeletonIK3D",
	.finalizer = skeleton_ik3d_class_finalizer
};

static JSValue skeleton_ik3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	SkeletonIK3D *skeleton_ik3d_class;
	JSValue obj = JS_NewObjectClass(ctx, SkeletonIK3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	skeleton_ik3d_class = memnew(SkeletonIK3D);
	if (!skeleton_ik3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, skeleton_ik3d_class);
	return obj;
}
static JSValue skeleton_ik3d_class_set_root_bone(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SkeletonIK3D::set_root_bone, SkeletonIK3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton_ik3d_class_get_root_bone(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SkeletonIK3D::get_root_bone, SkeletonIK3D::__class_id, ctx, this_val, argv);
};
static JSValue skeleton_ik3d_class_set_tip_bone(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SkeletonIK3D::set_tip_bone, SkeletonIK3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton_ik3d_class_get_tip_bone(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SkeletonIK3D::get_tip_bone, SkeletonIK3D::__class_id, ctx, this_val, argv);
};
static JSValue skeleton_ik3d_class_set_target_transform(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SkeletonIK3D::set_target_transform, SkeletonIK3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton_ik3d_class_get_target_transform(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SkeletonIK3D::get_target_transform, SkeletonIK3D::__class_id, ctx, this_val, argv);
};
static JSValue skeleton_ik3d_class_set_target_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SkeletonIK3D::set_target_node, SkeletonIK3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton_ik3d_class_get_target_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&SkeletonIK3D::get_target_node, SkeletonIK3D::__class_id, ctx, this_val, argv);
};
static JSValue skeleton_ik3d_class_set_override_tip_basis(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SkeletonIK3D::set_override_tip_basis, SkeletonIK3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton_ik3d_class_is_override_tip_basis(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SkeletonIK3D::is_override_tip_basis, SkeletonIK3D::__class_id, ctx, this_val, argv);
};
static JSValue skeleton_ik3d_class_set_use_magnet(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SkeletonIK3D::set_use_magnet, SkeletonIK3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton_ik3d_class_is_using_magnet(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SkeletonIK3D::is_using_magnet, SkeletonIK3D::__class_id, ctx, this_val, argv);
};
static JSValue skeleton_ik3d_class_set_magnet_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SkeletonIK3D::set_magnet_position, SkeletonIK3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton_ik3d_class_get_magnet_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SkeletonIK3D::get_magnet_position, SkeletonIK3D::__class_id, ctx, this_val, argv);
};
static JSValue skeleton_ik3d_class_get_parent_skeleton(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SkeletonIK3D::get_parent_skeleton, SkeletonIK3D::__class_id, ctx, this_val, argv);
};
static JSValue skeleton_ik3d_class_is_running(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&SkeletonIK3D::is_running, SkeletonIK3D::__class_id, ctx, this_val, argv);
};
static JSValue skeleton_ik3d_class_set_min_distance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SkeletonIK3D::set_min_distance, SkeletonIK3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton_ik3d_class_get_min_distance(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SkeletonIK3D::get_min_distance, SkeletonIK3D::__class_id, ctx, this_val, argv);
};
static JSValue skeleton_ik3d_class_set_max_iterations(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SkeletonIK3D::set_max_iterations, SkeletonIK3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton_ik3d_class_get_max_iterations(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SkeletonIK3D::get_max_iterations, SkeletonIK3D::__class_id, ctx, this_val, argv);
};
static JSValue skeleton_ik3d_class_start(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SkeletonIK3D::start, SkeletonIK3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton_ik3d_class_stop(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SkeletonIK3D::stop, SkeletonIK3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton_ik3d_class_set_interpolation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SkeletonIK3D::set_interpolation, SkeletonIK3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton_ik3d_class_get_interpolation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SkeletonIK3D::get_interpolation, SkeletonIK3D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry skeleton_ik3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_root_bone", 1, &skeleton_ik3d_class_set_root_bone),
	JS_CFUNC_DEF("get_root_bone", 0, &skeleton_ik3d_class_get_root_bone),
	JS_CFUNC_DEF("set_tip_bone", 1, &skeleton_ik3d_class_set_tip_bone),
	JS_CFUNC_DEF("get_tip_bone", 0, &skeleton_ik3d_class_get_tip_bone),
	JS_CFUNC_DEF("set_target_transform", 1, &skeleton_ik3d_class_set_target_transform),
	JS_CFUNC_DEF("get_target_transform", 0, &skeleton_ik3d_class_get_target_transform),
	JS_CFUNC_DEF("set_target_node", 1, &skeleton_ik3d_class_set_target_node),
	JS_CFUNC_DEF("get_target_node", 0, &skeleton_ik3d_class_get_target_node),
	JS_CFUNC_DEF("set_override_tip_basis", 1, &skeleton_ik3d_class_set_override_tip_basis),
	JS_CFUNC_DEF("is_override_tip_basis", 0, &skeleton_ik3d_class_is_override_tip_basis),
	JS_CFUNC_DEF("set_use_magnet", 1, &skeleton_ik3d_class_set_use_magnet),
	JS_CFUNC_DEF("is_using_magnet", 0, &skeleton_ik3d_class_is_using_magnet),
	JS_CFUNC_DEF("set_magnet_position", 1, &skeleton_ik3d_class_set_magnet_position),
	JS_CFUNC_DEF("get_magnet_position", 0, &skeleton_ik3d_class_get_magnet_position),
	JS_CFUNC_DEF("get_parent_skeleton", 0, &skeleton_ik3d_class_get_parent_skeleton),
	JS_CFUNC_DEF("is_running", 0, &skeleton_ik3d_class_is_running),
	JS_CFUNC_DEF("set_min_distance", 1, &skeleton_ik3d_class_set_min_distance),
	JS_CFUNC_DEF("get_min_distance", 0, &skeleton_ik3d_class_get_min_distance),
	JS_CFUNC_DEF("set_max_iterations", 1, &skeleton_ik3d_class_set_max_iterations),
	JS_CFUNC_DEF("get_max_iterations", 0, &skeleton_ik3d_class_get_max_iterations),
	JS_CFUNC_DEF("start", 1, &skeleton_ik3d_class_start),
	JS_CFUNC_DEF("stop", 0, &skeleton_ik3d_class_stop),
	JS_CFUNC_DEF("set_interpolation", 1, &skeleton_ik3d_class_set_interpolation),
	JS_CFUNC_DEF("get_interpolation", 0, &skeleton_ik3d_class_get_interpolation),
};

static int js_skeleton_ik3d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&SkeletonIK3D::__class_id);
	classes["SkeletonIK3D"] = SkeletonIK3D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), SkeletonIK3D::__class_id, &skeleton_ik3d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, SkeletonModifier3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, SkeletonIK3D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, skeleton_ik3d_class_proto_funcs, _countof(skeleton_ik3d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, skeleton_ik3d_class_constructor, "SkeletonIK3D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "SkeletonIK3D", ctor);

	return 0;
}

JSModuleDef *_js_init_skeleton_ik3d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_skeleton_ik3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "SkeletonIK3D");
	return m;
}

JSModuleDef *js_init_skeleton_ik3d_module(JSContext *ctx) {
	return _js_init_skeleton_ik3d_module(ctx, "godot/classes/skeleton_ik3d");
}

void register_skeleton_ik3d() {
	js_init_skeleton_ik3d_module(ctx);
}