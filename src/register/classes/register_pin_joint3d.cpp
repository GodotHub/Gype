
#include "quickjs/env.h"
#include "quickjs/quickjs.h"
#include "quickjs/quickjs_helper.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/func_utils.h"
#include <godot_cpp/classes/joint3d.hpp>
#include <godot_cpp/classes/pin_joint3d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void pin_joint3d_class_finalizer(JSRuntime *rt, JSValue val) {
	// nothing
}

static JSClassDef pin_joint3d_class_def = {
	"PinJoint3D",
	.finalizer = pin_joint3d_class_finalizer
};

static JSValue pin_joint3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, PinJoint3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	PinJoint3D *pin_joint3d_class = memnew(PinJoint3D);
	if (!pin_joint3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, pin_joint3d_class);
	return obj;
}
static JSValue pin_joint3d_class_set_param(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	call_builtin_method_no_ret(&PinJoint3D::set_param, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue pin_joint3d_class_get_param(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&PinJoint3D::get_param, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry pin_joint3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_param", 2, &pin_joint3d_class_set_param),
	JS_CFUNC_DEF("get_param", 1, &pin_joint3d_class_get_param),
};

void define_pin_joint3d_property(JSContext *ctx, JSValue obj) {
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
	JSValue Param_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, Param_obj, "PARAM_BIAS", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, Param_obj, "PARAM_DAMPING", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, Param_obj, "PARAM_IMPULSE_CLAMP", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, proto, "Param", Param_obj);
}

static int js_pin_joint3d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&PinJoint3D::__class_id);
	classes["PinJoint3D"] = PinJoint3D::__class_id;
	class_id_list.insert(PinJoint3D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), PinJoint3D::__class_id, &pin_joint3d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, PinJoint3D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Joint3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, PinJoint3D::__class_id, proto);

	define_pin_joint3d_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, pin_joint3d_class_proto_funcs, _countof(pin_joint3d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, pin_joint3d_class_constructor, "PinJoint3D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "PinJoint3D", ctor);

	return 0;
}

JSModuleDef *_js_init_pin_joint3d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/joint3d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_pin_joint3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "PinJoint3D");
	return m;
}

JSModuleDef *js_init_pin_joint3d_module(JSContext *ctx) {
	return _js_init_pin_joint3d_module(ctx, "godot/classes/pin_joint3d");
}

void register_pin_joint3d() {
	PinJoint3D::__init_js_class_id();
	js_init_pin_joint3d_module(ctx);
}