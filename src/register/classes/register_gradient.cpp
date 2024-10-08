
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/gradient.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void gradient_class_finalizer(JSRuntime *rt, JSValue val) {
	Gradient *gradient = static_cast<Gradient *>(JS_GetOpaque(val, Gradient::__class_id));
	if (gradient)
		Gradient::free(nullptr, gradient);
}

static JSClassDef gradient_class_def = {
	"Gradient",
	.finalizer = gradient_class_finalizer
};

static JSValue gradient_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	Gradient *gradient_class;
	JSValue obj = JS_NewObjectClass(ctx, Gradient::__class_id);
	if (JS_IsException(obj))
		return obj;
	gradient_class = memnew(Gradient);
	if (!gradient_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, gradient_class);
	return obj;
}
static JSValue gradient_class_add_point(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Gradient::add_point, Gradient::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gradient_class_remove_point(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Gradient::remove_point, Gradient::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gradient_class_set_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Gradient::set_offset, Gradient::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gradient_class_get_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Gradient::get_offset, Gradient::__class_id, ctx, this_val, argv);
};
static JSValue gradient_class_reverse(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Gradient::reverse, Gradient::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gradient_class_set_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Gradient::set_color, Gradient::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gradient_class_get_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Gradient::get_color, Gradient::__class_id, ctx, this_val, argv);
};
static JSValue gradient_class_sample(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Gradient::sample, Gradient::__class_id, ctx, this_val, argv);
};
static JSValue gradient_class_get_point_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Gradient::get_point_count, Gradient::__class_id, ctx, this_val, argv);
};
static JSValue gradient_class_set_offsets(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Gradient::set_offsets, Gradient::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gradient_class_get_offsets(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Gradient::get_offsets, Gradient::__class_id, ctx, this_val, argv);
};
static JSValue gradient_class_set_colors(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Gradient::set_colors, Gradient::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gradient_class_get_colors(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Gradient::get_colors, Gradient::__class_id, ctx, this_val, argv);
};
static JSValue gradient_class_set_interpolation_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Gradient::set_interpolation_mode, Gradient::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gradient_class_get_interpolation_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Gradient::get_interpolation_mode, Gradient::__class_id, ctx, this_val, argv);
};
static JSValue gradient_class_set_interpolation_color_space(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Gradient::set_interpolation_color_space, Gradient::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue gradient_class_get_interpolation_color_space(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Gradient::get_interpolation_color_space, Gradient::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry gradient_class_proto_funcs[] = {
	JS_CFUNC_DEF("add_point", 2, &gradient_class_add_point),
	JS_CFUNC_DEF("remove_point", 1, &gradient_class_remove_point),
	JS_CFUNC_DEF("set_offset", 2, &gradient_class_set_offset),
	JS_CFUNC_DEF("get_offset", 1, &gradient_class_get_offset),
	JS_CFUNC_DEF("reverse", 0, &gradient_class_reverse),
	JS_CFUNC_DEF("set_color", 2, &gradient_class_set_color),
	JS_CFUNC_DEF("get_color", 1, &gradient_class_get_color),
	JS_CFUNC_DEF("sample", 1, &gradient_class_sample),
	JS_CFUNC_DEF("get_point_count", 0, &gradient_class_get_point_count),
	JS_CFUNC_DEF("set_offsets", 1, &gradient_class_set_offsets),
	JS_CFUNC_DEF("get_offsets", 0, &gradient_class_get_offsets),
	JS_CFUNC_DEF("set_colors", 1, &gradient_class_set_colors),
	JS_CFUNC_DEF("get_colors", 0, &gradient_class_get_colors),
	JS_CFUNC_DEF("set_interpolation_mode", 1, &gradient_class_set_interpolation_mode),
	JS_CFUNC_DEF("get_interpolation_mode", 0, &gradient_class_get_interpolation_mode),
	JS_CFUNC_DEF("set_interpolation_color_space", 1, &gradient_class_set_interpolation_color_space),
	JS_CFUNC_DEF("get_interpolation_color_space", 0, &gradient_class_get_interpolation_color_space),
};

static int js_gradient_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&Gradient::__class_id);
	classes["Gradient"] = Gradient::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), Gradient::__class_id, &gradient_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Gradient::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, gradient_class_proto_funcs, _countof(gradient_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, gradient_class_constructor, "Gradient", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "Gradient", ctor);

	return 0;
}

JSModuleDef *_js_init_gradient_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_gradient_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Gradient");
	return m;
}

JSModuleDef *js_init_gradient_module(JSContext *ctx) {
	return _js_init_gradient_module(ctx, "godot/classes/gradient");
}

void register_gradient() {
	js_init_gradient_module(ctx);
}