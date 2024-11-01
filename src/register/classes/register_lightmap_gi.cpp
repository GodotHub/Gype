
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/camera_attributes.hpp>
#include <godot_cpp/classes/visual_instance3d.hpp>
#include <godot_cpp/classes/lightmap_gi.hpp>
#include <godot_cpp/classes/sky.hpp>
#include <godot_cpp/classes/lightmap_gi_data.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void lightmap_gi_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef lightmap_gi_class_def = {
	"LightmapGI",
	.finalizer = lightmap_gi_class_finalizer
};

static JSValue lightmap_gi_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, LightmapGI::__class_id);
	if (JS_IsException(obj))
		return obj;

	LightmapGI *lightmap_gi_class;
	if (argc == 1) 
		lightmap_gi_class = static_cast<LightmapGI *>(Variant(*argv).operator Object *());
	else 
		lightmap_gi_class = memnew(LightmapGI);
	if (!lightmap_gi_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, lightmap_gi_class);
	return obj;
}
static JSValue lightmap_gi_class_set_light_data(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&LightmapGI::set_light_data, ctx, this_val, argc, argv);
};
static JSValue lightmap_gi_class_get_light_data(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&LightmapGI::get_light_data, ctx, this_val, argc, argv);
};
static JSValue lightmap_gi_class_set_bake_quality(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&LightmapGI::set_bake_quality, ctx, this_val, argc, argv);
};
static JSValue lightmap_gi_class_get_bake_quality(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&LightmapGI::get_bake_quality, ctx, this_val, argc, argv);
};
static JSValue lightmap_gi_class_set_bounces(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&LightmapGI::set_bounces, ctx, this_val, argc, argv);
};
static JSValue lightmap_gi_class_get_bounces(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&LightmapGI::get_bounces, ctx, this_val, argc, argv);
};
static JSValue lightmap_gi_class_set_bounce_indirect_energy(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&LightmapGI::set_bounce_indirect_energy, ctx, this_val, argc, argv);
};
static JSValue lightmap_gi_class_get_bounce_indirect_energy(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&LightmapGI::get_bounce_indirect_energy, ctx, this_val, argc, argv);
};
static JSValue lightmap_gi_class_set_generate_probes(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&LightmapGI::set_generate_probes, ctx, this_val, argc, argv);
};
static JSValue lightmap_gi_class_get_generate_probes(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&LightmapGI::get_generate_probes, ctx, this_val, argc, argv);
};
static JSValue lightmap_gi_class_set_bias(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&LightmapGI::set_bias, ctx, this_val, argc, argv);
};
static JSValue lightmap_gi_class_get_bias(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&LightmapGI::get_bias, ctx, this_val, argc, argv);
};
static JSValue lightmap_gi_class_set_environment_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&LightmapGI::set_environment_mode, ctx, this_val, argc, argv);
};
static JSValue lightmap_gi_class_get_environment_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&LightmapGI::get_environment_mode, ctx, this_val, argc, argv);
};
static JSValue lightmap_gi_class_set_environment_custom_sky(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&LightmapGI::set_environment_custom_sky, ctx, this_val, argc, argv);
};
static JSValue lightmap_gi_class_get_environment_custom_sky(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&LightmapGI::get_environment_custom_sky, ctx, this_val, argc, argv);
};
static JSValue lightmap_gi_class_set_environment_custom_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&LightmapGI::set_environment_custom_color, ctx, this_val, argc, argv);
};
static JSValue lightmap_gi_class_get_environment_custom_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&LightmapGI::get_environment_custom_color, ctx, this_val, argc, argv);
};
static JSValue lightmap_gi_class_set_environment_custom_energy(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&LightmapGI::set_environment_custom_energy, ctx, this_val, argc, argv);
};
static JSValue lightmap_gi_class_get_environment_custom_energy(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&LightmapGI::get_environment_custom_energy, ctx, this_val, argc, argv);
};
static JSValue lightmap_gi_class_set_texel_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&LightmapGI::set_texel_scale, ctx, this_val, argc, argv);
};
static JSValue lightmap_gi_class_get_texel_scale(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&LightmapGI::get_texel_scale, ctx, this_val, argc, argv);
};
static JSValue lightmap_gi_class_set_max_texture_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&LightmapGI::set_max_texture_size, ctx, this_val, argc, argv);
};
static JSValue lightmap_gi_class_get_max_texture_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&LightmapGI::get_max_texture_size, ctx, this_val, argc, argv);
};
static JSValue lightmap_gi_class_set_use_denoiser(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&LightmapGI::set_use_denoiser, ctx, this_val, argc, argv);
};
static JSValue lightmap_gi_class_is_using_denoiser(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&LightmapGI::is_using_denoiser, ctx, this_val, argc, argv);
};
static JSValue lightmap_gi_class_set_denoiser_strength(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&LightmapGI::set_denoiser_strength, ctx, this_val, argc, argv);
};
static JSValue lightmap_gi_class_get_denoiser_strength(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&LightmapGI::get_denoiser_strength, ctx, this_val, argc, argv);
};
static JSValue lightmap_gi_class_set_denoiser_range(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&LightmapGI::set_denoiser_range, ctx, this_val, argc, argv);
};
static JSValue lightmap_gi_class_get_denoiser_range(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&LightmapGI::get_denoiser_range, ctx, this_val, argc, argv);
};
static JSValue lightmap_gi_class_set_interior(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&LightmapGI::set_interior, ctx, this_val, argc, argv);
};
static JSValue lightmap_gi_class_is_interior(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&LightmapGI::is_interior, ctx, this_val, argc, argv);
};
static JSValue lightmap_gi_class_set_directional(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&LightmapGI::set_directional, ctx, this_val, argc, argv);
};
static JSValue lightmap_gi_class_is_directional(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&LightmapGI::is_directional, ctx, this_val, argc, argv);
};
static JSValue lightmap_gi_class_set_use_texture_for_bounces(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&LightmapGI::set_use_texture_for_bounces, ctx, this_val, argc, argv);
};
static JSValue lightmap_gi_class_is_using_texture_for_bounces(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&LightmapGI::is_using_texture_for_bounces, ctx, this_val, argc, argv);
};
static JSValue lightmap_gi_class_set_camera_attributes(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&LightmapGI::set_camera_attributes, ctx, this_val, argc, argv);
};
static JSValue lightmap_gi_class_get_camera_attributes(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&LightmapGI::get_camera_attributes, ctx, this_val, argc, argv);
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

