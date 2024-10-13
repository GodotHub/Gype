
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/gltf_skeleton.hpp>
#include <godot_cpp/classes/skeleton3d.hpp>
#include <godot_cpp/classes/bone_attachment3d.hpp>
#include <godot_cpp/classes/resource.hpp>
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
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");

	if (JS_IsObject(proto)) {
		JS_SetPrototype(ctx, obj, proto);
	}
	JS_FreeValue(ctx, proto);

	
	return obj;
}
static JSValue gltf_skeleton_class_get_joints(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFSkeleton::get_joints, ctx, this_val, argc, argv);
};
static JSValue gltf_skeleton_class_set_joints(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GLTFSkeleton::set_joints, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_skeleton_class_get_roots(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFSkeleton::get_roots, ctx, this_val, argc, argv);
};
static JSValue gltf_skeleton_class_set_roots(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GLTFSkeleton::set_roots, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_skeleton_class_get_godot_skeleton(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFSkeleton::get_godot_skeleton, ctx, this_val, argc, argv);
};
static JSValue gltf_skeleton_class_get_unique_names(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFSkeleton::get_unique_names, ctx, this_val, argc, argv);
};
static JSValue gltf_skeleton_class_set_unique_names(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GLTFSkeleton::set_unique_names, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_skeleton_class_get_godot_bone_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFSkeleton::get_godot_bone_node, ctx, this_val, argc, argv);
};
static JSValue gltf_skeleton_class_set_godot_bone_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GLTFSkeleton::set_godot_bone_node, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_skeleton_class_get_bone_attachment_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFSkeleton::get_bone_attachment_count, ctx, this_val, argc, argv);
};
static JSValue gltf_skeleton_class_get_bone_attachment(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFSkeleton::get_bone_attachment, ctx, this_val, argc, argv);
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

void define_gltf_skeleton_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "joints"),
        JS_NewCFunction(ctx, gltf_skeleton_class_get_joints, "get_joints", 0),
        JS_NewCFunction(ctx, gltf_skeleton_class_set_joints, "set_joints", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "roots"),
        JS_NewCFunction(ctx, gltf_skeleton_class_get_roots, "get_roots", 0),
        JS_NewCFunction(ctx, gltf_skeleton_class_set_roots, "set_roots", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "unique_names"),
        JS_NewCFunction(ctx, gltf_skeleton_class_get_unique_names, "get_unique_names", 0),
        JS_NewCFunction(ctx, gltf_skeleton_class_set_unique_names, "set_unique_names", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "godot_bone_node"),
        JS_NewCFunction(ctx, gltf_skeleton_class_get_godot_bone_node, "get_godot_bone_node", 0),
        JS_NewCFunction(ctx, gltf_skeleton_class_set_godot_bone_node, "set_godot_bone_node", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
}

static int js_gltf_skeleton_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&GLTFSkeleton::__class_id);
	classes["GLTFSkeleton"] = GLTFSkeleton::__class_id;
	class_id_list.insert(GLTFSkeleton::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), GLTFSkeleton::__class_id, &gltf_skeleton_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, GLTFSkeleton::__class_id, proto);
	define_gltf_skeleton_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, gltf_skeleton_class_proto_funcs, _countof(gltf_skeleton_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, gltf_skeleton_class_constructor, "GLTFSkeleton", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "GLTFSkeleton", ctor);

	return 0;
}

JSModuleDef *_js_init_gltf_skeleton_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/resource';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
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
	GLTFSkeleton::__init_js_class_id();
	js_init_gltf_skeleton_module(ctx);
}