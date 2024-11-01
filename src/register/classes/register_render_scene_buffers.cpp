
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/render_scene_buffers_configuration.hpp>
#include <godot_cpp/classes/render_scene_buffers.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void render_scene_buffers_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef render_scene_buffers_class_def = {
	"RenderSceneBuffers",
	.finalizer = render_scene_buffers_class_finalizer
};

static JSValue render_scene_buffers_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, RenderSceneBuffers::__class_id);
	if (JS_IsException(obj))
		return obj;

	RenderSceneBuffers *render_scene_buffers_class;
	if (argc == 1) 
		render_scene_buffers_class = static_cast<RenderSceneBuffers *>(Variant(*argv).operator Object *());
	else 
		render_scene_buffers_class = memnew(RenderSceneBuffers);
	if (!render_scene_buffers_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, render_scene_buffers_class);
	return obj;
}
static JSValue render_scene_buffers_class_configure(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&RenderSceneBuffers::configure, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry render_scene_buffers_class_proto_funcs[] = {
	JS_CFUNC_DEF("configure", 1, &render_scene_buffers_class_configure),
};

static void define_render_scene_buffers_property(JSContext *ctx, JSValue proto) {
	
}

static void define_render_scene_buffers_enum(JSContext *ctx, JSValue proto) {
}

static int js_render_scene_buffers_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["RenderSceneBuffers"] = RenderSceneBuffers::__class_id;
	class_id_list.insert(RenderSceneBuffers::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), RenderSceneBuffers::__class_id, &render_scene_buffers_class_def);

	JSValue proto = JS_NewObjectClass(ctx, RenderSceneBuffers::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, RenderSceneBuffers::__class_id, proto);

	define_render_scene_buffers_property(ctx, proto);
	define_render_scene_buffers_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, render_scene_buffers_class_proto_funcs, _countof(render_scene_buffers_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, render_scene_buffers_class_constructor, "RenderSceneBuffers", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "RenderSceneBuffers", ctor);

	return 0;
}

JSModuleDef *_js_init_render_scene_buffers_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/ref_counted';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_render_scene_buffers_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "RenderSceneBuffers");
	return m;
}

JSModuleDef *js_init_render_scene_buffers_module(JSContext *ctx) {
	return _js_init_render_scene_buffers_module(ctx, "@godot/classes/render_scene_buffers");
}

void register_render_scene_buffers() {
	RenderSceneBuffers::__init_js_class_id();
	js_init_render_scene_buffers_module(ctx);
}