
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/engine_profiler.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void engine_profiler_class_finalizer(JSRuntime *rt, JSValue val) {
	EngineProfiler *engine_profiler = static_cast<EngineProfiler *>(JS_GetOpaque(val, EngineProfiler::__class_id));
	if (engine_profiler)
		EngineProfiler::free(nullptr, engine_profiler);
}

static JSClassDef engine_profiler_class_def = {
	"EngineProfiler",
	.finalizer = engine_profiler_class_finalizer
};

static JSValue engine_profiler_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	EngineProfiler *engine_profiler_class;
	JSValue obj = JS_NewObjectClass(ctx, EngineProfiler::__class_id);
	if (JS_IsException(obj))
		return obj;
	engine_profiler_class = memnew(EngineProfiler);
	if (!engine_profiler_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, engine_profiler_class);
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");

	if (JS_IsObject(proto)) {
		JS_SetPrototype(ctx, obj, proto);
	}
	JS_FreeValue(ctx, proto);

	
	return obj;
}

void define_engine_profiler_property(JSContext *ctx, JSValue obj) {
}

static int js_engine_profiler_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&EngineProfiler::__class_id);
	classes["EngineProfiler"] = EngineProfiler::__class_id;
	class_id_list.insert(EngineProfiler::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), EngineProfiler::__class_id, &engine_profiler_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, EngineProfiler::__class_id, proto);
	define_engine_profiler_property(ctx, proto);

	JSValue ctor = JS_NewCFunction2(ctx, engine_profiler_class_constructor, "EngineProfiler", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "EngineProfiler", ctor);

	return 0;
}

JSModuleDef *_js_init_engine_profiler_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/ref_counted';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_engine_profiler_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "EngineProfiler");
	return m;
}

JSModuleDef *js_init_engine_profiler_module(JSContext *ctx) {
	return _js_init_engine_profiler_module(ctx, "godot/classes/engine_profiler");
}

void register_engine_profiler() {
	EngineProfiler::__init_js_class_id();
	js_init_engine_profiler_module(ctx);
}