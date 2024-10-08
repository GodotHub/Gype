
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/uniform_set_cache_rd.hpp>
#include <godot_cpp/classes/rd_uniform.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void uniform_set_cache_rd_class_finalizer(JSRuntime *rt, JSValue val) {
	UniformSetCacheRD *uniform_set_cache_rd = static_cast<UniformSetCacheRD *>(JS_GetOpaque(val, UniformSetCacheRD::__class_id));
	if (uniform_set_cache_rd)
		UniformSetCacheRD::free(nullptr, uniform_set_cache_rd);
}

static JSClassDef uniform_set_cache_rd_class_def = {
	"UniformSetCacheRD",
	.finalizer = uniform_set_cache_rd_class_finalizer
};

static JSValue uniform_set_cache_rd_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	UniformSetCacheRD *uniform_set_cache_rd_class;
	JSValue obj = JS_NewObjectClass(ctx, UniformSetCacheRD::__class_id);
	if (JS_IsException(obj))
		return obj;
	uniform_set_cache_rd_class = memnew(UniformSetCacheRD);
	if (!uniform_set_cache_rd_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, uniform_set_cache_rd_class);
	return obj;
}
static JSValue uniform_set_cache_rd_class_get_cache(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_static_method_ret(&UniformSetCacheRD::get_cache, UniformSetCacheRD::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry uniform_set_cache_rd_class_static_funcs[] = {
	JS_CFUNC_DEF("get_cache", 3, &uniform_set_cache_rd_class_get_cache),
};

static int js_uniform_set_cache_rd_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&UniformSetCacheRD::__class_id);
	classes["UniformSetCacheRD"] = UniformSetCacheRD::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), UniformSetCacheRD::__class_id, &uniform_set_cache_rd_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Object::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, UniformSetCacheRD::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, uniform_set_cache_rd_class_constructor, "UniformSetCacheRD", 0, JS_CFUNC_constructor, 0);
	JS_SetPropertyFunctionList(ctx, ctor, uniform_set_cache_rd_class_static_funcs, _countof(uniform_set_cache_rd_class_static_funcs));

	JS_SetModuleExport(ctx, m, "UniformSetCacheRD", ctor);

	return 0;
}

JSModuleDef *_js_init_uniform_set_cache_rd_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_uniform_set_cache_rd_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "UniformSetCacheRD");
	return m;
}

JSModuleDef *js_init_uniform_set_cache_rd_module(JSContext *ctx) {
	return _js_init_uniform_set_cache_rd_module(ctx, "godot/classes/uniform_set_cache_rd");
}

void register_uniform_set_cache_rd() {
	js_init_uniform_set_cache_rd_module(ctx);
}