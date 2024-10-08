
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/light_occluder2d.hpp>
#include <godot_cpp/classes/occluder_polygon2d.hpp>
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void light_occluder2d_class_finalizer(JSRuntime *rt, JSValue val) {
	LightOccluder2D *light_occluder2d = static_cast<LightOccluder2D *>(JS_GetOpaque(val, LightOccluder2D::__class_id));
	if (light_occluder2d)
		LightOccluder2D::free(nullptr, light_occluder2d);
}

static JSClassDef light_occluder2d_class_def = {
	"LightOccluder2D",
	.finalizer = light_occluder2d_class_finalizer
};

static JSValue light_occluder2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	LightOccluder2D *light_occluder2d_class;
	JSValue obj = JS_NewObjectClass(ctx, LightOccluder2D::__class_id);
	if (JS_IsException(obj))
		return obj;
	light_occluder2d_class = memnew(LightOccluder2D);
	if (!light_occluder2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, light_occluder2d_class);
	return obj;
}
static JSValue light_occluder2d_class_set_occluder_polygon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&LightOccluder2D::set_occluder_polygon, LightOccluder2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue light_occluder2d_class_get_occluder_polygon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LightOccluder2D::get_occluder_polygon, LightOccluder2D::__class_id, ctx, this_val, argv);
};
static JSValue light_occluder2d_class_set_occluder_light_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&LightOccluder2D::set_occluder_light_mask, LightOccluder2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue light_occluder2d_class_get_occluder_light_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LightOccluder2D::get_occluder_light_mask, LightOccluder2D::__class_id, ctx, this_val, argv);
};
static JSValue light_occluder2d_class_set_as_sdf_collision(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&LightOccluder2D::set_as_sdf_collision, LightOccluder2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue light_occluder2d_class_is_set_as_sdf_collision(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LightOccluder2D::is_set_as_sdf_collision, LightOccluder2D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry light_occluder2d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_occluder_polygon", 1, &light_occluder2d_class_set_occluder_polygon),
	JS_CFUNC_DEF("get_occluder_polygon", 0, &light_occluder2d_class_get_occluder_polygon),
	JS_CFUNC_DEF("set_occluder_light_mask", 1, &light_occluder2d_class_set_occluder_light_mask),
	JS_CFUNC_DEF("get_occluder_light_mask", 0, &light_occluder2d_class_get_occluder_light_mask),
	JS_CFUNC_DEF("set_as_sdf_collision", 1, &light_occluder2d_class_set_as_sdf_collision),
	JS_CFUNC_DEF("is_set_as_sdf_collision", 0, &light_occluder2d_class_is_set_as_sdf_collision),
};

static int js_light_occluder2d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&LightOccluder2D::__class_id);
	classes["LightOccluder2D"] = LightOccluder2D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), LightOccluder2D::__class_id, &light_occluder2d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Node2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, LightOccluder2D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, light_occluder2d_class_proto_funcs, _countof(light_occluder2d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, light_occluder2d_class_constructor, "LightOccluder2D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "LightOccluder2D", ctor);

	return 0;
}

JSModuleDef *_js_init_light_occluder2d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_light_occluder2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "LightOccluder2D");
	return m;
}

JSModuleDef *js_init_light_occluder2d_module(JSContext *ctx) {
	return _js_init_light_occluder2d_module(ctx, "godot/classes/light_occluder2d");
}

void register_light_occluder2d() {
	js_init_light_occluder2d_module(ctx);
}