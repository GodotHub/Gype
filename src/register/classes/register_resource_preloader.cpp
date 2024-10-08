
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/resource_preloader.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void resource_preloader_class_finalizer(JSRuntime *rt, JSValue val) {
	ResourcePreloader *resource_preloader = static_cast<ResourcePreloader *>(JS_GetOpaque(val, ResourcePreloader::__class_id));
	if (resource_preloader)
		ResourcePreloader::free(nullptr, resource_preloader);
}

static JSClassDef resource_preloader_class_def = {
	"ResourcePreloader",
	.finalizer = resource_preloader_class_finalizer
};

static JSValue resource_preloader_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	ResourcePreloader *resource_preloader_class;
	JSValue obj = JS_NewObjectClass(ctx, ResourcePreloader::__class_id);
	if (JS_IsException(obj))
		return obj;
	resource_preloader_class = memnew(ResourcePreloader);
	if (!resource_preloader_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, resource_preloader_class);
	return obj;
}
static JSValue resource_preloader_class_add_resource(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ResourcePreloader::add_resource, ResourcePreloader::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue resource_preloader_class_remove_resource(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ResourcePreloader::remove_resource, ResourcePreloader::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue resource_preloader_class_rename_resource(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ResourcePreloader::rename_resource, ResourcePreloader::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue resource_preloader_class_has_resource(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ResourcePreloader::has_resource, ResourcePreloader::__class_id, ctx, this_val, argv);
};
static JSValue resource_preloader_class_get_resource(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ResourcePreloader::get_resource, ResourcePreloader::__class_id, ctx, this_val, argv);
};
static JSValue resource_preloader_class_get_resource_list(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ResourcePreloader::get_resource_list, ResourcePreloader::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry resource_preloader_class_proto_funcs[] = {
	JS_CFUNC_DEF("add_resource", 2, &resource_preloader_class_add_resource),
	JS_CFUNC_DEF("remove_resource", 1, &resource_preloader_class_remove_resource),
	JS_CFUNC_DEF("rename_resource", 2, &resource_preloader_class_rename_resource),
	JS_CFUNC_DEF("has_resource", 1, &resource_preloader_class_has_resource),
	JS_CFUNC_DEF("get_resource", 1, &resource_preloader_class_get_resource),
	JS_CFUNC_DEF("get_resource_list", 0, &resource_preloader_class_get_resource_list),
};

static int js_resource_preloader_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&ResourcePreloader::__class_id);
	classes["ResourcePreloader"] = ResourcePreloader::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), ResourcePreloader::__class_id, &resource_preloader_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Node::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ResourcePreloader::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, resource_preloader_class_proto_funcs, _countof(resource_preloader_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, resource_preloader_class_constructor, "ResourcePreloader", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "ResourcePreloader", ctor);

	return 0;
}

JSModuleDef *_js_init_resource_preloader_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_resource_preloader_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "ResourcePreloader");
	return m;
}

JSModuleDef *js_init_resource_preloader_module(JSContext *ctx) {
	return _js_init_resource_preloader_module(ctx, "godot/classes/resource_preloader");
}

void register_resource_preloader() {
	js_init_resource_preloader_module(ctx);
}