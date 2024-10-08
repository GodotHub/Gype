
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/render_scene_data.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void render_scene_data_class_finalizer(JSRuntime *rt, JSValue val) {
	RenderSceneData *render_scene_data = static_cast<RenderSceneData *>(JS_GetOpaque(val, RenderSceneData::__class_id));
	if (render_scene_data)
		RenderSceneData::free(nullptr, render_scene_data);
}

static JSClassDef render_scene_data_class_def = {
	"RenderSceneData",
	.finalizer = render_scene_data_class_finalizer
};

static JSValue render_scene_data_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	RenderSceneData *render_scene_data_class;
	JSValue obj = JS_NewObjectClass(ctx, RenderSceneData::__class_id);
	if (JS_IsException(obj))
		return obj;
	render_scene_data_class = memnew(RenderSceneData);
	if (!render_scene_data_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, render_scene_data_class);
	return obj;
}
static JSValue render_scene_data_class_get_cam_transform(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RenderSceneData::get_cam_transform, RenderSceneData::__class_id, ctx, this_val, argv);
};
static JSValue render_scene_data_class_get_cam_projection(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RenderSceneData::get_cam_projection, RenderSceneData::__class_id, ctx, this_val, argv);
};
static JSValue render_scene_data_class_get_view_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RenderSceneData::get_view_count, RenderSceneData::__class_id, ctx, this_val, argv);
};
static JSValue render_scene_data_class_get_view_eye_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RenderSceneData::get_view_eye_offset, RenderSceneData::__class_id, ctx, this_val, argv);
};
static JSValue render_scene_data_class_get_view_projection(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RenderSceneData::get_view_projection, RenderSceneData::__class_id, ctx, this_val, argv);
};
static JSValue render_scene_data_class_get_uniform_buffer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RenderSceneData::get_uniform_buffer, RenderSceneData::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry render_scene_data_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_cam_transform", 0, &render_scene_data_class_get_cam_transform),
	JS_CFUNC_DEF("get_cam_projection", 0, &render_scene_data_class_get_cam_projection),
	JS_CFUNC_DEF("get_view_count", 0, &render_scene_data_class_get_view_count),
	JS_CFUNC_DEF("get_view_eye_offset", 1, &render_scene_data_class_get_view_eye_offset),
	JS_CFUNC_DEF("get_view_projection", 1, &render_scene_data_class_get_view_projection),
	JS_CFUNC_DEF("get_uniform_buffer", 0, &render_scene_data_class_get_uniform_buffer),
};

static int js_render_scene_data_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&RenderSceneData::__class_id);
	classes["RenderSceneData"] = RenderSceneData::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), RenderSceneData::__class_id, &render_scene_data_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Object::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, RenderSceneData::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, render_scene_data_class_proto_funcs, _countof(render_scene_data_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, render_scene_data_class_constructor, "RenderSceneData", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "RenderSceneData", ctor);

	return 0;
}

JSModuleDef *_js_init_render_scene_data_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_render_scene_data_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "RenderSceneData");
	return m;
}

JSModuleDef *js_init_render_scene_data_module(JSContext *ctx) {
	return _js_init_render_scene_data_module(ctx, "godot/classes/render_scene_data");
}

void register_render_scene_data() {
	js_init_render_scene_data_module(ctx);
}