
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/joint3d.hpp>
#include <godot_cpp/classes/pin_joint3d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void pin_joint3d_class_finalizer(JSRuntime *rt, JSValue val) {
	PinJoint3D *pin_joint3d = static_cast<PinJoint3D *>(JS_GetOpaque(val, PinJoint3D::__class_id));
	if (pin_joint3d)
		PinJoint3D::free(nullptr, pin_joint3d);
}

static JSClassDef pin_joint3d_class_def = {
	"PinJoint3D",
	.finalizer = pin_joint3d_class_finalizer
};

static JSValue pin_joint3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	PinJoint3D *pin_joint3d_class;
	JSValue obj = JS_NewObjectClass(ctx, PinJoint3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	pin_joint3d_class = memnew(PinJoint3D);
	if (!pin_joint3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, pin_joint3d_class);
	return obj;
}
static JSValue pin_joint3d_class_set_param(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PinJoint3D::set_param, PinJoint3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue pin_joint3d_class_get_param(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PinJoint3D::get_param, PinJoint3D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry pin_joint3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_param", 2, &pin_joint3d_class_set_param),
	JS_CFUNC_DEF("get_param", 1, &pin_joint3d_class_get_param),
};

static int js_pin_joint3d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&PinJoint3D::__class_id);
	classes["PinJoint3D"] = PinJoint3D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), PinJoint3D::__class_id, &pin_joint3d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Joint3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, PinJoint3D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, pin_joint3d_class_proto_funcs, _countof(pin_joint3d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, pin_joint3d_class_constructor, "PinJoint3D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "PinJoint3D", ctor);

	return 0;
}

JSModuleDef *_js_init_pin_joint3d_module(JSContext *ctx, const char *module_name) {
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
	js_init_pin_joint3d_module(ctx);
}