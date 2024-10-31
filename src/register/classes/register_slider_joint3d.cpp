
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/joint3d.hpp>
#include <godot_cpp/classes/slider_joint3d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void slider_joint3d_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef slider_joint3d_class_def = {
	"SliderJoint3D",
	.finalizer = slider_joint3d_class_finalizer
};

static JSValue slider_joint3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, SliderJoint3D::__class_id);
	if (JS_IsException(obj))
		return obj;

	SliderJoint3D *slider_joint3d_class;
	if (argc == 1) 
		slider_joint3d_class = static_cast<SliderJoint3D *>(static_cast<Object *>(Variant(*argv)));
	else 
		slider_joint3d_class = memnew(SliderJoint3D);
	if (!slider_joint3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, slider_joint3d_class);	
	return obj;
}
static JSValue slider_joint3d_class_set_param(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&SliderJoint3D::set_param, ctx, this_val, argc, argv);
};
static JSValue slider_joint3d_class_get_param(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&SliderJoint3D::get_param, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry slider_joint3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_param", 2, &slider_joint3d_class_set_param),
	JS_CFUNC_DEF("get_param", 1, &slider_joint3d_class_get_param),
};

static void define_slider_joint3d_property(JSContext *ctx, JSValue proto) {
	
}

static void define_slider_joint3d_enum(JSContext *ctx, JSValue proto) {
	JSValue Param_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, Param_obj, "PARAM_LINEAR_LIMIT_UPPER", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, Param_obj, "PARAM_LINEAR_LIMIT_LOWER", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, Param_obj, "PARAM_LINEAR_LIMIT_SOFTNESS", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, Param_obj, "PARAM_LINEAR_LIMIT_RESTITUTION", JS_NewInt64(ctx, 3));
	JS_SetPropertyStr(ctx, Param_obj, "PARAM_LINEAR_LIMIT_DAMPING", JS_NewInt64(ctx, 4));
	JS_SetPropertyStr(ctx, Param_obj, "PARAM_LINEAR_MOTION_SOFTNESS", JS_NewInt64(ctx, 5));
	JS_SetPropertyStr(ctx, Param_obj, "PARAM_LINEAR_MOTION_RESTITUTION", JS_NewInt64(ctx, 6));
	JS_SetPropertyStr(ctx, Param_obj, "PARAM_LINEAR_MOTION_DAMPING", JS_NewInt64(ctx, 7));
	JS_SetPropertyStr(ctx, Param_obj, "PARAM_LINEAR_ORTHOGONAL_SOFTNESS", JS_NewInt64(ctx, 8));
	JS_SetPropertyStr(ctx, Param_obj, "PARAM_LINEAR_ORTHOGONAL_RESTITUTION", JS_NewInt64(ctx, 9));
	JS_SetPropertyStr(ctx, Param_obj, "PARAM_LINEAR_ORTHOGONAL_DAMPING", JS_NewInt64(ctx, 10));
	JS_SetPropertyStr(ctx, Param_obj, "PARAM_ANGULAR_LIMIT_UPPER", JS_NewInt64(ctx, 11));
	JS_SetPropertyStr(ctx, Param_obj, "PARAM_ANGULAR_LIMIT_LOWER", JS_NewInt64(ctx, 12));
	JS_SetPropertyStr(ctx, Param_obj, "PARAM_ANGULAR_LIMIT_SOFTNESS", JS_NewInt64(ctx, 13));
	JS_SetPropertyStr(ctx, Param_obj, "PARAM_ANGULAR_LIMIT_RESTITUTION", JS_NewInt64(ctx, 14));
	JS_SetPropertyStr(ctx, Param_obj, "PARAM_ANGULAR_LIMIT_DAMPING", JS_NewInt64(ctx, 15));
	JS_SetPropertyStr(ctx, Param_obj, "PARAM_ANGULAR_MOTION_SOFTNESS", JS_NewInt64(ctx, 16));
	JS_SetPropertyStr(ctx, Param_obj, "PARAM_ANGULAR_MOTION_RESTITUTION", JS_NewInt64(ctx, 17));
	JS_SetPropertyStr(ctx, Param_obj, "PARAM_ANGULAR_MOTION_DAMPING", JS_NewInt64(ctx, 18));
	JS_SetPropertyStr(ctx, Param_obj, "PARAM_ANGULAR_ORTHOGONAL_SOFTNESS", JS_NewInt64(ctx, 19));
	JS_SetPropertyStr(ctx, Param_obj, "PARAM_ANGULAR_ORTHOGONAL_RESTITUTION", JS_NewInt64(ctx, 20));
	JS_SetPropertyStr(ctx, Param_obj, "PARAM_ANGULAR_ORTHOGONAL_DAMPING", JS_NewInt64(ctx, 21));
	JS_SetPropertyStr(ctx, Param_obj, "PARAM_MAX", JS_NewInt64(ctx, 22));
	JS_SetPropertyStr(ctx, proto, "Param", Param_obj);
}

static int js_slider_joint3d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&SliderJoint3D::__class_id);
	classes["SliderJoint3D"] = SliderJoint3D::__class_id;
	class_id_list.insert(SliderJoint3D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), SliderJoint3D::__class_id, &slider_joint3d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, SliderJoint3D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Joint3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, SliderJoint3D::__class_id, proto);

	define_slider_joint3d_property(ctx, proto);
	define_slider_joint3d_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, slider_joint3d_class_proto_funcs, _countof(slider_joint3d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, slider_joint3d_class_constructor, "SliderJoint3D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "SliderJoint3D", ctor);

	return 0;
}

JSModuleDef *_js_init_slider_joint3d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/joint3d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_slider_joint3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "SliderJoint3D");
	return m;
}

JSModuleDef *js_init_slider_joint3d_module(JSContext *ctx) {
	return _js_init_slider_joint3d_module(ctx, "@godot/classes/slider_joint3d");
}

void register_slider_joint3d() {
	SliderJoint3D::__init_js_class_id();
	js_init_slider_joint3d_module(ctx);
}