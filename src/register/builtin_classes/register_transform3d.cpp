
#include "quickjs/env.h"
#include "quickjs/quickjs.h"
#include "quickjs/quickjs_helper.h"
#include "quickjs/str_helper.h"
#include "utils/func_utils.h"
#include <godot_cpp/variant/transform3d.hpp>


using namespace godot;

static void transform3d_class_finalizer(JSRuntime *rt, JSValue val) {
	Transform3D *transform3d = static_cast<Transform3D *>(JS_GetOpaque(val, Transform3D::__class_id));
	if (transform3d)
		memfree(transform3d);
}

static JSClassDef transform3d_class_def = {
	"Transform3D",
	.finalizer = transform3d_class_finalizer
};

static JSValue transform3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue obj = JS_NewObjectClass(ctx, Transform3D::__class_id);
	if (JS_IsException(obj))
		return obj;

	Transform3D *transform3d_class;

	if (argc == 0) {
		transform3d_class = memnew(Transform3D());
	}

	if (argc == 1 && Variant(argv[0]).get_type() == Variant::Type::TRANSFORM3D) {
		Transform3D v0 = Variant(argv[0]);
		transform3d_class = memnew(Transform3D(v0));
	}

	if (argc == 2 && Variant(argv[0]).get_type() == Variant::Type::BASIS && Variant(argv[1]).get_type() == Variant::Type::VECTOR3) {
		Basis v0 = Variant(argv[0]);
		Vector3 v1 = Variant(argv[1]);
		transform3d_class = memnew(Transform3D(v0, v1));
	}

	if (argc == 4 && Variant(argv[0]).get_type() == Variant::Type::VECTOR3 && Variant(argv[1]).get_type() == Variant::Type::VECTOR3 && Variant(argv[2]).get_type() == Variant::Type::VECTOR3 && Variant(argv[3]).get_type() == Variant::Type::VECTOR3) {
		Vector3 v0 = Variant(argv[0]);
		Vector3 v1 = Variant(argv[1]);
		Vector3 v2 = Variant(argv[2]);
		Vector3 v3 = Variant(argv[3]);
		transform3d_class = memnew(Transform3D(v0, v1, v2, v3));
	}

	if (argc == 1 && Variant(argv[0]).get_type() == Variant::Type::PROJECTION) {
		Projection v0 = Variant(argv[0]);
		transform3d_class = memnew(Transform3D(v0));
	}

	if (!transform3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, transform3d_class);
	return obj;
}
static JSValue transform3d_class_inverse(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Transform3D::inverse, ctx, this_val, argc, argv);
};
static JSValue transform3d_class_affine_inverse(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Transform3D::affine_inverse, ctx, this_val, argc, argv);
};
static JSValue transform3d_class_orthonormalized(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Transform3D::orthonormalized, ctx, this_val, argc, argv);
};
static JSValue transform3d_class_rotated(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Transform3D::rotated, ctx, this_val, argc, argv);
};
static JSValue transform3d_class_rotated_local(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Transform3D::rotated_local, ctx, this_val, argc, argv);
};
static JSValue transform3d_class_scaled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Transform3D::scaled, ctx, this_val, argc, argv);
};
static JSValue transform3d_class_scaled_local(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Transform3D::scaled_local, ctx, this_val, argc, argv);
};
static JSValue transform3d_class_translated(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Transform3D::translated, ctx, this_val, argc, argv);
};
static JSValue transform3d_class_translated_local(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Transform3D::translated_local, ctx, this_val, argc, argv);
};
static JSValue transform3d_class_looking_at(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Transform3D::looking_at, ctx, this_val, argc, argv);
};
static JSValue transform3d_class_interpolate_with(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Transform3D::interpolate_with, ctx, this_val, argc, argv);
};
static JSValue transform3d_class_is_equal_approx(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Transform3D::is_equal_approx, ctx, this_val, argc, argv);
};
static JSValue transform3d_class_is_finite(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Transform3D::is_finite, ctx, this_val, argc, argv);
};