static void define_lightmap_gi_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "quality"),
        JS_NewCFunction(ctx, lightmap_gi_class_get_bake_quality, "get_bake_quality", 0),
        JS_NewCFunction(ctx, lightmap_gi_class_set_bake_quality, "set_bake_quality", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "bounces"),
        JS_NewCFunction(ctx, lightmap_gi_class_get_bounces, "get_bounces", 0),
        JS_NewCFunction(ctx, lightmap_gi_class_set_bounces, "set_bounces", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "bounce_indirect_energy"),
        JS_NewCFunction(ctx, lightmap_gi_class_get_bounce_indirect_energy, "get_bounce_indirect_energy", 0),
        JS_NewCFunction(ctx, lightmap_gi_class_set_bounce_indirect_energy, "set_bounce_indirect_energy", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "directional"),
        JS_NewCFunction(ctx, lightmap_gi_class_is_directional, "is_directional", 0),
        JS_NewCFunction(ctx, lightmap_gi_class_set_directional, "set_directional", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "use_texture_for_bounces"),
        JS_NewCFunction(ctx, lightmap_gi_class_is_using_texture_for_bounces, "is_using_texture_for_bounces", 0),
        JS_NewCFunction(ctx, lightmap_gi_class_set_use_texture_for_bounces, "set_use_texture_for_bounces", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "interior"),
        JS_NewCFunction(ctx, lightmap_gi_class_is_interior, "is_interior", 0),
        JS_NewCFunction(ctx, lightmap_gi_class_set_interior, "set_interior", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "use_denoiser"),
        JS_NewCFunction(ctx, lightmap_gi_class_is_using_denoiser, "is_using_denoiser", 0),
        JS_NewCFunction(ctx, lightmap_gi_class_set_use_denoiser, "set_use_denoiser", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "denoiser_strength"),
        JS_NewCFunction(ctx, lightmap_gi_class_get_denoiser_strength, "get_denoiser_strength", 0),
        JS_NewCFunction(ctx, lightmap_gi_class_set_denoiser_strength, "set_denoiser_strength", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "denoiser_range"),
        JS_NewCFunction(ctx, lightmap_gi_class_get_denoiser_range, "get_denoiser_range", 0),
        JS_NewCFunction(ctx, lightmap_gi_class_set_denoiser_range, "set_denoiser_range", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "bias"),
        JS_NewCFunction(ctx, lightmap_gi_class_get_bias, "get_bias", 0),
        JS_NewCFunction(ctx, lightmap_gi_class_set_bias, "set_bias", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "texel_scale"),
        JS_NewCFunction(ctx, lightmap_gi_class_get_texel_scale, "get_texel_scale", 0),
        JS_NewCFunction(ctx, lightmap_gi_class_set_texel_scale, "set_texel_scale", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "max_texture_size"),
        JS_NewCFunction(ctx, lightmap_gi_class_get_max_texture_size, "get_max_texture_size", 0),
        JS_NewCFunction(ctx, lightmap_gi_class_set_max_texture_size, "set_max_texture_size", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "environment_mode"),
        JS_NewCFunction(ctx, lightmap_gi_class_get_environment_mode, "get_environment_mode", 0),
        JS_NewCFunction(ctx, lightmap_gi_class_set_environment_mode, "set_environment_mode", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "environment_custom_sky"),
        JS_NewCFunction(ctx, lightmap_gi_class_get_environment_custom_sky, "get_environment_custom_sky", 0),
        JS_NewCFunction(ctx, lightmap_gi_class_set_environment_custom_sky, "set_environment_custom_sky", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "environment_custom_color"),
        JS_NewCFunction(ctx, lightmap_gi_class_get_environment_custom_color, "get_environment_custom_color", 0),
        JS_NewCFunction(ctx, lightmap_gi_class_set_environment_custom_color, "set_environment_custom_color", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "environment_custom_energy"),
        JS_NewCFunction(ctx, lightmap_gi_class_get_environment_custom_energy, "get_environment_custom_energy", 0),
        JS_NewCFunction(ctx, lightmap_gi_class_set_environment_custom_energy, "set_environment_custom_energy", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "camera_attributes"),
        JS_NewCFunction(ctx, lightmap_gi_class_get_camera_attributes, "get_camera_attributes", 0),
        JS_NewCFunction(ctx, lightmap_gi_class_set_camera_attributes, "set_camera_attributes", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "generate_probes_subdiv"),
        JS_NewCFunction(ctx, lightmap_gi_class_get_generate_probes, "get_generate_probes", 0),
        JS_NewCFunction(ctx, lightmap_gi_class_set_generate_probes, "set_generate_probes", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "light_data"),
        JS_NewCFunction(ctx, lightmap_gi_class_get_light_data, "get_light_data", 0),
        JS_NewCFunction(ctx, lightmap_gi_class_set_light_data, "set_light_data", 1),
        JS_PROP_GETSET
    );
	
}

