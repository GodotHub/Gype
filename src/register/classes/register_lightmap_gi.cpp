
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/camera_attributes.hpp>
#include <godot_cpp/classes/lightmap_gi.hpp>
#include <godot_cpp/classes/lightmap_gi_data.hpp>
#include <godot_cpp/classes/sky.hpp>
#include <godot_cpp/classes/visual_instance3d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void lightmap_gi_class_finalizer(JSRuntime *rt, JSValue val) {
	LightmapGI *lightmap_gi = static_cast<LightmapGI *>(JS_GetOpaque(val, LightmapGI::__class_id));
	if (lightmap_gi)
		LightmapGI::free(nullptr, lightmap_gi);
}

static JSClassDef lightmap_gi_class_def = {
	"LightmapGI",
	.finalizer = lightmap_gi_class_finalizer
};

static JSValue lightmap_gi_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	LightmapGI *lightmap_gi_class;
	JSValue obj = JS_NewObjectClass(ctx, LightmapGI::__class_id);
	if (JS_IsException(obj))
		return obj;
	lightmap_gi_class = memnew(LightmapGI);
	if (!lightmap_gi_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, lightmap_gi_class);
	return obj;
}
static JSValue lightmap_gi_class_set_light_data(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&LightmapGI::set_light_data, LightmapGI::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue lightmap_gi_class_get_light_data(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LightmapGI::get_light_data, LightmapGI::__class_id, ctx, this_val, argv);
};
static JSValue lightmap_gi_class_set_bake_quality(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&LightmapGI::set_bake_quality, LightmapGI::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue lightmap_gi_class_get_bake_quality(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LightmapGI::get_bake_quality, LightmapGI::__class_id, ctx, this_val, argv);
};
static JSValue lightmap_gi_class_set_bounces(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&LightmapGI::set_bounces, LightmapGI::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue lightmap_gi_class_get_bounces(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LightmapGI::get_bounces, LightmapGI::__class_id, ctx, this_val, argv);
};
static JSValue lightmap_gi_class_set_bounce_indirect_energy(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&LightmapGI::set_bounce_indirect_energy, LightmapGI::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue lightmap_gi_class_get_bounce_indirect_energy(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LightmapGI::get_bounce_indirect_energy, LightmapGI::__class_id, ctx, this_val, argv);
};
static JSValue lightmap_gi_class_set_generate_probes(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&LightmapGI::set_generate_probes, LightmapGI::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue lightmap_gi_class_get_generate_probes(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LightmapGI::get_generate_probes, LightmapGI::__class_id, ctx, this_val, argv);
};
static JSValue lightmap_gi_class_set_bias(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&LightmapGI::set_bias, LightmapGI::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue lightmap_gi_class_get_bias(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LightmapGI::get_bias, LightmapGI::__class_id, ctx, this_val, argv);
};
static JSValue lightmap_gi_class_set_environment_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&LightmapGI::set_environment_mode, LightmapGI::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue lightmap_gi_class_get_environment_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LightmapGI::get_environment_mode, LightmapGI::__class_id, ctx, this_val, argv);
};
static JSValue lightmap_gi_class_set_environment_custom_sky(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&LightmapGI::set_environment_custom_sky, LightmapGI::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue lightmap_gi_class_get_environment_custom_sky(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LightmapGI::get_environment_custom_sky, LightmapGI::__class_id, ctx, this_val, argv);
};
static JSValue lightmap_gi_class_set_environment_custom_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&LightmapGI::set_environment_custom_color, LightmapGI::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue lightmap_gi_class_get_environment_custom_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LightmapGI::get_environment_custom_color, LightmapGI::__class_id, ctx, this_val, argv);
};
static JSValue lightmap_gi_class_set_environment_custom_energy(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&LightmapGI::set_environment_custom_energy, LightmapGI::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue lightmap_gi_class_get_environment_custom_energy(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LightmapGI::get_environment_custom_energy, LightmapGI::__class_id, ctx, this_val, argv);
};
static JSValue lightmap_gi_class_set_texel_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&LightmapGI::set_texel_scale, LightmapGI::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue lightmap_gi_class_get_texel_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LightmapGI::get_texel_scale, LightmapGI::__class_id, ctx, this_val, argv);
};
static JSValue lightmap_gi_class_set_max_texture_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&LightmapGI::set_max_texture_size, LightmapGI::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue lightmap_gi_class_get_max_texture_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LightmapGI::get_max_texture_size, LightmapGI::__class_id, ctx, this_val, argv);
};
static JSValue lightmap_gi_class_set_use_denoiser(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&LightmapGI::set_use_denoiser, LightmapGI::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue lightmap_gi_class_is_using_denoiser(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LightmapGI::is_using_denoiser, LightmapGI::__class_id, ctx, this_val, argv);
};
static JSValue lightmap_gi_class_set_denoiser_strength(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&LightmapGI::set_denoiser_strength, LightmapGI::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue lightmap_gi_class_get_denoiser_strength(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LightmapGI::get_denoiser_strength, LightmapGI::__class_id, ctx, this_val, argv);
};
static JSValue lightmap_gi_class_set_denoiser_range(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&LightmapGI::set_denoiser_range, LightmapGI::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue lightmap_gi_class_get_denoiser_range(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LightmapGI::get_denoiser_range, LightmapGI::__class_id, ctx, this_val, argv);
};
static JSValue lightmap_gi_class_set_interior(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&LightmapGI::set_interior, LightmapGI::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue lightmap_gi_class_is_interior(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LightmapGI::is_interior, LightmapGI::__class_id, ctx, this_val, argv);
};
static JSValue lightmap_gi_class_set_directional(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&LightmapGI::set_directional, LightmapGI::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue lightmap_gi_class_is_directional(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LightmapGI::is_directional, LightmapGI::__class_id, ctx, this_val, argv);
};
static JSValue lightmap_gi_class_set_use_texture_for_bounces(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&LightmapGI::set_use_texture_for_bounces, LightmapGI::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue lightmap_gi_class_is_using_texture_for_bounces(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LightmapGI::is_using_texture_for_bounces, LightmapGI::__class_id, ctx, this_val, argv);
};
static JSValue lightmap_gi_class_set_camera_attributes(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&LightmapGI::set_camera_attributes, LightmapGI::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue lightmap_gi_class_get_camera_attributes(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LightmapGI::get_camera_attributes, LightmapGI::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry lightmap_gi_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_light_data", 1, &lightmap_gi_class_set_light_data),
	JS_CFUNC_DEF("get_light_data", 0, &lightmap_gi_class_get_light_data),
	JS_CFUNC_DEF("set_bake_quality", 1, &lightmap_gi_class_set_bake_quality),
	JS_CFUNC_DEF("get_bake_quality", 0, &lightmap_gi_class_get_bake_quality),
	JS_CFUNC_DEF("set_bounces", 1, &lightmap_gi_class_set_bounces),
	JS_CFUNC_DEF("get_bounces", 0, &lightmap_gi_class_get_bounces),
	JS_CFUNC_DEF("set_bounce_indirect_energy", 1, &lightmap_gi_class_set_bounce_indirect_energy),
	JS_CFUNC_DEF("get_bounce_indirect_energy", 0, &lightmap_gi_class_get_bounce_indirect_energy),
	JS_CFUNC_DEF("set_generate_probes", 1, &lightmap_gi_class_set_generate_probes),
	JS_CFUNC_DEF("get_generate_probes", 0, &lightmap_gi_class_get_generate_probes),
	JS_CFUNC_DEF("set_bias", 1, &lightmap_gi_class_set_bias),
	JS_CFUNC_DEF("get_bias", 0, &lightmap_gi_class_get_bias),
	JS_CFUNC_DEF("set_environment_mode", 1, &lightmap_gi_class_set_environment_mode),
	JS_CFUNC_DEF("get_environment_mode", 0, &lightmap_gi_class_get_environment_mode),
	JS_CFUNC_DEF("set_environment_custom_sky", 1, &lightmap_gi_class_set_environment_custom_sky),
	JS_CFUNC_DEF("get_environment_custom_sky", 0, &lightmap_gi_class_get_environment_custom_sky),
	JS_CFUNC_DEF("set_environment_custom_color", 1, &lightmap_gi_class_set_environment_custom_color),
	JS_CFUNC_DEF("get_environment_custom_color", 0, &lightmap_gi_class_get_environment_custom_color),
	JS_CFUNC_DEF("set_environment_custom_energy", 1, &lightmap_gi_class_set_environment_custom_energy),
	JS_CFUNC_DEF("get_environment_custom_energy", 0, &lightmap_gi_class_get_environment_custom_energy),
	JS_CFUNC_DEF("set_texel_scale", 1, &lightmap_gi_class_set_texel_scale),
	JS_CFUNC_DEF("get_texel_scale", 0, &lightmap_gi_class_get_texel_scale),
	JS_CFUNC_DEF("set_max_texture_size", 1, &lightmap_gi_class_set_max_texture_size),
	JS_CFUNC_DEF("get_max_texture_size", 0, &lightmap_gi_class_get_max_texture_size),
	JS_CFUNC_DEF("set_use_denoiser", 1, &lightmap_gi_class_set_use_denoiser),
	JS_CFUNC_DEF("is_using_denoiser", 0, &lightmap_gi_class_is_using_denoiser),
	JS_CFUNC_DEF("set_denoiser_strength", 1, &lightmap_gi_class_set_denoiser_strength),
	JS_CFUNC_DEF("get_denoiser_strength", 0, &lightmap_gi_class_get_denoiser_strength),
	JS_CFUNC_DEF("set_denoiser_range", 1, &lightmap_gi_class_set_denoiser_range),
	JS_CFUNC_DEF("get_denoiser_range", 0, &lightmap_gi_class_get_denoiser_range),
	JS_CFUNC_DEF("set_interior", 1, &lightmap_gi_class_set_interior),
	JS_CFUNC_DEF("is_interior", 0, &lightmap_gi_class_is_interior),
	JS_CFUNC_DEF("set_directional", 1, &lightmap_gi_class_set_directional),
	JS_CFUNC_DEF("is_directional", 0, &lightmap_gi_class_is_directional),
	JS_CFUNC_DEF("set_use_texture_for_bounces", 1, &lightmap_gi_class_set_use_texture_for_bounces),
	JS_CFUNC_DEF("is_using_texture_for_bounces", 0, &lightmap_gi_class_is_using_texture_for_bounces),
	JS_CFUNC_DEF("set_camera_attributes", 1, &lightmap_gi_class_set_camera_attributes),
	JS_CFUNC_DEF("get_camera_attributes", 0, &lightmap_gi_class_get_camera_attributes),
};

static int js_lightmap_gi_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&LightmapGI::__class_id);
	classes["LightmapGI"] = LightmapGI::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), LightmapGI::__class_id, &lightmap_gi_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, VisualInstance3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, LightmapGI::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, lightmap_gi_class_proto_funcs, _countof(lightmap_gi_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, lightmap_gi_class_constructor, "LightmapGI", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "LightmapGI", ctor);

	return 0;
}

JSModuleDef *_js_init_lightmap_gi_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_lightmap_gi_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "LightmapGI");
	return m;
}

JSModuleDef *js_init_lightmap_gi_module(JSContext *ctx) {
	return _js_init_lightmap_gi_module(ctx, "godot/classes/lightmap_gi");
}

void register_lightmap_gi() {
	js_init_lightmap_gi_module(ctx);
}