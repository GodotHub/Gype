
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/render_scene_buffers_configuration.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/render_scene_buffers.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void render_scene_buffers_class_finalizer(JSRuntime *rt, JSValue val) {
	RenderSceneBuffers *render_scene_buffers = static_cast<RenderSceneBuffers *>(JS_GetOpaque(val, RenderSceneBuffers::__class_id));
	if (render_scene_buffers)
		RenderSceneBuffers::free(nullptr, render_scene_buffers);
}

static JSClassDef render_scene_buffers_class_def = {
	"RenderSceneBuffers",
	.finalizer = render_scene_buffers_class_finalizer
};

static JSValue render_scene_buffers_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	RenderSceneBuffers *render_scene_buffers_class;
	JSValue obj = JS_NewObjectClass(ctx, RenderSceneBuffers::__class_id);
	if (JS_IsException(obj))
		return obj;
	render_scene_buffers_class = memnew(RenderSceneBuffers);
	if (!render_scene_buffers_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, render_scene_buffers_class);
	return obj;
}
static JSValue render_scene_buffers_class_configure(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&RenderSceneBuffers::configure, RenderSceneBuffers::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry render_scene_buffers_class_proto_funcs[] = {
	JS_CFUNC_DEF("configure", 1, &render_scene_buffers_class_configure),
};

static int js_render_scene_buffers_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&RenderSceneBuffers::__class_id);
	classes["RenderSceneBuffers"] = RenderSceneBuffers::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), RenderSceneBuffers::__class_id, &render_scene_buffers_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, RenderSceneBuffers::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, render_scene_buffers_class_proto_funcs, _countof(render_scene_buffers_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, render_scene_buffers_class_constructor, "RenderSceneBuffers", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "RenderSceneBuffers", ctor);

	return 0;
}

JSModuleDef *_js_init_render_scene_buffers_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_render_scene_buffers_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "RenderSceneBuffers");
	return m;
}

JSModuleDef *js_init_render_scene_buffers_module(JSContext *ctx) {
	return _js_init_render_scene_buffers_module(ctx, "godot/classes/render_scene_buffers");
}

void register_render_scene_buffers() {
	js_init_render_scene_buffers_module(ctx);
}