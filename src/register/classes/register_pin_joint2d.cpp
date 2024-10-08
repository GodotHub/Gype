
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/joint2d.hpp>
#include <godot_cpp/classes/pin_joint2d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void pin_joint2d_class_finalizer(JSRuntime *rt, JSValue val) {
	PinJoint2D *pin_joint2d = static_cast<PinJoint2D *>(JS_GetOpaque(val, PinJoint2D::__class_id));
	if (pin_joint2d)
		PinJoint2D::free(nullptr, pin_joint2d);
}

static JSClassDef pin_joint2d_class_def = {
	"PinJoint2D",
	.finalizer = pin_joint2d_class_finalizer
};

static JSValue pin_joint2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	PinJoint2D *pin_joint2d_class;
	JSValue obj = JS_NewObjectClass(ctx, PinJoint2D::__class_id);
	if (JS_IsException(obj))
		return obj;
	pin_joint2d_class = memnew(PinJoint2D);
	if (!pin_joint2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, pin_joint2d_class);
	return obj;
}
static JSValue pin_joint2d_class_set_softness(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PinJoint2D::set_softness, PinJoint2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue pin_joint2d_class_get_softness(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PinJoint2D::get_softness, PinJoint2D::__class_id, ctx, this_val, argv);
};
static JSValue pin_joint2d_class_set_angular_limit_lower(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PinJoint2D::set_angular_limit_lower, PinJoint2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue pin_joint2d_class_get_angular_limit_lower(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PinJoint2D::get_angular_limit_lower, PinJoint2D::__class_id, ctx, this_val, argv);
};
static JSValue pin_joint2d_class_set_angular_limit_upper(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PinJoint2D::set_angular_limit_upper, PinJoint2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue pin_joint2d_class_get_angular_limit_upper(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PinJoint2D::get_angular_limit_upper, PinJoint2D::__class_id, ctx, this_val, argv);
};
static JSValue pin_joint2d_class_set_motor_target_velocity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PinJoint2D::set_motor_target_velocity, PinJoint2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue pin_joint2d_class_get_motor_target_velocity(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PinJoint2D::get_motor_target_velocity, PinJoint2D::__class_id, ctx, this_val, argv);
};
static JSValue pin_joint2d_class_set_motor_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PinJoint2D::set_motor_enabled, PinJoint2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue pin_joint2d_class_is_motor_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PinJoint2D::is_motor_enabled, PinJoint2D::__class_id, ctx, this_val, argv);
};
static JSValue pin_joint2d_class_set_angular_limit_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PinJoint2D::set_angular_limit_enabled, PinJoint2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue pin_joint2d_class_is_angular_limit_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PinJoint2D::is_angular_limit_enabled, PinJoint2D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry pin_joint2d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_softness", 1, &pin_joint2d_class_set_softness),
	JS_CFUNC_DEF("get_softness", 0, &pin_joint2d_class_get_softness),
	JS_CFUNC_DEF("set_angular_limit_lower", 1, &pin_joint2d_class_set_angular_limit_lower),
	JS_CFUNC_DEF("get_angular_limit_lower", 0, &pin_joint2d_class_get_angular_limit_lower),
	JS_CFUNC_DEF("set_angular_limit_upper", 1, &pin_joint2d_class_set_angular_limit_upper),
	JS_CFUNC_DEF("get_angular_limit_upper", 0, &pin_joint2d_class_get_angular_limit_upper),
	JS_CFUNC_DEF("set_motor_target_velocity", 1, &pin_joint2d_class_set_motor_target_velocity),
	JS_CFUNC_DEF("get_motor_target_velocity", 0, &pin_joint2d_class_get_motor_target_velocity),
	JS_CFUNC_DEF("set_motor_enabled", 1, &pin_joint2d_class_set_motor_enabled),
	JS_CFUNC_DEF("is_motor_enabled", 0, &pin_joint2d_class_is_motor_enabled),
	JS_CFUNC_DEF("set_angular_limit_enabled", 1, &pin_joint2d_class_set_angular_limit_enabled),
	JS_CFUNC_DEF("is_angular_limit_enabled", 0, &pin_joint2d_class_is_angular_limit_enabled),
};

static int js_pin_joint2d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&PinJoint2D::__class_id);
	classes["PinJoint2D"] = PinJoint2D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), PinJoint2D::__class_id, &pin_joint2d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Joint2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, PinJoint2D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, pin_joint2d_class_proto_funcs, _countof(pin_joint2d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, pin_joint2d_class_constructor, "PinJoint2D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "PinJoint2D", ctor);

	return 0;
}

JSModuleDef *_js_init_pin_joint2d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_pin_joint2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "PinJoint2D");
	return m;
}

JSModuleDef *js_init_pin_joint2d_module(JSContext *ctx) {
	return _js_init_pin_joint2d_module(ctx, "godot/classes/pin_joint2d");
}

void register_pin_joint2d() {
	js_init_pin_joint2d_module(ctx);
}