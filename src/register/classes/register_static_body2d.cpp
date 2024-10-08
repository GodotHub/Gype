
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/physics_body2d.hpp>
#include <godot_cpp/classes/physics_material.hpp>
#include <godot_cpp/classes/static_body2d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void static_body2d_class_finalizer(JSRuntime *rt, JSValue val) {
	StaticBody2D *static_body2d = static_cast<StaticBody2D *>(JS_GetOpaque(val, StaticBody2D::__class_id));
	if (static_body2d)
		StaticBody2D::free(nullptr, static_body2d);
}

static JSClassDef static_body2d_class_def = {
	"StaticBody2D",
	.finalizer = static_body2d_class_finalizer
};

static JSValue static_body2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	StaticBody2D *static_body2d_class;
	JSValue obj = JS_NewObjectClass(ctx, StaticBody2D::__class_id);
	if (JS_IsException(obj))
		return obj;
	static_body2d_class = memnew(StaticBody2D);
	if (!static_body2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, static_body2d_class);
	return obj;
}
static JSValue static_body2d_class_set_constant_linear_velocity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&StaticBody2D::set_constant_linear_velocity, StaticBody2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue static_body2d_class_set_constant_angular_velocity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&StaticBody2D::set_constant_angular_velocity, StaticBody2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue static_body2d_class_get_constant_linear_velocity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&StaticBody2D::get_constant_linear_velocity, StaticBody2D::__class_id, ctx, this_val, argv);
};
static JSValue static_body2d_class_get_constant_angular_velocity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&StaticBody2D::get_constant_angular_velocity, StaticBody2D::__class_id, ctx, this_val, argv);
};
static JSValue static_body2d_class_set_physics_material_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&StaticBody2D::set_physics_material_override, StaticBody2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue static_body2d_class_get_physics_material_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&StaticBody2D::get_physics_material_override, StaticBody2D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry static_body2d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_constant_linear_velocity", 1, &static_body2d_class_set_constant_linear_velocity),
	JS_CFUNC_DEF("set_constant_angular_velocity", 1, &static_body2d_class_set_constant_angular_velocity),
	JS_CFUNC_DEF("get_constant_linear_velocity", 0, &static_body2d_class_get_constant_linear_velocity),
	JS_CFUNC_DEF("get_constant_angular_velocity", 0, &static_body2d_class_get_constant_angular_velocity),
	JS_CFUNC_DEF("set_physics_material_override", 1, &static_body2d_class_set_physics_material_override),
	JS_CFUNC_DEF("get_physics_material_override", 0, &static_body2d_class_get_physics_material_override),
};

static int js_static_body2d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&StaticBody2D::__class_id);
	classes["StaticBody2D"] = StaticBody2D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), StaticBody2D::__class_id, &static_body2d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, PhysicsBody2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, StaticBody2D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, static_body2d_class_proto_funcs, _countof(static_body2d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, static_body2d_class_constructor, "StaticBody2D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "StaticBody2D", ctor);

	return 0;
}

JSModuleDef *_js_init_static_body2d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_static_body2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "StaticBody2D");
	return m;
}

JSModuleDef *js_init_static_body2d_module(JSContext *ctx) {
	return _js_init_static_body2d_module(ctx, "godot/classes/static_body2d");
}

void register_static_body2d() {
	js_init_static_body2d_module(ctx);
}