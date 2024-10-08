
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/generic6_dof_joint3d.hpp>
#include <godot_cpp/classes/joint3d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void generic6_dof_joint3d_class_finalizer(JSRuntime *rt, JSValue val) {
	Generic6DOFJoint3D *generic6_dof_joint3d = static_cast<Generic6DOFJoint3D *>(JS_GetOpaque(val, Generic6DOFJoint3D::__class_id));
	if (generic6_dof_joint3d)
		Generic6DOFJoint3D::free(nullptr, generic6_dof_joint3d);
}

static JSClassDef generic6_dof_joint3d_class_def = {
	"Generic6DOFJoint3D",
	.finalizer = generic6_dof_joint3d_class_finalizer
};

static JSValue generic6_dof_joint3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	Generic6DOFJoint3D *generic6_dof_joint3d_class;
	JSValue obj = JS_NewObjectClass(ctx, Generic6DOFJoint3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	generic6_dof_joint3d_class = memnew(Generic6DOFJoint3D);
	if (!generic6_dof_joint3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, generic6_dof_joint3d_class);
	return obj;
}
static JSValue generic6_dof_joint3d_class_set_param_x(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Generic6DOFJoint3D::set_param_x, Generic6DOFJoint3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue generic6_dof_joint3d_class_get_param_x(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Generic6DOFJoint3D::get_param_x, Generic6DOFJoint3D::__class_id, ctx, this_val, argv);
};
static JSValue generic6_dof_joint3d_class_set_param_y(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Generic6DOFJoint3D::set_param_y, Generic6DOFJoint3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue generic6_dof_joint3d_class_get_param_y(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Generic6DOFJoint3D::get_param_y, Generic6DOFJoint3D::__class_id, ctx, this_val, argv);
};
static JSValue generic6_dof_joint3d_class_set_param_z(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Generic6DOFJoint3D::set_param_z, Generic6DOFJoint3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue generic6_dof_joint3d_class_get_param_z(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Generic6DOFJoint3D::get_param_z, Generic6DOFJoint3D::__class_id, ctx, this_val, argv);
};
static JSValue generic6_dof_joint3d_class_set_flag_x(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Generic6DOFJoint3D::set_flag_x, Generic6DOFJoint3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue generic6_dof_joint3d_class_get_flag_x(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Generic6DOFJoint3D::get_flag_x, Generic6DOFJoint3D::__class_id, ctx, this_val, argv);
};
static JSValue generic6_dof_joint3d_class_set_flag_y(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Generic6DOFJoint3D::set_flag_y, Generic6DOFJoint3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue generic6_dof_joint3d_class_get_flag_y(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Generic6DOFJoint3D::get_flag_y, Generic6DOFJoint3D::__class_id, ctx, this_val, argv);
};
static JSValue generic6_dof_joint3d_class_set_flag_z(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Generic6DOFJoint3D::set_flag_z, Generic6DOFJoint3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue generic6_dof_joint3d_class_get_flag_z(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Generic6DOFJoint3D::get_flag_z, Generic6DOFJoint3D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry generic6_dof_joint3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_param_x", 2, &generic6_dof_joint3d_class_set_param_x),
	JS_CFUNC_DEF("get_param_x", 1, &generic6_dof_joint3d_class_get_param_x),
	JS_CFUNC_DEF("set_param_y", 2, &generic6_dof_joint3d_class_set_param_y),
	JS_CFUNC_DEF("get_param_y", 1, &generic6_dof_joint3d_class_get_param_y),
	JS_CFUNC_DEF("set_param_z", 2, &generic6_dof_joint3d_class_set_param_z),
	JS_CFUNC_DEF("get_param_z", 1, &generic6_dof_joint3d_class_get_param_z),
	JS_CFUNC_DEF("set_flag_x", 2, &generic6_dof_joint3d_class_set_flag_x),
	JS_CFUNC_DEF("get_flag_x", 1, &generic6_dof_joint3d_class_get_flag_x),
	JS_CFUNC_DEF("set_flag_y", 2, &generic6_dof_joint3d_class_set_flag_y),
	JS_CFUNC_DEF("get_flag_y", 1, &generic6_dof_joint3d_class_get_flag_y),
	JS_CFUNC_DEF("set_flag_z", 2, &generic6_dof_joint3d_class_set_flag_z),
	JS_CFUNC_DEF("get_flag_z", 1, &generic6_dof_joint3d_class_get_flag_z),
};

static int js_generic6_dof_joint3d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&Generic6DOFJoint3D::__class_id);
	classes["Generic6DOFJoint3D"] = Generic6DOFJoint3D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), Generic6DOFJoint3D::__class_id, &generic6_dof_joint3d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Joint3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Generic6DOFJoint3D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, generic6_dof_joint3d_class_proto_funcs, _countof(generic6_dof_joint3d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, generic6_dof_joint3d_class_constructor, "Generic6DOFJoint3D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "Generic6DOFJoint3D", ctor);

	return 0;
}

JSModuleDef *_js_init_generic6_dof_joint3d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_generic6_dof_joint3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Generic6DOFJoint3D");
	return m;
}

JSModuleDef *js_init_generic6_dof_joint3d_module(JSContext *ctx) {
	return _js_init_generic6_dof_joint3d_module(ctx, "godot/classes/generic6_dof_joint3d");
}

void register_generic6_dof_joint3d() {
	js_init_generic6_dof_joint3d_module(ctx);
}