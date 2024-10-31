
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/curve.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void curve_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef curve_class_def = {
	"Curve",
	.finalizer = curve_class_finalizer
};

static JSValue curve_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, Curve::__class_id);
	if (JS_IsException(obj))
		return obj;

	Curve *curve_class;
	if (argc == 1) 
		curve_class = static_cast<Curve *>(static_cast<Object *>(Variant(*argv)));
	else 
		curve_class = memnew(Curve);
	if (!curve_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, curve_class);	
	return obj;
}
static JSValue curve_class_get_point_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Curve::get_point_count, ctx, this_val, argc, argv);
};
static JSValue curve_class_set_point_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Curve::set_point_count, ctx, this_val, argc, argv);
};
static JSValue curve_class_add_point(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&Curve::add_point, ctx, this_val, argc, argv);
};
static JSValue curve_class_remove_point(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Curve::remove_point, ctx, this_val, argc, argv);
};
static JSValue curve_class_clear_points(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Curve::clear_points, ctx, this_val, argc, argv);
};
static JSValue curve_class_get_point_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Curve::get_point_position, ctx, this_val, argc, argv);
};
static JSValue curve_class_set_point_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Curve::set_point_value, ctx, this_val, argc, argv);
};
static JSValue curve_class_set_point_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&Curve::set_point_offset, ctx, this_val, argc, argv);
};
static JSValue curve_class_sample(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Curve::sample, ctx, this_val, argc, argv);
};
static JSValue curve_class_sample_baked(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Curve::sample_baked, ctx, this_val, argc, argv);
};
static JSValue curve_class_get_point_left_tangent(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Curve::get_point_left_tangent, ctx, this_val, argc, argv);
};
static JSValue curve_class_get_point_right_tangent(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Curve::get_point_right_tangent, ctx, this_val, argc, argv);
};
static JSValue curve_class_get_point_left_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Curve::get_point_left_mode, ctx, this_val, argc, argv);
};
static JSValue curve_class_get_point_right_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Curve::get_point_right_mode, ctx, this_val, argc, argv);
};
static JSValue curve_class_set_point_left_tangent(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Curve::set_point_left_tangent, ctx, this_val, argc, argv);
};
static JSValue curve_class_set_point_right_tangent(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Curve::set_point_right_tangent, ctx, this_val, argc, argv);
};
static JSValue curve_class_set_point_left_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Curve::set_point_left_mode, ctx, this_val, argc, argv);
};
static JSValue curve_class_set_point_right_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Curve::set_point_right_mode, ctx, this_val, argc, argv);
};
static JSValue curve_class_get_min_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Curve::get_min_value, ctx, this_val, argc, argv);
};
static JSValue curve_class_set_min_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Curve::set_min_value, ctx, this_val, argc, argv);
};
static JSValue curve_class_get_max_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Curve::get_max_value, ctx, this_val, argc, argv);
};
static JSValue curve_class_set_max_value(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Curve::set_max_value, ctx, this_val, argc, argv);
};
static JSValue curve_class_clean_dupes(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Curve::clean_dupes, ctx, this_val, argc, argv);
};
static JSValue curve_class_bake(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Curve::bake, ctx, this_val, argc, argv);
};
static JSValue curve_class_get_bake_resolution(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Curve::get_bake_resolution, ctx, this_val, argc, argv);
};
static JSValue curve_class_set_bake_resolution(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Curve::set_bake_resolution, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry curve_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_point_count", 0, &curve_class_get_point_count),
	JS_CFUNC_DEF("set_point_count", 1, &curve_class_set_point_count),
	JS_CFUNC_DEF("add_point", 5, &curve_class_add_point),
	JS_CFUNC_DEF("remove_point", 1, &curve_class_remove_point),
	JS_CFUNC_DEF("clear_points", 0, &curve_class_clear_points),
	JS_CFUNC_DEF("get_point_position", 1, &curve_class_get_point_position),
	JS_CFUNC_DEF("set_point_value", 2, &curve_class_set_point_value),
	JS_CFUNC_DEF("set_point_offset", 2, &curve_class_set_point_offset),
	JS_CFUNC_DEF("sample", 1, &curve_class_sample),
	JS_CFUNC_DEF("sample_baked", 1, &curve_class_sample_baked),
	JS_CFUNC_DEF("get_point_left_tangent", 1, &curve_class_get_point_left_tangent),
	JS_CFUNC_DEF("get_point_right_tangent", 1, &curve_class_get_point_right_tangent),
	JS_CFUNC_DEF("get_point_left_mode", 1, &curve_class_get_point_left_mode),
	JS_CFUNC_DEF("get_point_right_mode", 1, &curve_class_get_point_right_mode),
	JS_CFUNC_DEF("set_point_left_tangent", 2, &curve_class_set_point_left_tangent),
	JS_CFUNC_DEF("set_point_right_tangent", 2, &curve_class_set_point_right_tangent),
	JS_CFUNC_DEF("set_point_left_mode", 2, &curve_class_set_point_left_mode),
	JS_CFUNC_DEF("set_point_right_mode", 2, &curve_class_set_point_right_mode),
	JS_CFUNC_DEF("get_min_value", 0, &curve_class_get_min_value),
	JS_CFUNC_DEF("set_min_value", 1, &curve_class_set_min_value),
	JS_CFUNC_DEF("get_max_value", 0, &curve_class_get_max_value),
	JS_CFUNC_DEF("set_max_value", 1, &curve_class_set_max_value),
	JS_CFUNC_DEF("clean_dupes", 0, &curve_class_clean_dupes),
	JS_CFUNC_DEF("bake", 0, &curve_class_bake),
	JS_CFUNC_DEF("get_bake_resolution", 0, &curve_class_get_bake_resolution),
	JS_CFUNC_DEF("set_bake_resolution", 1, &curve_class_set_bake_resolution),
};
static JSValue curve_class_get_range_changed_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	Curve *opaque = reinterpret_cast<Curve *>(JS_GetOpaque(this_val, Curve::__class_id));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "range_changed_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "range_changed").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "range_changed_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}

