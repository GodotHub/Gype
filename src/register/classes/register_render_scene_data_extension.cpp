
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/render_scene_data_extension.hpp>
#include <godot_cpp/classes/render_scene_data.hpp>
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
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");

	if (JS_IsObject(proto)) {
		JS_SetPrototype(ctx, obj, proto);
	}
	JS_FreeValue(ctx, proto);

	
	return obj;
}

void define_render_scene_data_extension_property(JSContext *ctx, JSValue obj) {
}

static int js_render_scene_data_extension_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&RenderSceneDataExtension::__class_id);
	classes["RenderSceneDataExtension"] = RenderSceneDataExtension::__class_id;
	class_id_list.insert(RenderSceneDataExtension::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), RenderSceneDataExtension::__class_id, &render_scene_data_extension_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RenderSceneData::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, RenderSceneDataExtension::__class_id, proto);
	define_render_scene_data_extension_property(ctx, proto);

	JSValue ctor = JS_NewCFunction2(ctx, render_scene_data_extension_class_constructor, "RenderSceneDataExtension", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "RenderSceneDataExtension", ctor);

	return 0;
}

JSModuleDef *_js_init_render_scene_data_extension_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/render_scene_data';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
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
	RenderSceneDataExtension::__init_js_class_id();
	js_init_render_scene_data_extension_module(ctx);
}