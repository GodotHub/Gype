
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/resource_format_loader.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void resource_format_loader_class_finalizer(JSRuntime *rt, JSValue val) {
	ResourceFormatLoader *resource_format_loader = static_cast<ResourceFormatLoader *>(JS_GetOpaque(val, ResourceFormatLoader::__class_id));
	if (resource_format_loader)
		ResourceFormatLoader::free(nullptr, resource_format_loader);
}

static JSClassDef resource_format_loader_class_def = {
	"ResourceFormatLoader",
	.finalizer = resource_format_loader_class_finalizer
};

static JSValue resource_format_loader_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	ResourceFormatLoader *resource_format_loader_class;
	JSValue obj = JS_NewObjectClass(ctx, ResourceFormatLoader::__class_id);
	if (JS_IsException(obj))
		return obj;
	resource_format_loader_class = memnew(ResourceFormatLoader);
	if (!resource_format_loader_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, resource_format_loader_class);
	return obj;
}

static int js_resource_format_loader_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&ResourceFormatLoader::__class_id);
	classes["ResourceFormatLoader"] = ResourceFormatLoader::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), ResourceFormatLoader::__class_id, &resource_format_loader_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ResourceFormatLoader::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, resource_format_loader_class_constructor, "ResourceFormatLoader", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "ResourceFormatLoader", ctor);

	return 0;
}

JSModuleDef *_js_init_resource_format_loader_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_resource_format_loader_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "ResourceFormatLoader");
	return m;
}

JSModuleDef *js_init_resource_format_loader_module(JSContext *ctx) {
	return _js_init_resource_format_loader_module(ctx, "godot/classes/resource_format_loader");
}

void register_resource_format_loader() {
	js_init_resource_format_loader_module(ctx);
}