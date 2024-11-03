
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/classes/lightmap_probe.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void lightmap_probe_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef lightmap_probe_class_def = {
	"LightmapProbe",
	.finalizer = lightmap_probe_class_finalizer
};

static JSValue lightmap_probe_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, LightmapProbe::__class_id);
	if (JS_IsException(obj))
		return obj;

	LightmapProbe *lightmap_probe_class;
	if (argc == 1) 
		lightmap_probe_class = static_cast<LightmapProbe *>(Variant(*argv).operator Object *());
	else 
		lightmap_probe_class = memnew(LightmapProbe);
	if (!lightmap_probe_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, lightmap_probe_class);
	return obj;
}

static void define_lightmap_probe_property(JSContext *ctx, JSValue proto) {
	
}

static void define_lightmap_probe_enum(JSContext *ctx, JSValue proto) {
}

static int js_lightmap_probe_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["LightmapProbe"] = LightmapProbe::__class_id;
	class_id_list.insert(LightmapProbe::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), LightmapProbe::__class_id, &lightmap_probe_class_def);

	JSValue proto = JS_NewObjectClass(ctx, LightmapProbe::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Node3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, LightmapProbe::__class_id, proto);

	define_lightmap_probe_property(ctx, proto);
	define_lightmap_probe_enum(ctx, proto);
	JSValue ctor = JS_NewCFunction2(ctx, lightmap_probe_class_constructor, "LightmapProbe", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "LightmapProbe", ctor);
	constructors[LightmapProbe::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_lightmap_probe_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/node3d';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_lightmap_probe_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "LightmapProbe");
	return m;
}

JSModuleDef *js_init_lightmap_probe_module(JSContext *ctx) {
	return _js_init_lightmap_probe_module(ctx, "@godot/classes/lightmap_probe");
}

void register_lightmap_probe() {
	LightmapProbe::__init_js_class_id();
	js_init_lightmap_probe_module(ctx);
}