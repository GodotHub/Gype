
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/lightmapper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void lightmapper_class_finalizer(JSRuntime *rt, JSValue val) {
	Lightmapper *lightmapper = static_cast<Lightmapper *>(JS_GetOpaque(val, Lightmapper::__class_id));
	if (lightmapper)
		Lightmapper::free(nullptr, lightmapper);
}

static JSClassDef lightmapper_class_def = {
	"Lightmapper",
	.finalizer = lightmapper_class_finalizer
};

static JSValue lightmapper_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	Lightmapper *lightmapper_class;
	JSValue obj = JS_NewObjectClass(ctx, Lightmapper::__class_id);
	if (JS_IsException(obj))
		return obj;
	lightmapper_class = memnew(Lightmapper);
	if (!lightmapper_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, lightmapper_class);
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");

	if (JS_IsObject(proto)) {
		JS_SetPrototype(ctx, obj, proto);
	}
	JS_FreeValue(ctx, proto);

	
	return obj;
}

void define_lightmapper_property(JSContext *ctx, JSValue obj) {
}

static int js_lightmapper_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&Lightmapper::__class_id);
	classes["Lightmapper"] = Lightmapper::__class_id;
	class_id_list.insert(Lightmapper::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), Lightmapper::__class_id, &lightmapper_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Lightmapper::__class_id, proto);
	define_lightmapper_property(ctx, proto);

	JSValue ctor = JS_NewCFunction2(ctx, lightmapper_class_constructor, "Lightmapper", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "Lightmapper", ctor);

	return 0;
}

JSModuleDef *_js_init_lightmapper_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/ref_counted';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_lightmapper_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Lightmapper");
	return m;
}

JSModuleDef *js_init_lightmapper_module(JSContext *ctx) {
	return _js_init_lightmapper_module(ctx, "godot/classes/lightmapper");
}

void register_lightmapper() {
	Lightmapper::__init_js_class_id();
	js_init_lightmapper_module(ctx);
}