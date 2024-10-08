
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/joint3d.hpp>
#include <godot_cpp/classes/hinge_joint3d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void hinge_joint3d_class_finalizer(JSRuntime *rt, JSValue val) {
	HingeJoint3D *hinge_joint3d = static_cast<HingeJoint3D *>(JS_GetOpaque(val, HingeJoint3D::__class_id));
	if (hinge_joint3d)
		HingeJoint3D::free(nullptr, hinge_joint3d);
}

static JSClassDef hinge_joint3d_class_def = {
	"HingeJoint3D",
	.finalizer = hinge_joint3d_class_finalizer
};

static JSValue hinge_joint3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	HingeJoint3D *hinge_joint3d_class;
	JSValue obj = JS_NewObjectClass(ctx, HingeJoint3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	hinge_joint3d_class = memnew(HingeJoint3D);
	if (!hinge_joint3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, hinge_joint3d_class);
	return obj;
}
static JSValue hinge_joint3d_class_set_param(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&HingeJoint3D::set_param, HingeJoint3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue hinge_joint3d_class_get_param(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&HingeJoint3D::get_param, HingeJoint3D::__class_id, ctx, this_val, argv);
};
static JSValue hinge_joint3d_class_set_flag(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&HingeJoint3D::set_flag, HingeJoint3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue hinge_joint3d_class_get_flag(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&HingeJoint3D::get_flag, HingeJoint3D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry hinge_joint3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_param", 2, &hinge_joint3d_class_set_param),
	JS_CFUNC_DEF("get_param", 1, &hinge_joint3d_class_get_param),
	JS_CFUNC_DEF("set_flag", 2, &hinge_joint3d_class_set_flag),
	JS_CFUNC_DEF("get_flag", 1, &hinge_joint3d_class_get_flag),
};

static int js_hinge_joint3d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&HingeJoint3D::__class_id);
	classes["HingeJoint3D"] = HingeJoint3D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), HingeJoint3D::__class_id, &hinge_joint3d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Joint3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, HingeJoint3D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, hinge_joint3d_class_proto_funcs, _countof(hinge_joint3d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, hinge_joint3d_class_constructor, "HingeJoint3D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "HingeJoint3D", ctor);

	return 0;
}

JSModuleDef *_js_init_hinge_joint3d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_hinge_joint3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "HingeJoint3D");
	return m;
}

JSModuleDef *js_init_hinge_joint3d_module(JSContext *ctx) {
	return _js_init_hinge_joint3d_module(ctx, "godot/classes/hinge_joint3d");
}

void register_hinge_joint3d() {
	js_init_hinge_joint3d_module(ctx);
}