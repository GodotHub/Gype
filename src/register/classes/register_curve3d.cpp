
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/curve3d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void curve3d_class_finalizer(JSRuntime *rt, JSValue val) {
	Curve3D *curve3d = static_cast<Curve3D *>(JS_GetOpaque(val, Curve3D::__class_id));
	if (curve3d)
		Curve3D::free(nullptr, curve3d);
}

static JSClassDef curve3d_class_def = {
	"Curve3D",
	.finalizer = curve3d_class_finalizer
};

static JSValue curve3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	Curve3D *curve3d_class;
	JSValue obj = JS_NewObjectClass(ctx, Curve3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	curve3d_class = memnew(Curve3D);
	if (!curve3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, curve3d_class);
	return obj;
}
static JSValue curve3d_class_get_point_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Curve3D::get_point_count, Curve3D::__class_id, ctx, this_val, argv);
};
static JSValue curve3d_class_set_point_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Curve3D::set_point_count, Curve3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue curve3d_class_add_point(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Curve3D::add_point, Curve3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue curve3d_class_set_point_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Curve3D::set_point_position, Curve3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue curve3d_class_get_point_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Curve3D::get_point_position, Curve3D::__class_id, ctx, this_val, argv);
};
static JSValue curve3d_class_set_point_tilt(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Curve3D::set_point_tilt, Curve3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue curve3d_class_get_point_tilt(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Curve3D::get_point_tilt, Curve3D::__class_id, ctx, this_val, argv);
};
static JSValue curve3d_class_set_point_in(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Curve3D::set_point_in, Curve3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue curve3d_class_get_point_in(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Curve3D::get_point_in, Curve3D::__class_id, ctx, this_val, argv);
};
static JSValue curve3d_class_set_point_out(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Curve3D::set_point_out, Curve3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue curve3d_class_get_point_out(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Curve3D::get_point_out, Curve3D::__class_id, ctx, this_val, argv);
};
static JSValue curve3d_class_remove_point(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Curve3D::remove_point, Curve3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue curve3d_class_clear_points(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Curve3D::clear_points, Curve3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue curve3d_class_sample(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Curve3D::sample, Curve3D::__class_id, ctx, this_val, argv);
};
static JSValue curve3d_class_samplef(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Curve3D::samplef, Curve3D::__class_id, ctx, this_val, argv);
};
static JSValue curve3d_class_set_bake_interval(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Curve3D::set_bake_interval, Curve3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue curve3d_class_get_bake_interval(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Curve3D::get_bake_interval, Curve3D::__class_id, ctx, this_val, argv);
};
static JSValue curve3d_class_set_up_vector_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Curve3D::set_up_vector_enabled, Curve3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue curve3d_class_is_up_vector_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Curve3D::is_up_vector_enabled, Curve3D::__class_id, ctx, this_val, argv);
};
static JSValue curve3d_class_get_baked_length(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Curve3D::get_baked_length, Curve3D::__class_id, ctx, this_val, argv);
};
static JSValue curve3d_class_sample_baked(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Curve3D::sample_baked, Curve3D::__class_id, ctx, this_val, argv);
};
static JSValue curve3d_class_sample_baked_with_rotation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Curve3D::sample_baked_with_rotation, Curve3D::__class_id, ctx, this_val, argv);
};
static JSValue curve3d_class_sample_baked_up_vector(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Curve3D::sample_baked_up_vector, Curve3D::__class_id, ctx, this_val, argv);
};
static JSValue curve3d_class_get_baked_points(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Curve3D::get_baked_points, Curve3D::__class_id, ctx, this_val, argv);
};
static JSValue curve3d_class_get_baked_tilts(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Curve3D::get_baked_tilts, Curve3D::__class_id, ctx, this_val, argv);
};
static JSValue curve3d_class_get_baked_up_vectors(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Curve3D::get_baked_up_vectors, Curve3D::__class_id, ctx, this_val, argv);
};
static JSValue curve3d_class_get_closest_point(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Curve3D::get_closest_point, Curve3D::__class_id, ctx, this_val, argv);
};
static JSValue curve3d_class_get_closest_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Curve3D::get_closest_offset, Curve3D::__class_id, ctx, this_val, argv);
};
static JSValue curve3d_class_tessellate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Curve3D::tessellate, Curve3D::__class_id, ctx, this_val, argv);
};
static JSValue curve3d_class_tessellate_even_length(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Curve3D::tessellate_even_length, Curve3D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry curve3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_point_count", 0, &curve3d_class_get_point_count),
	JS_CFUNC_DEF("set_point_count", 1, &curve3d_class_set_point_count),
	JS_CFUNC_DEF("add_point", 4, &curve3d_class_add_point),
	JS_CFUNC_DEF("set_point_position", 2, &curve3d_class_set_point_position),
	JS_CFUNC_DEF("get_point_position", 1, &curve3d_class_get_point_position),
	JS_CFUNC_DEF("set_point_tilt", 2, &curve3d_class_set_point_tilt),
	JS_CFUNC_DEF("get_point_tilt", 1, &curve3d_class_get_point_tilt),
	JS_CFUNC_DEF("set_point_in", 2, &curve3d_class_set_point_in),
	JS_CFUNC_DEF("get_point_in", 1, &curve3d_class_get_point_in),
	JS_CFUNC_DEF("set_point_out", 2, &curve3d_class_set_point_out),
	JS_CFUNC_DEF("get_point_out", 1, &curve3d_class_get_point_out),
	JS_CFUNC_DEF("remove_point", 1, &curve3d_class_remove_point),
	JS_CFUNC_DEF("clear_points", 0, &curve3d_class_clear_points),
	JS_CFUNC_DEF("sample", 2, &curve3d_class_sample),
	JS_CFUNC_DEF("samplef", 1, &curve3d_class_samplef),
	JS_CFUNC_DEF("set_bake_interval", 1, &curve3d_class_set_bake_interval),
	JS_CFUNC_DEF("get_bake_interval", 0, &curve3d_class_get_bake_interval),
	JS_CFUNC_DEF("set_up_vector_enabled", 1, &curve3d_class_set_up_vector_enabled),
	JS_CFUNC_DEF("is_up_vector_enabled", 0, &curve3d_class_is_up_vector_enabled),
	JS_CFUNC_DEF("get_baked_length", 0, &curve3d_class_get_baked_length),
	JS_CFUNC_DEF("sample_baked", 2, &curve3d_class_sample_baked),
	JS_CFUNC_DEF("sample_baked_with_rotation", 3, &curve3d_class_sample_baked_with_rotation),
	JS_CFUNC_DEF("sample_baked_up_vector", 2, &curve3d_class_sample_baked_up_vector),
	JS_CFUNC_DEF("get_baked_points", 0, &curve3d_class_get_baked_points),
	JS_CFUNC_DEF("get_baked_tilts", 0, &curve3d_class_get_baked_tilts),
	JS_CFUNC_DEF("get_baked_up_vectors", 0, &curve3d_class_get_baked_up_vectors),
	JS_CFUNC_DEF("get_closest_point", 1, &curve3d_class_get_closest_point),
	JS_CFUNC_DEF("get_closest_offset", 1, &curve3d_class_get_closest_offset),
	JS_CFUNC_DEF("tessellate", 2, &curve3d_class_tessellate),
	JS_CFUNC_DEF("tessellate_even_length", 2, &curve3d_class_tessellate_even_length),
};

static int js_curve3d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&Curve3D::__class_id);
	classes["Curve3D"] = Curve3D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), Curve3D::__class_id, &curve3d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Curve3D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, curve3d_class_proto_funcs, _countof(curve3d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, curve3d_class_constructor, "Curve3D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "Curve3D", ctor);

	return 0;
}

JSModuleDef *_js_init_curve3d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_curve3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Curve3D");
	return m;
}

JSModuleDef *js_init_curve3d_module(JSContext *ctx) {
	return _js_init_curve3d_module(ctx, "godot/classes/curve3d");
}

void register_curve3d() {
	js_init_curve3d_module(ctx);
}