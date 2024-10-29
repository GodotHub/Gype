
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/physics_body2d.hpp>
#include <godot_cpp/classes/static_body2d.hpp>
#include <godot_cpp/classes/physics_material.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void static_body2d_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef static_body2d_class_def = {
	"StaticBody2D",
	.finalizer = static_body2d_class_finalizer
};

static JSValue static_body2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, StaticBody2D::__class_id);
	if (JS_IsException(obj))
		return obj;
	StaticBody2D *static_body2d_class = memnew(StaticBody2D);
	if (!static_body2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, static_body2d_class);	
	return obj;
}
static JSValue static_body2d_class_set_constant_linear_velocity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&StaticBody2D::set_constant_linear_velocity, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue static_body2d_class_set_constant_angular_velocity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&StaticBody2D::set_constant_angular_velocity, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue static_body2d_class_get_constant_linear_velocity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&StaticBody2D::get_constant_linear_velocity, ctx, this_val, argc, argv);
};
static JSValue static_body2d_class_get_constant_angular_velocity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&StaticBody2D::get_constant_angular_velocity, ctx, this_val, argc, argv);
};
static JSValue static_body2d_class_set_physics_material_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&StaticBody2D::set_physics_material_override, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue static_body2d_class_get_physics_material_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&StaticBody2D::get_physics_material_override, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry static_body2d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_constant_linear_velocity", 1, &static_body2d_class_set_constant_linear_velocity),
	JS_CFUNC_DEF("set_constant_angular_velocity", 1, &static_body2d_class_set_constant_angular_velocity),
	JS_CFUNC_DEF("get_constant_linear_velocity", 0, &static_body2d_class_get_constant_linear_velocity),
	JS_CFUNC_DEF("get_constant_angular_velocity", 0, &static_body2d_class_get_constant_angular_velocity),
	JS_CFUNC_DEF("set_physics_material_override", 1, &static_body2d_class_set_physics_material_override),
	JS_CFUNC_DEF("get_physics_material_override", 0, &static_body2d_class_get_physics_material_override),
};

void define_static_body2d_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "physics_material_override"),
        JS_NewCFunction(ctx, static_body2d_class_get_physics_material_override, "get_physics_material_override", 0),
        JS_NewCFunction(ctx, static_body2d_class_set_physics_material_override, "set_physics_material_override", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "constant_linear_velocity"),
        JS_NewCFunction(ctx, static_body2d_class_get_constant_linear_velocity, "get_constant_linear_velocity", 0),
        JS_NewCFunction(ctx, static_body2d_class_set_constant_linear_velocity, "set_constant_linear_velocity", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "constant_angular_velocity"),
        JS_NewCFunction(ctx, static_body2d_class_get_constant_angular_velocity, "get_constant_angular_velocity", 0),
        JS_NewCFunction(ctx, static_body2d_class_set_constant_angular_velocity, "set_constant_angular_velocity", 1),
        JS_PROP_GETSET
    );
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
}

static int js_static_body2d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&StaticBody2D::__class_id);
	classes["StaticBody2D"] = StaticBody2D::__class_id;
	class_id_list.insert(StaticBody2D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), StaticBody2D::__class_id, &static_body2d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, StaticBody2D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, PhysicsBody2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, StaticBody2D::__class_id, proto);

	define_static_body2d_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, static_body2d_class_proto_funcs, _countof(static_body2d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, static_body2d_class_constructor, "StaticBody2D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "StaticBody2D", ctor);

	return 0;
}

JSModuleDef *_js_init_static_body2d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/physics_body2d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_static_body2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "StaticBody2D");
	return m;
}

JSModuleDef *js_init_static_body2d_module(JSContext *ctx) {
	return _js_init_static_body2d_module(ctx, "@godot/classes/static_body2d");
}

void register_static_body2d() {
	StaticBody2D::__init_js_class_id();
	js_init_static_body2d_module(ctx);
}