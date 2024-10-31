
#include "quickjs/env.h"
#include "quickjs/quickjs.h"
#include "quickjs/quickjs_helper.h"
#include "quickjs/str_helper.h"
#include "utils/func_utils.h"
#include <godot_cpp/variant/rect2i.hpp>

using namespace godot;

static void rect2i_class_finalizer(JSRuntime *rt, JSValue val) {
	Rect2i *rect2i = static_cast<Rect2i *>(JS_GetOpaque(val, Rect2i::__class_id));
	if (rect2i)
		memfree(rect2i);
}

static JSClassDef rect2i_class_def = {
	"Rect2i",
	.finalizer = rect2i_class_finalizer
};

static JSValue rect2i_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue obj = JS_NewObjectClass(ctx, Rect2i::__class_id);
	if (JS_IsException(obj))
		return obj;

	Rect2i *rect2i_class;

	if (argc == 0) {
		rect2i_class = memnew(Rect2i());
	}

	if (argc == 1 && Variant(argv[0]).get_type() == Variant::Type::RECT2I) {
		Rect2i v0 = Variant(argv[0]);
		rect2i_class = memnew(Rect2i(v0));
	}

	if (argc == 1 && Variant(argv[0]).get_type() == Variant::Type::RECT2) {
		Rect2 v0 = Variant(argv[0]);
		rect2i_class = memnew(Rect2i(v0));
	}

	if (argc == 2 && Variant(argv[0]).get_type() == Variant::Type::VECTOR2I && Variant(argv[1]).get_type() == Variant::Type::VECTOR2I) {
		Vector2i v0 = Variant(argv[0]);
		Vector2i v1 = Variant(argv[1]);
		rect2i_class = memnew(Rect2i(v0, v1));
	}

	if (argc == 4 && Variant(argv[0]).get_type() == Variant::Type::INT && Variant(argv[1]).get_type() == Variant::Type::INT && Variant(argv[2]).get_type() == Variant::Type::INT && Variant(argv[3]).get_type() == Variant::Type::INT) {
		int v0 = Variant(argv[0]);
		int v1 = Variant(argv[1]);
		int v2 = Variant(argv[2]);
		int v3 = Variant(argv[3]);
		rect2i_class = memnew(Rect2i(v0, v1, v2, v3));
	}

	if (!rect2i_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, rect2i_class);
	return obj;
}
static JSValue rect2i_class_get_center(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Rect2i::get_center, ctx, this_val, argc, argv);
};
static JSValue rect2i_class_get_area(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Rect2i::get_area, ctx, this_val, argc, argv);
};
static JSValue rect2i_class_has_area(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Rect2i::has_area, ctx, this_val, argc, argv);
};
static JSValue rect2i_class_has_point(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Rect2i::has_point, ctx, this_val, argc, argv);
};
static JSValue rect2i_class_intersects(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Rect2i::intersects, ctx, this_val, argc, argv);
};
static JSValue rect2i_class_encloses(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Rect2i::encloses, ctx, this_val, argc, argv);
};
static JSValue rect2i_class_intersection(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Rect2i::intersection, ctx, this_val, argc, argv);
};
static JSValue rect2i_class_merge(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Rect2i::merge, ctx, this_val, argc, argv);
};
static JSValue rect2i_class_expand(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Rect2i::expand, ctx, this_val, argc, argv);
};
static JSValue rect2i_class_grow(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Rect2i::grow, ctx, this_val, argc, argv);
};
static JSValue rect2i_class_grow_side(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Rect2i::grow_side, ctx, this_val, argc, argv);
};
static JSValue rect2i_class_grow_individual(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Rect2i::grow_individual, ctx, this_val, argc, argv);
};
static JSValue rect2i_class_abs(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Rect2i::abs, ctx, this_val, argc, argv);
};

