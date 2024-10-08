
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/lightmapper_rd.hpp>
#include <godot_cpp/classes/lightmapper.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void lightmapper_rd_class_finalizer(JSRuntime *rt, JSValue val) {
	LightmapperRD *lightmapper_rd = static_cast<LightmapperRD *>(JS_GetOpaque(val, LightmapperRD::__class_id));
	if (lightmapper_rd)
		LightmapperRD::free(nullptr, lightmapper_rd);
}

static JSClassDef lightmapper_rd_class_def = {
	"LightmapperRD",
	.finalizer = lightmapper_rd_class_finalizer
};

static JSValue lightmapper_rd_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	LightmapperRD *lightmapper_rd_class;
	JSValue obj = JS_NewObjectClass(ctx, LightmapperRD::__class_id);
	if (JS_IsException(obj))
		return obj;
	lightmapper_rd_class = memnew(LightmapperRD);
	if (!lightmapper_rd_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, lightmapper_rd_class);
	return obj;
}

static int js_lightmapper_rd_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&LightmapperRD::__class_id);
	classes["LightmapperRD"] = LightmapperRD::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), LightmapperRD::__class_id, &lightmapper_rd_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Lightmapper::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, LightmapperRD::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, lightmapper_rd_class_constructor, "LightmapperRD", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "LightmapperRD", ctor);

	return 0;
}

JSModuleDef *_js_init_lightmapper_rd_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_lightmapper_rd_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "LightmapperRD");
	return m;
}

JSModuleDef *js_init_lightmapper_rd_module(JSContext *ctx) {
	return _js_init_lightmapper_rd_module(ctx, "godot/classes/lightmapper_rd");
}

void register_lightmapper_rd() {
	js_init_lightmapper_rd_module(ctx);
}