
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/gradient.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/gradient_texture2d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void gradient_texture2d_class_finalizer(JSRuntime *rt, JSValue val) {
	GradientTexture2D *gradient_texture2d = static_cast<GradientTexture2D *>(JS_GetOpaque(val, GradientTexture2D::__class_id));
	if (gradient_texture2d)
		GradientTexture2D::free(nullptr, gradient_texture2d);
}

static JSClassDef gradient_texture2d_class_def = {
	"GradientTexture2D",
	.finalizer = gradient_texture2d_class_finalizer
};

static JSValue gradient_texture2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	GradientTexture2D *gradient_texture2d_class;
	JSValue obj = JS_NewObjectClass(ctx, GradientTexture2D::__class_id);
	if (JS_IsException(obj))
		return obj;
	gradient_texture2d_class = memnew(GradientTexture2D);
	if (!gradient_texture2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, gradient_texture2d_class);
	return obj;
}
static JSValue gradient_texture2d_class_set_gradient(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GradientTexture2D::set_gradient, GradientTexture2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gradient_texture2d_class_get_gradient(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GradientTexture2D::get_gradient, GradientTexture2D::__class_id, ctx, this_val, argv);
};
static JSValue gradient_texture2d_class_set_width(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GradientTexture2D::set_width, GradientTexture2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gradient_texture2d_class_set_height(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GradientTexture2D::set_height, GradientTexture2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gradient_texture2d_class_set_use_hdr(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GradientTexture2D::set_use_hdr, GradientTexture2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gradient_texture2d_class_is_using_hdr(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GradientTexture2D::is_using_hdr, GradientTexture2D::__class_id, ctx, this_val, argv);
};
static JSValue gradient_texture2d_class_set_fill(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GradientTexture2D::set_fill, GradientTexture2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gradient_texture2d_class_get_fill(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GradientTexture2D::get_fill, GradientTexture2D::__class_id, ctx, this_val, argv);
};
static JSValue gradient_texture2d_class_set_fill_from(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GradientTexture2D::set_fill_from, GradientTexture2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gradient_texture2d_class_get_fill_from(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GradientTexture2D::get_fill_from, GradientTexture2D::__class_id, ctx, this_val, argv);
};
static JSValue gradient_texture2d_class_set_fill_to(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GradientTexture2D::set_fill_to, GradientTexture2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gradient_texture2d_class_get_fill_to(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GradientTexture2D::get_fill_to, GradientTexture2D::__class_id, ctx, this_val, argv);
};
static JSValue gradient_texture2d_class_set_repeat(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&GradientTexture2D::set_repeat, GradientTexture2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gradient_texture2d_class_get_repeat(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GradientTexture2D::get_repeat, GradientTexture2D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry gradient_texture2d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_gradient", 1, &gradient_texture2d_class_set_gradient),
	JS_CFUNC_DEF("get_gradient", 0, &gradient_texture2d_class_get_gradient),
	JS_CFUNC_DEF("set_width", 1, &gradient_texture2d_class_set_width),
	JS_CFUNC_DEF("set_height", 1, &gradient_texture2d_class_set_height),
	JS_CFUNC_DEF("set_use_hdr", 1, &gradient_texture2d_class_set_use_hdr),
	JS_CFUNC_DEF("is_using_hdr", 0, &gradient_texture2d_class_is_using_hdr),
	JS_CFUNC_DEF("set_fill", 1, &gradient_texture2d_class_set_fill),
	JS_CFUNC_DEF("get_fill", 0, &gradient_texture2d_class_get_fill),
	JS_CFUNC_DEF("set_fill_from", 1, &gradient_texture2d_class_set_fill_from),
	JS_CFUNC_DEF("get_fill_from", 0, &gradient_texture2d_class_get_fill_from),
	JS_CFUNC_DEF("set_fill_to", 1, &gradient_texture2d_class_set_fill_to),
	JS_CFUNC_DEF("get_fill_to", 0, &gradient_texture2d_class_get_fill_to),
	JS_CFUNC_DEF("set_repeat", 1, &gradient_texture2d_class_set_repeat),
	JS_CFUNC_DEF("get_repeat", 0, &gradient_texture2d_class_get_repeat),
};

static int js_gradient_texture2d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&GradientTexture2D::__class_id);
	classes["GradientTexture2D"] = GradientTexture2D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), GradientTexture2D::__class_id, &gradient_texture2d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Texture2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, GradientTexture2D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, gradient_texture2d_class_proto_funcs, _countof(gradient_texture2d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, gradient_texture2d_class_constructor, "GradientTexture2D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "GradientTexture2D", ctor);

	return 0;
}

JSModuleDef *_js_init_gradient_texture2d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_gradient_texture2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "GradientTexture2D");
	return m;
}

JSModuleDef *js_init_gradient_texture2d_module(JSContext *ctx) {
	return _js_init_gradient_texture2d_module(ctx, "godot/classes/gradient_texture2d");
}

void register_gradient_texture2d() {
	js_init_gradient_texture2d_module(ctx);
}