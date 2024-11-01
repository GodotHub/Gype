
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/camera_attributes.hpp>
#include <godot_cpp/classes/physics_direct_space_state3d.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/environment.hpp>
#include <godot_cpp/classes/world3d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void world3d_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef world3d_class_def = {
	"World3D",
	.finalizer = world3d_class_finalizer
};

static JSValue world3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, World3D::__class_id);
	if (JS_IsException(obj))
		return obj;

	World3D *world3d_class;
	if (argc == 1) 
		world3d_class = static_cast<World3D *>(Variant(*argv).operator Object *());
	else 
		world3d_class = memnew(World3D);
	if (!world3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, world3d_class);
	return obj;
}
static JSValue world3d_class_get_space(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&World3D::get_space, ctx, this_val, argc, argv);
};
static JSValue world3d_class_get_navigation_map(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&World3D::get_navigation_map, ctx, this_val, argc, argv);
};
static JSValue world3d_class_get_scenario(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&World3D::get_scenario, ctx, this_val, argc, argv);
};
static JSValue world3d_class_set_environment(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&World3D::set_environment, ctx, this_val, argc, argv);
};
static JSValue world3d_class_get_environment(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&World3D::get_environment, ctx, this_val, argc, argv);
};
static JSValue world3d_class_set_fallback_environment(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&World3D::set_fallback_environment, ctx, this_val, argc, argv);
};
static JSValue world3d_class_get_fallback_environment(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&World3D::get_fallback_environment, ctx, this_val, argc, argv);
};
static JSValue world3d_class_set_camera_attributes(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&World3D::set_camera_attributes, ctx, this_val, argc, argv);
};
static JSValue world3d_class_get_camera_attributes(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&World3D::get_camera_attributes, ctx, this_val, argc, argv);
};
static JSValue world3d_class_get_direct_space_state(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&World3D::get_direct_space_state, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry world3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_space", 0, &world3d_class_get_space),
	JS_CFUNC_DEF("get_navigation_map", 0, &world3d_class_get_navigation_map),
	JS_CFUNC_DEF("get_scenario", 0, &world3d_class_get_scenario),
	JS_CFUNC_DEF("set_environment", 1, &world3d_class_set_environment),
	JS_CFUNC_DEF("get_environment", 0, &world3d_class_get_environment),
	JS_CFUNC_DEF("set_fallback_environment", 1, &world3d_class_set_fallback_environment),
	JS_CFUNC_DEF("get_fallback_environment", 0, &world3d_class_get_fallback_environment),
	JS_CFUNC_DEF("set_camera_attributes", 1, &world3d_class_set_camera_attributes),
	JS_CFUNC_DEF("get_camera_attributes", 0, &world3d_class_get_camera_attributes),
	JS_CFUNC_DEF("get_direct_space_state", 0, &world3d_class_get_direct_space_state),
};

static void define_world3d_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "environment"),
        JS_NewCFunction(ctx, world3d_class_get_environment, "get_environment", 0),
        JS_NewCFunction(ctx, world3d_class_set_environment, "set_environment", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "fallback_environment"),
        JS_NewCFunction(ctx, world3d_class_get_fallback_environment, "get_fallback_environment", 0),
        JS_NewCFunction(ctx, world3d_class_set_fallback_environment, "set_fallback_environment", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "camera_attributes"),
        JS_NewCFunction(ctx, world3d_class_get_camera_attributes, "get_camera_attributes", 0),
        JS_NewCFunction(ctx, world3d_class_set_camera_attributes, "set_camera_attributes", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "space"),
        JS_NewCFunction(ctx, world3d_class_get_space, "get_space", 0),
        JS_UNDEFINED,
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "navigation_map"),
        JS_NewCFunction(ctx, world3d_class_get_navigation_map, "get_navigation_map", 0),
        JS_UNDEFINED,
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "scenario"),
        JS_NewCFunction(ctx, world3d_class_get_scenario, "get_scenario", 0),
        JS_UNDEFINED,
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "direct_space_state"),
        JS_NewCFunction(ctx, world3d_class_get_direct_space_state, "get_direct_space_state", 0),
        JS_UNDEFINED,
        JS_PROP_GETSET
    );
	
}

static void define_world3d_enum(JSContext *ctx, JSValue proto) {
}

static int js_world3d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["World3D"] = World3D::__class_id;
	class_id_list.insert(World3D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), World3D::__class_id, &world3d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, World3D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, World3D::__class_id, proto);

	define_world3d_property(ctx, proto);
	define_world3d_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, world3d_class_proto_funcs, _countof(world3d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, world3d_class_constructor, "World3D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "World3D", ctor);

	return 0;
}

JSModuleDef *_js_init_world3d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/resource';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_world3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "World3D");
	return m;
}

JSModuleDef *js_init_world3d_module(JSContext *ctx) {
	return _js_init_world3d_module(ctx, "@godot/classes/world3d");
}

void register_world3d() {
	World3D::__init_js_class_id();
	js_init_world3d_module(ctx);
}