
#include "quickjs/env.h"
#include "quickjs/quickjs.h"
#include "quickjs/quickjs_helper.h"
#include "quickjs/str_helper.h"
#include "utils/func_utils.h"
#include <godot_cpp/variant/aabb.hpp>

using namespace godot;

static void aabb_class_finalizer(JSRuntime *rt, JSValue val) {
	AABB *aabb = static_cast<AABB *>(JS_GetOpaque(val, AABB::__class_id));
	if (aabb)
		memfree(aabb);
}

static JSClassDef aabb_class_def = {
	"AABB",
	.finalizer = aabb_class_finalizer
};

static JSValue aabb_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue obj = JS_NewObjectClass(ctx, AABB::__class_id);
	if (JS_IsException(obj))
		return obj;

	AABB *aabb_class = nullptr;

	if (argc == 0) {
		aabb_class = memnew(AABB());
	}

	if (argc == 1 && Variant(argv[0]).get_type() == Variant::Type::AABB) {
		AABB v0 = Variant(argv[0]);
		aabb_class = memnew(AABB(v0));
	}

	if (argc == 2 && Variant(argv[0]).get_type() == Variant::Type::VECTOR3 && Variant(argv[1]).get_type() == Variant::Type::VECTOR3) {
		Vector3 v0 = Variant(argv[0]);
		Vector3 v1 = Variant(argv[1]);
		aabb_class = memnew(AABB(v0, v1));
	}

	if (!aabb_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, aabb_class);
	return obj;
}
static JSValue aabb_class_abs(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AABB::abs, ctx, this_val, argc, argv);
};
static JSValue aabb_class_get_center(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AABB::get_center, ctx, this_val, argc, argv);
};
static JSValue aabb_class_get_volume(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AABB::get_volume, ctx, this_val, argc, argv);
};
static JSValue aabb_class_has_volume(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AABB::has_volume, ctx, this_val, argc, argv);
};
static JSValue aabb_class_has_surface(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AABB::has_surface, ctx, this_val, argc, argv);
};
static JSValue aabb_class_has_point(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AABB::has_point, ctx, this_val, argc, argv);
};
static JSValue aabb_class_is_equal_approx(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AABB::is_equal_approx, ctx, this_val, argc, argv);
};
static JSValue aabb_class_is_finite(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AABB::is_finite, ctx, this_val, argc, argv);
};
static JSValue aabb_class_intersects(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AABB::intersects, ctx, this_val, argc, argv);
};
static JSValue aabb_class_encloses(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AABB::encloses, ctx, this_val, argc, argv);
};
static JSValue aabb_class_intersects_plane(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AABB::intersects_plane, ctx, this_val, argc, argv);
};
static JSValue aabb_class_intersection(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AABB::intersection, ctx, this_val, argc, argv);
};
static JSValue aabb_class_merge(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AABB::merge, ctx, this_val, argc, argv);
};
static JSValue aabb_class_expand(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AABB::expand, ctx, this_val, argc, argv);
};
static JSValue aabb_class_grow(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AABB::grow, ctx, this_val, argc, argv);
};
static JSValue aabb_class_get_support(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AABB::get_support, ctx, this_val, argc, argv);
};
static JSValue aabb_class_get_longest_axis(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AABB::get_longest_axis, ctx, this_val, argc, argv);
};
static JSValue aabb_class_get_longest_axis_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AABB::get_longest_axis_index, ctx, this_val, argc, argv);
};
static JSValue aabb_class_get_longest_axis_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AABB::get_longest_axis_size, ctx, this_val, argc, argv);
};
static JSValue aabb_class_get_shortest_axis(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AABB::get_shortest_axis, ctx, this_val, argc, argv);
};
static JSValue aabb_class_get_shortest_axis_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AABB::get_shortest_axis_index, ctx, this_val, argc, argv);
};
static JSValue aabb_class_get_shortest_axis_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AABB::get_shortest_axis_size, ctx, this_val, argc, argv);
};
static JSValue aabb_class_get_endpoint(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AABB::get_endpoint, ctx, this_val, argc, argv);
};
static JSValue aabb_class_intersects_segment(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AABB::intersects_segment, ctx, this_val, argc, argv);
};
static JSValue aabb_class_intersects_ray(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AABB::intersects_ray, ctx, this_val, argc, argv);
};

static JSValue aabb_class_get_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	AABB &val = *reinterpret_cast<AABB *>(JS_GetOpaque(this_val, AABB::__class_id));
	return Variant(val.position);
}
static JSValue aabb_class_set_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	AABB &val = *reinterpret_cast<AABB *>(JS_GetOpaque(this_val, AABB::__class_id));
	val.position = Variant(*argv);
	return JS_UNDEFINED;
}

