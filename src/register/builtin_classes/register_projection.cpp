
#include "quickjs/quickjs.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/variant/projection.hpp>

using namespace godot;

static void projection_class_finalizer(JSRuntime *rt, JSValue val) {
	Projection *projection = static_cast<Projection *>(JS_GetOpaque(val, Projection::__class_id));
	if (projection)
		memfree(projection);
}

static JSClassDef projection_class_def = {
	"Projection",
	.finalizer = projection_class_finalizer
};

static JSValue projection_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue obj = JS_NewObjectClass(ctx, Projection::__class_id);
	if (JS_IsException(obj))
		return obj;

	Projection *projection_class = nullptr;
	
	if (argc == 0 ) {
		projection_class = memnew(Projection());
	}
	
	if (argc == 1 &&Variant(argv[0]).get_type() == Variant::Type::PROJECTION) {
		Projection v0 = Variant(argv[0]);
		projection_class = memnew(Projection(v0));
	}
	
	if (argc == 1 &&Variant(argv[0]).get_type() == Variant::Type::TRANSFORM3D) {
		Transform3D v0 = Variant(argv[0]);
		projection_class = memnew(Projection(v0));
	}
	
	if (argc == 4 &&Variant(argv[0]).get_type() == Variant::Type::VECTOR4&&Variant(argv[1]).get_type() == Variant::Type::VECTOR4&&Variant(argv[2]).get_type() == Variant::Type::VECTOR4&&Variant(argv[3]).get_type() == Variant::Type::VECTOR4) {
		Vector4 v0 = Variant(argv[0]);
		Vector4 v1 = Variant(argv[1]);
		Vector4 v2 = Variant(argv[2]);
		Vector4 v3 = Variant(argv[3]);
		projection_class = memnew(Projection(v0,v1,v2,v3));
	}
	

	if (!projection_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, projection_class);
	return obj;
}
static JSValue projection_class_determinant(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Projection::determinant, ctx, this_val, argc, argv);
};
static JSValue projection_class_perspective_znear_adjusted(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Projection::perspective_znear_adjusted, ctx, this_val, argc, argv);
};
static JSValue projection_class_get_projection_plane(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Projection::get_projection_plane, ctx, this_val, argc, argv);
};
static JSValue projection_class_flipped_y(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Projection::flipped_y, ctx, this_val, argc, argv);
};
static JSValue projection_class_jitter_offseted(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Projection::jitter_offseted, ctx, this_val, argc, argv);
};
static JSValue projection_class_get_z_far(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Projection::get_z_far, ctx, this_val, argc, argv);
};
static JSValue projection_class_get_z_near(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Projection::get_z_near, ctx, this_val, argc, argv);
};
static JSValue projection_class_get_aspect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Projection::get_aspect, ctx, this_val, argc, argv);
};
static JSValue projection_class_get_fov(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Projection::get_fov, ctx, this_val, argc, argv);
};
static JSValue projection_class_is_orthogonal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Projection::is_orthogonal, ctx, this_val, argc, argv);
};
static JSValue projection_class_get_viewport_half_extents(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Projection::get_viewport_half_extents, ctx, this_val, argc, argv);
};
static JSValue projection_class_get_far_plane_half_extents(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Projection::get_far_plane_half_extents, ctx, this_val, argc, argv);
};
static JSValue projection_class_inverse(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Projection::inverse, ctx, this_val, argc, argv);
};
static JSValue projection_class_get_pixels_per_meter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Projection::get_pixels_per_meter, ctx, this_val, argc, argv);
};
static JSValue projection_class_get_lod_multiplier(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Projection::get_lod_multiplier, ctx, this_val, argc, argv);
};
static JSValue projection_class_create_depth_correction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&Projection::create_depth_correction, ctx, this_val, argc, argv);
};

static JSValue projection_class_create_light_atlas_rect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&Projection::create_light_atlas_rect, ctx, this_val, argc, argv);
};

static JSValue projection_class_create_perspective(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&Projection::create_perspective, ctx, this_val, argc, argv);
};

