
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/curve3d.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void curve3d_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef curve3d_class_def = {
	"Curve3D",
	.finalizer = curve3d_class_finalizer
};

static JSValue curve3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, Curve3D::__class_id);
	if (JS_IsException(obj))
		return obj;

	Curve3D *curve3d_class;
	if (argc == 1) 
		curve3d_class = static_cast<Curve3D *>(Variant(*argv).operator Object *());
	else 
		curve3d_class = memnew(Curve3D);
	if (!curve3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, curve3d_class);
	return obj;
}
static JSValue curve3d_class_get_point_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Curve3D::get_point_count, ctx, this_val, argc, argv);
};
static JSValue curve3d_class_set_point_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Curve3D::set_point_count, ctx, this_val, argc, argv);
};
static JSValue curve3d_class_add_point(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Curve3D::add_point, ctx, this_val, argc, argv);
};
static JSValue curve3d_class_set_point_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Curve3D::set_point_position, ctx, this_val, argc, argv);
};
static JSValue curve3d_class_get_point_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Curve3D::get_point_position, ctx, this_val, argc, argv);
};
static JSValue curve3d_class_set_point_tilt(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Curve3D::set_point_tilt, ctx, this_val, argc, argv);
};
static JSValue curve3d_class_get_point_tilt(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Curve3D::get_point_tilt, ctx, this_val, argc, argv);
};
static JSValue curve3d_class_set_point_in(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Curve3D::set_point_in, ctx, this_val, argc, argv);
};
static JSValue curve3d_class_get_point_in(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Curve3D::get_point_in, ctx, this_val, argc, argv);
};
static JSValue curve3d_class_set_point_out(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Curve3D::set_point_out, ctx, this_val, argc, argv);
};
static JSValue curve3d_class_get_point_out(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Curve3D::get_point_out, ctx, this_val, argc, argv);
};
static JSValue curve3d_class_remove_point(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Curve3D::remove_point, ctx, this_val, argc, argv);
};
static JSValue curve3d_class_clear_points(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Curve3D::clear_points, ctx, this_val, argc, argv);
};
static JSValue curve3d_class_sample(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Curve3D::sample, ctx, this_val, argc, argv);
};
static JSValue curve3d_class_samplef(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Curve3D::samplef, ctx, this_val, argc, argv);
};
static JSValue curve3d_class_set_bake_interval(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Curve3D::set_bake_interval, ctx, this_val, argc, argv);
};
static JSValue curve3d_class_get_bake_interval(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Curve3D::get_bake_interval, ctx, this_val, argc, argv);
};
static JSValue curve3d_class_set_up_vector_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Curve3D::set_up_vector_enabled, ctx, this_val, argc, argv);
};
static JSValue curve3d_class_is_up_vector_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Curve3D::is_up_vector_enabled, ctx, this_val, argc, argv);
};
static JSValue curve3d_class_get_baked_length(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Curve3D::get_baked_length, ctx, this_val, argc, argv);
};
static JSValue curve3d_class_sample_baked(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Curve3D::sample_baked, ctx, this_val, argc, argv);
};
static JSValue curve3d_class_sample_baked_with_rotation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Curve3D::sample_baked_with_rotation, ctx, this_val, argc, argv);
};
static JSValue curve3d_class_sample_baked_up_vector(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Curve3D::sample_baked_up_vector, ctx, this_val, argc, argv);
};
static JSValue curve3d_class_get_baked_points(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Curve3D::get_baked_points, ctx, this_val, argc, argv);
};
static JSValue curve3d_class_get_baked_tilts(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Curve3D::get_baked_tilts, ctx, this_val, argc, argv);
};
static JSValue curve3d_class_get_baked_up_vectors(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Curve3D::get_baked_up_vectors, ctx, this_val, argc, argv);
};
static JSValue curve3d_class_get_closest_point(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Curve3D::get_closest_point, ctx, this_val, argc, argv);
};
static JSValue curve3d_class_get_closest_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Curve3D::get_closest_offset, ctx, this_val, argc, argv);
};
static JSValue curve3d_class_tessellate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Curve3D::tessellate, ctx, this_val, argc, argv);
};
static JSValue curve3d_class_tessellate_even_length(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Curve3D::tessellate_even_length, ctx, this_val, argc, argv);
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

static void define_curve3d_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "bake_interval"),
        JS_NewCFunction(ctx, curve3d_class_get_bake_interval, "get_bake_interval", 0),
        JS_NewCFunction(ctx, curve3d_class_set_bake_interval, "set_bake_interval", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "point_count"),
        JS_NewCFunction(ctx, curve3d_class_get_point_count, "get_point_count", 0),
        JS_NewCFunction(ctx, curve3d_class_set_point_count, "set_point_count", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "up_vector_enabled"),
        JS_NewCFunction(ctx, curve3d_class_is_up_vector_enabled, "is_up_vector_enabled", 0),
        JS_NewCFunction(ctx, curve3d_class_set_up_vector_enabled, "set_up_vector_enabled", 1),
        JS_PROP_GETSET
    );
	
}

static void define_curve3d_enum(JSContext *ctx, JSValue proto) {
}

static int js_curve3d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["Curve3D"] = Curve3D::__class_id;
	class_id_list.insert(Curve3D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), Curve3D::__class_id, &curve3d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, Curve3D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Curve3D::__class_id, proto);

	define_curve3d_property(ctx, proto);
	define_curve3d_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, curve3d_class_proto_funcs, _countof(curve3d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, curve3d_class_constructor, "Curve3D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "Curve3D", ctor);

	return 0;
}

JSModuleDef *_js_init_curve3d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/resource';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_curve3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Curve3D");
	return m;
}

JSModuleDef *js_init_curve3d_module(JSContext *ctx) {
	return _js_init_curve3d_module(ctx, "@godot/classes/curve3d");
}

void register_curve3d() {
	Curve3D::__init_js_class_id();
	js_init_curve3d_module(ctx);
}