
#include "quickjs/env.h"
#include "quickjs/quickjs.h"
#include "quickjs/quickjs_helper.h"
#include "quickjs/str_helper.h"
#include "utils/func_utils.h"
#include <godot_cpp/variant/basis.hpp>

using namespace godot;

static void basis_class_finalizer(JSRuntime *rt, JSValue val) {
	Basis *basis = static_cast<Basis *>(JS_GetOpaque(val, Basis::__class_id));
	if (basis)
		memfree(basis);
}

static JSClassDef basis_class_def = {
	"Basis",
	.finalizer = basis_class_finalizer
};

static JSValue basis_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue obj = JS_NewObjectClass(ctx, Basis::__class_id);
	if (JS_IsException(obj))
		return obj;

	Basis *basis_class = nullptr;

	if (argc == 0) {
		basis_class = memnew(Basis());
	}

	if (argc == 1 && Variant(argv[0]).get_type() == Variant::Type::BASIS) {
		Basis v0 = Variant(argv[0]);
		basis_class = memnew(Basis(v0));
	}

	if (argc == 1 && Variant(argv[0]).get_type() == Variant::Type::QUATERNION) {
		Quaternion v0 = Variant(argv[0]);
		basis_class = memnew(Basis(v0));
	}

	if (argc == 2 && Variant(argv[0]).get_type() == Variant::Type::VECTOR3 && (Variant(argv[1]).get_type() == Variant::Type::FLOAT || Variant(argv[1]).get_type() == Variant::Type::INT)) {
		Vector3 v0 = Variant(argv[0]);
		float v1 = Variant(argv[1]);
		basis_class = memnew(Basis(v0, v1));
	}

	if (argc == 3 && Variant(argv[0]).get_type() == Variant::Type::VECTOR3 && Variant(argv[1]).get_type() == Variant::Type::VECTOR3 && Variant(argv[2]).get_type() == Variant::Type::VECTOR3) {
		Vector3 v0 = Variant(argv[0]);
		Vector3 v1 = Variant(argv[1]);
		Vector3 v2 = Variant(argv[2]);
		basis_class = memnew(Basis(v0, v1, v2));
	}

	if (!basis_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, basis_class);
	return obj;
}
static JSValue basis_class_inverse(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Basis::inverse, ctx, this_val, argc, argv);
};
static JSValue basis_class_transposed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Basis::transposed, ctx, this_val, argc, argv);
};
static JSValue basis_class_orthonormalized(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Basis::orthonormalized, ctx, this_val, argc, argv);
};
static JSValue basis_class_determinant(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Basis::determinant, ctx, this_val, argc, argv);
};
static JSValue basis_class_scaled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Basis::scaled, ctx, this_val, argc, argv);
};
static JSValue basis_class_get_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Basis::get_scale, ctx, this_val, argc, argv);
};
static JSValue basis_class_get_euler(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Basis::get_euler, ctx, this_val, argc, argv);
};
static JSValue basis_class_tdotx(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Basis::tdotx, ctx, this_val, argc, argv);
};
static JSValue basis_class_tdoty(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Basis::tdoty, ctx, this_val, argc, argv);
};
static JSValue basis_class_tdotz(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Basis::tdotz, ctx, this_val, argc, argv);
};
static JSValue basis_class_slerp(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Basis::slerp, ctx, this_val, argc, argv);
};
static JSValue basis_class_is_equal_approx(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Basis::is_equal_approx, ctx, this_val, argc, argv);
};
static JSValue basis_class_is_finite(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Basis::is_finite, ctx, this_val, argc, argv);
};
static JSValue basis_class_get_rotation_quaternion(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Basis::get_rotation_quaternion, ctx, this_val, argc, argv);
};
static JSValue basis_class_looking_at(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&Basis::looking_at, ctx, this_val, argc, argv);
};

static JSValue basis_class_from_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&Basis::from_scale, ctx, this_val, argc, argv);
};

static JSValue basis_class_from_euler(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&Basis::from_euler, ctx, this_val, argc, argv);
};

static JSValue basis_class_get_x(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	Basis &val = *reinterpret_cast<Basis *>(JS_GetOpaque(this_val, Basis::__class_id));
	return Variant(val.rows[0]);
}
static JSValue basis_class_set_x(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	Basis &val = *reinterpret_cast<Basis *>(JS_GetOpaque(this_val, Basis::__class_id));
	val.rows[0] = Variant(*argv);
	return JS_UNDEFINED;
}

