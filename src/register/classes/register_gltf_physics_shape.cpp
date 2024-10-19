
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/shape3d.hpp>
#include <godot_cpp/classes/gltf_physics_shape.hpp>
#include <godot_cpp/classes/collision_shape3d.hpp>
#include <godot_cpp/classes/importer_mesh.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void gltf_physics_shape_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef gltf_physics_shape_class_def = {
	"GLTFPhysicsShape",
	.finalizer = gltf_physics_shape_class_finalizer
};

static JSValue gltf_physics_shape_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, GLTFPhysicsShape::__class_id);
	if (JS_IsException(obj))
		return obj;
	GLTFPhysicsShape *gltf_physics_shape_class = memnew(GLTFPhysicsShape);
	if (!gltf_physics_shape_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, gltf_physics_shape_class);	
	return obj;
}
static JSValue gltf_physics_shape_class_to_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFPhysicsShape::to_node, ctx, this_val, argc, argv);
};
static JSValue gltf_physics_shape_class_to_resource(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFPhysicsShape::to_resource, ctx, this_val, argc, argv);
};
static JSValue gltf_physics_shape_class_to_dictionary(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GLTFPhysicsShape::to_dictionary, ctx, this_val, argc, argv);
};
static JSValue gltf_physics_shape_class_get_shape_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GLTFPhysicsShape::get_shape_type, ctx, this_val, argc, argv);
};
static JSValue gltf_physics_shape_class_set_shape_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GLTFPhysicsShape::set_shape_type, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_physics_shape_class_get_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GLTFPhysicsShape::get_size, ctx, this_val, argc, argv);
};
static JSValue gltf_physics_shape_class_set_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GLTFPhysicsShape::set_size, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_physics_shape_class_get_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GLTFPhysicsShape::get_radius, ctx, this_val, argc, argv);
};
static JSValue gltf_physics_shape_class_set_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GLTFPhysicsShape::set_radius, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_physics_shape_class_get_height(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GLTFPhysicsShape::get_height, ctx, this_val, argc, argv);
};
static JSValue gltf_physics_shape_class_set_height(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GLTFPhysicsShape::set_height, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_physics_shape_class_get_is_trigger(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GLTFPhysicsShape::get_is_trigger, ctx, this_val, argc, argv);
};
static JSValue gltf_physics_shape_class_set_is_trigger(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GLTFPhysicsShape::set_is_trigger, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_physics_shape_class_get_mesh_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GLTFPhysicsShape::get_mesh_index, ctx, this_val, argc, argv);
};
static JSValue gltf_physics_shape_class_set_mesh_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GLTFPhysicsShape::set_mesh_index, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_physics_shape_class_get_importer_mesh(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GLTFPhysicsShape::get_importer_mesh, ctx, this_val, argc, argv);
};
static JSValue gltf_physics_shape_class_set_importer_mesh(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GLTFPhysicsShape::set_importer_mesh, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_physics_shape_class_from_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&GLTFPhysicsShape::from_node, ctx, this_val, argc, argv);
};
static JSValue gltf_physics_shape_class_from_resource(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&GLTFPhysicsShape::from_resource, ctx, this_val, argc, argv);
};
static JSValue gltf_physics_shape_class_from_dictionary(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&GLTFPhysicsShape::from_dictionary, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry gltf_physics_shape_class_proto_funcs[] = {
	JS_CFUNC_DEF("to_node", 1, &gltf_physics_shape_class_to_node),
	JS_CFUNC_DEF("to_resource", 1, &gltf_physics_shape_class_to_resource),
	JS_CFUNC_DEF("to_dictionary", 0, &gltf_physics_shape_class_to_dictionary),
	JS_CFUNC_DEF("get_shape_type", 0, &gltf_physics_shape_class_get_shape_type),
	JS_CFUNC_DEF("set_shape_type", 1, &gltf_physics_shape_class_set_shape_type),
	JS_CFUNC_DEF("get_size", 0, &gltf_physics_shape_class_get_size),
	JS_CFUNC_DEF("set_size", 1, &gltf_physics_shape_class_set_size),
	JS_CFUNC_DEF("get_radius", 0, &gltf_physics_shape_class_get_radius),
	JS_CFUNC_DEF("set_radius", 1, &gltf_physics_shape_class_set_radius),
	JS_CFUNC_DEF("get_height", 0, &gltf_physics_shape_class_get_height),
	JS_CFUNC_DEF("set_height", 1, &gltf_physics_shape_class_set_height),
	JS_CFUNC_DEF("get_is_trigger", 0, &gltf_physics_shape_class_get_is_trigger),
	JS_CFUNC_DEF("set_is_trigger", 1, &gltf_physics_shape_class_set_is_trigger),
	JS_CFUNC_DEF("get_mesh_index", 0, &gltf_physics_shape_class_get_mesh_index),
	JS_CFUNC_DEF("set_mesh_index", 1, &gltf_physics_shape_class_set_mesh_index),
	JS_CFUNC_DEF("get_importer_mesh", 0, &gltf_physics_shape_class_get_importer_mesh),
	JS_CFUNC_DEF("set_importer_mesh", 1, &gltf_physics_shape_class_set_importer_mesh),
};
static const JSCFunctionListEntry gltf_physics_shape_class_static_funcs[] = {
	JS_CFUNC_DEF("from_node", 1, &gltf_physics_shape_class_from_node),
	JS_CFUNC_DEF("from_resource", 1, &gltf_physics_shape_class_from_resource),
	JS_CFUNC_DEF("from_dictionary", 1, &gltf_physics_shape_class_from_dictionary),
};

void define_gltf_physics_shape_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "shape_type"),
        JS_NewCFunction(ctx, gltf_physics_shape_class_get_shape_type, "get_shape_type", 0),
        JS_NewCFunction(ctx, gltf_physics_shape_class_set_shape_type, "set_shape_type", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "size"),
        JS_NewCFunction(ctx, gltf_physics_shape_class_get_size, "get_size", 0),
        JS_NewCFunction(ctx, gltf_physics_shape_class_set_size, "set_size", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "radius"),
        JS_NewCFunction(ctx, gltf_physics_shape_class_get_radius, "get_radius", 0),
        JS_NewCFunction(ctx, gltf_physics_shape_class_set_radius, "set_radius", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "height"),
        JS_NewCFunction(ctx, gltf_physics_shape_class_get_height, "get_height", 0),
        JS_NewCFunction(ctx, gltf_physics_shape_class_set_height, "set_height", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "is_trigger"),
        JS_NewCFunction(ctx, gltf_physics_shape_class_get_is_trigger, "get_is_trigger", 0),
        JS_NewCFunction(ctx, gltf_physics_shape_class_set_is_trigger, "set_is_trigger", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "mesh_index"),
        JS_NewCFunction(ctx, gltf_physics_shape_class_get_mesh_index, "get_mesh_index", 0),
        JS_NewCFunction(ctx, gltf_physics_shape_class_set_mesh_index, "set_mesh_index", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "importer_mesh"),
        JS_NewCFunction(ctx, gltf_physics_shape_class_get_importer_mesh, "get_importer_mesh", 0),
        JS_NewCFunction(ctx, gltf_physics_shape_class_set_importer_mesh, "set_importer_mesh", 1),
        JS_PROP_GETSET
    );
}

