
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/joint3d.hpp>
#include <godot_cpp/classes/generic6_dof_joint3d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void generic6_dof_joint3d_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef generic6_dof_joint3d_class_def = {
	"Generic6DOFJoint3D",
	.finalizer = generic6_dof_joint3d_class_finalizer
};

static JSValue generic6_dof_joint3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, Generic6DOFJoint3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	Generic6DOFJoint3D *generic6_dof_joint3d_class = memnew(Generic6DOFJoint3D);
	if (!generic6_dof_joint3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, generic6_dof_joint3d_class);	
	return obj;
}
static JSValue generic6_dof_joint3d_class_set_param_x(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Generic6DOFJoint3D::set_param_x, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue generic6_dof_joint3d_class_get_param_x(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Generic6DOFJoint3D::get_param_x, ctx, this_val, argc, argv);
};
static JSValue generic6_dof_joint3d_class_set_param_y(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Generic6DOFJoint3D::set_param_y, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue generic6_dof_joint3d_class_get_param_y(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Generic6DOFJoint3D::get_param_y, ctx, this_val, argc, argv);
};
static JSValue generic6_dof_joint3d_class_set_param_z(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Generic6DOFJoint3D::set_param_z, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue generic6_dof_joint3d_class_get_param_z(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Generic6DOFJoint3D::get_param_z, ctx, this_val, argc, argv);
};
static JSValue generic6_dof_joint3d_class_set_flag_x(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Generic6DOFJoint3D::set_flag_x, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue generic6_dof_joint3d_class_get_flag_x(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Generic6DOFJoint3D::get_flag_x, ctx, this_val, argc, argv);
};
static JSValue generic6_dof_joint3d_class_set_flag_y(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Generic6DOFJoint3D::set_flag_y, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue generic6_dof_joint3d_class_get_flag_y(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Generic6DOFJoint3D::get_flag_y, ctx, this_val, argc, argv);
};
static JSValue generic6_dof_joint3d_class_set_flag_z(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Generic6DOFJoint3D::set_flag_z, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue generic6_dof_joint3d_class_get_flag_z(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Generic6DOFJoint3D::get_flag_z, ctx, this_val, argc, argv);
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

void define_generic6_dof_joint3d_property(JSContext *ctx, JSValue obj) {
}

static int js_generic6_dof_joint3d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&Generic6DOFJoint3D::__class_id);
	classes["Generic6DOFJoint3D"] = Generic6DOFJoint3D::__class_id;
	class_id_list.insert(Generic6DOFJoint3D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), Generic6DOFJoint3D::__class_id, &generic6_dof_joint3d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, Generic6DOFJoint3D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Joint3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Generic6DOFJoint3D::__class_id, proto);

	define_generic6_dof_joint3d_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, generic6_dof_joint3d_class_proto_funcs, _countof(generic6_dof_joint3d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, generic6_dof_joint3d_class_constructor, "Generic6DOFJoint3D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "Generic6DOFJoint3D", ctor);

	return 0;
}

JSModuleDef *_js_init_generic6_dof_joint3d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/joint3d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
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
	Generic6DOFJoint3D::__init_js_class_id();
	js_init_generic6_dof_joint3d_module(ctx);
}