static JSValue projection_class_create_perspective_hmd(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&Projection::create_perspective_hmd, ctx, this_val, argc, argv);
};

static JSValue projection_class_create_for_hmd(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&Projection::create_for_hmd, ctx, this_val, argc, argv);
};

static JSValue projection_class_create_orthogonal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&Projection::create_orthogonal, ctx, this_val, argc, argv);
};

static JSValue projection_class_create_orthogonal_aspect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&Projection::create_orthogonal_aspect, ctx, this_val, argc, argv);
};

static JSValue projection_class_create_frustum(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&Projection::create_frustum, ctx, this_val, argc, argv);
};

static JSValue projection_class_create_frustum_aspect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&Projection::create_frustum_aspect, ctx, this_val, argc, argv);
};

static JSValue projection_class_create_fit_aabb(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&Projection::create_fit_aabb, ctx, this_val, argc, argv);
};

static JSValue projection_class_get_fovy(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&Projection::get_fovy, ctx, this_val, argc, argv);
};




static JSValue projection_class_get_x(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	Projection &val = *reinterpret_cast<Projection *>(JS_GetOpaque(this_val, Projection::__class_id));
	return Variant(val.columns->x);
}
static JSValue projection_class_set_x(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	Projection &val = *reinterpret_cast<Projection *>(JS_GetOpaque(this_val, Projection::__class_id));
	val.columns->x = Variant(*argv);
	return JS_UNDEFINED;
}

static JSValue projection_class_get_y(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	Projection &val = *reinterpret_cast<Projection *>(JS_GetOpaque(this_val, Projection::__class_id));
	return Variant(val.columns->y);
}
static JSValue projection_class_set_y(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	Projection &val = *reinterpret_cast<Projection *>(JS_GetOpaque(this_val, Projection::__class_id));
	val.columns->y = Variant(*argv);
	return JS_UNDEFINED;
}

static JSValue projection_class_get_z(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	Projection &val = *reinterpret_cast<Projection *>(JS_GetOpaque(this_val, Projection::__class_id));
	return Variant(val.columns->z);
}
static JSValue projection_class_set_z(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	Projection &val = *reinterpret_cast<Projection *>(JS_GetOpaque(this_val, Projection::__class_id));
	val.columns->z = Variant(*argv);
	return JS_UNDEFINED;
}

static JSValue projection_class_get_w(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	Projection &val = *reinterpret_cast<Projection *>(JS_GetOpaque(this_val, Projection::__class_id));
	return Variant(val.columns->w);
}
static JSValue projection_class_set_w(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	Projection &val = *reinterpret_cast<Projection *>(JS_GetOpaque(this_val, Projection::__class_id));
	val.columns->w = Variant(*argv);
	return JS_UNDEFINED;
}