static void define_curve_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "min_value"),
        JS_NewCFunction(ctx, curve_class_get_min_value, "get_min_value", 0),
        JS_NewCFunction(ctx, curve_class_set_min_value, "set_min_value", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "max_value"),
        JS_NewCFunction(ctx, curve_class_get_max_value, "get_max_value", 0),
        JS_NewCFunction(ctx, curve_class_set_max_value, "set_max_value", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "bake_resolution"),
        JS_NewCFunction(ctx, curve_class_get_bake_resolution, "get_bake_resolution", 0),
        JS_NewCFunction(ctx, curve_class_set_bake_resolution, "set_bake_resolution", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "point_count"),
        JS_NewCFunction(ctx, curve_class_get_point_count, "get_point_count", 0),
        JS_NewCFunction(ctx, curve_class_set_point_count, "set_point_count", 1),
        JS_PROP_GETSET
    );
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "range_changed"),
		JS_NewCFunction(ctx, curve_class_get_range_changed_signal, "get_range_changed_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
}

static void define_curve_enum(JSContext *ctx, JSValue proto) {
	JSValue TangentMode_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, TangentMode_obj, "TANGENT_FREE", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, TangentMode_obj, "TANGENT_LINEAR", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, TangentMode_obj, "TANGENT_MODE_COUNT", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, proto, "TangentMode", TangentMode_obj);
}

static int js_curve_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&Curve::__class_id);
	classes["Curve"] = Curve::__class_id;
	class_id_list.insert(Curve::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), Curve::__class_id, &curve_class_def);

	JSValue proto = JS_NewObjectClass(ctx, Curve::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Curve::__class_id, proto);

	define_curve_property(ctx, proto);
	define_curve_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, curve_class_proto_funcs, _countof(curve_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, curve_class_constructor, "Curve", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "Curve", ctor);

	return 0;
}

JSModuleDef *_js_init_curve_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/resource';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_curve_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Curve");
	return m;
}

JSModuleDef *js_init_curve_module(JSContext *ctx) {
	return _js_init_curve_module(ctx, "@godot/classes/curve");
}

void register_curve() {
	Curve::__init_js_class_id();
	js_init_curve_module(ctx);
}