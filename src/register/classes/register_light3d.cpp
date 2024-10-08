
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/light3d.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/classes/visual_instance3d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void light3d_class_finalizer(JSRuntime *rt, JSValue val) {
	Light3D *light3d = static_cast<Light3D *>(JS_GetOpaque(val, Light3D::__class_id));
	if (light3d)
		Light3D::free(nullptr, light3d);
}

static JSClassDef light3d_class_def = {
	"Light3D",
	.finalizer = light3d_class_finalizer
};

static JSValue light3d_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	Light3D *light3d_class;
	JSValue obj = JS_NewObjectClass(ctx, Light3D::__class_id);
	if (JS_IsException(obj))
		return obj;
	light3d_class = memnew(Light3D);
	if (!light3d_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, light3d_class);
	return obj;
}
static JSValue light3d_class_set_editor_only(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Light3D::set_editor_only, Light3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue light3d_class_is_editor_only(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Light3D::is_editor_only, Light3D::__class_id, ctx, this_val, argv);
};
static JSValue light3d_class_set_param(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Light3D::set_param, Light3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue light3d_class_get_param(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Light3D::get_param, Light3D::__class_id, ctx, this_val, argv);
};
static JSValue light3d_class_set_shadow(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Light3D::set_shadow, Light3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue light3d_class_has_shadow(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Light3D::has_shadow, Light3D::__class_id, ctx, this_val, argv);
};
static JSValue light3d_class_set_negative(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Light3D::set_negative, Light3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue light3d_class_is_negative(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Light3D::is_negative, Light3D::__class_id, ctx, this_val, argv);
};
static JSValue light3d_class_set_cull_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Light3D::set_cull_mask, Light3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue light3d_class_get_cull_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Light3D::get_cull_mask, Light3D::__class_id, ctx, this_val, argv);
};
static JSValue light3d_class_set_enable_distance_fade(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Light3D::set_enable_distance_fade, Light3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue light3d_class_is_distance_fade_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Light3D::is_distance_fade_enabled, Light3D::__class_id, ctx, this_val, argv);
};
static JSValue light3d_class_set_distance_fade_begin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Light3D::set_distance_fade_begin, Light3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue light3d_class_get_distance_fade_begin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Light3D::get_distance_fade_begin, Light3D::__class_id, ctx, this_val, argv);
};
static JSValue light3d_class_set_distance_fade_shadow(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Light3D::set_distance_fade_shadow, Light3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue light3d_class_get_distance_fade_shadow(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Light3D::get_distance_fade_shadow, Light3D::__class_id, ctx, this_val, argv);
};
static JSValue light3d_class_set_distance_fade_length(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Light3D::set_distance_fade_length, Light3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue light3d_class_get_distance_fade_length(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Light3D::get_distance_fade_length, Light3D::__class_id, ctx, this_val, argv);
};
static JSValue light3d_class_set_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Light3D::set_color, Light3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue light3d_class_get_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Light3D::get_color, Light3D::__class_id, ctx, this_val, argv);
};
static JSValue light3d_class_set_shadow_reverse_cull_face(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Light3D::set_shadow_reverse_cull_face, Light3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue light3d_class_get_shadow_reverse_cull_face(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Light3D::get_shadow_reverse_cull_face, Light3D::__class_id, ctx, this_val, argv);
};
static JSValue light3d_class_set_bake_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Light3D::set_bake_mode, Light3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue light3d_class_get_bake_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Light3D::get_bake_mode, Light3D::__class_id, ctx, this_val, argv);
};
static JSValue light3d_class_set_projector(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Light3D::set_projector, Light3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue light3d_class_get_projector(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Light3D::get_projector, Light3D::__class_id, ctx, this_val, argv);
};
static JSValue light3d_class_set_temperature(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Light3D::set_temperature, Light3D::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue light3d_class_get_temperature(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Light3D::get_temperature, Light3D::__class_id, ctx, this_val, argv);
};
static JSValue light3d_class_get_correlated_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Light3D::get_correlated_color, Light3D::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry light3d_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_editor_only", 1, &light3d_class_set_editor_only),
	JS_CFUNC_DEF("is_editor_only", 0, &light3d_class_is_editor_only),
	JS_CFUNC_DEF("set_param", 2, &light3d_class_set_param),
	JS_CFUNC_DEF("get_param", 1, &light3d_class_get_param),
	JS_CFUNC_DEF("set_shadow", 1, &light3d_class_set_shadow),
	JS_CFUNC_DEF("has_shadow", 0, &light3d_class_has_shadow),
	JS_CFUNC_DEF("set_negative", 1, &light3d_class_set_negative),
	JS_CFUNC_DEF("is_negative", 0, &light3d_class_is_negative),
	JS_CFUNC_DEF("set_cull_mask", 1, &light3d_class_set_cull_mask),
	JS_CFUNC_DEF("get_cull_mask", 0, &light3d_class_get_cull_mask),
	JS_CFUNC_DEF("set_enable_distance_fade", 1, &light3d_class_set_enable_distance_fade),
	JS_CFUNC_DEF("is_distance_fade_enabled", 0, &light3d_class_is_distance_fade_enabled),
	JS_CFUNC_DEF("set_distance_fade_begin", 1, &light3d_class_set_distance_fade_begin),
	JS_CFUNC_DEF("get_distance_fade_begin", 0, &light3d_class_get_distance_fade_begin),
	JS_CFUNC_DEF("set_distance_fade_shadow", 1, &light3d_class_set_distance_fade_shadow),
	JS_CFUNC_DEF("get_distance_fade_shadow", 0, &light3d_class_get_distance_fade_shadow),
	JS_CFUNC_DEF("set_distance_fade_length", 1, &light3d_class_set_distance_fade_length),
	JS_CFUNC_DEF("get_distance_fade_length", 0, &light3d_class_get_distance_fade_length),
	JS_CFUNC_DEF("set_color", 1, &light3d_class_set_color),
	JS_CFUNC_DEF("get_color", 0, &light3d_class_get_color),
	JS_CFUNC_DEF("set_shadow_reverse_cull_face", 1, &light3d_class_set_shadow_reverse_cull_face),
	JS_CFUNC_DEF("get_shadow_reverse_cull_face", 0, &light3d_class_get_shadow_reverse_cull_face),
	JS_CFUNC_DEF("set_bake_mode", 1, &light3d_class_set_bake_mode),
	JS_CFUNC_DEF("get_bake_mode", 0, &light3d_class_get_bake_mode),
	JS_CFUNC_DEF("set_projector", 1, &light3d_class_set_projector),
	JS_CFUNC_DEF("get_projector", 0, &light3d_class_get_projector),
	JS_CFUNC_DEF("set_temperature", 1, &light3d_class_set_temperature),
	JS_CFUNC_DEF("get_temperature", 0, &light3d_class_get_temperature),
	JS_CFUNC_DEF("get_correlated_color", 0, &light3d_class_get_correlated_color),
};

static int js_light3d_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&Light3D::__class_id);
	classes["Light3D"] = Light3D::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), Light3D::__class_id, &light3d_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, VisualInstance3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Light3D::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, light3d_class_proto_funcs, _countof(light3d_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, light3d_class_constructor, "Light3D", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "Light3D", ctor);

	return 0;
}

JSModuleDef *_js_init_light3d_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_light3d_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Light3D");
	return m;
}

JSModuleDef *js_init_light3d_module(JSContext *ctx) {
	return _js_init_light3d_module(ctx, "godot/classes/light3d");
}

void register_light3d() {
	js_init_light3d_module(ctx);
}