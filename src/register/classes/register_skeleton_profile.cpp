
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/skeleton_profile.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void skeleton_profile_class_finalizer(JSRuntime *rt, JSValue val) {
	SkeletonProfile *skeleton_profile = static_cast<SkeletonProfile *>(JS_GetOpaque(val, SkeletonProfile::__class_id));
	if (skeleton_profile)
		SkeletonProfile::free(nullptr, skeleton_profile);
}

static JSClassDef skeleton_profile_class_def = {
	"SkeletonProfile",
	.finalizer = skeleton_profile_class_finalizer
};

static JSValue skeleton_profile_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	SkeletonProfile *skeleton_profile_class;
	JSValue obj = JS_NewObjectClass(ctx, SkeletonProfile::__class_id);
	if (JS_IsException(obj))
		return obj;
	skeleton_profile_class = memnew(SkeletonProfile);
	if (!skeleton_profile_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, skeleton_profile_class);
	return obj;
}
static JSValue skeleton_profile_class_set_root_bone(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SkeletonProfile::set_root_bone, SkeletonProfile::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton_profile_class_get_root_bone(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&SkeletonProfile::get_root_bone, SkeletonProfile::__class_id, ctx, this_val, argv);
};
static JSValue skeleton_profile_class_set_scale_base_bone(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SkeletonProfile::set_scale_base_bone, SkeletonProfile::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton_profile_class_get_scale_base_bone(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&SkeletonProfile::get_scale_base_bone, SkeletonProfile::__class_id, ctx, this_val, argv);
};
static JSValue skeleton_profile_class_set_group_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SkeletonProfile::set_group_size, SkeletonProfile::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton_profile_class_get_group_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&SkeletonProfile::get_group_size, SkeletonProfile::__class_id, ctx, this_val, argv);
};
static JSValue skeleton_profile_class_get_group_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SkeletonProfile::get_group_name, SkeletonProfile::__class_id, ctx, this_val, argv);
};
static JSValue skeleton_profile_class_set_group_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SkeletonProfile::set_group_name, SkeletonProfile::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton_profile_class_get_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SkeletonProfile::get_texture, SkeletonProfile::__class_id, ctx, this_val, argv);
};
static JSValue skeleton_profile_class_set_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SkeletonProfile::set_texture, SkeletonProfile::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton_profile_class_set_bone_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SkeletonProfile::set_bone_size, SkeletonProfile::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton_profile_class_get_bone_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&SkeletonProfile::get_bone_size, SkeletonProfile::__class_id, ctx, this_val, argv);
};
static JSValue skeleton_profile_class_find_bone(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SkeletonProfile::find_bone, SkeletonProfile::__class_id, ctx, this_val, argv);
};
static JSValue skeleton_profile_class_get_bone_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SkeletonProfile::get_bone_name, SkeletonProfile::__class_id, ctx, this_val, argv);
};
static JSValue skeleton_profile_class_set_bone_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SkeletonProfile::set_bone_name, SkeletonProfile::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton_profile_class_get_bone_parent(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SkeletonProfile::get_bone_parent, SkeletonProfile::__class_id, ctx, this_val, argv);
};
static JSValue skeleton_profile_class_set_bone_parent(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SkeletonProfile::set_bone_parent, SkeletonProfile::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton_profile_class_get_tail_direction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SkeletonProfile::get_tail_direction, SkeletonProfile::__class_id, ctx, this_val, argv);
};
static JSValue skeleton_profile_class_set_tail_direction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SkeletonProfile::set_tail_direction, SkeletonProfile::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton_profile_class_get_bone_tail(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SkeletonProfile::get_bone_tail, SkeletonProfile::__class_id, ctx, this_val, argv);
};
static JSValue skeleton_profile_class_set_bone_tail(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SkeletonProfile::set_bone_tail, SkeletonProfile::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton_profile_class_get_reference_pose(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SkeletonProfile::get_reference_pose, SkeletonProfile::__class_id, ctx, this_val, argv);
};
static JSValue skeleton_profile_class_set_reference_pose(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SkeletonProfile::set_reference_pose, SkeletonProfile::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton_profile_class_get_handle_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SkeletonProfile::get_handle_offset, SkeletonProfile::__class_id, ctx, this_val, argv);
};
static JSValue skeleton_profile_class_set_handle_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SkeletonProfile::set_handle_offset, SkeletonProfile::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton_profile_class_get_group(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SkeletonProfile::get_group, SkeletonProfile::__class_id, ctx, this_val, argv);
};
static JSValue skeleton_profile_class_set_group(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SkeletonProfile::set_group, SkeletonProfile::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue skeleton_profile_class_is_required(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SkeletonProfile::is_required, SkeletonProfile::__class_id, ctx, this_val, argv);
};
static JSValue skeleton_profile_class_set_required(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&SkeletonProfile::set_required, SkeletonProfile::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry skeleton_profile_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_root_bone", 1, &skeleton_profile_class_set_root_bone),
	JS_CFUNC_DEF("get_root_bone", 0, &skeleton_profile_class_get_root_bone),
	JS_CFUNC_DEF("set_scale_base_bone", 1, &skeleton_profile_class_set_scale_base_bone),
	JS_CFUNC_DEF("get_scale_base_bone", 0, &skeleton_profile_class_get_scale_base_bone),
	JS_CFUNC_DEF("set_group_size", 1, &skeleton_profile_class_set_group_size),
	JS_CFUNC_DEF("get_group_size", 0, &skeleton_profile_class_get_group_size),
	JS_CFUNC_DEF("get_group_name", 1, &skeleton_profile_class_get_group_name),
	JS_CFUNC_DEF("set_group_name", 2, &skeleton_profile_class_set_group_name),
	JS_CFUNC_DEF("get_texture", 1, &skeleton_profile_class_get_texture),
	JS_CFUNC_DEF("set_texture", 2, &skeleton_profile_class_set_texture),
	JS_CFUNC_DEF("set_bone_size", 1, &skeleton_profile_class_set_bone_size),
	JS_CFUNC_DEF("get_bone_size", 0, &skeleton_profile_class_get_bone_size),
	JS_CFUNC_DEF("find_bone", 1, &skeleton_profile_class_find_bone),
	JS_CFUNC_DEF("get_bone_name", 1, &skeleton_profile_class_get_bone_name),
	JS_CFUNC_DEF("set_bone_name", 2, &skeleton_profile_class_set_bone_name),
	JS_CFUNC_DEF("get_bone_parent", 1, &skeleton_profile_class_get_bone_parent),
	JS_CFUNC_DEF("set_bone_parent", 2, &skeleton_profile_class_set_bone_parent),
	JS_CFUNC_DEF("get_tail_direction", 1, &skeleton_profile_class_get_tail_direction),
	JS_CFUNC_DEF("set_tail_direction", 2, &skeleton_profile_class_set_tail_direction),
	JS_CFUNC_DEF("get_bone_tail", 1, &skeleton_profile_class_get_bone_tail),
	JS_CFUNC_DEF("set_bone_tail", 2, &skeleton_profile_class_set_bone_tail),
	JS_CFUNC_DEF("get_reference_pose", 1, &skeleton_profile_class_get_reference_pose),
	JS_CFUNC_DEF("set_reference_pose", 2, &skeleton_profile_class_set_reference_pose),
	JS_CFUNC_DEF("get_handle_offset", 1, &skeleton_profile_class_get_handle_offset),
	JS_CFUNC_DEF("set_handle_offset", 2, &skeleton_profile_class_set_handle_offset),
	JS_CFUNC_DEF("get_group", 1, &skeleton_profile_class_get_group),
	JS_CFUNC_DEF("set_group", 2, &skeleton_profile_class_set_group),
	JS_CFUNC_DEF("is_required", 1, &skeleton_profile_class_is_required),
	JS_CFUNC_DEF("set_required", 2, &skeleton_profile_class_set_required),
};

static int js_skeleton_profile_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&SkeletonProfile::__class_id);
	classes["SkeletonProfile"] = SkeletonProfile::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), SkeletonProfile::__class_id, &skeleton_profile_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, SkeletonProfile::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, skeleton_profile_class_proto_funcs, _countof(skeleton_profile_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, skeleton_profile_class_constructor, "SkeletonProfile", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "SkeletonProfile", ctor);

	return 0;
}

JSModuleDef *_js_init_skeleton_profile_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_skeleton_profile_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "SkeletonProfile");
	return m;
}

JSModuleDef *js_init_skeleton_profile_module(JSContext *ctx) {
	return _js_init_skeleton_profile_module(ctx, "godot/classes/skeleton_profile");
}

void register_skeleton_profile() {
	js_init_skeleton_profile_module(ctx);
}