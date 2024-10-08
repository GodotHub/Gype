
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/bone_attachment3d.hpp>
#include <godot_cpp/classes/gltf_skeleton.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/skeleton3d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void gltf_skeleton_class_finalizer(JSRuntime *rt, JSValue val) {
	GLTFSkeleton *gltf_skeleton = static_cast<GLTFSkeleton *>(JS_GetOpaque(val, GLTFSkeleton::__class_id));
	if (gltf_skeleton)
		GLTFSkeleton::free(nullptr, gltf_skeleton);
}

static JSClassDef gltf_skeleton_class_def = {
	"GLTFSkeleton",
	.finalizer = gltf_skeleton_class_finalizer
};

static JSValue gltf_skeleton_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	GLTFSkeleton *gltf_skeleton_class;
	JSValue obj = JS_NewObjectClass(ctx, GLTFSkeleton::__class_id);
	if (JS_IsException(obj))
		return obj;
	gltf_skeleton_class = memnew(GLTFSkeleton);
	if (!gltf_skeleton_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, gltf_skeleton_class);
	return obj;
}
static JSValue gltf_skeleton_class_get_joints(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFSkeleton::get_joints, GLTFSkeleton::__class_id, ctx, this_val, argv);
};
static JSValue gltf_skeleton_class_set_joints(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GLTFSkeleton::set_joints, GLTFSkeleton::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_skeleton_class_get_roots(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFSkeleton::get_roots, GLTFSkeleton::__class_id, ctx, this_val, argv);
};
static JSValue gltf_skeleton_class_set_roots(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GLTFSkeleton::set_roots, GLTFSkeleton::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_skeleton_class_get_godot_skeleton(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFSkeleton::get_godot_skeleton, GLTFSkeleton::__class_id, ctx, this_val, argv);
};
static JSValue gltf_skeleton_class_get_unique_names(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFSkeleton::get_unique_names, GLTFSkeleton::__class_id, ctx, this_val, argv);
};
static JSValue gltf_skeleton_class_set_unique_names(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GLTFSkeleton::set_unique_names, GLTFSkeleton::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_skeleton_class_get_godot_bone_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFSkeleton::get_godot_bone_node, GLTFSkeleton::__class_id, ctx, this_val, argv);
};
static JSValue gltf_skeleton_class_set_godot_bone_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GLTFSkeleton::set_godot_bone_node, GLTFSkeleton::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_skeleton_class_get_bone_attachment_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFSkeleton::get_bone_attachment_count, GLTFSkeleton::__class_id, ctx, this_val, argv);
};
static JSValue gltf_skeleton_class_get_bone_attachment(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFSkeleton::get_bone_attachment, GLTFSkeleton::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry gltf_skeleton_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_joints", 0, &gltf_skeleton_class_get_joints),
	JS_CFUNC_DEF("set_joints", 1, &gltf_skeleton_class_set_joints),
	JS_CFUNC_DEF("get_roots", 0, &gltf_skeleton_class_get_roots),
	JS_CFUNC_DEF("set_roots", 1, &gltf_skeleton_class_set_roots),
	JS_CFUNC_DEF("get_godot_skeleton", 0, &gltf_skeleton_class_get_godot_skeleton),
	JS_CFUNC_DEF("get_unique_names", 0, &gltf_skeleton_class_get_unique_names),
	JS_CFUNC_DEF("set_unique_names", 1, &gltf_skeleton_class_set_unique_names),
	JS_CFUNC_DEF("get_godot_bone_node", 0, &gltf_skeleton_class_get_godot_bone_node),
	JS_CFUNC_DEF("set_godot_bone_node", 1, &gltf_skeleton_class_set_godot_bone_node),
	JS_CFUNC_DEF("get_bone_attachment_count", 0, &gltf_skeleton_class_get_bone_attachment_count),
	JS_CFUNC_DEF("get_bone_attachment", 1, &gltf_skeleton_class_get_bone_attachment),
};

static int js_gltf_skeleton_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&GLTFSkeleton::__class_id);
	classes["GLTFSkeleton"] = GLTFSkeleton::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), GLTFSkeleton::__class_id, &gltf_skeleton_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, GLTFSkeleton::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, gltf_skeleton_class_proto_funcs, _countof(gltf_skeleton_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, gltf_skeleton_class_constructor, "GLTFSkeleton", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "GLTFSkeleton", ctor);

	return 0;
}

JSModuleDef *_js_init_gltf_skeleton_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_gltf_skeleton_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "GLTFSkeleton");
	return m;
}

JSModuleDef *js_init_gltf_skeleton_module(JSContext *ctx) {
	return _js_init_gltf_skeleton_module(ctx, "godot/classes/gltf_skeleton");
}

void register_gltf_skeleton() {
	js_init_gltf_skeleton_module(ctx);
}