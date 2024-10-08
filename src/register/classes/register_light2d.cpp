
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/light2d.hpp>
#include <godot_cpp/classes/node2d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void light2d_class_finalizer(JSRuntime *rt, JSValue val) {
	Light2D *light2d = static_cast<Light2D *>(JS_GetOpaque(val, Light2D::__class_id));
	if (light2d)
		Light2D::free(nullptr, light2d);
}

static JSClassDef light2d_class_def = {
	"Light2D",
	.finalizer = light2d_class_finalizer
};

static JSValue light2d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	Light2D *light2d_class;
	JSValue obj = JS_NewObjectClass(ctx, Light2D::__class_id);
	if (JS_IsException(obj))
		return obj;
	light2d_class = memnew(Light2D);
	if (!light2d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, light2d_class);
	return obj;
}
static JSValue light2d_class_set_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Light2D::set_enabled, Light2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue light2d_class_is_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Light2D::is_enabled, Light2D::__class_id, ctx, this_val, argv);
};
static JSValue light2d_class_set_editor_only(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Light2D::set_editor_only, Light2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue light2d_class_is_editor_only(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Light2D::is_editor_only, Light2D::__class_id, ctx, this_val, argv);
};
static JSValue light2d_class_set_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Light2D::set_color, Light2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue light2d_class_get_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Light2D::get_color, Light2D::__class_id, ctx, this_val, argv);
};
static JSValue light2d_class_set_energy(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Light2D::set_energy, Light2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue light2d_class_get_energy(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Light2D::get_energy, Light2D::__class_id, ctx, this_val, argv);
};
static JSValue light2d_class_set_z_range_min(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Light2D::set_z_range_min, Light2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue light2d_class_get_z_range_min(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Light2D::get_z_range_min, Light2D::__class_id, ctx, this_val, argv);
};
static JSValue light2d_class_set_z_range_max(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Light2D::set_z_range_max, Light2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue light2d_class_get_z_range_max(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Light2D::get_z_range_max, Light2D::__class_id, ctx, this_val, argv);
};
static JSValue light2d_class_set_layer_range_min(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Light2D::set_layer_range_min, Light2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue light2d_class_get_layer_range_min(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Light2D::get_layer_range_min, Light2D::__class_id, ctx, this_val, argv);
};
static JSValue light2d_class_set_layer_range_max(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Light2D::set_layer_range_max, Light2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue light2d_class_get_layer_range_max(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Light2D::get_layer_range_max, Light2D::__class_id, ctx, this_val, argv);
};
static JSValue light2d_class_set_item_cull_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Light2D::set_item_cull_mask, Light2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue light2d_class_get_item_cull_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Light2D::get_item_cull_mask, Light2D::__class_id, ctx, this_val, argv);
};
static JSValue light2d_class_set_item_shadow_cull_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Light2D::set_item_shadow_cull_mask, Light2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue light2d_class_get_item_shadow_cull_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Light2D::get_item_shadow_cull_mask, Light2D::__class_id, ctx, this_val, argv);
};
static JSValue light2d_class_set_shadow_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Light2D::set_shadow_enabled, Light2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue light2d_class_is_shadow_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Light2D::is_shadow_enabled, Light2D::__class_id, ctx, this_val, argv);
};
static JSValue light2d_class_set_shadow_smooth(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Light2D::set_shadow_smooth, Light2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue light2d_class_get_shadow_smooth(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Light2D::get_shadow_smooth, Light2D::__class_id, ctx, this_val, argv);
};
static JSValue light2d_class_set_shadow_filter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Light2D::set_shadow_filter, Light2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue light2d_class_get_shadow_filter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Light2D::get_shadow_filter, Light2D::__class_id, ctx, this_val, argv);
};
static JSValue light2d_class_set_shadow_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Light2D::set_shadow_color, Light2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue light2d_class_get_shadow_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Light2D::get_shadow_color, Light2D::__class_id, ctx, this_val, argv);
};
static JSValue light2d_class_set_blend_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Light2D::set_blend_mode, Light2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue light2d_class_get_blend_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Light2D::get_blend_mode, Light2D::__class_id, ctx, this_val, argv);
};
static JSValue light2d_class_set_height(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Light2D::set_height, Light2D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue light2d_class_get_height(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Light2D::get_height, Light2D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry light2d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_enabled", 1, &light2d_class_set_enabled),
	JS_CFUNC_DEF("is_enabled", 0, &light2d_class_is_enabled),
	JS_CFUNC_DEF("set_editor_only", 1, &light2d_class_set_editor_only),
	JS_CFUNC_DEF("is_editor_only", 0, &light2d_class_is_editor_only),
	JS_CFUNC_DEF("set_color", 1, &light2d_class_set_color),
	JS_CFUNC_DEF("get_color", 0, &light2d_class_get_color),
	JS_CFUNC_DEF("set_energy", 1, &light2d_class_set_energy),
	JS_CFUNC_DEF("get_energy", 0, &light2d_class_get_energy),
	JS_CFUNC_DEF("set_z_range_min", 1, &light2d_class_set_z_range_min),
	JS_CFUNC_DEF("get_z_range_min", 0, &light2d_class_get_z_range_min),
	JS_CFUNC_DEF("set_z_range_max", 1, &light2d_class_set_z_range_max),
	JS_CFUNC_DEF("get_z_range_max", 0, &light2d_class_get_z_range_max),
	JS_CFUNC_DEF("set_layer_range_min", 1, &light2d_class_set_layer_range_min),
	JS_CFUNC_DEF("get_layer_range_min", 0, &light2d_class_get_layer_range_min),
	JS_CFUNC_DEF("set_layer_range_max", 1, &light2d_class_set_layer_range_max),
	JS_CFUNC_DEF("get_layer_range_max", 0, &light2d_class_get_layer_range_max),
	JS_CFUNC_DEF("set_item_cull_mask", 1, &light2d_class_set_item_cull_mask),
	JS_CFUNC_DEF("get_item_cull_mask", 0, &light2d_class_get_item_cull_mask),
	JS_CFUNC_DEF("set_item_shadow_cull_mask", 1, &light2d_class_set_item_shadow_cull_mask),
	JS_CFUNC_DEF("get_item_shadow_cull_mask", 0, &light2d_class_get_item_shadow_cull_mask),
	JS_CFUNC_DEF("set_shadow_enabled", 1, &light2d_class_set_shadow_enabled),
	JS_CFUNC_DEF("is_shadow_enabled", 0, &light2d_class_is_shadow_enabled),
	JS_CFUNC_DEF("set_shadow_smooth", 1, &light2d_class_set_shadow_smooth),
	JS_CFUNC_DEF("get_shadow_smooth", 0, &light2d_class_get_shadow_smooth),
	JS_CFUNC_DEF("set_shadow_filter", 1, &light2d_class_set_shadow_filter),
	JS_CFUNC_DEF("get_shadow_filter", 0, &light2d_class_get_shadow_filter),
	JS_CFUNC_DEF("set_shadow_color", 1, &light2d_class_set_shadow_color),
	JS_CFUNC_DEF("get_shadow_color", 0, &light2d_class_get_shadow_color),
	JS_CFUNC_DEF("set_blend_mode", 1, &light2d_class_set_blend_mode),
	JS_CFUNC_DEF("get_blend_mode", 0, &light2d_class_get_blend_mode),
	JS_CFUNC_DEF("set_height", 1, &light2d_class_set_height),
	JS_CFUNC_DEF("get_height", 0, &light2d_class_get_height),
};

static int js_light2d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&Light2D::__class_id);
	classes["Light2D"] = Light2D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), Light2D::__class_id, &light2d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Node2D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Light2D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, light2d_class_proto_funcs, _countof(light2d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, light2d_class_constructor, "Light2D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "Light2D", ctor);

	return 0;
}

JSModuleDef *_js_init_light2d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_light2d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Light2D");
	return m;
}

JSModuleDef *js_init_light2d_module(JSContext *ctx) {
	return _js_init_light2d_module(ctx, "godot/classes/light2d");
}

void register_light2d() {
	js_init_light2d_module(ctx);
}