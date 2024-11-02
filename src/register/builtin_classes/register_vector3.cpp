
#include "quickjs/env.h"
#include "quickjs/quickjs.h"
#include "quickjs/quickjs_helper.h"
#include "quickjs/str_helper.h"
#include "utils/func_utils.h"
#include <godot_cpp/variant/vector3.hpp>

using namespace godot;

static void vector3_class_finalizer(JSRuntime *rt, JSValue val) {
	Vector3 *vector3 = static_cast<Vector3 *>(JS_GetOpaque(val, Vector3::__class_id));
	if (vector3)
		memfree(vector3);
}

static JSClassDef vector3_class_def = {
	"Vector3",
	.finalizer = vector3_class_finalizer
};

static JSValue vector3_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue obj = JS_NewObjectClass(ctx, Vector3::__class_id);
	if (JS_IsException(obj))
		return obj;

	Vector3 *vector3_class = nullptr;

	if (argc == 0) {
		vector3_class = memnew(Vector3());
	}

	if (argc == 1 && Variant(argv[0]).get_type() == Variant::Type::VECTOR3) {
		Vector3 v0 = Variant(argv[0]);
		vector3_class = memnew(Vector3(v0));
	}

	if (argc == 1 && Variant(argv[0]).get_type() == Variant::Type::VECTOR3I) {
		Vector3i v0 = Variant(argv[0]);
		vector3_class = memnew(Vector3(v0));
	}

	if (argc == 3 && (Variant(argv[0]).get_type() == Variant::Type::FLOAT || Variant(argv[0]).get_type() == Variant::Type::INT) && (Variant(argv[1]).get_type() == Variant::Type::FLOAT || Variant(argv[1]).get_type() == Variant::Type::INT) && (Variant(argv[2]).get_type() == Variant::Type::FLOAT || Variant(argv[2]).get_type() == Variant::Type::INT)) {
		float v0 = Variant(argv[0]);
		float v1 = Variant(argv[1]);
		float v2 = Variant(argv[2]);
		vector3_class = memnew(Vector3(v0, v1, v2));
	}

	if (!vector3_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, vector3_class);
	return obj;
}
static JSValue vector3_class_min_axis_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector3::min_axis_index, ctx, this_val, argc, argv);
};
static JSValue vector3_class_max_axis_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector3::max_axis_index, ctx, this_val, argc, argv);
};
static JSValue vector3_class_angle_to(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector3::angle_to, ctx, this_val, argc, argv);
};
static JSValue vector3_class_signed_angle_to(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector3::signed_angle_to, ctx, this_val, argc, argv);
};
static JSValue vector3_class_direction_to(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector3::direction_to, ctx, this_val, argc, argv);
};
static JSValue vector3_class_distance_to(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector3::distance_to, ctx, this_val, argc, argv);
};
static JSValue vector3_class_distance_squared_to(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector3::distance_squared_to, ctx, this_val, argc, argv);
};
static JSValue vector3_class_length(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector3::length, ctx, this_val, argc, argv);
};
static JSValue vector3_class_length_squared(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector3::length_squared, ctx, this_val, argc, argv);
};
static JSValue vector3_class_limit_length(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector3::limit_length, ctx, this_val, argc, argv);
};
static JSValue vector3_class_normalized(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector3::normalized, ctx, this_val, argc, argv);
};
static JSValue vector3_class_is_normalized(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector3::is_normalized, ctx, this_val, argc, argv);
};
static JSValue vector3_class_is_equal_approx(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector3::is_equal_approx, ctx, this_val, argc, argv);
};
static JSValue vector3_class_is_zero_approx(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector3::is_zero_approx, ctx, this_val, argc, argv);
};
static JSValue vector3_class_is_finite(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector3::is_finite, ctx, this_val, argc, argv);
};
static JSValue vector3_class_inverse(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector3::inverse, ctx, this_val, argc, argv);
};
static JSValue vector3_class_clamp(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector3::clamp, ctx, this_val, argc, argv);
};
static JSValue vector3_class_clampf(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector3::clampf, ctx, this_val, argc, argv);
};
static JSValue vector3_class_snapped(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector3::snapped, ctx, this_val, argc, argv);
};
static JSValue vector3_class_snappedf(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector3::snappedf, ctx, this_val, argc, argv);
};
static JSValue vector3_class_rotated(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector3::rotated, ctx, this_val, argc, argv);
};
static JSValue vector3_class_lerp(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector3::lerp, ctx, this_val, argc, argv);
};
static JSValue vector3_class_slerp(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector3::slerp, ctx, this_val, argc, argv);
};
static JSValue vector3_class_cubic_interpolate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector3::cubic_interpolate, ctx, this_val, argc, argv);
};
static JSValue vector3_class_cubic_interpolate_in_time(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector3::cubic_interpolate_in_time, ctx, this_val, argc, argv);
};
static JSValue vector3_class_bezier_interpolate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector3::bezier_interpolate, ctx, this_val, argc, argv);
};
static JSValue vector3_class_move_toward(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector3::move_toward, ctx, this_val, argc, argv);
};
static JSValue vector3_class_dot(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector3::dot, ctx, this_val, argc, argv);
};
static JSValue vector3_class_cross(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector3::cross, ctx, this_val, argc, argv);
};
static JSValue vector3_class_outer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector3::outer, ctx, this_val, argc, argv);
};
static JSValue vector3_class_abs(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector3::abs, ctx, this_val, argc, argv);
};
static JSValue vector3_class_floor(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector3::floor, ctx, this_val, argc, argv);
};
static JSValue vector3_class_ceil(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector3::ceil, ctx, this_val, argc, argv);
};
static JSValue vector3_class_round(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector3::round, ctx, this_val, argc, argv);
};
static JSValue vector3_class_posmod(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector3::posmod, ctx, this_val, argc, argv);
};
static JSValue vector3_class_posmodv(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector3::posmodv, ctx, this_val, argc, argv);
};
static JSValue vector3_class_project(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector3::project, ctx, this_val, argc, argv);
};
static JSValue vector3_class_slide(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector3::slide, ctx, this_val, argc, argv);
};
static JSValue vector3_class_bounce(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector3::bounce, ctx, this_val, argc, argv);
};
static JSValue vector3_class_reflect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector3::reflect, ctx, this_val, argc, argv);
};
static JSValue vector3_class_sign(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector3::sign, ctx, this_val, argc, argv);
};
static JSValue vector3_class_octahedron_encode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector3::octahedron_encode, ctx, this_val, argc, argv);
};
static JSValue vector3_class_min(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector3::min, ctx, this_val, argc, argv);
};
static JSValue vector3_class_minf(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector3::minf, ctx, this_val, argc, argv);
};
static JSValue vector3_class_max(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector3::max, ctx, this_val, argc, argv);
};
static JSValue vector3_class_maxf(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector3::maxf, ctx, this_val, argc, argv);
};
static JSValue vector3_class_octahedron_decode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&Vector3::octahedron_decode, ctx, this_val, argc, argv);
};