static int js_gltf_physics_shape_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&GLTFPhysicsShape::__class_id);
	classes["GLTFPhysicsShape"] = GLTFPhysicsShape::__class_id;
	class_id_list.insert(GLTFPhysicsShape::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), GLTFPhysicsShape::__class_id, &gltf_physics_shape_class_def);

	JSValue proto = JS_NewObjectClass(ctx, GLTFPhysicsShape::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, GLTFPhysicsShape::__class_id, proto);

	define_gltf_physics_shape_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, gltf_physics_shape_class_proto_funcs, _countof(gltf_physics_shape_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, gltf_physics_shape_class_constructor, "GLTFPhysicsShape", 0, JS_CFUNC_constructor, 0);
	JS_SetPropertyFunctionList(ctx, ctor, gltf_physics_shape_class_static_funcs, _countof(gltf_physics_shape_class_static_funcs));
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "GLTFPhysicsShape", ctor);

	return 0;
}

JSModuleDef *_js_init_gltf_physics_shape_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/resource';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_gltf_physics_shape_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "GLTFPhysicsShape");
	return m;
}

JSModuleDef *js_init_gltf_physics_shape_module(JSContext *ctx) {
	return _js_init_gltf_physics_shape_module(ctx, "godot/classes/gltf_physics_shape");
}

void register_gltf_physics_shape() {
	GLTFPhysicsShape::__init_js_class_id();
	js_init_gltf_physics_shape_module(ctx);
}