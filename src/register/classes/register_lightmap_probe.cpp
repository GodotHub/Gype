
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/lightmap_probe.hpp>
#include <godot_cpp/classes/node3d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void lightmap_probe_class_finalizer(JSRuntime *rt, JSValue val) {
	LightmapProbe *lightmap_probe = static_cast<LightmapProbe *>(JS_GetOpaque(val, LightmapProbe::__class_id));
	if (lightmap_probe)
		LightmapProbe::free(nullptr, lightmap_probe);
}

static JSClassDef lightmap_probe_class_def = {
	"LightmapProbe",
	.finalizer = lightmap_probe_class_finalizer
};

static JSValue lightmap_probe_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	LightmapProbe *lightmap_probe_class;
	JSValue obj = JS_NewObjectClass(ctx, LightmapProbe::__class_id);
	if (JS_IsException(obj))
		return obj;
	lightmap_probe_class = memnew(LightmapProbe);
	if (!lightmap_probe_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, lightmap_probe_class);
	return obj;
}

static int js_lightmap_probe_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&LightmapProbe::__class_id);
	classes["LightmapProbe"] = LightmapProbe::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), LightmapProbe::__class_id, &lightmap_probe_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Node3D::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, LightmapProbe::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, lightmap_probe_class_constructor, "LightmapProbe", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "LightmapProbe", ctor);

	return 0;
}

JSModuleDef *_js_init_lightmap_probe_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_lightmap_probe_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "LightmapProbe");
	return m;
}

JSModuleDef *js_init_lightmap_probe_module(JSContext *ctx) {
	return _js_init_lightmap_probe_module(ctx, "godot/classes/lightmap_probe");
}

void register_lightmap_probe() {
	js_init_lightmap_probe_module(ctx);
}