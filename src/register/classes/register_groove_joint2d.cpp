
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/joint2d.hpp>
#include <godot_cpp/classes/groove_joint2d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void groove_joint2d_class_finalizer(JSRuntime *rt, JSValue val) {
	GrooveJoint2D *groove_joint2d = static_cast<GrooveJoint2D *>(JS_GetOpaque(val, GrooveJoint2D::__class_id));
	if (groove_joint2d)
		GrooveJoint2D::free(nullptr, groove_joint2d);
}

static JSClassDef groove_joint2d_class_def = {
	"GrooveJoint2D",
	.finalizer = groove_joint2d_class_finalizer
};

static JSValue groove_joint2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	GrooveJoint2D *groove_joint2d_class;
	JSValue obj = JS_NewObjectClass(ctx, GrooveJoint2D::__class_id);
	if (JS_IsException(obj))
		return obj;
	groove_joint2d_class = memnew(GrooveJoint2D);
	if (!groove_joint2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, groove_joint2d_class);
	return obj;
}
static JSValue groove_joint2d_class_set_length(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GrooveJoint2D::set_length, GrooveJoint2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue groove_joint2d_class_get_length(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GrooveJoint2D::get_length, GrooveJoint2D::__class_id, ctx, this_val, argv);
};
static JSValue groove_joint2d_class_set_initial_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GrooveJoint2D::set_initial_offset, GrooveJoint2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue groove_joint2d_class_get_initial_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GrooveJoint2D::get_initial_offset, GrooveJoint2D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry groove_joint2d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_length", 1, &groove_joint2d_class_set_length),
	JS_CFUNC_DEF("get_length", 0, &groove_joint2d_class_get_length),
	JS_CFUNC_DEF("set_initial_offset", 1, &groove_joint2d_class_set_initial_offset),
	JS_CFUNC_DEF("get_initial_offset", 0, &groove_joint2d_class_get_initial_offset),
};

static int js_groove_joint2d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&GrooveJoint2D::__class_id);
	classes["GrooveJoint2D"] = GrooveJoint2D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), GrooveJoint2D::__class_id, &groove_joint2d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Joint2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, GrooveJoint2D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, groove_joint2d_class_proto_funcs, _countof(groove_joint2d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, groove_joint2d_class_constructor, "GrooveJoint2D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "GrooveJoint2D", ctor);

	return 0;
}

JSModuleDef *_js_init_groove_joint2d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_groove_joint2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "GrooveJoint2D");
	return m;
}

JSModuleDef *js_init_groove_joint2d_module(JSContext *ctx) {
	return _js_init_groove_joint2d_module(ctx, "godot/classes/groove_joint2d");
}

void register_groove_joint2d() {
	js_init_groove_joint2d_module(ctx);
}