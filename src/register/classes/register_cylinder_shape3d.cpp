
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/shape3d.hpp>
#include <godot_cpp/classes/cylinder_shape3d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void cylinder_shape3d_class_finalizer(JSRuntime *rt, JSValue val) {
	CylinderShape3D *cylinder_shape3d = static_cast<CylinderShape3D *>(JS_GetOpaque(val, CylinderShape3D::__class_id));
	if (cylinder_shape3d)
		CylinderShape3D::free(nullptr, cylinder_shape3d);
}

static JSClassDef cylinder_shape3d_class_def = {
	"CylinderShape3D",
	.finalizer = cylinder_shape3d_class_finalizer
};

static JSValue cylinder_shape3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	CylinderShape3D *cylinder_shape3d_class;
	JSValue obj = JS_NewObjectClass(ctx, CylinderShape3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	cylinder_shape3d_class = memnew(CylinderShape3D);
	if (!cylinder_shape3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, cylinder_shape3d_class);
	return obj;
}
static JSValue cylinder_shape3d_class_set_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CylinderShape3D::set_radius, CylinderShape3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue cylinder_shape3d_class_get_radius(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CylinderShape3D::get_radius, CylinderShape3D::__class_id, ctx, this_val, argv);
};
static JSValue cylinder_shape3d_class_set_height(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CylinderShape3D::set_height, CylinderShape3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue cylinder_shape3d_class_get_height(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CylinderShape3D::get_height, CylinderShape3D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry cylinder_shape3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_radius", 1, &cylinder_shape3d_class_set_radius),
	JS_CFUNC_DEF("get_radius", 0, &cylinder_shape3d_class_get_radius),
	JS_CFUNC_DEF("set_height", 1, &cylinder_shape3d_class_set_height),
	JS_CFUNC_DEF("get_height", 0, &cylinder_shape3d_class_get_height),
};

static int js_cylinder_shape3d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&CylinderShape3D::__class_id);
	classes["CylinderShape3D"] = CylinderShape3D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), CylinderShape3D::__class_id, &cylinder_shape3d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Shape3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, CylinderShape3D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, cylinder_shape3d_class_proto_funcs, _countof(cylinder_shape3d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, cylinder_shape3d_class_constructor, "CylinderShape3D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "CylinderShape3D", ctor);

	return 0;
}

JSModuleDef *_js_init_cylinder_shape3d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_cylinder_shape3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "CylinderShape3D");
	return m;
}

JSModuleDef *js_init_cylinder_shape3d_module(JSContext *ctx) {
	return _js_init_cylinder_shape3d_module(ctx, "godot/classes/cylinder_shape3d");
}

void register_cylinder_shape3d() {
	js_init_cylinder_shape3d_module(ctx);
}