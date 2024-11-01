
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/joint3d.hpp>
#include <godot_cpp/classes/hinge_joint3d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void hinge_joint3d_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef hinge_joint3d_class_def = {
	"HingeJoint3D",
	.finalizer = hinge_joint3d_class_finalizer
};

static JSValue hinge_joint3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, HingeJoint3D::__class_id);
	if (JS_IsException(obj))
		return obj;

	HingeJoint3D *hinge_joint3d_class;
	if (argc == 1) 
		hinge_joint3d_class = static_cast<HingeJoint3D *>(Variant(*argv).operator Object *());
	else 
		hinge_joint3d_class = memnew(HingeJoint3D);
	if (!hinge_joint3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, hinge_joint3d_class);
	return obj;
}
static JSValue hinge_joint3d_class_set_param(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&HingeJoint3D::set_param, ctx, this_val, argc, argv);
};
static JSValue hinge_joint3d_class_get_param(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&HingeJoint3D::get_param, ctx, this_val, argc, argv);
};
static JSValue hinge_joint3d_class_set_flag(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&HingeJoint3D::set_flag, ctx, this_val, argc, argv);
};
static JSValue hinge_joint3d_class_get_flag(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&HingeJoint3D::get_flag, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry hinge_joint3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_param", 2, &hinge_joint3d_class_set_param),
	JS_CFUNC_DEF("get_param", 1, &hinge_joint3d_class_get_param),
	JS_CFUNC_DEF("set_flag", 2, &hinge_joint3d_class_set_flag),
	JS_CFUNC_DEF("get_flag", 1, &hinge_joint3d_class_get_flag),
};

static void define_hinge_joint3d_property(JSContext *ctx, JSValue proto) {
	
}

static void define_hinge_joint3d_enum(JSContext *ctx, JSValue proto) {
	JSValue Param_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, Param_obj, "PARAM_BIAS", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, Param_obj, "PARAM_LIMIT_UPPER", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, Param_obj, "PARAM_LIMIT_LOWER", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, Param_obj, "PARAM_LIMIT_BIAS", JS_NewInt64(ctx, 3));
	JS_SetPropertyStr(ctx, Param_obj, "PARAM_LIMIT_SOFTNESS", JS_NewInt64(ctx, 4));
	JS_SetPropertyStr(ctx, Param_obj, "PARAM_LIMIT_RELAXATION", JS_NewInt64(ctx, 5));
	JS_SetPropertyStr(ctx, Param_obj, "PARAM_MOTOR_TARGET_VELOCITY", JS_NewInt64(ctx, 6));
	JS_SetPropertyStr(ctx, Param_obj, "PARAM_MOTOR_MAX_IMPULSE", JS_NewInt64(ctx, 7));
	JS_SetPropertyStr(ctx, Param_obj, "PARAM_MAX", JS_NewInt64(ctx, 8));
	JS_SetPropertyStr(ctx, proto, "Param", Param_obj);
	JSValue Flag_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, Flag_obj, "FLAG_USE_LIMIT", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, Flag_obj, "FLAG_ENABLE_MOTOR", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, Flag_obj, "FLAG_MAX", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, proto, "Flag", Flag_obj);
}

static int js_hinge_joint3d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["HingeJoint3D"] = HingeJoint3D::__class_id;
	class_id_list.insert(HingeJoint3D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), HingeJoint3D::__class_id, &hinge_joint3d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, HingeJoint3D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Joint3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, HingeJoint3D::__class_id, proto);

	define_hinge_joint3d_property(ctx, proto);
	define_hinge_joint3d_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, hinge_joint3d_class_proto_funcs, _countof(hinge_joint3d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, hinge_joint3d_class_constructor, "HingeJoint3D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "HingeJoint3D", ctor);

	return 0;
}

JSModuleDef *_js_init_hinge_joint3d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/joint3d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_hinge_joint3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "HingeJoint3D");
	return m;
}

JSModuleDef *js_init_hinge_joint3d_module(JSContext *ctx) {
	return _js_init_hinge_joint3d_module(ctx, "@godot/classes/hinge_joint3d");
}

void register_hinge_joint3d() {
	HingeJoint3D::__init_js_class_id();
	js_init_hinge_joint3d_module(ctx);
}