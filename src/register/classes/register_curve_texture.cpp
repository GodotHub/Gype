
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/curve.hpp>
#include <godot_cpp/classes/curve_texture.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void curve_texture_class_finalizer(JSRuntime *rt, JSValue val) {
	CurveTexture *curve_texture = static_cast<CurveTexture *>(JS_GetOpaque(val, CurveTexture::__class_id));
	if (curve_texture)
		CurveTexture::free(nullptr, curve_texture);
}

static JSClassDef curve_texture_class_def = {
	"CurveTexture",
	.finalizer = curve_texture_class_finalizer
};

static JSValue curve_texture_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	CurveTexture *curve_texture_class;
	JSValue obj = JS_NewObjectClass(ctx, CurveTexture::__class_id);
	if (JS_IsException(obj))
		return obj;
	curve_texture_class = memnew(CurveTexture);
	if (!curve_texture_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, curve_texture_class);
	return obj;
}
static JSValue curve_texture_class_set_width(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CurveTexture::set_width, CurveTexture::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue curve_texture_class_set_curve(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CurveTexture::set_curve, CurveTexture::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue curve_texture_class_get_curve(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CurveTexture::get_curve, CurveTexture::__class_id, ctx, this_val, argv);
};
static JSValue curve_texture_class_set_texture_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&CurveTexture::set_texture_mode, CurveTexture::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue curve_texture_class_get_texture_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CurveTexture::get_texture_mode, CurveTexture::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry curve_texture_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_width", 1, &curve_texture_class_set_width),
	JS_CFUNC_DEF("set_curve", 1, &curve_texture_class_set_curve),
	JS_CFUNC_DEF("get_curve", 0, &curve_texture_class_get_curve),
	JS_CFUNC_DEF("set_texture_mode", 1, &curve_texture_class_set_texture_mode),
	JS_CFUNC_DEF("get_texture_mode", 0, &curve_texture_class_get_texture_mode),
};

static int js_curve_texture_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&CurveTexture::__class_id);
	classes["CurveTexture"] = CurveTexture::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), CurveTexture::__class_id, &curve_texture_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Texture2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, CurveTexture::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, curve_texture_class_proto_funcs, _countof(curve_texture_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, curve_texture_class_constructor, "CurveTexture", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "CurveTexture", ctor);

	return 0;
}

JSModuleDef *_js_init_curve_texture_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_curve_texture_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "CurveTexture");
	return m;
}

JSModuleDef *js_init_curve_texture_module(JSContext *ctx) {
	return _js_init_curve_texture_module(ctx, "godot/classes/curve_texture");
}

void register_curve_texture() {
	js_init_curve_texture_module(ctx);
}