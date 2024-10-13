
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
	SliderJoint3D *slider_joint3d = static_cast<SliderJoint3D *>(JS_GetOpaque(val, SliderJoint3D::__class_id));
	if (slider_joint3d)
		SliderJoint3D::free(nullptr, slider_joint3d);
}

static JSClassDef slider_joint3d_class_def = {
	"SliderJoint3D",
	.finalizer = slider_joint3d_class_finalizer
};

static JSValue slider_joint3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	SliderJoint3D *slider_joint3d_class;
	JSValue obj = JS_NewObjectClass(ctx, SliderJoint3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	slider_joint3d_class = memnew(SliderJoint3D);
	if (!slider_joint3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, slider_joint3d_class);
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");

	if (JS_IsObject(proto)) {
		JS_SetPrototype(ctx, obj, proto);
	}
	JS_FreeValue(ctx, proto);

	
	return obj;
}
static JSValue slider_joint3d_class_set_param(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SliderJoint3D::set_param, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue slider_joint3d_class_get_param(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SliderJoint3D::get_param, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry slider_joint3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_param", 2, &slider_joint3d_class_set_param),
	JS_CFUNC_DEF("get_param", 1, &slider_joint3d_class_get_param),
};

void define_slider_joint3d_property(JSContext *ctx, JSValue obj) {
}

static int js_slider_joint3d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&SliderJoint3D::__class_id);
	classes["SliderJoint3D"] = SliderJoint3D::__class_id;
	class_id_list.insert(SliderJoint3D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), SliderJoint3D::__class_id, &slider_joint3d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Joint3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, SliderJoint3D::__class_id, proto);
	define_slider_joint3d_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, slider_joint3d_class_proto_funcs, _countof(slider_joint3d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, slider_joint3d_class_constructor, "SliderJoint3D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "SliderJoint3D", ctor);

	return 0;
}

JSModuleDef *_js_init_slider_joint3d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/joint3d';";
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
	return _js_init_slider_joint3d_module(ctx, "godot/classes/slider_joint3d");
}

void register_slider_joint3d() {
	SliderJoint3D::__init_js_class_id();
	js_init_slider_joint3d_module(ctx);
}