static JSValue vector3_class_get_x(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	Vector3 &val = *reinterpret_cast<Vector3 *>(JS_GetOpaque(this_val, Vector3::__class_id));
	return Variant(val.x);
}
static JSValue vector3_class_set_x(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	Vector3 &val = *reinterpret_cast<Vector3 *>(JS_GetOpaque(this_val, Vector3::__class_id));
	val.x = Variant(*argv);
	return JS_UNDEFINED;
}

static JSValue vector3_class_get_y(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	Vector3 &val = *reinterpret_cast<Vector3 *>(JS_GetOpaque(this_val, Vector3::__class_id));
	return Variant(val.y);
}
static JSValue vector3_class_set_y(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	Vector3 &val = *reinterpret_cast<Vector3 *>(JS_GetOpaque(this_val, Vector3::__class_id));
	val.y = Variant(*argv);
	return JS_UNDEFINED;
}

static JSValue vector3_class_get_z(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	Vector3 &val = *reinterpret_cast<Vector3 *>(JS_GetOpaque(this_val, Vector3::__class_id));
	return Variant(val.z);
}
static JSValue vector3_class_set_z(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	Vector3 &val = *reinterpret_cast<Vector3 *>(JS_GetOpaque(this_val, Vector3::__class_id));
	val.z = Variant(*argv);
	return JS_UNDEFINED;
}

