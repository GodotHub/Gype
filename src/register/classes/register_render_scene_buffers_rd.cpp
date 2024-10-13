
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/render_scene_buffers.hpp>
#include <godot_cpp/classes/render_scene_buffers_rd.hpp>
#include <godot_cpp/classes/rd_texture_view.hpp>
#include <godot_cpp/classes/rd_texture_format.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void render_scene_buffers_rd_class_finalizer(JSRuntime *rt, JSValue val) {
	RenderSceneBuffersRD *render_scene_buffers_rd = static_cast<RenderSceneBuffersRD *>(JS_GetOpaque(val, RenderSceneBuffersRD::__class_id));
	if (render_scene_buffers_rd)
		RenderSceneBuffersRD::free(nullptr, render_scene_buffers_rd);
}

static JSClassDef render_scene_buffers_rd_class_def = {
	"RenderSceneBuffersRD",
	.finalizer = render_scene_buffers_rd_class_finalizer
};

static JSValue render_scene_buffers_rd_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	RenderSceneBuffersRD *render_scene_buffers_rd_class;
	JSValue obj = JS_NewObjectClass(ctx, RenderSceneBuffersRD::__class_id);
	if (JS_IsException(obj))
		return obj;
	render_scene_buffers_rd_class = memnew(RenderSceneBuffersRD);
	if (!render_scene_buffers_rd_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, render_scene_buffers_rd_class);
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");

	if (JS_IsObject(proto)) {
		JS_SetPrototype(ctx, obj, proto);
	}
	JS_FreeValue(ctx, proto);

	
	return obj;
}
static JSValue render_scene_buffers_rd_class_has_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RenderSceneBuffersRD::has_texture, ctx, this_val, argc, argv);
};
static JSValue render_scene_buffers_rd_class_create_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&RenderSceneBuffersRD::create_texture, ctx, this_val, argc, argv);
};
static JSValue render_scene_buffers_rd_class_create_texture_from_format(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&RenderSceneBuffersRD::create_texture_from_format, ctx, this_val, argc, argv);
};
static JSValue render_scene_buffers_rd_class_create_texture_view(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&RenderSceneBuffersRD::create_texture_view, ctx, this_val, argc, argv);
};
static JSValue render_scene_buffers_rd_class_get_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RenderSceneBuffersRD::get_texture, ctx, this_val, argc, argv);
};
static JSValue render_scene_buffers_rd_class_get_texture_format(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RenderSceneBuffersRD::get_texture_format, ctx, this_val, argc, argv);
};
static JSValue render_scene_buffers_rd_class_get_texture_slice(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&RenderSceneBuffersRD::get_texture_slice, ctx, this_val, argc, argv);
};
static JSValue render_scene_buffers_rd_class_get_texture_slice_view(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&RenderSceneBuffersRD::get_texture_slice_view, ctx, this_val, argc, argv);
};
static JSValue render_scene_buffers_rd_class_get_texture_slice_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&RenderSceneBuffersRD::get_texture_slice_size, ctx, this_val, argc, argv);
};
static JSValue render_scene_buffers_rd_class_clear_context(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RenderSceneBuffersRD::clear_context, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue render_scene_buffers_rd_class_get_color_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&RenderSceneBuffersRD::get_color_texture, ctx, this_val, argc, argv);
};
static JSValue render_scene_buffers_rd_class_get_color_layer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&RenderSceneBuffersRD::get_color_layer, ctx, this_val, argc, argv);
};
static JSValue render_scene_buffers_rd_class_get_depth_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&RenderSceneBuffersRD::get_depth_texture, ctx, this_val, argc, argv);
};
static JSValue render_scene_buffers_rd_class_get_depth_layer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&RenderSceneBuffersRD::get_depth_layer, ctx, this_val, argc, argv);
};
static JSValue render_scene_buffers_rd_class_get_velocity_texture(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&RenderSceneBuffersRD::get_velocity_texture, ctx, this_val, argc, argv);
};
static JSValue render_scene_buffers_rd_class_get_velocity_layer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&RenderSceneBuffersRD::get_velocity_layer, ctx, this_val, argc, argv);
};
static JSValue render_scene_buffers_rd_class_get_render_target(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RenderSceneBuffersRD::get_render_target, ctx, this_val, argc, argv);
};
static JSValue render_scene_buffers_rd_class_get_view_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RenderSceneBuffersRD::get_view_count, ctx, this_val, argc, argv);
};
static JSValue render_scene_buffers_rd_class_get_internal_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RenderSceneBuffersRD::get_internal_size, ctx, this_val, argc, argv);
};
static JSValue render_scene_buffers_rd_class_get_target_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RenderSceneBuffersRD::get_target_size, ctx, this_val, argc, argv);
};
static JSValue render_scene_buffers_rd_class_get_scaling_3d_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RenderSceneBuffersRD::get_scaling_3d_mode, ctx, this_val, argc, argv);
};
static JSValue render_scene_buffers_rd_class_get_fsr_sharpness(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RenderSceneBuffersRD::get_fsr_sharpness, ctx, this_val, argc, argv);
};
static JSValue render_scene_buffers_rd_class_get_msaa_3d(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RenderSceneBuffersRD::get_msaa_3d, ctx, this_val, argc, argv);
};
static JSValue render_scene_buffers_rd_class_get_texture_samples(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RenderSceneBuffersRD::get_texture_samples, ctx, this_val, argc, argv);
};
static JSValue render_scene_buffers_rd_class_get_screen_space_aa(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RenderSceneBuffersRD::get_screen_space_aa, ctx, this_val, argc, argv);
};
static JSValue render_scene_buffers_rd_class_get_use_taa(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RenderSceneBuffersRD::get_use_taa, ctx, this_val, argc, argv);
};
static JSValue render_scene_buffers_rd_class_get_use_debanding(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RenderSceneBuffersRD::get_use_debanding, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry render_scene_buffers_rd_class_proto_funcs[] = {
	JS_CFUNC_DEF("has_texture", 2, &render_scene_buffers_rd_class_has_texture),
	JS_CFUNC_DEF("create_texture", 9, &render_scene_buffers_rd_class_create_texture),
	JS_CFUNC_DEF("create_texture_from_format", 5, &render_scene_buffers_rd_class_create_texture_from_format),
	JS_CFUNC_DEF("create_texture_view", 4, &render_scene_buffers_rd_class_create_texture_view),
	JS_CFUNC_DEF("get_texture", 2, &render_scene_buffers_rd_class_get_texture),
	JS_CFUNC_DEF("get_texture_format", 2, &render_scene_buffers_rd_class_get_texture_format),
	JS_CFUNC_DEF("get_texture_slice", 6, &render_scene_buffers_rd_class_get_texture_slice),
	JS_CFUNC_DEF("get_texture_slice_view", 7, &render_scene_buffers_rd_class_get_texture_slice_view),
	JS_CFUNC_DEF("get_texture_slice_size", 3, &render_scene_buffers_rd_class_get_texture_slice_size),
	JS_CFUNC_DEF("clear_context", 1, &render_scene_buffers_rd_class_clear_context),
	JS_CFUNC_DEF("get_color_texture", 1, &render_scene_buffers_rd_class_get_color_texture),
	JS_CFUNC_DEF("get_color_layer", 2, &render_scene_buffers_rd_class_get_color_layer),
	JS_CFUNC_DEF("get_depth_texture", 1, &render_scene_buffers_rd_class_get_depth_texture),
	JS_CFUNC_DEF("get_depth_layer", 2, &render_scene_buffers_rd_class_get_depth_layer),
	JS_CFUNC_DEF("get_velocity_texture", 1, &render_scene_buffers_rd_class_get_velocity_texture),
	JS_CFUNC_DEF("get_velocity_layer", 2, &render_scene_buffers_rd_class_get_velocity_layer),
	JS_CFUNC_DEF("get_render_target", 0, &render_scene_buffers_rd_class_get_render_target),
	JS_CFUNC_DEF("get_view_count", 0, &render_scene_buffers_rd_class_get_view_count),
	JS_CFUNC_DEF("get_internal_size", 0, &render_scene_buffers_rd_class_get_internal_size),
	JS_CFUNC_DEF("get_target_size", 0, &render_scene_buffers_rd_class_get_target_size),
	JS_CFUNC_DEF("get_scaling_3d_mode", 0, &render_scene_buffers_rd_class_get_scaling_3d_mode),
	JS_CFUNC_DEF("get_fsr_sharpness", 0, &render_scene_buffers_rd_class_get_fsr_sharpness),
	JS_CFUNC_DEF("get_msaa_3d", 0, &render_scene_buffers_rd_class_get_msaa_3d),
	JS_CFUNC_DEF("get_texture_samples", 0, &render_scene_buffers_rd_class_get_texture_samples),
	JS_CFUNC_DEF("get_screen_space_aa", 0, &render_scene_buffers_rd_class_get_screen_space_aa),
	JS_CFUNC_DEF("get_use_taa", 0, &render_scene_buffers_rd_class_get_use_taa),
	JS_CFUNC_DEF("get_use_debanding", 0, &render_scene_buffers_rd_class_get_use_debanding),
};

void define_render_scene_buffers_rd_property(JSContext *ctx, JSValue obj) {
}

static int js_render_scene_buffers_rd_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&RenderSceneBuffersRD::__class_id);
	classes["RenderSceneBuffersRD"] = RenderSceneBuffersRD::__class_id;
	class_id_list.insert(RenderSceneBuffersRD::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), RenderSceneBuffersRD::__class_id, &render_scene_buffers_rd_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RenderSceneBuffers::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, RenderSceneBuffersRD::__class_id, proto);
	define_render_scene_buffers_rd_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, render_scene_buffers_rd_class_proto_funcs, _countof(render_scene_buffers_rd_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, render_scene_buffers_rd_class_constructor, "RenderSceneBuffersRD", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "RenderSceneBuffersRD", ctor);

	return 0;
}

JSModuleDef *_js_init_render_scene_buffers_rd_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/render_scene_buffers';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_render_scene_buffers_rd_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "RenderSceneBuffersRD");
	return m;
}

JSModuleDef *js_init_render_scene_buffers_rd_module(JSContext *ctx) {
	return _js_init_render_scene_buffers_rd_module(ctx, "godot/classes/render_scene_buffers_rd");
}

void register_render_scene_buffers_rd() {
	RenderSceneBuffersRD::__init_js_class_id();
	js_init_render_scene_buffers_rd_module(ctx);
}