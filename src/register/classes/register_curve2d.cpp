
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/curve2d.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void curve2d_class_finalizer(JSRuntime *rt, JSValue val) {
	Curve2D *curve2d = static_cast<Curve2D *>(JS_GetOpaque(val, Curve2D::__class_id));
	if (curve2d)
		Curve2D::free(nullptr, curve2d);
}

static JSClassDef curve2d_class_def = {
	"Curve2D",
	.finalizer = curve2d_class_finalizer
};

static JSValue curve2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	Curve2D *curve2d_class;
	JSValue obj = JS_NewObjectClass(ctx, Curve2D::__class_id);
	if (JS_IsException(obj))
		return obj;
	curve2d_class = memnew(Curve2D);
	if (!curve2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, curve2d_class);
	return obj;
}
static JSValue curve2d_class_get_point_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Curve2D::get_point_count, Curve2D::__class_id, ctx, this_val, argv);
};
static JSValue curve2d_class_set_point_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Curve2D::set_point_count, Curve2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue curve2d_class_add_point(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Curve2D::add_point, Curve2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue curve2d_class_set_point_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Curve2D::set_point_position, Curve2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue curve2d_class_get_point_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Curve2D::get_point_position, Curve2D::__class_id, ctx, this_val, argv);
};
static JSValue curve2d_class_set_point_in(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Curve2D::set_point_in, Curve2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue curve2d_class_get_point_in(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Curve2D::get_point_in, Curve2D::__class_id, ctx, this_val, argv);
};
static JSValue curve2d_class_set_point_out(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Curve2D::set_point_out, Curve2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue curve2d_class_get_point_out(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Curve2D::get_point_out, Curve2D::__class_id, ctx, this_val, argv);
};
static JSValue curve2d_class_remove_point(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Curve2D::remove_point, Curve2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue curve2d_class_clear_points(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Curve2D::clear_points, Curve2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue curve2d_class_sample(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Curve2D::sample, Curve2D::__class_id, ctx, this_val, argv);
};
static JSValue curve2d_class_samplef(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Curve2D::samplef, Curve2D::__class_id, ctx, this_val, argv);
};
static JSValue curve2d_class_set_bake_interval(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Curve2D::set_bake_interval, Curve2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue curve2d_class_get_bake_interval(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Curve2D::get_bake_interval, Curve2D::__class_id, ctx, this_val, argv);
};
static JSValue curve2d_class_get_baked_length(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Curve2D::get_baked_length, Curve2D::__class_id, ctx, this_val, argv);
};
static JSValue curve2d_class_sample_baked(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Curve2D::sample_baked, Curve2D::__class_id, ctx, this_val, argv);
};
static JSValue curve2d_class_sample_baked_with_rotation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Curve2D::sample_baked_with_rotation, Curve2D::__class_id, ctx, this_val, argv);
};
static JSValue curve2d_class_get_baked_points(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Curve2D::get_baked_points, Curve2D::__class_id, ctx, this_val, argv);
};
static JSValue curve2d_class_get_closest_point(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Curve2D::get_closest_point, Curve2D::__class_id, ctx, this_val, argv);
};
static JSValue curve2d_class_get_closest_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Curve2D::get_closest_offset, Curve2D::__class_id, ctx, this_val, argv);
};
static JSValue curve2d_class_tessellate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Curve2D::tessellate, Curve2D::__class_id, ctx, this_val, argv);
};
static JSValue curve2d_class_tessellate_even_length(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Curve2D::tessellate_even_length, Curve2D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry curve2d_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_point_count", 0, &curve2d_class_get_point_count),
	JS_CFUNC_DEF("set_point_count", 1, &curve2d_class_set_point_count),
	JS_CFUNC_DEF("add_point", 4, &curve2d_class_add_point),
	JS_CFUNC_DEF("set_point_position", 2, &curve2d_class_set_point_position),
	JS_CFUNC_DEF("get_point_position", 1, &curve2d_class_get_point_position),
	JS_CFUNC_DEF("set_point_in", 2, &curve2d_class_set_point_in),
	JS_CFUNC_DEF("get_point_in", 1, &curve2d_class_get_point_in),
	JS_CFUNC_DEF("set_point_out", 2, &curve2d_class_set_point_out),
	JS_CFUNC_DEF("get_point_out", 1, &curve2d_class_get_point_out),
	JS_CFUNC_DEF("remove_point", 1, &curve2d_class_remove_point),
	JS_CFUNC_DEF("clear_points", 0, &curve2d_class_clear_points),
	JS_CFUNC_DEF("sample", 2, &curve2d_class_sample),
	JS_CFUNC_DEF("samplef", 1, &curve2d_class_samplef),
	JS_CFUNC_DEF("set_bake_interval", 1, &curve2d_class_set_bake_interval),
	JS_CFUNC_DEF("get_bake_interval", 0, &curve2d_class_get_bake_interval),
	JS_CFUNC_DEF("get_baked_length", 0, &curve2d_class_get_baked_length),
	JS_CFUNC_DEF("sample_baked", 2, &curve2d_class_sample_baked),
	JS_CFUNC_DEF("sample_baked_with_rotation", 2, &curve2d_class_sample_baked_with_rotation),
	JS_CFUNC_DEF("get_baked_points", 0, &curve2d_class_get_baked_points),
	JS_CFUNC_DEF("get_closest_point", 1, &curve2d_class_get_closest_point),
	JS_CFUNC_DEF("get_closest_offset", 1, &curve2d_class_get_closest_offset),
	JS_CFUNC_DEF("tessellate", 2, &curve2d_class_tessellate),
	JS_CFUNC_DEF("tessellate_even_length", 2, &curve2d_class_tessellate_even_length),
};

static int js_curve2d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&Curve2D::__class_id);
	classes["Curve2D"] = Curve2D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), Curve2D::__class_id, &curve2d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Curve2D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, curve2d_class_proto_funcs, _countof(curve2d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, curve2d_class_constructor, "Curve2D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "Curve2D", ctor);

	return 0;
}

JSModuleDef *_js_init_curve2d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_curve2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Curve2D");
	return m;
}

JSModuleDef *js_init_curve2d_module(JSContext *ctx) {
	return _js_init_curve2d_module(ctx, "godot/classes/curve2d");
}

void register_curve2d() {
	js_init_curve2d_module(ctx);
}