static JSValue aabb_class_get_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	AABB &val = *reinterpret_cast<AABB *>(JS_GetOpaque(this_val, AABB::__class_id));
	return Variant(val.size);
}
static JSValue aabb_class_set_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	AABB &val = *reinterpret_cast<AABB *>(JS_GetOpaque(this_val, AABB::__class_id));
	val.size = Variant(*argv);
	return JS_UNDEFINED;
}
static JSValue aabb_class_get_end(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AABB::get_end, ctx, this_val, argc, argv);
}
static JSValue aabb_class_set_end(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_no_ret(&AABB::set_end, ctx, this_val, argc, argv);
}

static const JSCFunctionListEntry aabb_class_proto_funcs[] = {
	JS_CFUNC_DEF("abs", 0, &aabb_class_abs),
	JS_CFUNC_DEF("get_center", 0, &aabb_class_get_center),
	JS_CFUNC_DEF("get_volume", 0, &aabb_class_get_volume),
	JS_CFUNC_DEF("has_volume", 0, &aabb_class_has_volume),
	JS_CFUNC_DEF("has_surface", 0, &aabb_class_has_surface),
	JS_CFUNC_DEF("has_point", 1, &aabb_class_has_point),
	JS_CFUNC_DEF("is_equal_approx", 1, &aabb_class_is_equal_approx),
	JS_CFUNC_DEF("is_finite", 0, &aabb_class_is_finite),
	JS_CFUNC_DEF("intersects", 1, &aabb_class_intersects),
	JS_CFUNC_DEF("encloses", 1, &aabb_class_encloses),
	JS_CFUNC_DEF("intersects_plane", 1, &aabb_class_intersects_plane),
	JS_CFUNC_DEF("intersection", 1, &aabb_class_intersection),
	JS_CFUNC_DEF("merge", 1, &aabb_class_merge),
	JS_CFUNC_DEF("expand", 1, &aabb_class_expand),
	JS_CFUNC_DEF("grow", 1, &aabb_class_grow),
	JS_CFUNC_DEF("get_support", 1, &aabb_class_get_support),
	JS_CFUNC_DEF("get_longest_axis", 0, &aabb_class_get_longest_axis),
	JS_CFUNC_DEF("get_longest_axis_index", 0, &aabb_class_get_longest_axis_index),
	JS_CFUNC_DEF("get_longest_axis_size", 0, &aabb_class_get_longest_axis_size),
	JS_CFUNC_DEF("get_shortest_axis", 0, &aabb_class_get_shortest_axis),
	JS_CFUNC_DEF("get_shortest_axis_index", 0, &aabb_class_get_shortest_axis_index),
	JS_CFUNC_DEF("get_shortest_axis_size", 0, &aabb_class_get_shortest_axis_size),
	JS_CFUNC_DEF("get_endpoint", 1, &aabb_class_get_endpoint),
	JS_CFUNC_DEF("intersects_segment", 2, &aabb_class_intersects_segment),
	JS_CFUNC_DEF("intersects_ray", 2, &aabb_class_intersects_ray),
};

void define_aabb_property(JSContext *ctx, JSValue obj) {
	JS_DefinePropertyGetSet(
			ctx,
			obj,
			JS_NewAtom(ctx, "position"),
			JS_NewCFunction(ctx, aabb_class_get_position, "get_position", 0),
			JS_NewCFunction(ctx, aabb_class_set_position, "set_position", 1),
			JS_PROP_GETSET);
	JS_DefinePropertyGetSet(
			ctx,
			obj,
			JS_NewAtom(ctx, "size"),
			JS_NewCFunction(ctx, aabb_class_get_size, "get_size", 0),
			JS_NewCFunction(ctx, aabb_class_set_size, "set_size", 1),
			JS_PROP_GETSET);
	JS_DefinePropertyGetSet(
			ctx,
			obj,
			JS_NewAtom(ctx, "end"),
			JS_NewCFunction(ctx, aabb_class_get_end, "get_end", 0),
			JS_NewCFunction(ctx, aabb_class_set_end, "set_end", 1),
			JS_PROP_GETSET);
}

static int js_aabb_class_init(JSContext *ctx) {
	classes["AABB"] = AABB::__class_id;
	class_id_list.insert(AABB::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), AABB::__class_id, &aabb_class_def);

	JSValue proto = JS_NewObject(ctx);
	JS_SetClassProto(ctx, AABB::__class_id, proto);
	define_aabb_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, aabb_class_proto_funcs, _countof(aabb_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, aabb_class_constructor, "AABB", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JSValue global = JS_GetGlobalObject(ctx);
	JS_SetPropertyStr(ctx, global, "AABB", ctor);

	return 0;
}

void js_init_aabb_module(JSContext *ctx) {
	js_aabb_class_init(ctx);
}

void register_aabb() {
	AABB::__init_js_class_id();
	js_init_aabb_module(ctx);
}