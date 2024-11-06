
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/uniform_set_cache_rd.hpp>
#include <godot_cpp/classes/rd_uniform.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void uniform_set_cache_rd_class_finalizer(JSRuntime *rt, JSValue val) {
	UniformSetCacheRD *uniform_set_cache_rd = static_cast<UniformSetCacheRD *>(JS_GetOpaque(val, UniformSetCacheRD::__class_id));
	if (uniform_set_cache_rd)
		memdelete(uniform_set_cache_rd);
}

static JSClassDef uniform_set_cache_rd_class_def = {
	"UniformSetCacheRD",
	.finalizer = uniform_set_cache_rd_class_finalizer
};

static JSValue uniform_set_cache_rd_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, UniformSetCacheRD::__class_id);
	if (JS_IsException(obj))
		return obj;

	UniformSetCacheRD *uniform_set_cache_rd_class;
	if (argc == 1) 
		uniform_set_cache_rd_class = static_cast<UniformSetCacheRD *>(Variant(*argv).operator Object *());
	else 
		uniform_set_cache_rd_class = memnew(UniformSetCacheRD);
	if (!uniform_set_cache_rd_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, uniform_set_cache_rd_class);
	return obj;
}
static JSValue uniform_set_cache_rd_class_get_cache(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&UniformSetCacheRD::get_cache, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry uniform_set_cache_rd_class_static_funcs[] = {
	JS_CFUNC_DEF("get_cache", 3, &uniform_set_cache_rd_class_get_cache),
};

static void define_uniform_set_cache_rd_property(JSContext *ctx, JSValue proto) {
	
}

static void define_uniform_set_cache_rd_enum(JSContext *ctx, JSValue proto) {
}

static int js_uniform_set_cache_rd_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["UniformSetCacheRD"] = UniformSetCacheRD::__class_id;
	class_id_list.insert(UniformSetCacheRD::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), UniformSetCacheRD::__class_id, &uniform_set_cache_rd_class_def);

	JSValue proto = JS_NewObjectClass(ctx, UniformSetCacheRD::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Object::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, UniformSetCacheRD::__class_id, proto);

	define_uniform_set_cache_rd_property(ctx, proto);
	define_uniform_set_cache_rd_enum(ctx, proto);
	JSValue ctor = JS_NewCFunction2(ctx, uniform_set_cache_rd_class_constructor, "UniformSetCacheRD", 0, JS_CFUNC_constructor, 0);
	JS_SetPropertyFunctionList(ctx, ctor, uniform_set_cache_rd_class_static_funcs, _countof(uniform_set_cache_rd_class_static_funcs));
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "UniformSetCacheRD", ctor);
	constructors[UniformSetCacheRD::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_uniform_set_cache_rd_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/godot_object';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_uniform_set_cache_rd_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "UniformSetCacheRD");
	return m;
}

JSModuleDef *js_init_uniform_set_cache_rd_module(JSContext *ctx) {
	return _js_init_uniform_set_cache_rd_module(ctx, "@godot/classes/uniform_set_cache_rd");
}

void register_uniform_set_cache_rd() {
	UniformSetCacheRD::__init_js_class_id();
	js_init_uniform_set_cache_rd_module(ctx);
}