
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/render_data.hpp>
#include <godot_cpp/classes/render_scene_buffers.hpp>
#include <godot_cpp/classes/render_scene_data.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void render_data_class_finalizer(JSRuntime *rt, JSValue val) {
	RenderData *render_data = static_cast<RenderData *>(JS_GetOpaque(val, RenderData::__class_id));
	if (render_data)
		RenderData::free(nullptr, render_data);
}

static JSClassDef render_data_class_def = {
	"RenderData",
	.finalizer = render_data_class_finalizer
};

static JSValue render_data_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	RenderData *render_data_class;
	JSValue obj = JS_NewObjectClass(ctx, RenderData::__class_id);
	if (JS_IsException(obj))
		return obj;
	render_data_class = memnew(RenderData);
	if (!render_data_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, render_data_class);
	return obj;
}
static JSValue render_data_class_get_render_scene_buffers(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RenderData::get_render_scene_buffers, RenderData::__class_id, ctx, this_val, argv);
};
static JSValue render_data_class_get_render_scene_data(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RenderData::get_render_scene_data, RenderData::__class_id, ctx, this_val, argv);
};
static JSValue render_data_class_get_environment(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RenderData::get_environment, RenderData::__class_id, ctx, this_val, argv);
};
static JSValue render_data_class_get_camera_attributes(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&RenderData::get_camera_attributes, RenderData::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry render_data_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_render_scene_buffers", 0, &render_data_class_get_render_scene_buffers),
	JS_CFUNC_DEF("get_render_scene_data", 0, &render_data_class_get_render_scene_data),
	JS_CFUNC_DEF("get_environment", 0, &render_data_class_get_environment),
	JS_CFUNC_DEF("get_camera_attributes", 0, &render_data_class_get_camera_attributes),
};

static int js_render_data_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&RenderData::__class_id);
	classes["RenderData"] = RenderData::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), RenderData::__class_id, &render_data_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Object::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, RenderData::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, render_data_class_proto_funcs, _countof(render_data_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, render_data_class_constructor, "RenderData", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "RenderData", ctor);

	return 0;
}

JSModuleDef *_js_init_render_data_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_render_data_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "RenderData");
	return m;
}

JSModuleDef *js_init_render_data_module(JSContext *ctx) {
	return _js_init_render_data_module(ctx, "godot/classes/render_data");
}

void register_render_data() {
	js_init_render_data_module(ctx);
}