static const JSCFunctionListEntry vector3_class_proto_funcs[] = {
	JS_CFUNC_DEF("min_axis_index", 0, &vector3_class_min_axis_index),
	JS_CFUNC_DEF("max_axis_index", 0, &vector3_class_max_axis_index),
	JS_CFUNC_DEF("angle_to", 1, &vector3_class_angle_to),
	JS_CFUNC_DEF("signed_angle_to", 2, &vector3_class_signed_angle_to),
	JS_CFUNC_DEF("direction_to", 1, &vector3_class_direction_to),
	JS_CFUNC_DEF("distance_to", 1, &vector3_class_distance_to),
	JS_CFUNC_DEF("distance_squared_to", 1, &vector3_class_distance_squared_to),
	JS_CFUNC_DEF("length", 0, &vector3_class_length),
	JS_CFUNC_DEF("length_squared", 0, &vector3_class_length_squared),
	JS_CFUNC_DEF("limit_length", 1, &vector3_class_limit_length),
	JS_CFUNC_DEF("normalized", 0, &vector3_class_normalized),
	JS_CFUNC_DEF("is_normalized", 0, &vector3_class_is_normalized),
	JS_CFUNC_DEF("is_equal_approx", 1, &vector3_class_is_equal_approx),
	JS_CFUNC_DEF("is_zero_approx", 0, &vector3_class_is_zero_approx),
	JS_CFUNC_DEF("is_finite", 0, &vector3_class_is_finite),
	JS_CFUNC_DEF("inverse", 0, &vector3_class_inverse),
	JS_CFUNC_DEF("clamp", 2, &vector3_class_clamp),
	JS_CFUNC_DEF("clampf", 2, &vector3_class_clampf),
	JS_CFUNC_DEF("snapped", 1, &vector3_class_snapped),
	JS_CFUNC_DEF("snappedf", 1, &vector3_class_snappedf),
	JS_CFUNC_DEF("rotated", 2, &vector3_class_rotated),
	JS_CFUNC_DEF("lerp", 2, &vector3_class_lerp),
	JS_CFUNC_DEF("slerp", 2, &vector3_class_slerp),
	JS_CFUNC_DEF("cubic_interpolate", 4, &vector3_class_cubic_interpolate),
	JS_CFUNC_DEF("cubic_interpolate_in_time", 7, &vector3_class_cubic_interpolate_in_time),
	JS_CFUNC_DEF("bezier_interpolate", 4, &vector3_class_bezier_interpolate),
	JS_CFUNC_DEF("move_toward", 2, &vector3_class_move_toward),
	JS_CFUNC_DEF("dot", 1, &vector3_class_dot),
	JS_CFUNC_DEF("cross", 1, &vector3_class_cross),
	JS_CFUNC_DEF("outer", 1, &vector3_class_outer),
	JS_CFUNC_DEF("abs", 0, &vector3_class_abs),
	JS_CFUNC_DEF("floor", 0, &vector3_class_floor),
	JS_CFUNC_DEF("ceil", 0, &vector3_class_ceil),
	JS_CFUNC_DEF("round", 0, &vector3_class_round),
	JS_CFUNC_DEF("posmod", 1, &vector3_class_posmod),
	JS_CFUNC_DEF("posmodv", 1, &vector3_class_posmodv),
	JS_CFUNC_DEF("project", 1, &vector3_class_project),
	JS_CFUNC_DEF("slide", 1, &vector3_class_slide),
	JS_CFUNC_DEF("bounce", 1, &vector3_class_bounce),
	JS_CFUNC_DEF("reflect", 1, &vector3_class_reflect),
	JS_CFUNC_DEF("sign", 0, &vector3_class_sign),
	JS_CFUNC_DEF("octahedron_encode", 0, &vector3_class_octahedron_encode),
	JS_CFUNC_DEF("min", 1, &vector3_class_min),
	JS_CFUNC_DEF("minf", 1, &vector3_class_minf),
	JS_CFUNC_DEF("max", 1, &vector3_class_max),
	JS_CFUNC_DEF("maxf", 1, &vector3_class_maxf),
};
static const JSCFunctionListEntry vector3_class_static_funcs[] = {
	JS_CFUNC_DEF("octahedron_decode", 1, &vector3_class_octahedron_decode),
};

void define_vector3_property(JSContext *ctx, JSValue obj) {
	JS_DefinePropertyGetSet(
			ctx,
			obj,
			JS_NewAtom(ctx, "x"),
			JS_NewCFunction(ctx, vector3_class_get_x, "get_x", 0),
			JS_NewCFunction(ctx, vector3_class_set_x, "set_x", 1),
			JS_PROP_GETSET);
	JS_DefinePropertyGetSet(
			ctx,
			obj,
			JS_NewAtom(ctx, "y"),
			JS_NewCFunction(ctx, vector3_class_get_y, "get_y", 0),
			JS_NewCFunction(ctx, vector3_class_set_y, "set_y", 1),
			JS_PROP_GETSET);
	JS_DefinePropertyGetSet(
			ctx,
			obj,
			JS_NewAtom(ctx, "z"),
			JS_NewCFunction(ctx, vector3_class_get_z, "get_z", 0),
			JS_NewCFunction(ctx, vector3_class_set_z, "set_z", 1),
			JS_PROP_GETSET);
}

static int js_vector3_class_init(JSContext *ctx) {
	classes["Vector3"] = Vector3::__class_id;
	class_id_list.insert(Vector3::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), Vector3::__class_id, &vector3_class_def);

	JSValue proto = JS_NewObject(ctx);
	JS_SetClassProto(ctx, Vector3::__class_id, proto);
	define_vector3_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, vector3_class_proto_funcs, _countof(vector3_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, vector3_class_constructor, "Vector3", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetPropertyFunctionList(ctx, ctor, vector3_class_static_funcs, _countof(vector3_class_static_funcs));

	JSValue global = JS_GetGlobalObject(ctx);
	JS_SetPropertyStr(ctx, global, "Vector3", ctor);

	return 0;
}

void js_init_vector3_module(JSContext *ctx) {
	js_vector3_class_init(ctx);
}

void register_vector3() {
	Vector3::__init_js_class_id();
	js_init_vector3_module(ctx);
}