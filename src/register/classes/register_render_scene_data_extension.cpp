
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/render_scene_data_extension.hpp>
#include <godot_cpp/classes/render_scene_data.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void render_scene_data_extension_class_finalizer(JSRuntime *rt, JSValue val) {
	RenderSceneDataExtension *render_scene_data_extension = static_cast<RenderSceneDataExtension *>(JS_GetOpaque(val, RenderSceneDataExtension::__class_id));
	if (render_scene_data_extension)
		RenderSceneDataExtension::free(nullptr, render_scene_data_extension);
}

static JSClassDef render_scene_data_extension_class_def = {
	"RenderSceneDataExtension",
	.finalizer = render_scene_data_extension_class_finalizer
};

static JSValue render_scene_data_extension_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	RenderSceneDataExtension *render_scene_data_extension_class;
	JSValue obj = JS_NewObjectClass(ctx, RenderSceneDataExtension::__class_id);
	if (JS_IsException(obj))
		return obj;
	render_scene_data_extension_class = memnew(RenderSceneDataExtension);
	if (!render_scene_data_extension_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, render_scene_data_extension_class);
	return obj;
}

static int js_render_scene_data_extension_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&RenderSceneDataExtension::__class_id);
	classes["RenderSceneDataExtension"] = RenderSceneDataExtension::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), RenderSceneDataExtension::__class_id, &render_scene_data_extension_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RenderSceneData::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, RenderSceneDataExtension::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, render_scene_data_extension_class_constructor, "RenderSceneDataExtension", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "RenderSceneDataExtension", ctor);

	return 0;
}

JSModuleDef *_js_init_render_scene_data_extension_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_render_scene_data_extension_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "RenderSceneDataExtension");
	return m;
}

JSModuleDef *js_init_render_scene_data_extension_module(JSContext *ctx) {
	return _js_init_render_scene_data_extension_module(ctx, "godot/classes/render_scene_data_extension");
}

void register_render_scene_data_extension() {
	js_init_render_scene_data_extension_module(ctx);
}