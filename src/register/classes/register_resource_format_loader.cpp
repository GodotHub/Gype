
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/resource_format_loader.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void resource_format_loader_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef resource_format_loader_class_def = {
	"ResourceFormatLoader",
	.finalizer = resource_format_loader_class_finalizer
};

static JSValue resource_format_loader_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, ResourceFormatLoader::__class_id);
	if (JS_IsException(obj))
		return obj;

	ResourceFormatLoader *resource_format_loader_class;
	if (argc == 1) 
		resource_format_loader_class = static_cast<ResourceFormatLoader *>(Variant(*argv).operator Object *());
	else 
		resource_format_loader_class = memnew(ResourceFormatLoader);
	if (!resource_format_loader_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, resource_format_loader_class);
	return obj;
}

static void define_resource_format_loader_property(JSContext *ctx, JSValue proto) {
	
}

static void define_resource_format_loader_enum(JSContext *ctx, JSValue proto) {
	JSValue CacheMode_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, CacheMode_obj, "CACHE_MODE_IGNORE", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, CacheMode_obj, "CACHE_MODE_REUSE", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, CacheMode_obj, "CACHE_MODE_REPLACE", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, CacheMode_obj, "CACHE_MODE_IGNORE_DEEP", JS_NewInt64(ctx, 3));
	JS_SetPropertyStr(ctx, CacheMode_obj, "CACHE_MODE_REPLACE_DEEP", JS_NewInt64(ctx, 4));
	JS_SetPropertyStr(ctx, proto, "CacheMode", CacheMode_obj);
}

static int js_resource_format_loader_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["ResourceFormatLoader"] = ResourceFormatLoader::__class_id;
	class_id_list.insert(ResourceFormatLoader::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), ResourceFormatLoader::__class_id, &resource_format_loader_class_def);

	JSValue proto = JS_NewObjectClass(ctx, ResourceFormatLoader::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ResourceFormatLoader::__class_id, proto);

	define_resource_format_loader_property(ctx, proto);
	define_resource_format_loader_enum(ctx, proto);
	JSValue ctor = JS_NewCFunction2(ctx, resource_format_loader_class_constructor, "ResourceFormatLoader", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "ResourceFormatLoader", ctor);

	return 0;
}

JSModuleDef *_js_init_resource_format_loader_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/ref_counted';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_resource_format_loader_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "ResourceFormatLoader");
	return m;
}

JSModuleDef *js_init_resource_format_loader_module(JSContext *ctx) {
	return _js_init_resource_format_loader_module(ctx, "@godot/classes/resource_format_loader");
}

void register_resource_format_loader() {
	ResourceFormatLoader::__init_js_class_id();
	js_init_resource_format_loader_module(ctx);
}