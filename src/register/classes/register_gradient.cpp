
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/gradient.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void gradient_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef gradient_class_def = {
	"Gradient",
	.finalizer = gradient_class_finalizer
};

static JSValue gradient_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, Gradient::__class_id);
	if (JS_IsException(obj))
		return obj;
	Gradient *gradient_class;
	if (argc == 1) {
		Variant vobj = *argv;
		gradient_class = static_cast<Gradient *>(static_cast<Object *>(vobj));
	} else {
		gradient_class = memnew(Gradient);
	}
	if (!gradient_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, gradient_class);	
	return obj;
}
static JSValue gradient_class_add_point(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Gradient::add_point, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue gradient_class_remove_point(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Gradient::remove_point, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue gradient_class_set_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Gradient::set_offset, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue gradient_class_get_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&Gradient::get_offset, ctx, this_val, argc, argv);
};
static JSValue gradient_class_reverse(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Gradient::reverse, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue gradient_class_set_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Gradient::set_color, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue gradient_class_get_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&Gradient::get_color, ctx, this_val, argc, argv);
};
static JSValue gradient_class_sample(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&Gradient::sample, ctx, this_val, argc, argv);
};
static JSValue gradient_class_get_point_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Gradient::get_point_count, ctx, this_val, argc, argv);
};
static JSValue gradient_class_set_offsets(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Gradient::set_offsets, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue gradient_class_get_offsets(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Gradient::get_offsets, ctx, this_val, argc, argv);
};
static JSValue gradient_class_set_colors(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Gradient::set_colors, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue gradient_class_get_colors(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Gradient::get_colors, ctx, this_val, argc, argv);
};
static JSValue gradient_class_set_interpolation_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Gradient::set_interpolation_mode, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue gradient_class_get_interpolation_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&Gradient::get_interpolation_mode, ctx, this_val, argc, argv);
};
static JSValue gradient_class_set_interpolation_color_space(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&Gradient::set_interpolation_color_space, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue gradient_class_get_interpolation_color_space(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&Gradient::get_interpolation_color_space, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry gradient_class_proto_funcs[] = {
	JS_CFUNC_DEF("add_point", 2, &gradient_class_add_point),
	JS_CFUNC_DEF("remove_point", 1, &gradient_class_remove_point),
	JS_CFUNC_DEF("set_offset", 2, &gradient_class_set_offset),
	JS_CFUNC_DEF("get_offset", 1, &gradient_class_get_offset),
	JS_CFUNC_DEF("reverse", 0, &gradient_class_reverse),
	JS_CFUNC_DEF("set_color", 2, &gradient_class_set_color),
	JS_CFUNC_DEF("get_color", 1, &gradient_class_get_color),
	JS_CFUNC_DEF("sample", 1, &gradient_class_sample),
	JS_CFUNC_DEF("get_point_count", 0, &gradient_class_get_point_count),
	JS_CFUNC_DEF("set_offsets", 1, &gradient_class_set_offsets),
	JS_CFUNC_DEF("get_offsets", 0, &gradient_class_get_offsets),
	JS_CFUNC_DEF("set_colors", 1, &gradient_class_set_colors),
	JS_CFUNC_DEF("get_colors", 0, &gradient_class_get_colors),
	JS_CFUNC_DEF("set_interpolation_mode", 1, &gradient_class_set_interpolation_mode),
	JS_CFUNC_DEF("get_interpolation_mode", 0, &gradient_class_get_interpolation_mode),
	JS_CFUNC_DEF("set_interpolation_color_space", 1, &gradient_class_set_interpolation_color_space),
	JS_CFUNC_DEF("get_interpolation_color_space", 0, &gradient_class_get_interpolation_color_space),
};

void define_gradient_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "interpolation_mode"),
        JS_NewCFunction(ctx, gradient_class_get_interpolation_mode, "get_interpolation_mode", 0),
        JS_NewCFunction(ctx, gradient_class_set_interpolation_mode, "set_interpolation_mode", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "interpolation_color_space"),
        JS_NewCFunction(ctx, gradient_class_get_interpolation_color_space, "get_interpolation_color_space", 0),
        JS_NewCFunction(ctx, gradient_class_set_interpolation_color_space, "set_interpolation_color_space", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "offsets"),
        JS_NewCFunction(ctx, gradient_class_get_offsets, "get_offsets", 0),
        JS_NewCFunction(ctx, gradient_class_set_offsets, "set_offsets", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "colors"),
        JS_NewCFunction(ctx, gradient_class_get_colors, "get_colors", 0),
        JS_NewCFunction(ctx, gradient_class_set_colors, "set_colors", 1),
        JS_PROP_GETSET
    );
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
	JSValue InterpolationMode_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, InterpolationMode_obj, "GRADIENT_INTERPOLATE_LINEAR", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, InterpolationMode_obj, "GRADIENT_INTERPOLATE_CONSTANT", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, InterpolationMode_obj, "GRADIENT_INTERPOLATE_CUBIC", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, proto, "InterpolationMode", InterpolationMode_obj);
	JSValue ColorSpace_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, ColorSpace_obj, "GRADIENT_COLOR_SPACE_SRGB", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, ColorSpace_obj, "GRADIENT_COLOR_SPACE_LINEAR_SRGB", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, ColorSpace_obj, "GRADIENT_COLOR_SPACE_OKLAB", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, proto, "ColorSpace", ColorSpace_obj);
}

static int js_gradient_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&Gradient::__class_id);
	classes["Gradient"] = Gradient::__class_id;
	class_id_list.insert(Gradient::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), Gradient::__class_id, &gradient_class_def);

	JSValue proto = JS_NewObjectClass(ctx, Gradient::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Gradient::__class_id, proto);

	define_gradient_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, gradient_class_proto_funcs, _countof(gradient_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, gradient_class_constructor, "Gradient", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "Gradient", ctor);

	return 0;
}

JSModuleDef *_js_init_gradient_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/resource';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_gradient_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Gradient");
	return m;
}

JSModuleDef *js_init_gradient_module(JSContext *ctx) {
	return _js_init_gradient_module(ctx, "@godot/classes/gradient");
}

void register_gradient() {
	Gradient::__init_js_class_id();
	js_init_gradient_module(ctx);
}