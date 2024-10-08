
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/gltf_skin.hpp>
#include <godot_cpp/classes/skin.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void gltf_skin_class_finalizer(JSRuntime *rt, JSValue val) {
	GLTFSkin *gltf_skin = static_cast<GLTFSkin *>(JS_GetOpaque(val, GLTFSkin::__class_id));
	if (gltf_skin)
		GLTFSkin::free(nullptr, gltf_skin);
}

static JSClassDef gltf_skin_class_def = {
	"GLTFSkin",
	.finalizer = gltf_skin_class_finalizer
};

static JSValue gltf_skin_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	GLTFSkin *gltf_skin_class;
	JSValue obj = JS_NewObjectClass(ctx, GLTFSkin::__class_id);
	if (JS_IsException(obj))
		return obj;
	gltf_skin_class = memnew(GLTFSkin);
	if (!gltf_skin_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, gltf_skin_class);
	return obj;
}
static JSValue gltf_skin_class_get_skin_root(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFSkin::get_skin_root, GLTFSkin::__class_id, ctx, this_val, argv);
};
static JSValue gltf_skin_class_set_skin_root(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GLTFSkin::set_skin_root, GLTFSkin::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_skin_class_get_joints_original(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFSkin::get_joints_original, GLTFSkin::__class_id, ctx, this_val, argv);
};
static JSValue gltf_skin_class_set_joints_original(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GLTFSkin::set_joints_original, GLTFSkin::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_skin_class_get_inverse_binds(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFSkin::get_inverse_binds, GLTFSkin::__class_id, ctx, this_val, argv);
};
static JSValue gltf_skin_class_set_inverse_binds(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GLTFSkin::set_inverse_binds, GLTFSkin::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_skin_class_get_joints(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFSkin::get_joints, GLTFSkin::__class_id, ctx, this_val, argv);
};
static JSValue gltf_skin_class_set_joints(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GLTFSkin::set_joints, GLTFSkin::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_skin_class_get_non_joints(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFSkin::get_non_joints, GLTFSkin::__class_id, ctx, this_val, argv);
};
static JSValue gltf_skin_class_set_non_joints(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GLTFSkin::set_non_joints, GLTFSkin::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_skin_class_get_roots(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFSkin::get_roots, GLTFSkin::__class_id, ctx, this_val, argv);
};
static JSValue gltf_skin_class_set_roots(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GLTFSkin::set_roots, GLTFSkin::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_skin_class_get_skeleton(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFSkin::get_skeleton, GLTFSkin::__class_id, ctx, this_val, argv);
};
static JSValue gltf_skin_class_set_skeleton(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GLTFSkin::set_skeleton, GLTFSkin::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_skin_class_get_joint_i_to_bone_i(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFSkin::get_joint_i_to_bone_i, GLTFSkin::__class_id, ctx, this_val, argv);
};
static JSValue gltf_skin_class_set_joint_i_to_bone_i(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GLTFSkin::set_joint_i_to_bone_i, GLTFSkin::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_skin_class_get_joint_i_to_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFSkin::get_joint_i_to_name, GLTFSkin::__class_id, ctx, this_val, argv);
};
static JSValue gltf_skin_class_set_joint_i_to_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GLTFSkin::set_joint_i_to_name, GLTFSkin::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_skin_class_get_godot_skin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFSkin::get_godot_skin, GLTFSkin::__class_id, ctx, this_val, argv);
};
static JSValue gltf_skin_class_set_godot_skin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GLTFSkin::set_godot_skin, GLTFSkin::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry gltf_skin_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_skin_root", 0, &gltf_skin_class_get_skin_root),
	JS_CFUNC_DEF("set_skin_root", 1, &gltf_skin_class_set_skin_root),
	JS_CFUNC_DEF("get_joints_original", 0, &gltf_skin_class_get_joints_original),
	JS_CFUNC_DEF("set_joints_original", 1, &gltf_skin_class_set_joints_original),
	JS_CFUNC_DEF("get_inverse_binds", 0, &gltf_skin_class_get_inverse_binds),
	JS_CFUNC_DEF("set_inverse_binds", 1, &gltf_skin_class_set_inverse_binds),
	JS_CFUNC_DEF("get_joints", 0, &gltf_skin_class_get_joints),
	JS_CFUNC_DEF("set_joints", 1, &gltf_skin_class_set_joints),
	JS_CFUNC_DEF("get_non_joints", 0, &gltf_skin_class_get_non_joints),
	JS_CFUNC_DEF("set_non_joints", 1, &gltf_skin_class_set_non_joints),
	JS_CFUNC_DEF("get_roots", 0, &gltf_skin_class_get_roots),
	JS_CFUNC_DEF("set_roots", 1, &gltf_skin_class_set_roots),
	JS_CFUNC_DEF("get_skeleton", 0, &gltf_skin_class_get_skeleton),
	JS_CFUNC_DEF("set_skeleton", 1, &gltf_skin_class_set_skeleton),
	JS_CFUNC_DEF("get_joint_i_to_bone_i", 0, &gltf_skin_class_get_joint_i_to_bone_i),
	JS_CFUNC_DEF("set_joint_i_to_bone_i", 1, &gltf_skin_class_set_joint_i_to_bone_i),
	JS_CFUNC_DEF("get_joint_i_to_name", 0, &gltf_skin_class_get_joint_i_to_name),
	JS_CFUNC_DEF("set_joint_i_to_name", 1, &gltf_skin_class_set_joint_i_to_name),
	JS_CFUNC_DEF("get_godot_skin", 0, &gltf_skin_class_get_godot_skin),
	JS_CFUNC_DEF("set_godot_skin", 1, &gltf_skin_class_set_godot_skin),
};

static int js_gltf_skin_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&GLTFSkin::__class_id);
	classes["GLTFSkin"] = GLTFSkin::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), GLTFSkin::__class_id, &gltf_skin_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, GLTFSkin::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, gltf_skin_class_proto_funcs, _countof(gltf_skin_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, gltf_skin_class_constructor, "GLTFSkin", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "GLTFSkin", ctor);

	return 0;
}

JSModuleDef *_js_init_gltf_skin_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_gltf_skin_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "GLTFSkin");
	return m;
}

JSModuleDef *js_init_gltf_skin_module(JSContext *ctx) {
	return _js_init_gltf_skin_module(ctx, "godot/classes/gltf_skin");
}

void register_gltf_skin() {
	js_init_gltf_skin_module(ctx);
}