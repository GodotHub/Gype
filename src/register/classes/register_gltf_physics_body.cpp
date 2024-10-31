
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/collision_object3d.hpp>
#include <godot_cpp/classes/gltf_physics_body.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void gltf_physics_body_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef gltf_physics_body_class_def = {
	"GLTFPhysicsBody",
	.finalizer = gltf_physics_body_class_finalizer
};

static JSValue gltf_physics_body_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, GLTFPhysicsBody::__class_id);
	if (JS_IsException(obj))
		return obj;

	GLTFPhysicsBody *gltf_physics_body_class;
	if (argc == 1) 
		gltf_physics_body_class = static_cast<GLTFPhysicsBody *>(Variant(*argv).operator Object *());
	else 
		gltf_physics_body_class = memnew(GLTFPhysicsBody);
	if (!gltf_physics_body_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, gltf_physics_body_class);
	return obj;
}
static JSValue gltf_physics_body_class_to_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GLTFPhysicsBody::to_node, ctx, this_val, argc, argv);
};
static JSValue gltf_physics_body_class_to_dictionary(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GLTFPhysicsBody::to_dictionary, ctx, this_val, argc, argv);
};
static JSValue gltf_physics_body_class_get_body_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GLTFPhysicsBody::get_body_type, ctx, this_val, argc, argv);
};
static JSValue gltf_physics_body_class_set_body_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&GLTFPhysicsBody::set_body_type, ctx, this_val, argc, argv);
};
static JSValue gltf_physics_body_class_get_mass(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GLTFPhysicsBody::get_mass, ctx, this_val, argc, argv);
};
static JSValue gltf_physics_body_class_set_mass(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&GLTFPhysicsBody::set_mass, ctx, this_val, argc, argv);
};
static JSValue gltf_physics_body_class_get_linear_velocity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GLTFPhysicsBody::get_linear_velocity, ctx, this_val, argc, argv);
};
static JSValue gltf_physics_body_class_set_linear_velocity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&GLTFPhysicsBody::set_linear_velocity, ctx, this_val, argc, argv);
};
static JSValue gltf_physics_body_class_get_angular_velocity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GLTFPhysicsBody::get_angular_velocity, ctx, this_val, argc, argv);
};
static JSValue gltf_physics_body_class_set_angular_velocity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&GLTFPhysicsBody::set_angular_velocity, ctx, this_val, argc, argv);
};
static JSValue gltf_physics_body_class_get_center_of_mass(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GLTFPhysicsBody::get_center_of_mass, ctx, this_val, argc, argv);
};
static JSValue gltf_physics_body_class_set_center_of_mass(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&GLTFPhysicsBody::set_center_of_mass, ctx, this_val, argc, argv);
};
static JSValue gltf_physics_body_class_get_inertia_diagonal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GLTFPhysicsBody::get_inertia_diagonal, ctx, this_val, argc, argv);
};
static JSValue gltf_physics_body_class_set_inertia_diagonal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&GLTFPhysicsBody::set_inertia_diagonal, ctx, this_val, argc, argv);
};
static JSValue gltf_physics_body_class_get_inertia_orientation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GLTFPhysicsBody::get_inertia_orientation, ctx, this_val, argc, argv);
};
static JSValue gltf_physics_body_class_set_inertia_orientation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&GLTFPhysicsBody::set_inertia_orientation, ctx, this_val, argc, argv);
};
static JSValue gltf_physics_body_class_get_inertia_tensor(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GLTFPhysicsBody::get_inertia_tensor, ctx, this_val, argc, argv);
};
static JSValue gltf_physics_body_class_set_inertia_tensor(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&GLTFPhysicsBody::set_inertia_tensor, ctx, this_val, argc, argv);
};
static JSValue gltf_physics_body_class_from_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&GLTFPhysicsBody::from_node, ctx, this_val, argc, argv);
};
static JSValue gltf_physics_body_class_from_dictionary(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&GLTFPhysicsBody::from_dictionary, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry gltf_physics_body_class_proto_funcs[] = {
	JS_CFUNC_DEF("to_node", 0, &gltf_physics_body_class_to_node),
	JS_CFUNC_DEF("to_dictionary", 0, &gltf_physics_body_class_to_dictionary),
	JS_CFUNC_DEF("get_body_type", 0, &gltf_physics_body_class_get_body_type),
	JS_CFUNC_DEF("set_body_type", 1, &gltf_physics_body_class_set_body_type),
	JS_CFUNC_DEF("get_mass", 0, &gltf_physics_body_class_get_mass),
	JS_CFUNC_DEF("set_mass", 1, &gltf_physics_body_class_set_mass),
	JS_CFUNC_DEF("get_linear_velocity", 0, &gltf_physics_body_class_get_linear_velocity),
	JS_CFUNC_DEF("set_linear_velocity", 1, &gltf_physics_body_class_set_linear_velocity),
	JS_CFUNC_DEF("get_angular_velocity", 0, &gltf_physics_body_class_get_angular_velocity),
	JS_CFUNC_DEF("set_angular_velocity", 1, &gltf_physics_body_class_set_angular_velocity),
	JS_CFUNC_DEF("get_center_of_mass", 0, &gltf_physics_body_class_get_center_of_mass),
	JS_CFUNC_DEF("set_center_of_mass", 1, &gltf_physics_body_class_set_center_of_mass),
	JS_CFUNC_DEF("get_inertia_diagonal", 0, &gltf_physics_body_class_get_inertia_diagonal),
	JS_CFUNC_DEF("set_inertia_diagonal", 1, &gltf_physics_body_class_set_inertia_diagonal),
	JS_CFUNC_DEF("get_inertia_orientation", 0, &gltf_physics_body_class_get_inertia_orientation),
	JS_CFUNC_DEF("set_inertia_orientation", 1, &gltf_physics_body_class_set_inertia_orientation),
	JS_CFUNC_DEF("get_inertia_tensor", 0, &gltf_physics_body_class_get_inertia_tensor),
	JS_CFUNC_DEF("set_inertia_tensor", 1, &gltf_physics_body_class_set_inertia_tensor),
};
static const JSCFunctionListEntry gltf_physics_body_class_static_funcs[] = {
	JS_CFUNC_DEF("from_node", 1, &gltf_physics_body_class_from_node),
	JS_CFUNC_DEF("from_dictionary", 1, &gltf_physics_body_class_from_dictionary),
};

static void define_gltf_physics_body_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "body_type"),
        JS_NewCFunction(ctx, gltf_physics_body_class_get_body_type, "get_body_type", 0),
        JS_NewCFunction(ctx, gltf_physics_body_class_set_body_type, "set_body_type", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "mass"),
        JS_NewCFunction(ctx, gltf_physics_body_class_get_mass, "get_mass", 0),
        JS_NewCFunction(ctx, gltf_physics_body_class_set_mass, "set_mass", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "linear_velocity"),
        JS_NewCFunction(ctx, gltf_physics_body_class_get_linear_velocity, "get_linear_velocity", 0),
        JS_NewCFunction(ctx, gltf_physics_body_class_set_linear_velocity, "set_linear_velocity", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "angular_velocity"),
        JS_NewCFunction(ctx, gltf_physics_body_class_get_angular_velocity, "get_angular_velocity", 0),
        JS_NewCFunction(ctx, gltf_physics_body_class_set_angular_velocity, "set_angular_velocity", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "center_of_mass"),
        JS_NewCFunction(ctx, gltf_physics_body_class_get_center_of_mass, "get_center_of_mass", 0),
        JS_NewCFunction(ctx, gltf_physics_body_class_set_center_of_mass, "set_center_of_mass", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "inertia_diagonal"),
        JS_NewCFunction(ctx, gltf_physics_body_class_get_inertia_diagonal, "get_inertia_diagonal", 0),
        JS_NewCFunction(ctx, gltf_physics_body_class_set_inertia_diagonal, "set_inertia_diagonal", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "inertia_orientation"),
        JS_NewCFunction(ctx, gltf_physics_body_class_get_inertia_orientation, "get_inertia_orientation", 0),
        JS_NewCFunction(ctx, gltf_physics_body_class_set_inertia_orientation, "set_inertia_orientation", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "inertia_tensor"),
        JS_NewCFunction(ctx, gltf_physics_body_class_get_inertia_tensor, "get_inertia_tensor", 0),
        JS_NewCFunction(ctx, gltf_physics_body_class_set_inertia_tensor, "set_inertia_tensor", 1),
        JS_PROP_GETSET
    );
	
}

