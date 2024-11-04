
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/lightmapper.hpp>
#include <godot_cpp/classes/lightmapper_rd.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void lightmapper_rd_class_finalizer(JSRuntime *rt, JSValue val) {
	LightmapperRD *lightmapper_rd = static_cast<LightmapperRD *>(JS_GetOpaque(val, LightmapperRD::__class_id));
	if (lightmapper_rd)
		memdelete(lightmapper_rd);
}

static JSClassDef lightmapper_rd_class_def = {
	"LightmapperRD",
	.finalizer = lightmapper_rd_class_finalizer
};

static JSValue lightmapper_rd_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, LightmapperRD::__class_id);
	if (JS_IsException(obj))
		return obj;

	LightmapperRD *lightmapper_rd_class;
	if (argc == 1) 
		lightmapper_rd_class = static_cast<LightmapperRD *>(Variant(*argv).operator Object *());
	else 
		lightmapper_rd_class = memnew(LightmapperRD);
	if (!lightmapper_rd_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, lightmapper_rd_class);
	return obj;
}

static void define_lightmapper_rd_property(JSContext *ctx, JSValue proto) {
	
}

static void define_lightmapper_rd_enum(JSContext *ctx, JSValue proto) {
}

static int js_lightmapper_rd_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["LightmapperRD"] = LightmapperRD::__class_id;
	class_id_list.insert(LightmapperRD::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), LightmapperRD::__class_id, &lightmapper_rd_class_def);

	JSValue proto = JS_NewObjectClass(ctx, LightmapperRD::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Lightmapper::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, LightmapperRD::__class_id, proto);

	define_lightmapper_rd_property(ctx, proto);
	define_lightmapper_rd_enum(ctx, proto);
	JSValue ctor = JS_NewCFunction2(ctx, lightmapper_rd_class_constructor, "LightmapperRD", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "LightmapperRD", ctor);
	constructors[LightmapperRD::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_lightmapper_rd_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/lightmapper';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_lightmapper_rd_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "LightmapperRD");
	return m;
}

JSModuleDef *js_init_lightmapper_rd_module(JSContext *ctx) {
	return _js_init_lightmapper_rd_module(ctx, "@godot/classes/lightmapper_rd");
}

void register_lightmapper_rd() {
	LightmapperRD::__init_js_class_id();
	js_init_lightmapper_rd_module(ctx);
}