static JSValue transform3d_class_get_basis(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	Transform3D &val = *reinterpret_cast<Transform3D *>(JS_GetOpaque(this_val, Transform3D::__class_id));
	return Variant(val.basis);
}
static JSValue transform3d_class_set_basis(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	Transform3D &val = *reinterpret_cast<Transform3D *>(JS_GetOpaque(this_val, Transform3D::__class_id));
	val.basis = Variant(*argv);
	return JS_UNDEFINED;
}

static JSValue transform3d_class_get_origin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	Transform3D &val = *reinterpret_cast<Transform3D *>(JS_GetOpaque(this_val, Transform3D::__class_id));
	return Variant(val.origin);
}
static JSValue transform3d_class_set_origin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	Transform3D &val = *reinterpret_cast<Transform3D *>(JS_GetOpaque(this_val, Transform3D::__class_id));
	val.origin = Variant(*argv);
	return JS_UNDEFINED;
}

static const JSCFunctionListEntry transform3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("inverse", 0, &transform3d_class_inverse),
	JS_CFUNC_DEF("affine_inverse", 0, &transform3d_class_affine_inverse),
	JS_CFUNC_DEF("orthonormalized", 0, &transform3d_class_orthonormalized),
	JS_CFUNC_DEF("rotated", 2, &transform3d_class_rotated),
	JS_CFUNC_DEF("rotated_local", 2, &transform3d_class_rotated_local),
	JS_CFUNC_DEF("scaled", 1, &transform3d_class_scaled),
	JS_CFUNC_DEF("scaled_local", 1, &transform3d_class_scaled_local),
	JS_CFUNC_DEF("translated", 1, &transform3d_class_translated),
	JS_CFUNC_DEF("translated_local", 1, &transform3d_class_translated_local),
	JS_CFUNC_DEF("looking_at", 3, &transform3d_class_looking_at),
	JS_CFUNC_DEF("interpolate_with", 2, &transform3d_class_interpolate_with),
	JS_CFUNC_DEF("is_equal_approx", 1, &transform3d_class_is_equal_approx),
	JS_CFUNC_DEF("is_finite", 0, &transform3d_class_is_finite),
};

void define_transform3d_property(JSContext *ctx, JSValue obj) {
	JS_DefinePropertyGetSet(
			ctx,
			obj,
			JS_NewAtom(ctx, "basis"),
			JS_NewCFunction(ctx, transform3d_class_get_basis, "get_basis", 0),
			JS_NewCFunction(ctx, transform3d_class_set_basis, "set_basis", 1),
			JS_PROP_GETSET);
	JS_DefinePropertyGetSet(
			ctx,
			obj,
			JS_NewAtom(ctx, "origin"),
			JS_NewCFunction(ctx, transform3d_class_get_origin, "get_origin", 0),
			JS_NewCFunction(ctx, transform3d_class_set_origin, "set_origin", 1),
			JS_PROP_GETSET);
}

static int js_transform3d_class_init(JSContext *ctx) {
	JS_NewClassID(&Transform3D::__class_id);
	classes["Transform3D"] = Transform3D::__class_id;
	class_id_list.insert(Transform3D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), Transform3D::__class_id, &transform3d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JS_SetClassProto(ctx, Transform3D::__class_id, proto);
	define_transform3d_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, transform3d_class_proto_funcs, _countof(transform3d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, transform3d_class_constructor, "Transform3D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JSValue global = JS_GetGlobalObject(ctx);
	JS_SetPropertyStr(ctx, global, "Transform3D", ctor);

	return 0;
}

void js_init_transform3d_module(JSContext *ctx) {
	js_transform3d_class_init(ctx);
}

void register_transform3d() {
	Transform3D::__init_js_class_id();
	js_init_transform3d_module(ctx);
}