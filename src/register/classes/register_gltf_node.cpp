
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/gltf_node.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void gltf_node_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef gltf_node_class_def = {
	"GLTFNode",
	.finalizer = gltf_node_class_finalizer
};

static JSValue gltf_node_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, GLTFNode::__class_id);
	if (JS_IsException(obj))
		return obj;
	GLTFNode *gltf_node_class = memnew(GLTFNode);
	if (!gltf_node_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, gltf_node_class);	
	return obj;
}
static JSValue gltf_node_class_get_original_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFNode::get_original_name, ctx, this_val, argc, argv);
};
static JSValue gltf_node_class_set_original_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GLTFNode::set_original_name, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_node_class_get_parent(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFNode::get_parent, ctx, this_val, argc, argv);
};
static JSValue gltf_node_class_set_parent(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GLTFNode::set_parent, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_node_class_get_height(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFNode::get_height, ctx, this_val, argc, argv);
};
static JSValue gltf_node_class_set_height(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GLTFNode::set_height, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_node_class_get_xform(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFNode::get_xform, ctx, this_val, argc, argv);
};
static JSValue gltf_node_class_set_xform(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GLTFNode::set_xform, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_node_class_get_mesh(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFNode::get_mesh, ctx, this_val, argc, argv);
};
static JSValue gltf_node_class_set_mesh(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GLTFNode::set_mesh, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_node_class_get_camera(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFNode::get_camera, ctx, this_val, argc, argv);
};
static JSValue gltf_node_class_set_camera(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GLTFNode::set_camera, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_node_class_get_skin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFNode::get_skin, ctx, this_val, argc, argv);
};
static JSValue gltf_node_class_set_skin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GLTFNode::set_skin, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_node_class_get_skeleton(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFNode::get_skeleton, ctx, this_val, argc, argv);
};
static JSValue gltf_node_class_set_skeleton(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GLTFNode::set_skeleton, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_node_class_get_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFNode::get_position, ctx, this_val, argc, argv);
};
static JSValue gltf_node_class_set_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GLTFNode::set_position, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_node_class_get_rotation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFNode::get_rotation, ctx, this_val, argc, argv);
};
static JSValue gltf_node_class_set_rotation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GLTFNode::set_rotation, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_node_class_get_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFNode::get_scale, ctx, this_val, argc, argv);
};
static JSValue gltf_node_class_set_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GLTFNode::set_scale, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_node_class_get_children(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFNode::get_children, ctx, this_val, argc, argv);
};
static JSValue gltf_node_class_set_children(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GLTFNode::set_children, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_node_class_get_light(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFNode::get_light, ctx, this_val, argc, argv);
};
static JSValue gltf_node_class_set_light(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GLTFNode::set_light, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_node_class_get_additional_data(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFNode::get_additional_data, ctx, this_val, argc, argv);
};
static JSValue gltf_node_class_set_additional_data(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GLTFNode::set_additional_data, ctx, this_val, argc, argv);
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

void define_gltf_node_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "original_name"),
        JS_NewCFunction(ctx, gltf_node_class_get_original_name, "get_original_name", 0),
        JS_NewCFunction(ctx, gltf_node_class_set_original_name, "set_original_name", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "parent"),
        JS_NewCFunction(ctx, gltf_node_class_get_parent, "get_parent", 0),
        JS_NewCFunction(ctx, gltf_node_class_set_parent, "set_parent", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "height"),
        JS_NewCFunction(ctx, gltf_node_class_get_height, "get_height", 0),
        JS_NewCFunction(ctx, gltf_node_class_set_height, "set_height", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "xform"),
        JS_NewCFunction(ctx, gltf_node_class_get_xform, "get_xform", 0),
        JS_NewCFunction(ctx, gltf_node_class_set_xform, "set_xform", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "mesh"),
        JS_NewCFunction(ctx, gltf_node_class_get_mesh, "get_mesh", 0),
        JS_NewCFunction(ctx, gltf_node_class_set_mesh, "set_mesh", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "camera"),
        JS_NewCFunction(ctx, gltf_node_class_get_camera, "get_camera", 0),
        JS_NewCFunction(ctx, gltf_node_class_set_camera, "set_camera", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "skin"),
        JS_NewCFunction(ctx, gltf_node_class_get_skin, "get_skin", 0),
        JS_NewCFunction(ctx, gltf_node_class_set_skin, "set_skin", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "skeleton"),
        JS_NewCFunction(ctx, gltf_node_class_get_skeleton, "get_skeleton", 0),
        JS_NewCFunction(ctx, gltf_node_class_set_skeleton, "set_skeleton", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "position"),
        JS_NewCFunction(ctx, gltf_node_class_get_position, "get_position", 0),
        JS_NewCFunction(ctx, gltf_node_class_set_position, "set_position", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "rotation"),
        JS_NewCFunction(ctx, gltf_node_class_get_rotation, "get_rotation", 0),
        JS_NewCFunction(ctx, gltf_node_class_set_rotation, "set_rotation", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "scale"),
        JS_NewCFunction(ctx, gltf_node_class_get_scale, "get_scale", 0),
        JS_NewCFunction(ctx, gltf_node_class_set_scale, "set_scale", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "children"),
        JS_NewCFunction(ctx, gltf_node_class_get_children, "get_children", 0),
        JS_NewCFunction(ctx, gltf_node_class_set_children, "set_children", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "light"),
        JS_NewCFunction(ctx, gltf_node_class_get_light, "get_light", 0),
        JS_NewCFunction(ctx, gltf_node_class_set_light, "set_light", 1),
        JS_PROP_GETSET
    );
}

static int js_gltf_node_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&GLTFNode::__class_id);
	classes["GLTFNode"] = GLTFNode::__class_id;
	class_id_list.insert(GLTFNode::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), GLTFNode::__class_id, &gltf_node_class_def);

	JSValue proto = JS_NewObjectClass(ctx, GLTFNode::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, GLTFNode::__class_id, proto);

	define_gltf_node_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, gltf_node_class_proto_funcs, _countof(gltf_node_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, gltf_node_class_constructor, "GLTFNode", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "GLTFNode", ctor);

	return 0;
}

JSModuleDef *_js_init_gltf_node_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/resource';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
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
	GLTFNode::__init_js_class_id();
	js_init_gltf_node_module(ctx);
}