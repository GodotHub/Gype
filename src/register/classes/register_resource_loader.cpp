
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/resource_format_loader.hpp>
#include <godot_cpp/classes/resource_loader.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void resource_loader_class_finalizer(JSRuntime *rt, JSValue val) {
	ResourceLoader *resource_loader = static_cast<ResourceLoader *>(JS_GetOpaque(val, ResourceLoader::__class_id));
	if (resource_loader)
		ResourceLoader::free(nullptr, resource_loader);
}

static JSClassDef resource_loader_class_def = {
	"ResourceLoader",
	.finalizer = resource_loader_class_finalizer
};

static JSValue resource_loader_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	ResourceLoader *resource_loader_class;
	JSValue obj = JS_NewObjectClass(ctx, ResourceLoader::__class_id);
	if (JS_IsException(obj))
		return obj;
	resource_loader_class = ResourceLoader::get_singleton();
	if (!resource_loader_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, resource_loader_class);
	return obj;
}
static JSValue resource_loader_class_load_threaded_request(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&ResourceLoader::load_threaded_request, ResourceLoader::__class_id, ctx, this_val, argv);
};
static JSValue resource_loader_class_load_threaded_get_status(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&ResourceLoader::load_threaded_get_status, ResourceLoader::__class_id, ctx, this_val, argv);
};
static JSValue resource_loader_class_load_threaded_get(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&ResourceLoader::load_threaded_get, ResourceLoader::__class_id, ctx, this_val, argv);
};
static JSValue resource_loader_class_load(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&ResourceLoader::load, ResourceLoader::__class_id, ctx, this_val, argv);
};
static JSValue resource_loader_class_get_recognized_extensions_for_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&ResourceLoader::get_recognized_extensions_for_type, ResourceLoader::__class_id, ctx, this_val, argv);
};
static JSValue resource_loader_class_add_resource_format_loader(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ResourceLoader::add_resource_format_loader, ResourceLoader::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue resource_loader_class_remove_resource_format_loader(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ResourceLoader::remove_resource_format_loader, ResourceLoader::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue resource_loader_class_set_abort_on_missing_resources(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ResourceLoader::set_abort_on_missing_resources, ResourceLoader::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue resource_loader_class_get_dependencies(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&ResourceLoader::get_dependencies, ResourceLoader::__class_id, ctx, this_val, argv);
};
static JSValue resource_loader_class_has_cached(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&ResourceLoader::has_cached, ResourceLoader::__class_id, ctx, this_val, argv);
};
static JSValue resource_loader_class_exists(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&ResourceLoader::exists, ResourceLoader::__class_id, ctx, this_val, argv);
};
static JSValue resource_loader_class_get_resource_uid(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&ResourceLoader::get_resource_uid, ResourceLoader::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry resource_loader_class_proto_funcs[] = {
	JS_CFUNC_DEF("load_threaded_request", 4, &resource_loader_class_load_threaded_request),
	JS_CFUNC_DEF("load_threaded_get_status", 2, &resource_loader_class_load_threaded_get_status),
	JS_CFUNC_DEF("load_threaded_get", 1, &resource_loader_class_load_threaded_get),
	JS_CFUNC_DEF("load", 3, &resource_loader_class_load),
	JS_CFUNC_DEF("get_recognized_extensions_for_type", 1, &resource_loader_class_get_recognized_extensions_for_type),
	JS_CFUNC_DEF("add_resource_format_loader", 2, &resource_loader_class_add_resource_format_loader),
	JS_CFUNC_DEF("remove_resource_format_loader", 1, &resource_loader_class_remove_resource_format_loader),
	JS_CFUNC_DEF("set_abort_on_missing_resources", 1, &resource_loader_class_set_abort_on_missing_resources),
	JS_CFUNC_DEF("get_dependencies", 1, &resource_loader_class_get_dependencies),
	JS_CFUNC_DEF("has_cached", 1, &resource_loader_class_has_cached),
	JS_CFUNC_DEF("exists", 2, &resource_loader_class_exists),
	JS_CFUNC_DEF("get_resource_uid", 1, &resource_loader_class_get_resource_uid),
};

static int js_resource_loader_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&ResourceLoader::__class_id);
	classes["ResourceLoader"] = ResourceLoader::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), ResourceLoader::__class_id, &resource_loader_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Object::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ResourceLoader::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, resource_loader_class_proto_funcs, _countof(resource_loader_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, resource_loader_class_constructor, "ResourceLoader", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "ResourceLoader", ctor);

	return 0;
}

JSModuleDef *_js_init_resource_loader_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_resource_loader_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "ResourceLoader");
	return m;
}

JSModuleDef *js_init_resource_loader_module(JSContext *ctx) {
	return _js_init_resource_loader_module(ctx, "godot/classes/resource_loader");
}

void register_resource_loader() {
	js_init_resource_loader_module(ctx);
}