static JSValue rect2i_class_get_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	Rect2i &val = *reinterpret_cast<Rect2i *>(JS_GetOpaque(this_val, Rect2i::__class_id));
	return Variant(val.position);
}
static JSValue rect2i_class_set_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	Rect2i &val = *reinterpret_cast<Rect2i *>(JS_GetOpaque(this_val, Rect2i::__class_id));
	val.position = Variant(*argv);
	return JS_UNDEFINED;
}

static JSValue rect2i_class_get_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	Rect2i &val = *reinterpret_cast<Rect2i *>(JS_GetOpaque(this_val, Rect2i::__class_id));
	return Variant(val.size);
}
static JSValue rect2i_class_set_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	Rect2i &val = *reinterpret_cast<Rect2i *>(JS_GetOpaque(this_val, Rect2i::__class_id));
	val.size = Variant(*argv);
	return JS_UNDEFINED;
}

static JSValue rect2i_class_get_end(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Rect2::get_end, ctx, this_val, argc, argv);
}
static JSValue rect2i_class_set_end(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_no_ret(&Rect2::set_end, ctx, this_val, argc, argv);
}

static const JSCFunctionListEntry rect2i_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_center", 0, &rect2i_class_get_center),
	JS_CFUNC_DEF("get_area", 0, &rect2i_class_get_area),
	JS_CFUNC_DEF("has_area", 0, &rect2i_class_has_area),
	JS_CFUNC_DEF("has_point", 1, &rect2i_class_has_point),
	JS_CFUNC_DEF("intersects", 1, &rect2i_class_intersects),
	JS_CFUNC_DEF("encloses", 1, &rect2i_class_encloses),
	JS_CFUNC_DEF("intersection", 1, &rect2i_class_intersection),
	JS_CFUNC_DEF("merge", 1, &rect2i_class_merge),
	JS_CFUNC_DEF("expand", 1, &rect2i_class_expand),
	JS_CFUNC_DEF("grow", 1, &rect2i_class_grow),
	JS_CFUNC_DEF("grow_side", 2, &rect2i_class_grow_side),
	JS_CFUNC_DEF("grow_individual", 4, &rect2i_class_grow_individual),
	JS_CFUNC_DEF("abs", 0, &rect2i_class_abs),
};

void define_rect2i_property(JSContext *ctx, JSValue obj) {
	JS_DefinePropertyGetSet(
			ctx,
			obj,
			JS_NewAtom(ctx, "position"),
			JS_NewCFunction(ctx, rect2i_class_get_position, "get_position", 0),
			JS_NewCFunction(ctx, rect2i_class_set_position, "set_position", 1),
			JS_PROP_GETSET);
	JS_DefinePropertyGetSet(
			ctx,
			obj,
			JS_NewAtom(ctx, "size"),
			JS_NewCFunction(ctx, rect2i_class_get_size, "get_size", 0),
			JS_NewCFunction(ctx, rect2i_class_set_size, "set_size", 1),
			JS_PROP_GETSET);
	JS_DefinePropertyGetSet(
			ctx,
			obj,
			JS_NewAtom(ctx, "end"),
			JS_NewCFunction(ctx, rect2i_class_get_end, "get_end", 0),
			JS_NewCFunction(ctx, rect2i_class_set_end, "set_end", 1),
			JS_PROP_GETSET);
}

static int js_rect2i_class_init(JSContext *ctx) {
	classes["Rect2i"] = Rect2i::__class_id;
	class_id_list.insert(Rect2i::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), Rect2i::__class_id, &rect2i_class_def);

	JSValue proto = JS_NewObject(ctx);
	JS_SetClassProto(ctx, Rect2i::__class_id, proto);
	define_rect2i_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, rect2i_class_proto_funcs, _countof(rect2i_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, rect2i_class_constructor, "Rect2i", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JSValue global = JS_GetGlobalObject(ctx);
	JS_SetPropertyStr(ctx, global, "Rect2i", ctor);

	return 0;
}

void js_init_rect2i_module(JSContext *ctx) {
	js_rect2i_class_init(ctx);
}

void register_rect2i() {
	Rect2i::__init_js_class_id();
	js_init_rect2i_module(ctx);
}