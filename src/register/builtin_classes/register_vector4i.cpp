
#include "quickjs/quickjs.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/variant/vector4i.hpp>

using namespace godot;

static void vector4i_class_finalizer(JSRuntime *rt, JSValue val) {
	Vector4i *vector4i = static_cast<Vector4i *>(JS_GetOpaque(val, Vector4i::__class_id));
	if (vector4i)
		memfree(vector4i);
}

static JSClassDef vector4i_class_def = {
	"Vector4i",
	.finalizer = vector4i_class_finalizer
};

static JSValue vector4i_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	Vector4i *vector4i_class;
	JSValue obj = JS_NewObjectClass(ctx, Vector4i::__class_id);
	if (JS_IsException(obj))
		return obj;
	vector4i_class = memnew(Vector4i);
	if (!vector4i_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, vector4i_class);
	return obj;
}
static JSValue vector4i_class_min_axis_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector4i::min_axis_index, ctx, this_val, argc, argv);
};
static JSValue vector4i_class_max_axis_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector4i::max_axis_index, ctx, this_val, argc, argv);
};
static JSValue vector4i_class_length(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector4i::length, ctx, this_val, argc, argv);
};
static JSValue vector4i_class_length_squared(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector4i::length_squared, ctx, this_val, argc, argv);
};
static JSValue vector4i_class_sign(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector4i::sign, ctx, this_val, argc, argv);
};
static JSValue vector4i_class_abs(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector4i::abs, ctx, this_val, argc, argv);
};
static JSValue vector4i_class_clamp(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector4i::clamp, ctx, this_val, argc, argv);
};
static JSValue vector4i_class_clampi(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector4i::clampi, ctx, this_val, argc, argv);
};
static JSValue vector4i_class_snapped(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector4i::snapped, ctx, this_val, argc, argv);
};
static JSValue vector4i_class_snappedi(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector4i::snappedi, ctx, this_val, argc, argv);
};
static JSValue vector4i_class_min(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector4i::min, ctx, this_val, argc, argv);
};
static JSValue vector4i_class_mini(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector4i::mini, ctx, this_val, argc, argv);
};
static JSValue vector4i_class_max(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector4i::max, ctx, this_val, argc, argv);
};
static JSValue vector4i_class_maxi(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector4i::maxi, ctx, this_val, argc, argv);
};
static JSValue vector4i_class_distance_to(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector4i::distance_to, ctx, this_val, argc, argv);
};
static JSValue vector4i_class_distance_squared_to(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector4i::distance_squared_to, ctx, this_val, argc, argv);
};



static JSValue vector4i_class_get_x(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	Vector4i &val = *reinterpret_cast<Vector4i *>(JS_GetOpaque(this_val, Vector4i::__class_id));
	return Variant(val.x);
}
static JSValue vector4i_class_set_x(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	Vector4i &val = *reinterpret_cast<Vector4i *>(JS_GetOpaque(this_val, Vector4i::__class_id));
	val.x = Variant(*argv);
	return JS_UNDEFINED;
}

static JSValue vector4i_class_get_y(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	Vector4i &val = *reinterpret_cast<Vector4i *>(JS_GetOpaque(this_val, Vector4i::__class_id));
	return Variant(val.y);
}
static JSValue vector4i_class_set_y(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	Vector4i &val = *reinterpret_cast<Vector4i *>(JS_GetOpaque(this_val, Vector4i::__class_id));
	val.y = Variant(*argv);
	return JS_UNDEFINED;
}

static JSValue vector4i_class_get_z(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	Vector4i &val = *reinterpret_cast<Vector4i *>(JS_GetOpaque(this_val, Vector4i::__class_id));
	return Variant(val.z);
}
static JSValue vector4i_class_set_z(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	Vector4i &val = *reinterpret_cast<Vector4i *>(JS_GetOpaque(this_val, Vector4i::__class_id));
	val.z = Variant(*argv);
	return JS_UNDEFINED;
}

static JSValue vector4i_class_get_w(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	Vector4i &val = *reinterpret_cast<Vector4i *>(JS_GetOpaque(this_val, Vector4i::__class_id));
	return Variant(val.w);
}
static JSValue vector4i_class_set_w(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	Vector4i &val = *reinterpret_cast<Vector4i *>(JS_GetOpaque(this_val, Vector4i::__class_id));
	val.w = Variant(*argv);
	return JS_UNDEFINED;
}


static const JSCFunctionListEntry vector4i_class_proto_funcs[] = {
	JS_CFUNC_DEF("min_axis_index", 0, &vector4i_class_min_axis_index),
	JS_CFUNC_DEF("max_axis_index", 0, &vector4i_class_max_axis_index),
	JS_CFUNC_DEF("length", 0, &vector4i_class_length),
	JS_CFUNC_DEF("length_squared", 0, &vector4i_class_length_squared),
	JS_CFUNC_DEF("sign", 0, &vector4i_class_sign),
	JS_CFUNC_DEF("abs", 0, &vector4i_class_abs),
	JS_CFUNC_DEF("clamp", 2, &vector4i_class_clamp),
	JS_CFUNC_DEF("clampi", 2, &vector4i_class_clampi),
	JS_CFUNC_DEF("snapped", 1, &vector4i_class_snapped),
	JS_CFUNC_DEF("snappedi", 1, &vector4i_class_snappedi),
	JS_CFUNC_DEF("min", 1, &vector4i_class_min),
	JS_CFUNC_DEF("mini", 1, &vector4i_class_mini),
	JS_CFUNC_DEF("max", 1, &vector4i_class_max),
	JS_CFUNC_DEF("maxi", 1, &vector4i_class_maxi),
	JS_CFUNC_DEF("distance_to", 1, &vector4i_class_distance_to),
	JS_CFUNC_DEF("distance_squared_to", 1, &vector4i_class_distance_squared_to),
};


void define_vector4i_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "x"),
        JS_NewCFunction(ctx, vector4i_class_get_x, "get_x", 0),
        JS_NewCFunction(ctx, vector4i_class_set_x, "set_x", 1),
		JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "y"),
        JS_NewCFunction(ctx, vector4i_class_get_y, "get_y", 0),
        JS_NewCFunction(ctx, vector4i_class_set_y, "set_y", 1),
		JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "z"),
        JS_NewCFunction(ctx, vector4i_class_get_z, "get_z", 0),
        JS_NewCFunction(ctx, vector4i_class_set_z, "set_z", 1),
		JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "w"),
        JS_NewCFunction(ctx, vector4i_class_get_w, "get_w", 0),
        JS_NewCFunction(ctx, vector4i_class_set_w, "set_w", 1),
		JS_PROP_GETSET
    );
}


static int js_vector4i_class_init(JSContext *ctx) {
	
	JS_NewClassID(&Vector4i::__class_id);
	classes["Vector4i"] = Vector4i::__class_id;
	class_id_list.insert(Vector4i::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), Vector4i::__class_id, &vector4i_class_def);

	JSValue proto = JS_NewObject(ctx);
	JS_SetClassProto(ctx, Vector4i::__class_id, proto);
	define_vector4i_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, vector4i_class_proto_funcs, _countof(vector4i_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, vector4i_class_constructor, "Vector4i", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JSValue global = JS_GetGlobalObject(ctx);
	JS_SetPropertyStr(ctx, global, "Vector4i", ctor);

	return 0;
}

void js_init_vector4i_module(JSContext *ctx) {
	js_vector4i_class_init(ctx);
}

void register_vector4i() {
	Vector4i::__init_js_class_id();
	js_init_vector4i_module(ctx);
}