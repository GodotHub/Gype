
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/separation_ray_shape2d.hpp>
#include <godot_cpp/classes/shape2d.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void separation_ray_shape2d_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef separation_ray_shape2d_class_def = {
	"SeparationRayShape2D",
	.finalizer = separation_ray_shape2d_class_finalizer
};

static JSValue separation_ray_shape2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, SeparationRayShape2D::__class_id);
	if (JS_IsException(obj))
		return obj;

	SeparationRayShape2D *separation_ray_shape2d_class;
	if (argc == 1) 
		separation_ray_shape2d_class = static_cast<SeparationRayShape2D *>(Variant(*argv).operator Object *());
	else 
		separation_ray_shape2d_class = memnew(SeparationRayShape2D);
	if (!separation_ray_shape2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, separation_ray_shape2d_class);
	return obj;
}
static JSValue separation_ray_shape2d_class_set_length(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&SeparationRayShape2D::set_length, ctx, this_val, argc, argv);
};
static JSValue separation_ray_shape2d_class_get_length(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&SeparationRayShape2D::get_length, ctx, this_val, argc, argv);
};
static JSValue separation_ray_shape2d_class_set_slide_on_slope(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&SeparationRayShape2D::set_slide_on_slope, ctx, this_val, argc, argv);
};
static JSValue separation_ray_shape2d_class_get_slide_on_slope(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&SeparationRayShape2D::get_slide_on_slope, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry separation_ray_shape2d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_length", 1, &separation_ray_shape2d_class_set_length),
	JS_CFUNC_DEF("get_length", 0, &separation_ray_shape2d_class_get_length),
	JS_CFUNC_DEF("set_slide_on_slope", 1, &separation_ray_shape2d_class_set_slide_on_slope),
	JS_CFUNC_DEF("get_slide_on_slope", 0, &separation_ray_shape2d_class_get_slide_on_slope),
};

static void define_separation_ray_shape2d_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "length"),
        JS_NewCFunction(ctx, separation_ray_shape2d_class_get_length, "get_length", 0),
        JS_NewCFunction(ctx, separation_ray_shape2d_class_set_length, "set_length", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "slide_on_slope"),
        JS_NewCFunction(ctx, separation_ray_shape2d_class_get_slide_on_slope, "get_slide_on_slope", 0),
        JS_NewCFunction(ctx, separation_ray_shape2d_class_set_slide_on_slope, "set_slide_on_slope", 1),
        JS_PROP_GETSET
    );
	
}

static void define_separation_ray_shape2d_enum(JSContext *ctx, JSValue proto) {
}

static int js_separation_ray_shape2d_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["SeparationRayShape2D"] = SeparationRayShape2D::__class_id;
	class_id_list.insert(SeparationRayShape2D::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), SeparationRayShape2D::__class_id, &separation_ray_shape2d_class_def);

	JSValue proto = JS_NewObjectClass(ctx, SeparationRayShape2D::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Shape2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, SeparationRayShape2D::__class_id, proto);

	define_separation_ray_shape2d_property(ctx, proto);
	define_separation_ray_shape2d_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, separation_ray_shape2d_class_proto_funcs, _countof(separation_ray_shape2d_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, separation_ray_shape2d_class_constructor, "SeparationRayShape2D", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "SeparationRayShape2D", ctor);

	return 0;
}

JSModuleDef *_js_init_separation_ray_shape2d_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/shape2d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_separation_ray_shape2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "SeparationRayShape2D");
	return m;
}

JSModuleDef *js_init_separation_ray_shape2d_module(JSContext *ctx) {
	return _js_init_separation_ray_shape2d_module(ctx, "@godot/classes/separation_ray_shape2d");
}

void register_separation_ray_shape2d() {
	SeparationRayShape2D::__init_js_class_id();
	js_init_separation_ray_shape2d_module(ctx);
}