
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/camera3d.hpp>
#include <godot_cpp/classes/gltf_camera.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void gltf_camera_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef gltf_camera_class_def = {
	"GLTFCamera",
	.finalizer = gltf_camera_class_finalizer
};

static JSValue gltf_camera_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, GLTFCamera::__class_id);
	if (JS_IsException(obj))
		return obj;

	GLTFCamera *gltf_camera_class;
	if (argc == 1) 
		gltf_camera_class = static_cast<GLTFCamera *>(Variant(*argv).operator Object *());
	else 
		gltf_camera_class = memnew(GLTFCamera);
	if (!gltf_camera_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, gltf_camera_class);
	return obj;
}
static JSValue gltf_camera_class_to_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GLTFCamera::to_node, ctx, this_val, argc, argv);
};
static JSValue gltf_camera_class_to_dictionary(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GLTFCamera::to_dictionary, ctx, this_val, argc, argv);
};
static JSValue gltf_camera_class_get_perspective(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GLTFCamera::get_perspective, ctx, this_val, argc, argv);
};
static JSValue gltf_camera_class_set_perspective(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&GLTFCamera::set_perspective, ctx, this_val, argc, argv);
};
static JSValue gltf_camera_class_get_fov(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GLTFCamera::get_fov, ctx, this_val, argc, argv);
};
static JSValue gltf_camera_class_set_fov(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&GLTFCamera::set_fov, ctx, this_val, argc, argv);
};
static JSValue gltf_camera_class_get_size_mag(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GLTFCamera::get_size_mag, ctx, this_val, argc, argv);
};
static JSValue gltf_camera_class_set_size_mag(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&GLTFCamera::set_size_mag, ctx, this_val, argc, argv);
};
static JSValue gltf_camera_class_get_depth_far(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GLTFCamera::get_depth_far, ctx, this_val, argc, argv);
};
static JSValue gltf_camera_class_set_depth_far(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&GLTFCamera::set_depth_far, ctx, this_val, argc, argv);
};
static JSValue gltf_camera_class_get_depth_near(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&GLTFCamera::get_depth_near, ctx, this_val, argc, argv);
};
static JSValue gltf_camera_class_set_depth_near(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&GLTFCamera::set_depth_near, ctx, this_val, argc, argv);
};
static JSValue gltf_camera_class_from_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&GLTFCamera::from_node, ctx, this_val, argc, argv);
};
static JSValue gltf_camera_class_from_dictionary(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&GLTFCamera::from_dictionary, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry gltf_camera_class_proto_funcs[] = {
	JS_CFUNC_DEF("to_node", 0, &gltf_camera_class_to_node),
	JS_CFUNC_DEF("to_dictionary", 0, &gltf_camera_class_to_dictionary),
	JS_CFUNC_DEF("get_perspective", 0, &gltf_camera_class_get_perspective),
	JS_CFUNC_DEF("set_perspective", 1, &gltf_camera_class_set_perspective),
	JS_CFUNC_DEF("get_fov", 0, &gltf_camera_class_get_fov),
	JS_CFUNC_DEF("set_fov", 1, &gltf_camera_class_set_fov),
	JS_CFUNC_DEF("get_size_mag", 0, &gltf_camera_class_get_size_mag),
	JS_CFUNC_DEF("set_size_mag", 1, &gltf_camera_class_set_size_mag),
	JS_CFUNC_DEF("get_depth_far", 0, &gltf_camera_class_get_depth_far),
	JS_CFUNC_DEF("set_depth_far", 1, &gltf_camera_class_set_depth_far),
	JS_CFUNC_DEF("get_depth_near", 0, &gltf_camera_class_get_depth_near),
	JS_CFUNC_DEF("set_depth_near", 1, &gltf_camera_class_set_depth_near),
};
static const JSCFunctionListEntry gltf_camera_class_static_funcs[] = {
	JS_CFUNC_DEF("from_node", 1, &gltf_camera_class_from_node),
	JS_CFUNC_DEF("from_dictionary", 1, &gltf_camera_class_from_dictionary),
};

static void define_gltf_camera_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "perspective"),
        JS_NewCFunction(ctx, gltf_camera_class_get_perspective, "get_perspective", 0),
        JS_NewCFunction(ctx, gltf_camera_class_set_perspective, "set_perspective", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "fov"),
        JS_NewCFunction(ctx, gltf_camera_class_get_fov, "get_fov", 0),
        JS_NewCFunction(ctx, gltf_camera_class_set_fov, "set_fov", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "size_mag"),
        JS_NewCFunction(ctx, gltf_camera_class_get_size_mag, "get_size_mag", 0),
        JS_NewCFunction(ctx, gltf_camera_class_set_size_mag, "set_size_mag", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "depth_far"),
        JS_NewCFunction(ctx, gltf_camera_class_get_depth_far, "get_depth_far", 0),
        JS_NewCFunction(ctx, gltf_camera_class_set_depth_far, "set_depth_far", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "depth_near"),
        JS_NewCFunction(ctx, gltf_camera_class_get_depth_near, "get_depth_near", 0),
        JS_NewCFunction(ctx, gltf_camera_class_set_depth_near, "set_depth_near", 1),
        JS_PROP_GETSET
    );
	
}

static void define_gltf_camera_enum(JSContext *ctx, JSValue proto) {
}

static int js_gltf_camera_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["GLTFCamera"] = GLTFCamera::__class_id;
	class_id_list.insert(GLTFCamera::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), GLTFCamera::__class_id, &gltf_camera_class_def);

	JSValue proto = JS_NewObjectClass(ctx, GLTFCamera::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, GLTFCamera::__class_id, proto);

	define_gltf_camera_property(ctx, proto);
	define_gltf_camera_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, gltf_camera_class_proto_funcs, _countof(gltf_camera_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, gltf_camera_class_constructor, "GLTFCamera", 0, JS_CFUNC_constructor, 0);
	JS_SetPropertyFunctionList(ctx, ctor, gltf_camera_class_static_funcs, _countof(gltf_camera_class_static_funcs));
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "GLTFCamera", ctor);

	return 0;
}

JSModuleDef *_js_init_gltf_camera_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/resource';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_gltf_camera_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "GLTFCamera");
	return m;
}

JSModuleDef *js_init_gltf_camera_module(JSContext *ctx) {
	return _js_init_gltf_camera_module(ctx, "@godot/classes/gltf_camera");
}

void register_gltf_camera() {
	GLTFCamera::__init_js_class_id();
	js_init_gltf_camera_module(ctx);
}