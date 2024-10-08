
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/cone_twist_joint3d.hpp>
#include <godot_cpp/classes/joint3d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void cone_twist_joint3d_class_finalizer(JSRuntime *rt, JSValue val) {
	ConeTwistJoint3D *cone_twist_joint3d = static_cast<ConeTwistJoint3D *>(JS_GetOpaque(val, ConeTwistJoint3D::__class_id));
	if (cone_twist_joint3d)
		ConeTwistJoint3D::free(nullptr, cone_twist_joint3d);
}

static JSClassDef cone_twist_joint3d_class_def = {
	"ConeTwistJoint3D",
	.finalizer = cone_twist_joint3d_class_finalizer
};

static JSValue cone_twist_joint3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	ConeTwistJoint3D *cone_twist_joint3d_class;
	JSValue obj = JS_NewObjectClass(ctx, ConeTwistJoint3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	cone_twist_joint3d_class = memnew(ConeTwistJoint3D);
	if (!cone_twist_joint3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, cone_twist_joint3d_class);
	return obj;
}
static JSValue cone_twist_joint3d_class_set_param(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ConeTwistJoint3D::set_param, ConeTwistJoint3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue cone_twist_joint3d_class_get_param(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ConeTwistJoint3D::get_param, ConeTwistJoint3D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry cone_twist_joint3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_param", 2, &cone_twist_joint3d_class_set_param),
	JS_CFUNC_DEF("get_param", 1, &cone_twist_joint3d_class_get_param),
};

static int js_cone_twist_joint3d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&ConeTwistJoint3D::__class_id);
	classes["ConeTwistJoint3D"] = ConeTwistJoint3D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), ConeTwistJoint3D::__class_id, &cone_twist_joint3d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Joint3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ConeTwistJoint3D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, cone_twist_joint3d_class_proto_funcs, _countof(cone_twist_joint3d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, cone_twist_joint3d_class_constructor, "ConeTwistJoint3D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "ConeTwistJoint3D", ctor);

	return 0;
}

JSModuleDef *_js_init_cone_twist_joint3d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_cone_twist_joint3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "ConeTwistJoint3D");
	return m;
}

JSModuleDef *js_init_cone_twist_joint3d_module(JSContext *ctx) {
	return _js_init_cone_twist_joint3d_module(ctx, "godot/classes/cone_twist_joint3d");
}

void register_cone_twist_joint3d() {
	js_init_cone_twist_joint3d_module(ctx);
}