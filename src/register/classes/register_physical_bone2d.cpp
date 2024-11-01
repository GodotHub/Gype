
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/physical_bone2d.hpp>
#include <godot_cpp/classes/joint2d.hpp>
#include <godot_cpp/classes/rigid_body2d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void physical_bone2d_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef physical_bone2d_class_def = {
	"PhysicalBone2D",
	.finalizer = physical_bone2d_class_finalizer
};

static JSValue physical_bone2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, PhysicalBone2D::__class_id);
	if (JS_IsException(obj))
		return obj;

	PhysicalBone2D *physical_bone2d_class;
	if (argc == 1) 
		physical_bone2d_class = static_cast<PhysicalBone2D *>(Variant(*argv).operator Object *());
	else 
		physical_bone2d_class = memnew(PhysicalBone2D);
	if (!physical_bone2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, physical_bone2d_class);
	return obj;
}
static JSValue physical_bone2d_class_get_joint(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&PhysicalBone2D::get_joint, ctx, this_val, argc, argv);
};
static JSValue physical_bone2d_class_get_auto_configure_joint(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&PhysicalBone2D::get_auto_configure_joint, ctx, this_val, argc, argv);
};
static JSValue physical_bone2d_class_set_auto_configure_joint(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&PhysicalBone2D::set_auto_configure_joint, ctx, this_val, argc, argv);
};
static JSValue physical_bone2d_class_set_simulate_physics(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&PhysicalBone2D::set_simulate_physics, ctx, this_val, argc, argv);
};
static JSValue physical_bone2d_class_get_simulate_physics(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&PhysicalBone2D::get_simulate_physics, ctx, this_val, argc, argv);
};
static JSValue physical_bone2d_class_is_simulating_physics(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&PhysicalBone2D::is_simulating_physics, ctx, this_val, argc, argv);
};
static JSValue physical_bone2d_class_set_bone2d_nodepath(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&PhysicalBone2D::set_bone2d_nodepath, ctx, this_val, argc, argv);
};
static JSValue physical_bone2d_class_get_bone2d_nodepath(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&PhysicalBone2D::get_bone2d_nodepath, ctx, this_val, argc, argv);
};
static JSValue physical_bone2d_class_set_bone2d_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&PhysicalBone2D::set_bone2d_index, ctx, this_val, argc, argv);
};
static JSValue physical_bone2d_class_get_bone2d_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&PhysicalBone2D::get_bone2d_index, ctx, this_val, argc, argv);
};
static JSValue physical_bone2d_class_set_follow_bone_when_simulating(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&PhysicalBone2D::set_follow_bone_when_simulating, ctx, this_val, argc, argv);
};
static JSValue physical_bone2d_class_get_follow_bone_when_simulating(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&PhysicalBone2D::get_follow_bone_when_simulating, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry physical_bone2d_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_joint", 0, &physical_bone2d_class_get_joint),
	JS_CFUNC_DEF("get_auto_configure_joint", 0, &physical_bone2d_class_get_auto_configure_joint),
	JS_CFUNC_DEF("set_auto_configure_joint", 1, &physical_bone2d_class_set_auto_configure_joint),
	JS_CFUNC_DEF("set_simulate_physics", 1, &physical_bone2d_class_set_simulate_physics),
	JS_CFUNC_DEF("get_simulate_physics", 0, &physical_bone2d_class_get_simulate_physics),
	JS_CFUNC_DEF("is_simulating_physics", 0, &physical_bone2d_class_is_simulating_physics),
	JS_CFUNC_DEF("set_bone2d_nodepath", 1, &physical_bone2d_class_set_bone2d_nodepath),
	JS_CFUNC_DEF("get_bone2d_nodepath", 0, &physical_bone2d_class_get_bone2d_nodepath),
	JS_CFUNC_DEF("set_bone2d_index", 1, &physical_bone2d_class_set_bone2d_index),
	JS_CFUNC_DEF("get_bone2d_index", 0, &physical_bone2d_class_get_bone2d_index),
	JS_CFUNC_DEF("set_follow_bone_when_simulating", 1, &physical_bone2d_class_set_follow_bone_when_simulating),
	JS_CFUNC_DEF("get_follow_bone_when_simulating", 0, &physical_bone2d_class_get_follow_bone_when_simulating),
};

static void define_physical_bone2d_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "bone2d_nodepath"),
        JS_NewCFunction(ctx, physical_bone2d_class_get_bone2d_nodepath, "get_bone2d_nodepath", 0),
        JS_NewCFunction(ctx, physical_bone2d_class_set_bone2d_nodepath, "set_bone2d_nodepath", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "bone2d_index"),
        JS_NewCFunction(ctx, physical_bone2d_class_get_bone2d_index, "get_bone2d_index", 0),
        JS_NewCFunction(ctx, physical_bone2d_class_set_bone2d_index, "set_bone2d_index", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "auto_configure_joint"),
        JS_NewCFunction(ctx, physical_bone2d_class_get_auto_configure_joint, "get_auto_configure_joint", 0),
        JS_NewCFunction(ctx, physical_bone2d_class_set_auto_configure_joint, "set_auto_configure_joint", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "simulate_physics"),
        JS_NewCFunction(ctx, physical_bone2d_class_get_simulate_physics, "get_simulate_physics", 0),
        JS_NewCFunction(ctx, physical_bone2d_class_set_simulate_physics, "set_simulate_physics", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "follow_bone_when_simulating"),
        JS_NewCFunction(ctx, physical_bone2d_class_get_follow_bone_when_simulating, "get_follow_bone_when_simulating", 0),
        JS_NewCFunction(ctx, physical_bone2d_class_set_follow_bone_when_simulating, "set_follow_bone_when_simulating", 1),
        JS_PROP_GETSET
    );
	
}

static void define_physical_bone2d_enum(JSContext *ctx, JSValue proto) {
}

static int js_physical_bone2d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["PhysicalBone2D"] = PhysicalBone2D::__class_id;
	class_id_list.insert(PhysicalBone2D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), PhysicalBone2D::__class_id, &physical_bone2d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, PhysicalBone2D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, RigidBody2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, PhysicalBone2D::__class_id, proto);

	define_physical_bone2d_property(ctx, proto);
	define_physical_bone2d_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, physical_bone2d_class_proto_funcs, _countof(physical_bone2d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, physical_bone2d_class_constructor, "PhysicalBone2D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "PhysicalBone2D", ctor);

	return 0;
}

JSModuleDef *_js_init_physical_bone2d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/rigid_body2d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_physical_bone2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "PhysicalBone2D");
	return m;
}

JSModuleDef *js_init_physical_bone2d_module(JSContext *ctx) {
	return _js_init_physical_bone2d_module(ctx, "@godot/classes/physical_bone2d");
}

void register_physical_bone2d() {
	PhysicalBone2D::__init_js_class_id();
	js_init_physical_bone2d_module(ctx);
}