static const JSCFunctionListEntry projection_class_proto_funcs[] = {
	JS_CFUNC_DEF("determinant", 0, &projection_class_determinant),
	JS_CFUNC_DEF("perspective_znear_adjusted", 1, &projection_class_perspective_znear_adjusted),
	JS_CFUNC_DEF("get_projection_plane", 1, &projection_class_get_projection_plane),
	JS_CFUNC_DEF("flipped_y", 0, &projection_class_flipped_y),
	JS_CFUNC_DEF("jitter_offseted", 1, &projection_class_jitter_offseted),
	JS_CFUNC_DEF("get_z_far", 0, &projection_class_get_z_far),
	JS_CFUNC_DEF("get_z_near", 0, &projection_class_get_z_near),
	JS_CFUNC_DEF("get_aspect", 0, &projection_class_get_aspect),
	JS_CFUNC_DEF("get_fov", 0, &projection_class_get_fov),
	JS_CFUNC_DEF("is_orthogonal", 0, &projection_class_is_orthogonal),
	JS_CFUNC_DEF("get_viewport_half_extents", 0, &projection_class_get_viewport_half_extents),
	JS_CFUNC_DEF("get_far_plane_half_extents", 0, &projection_class_get_far_plane_half_extents),
	JS_CFUNC_DEF("inverse", 0, &projection_class_inverse),
	JS_CFUNC_DEF("get_pixels_per_meter", 1, &projection_class_get_pixels_per_meter),
	JS_CFUNC_DEF("get_lod_multiplier", 0, &projection_class_get_lod_multiplier),
};
static const JSCFunctionListEntry projection_class_static_funcs[] = {
	JS_CFUNC_DEF("create_depth_correction", 1, &projection_class_create_depth_correction),
	JS_CFUNC_DEF("create_light_atlas_rect", 1, &projection_class_create_light_atlas_rect),
	JS_CFUNC_DEF("create_perspective", 5, &projection_class_create_perspective),
	JS_CFUNC_DEF("create_perspective_hmd", 8, &projection_class_create_perspective_hmd),
	JS_CFUNC_DEF("create_for_hmd", 8, &projection_class_create_for_hmd),
	JS_CFUNC_DEF("create_orthogonal", 6, &projection_class_create_orthogonal),
	JS_CFUNC_DEF("create_orthogonal_aspect", 5, &projection_class_create_orthogonal_aspect),
	JS_CFUNC_DEF("create_frustum", 6, &projection_class_create_frustum),
	JS_CFUNC_DEF("create_frustum_aspect", 6, &projection_class_create_frustum_aspect),
	JS_CFUNC_DEF("create_fit_aabb", 1, &projection_class_create_fit_aabb),
	JS_CFUNC_DEF("get_fovy", 2, &projection_class_get_fovy),
};


void define_projection_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "x"),
        JS_NewCFunction(ctx, projection_class_get_x, "get_x", 0),
        JS_NewCFunction(ctx, projection_class_set_x, "set_x", 1),
		JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "y"),
        JS_NewCFunction(ctx, projection_class_get_y, "get_y", 0),
        JS_NewCFunction(ctx, projection_class_set_y, "set_y", 1),
		JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "z"),
        JS_NewCFunction(ctx, projection_class_get_z, "get_z", 0),
        JS_NewCFunction(ctx, projection_class_set_z, "set_z", 1),
		JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "w"),
        JS_NewCFunction(ctx, projection_class_get_w, "get_w", 0),
        JS_NewCFunction(ctx, projection_class_set_w, "set_w", 1),
		JS_PROP_GETSET
    );
}

void define_projection_constants(JSContext *ctx, JSValue ctor) {
	JS_DefinePropertyValueStr(ctx, ctor, "PLANE_NEAR", Variant(0), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "PLANE_FAR", Variant(1), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "PLANE_LEFT", Variant(2), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "PLANE_TOP", Variant(3), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "PLANE_RIGHT", Variant(4), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "PLANE_BOTTOM", Variant(5), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "IDENTITY", Variant(Projection(Vector4(1, 0, 0, 0), Vector4(0, 1, 0, 0), Vector4(0, 0, 1, 0), Vector4(0, 0, 0, 1))), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "ZERO", Variant(Projection(Vector4(0, 0, 0, 0), Vector4(0, 0, 0, 0), Vector4(0, 0, 0, 0), Vector4(0, 0, 0, 0))), JS_PROP_ENUMERABLE);
}

static int js_projection_class_init(JSContext *ctx) {
	
	JS_NewClassID(&Projection::__class_id);
	classes["Projection"] = Projection::__class_id;
	class_id_list.insert(Projection::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), Projection::__class_id, &projection_class_def);

	JSValue proto = JS_NewObject(ctx);
	JS_SetClassProto(ctx, Projection::__class_id, proto);
	define_projection_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, projection_class_proto_funcs, _countof(projection_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, projection_class_constructor, "Projection", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetPropertyFunctionList(ctx, ctor, projection_class_static_funcs, _countof(projection_class_static_funcs));
	define_projection_constants(ctx, ctor);

	JSValue global = JS_GetGlobalObject(ctx);
	JS_SetPropertyStr(ctx, global, "Projection", ctor);

	return 0;
}

void js_init_projection_module(JSContext *ctx) {
	js_projection_class_init(ctx);
}

void register_projection() {
	Projection::__init_js_class_id();
	js_init_projection_module(ctx);
}