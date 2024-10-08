
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/translation.hpp>
#include <godot_cpp/classes/optimized_translation.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void optimized_translation_class_finalizer(JSRuntime *rt, JSValue val) {
	OptimizedTranslation *optimized_translation = static_cast<OptimizedTranslation *>(JS_GetOpaque(val, OptimizedTranslation::__class_id));
	if (optimized_translation)
		OptimizedTranslation::free(nullptr, optimized_translation);
}

static JSClassDef optimized_translation_class_def = {
	"OptimizedTranslation",
	.finalizer = optimized_translation_class_finalizer
};

static JSValue optimized_translation_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	OptimizedTranslation *optimized_translation_class;
	JSValue obj = JS_NewObjectClass(ctx, OptimizedTranslation::__class_id);
	if (JS_IsException(obj))
		return obj;
	optimized_translation_class = memnew(OptimizedTranslation);
	if (!optimized_translation_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, optimized_translation_class);
	return obj;
}
static JSValue optimized_translation_class_generate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&OptimizedTranslation::generate, OptimizedTranslation::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry optimized_translation_class_proto_funcs[] = {
	JS_CFUNC_DEF("generate", 1, &optimized_translation_class_generate),
};

static int js_optimized_translation_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&OptimizedTranslation::__class_id);
	classes["OptimizedTranslation"] = OptimizedTranslation::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), OptimizedTranslation::__class_id, &optimized_translation_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Translation::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, OptimizedTranslation::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, optimized_translation_class_proto_funcs, _countof(optimized_translation_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, optimized_translation_class_constructor, "OptimizedTranslation", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "OptimizedTranslation", ctor);

	return 0;
}

JSModuleDef *_js_init_optimized_translation_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_optimized_translation_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "OptimizedTranslation");
	return m;
}

JSModuleDef *js_init_optimized_translation_module(JSContext *ctx) {
	return _js_init_optimized_translation_module(ctx, "godot/classes/optimized_translation");
}

void register_optimized_translation() {
	js_init_optimized_translation_module(ctx);
}