static void define_lightmap_gi_enum(JSContext *ctx, JSValue proto) {
	JSValue BakeQuality_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, BakeQuality_obj, "BAKE_QUALITY_LOW", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, BakeQuality_obj, "BAKE_QUALITY_MEDIUM", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, BakeQuality_obj, "BAKE_QUALITY_HIGH", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, BakeQuality_obj, "BAKE_QUALITY_ULTRA", JS_NewInt64(ctx, 3));
	JS_SetPropertyStr(ctx, proto, "BakeQuality", BakeQuality_obj);
	JSValue GenerateProbes_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, GenerateProbes_obj, "GENERATE_PROBES_DISABLED", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, GenerateProbes_obj, "GENERATE_PROBES_SUBDIV_4", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, GenerateProbes_obj, "GENERATE_PROBES_SUBDIV_8", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, GenerateProbes_obj, "GENERATE_PROBES_SUBDIV_16", JS_NewInt64(ctx, 3));
	JS_SetPropertyStr(ctx, GenerateProbes_obj, "GENERATE_PROBES_SUBDIV_32", JS_NewInt64(ctx, 4));
	JS_SetPropertyStr(ctx, proto, "GenerateProbes", GenerateProbes_obj);
	JSValue BakeError_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, BakeError_obj, "BAKE_ERROR_OK", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, BakeError_obj, "BAKE_ERROR_NO_SCENE_ROOT", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, BakeError_obj, "BAKE_ERROR_FOREIGN_DATA", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, BakeError_obj, "BAKE_ERROR_NO_LIGHTMAPPER", JS_NewInt64(ctx, 3));
	JS_SetPropertyStr(ctx, BakeError_obj, "BAKE_ERROR_NO_SAVE_PATH", JS_NewInt64(ctx, 4));
	JS_SetPropertyStr(ctx, BakeError_obj, "BAKE_ERROR_NO_MESHES", JS_NewInt64(ctx, 5));
	JS_SetPropertyStr(ctx, BakeError_obj, "BAKE_ERROR_MESHES_INVALID", JS_NewInt64(ctx, 6));
	JS_SetPropertyStr(ctx, BakeError_obj, "BAKE_ERROR_CANT_CREATE_IMAGE", JS_NewInt64(ctx, 7));
	JS_SetPropertyStr(ctx, BakeError_obj, "BAKE_ERROR_USER_ABORTED", JS_NewInt64(ctx, 8));
	JS_SetPropertyStr(ctx, BakeError_obj, "BAKE_ERROR_TEXTURE_SIZE_TOO_SMALL", JS_NewInt64(ctx, 9));
	JS_SetPropertyStr(ctx, BakeError_obj, "BAKE_ERROR_LIGHTMAP_TOO_SMALL", JS_NewInt64(ctx, 10));
	JS_SetPropertyStr(ctx, BakeError_obj, "BAKE_ERROR_ATLAS_TOO_SMALL", JS_NewInt64(ctx, 11));
	JS_SetPropertyStr(ctx, proto, "BakeError", BakeError_obj);
	JSValue EnvironmentMode_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, EnvironmentMode_obj, "ENVIRONMENT_MODE_DISABLED", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, EnvironmentMode_obj, "ENVIRONMENT_MODE_SCENE", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, EnvironmentMode_obj, "ENVIRONMENT_MODE_CUSTOM_SKY", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, EnvironmentMode_obj, "ENVIRONMENT_MODE_CUSTOM_COLOR", JS_NewInt64(ctx, 3));
	JS_SetPropertyStr(ctx, proto, "EnvironmentMode", EnvironmentMode_obj);
}

static int js_lightmap_gi_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["LightmapGI"] = LightmapGI::__class_id;
	class_id_list.insert(LightmapGI::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), LightmapGI::__class_id, &lightmap_gi_class_def);

	JSValue proto = JS_NewObjectClass(ctx, LightmapGI::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, VisualInstance3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, LightmapGI::__class_id, proto);

	define_lightmap_gi_property(ctx, proto);
	define_lightmap_gi_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, lightmap_gi_class_proto_funcs, _countof(lightmap_gi_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, lightmap_gi_class_constructor, "LightmapGI", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "LightmapGI", ctor);

	return 0;
}

JSModuleDef *_js_init_lightmap_gi_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/visual_instance3d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_lightmap_gi_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "LightmapGI");
	return m;
}

JSModuleDef *js_init_lightmap_gi_module(JSContext *ctx) {
	return _js_init_lightmap_gi_module(ctx, "@godot/classes/lightmap_gi");
}

void register_lightmap_gi() {
	LightmapGI::__init_js_class_id();
	js_init_lightmap_gi_module(ctx);
}