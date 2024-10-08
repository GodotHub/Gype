
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/gradient.hpp>
#include <godot_cpp/classes/gradient_texture1d.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void gradient_texture1d_class_finalizer(JSRuntime *rt, JSValue val) {
	GradientTexture1D *gradient_texture1d = static_cast<GradientTexture1D *>(JS_GetOpaque(val, GradientTexture1D::__class_id));
	if (gradient_texture1d)
		GradientTexture1D::free(nullptr, gradient_texture1d);
}

static JSClassDef gradient_texture1d_class_def = {
	"GradientTexture1D",
	.finalizer = gradient_texture1d_class_finalizer
};

static JSValue gradient_texture1d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	GradientTexture1D *gradient_texture1d_class;
	JSValue obj = JS_NewObjectClass(ctx, GradientTexture1D::__class_id);
	if (JS_IsException(obj))
		return obj;
	gradient_texture1d_class = memnew(GradientTexture1D);
	if (!gradient_texture1d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, gradient_texture1d_class);
	return obj;
}
static JSValue gradient_texture1d_class_set_gradient(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GradientTexture1D::set_gradient, GradientTexture1D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gradient_texture1d_class_get_gradient(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GradientTexture1D::get_gradient, GradientTexture1D::__class_id, ctx, this_val, argv);
};
static JSValue gradient_texture1d_class_set_width(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GradientTexture1D::set_width, GradientTexture1D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gradient_texture1d_class_set_use_hdr(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GradientTexture1D::set_use_hdr, GradientTexture1D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gradient_texture1d_class_is_using_hdr(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GradientTexture1D::is_using_hdr, GradientTexture1D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry gradient_texture1d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_gradient", 1, &gradient_texture1d_class_set_gradient),
	JS_CFUNC_DEF("get_gradient", 0, &gradient_texture1d_class_get_gradient),
	JS_CFUNC_DEF("set_width", 1, &gradient_texture1d_class_set_width),
	JS_CFUNC_DEF("set_use_hdr", 1, &gradient_texture1d_class_set_use_hdr),
	JS_CFUNC_DEF("is_using_hdr", 0, &gradient_texture1d_class_is_using_hdr),
};

static int js_gradient_texture1d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&GradientTexture1D::__class_id);
	classes["GradientTexture1D"] = GradientTexture1D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), GradientTexture1D::__class_id, &gradient_texture1d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Texture2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, GradientTexture1D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, gradient_texture1d_class_proto_funcs, _countof(gradient_texture1d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, gradient_texture1d_class_constructor, "GradientTexture1D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "GradientTexture1D", ctor);

	return 0;
}

JSModuleDef *_js_init_gradient_texture1d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_gradient_texture1d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "GradientTexture1D");
	return m;
}

JSModuleDef *js_init_gradient_texture1d_module(JSContext *ctx) {
	return _js_init_gradient_texture1d_module(ctx, "godot/classes/gradient_texture1d");
}

void register_gradient_texture1d() {
	js_init_gradient_texture1d_module(ctx);
}