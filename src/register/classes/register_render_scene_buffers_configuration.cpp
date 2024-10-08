
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/render_scene_buffers_configuration.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void render_scene_buffers_configuration_class_finalizer(JSRuntime *rt, JSValue val) {
	RenderSceneBuffersConfiguration *render_scene_buffers_configuration = static_cast<RenderSceneBuffersConfiguration *>(JS_GetOpaque(val, RenderSceneBuffersConfiguration::__class_id));
	if (render_scene_buffers_configuration)
		RenderSceneBuffersConfiguration::free(nullptr, render_scene_buffers_configuration);
}

static JSClassDef render_scene_buffers_configuration_class_def = {
	"RenderSceneBuffersConfiguration",
	.finalizer = render_scene_buffers_configuration_class_finalizer
};

static JSValue render_scene_buffers_configuration_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	RenderSceneBuffersConfiguration *render_scene_buffers_configuration_class;
	JSValue obj = JS_NewObjectClass(ctx, RenderSceneBuffersConfiguration::__class_id);
	if (JS_IsException(obj))
		return obj;
	render_scene_buffers_configuration_class = memnew(RenderSceneBuffersConfiguration);
	if (!render_scene_buffers_configuration_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, render_scene_buffers_configuration_class);
	return obj;
}
static JSValue render_scene_buffers_configuration_class_get_render_target(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RenderSceneBuffersConfiguration::get_render_target, RenderSceneBuffersConfiguration::__class_id, ctx, this_val, argv);
};
static JSValue render_scene_buffers_configuration_class_set_render_target(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RenderSceneBuffersConfiguration::set_render_target, RenderSceneBuffersConfiguration::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue render_scene_buffers_configuration_class_get_internal_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RenderSceneBuffersConfiguration::get_internal_size, RenderSceneBuffersConfiguration::__class_id, ctx, this_val, argv);
};
static JSValue render_scene_buffers_configuration_class_set_internal_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RenderSceneBuffersConfiguration::set_internal_size, RenderSceneBuffersConfiguration::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue render_scene_buffers_configuration_class_get_target_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RenderSceneBuffersConfiguration::get_target_size, RenderSceneBuffersConfiguration::__class_id, ctx, this_val, argv);
};
static JSValue render_scene_buffers_configuration_class_set_target_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RenderSceneBuffersConfiguration::set_target_size, RenderSceneBuffersConfiguration::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue render_scene_buffers_configuration_class_get_view_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RenderSceneBuffersConfiguration::get_view_count, RenderSceneBuffersConfiguration::__class_id, ctx, this_val, argv);
};
static JSValue render_scene_buffers_configuration_class_set_view_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RenderSceneBuffersConfiguration::set_view_count, RenderSceneBuffersConfiguration::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue render_scene_buffers_configuration_class_get_scaling_3d_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RenderSceneBuffersConfiguration::get_scaling_3d_mode, RenderSceneBuffersConfiguration::__class_id, ctx, this_val, argv);
};
static JSValue render_scene_buffers_configuration_class_set_scaling_3d_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RenderSceneBuffersConfiguration::set_scaling_3d_mode, RenderSceneBuffersConfiguration::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue render_scene_buffers_configuration_class_get_msaa_3d(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RenderSceneBuffersConfiguration::get_msaa_3d, RenderSceneBuffersConfiguration::__class_id, ctx, this_val, argv);
};
static JSValue render_scene_buffers_configuration_class_set_msaa_3d(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RenderSceneBuffersConfiguration::set_msaa_3d, RenderSceneBuffersConfiguration::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue render_scene_buffers_configuration_class_get_screen_space_aa(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RenderSceneBuffersConfiguration::get_screen_space_aa, RenderSceneBuffersConfiguration::__class_id, ctx, this_val, argv);
};
static JSValue render_scene_buffers_configuration_class_set_screen_space_aa(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RenderSceneBuffersConfiguration::set_screen_space_aa, RenderSceneBuffersConfiguration::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue render_scene_buffers_configuration_class_get_fsr_sharpness(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RenderSceneBuffersConfiguration::get_fsr_sharpness, RenderSceneBuffersConfiguration::__class_id, ctx, this_val, argv);
};
static JSValue render_scene_buffers_configuration_class_set_fsr_sharpness(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RenderSceneBuffersConfiguration::set_fsr_sharpness, RenderSceneBuffersConfiguration::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue render_scene_buffers_configuration_class_get_texture_mipmap_bias(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RenderSceneBuffersConfiguration::get_texture_mipmap_bias, RenderSceneBuffersConfiguration::__class_id, ctx, this_val, argv);
};
static JSValue render_scene_buffers_configuration_class_set_texture_mipmap_bias(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&RenderSceneBuffersConfiguration::set_texture_mipmap_bias, RenderSceneBuffersConfiguration::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry render_scene_buffers_configuration_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_render_target", 0, &render_scene_buffers_configuration_class_get_render_target),
	JS_CFUNC_DEF("set_render_target", 1, &render_scene_buffers_configuration_class_set_render_target),
	JS_CFUNC_DEF("get_internal_size", 0, &render_scene_buffers_configuration_class_get_internal_size),
	JS_CFUNC_DEF("set_internal_size", 1, &render_scene_buffers_configuration_class_set_internal_size),
	JS_CFUNC_DEF("get_target_size", 0, &render_scene_buffers_configuration_class_get_target_size),
	JS_CFUNC_DEF("set_target_size", 1, &render_scene_buffers_configuration_class_set_target_size),
	JS_CFUNC_DEF("get_view_count", 0, &render_scene_buffers_configuration_class_get_view_count),
	JS_CFUNC_DEF("set_view_count", 1, &render_scene_buffers_configuration_class_set_view_count),
	JS_CFUNC_DEF("get_scaling_3d_mode", 0, &render_scene_buffers_configuration_class_get_scaling_3d_mode),
	JS_CFUNC_DEF("set_scaling_3d_mode", 1, &render_scene_buffers_configuration_class_set_scaling_3d_mode),
	JS_CFUNC_DEF("get_msaa_3d", 0, &render_scene_buffers_configuration_class_get_msaa_3d),
	JS_CFUNC_DEF("set_msaa_3d", 1, &render_scene_buffers_configuration_class_set_msaa_3d),
	JS_CFUNC_DEF("get_screen_space_aa", 0, &render_scene_buffers_configuration_class_get_screen_space_aa),
	JS_CFUNC_DEF("set_screen_space_aa", 1, &render_scene_buffers_configuration_class_set_screen_space_aa),
	JS_CFUNC_DEF("get_fsr_sharpness", 0, &render_scene_buffers_configuration_class_get_fsr_sharpness),
	JS_CFUNC_DEF("set_fsr_sharpness", 1, &render_scene_buffers_configuration_class_set_fsr_sharpness),
	JS_CFUNC_DEF("get_texture_mipmap_bias", 0, &render_scene_buffers_configuration_class_get_texture_mipmap_bias),
	JS_CFUNC_DEF("set_texture_mipmap_bias", 1, &render_scene_buffers_configuration_class_set_texture_mipmap_bias),
};

static int js_render_scene_buffers_configuration_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&RenderSceneBuffersConfiguration::__class_id);
	classes["RenderSceneBuffersConfiguration"] = RenderSceneBuffersConfiguration::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), RenderSceneBuffersConfiguration::__class_id, &render_scene_buffers_configuration_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, RenderSceneBuffersConfiguration::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, render_scene_buffers_configuration_class_proto_funcs, _countof(render_scene_buffers_configuration_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, render_scene_buffers_configuration_class_constructor, "RenderSceneBuffersConfiguration", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "RenderSceneBuffersConfiguration", ctor);

	return 0;
}

JSModuleDef *_js_init_render_scene_buffers_configuration_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_render_scene_buffers_configuration_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "RenderSceneBuffersConfiguration");
	return m;
}

JSModuleDef *js_init_render_scene_buffers_configuration_module(JSContext *ctx) {
	return _js_init_render_scene_buffers_configuration_module(ctx, "godot/classes/render_scene_buffers_configuration");
}

void register_render_scene_buffers_configuration() {
	js_init_render_scene_buffers_configuration_module(ctx);
}