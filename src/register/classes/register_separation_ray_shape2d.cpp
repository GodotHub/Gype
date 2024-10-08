
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/separation_ray_shape2d.hpp>
#include <godot_cpp/classes/shape2d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void separation_ray_shape2d_class_finalizer(JSRuntime *rt, JSValue val) {
	SeparationRayShape2D *separation_ray_shape2d = static_cast<SeparationRayShape2D *>(JS_GetOpaque(val, SeparationRayShape2D::__class_id));
	if (separation_ray_shape2d)
		SeparationRayShape2D::free(nullptr, separation_ray_shape2d);
}

static JSClassDef separation_ray_shape2d_class_def = {
	"SeparationRayShape2D",
	.finalizer = separation_ray_shape2d_class_finalizer
};

static JSValue separation_ray_shape2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	SeparationRayShape2D *separation_ray_shape2d_class;
	JSValue obj = JS_NewObjectClass(ctx, SeparationRayShape2D::__class_id);
	if (JS_IsException(obj))
		return obj;
	separation_ray_shape2d_class = memnew(SeparationRayShape2D);
	if (!separation_ray_shape2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, separation_ray_shape2d_class);
	return obj;
}
static JSValue separation_ray_shape2d_class_set_length(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SeparationRayShape2D::set_length, SeparationRayShape2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue separation_ray_shape2d_class_get_length(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SeparationRayShape2D::get_length, SeparationRayShape2D::__class_id, ctx, this_val, argv);
};
static JSValue separation_ray_shape2d_class_set_slide_on_slope(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SeparationRayShape2D::set_slide_on_slope, SeparationRayShape2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue separation_ray_shape2d_class_get_slide_on_slope(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SeparationRayShape2D::get_slide_on_slope, SeparationRayShape2D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry separation_ray_shape2d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_length", 1, &separation_ray_shape2d_class_set_length),
	JS_CFUNC_DEF("get_length", 0, &separation_ray_shape2d_class_get_length),
	JS_CFUNC_DEF("set_slide_on_slope", 1, &separation_ray_shape2d_class_set_slide_on_slope),
	JS_CFUNC_DEF("get_slide_on_slope", 0, &separation_ray_shape2d_class_get_slide_on_slope),
};

static int js_separation_ray_shape2d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&SeparationRayShape2D::__class_id);
	classes["SeparationRayShape2D"] = SeparationRayShape2D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), SeparationRayShape2D::__class_id, &separation_ray_shape2d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Shape2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, SeparationRayShape2D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, separation_ray_shape2d_class_proto_funcs, _countof(separation_ray_shape2d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, separation_ray_shape2d_class_constructor, "SeparationRayShape2D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "SeparationRayShape2D", ctor);

	return 0;
}

JSModuleDef *_js_init_separation_ray_shape2d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_separation_ray_shape2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "SeparationRayShape2D");
	return m;
}

JSModuleDef *js_init_separation_ray_shape2d_module(JSContext *ctx) {
	return _js_init_separation_ray_shape2d_module(ctx, "godot/classes/separation_ray_shape2d");
}

void register_separation_ray_shape2d() {
	js_init_separation_ray_shape2d_module(ctx);
}