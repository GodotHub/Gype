
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/resource_preloader.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void resource_preloader_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef resource_preloader_class_def = {
	"ResourcePreloader",
	.finalizer = resource_preloader_class_finalizer
};

static JSValue resource_preloader_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, ResourcePreloader::__class_id);
	if (JS_IsException(obj))
		return obj;
	ResourcePreloader *resource_preloader_class = memnew(ResourcePreloader);
	if (!resource_preloader_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, resource_preloader_class);	
	return obj;
}
static JSValue resource_preloader_class_add_resource(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ResourcePreloader::add_resource, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue resource_preloader_class_remove_resource(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ResourcePreloader::remove_resource, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue resource_preloader_class_rename_resource(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ResourcePreloader::rename_resource, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue resource_preloader_class_has_resource(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ResourcePreloader::has_resource, ctx, this_val, argc, argv);
};
static JSValue resource_preloader_class_get_resource(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ResourcePreloader::get_resource, ctx, this_val, argc, argv);
};
static JSValue resource_preloader_class_get_resource_list(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ResourcePreloader::get_resource_list, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry resource_preloader_class_proto_funcs[] = {
	JS_CFUNC_DEF("add_resource", 2, &resource_preloader_class_add_resource),
	JS_CFUNC_DEF("remove_resource", 1, &resource_preloader_class_remove_resource),
	JS_CFUNC_DEF("rename_resource", 2, &resource_preloader_class_rename_resource),
	JS_CFUNC_DEF("has_resource", 1, &resource_preloader_class_has_resource),
	JS_CFUNC_DEF("get_resource", 1, &resource_preloader_class_get_resource),
	JS_CFUNC_DEF("get_resource_list", 0, &resource_preloader_class_get_resource_list),
};

void define_resource_preloader_property(JSContext *ctx, JSValue obj) {
}

static int js_resource_preloader_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&ResourcePreloader::__class_id);
	classes["ResourcePreloader"] = ResourcePreloader::__class_id;
	class_id_list.insert(ResourcePreloader::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), ResourcePreloader::__class_id, &resource_preloader_class_def);

	JSValue proto = JS_NewObjectClass(ctx, ResourcePreloader::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Node::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ResourcePreloader::__class_id, proto);

	define_resource_preloader_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, resource_preloader_class_proto_funcs, _countof(resource_preloader_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, resource_preloader_class_constructor, "ResourcePreloader", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "ResourcePreloader", ctor);

	return 0;
}

JSModuleDef *_js_init_resource_preloader_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/node';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
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
	ResourcePreloader::__init_js_class_id();
	js_init_resource_preloader_module(ctx);
}