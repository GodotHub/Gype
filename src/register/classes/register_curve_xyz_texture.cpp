
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/curve.hpp>
#include <godot_cpp/classes/curve_xyz_texture.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void curve_xyz_texture_class_finalizer(JSRuntime *rt, JSValue val) {
	CurveXYZTexture *curve_xyz_texture = static_cast<CurveXYZTexture *>(JS_GetOpaque(val, CurveXYZTexture::__class_id));
	if (curve_xyz_texture)
		CurveXYZTexture::free(nullptr, curve_xyz_texture);
}

static JSClassDef curve_xyz_texture_class_def = {
	"CurveXYZTexture",
	.finalizer = curve_xyz_texture_class_finalizer
};

static JSValue curve_xyz_texture_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	CurveXYZTexture *curve_xyz_texture_class;
	JSValue obj = JS_NewObjectClass(ctx, CurveXYZTexture::__class_id);
	if (JS_IsException(obj))
		return obj;
	curve_xyz_texture_class = memnew(CurveXYZTexture);
	if (!curve_xyz_texture_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, curve_xyz_texture_class);
	return obj;
}
static JSValue curve_xyz_texture_class_set_width(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CurveXYZTexture::set_width, CurveXYZTexture::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue curve_xyz_texture_class_set_curve_x(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CurveXYZTexture::set_curve_x, CurveXYZTexture::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue curve_xyz_texture_class_get_curve_x(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CurveXYZTexture::get_curve_x, CurveXYZTexture::__class_id, ctx, this_val, argv);
};
static JSValue curve_xyz_texture_class_set_curve_y(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CurveXYZTexture::set_curve_y, CurveXYZTexture::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue curve_xyz_texture_class_get_curve_y(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CurveXYZTexture::get_curve_y, CurveXYZTexture::__class_id, ctx, this_val, argv);
};
static JSValue curve_xyz_texture_class_set_curve_z(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CurveXYZTexture::set_curve_z, CurveXYZTexture::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue curve_xyz_texture_class_get_curve_z(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CurveXYZTexture::get_curve_z, CurveXYZTexture::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry curve_xyz_texture_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_width", 1, &curve_xyz_texture_class_set_width),
	JS_CFUNC_DEF("set_curve_x", 1, &curve_xyz_texture_class_set_curve_x),
	JS_CFUNC_DEF("get_curve_x", 0, &curve_xyz_texture_class_get_curve_x),
	JS_CFUNC_DEF("set_curve_y", 1, &curve_xyz_texture_class_set_curve_y),
	JS_CFUNC_DEF("get_curve_y", 0, &curve_xyz_texture_class_get_curve_y),
	JS_CFUNC_DEF("set_curve_z", 1, &curve_xyz_texture_class_set_curve_z),
	JS_CFUNC_DEF("get_curve_z", 0, &curve_xyz_texture_class_get_curve_z),
};

static int js_curve_xyz_texture_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&CurveXYZTexture::__class_id);
	classes["CurveXYZTexture"] = CurveXYZTexture::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), CurveXYZTexture::__class_id, &curve_xyz_texture_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Texture2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, CurveXYZTexture::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, curve_xyz_texture_class_proto_funcs, _countof(curve_xyz_texture_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, curve_xyz_texture_class_constructor, "CurveXYZTexture", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "CurveXYZTexture", ctor);

	return 0;
}

JSModuleDef *_js_init_curve_xyz_texture_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_curve_xyz_texture_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "CurveXYZTexture");
	return m;
}

JSModuleDef *js_init_curve_xyz_texture_module(JSContext *ctx) {
	return _js_init_curve_xyz_texture_module(ctx, "godot/classes/curve_xyz_texture");
}

void register_curve_xyz_texture() {
	js_init_curve_xyz_texture_module(ctx);
}