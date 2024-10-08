
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/gltf_node.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void gltf_node_class_finalizer(JSRuntime *rt, JSValue val) {
	GLTFNode *gltf_node = static_cast<GLTFNode *>(JS_GetOpaque(val, GLTFNode::__class_id));
	if (gltf_node)
		GLTFNode::free(nullptr, gltf_node);
}

static JSClassDef gltf_node_class_def = {
	"GLTFNode",
	.finalizer = gltf_node_class_finalizer
};

static JSValue gltf_node_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	GLTFNode *gltf_node_class;
	JSValue obj = JS_NewObjectClass(ctx, GLTFNode::__class_id);
	if (JS_IsException(obj))
		return obj;
	gltf_node_class = memnew(GLTFNode);
	if (!gltf_node_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, gltf_node_class);
	return obj;
}
static JSValue gltf_node_class_get_original_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFNode::get_original_name, GLTFNode::__class_id, ctx, this_val, argv);
};
static JSValue gltf_node_class_set_original_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GLTFNode::set_original_name, GLTFNode::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_node_class_get_parent(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFNode::get_parent, GLTFNode::__class_id, ctx, this_val, argv);
};
static JSValue gltf_node_class_set_parent(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GLTFNode::set_parent, GLTFNode::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_node_class_get_height(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFNode::get_height, GLTFNode::__class_id, ctx, this_val, argv);
};
static JSValue gltf_node_class_set_height(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GLTFNode::set_height, GLTFNode::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_node_class_get_xform(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFNode::get_xform, GLTFNode::__class_id, ctx, this_val, argv);
};
static JSValue gltf_node_class_set_xform(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GLTFNode::set_xform, GLTFNode::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_node_class_get_mesh(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFNode::get_mesh, GLTFNode::__class_id, ctx, this_val, argv);
};
static JSValue gltf_node_class_set_mesh(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GLTFNode::set_mesh, GLTFNode::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_node_class_get_camera(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFNode::get_camera, GLTFNode::__class_id, ctx, this_val, argv);
};
static JSValue gltf_node_class_set_camera(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GLTFNode::set_camera, GLTFNode::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_node_class_get_skin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFNode::get_skin, GLTFNode::__class_id, ctx, this_val, argv);
};
static JSValue gltf_node_class_set_skin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GLTFNode::set_skin, GLTFNode::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_node_class_get_skeleton(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFNode::get_skeleton, GLTFNode::__class_id, ctx, this_val, argv);
};
static JSValue gltf_node_class_set_skeleton(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GLTFNode::set_skeleton, GLTFNode::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_node_class_get_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFNode::get_position, GLTFNode::__class_id, ctx, this_val, argv);
};
static JSValue gltf_node_class_set_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GLTFNode::set_position, GLTFNode::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_node_class_get_rotation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFNode::get_rotation, GLTFNode::__class_id, ctx, this_val, argv);
};
static JSValue gltf_node_class_set_rotation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GLTFNode::set_rotation, GLTFNode::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_node_class_get_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFNode::get_scale, GLTFNode::__class_id, ctx, this_val, argv);
};
static JSValue gltf_node_class_set_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GLTFNode::set_scale, GLTFNode::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_node_class_get_children(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFNode::get_children, GLTFNode::__class_id, ctx, this_val, argv);
};
static JSValue gltf_node_class_set_children(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GLTFNode::set_children, GLTFNode::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_node_class_get_light(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFNode::get_light, GLTFNode::__class_id, ctx, this_val, argv);
};
static JSValue gltf_node_class_set_light(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GLTFNode::set_light, GLTFNode::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_node_class_get_additional_data(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFNode::get_additional_data, GLTFNode::__class_id, ctx, this_val, argv);
};
static JSValue gltf_node_class_set_additional_data(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GLTFNode::set_additional_data, GLTFNode::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry gltf_node_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_original_name", 0, &gltf_node_class_get_original_name),
	JS_CFUNC_DEF("set_original_name", 1, &gltf_node_class_set_original_name),
	JS_CFUNC_DEF("get_parent", 0, &gltf_node_class_get_parent),
	JS_CFUNC_DEF("set_parent", 1, &gltf_node_class_set_parent),
	JS_CFUNC_DEF("get_height", 0, &gltf_node_class_get_height),
	JS_CFUNC_DEF("set_height", 1, &gltf_node_class_set_height),
	JS_CFUNC_DEF("get_xform", 0, &gltf_node_class_get_xform),
	JS_CFUNC_DEF("set_xform", 1, &gltf_node_class_set_xform),
	JS_CFUNC_DEF("get_mesh", 0, &gltf_node_class_get_mesh),
	JS_CFUNC_DEF("set_mesh", 1, &gltf_node_class_set_mesh),
	JS_CFUNC_DEF("get_camera", 0, &gltf_node_class_get_camera),
	JS_CFUNC_DEF("set_camera", 1, &gltf_node_class_set_camera),
	JS_CFUNC_DEF("get_skin", 0, &gltf_node_class_get_skin),
	JS_CFUNC_DEF("set_skin", 1, &gltf_node_class_set_skin),
	JS_CFUNC_DEF("get_skeleton", 0, &gltf_node_class_get_skeleton),
	JS_CFUNC_DEF("set_skeleton", 1, &gltf_node_class_set_skeleton),
	JS_CFUNC_DEF("get_position", 0, &gltf_node_class_get_position),
	JS_CFUNC_DEF("set_position", 1, &gltf_node_class_set_position),
	JS_CFUNC_DEF("get_rotation", 0, &gltf_node_class_get_rotation),
	JS_CFUNC_DEF("set_rotation", 1, &gltf_node_class_set_rotation),
	JS_CFUNC_DEF("get_scale", 0, &gltf_node_class_get_scale),
	JS_CFUNC_DEF("set_scale", 1, &gltf_node_class_set_scale),
	JS_CFUNC_DEF("get_children", 0, &gltf_node_class_get_children),
	JS_CFUNC_DEF("set_children", 1, &gltf_node_class_set_children),
	JS_CFUNC_DEF("get_light", 0, &gltf_node_class_get_light),
	JS_CFUNC_DEF("set_light", 1, &gltf_node_class_set_light),
	JS_CFUNC_DEF("get_additional_data", 1, &gltf_node_class_get_additional_data),
	JS_CFUNC_DEF("set_additional_data", 2, &gltf_node_class_set_additional_data),
};

static int js_gltf_node_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&GLTFNode::__class_id);
	classes["GLTFNode"] = GLTFNode::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), GLTFNode::__class_id, &gltf_node_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, GLTFNode::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, gltf_node_class_proto_funcs, _countof(gltf_node_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, gltf_node_class_constructor, "GLTFNode", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "GLTFNode", ctor);

	return 0;
}

JSModuleDef *_js_init_gltf_node_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_gltf_node_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "GLTFNode");
	return m;
}

JSModuleDef *js_init_gltf_node_module(JSContext *ctx) {
	return _js_init_gltf_node_module(ctx, "godot/classes/gltf_node");
}

void register_gltf_node() {
	js_init_gltf_node_module(ctx);
}