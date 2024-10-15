
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/gd_extension_manager.hpp>
#include <godot_cpp/classes/gd_extension.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static JSValue gd_extension_manager_instance;

static void js_gd_extension_manager_singleton();

static void gd_extension_manager_class_finalizer(JSRuntime *rt, JSValue val) {
	GDExtensionManager *gd_extension_manager = static_cast<GDExtensionManager *>(JS_GetOpaque(val, GDExtensionManager::__class_id));
	if (gd_extension_manager)
		GDExtensionManager::free(nullptr, gd_extension_manager);
}

static JSClassDef gd_extension_manager_class_def = {
	"GDExtensionManager",
	.finalizer = gd_extension_manager_class_finalizer
};

static JSValue gd_extension_manager_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	GDExtensionManager *gd_extension_manager_class;
	JSValue obj = JS_NewObjectClass(ctx, GDExtensionManager::__class_id);
	if (JS_IsException(obj))
		return obj;
	gd_extension_manager_class = GDExtensionManager::get_singleton();
	if (!gd_extension_manager_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, gd_extension_manager_class);
	return obj;
}
static JSValue gd_extension_manager_class_load_extension(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_gd_extension_manager_singleton();
	return call_builtin_method_ret(&GDExtensionManager::load_extension, ctx, this_val, argc, argv);
};
static JSValue gd_extension_manager_class_reload_extension(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_gd_extension_manager_singleton();
	return call_builtin_method_ret(&GDExtensionManager::reload_extension, ctx, this_val, argc, argv);
};
static JSValue gd_extension_manager_class_unload_extension(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_gd_extension_manager_singleton();
	return call_builtin_method_ret(&GDExtensionManager::unload_extension, ctx, this_val, argc, argv);
};
static JSValue gd_extension_manager_class_is_extension_loaded(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_gd_extension_manager_singleton();
	return call_builtin_const_method_ret(&GDExtensionManager::is_extension_loaded, ctx, this_val, argc, argv);
};
static JSValue gd_extension_manager_class_get_loaded_extensions(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_gd_extension_manager_singleton();
	return call_builtin_const_method_ret(&GDExtensionManager::get_loaded_extensions, ctx, this_val, argc, argv);
};
static JSValue gd_extension_manager_class_get_extension(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_gd_extension_manager_singleton();
	return call_builtin_method_ret(&GDExtensionManager::get_extension, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry gd_extension_manager_class_proto_funcs[] = {
	JS_CFUNC_DEF("load_extension", 1, &gd_extension_manager_class_load_extension),
	JS_CFUNC_DEF("reload_extension", 1, &gd_extension_manager_class_reload_extension),
	JS_CFUNC_DEF("unload_extension", 1, &gd_extension_manager_class_unload_extension),
	JS_CFUNC_DEF("is_extension_loaded", 1, &gd_extension_manager_class_is_extension_loaded),
	JS_CFUNC_DEF("get_loaded_extensions", 0, &gd_extension_manager_class_get_loaded_extensions),
	JS_CFUNC_DEF("get_extension", 1, &gd_extension_manager_class_get_extension),
};

static int js_gd_extension_manager_class_init(JSContext *ctx) {
	JS_NewClassID(&GDExtensionManager::__class_id);
	classes["GDExtensionManager"] = GDExtensionManager::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), GDExtensionManager::__class_id, &gd_extension_manager_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Object::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, GDExtensionManager::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, gd_extension_manager_class_proto_funcs, _countof(gd_extension_manager_class_proto_funcs));
	return 0;
}

static void js_gd_extension_manager_singleton() {
	if (JS_IsUninitialized(gd_extension_manager_instance)) {
		JSValue global = JS_GetGlobalObject(ctx);
		gd_extension_manager_instance = gd_extension_manager_class_constructor(ctx, global, 0, NULL);
		JS_SetPropertyStr(ctx, global, "GDExtensionManager", gd_extension_manager_instance);
	}
}


void register_gd_extension_manager() {
	js_gd_extension_manager_class_init(ctx);
}