static void define_gltf_physics_body_enum(JSContext *ctx, JSValue proto) {
}

static int js_gltf_physics_body_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["GLTFPhysicsBody"] = GLTFPhysicsBody::__class_id;
	class_id_list.insert(GLTFPhysicsBody::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), GLTFPhysicsBody::__class_id, &gltf_physics_body_class_def);

	JSValue proto = JS_NewObjectClass(ctx, GLTFPhysicsBody::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, GLTFPhysicsBody::__class_id, proto);

	define_gltf_physics_body_property(ctx, proto);
	define_gltf_physics_body_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, gltf_physics_body_class_proto_funcs, _countof(gltf_physics_body_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, gltf_physics_body_class_constructor, "GLTFPhysicsBody", 0, JS_CFUNC_constructor, 0);
	JS_SetPropertyFunctionList(ctx, ctor, gltf_physics_body_class_static_funcs, _countof(gltf_physics_body_class_static_funcs));
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "GLTFPhysicsBody", ctor);

	return 0;
}

JSModuleDef *_js_init_gltf_physics_body_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/resource';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_gltf_physics_body_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "GLTFPhysicsBody");
	return m;
}

JSModuleDef *js_init_gltf_physics_body_module(JSContext *ctx) {
	return _js_init_gltf_physics_body_module(ctx, "@godot/classes/gltf_physics_body");
}

void register_gltf_physics_body() {
	GLTFPhysicsBody::__init_js_class_id();
	js_init_gltf_physics_body_module(ctx);
}