
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/joint2d.hpp>
#include <godot_cpp/classes/damped_spring_joint2d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void damped_spring_joint2d_class_finalizer(JSRuntime *rt, JSValue val) {
	DampedSpringJoint2D *damped_spring_joint2d = static_cast<DampedSpringJoint2D *>(JS_GetOpaque(val, DampedSpringJoint2D::__class_id));
	if (damped_spring_joint2d)
		DampedSpringJoint2D::free(nullptr, damped_spring_joint2d);
}

static JSClassDef damped_spring_joint2d_class_def = {
	"DampedSpringJoint2D",
	.finalizer = damped_spring_joint2d_class_finalizer
};

static JSValue damped_spring_joint2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	DampedSpringJoint2D *damped_spring_joint2d_class;
	JSValue obj = JS_NewObjectClass(ctx, DampedSpringJoint2D::__class_id);
	if (JS_IsException(obj))
		return obj;
	damped_spring_joint2d_class = memnew(DampedSpringJoint2D);
	if (!damped_spring_joint2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, damped_spring_joint2d_class);
	return obj;
}
static JSValue damped_spring_joint2d_class_set_length(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&DampedSpringJoint2D::set_length, DampedSpringJoint2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue damped_spring_joint2d_class_get_length(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&DampedSpringJoint2D::get_length, DampedSpringJoint2D::__class_id, ctx, this_val, argv);
};
static JSValue damped_spring_joint2d_class_set_rest_length(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&DampedSpringJoint2D::set_rest_length, DampedSpringJoint2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue damped_spring_joint2d_class_get_rest_length(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&DampedSpringJoint2D::get_rest_length, DampedSpringJoint2D::__class_id, ctx, this_val, argv);
};
static JSValue damped_spring_joint2d_class_set_stiffness(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&DampedSpringJoint2D::set_stiffness, DampedSpringJoint2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue damped_spring_joint2d_class_get_stiffness(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&DampedSpringJoint2D::get_stiffness, DampedSpringJoint2D::__class_id, ctx, this_val, argv);
};
static JSValue damped_spring_joint2d_class_set_damping(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&DampedSpringJoint2D::set_damping, DampedSpringJoint2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue damped_spring_joint2d_class_get_damping(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&DampedSpringJoint2D::get_damping, DampedSpringJoint2D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry damped_spring_joint2d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_length", 1, &damped_spring_joint2d_class_set_length),
	JS_CFUNC_DEF("get_length", 0, &damped_spring_joint2d_class_get_length),
	JS_CFUNC_DEF("set_rest_length", 1, &damped_spring_joint2d_class_set_rest_length),
	JS_CFUNC_DEF("get_rest_length", 0, &damped_spring_joint2d_class_get_rest_length),
	JS_CFUNC_DEF("set_stiffness", 1, &damped_spring_joint2d_class_set_stiffness),
	JS_CFUNC_DEF("get_stiffness", 0, &damped_spring_joint2d_class_get_stiffness),
	JS_CFUNC_DEF("set_damping", 1, &damped_spring_joint2d_class_set_damping),
	JS_CFUNC_DEF("get_damping", 0, &damped_spring_joint2d_class_get_damping),
};

static int js_damped_spring_joint2d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&DampedSpringJoint2D::__class_id);
	classes["DampedSpringJoint2D"] = DampedSpringJoint2D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), DampedSpringJoint2D::__class_id, &damped_spring_joint2d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Joint2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, DampedSpringJoint2D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, damped_spring_joint2d_class_proto_funcs, _countof(damped_spring_joint2d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, damped_spring_joint2d_class_constructor, "DampedSpringJoint2D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "DampedSpringJoint2D", ctor);

	return 0;
}

JSModuleDef *_js_init_damped_spring_joint2d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_damped_spring_joint2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "DampedSpringJoint2D");
	return m;
}

JSModuleDef *js_init_damped_spring_joint2d_module(JSContext *ctx) {
	return _js_init_damped_spring_joint2d_module(ctx, "godot/classes/damped_spring_joint2d");
}

void register_damped_spring_joint2d() {
	js_init_damped_spring_joint2d_module(ctx);
}