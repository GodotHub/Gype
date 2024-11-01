
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/optimized_translation.hpp>
#include <godot_cpp/classes/translation.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void optimized_translation_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef optimized_translation_class_def = {
	"OptimizedTranslation",
	.finalizer = optimized_translation_class_finalizer
};

static JSValue optimized_translation_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, OptimizedTranslation::__class_id);
	if (JS_IsException(obj))
		return obj;

	OptimizedTranslation *optimized_translation_class;
	if (argc == 1) 
		optimized_translation_class = static_cast<OptimizedTranslation *>(Variant(*argv).operator Object *());
	else 
		optimized_translation_class = memnew(OptimizedTranslation);
	if (!optimized_translation_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, optimized_translation_class);
	return obj;
}
static JSValue optimized_translation_class_generate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&OptimizedTranslation::generate, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry optimized_translation_class_proto_funcs[] = {
	JS_CFUNC_DEF("generate", 1, &optimized_translation_class_generate),
};

static void define_optimized_translation_property(JSContext *ctx, JSValue proto) {
	
}

static void define_optimized_translation_enum(JSContext *ctx, JSValue proto) {
}

static int js_optimized_translation_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["OptimizedTranslation"] = OptimizedTranslation::__class_id;
	class_id_list.insert(OptimizedTranslation::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), OptimizedTranslation::__class_id, &optimized_translation_class_def);

	JSValue proto = JS_NewObjectClass(ctx, OptimizedTranslation::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Translation::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, OptimizedTranslation::__class_id, proto);

	define_optimized_translation_property(ctx, proto);
	define_optimized_translation_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, optimized_translation_class_proto_funcs, _countof(optimized_translation_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, optimized_translation_class_constructor, "OptimizedTranslation", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "OptimizedTranslation", ctor);

	return 0;
}

JSModuleDef *_js_init_optimized_translation_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/translation';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_optimized_translation_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "OptimizedTranslation");
	return m;
}

JSModuleDef *js_init_optimized_translation_module(JSContext *ctx) {
	return _js_init_optimized_translation_module(ctx, "@godot/classes/optimized_translation");
}

void register_optimized_translation() {
	OptimizedTranslation::__init_js_class_id();
	js_init_optimized_translation_module(ctx);
}