static JSValue basis_class_get_y(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	Basis &val = *reinterpret_cast<Basis *>(JS_GetOpaque(this_val, Basis::__class_id));
	return Variant(val.rows[1]);
}
static JSValue basis_class_set_y(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	Basis &val = *reinterpret_cast<Basis *>(JS_GetOpaque(this_val, Basis::__class_id));
	val.rows[1] = Variant(*argv);
	return JS_UNDEFINED;
}

static JSValue basis_class_get_z(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	Basis &val = *reinterpret_cast<Basis *>(JS_GetOpaque(this_val, Basis::__class_id));
	return Variant(val.rows[2]);
}
static JSValue basis_class_set_z(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	Basis &val = *reinterpret_cast<Basis *>(JS_GetOpaque(this_val, Basis::__class_id));
	val.rows[2] = Variant(*argv);
	return JS_UNDEFINED;
}

static const JSCFunctionListEntry basis_class_proto_funcs[] = {
	JS_CFUNC_DEF("inverse", 0, &basis_class_inverse),
	JS_CFUNC_DEF("transposed", 0, &basis_class_transposed),
	JS_CFUNC_DEF("orthonormalized", 0, &basis_class_orthonormalized),
	JS_CFUNC_DEF("determinant", 0, &basis_class_determinant),
	JS_CFUNC_DEF("scaled", 1, &basis_class_scaled),
	JS_CFUNC_DEF("get_scale", 0, &basis_class_get_scale),
	JS_CFUNC_DEF("get_euler", 1, &basis_class_get_euler),
	JS_CFUNC_DEF("tdotx", 1, &basis_class_tdotx),
	JS_CFUNC_DEF("tdoty", 1, &basis_class_tdoty),
	JS_CFUNC_DEF("tdotz", 1, &basis_class_tdotz),
	JS_CFUNC_DEF("slerp", 2, &basis_class_slerp),
	JS_CFUNC_DEF("is_equal_approx", 1, &basis_class_is_equal_approx),
	JS_CFUNC_DEF("is_finite", 0, &basis_class_is_finite),
	JS_CFUNC_DEF("get_rotation_quaternion", 0, &basis_class_get_rotation_quaternion),
};
static const JSCFunctionListEntry basis_class_static_funcs[] = {
	JS_CFUNC_DEF("looking_at", 3, &basis_class_looking_at),
	JS_CFUNC_DEF("from_scale", 1, &basis_class_from_scale),
	JS_CFUNC_DEF("from_euler", 2, &basis_class_from_euler),
};

void define_basis_property(JSContext *ctx, JSValue obj) {
	JS_DefinePropertyGetSet(
			ctx,
			obj,
			JS_NewAtom(ctx, "x"),
			JS_NewCFunction(ctx, basis_class_get_x, "get_x", 0),
			JS_NewCFunction(ctx, basis_class_set_x, "set_x", 1),
			JS_PROP_GETSET);
	JS_DefinePropertyGetSet(
			ctx,
			obj,
			JS_NewAtom(ctx, "y"),
			JS_NewCFunction(ctx, basis_class_get_y, "get_y", 0),
			JS_NewCFunction(ctx, basis_class_set_y, "set_y", 1),
			JS_PROP_GETSET);
	JS_DefinePropertyGetSet(
			ctx,
			obj,
			JS_NewAtom(ctx, "z"),
			JS_NewCFunction(ctx, basis_class_get_z, "get_z", 0),
			JS_NewCFunction(ctx, basis_class_set_z, "set_z", 1),
			JS_PROP_GETSET);
}

static int js_basis_class_init(JSContext *ctx) {
	classes["Basis"] = Basis::__class_id;
	class_id_list.insert(Basis::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), Basis::__class_id, &basis_class_def);

	JSValue proto = JS_NewObject(ctx);
	JS_SetClassProto(ctx, Basis::__class_id, proto);
	define_basis_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, basis_class_proto_funcs, _countof(basis_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, basis_class_constructor, "Basis", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetPropertyFunctionList(ctx, ctor, basis_class_static_funcs, _countof(basis_class_static_funcs));

	JSValue global = JS_GetGlobalObject(ctx);
	JS_SetPropertyStr(ctx, global, "Basis", ctor);

	return 0;
}

void js_init_basis_module(JSContext *ctx) {
	js_basis_class_init(ctx);
}

void register_basis() {
	Basis::__init_js_class_id();
	js_init_basis_module(ctx);
}