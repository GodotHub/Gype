
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/collision_shape3d.hpp>
#include <godot_cpp/classes/gltf_physics_shape.hpp>
#include <godot_cpp/classes/importer_mesh.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/shape3d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void gltf_physics_shape_class_finalizer(JSRuntime *rt, JSValue val) {
	GLTFPhysicsShape *gltf_physics_shape = static_cast<GLTFPhysicsShape *>(JS_GetOpaque(val, GLTFPhysicsShape::__class_id));
	if (gltf_physics_shape)
		GLTFPhysicsShape::free(nullptr, gltf_physics_shape);
}

static JSClassDef gltf_physics_shape_class_def = {
	"GLTFPhysicsShape",
	.finalizer = gltf_physics_shape_class_finalizer
};

static JSValue gltf_physics_shape_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	GLTFPhysicsShape *gltf_physics_shape_class;
	JSValue obj = JS_NewObjectClass(ctx, GLTFPhysicsShape::__class_id);
	if (JS_IsException(obj))
		return obj;
	gltf_physics_shape_class = memnew(GLTFPhysicsShape);
	if (!gltf_physics_shape_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, gltf_physics_shape_class);
	return obj;
}
static JSValue gltf_physics_shape_class_to_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFPhysicsShape::to_node, GLTFPhysicsShape::__class_id, ctx, this_val, argv);
};
static JSValue gltf_physics_shape_class_to_resource(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GLTFPhysicsShape::to_resource, GLTFPhysicsShape::__class_id, ctx, this_val, argv);
};
static JSValue gltf_physics_shape_class_to_dictionary(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GLTFPhysicsShape::to_dictionary, GLTFPhysicsShape::__class_id, ctx, this_val, argv);
};
static JSValue gltf_physics_shape_class_get_shape_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GLTFPhysicsShape::get_shape_type, GLTFPhysicsShape::__class_id, ctx, this_val, argv);
};
static JSValue gltf_physics_shape_class_set_shape_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GLTFPhysicsShape::set_shape_type, GLTFPhysicsShape::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_physics_shape_class_get_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GLTFPhysicsShape::get_size, GLTFPhysicsShape::__class_id, ctx, this_val, argv);
};
static JSValue gltf_physics_shape_class_set_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GLTFPhysicsShape::set_size, GLTFPhysicsShape::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_physics_shape_class_get_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GLTFPhysicsShape::get_radius, GLTFPhysicsShape::__class_id, ctx, this_val, argv);
};
static JSValue gltf_physics_shape_class_set_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GLTFPhysicsShape::set_radius, GLTFPhysicsShape::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_physics_shape_class_get_height(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GLTFPhysicsShape::get_height, GLTFPhysicsShape::__class_id, ctx, this_val, argv);
};
static JSValue gltf_physics_shape_class_set_height(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GLTFPhysicsShape::set_height, GLTFPhysicsShape::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_physics_shape_class_get_is_trigger(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GLTFPhysicsShape::get_is_trigger, GLTFPhysicsShape::__class_id, ctx, this_val, argv);
};
static JSValue gltf_physics_shape_class_set_is_trigger(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GLTFPhysicsShape::set_is_trigger, GLTFPhysicsShape::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_physics_shape_class_get_mesh_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GLTFPhysicsShape::get_mesh_index, GLTFPhysicsShape::__class_id, ctx, this_val, argv);
};
static JSValue gltf_physics_shape_class_set_mesh_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GLTFPhysicsShape::set_mesh_index, GLTFPhysicsShape::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_physics_shape_class_get_importer_mesh(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GLTFPhysicsShape::get_importer_mesh, GLTFPhysicsShape::__class_id, ctx, this_val, argv);
};
static JSValue gltf_physics_shape_class_set_importer_mesh(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&GLTFPhysicsShape::set_importer_mesh, GLTFPhysicsShape::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gltf_physics_shape_class_from_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&GLTFPhysicsShape::from_node, GLTFPhysicsShape::__class_id, ctx, this_val, argv);
};
static JSValue gltf_physics_shape_class_from_resource(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&GLTFPhysicsShape::from_resource, GLTFPhysicsShape::__class_id, ctx, this_val, argv);
};
static JSValue gltf_physics_shape_class_from_dictionary(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&GLTFPhysicsShape::from_dictionary, GLTFPhysicsShape::__class_id, ctx, this_val, argv);
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

static int js_gltf_physics_shape_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&GLTFPhysicsShape::__class_id);
	classes["GLTFPhysicsShape"] = GLTFPhysicsShape::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), GLTFPhysicsShape::__class_id, &gltf_physics_shape_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, GLTFPhysicsShape::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, gltf_physics_shape_class_proto_funcs, _countof(gltf_physics_shape_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, gltf_physics_shape_class_constructor, "GLTFPhysicsShape", 0, JS_CFUNC_constructor, 0);
	JS_SetPropertyFunctionList(ctx, ctor, gltf_physics_shape_class_static_funcs, _countof(gltf_physics_shape_class_static_funcs));

	JS_SetModuleExport(ctx, m, "GLTFPhysicsShape", ctor);

	return 0;
}

JSModuleDef *_js_init_gltf_physics_shape_module(JSContext *ctx, const char *module_name) {
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
	js_init_gltf_physics_shape_module(ctx);
}