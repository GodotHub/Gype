
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/render_scene_buffers.hpp>
#include <godot_cpp/classes/render_scene_buffers_configuration.hpp>
#include <godot_cpp/classes/render_scene_buffers_extension.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void render_scene_buffers_extension_class_finalizer(JSRuntime *rt, JSValue val) {
	RenderSceneBuffersExtension *render_scene_buffers_extension = static_cast<RenderSceneBuffersExtension *>(JS_GetOpaque(val, RenderSceneBuffersExtension::__class_id));
	if (render_scene_buffers_extension)
		RenderSceneBuffersExtension::free(nullptr, render_scene_buffers_extension);
}

static JSClassDef render_scene_buffers_extension_class_def = {
	"RenderSceneBuffersExtension",
	.finalizer = render_scene_buffers_extension_class_finalizer
};

static JSValue render_scene_buffers_extension_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	RenderSceneBuffersExtension *render_scene_buffers_extension_class;
	JSValue obj = JS_NewObjectClass(ctx, RenderSceneBuffersExtension::__class_id);
	if (JS_IsException(obj))
		return obj;
	render_scene_buffers_extension_class = memnew(RenderSceneBuffersExtension);
	if (!render_scene_buffers_extension_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, render_scene_buffers_extension_class);
	return obj;
}

static int js_render_scene_buffers_extension_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&RenderSceneBuffersExtension::__class_id);
	classes["RenderSceneBuffersExtension"] = RenderSceneBuffersExtension::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), RenderSceneBuffersExtension::__class_id, &render_scene_buffers_extension_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RenderSceneBuffers::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, RenderSceneBuffersExtension::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, render_scene_buffers_extension_class_constructor, "RenderSceneBuffersExtension", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "RenderSceneBuffersExtension", ctor);

	return 0;
}

JSModuleDef *_js_init_render_scene_buffers_extension_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_render_scene_buffers_extension_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "RenderSceneBuffersExtension");
	return m;
}

JSModuleDef *js_init_render_scene_buffers_extension_module(JSContext *ctx) {
	return _js_init_render_scene_buffers_extension_module(ctx, "godot/classes/render_scene_buffers_extension");
}

void register_render_scene_buffers_extension() {
	js_init_render_scene_buffers_extension_module(ctx);
}