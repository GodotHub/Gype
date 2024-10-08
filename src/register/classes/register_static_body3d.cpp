
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/physics_material.hpp>
#include <godot_cpp/classes/static_body3d.hpp>
#include <godot_cpp/classes/physics_body3d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void static_body3d_class_finalizer(JSRuntime *rt, JSValue val) {
	StaticBody3D *static_body3d = static_cast<StaticBody3D *>(JS_GetOpaque(val, StaticBody3D::__class_id));
	if (static_body3d)
		StaticBody3D::free(nullptr, static_body3d);
}

static JSClassDef static_body3d_class_def = {
	"StaticBody3D",
	.finalizer = static_body3d_class_finalizer
};

static JSValue static_body3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	StaticBody3D *static_body3d_class;
	JSValue obj = JS_NewObjectClass(ctx, StaticBody3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	static_body3d_class = memnew(StaticBody3D);
	if (!static_body3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, static_body3d_class);
	return obj;
}
static JSValue static_body3d_class_set_constant_linear_velocity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&StaticBody3D::set_constant_linear_velocity, StaticBody3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue static_body3d_class_set_constant_angular_velocity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&StaticBody3D::set_constant_angular_velocity, StaticBody3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue static_body3d_class_get_constant_linear_velocity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&StaticBody3D::get_constant_linear_velocity, StaticBody3D::__class_id, ctx, this_val, argv);
};
static JSValue static_body3d_class_get_constant_angular_velocity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&StaticBody3D::get_constant_angular_velocity, StaticBody3D::__class_id, ctx, this_val, argv);
};
static JSValue static_body3d_class_set_physics_material_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&StaticBody3D::set_physics_material_override, StaticBody3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue static_body3d_class_get_physics_material_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&StaticBody3D::get_physics_material_override, StaticBody3D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry static_body3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_constant_linear_velocity", 1, &static_body3d_class_set_constant_linear_velocity),
	JS_CFUNC_DEF("set_constant_angular_velocity", 1, &static_body3d_class_set_constant_angular_velocity),
	JS_CFUNC_DEF("get_constant_linear_velocity", 0, &static_body3d_class_get_constant_linear_velocity),
	JS_CFUNC_DEF("get_constant_angular_velocity", 0, &static_body3d_class_get_constant_angular_velocity),
	JS_CFUNC_DEF("set_physics_material_override", 1, &static_body3d_class_set_physics_material_override),
	JS_CFUNC_DEF("get_physics_material_override", 0, &static_body3d_class_get_physics_material_override),
};

static int js_static_body3d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&StaticBody3D::__class_id);
	classes["StaticBody3D"] = StaticBody3D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), StaticBody3D::__class_id, &static_body3d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, PhysicsBody3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, StaticBody3D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, static_body3d_class_proto_funcs, _countof(static_body3d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, static_body3d_class_constructor, "StaticBody3D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "StaticBody3D", ctor);

	return 0;
}

JSModuleDef *_js_init_static_body3d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_static_body3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "StaticBody3D");
	return m;
}

JSModuleDef *js_init_static_body3d_module(JSContext *ctx) {
	return _js_init_static_body3d_module(ctx, "godot/classes/static_body3d");
}

void register_static_body3d() {
	js_init_static_body3d_module(ctx);
}