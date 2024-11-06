
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/render_scene_buffers.hpp>
#include <godot_cpp/classes/render_scene_buffers_extension.hpp>
#include <godot_cpp/classes/render_scene_buffers_configuration.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void render_scene_buffers_extension_class_finalizer(JSRuntime *rt, JSValue val) {
	RenderSceneBuffersExtension *render_scene_buffers_extension = static_cast<RenderSceneBuffersExtension *>(JS_GetOpaque(val, RenderSceneBuffersExtension::__class_id));
	if (render_scene_buffers_extension)
		memdelete(render_scene_buffers_extension);
}

static JSClassDef render_scene_buffers_extension_class_def = {
	"RenderSceneBuffersExtension",
	.finalizer = render_scene_buffers_extension_class_finalizer
};

static JSValue render_scene_buffers_extension_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, RenderSceneBuffersExtension::__class_id);
	if (JS_IsException(obj))
		return obj;

	RenderSceneBuffersExtension *render_scene_buffers_extension_class;
	if (argc == 1) 
		render_scene_buffers_extension_class = static_cast<RenderSceneBuffersExtension *>(Variant(*argv).operator Object *());
	else 
		render_scene_buffers_extension_class = memnew(RenderSceneBuffersExtension);
	if (!render_scene_buffers_extension_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, render_scene_buffers_extension_class);
	return obj;
}

static void define_render_scene_buffers_extension_property(JSContext *ctx, JSValue proto) {
	
}

static void define_render_scene_buffers_extension_enum(JSContext *ctx, JSValue proto) {
}

static int js_render_scene_buffers_extension_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["RenderSceneBuffersExtension"] = RenderSceneBuffersExtension::__class_id;
	class_id_list.insert(RenderSceneBuffersExtension::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), RenderSceneBuffersExtension::__class_id, &render_scene_buffers_extension_class_def);

	JSValue proto = JS_NewObjectClass(ctx, RenderSceneBuffersExtension::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, RenderSceneBuffers::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, RenderSceneBuffersExtension::__class_id, proto);

	define_render_scene_buffers_extension_property(ctx, proto);
	define_render_scene_buffers_extension_enum(ctx, proto);
	JSValue ctor = JS_NewCFunction2(ctx, render_scene_buffers_extension_class_constructor, "RenderSceneBuffersExtension", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "RenderSceneBuffersExtension", ctor);
	constructors[RenderSceneBuffersExtension::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_render_scene_buffers_extension_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/render_scene_buffers';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_render_scene_buffers_extension_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "RenderSceneBuffersExtension");
	return m;
}

JSModuleDef *js_init_render_scene_buffers_extension_module(JSContext *ctx) {
	return _js_init_render_scene_buffers_extension_module(ctx, "@godot/classes/render_scene_buffers_extension");
}

void register_render_scene_buffers_extension() {
	RenderSceneBuffersExtension::__init_js_class_id();
	js_init_render_scene_buffers_extension_module(ctx);
}