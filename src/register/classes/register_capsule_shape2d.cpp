
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/capsule_shape2d.hpp>
#include <godot_cpp/classes/shape2d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void capsule_shape2d_class_finalizer(JSRuntime *rt, JSValue val) {
	CapsuleShape2D *capsule_shape2d = static_cast<CapsuleShape2D *>(JS_GetOpaque(val, CapsuleShape2D::__class_id));
	if (capsule_shape2d)
		CapsuleShape2D::free(nullptr, capsule_shape2d);
}

static JSClassDef capsule_shape2d_class_def = {
	"CapsuleShape2D",
	.finalizer = capsule_shape2d_class_finalizer
};

static JSValue capsule_shape2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	CapsuleShape2D *capsule_shape2d_class;
	JSValue obj = JS_NewObjectClass(ctx, CapsuleShape2D::__class_id);
	if (JS_IsException(obj))
		return obj;
	capsule_shape2d_class = memnew(CapsuleShape2D);
	if (!capsule_shape2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, capsule_shape2d_class);
	return obj;
}
static JSValue capsule_shape2d_class_set_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CapsuleShape2D::set_radius, CapsuleShape2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue capsule_shape2d_class_get_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CapsuleShape2D::get_radius, CapsuleShape2D::__class_id, ctx, this_val, argv);
};
static JSValue capsule_shape2d_class_set_height(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CapsuleShape2D::set_height, CapsuleShape2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue capsule_shape2d_class_get_height(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CapsuleShape2D::get_height, CapsuleShape2D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry capsule_shape2d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_radius", 1, &capsule_shape2d_class_set_radius),
	JS_CFUNC_DEF("get_radius", 0, &capsule_shape2d_class_get_radius),
	JS_CFUNC_DEF("set_height", 1, &capsule_shape2d_class_set_height),
	JS_CFUNC_DEF("get_height", 0, &capsule_shape2d_class_get_height),
};

static int js_capsule_shape2d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&CapsuleShape2D::__class_id);
	classes["CapsuleShape2D"] = CapsuleShape2D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), CapsuleShape2D::__class_id, &capsule_shape2d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Shape2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, CapsuleShape2D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, capsule_shape2d_class_proto_funcs, _countof(capsule_shape2d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, capsule_shape2d_class_constructor, "CapsuleShape2D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "CapsuleShape2D", ctor);

	return 0;
}

JSModuleDef *_js_init_capsule_shape2d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_capsule_shape2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "CapsuleShape2D");
	return m;
}

JSModuleDef *js_init_capsule_shape2d_module(JSContext *ctx) {
	return _js_init_capsule_shape2d_module(ctx, "godot/classes/capsule_shape2d");
}

void register_capsule_shape2d() {
	js_init_capsule_shape2d_module(ctx);
}