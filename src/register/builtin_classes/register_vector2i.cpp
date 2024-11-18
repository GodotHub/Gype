
#include "register/builtin_classes/register_builtin_classes.h"
#include "quickjs/quickjs.h"
#include "quickjs/env.h"
#include "utils/func_utils.hpp"
#include "utils/str_helper.hpp"
#include "utils/quickjs_helper.hpp"
#include "utils/variant_helper.hpp"
#include <godot_cpp/variant/vector2i.hpp>

using namespace godot;

static void vector2i_class_finalizer(JSRuntime *rt, JSValue val) {
	JSClassID class_id = classes["Vector2i"];
	Vector2i *vector2i = static_cast<Vector2i *>(JS_GetOpaque(val, class_id));
	if (vector2i)
		memfree(vector2i);
}

static JSClassDef vector2i_class_def = {
	"Vector2i",
	.finalizer = vector2i_class_finalizer
};

static JSValue vector2i_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSClassID class_id = classes["Vector2i"];
	JSValue obj = JS_NewObjectClass(ctx, class_id);
	if (JS_IsException(obj))
		return obj;

	Vector2i *vector2i_class = nullptr;
	
	if (argc == 0 ) {
		vector2i_class = memnew(Vector2i());
	}
	
	if (argc == 1 &&VariantAdapter(argv[0]).get_type() == Variant::Type::VECTOR2I) {
		Vector2i v0 = VariantAdapter(argv[0]);
		vector2i_class = memnew(Vector2i(v0));
	}
	
	if (argc == 1 &&VariantAdapter(argv[0]).get_type() == Variant::Type::VECTOR2) {
		Vector2 v0 = VariantAdapter(argv[0]);
		vector2i_class = memnew(Vector2i(v0));
	}
	
	if (argc == 2 &&VariantAdapter(argv[0]).get_type() == Variant::Type::INT&&VariantAdapter(argv[1]).get_type() == Variant::Type::INT) {
		int v0 = VariantAdapter(argv[0]);
		int v1 = VariantAdapter(argv[1]);
		vector2i_class = memnew(Vector2i(v0,v1));
	}
	

	if (!vector2i_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, vector2i_class);
	return obj;
}
static JSValue vector2i_class_aspect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector2i::aspect, ctx, this_val, argc, argv);
};
static JSValue vector2i_class_max_axis_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector2i::max_axis_index, ctx, this_val, argc, argv);
};
static JSValue vector2i_class_min_axis_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector2i::min_axis_index, ctx, this_val, argc, argv);
};
static JSValue vector2i_class_distance_to(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector2i::distance_to, ctx, this_val, argc, argv);
};
static JSValue vector2i_class_distance_squared_to(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector2i::distance_squared_to, ctx, this_val, argc, argv);
};
static JSValue vector2i_class_length(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector2i::length, ctx, this_val, argc, argv);
};
static JSValue vector2i_class_length_squared(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector2i::length_squared, ctx, this_val, argc, argv);
};
static JSValue vector2i_class_sign(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector2i::sign, ctx, this_val, argc, argv);
};
static JSValue vector2i_class_abs(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector2i::abs, ctx, this_val, argc, argv);
};
static JSValue vector2i_class_clamp(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector2i::clamp, ctx, this_val, argc, argv);
};
static JSValue vector2i_class_clampi(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector2i::clampi, ctx, this_val, argc, argv);
};
static JSValue vector2i_class_snapped(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector2i::snapped, ctx, this_val, argc, argv);
};
static JSValue vector2i_class_snappedi(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector2i::snappedi, ctx, this_val, argc, argv);
};
static JSValue vector2i_class_min(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector2i::min, ctx, this_val, argc, argv);
};
static JSValue vector2i_class_mini(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector2i::mini, ctx, this_val, argc, argv);
};
static JSValue vector2i_class_max(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector2i::max, ctx, this_val, argc, argv);
};
static JSValue vector2i_class_maxi(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Vector2i::maxi, ctx, this_val, argc, argv);
};
static JSValue vector2i_class_get_x(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	Vector2i &val = *reinterpret_cast<Vector2i *>(JS_GetOpaque(this_val, classes["Vector2i"]));
	return VariantAdapter(val.x);
}
static JSValue vector2i_class_set_x(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	Vector2i &val = *reinterpret_cast<Vector2i *>(JS_GetOpaque(this_val, classes["Vector2i"]));
	val.x = VariantAdapter(*argv);
	return JS_UNDEFINED;
}
static JSValue vector2i_class_get_y(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	Vector2i &val = *reinterpret_cast<Vector2i *>(JS_GetOpaque(this_val, classes["Vector2i"]));
	return VariantAdapter(val.y);
}
static JSValue vector2i_class_set_y(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	Vector2i &val = *reinterpret_cast<Vector2i *>(JS_GetOpaque(this_val, classes["Vector2i"]));
	val.y = VariantAdapter(*argv);
	return JS_UNDEFINED;
}
static const JSCFunctionListEntry vector2i_class_proto_funcs[] = {
	JS_CFUNC_DEF("aspect", 0, &vector2i_class_aspect),
	JS_CFUNC_DEF("max_axis_index", 0, &vector2i_class_max_axis_index),
	JS_CFUNC_DEF("min_axis_index", 0, &vector2i_class_min_axis_index),
	JS_CFUNC_DEF("distance_to", 1, &vector2i_class_distance_to),
	JS_CFUNC_DEF("distance_squared_to", 1, &vector2i_class_distance_squared_to),
	JS_CFUNC_DEF("length", 0, &vector2i_class_length),
	JS_CFUNC_DEF("length_squared", 0, &vector2i_class_length_squared),
	JS_CFUNC_DEF("sign", 0, &vector2i_class_sign),
	JS_CFUNC_DEF("abs", 0, &vector2i_class_abs),
	JS_CFUNC_DEF("clamp", 2, &vector2i_class_clamp),
	JS_CFUNC_DEF("clampi", 2, &vector2i_class_clampi),
	JS_CFUNC_DEF("snapped", 1, &vector2i_class_snapped),
	JS_CFUNC_DEF("snappedi", 1, &vector2i_class_snappedi),
	JS_CFUNC_DEF("min", 1, &vector2i_class_min),
	JS_CFUNC_DEF("mini", 1, &vector2i_class_mini),
	JS_CFUNC_DEF("max", 1, &vector2i_class_max),
	JS_CFUNC_DEF("maxi", 1, &vector2i_class_maxi),
};
void define_vector2i_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "x"),
        JS_NewCFunction(ctx, vector2i_class_get_x, "get_x", 0),
        JS_NewCFunction(ctx, vector2i_class_set_x, "set_x", 1),
		JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "y"),
        JS_NewCFunction(ctx, vector2i_class_get_y, "get_y", 0),
        JS_NewCFunction(ctx, vector2i_class_set_y, "set_y", 1),
		JS_PROP_GETSET
    );
}
void define_vector2i_constants(JSContext *ctx, JSValue ctor) {
	JS_DefinePropertyValueStr(ctx, ctor, "AXIS_X", VariantAdapter(0), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "AXIS_Y", VariantAdapter(1), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "ZERO", VariantAdapter(Vector2i(0, 0)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "ONE", VariantAdapter(Vector2i(1, 1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "MIN", VariantAdapter(Vector2i(-2147483648, -2147483648)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "MAX", VariantAdapter(Vector2i(2147483647, 2147483647)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "LEFT", VariantAdapter(Vector2i(-1, 0)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "RIGHT", VariantAdapter(Vector2i(1, 0)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "UP", VariantAdapter(Vector2i(0, -1)), JS_PROP_ENUMERABLE);
	JS_DefinePropertyValueStr(ctx, ctor, "DOWN", VariantAdapter(Vector2i(0, 1)), JS_PROP_ENUMERABLE);
}

static int js_vector2i_class_init(JSContext *ctx) {
	classes["Vector2i"] = 0;
	classes["Vector2i"] = JS_NewClassID(&classes["Vector2i"]);
	JSClassID class_id = classes["Vector2i"];

	class_id_list.insert(class_id);
	JS_NewClass(JS_GetRuntime(ctx), class_id, &vector2i_class_def);

	JSValue proto = JS_NewObject(ctx);
	JS_SetClassProto(ctx, class_id, proto);
	define_vector2i_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, vector2i_class_proto_funcs, _countof(vector2i_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, vector2i_class_constructor, "Vector2i", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	define_vector2i_constants(ctx, ctor);

	JSValue global = JS_GetGlobalObject(ctx);
	JS_SetPropertyStr(ctx, global, "Vector2i", ctor);

	return 0;
}

void js_init_vector2i_module(JSContext *ctx) {
	js_vector2i_class_init(ctx);
}

void register_vector2i() {
	js_init_vector2i_module(ctx);
}