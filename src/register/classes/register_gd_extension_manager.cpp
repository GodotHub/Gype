
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/gd_extension.hpp>
#include <godot_cpp/classes/gd_extension_manager.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

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
	return call_builtin_method_ret(&GDExtensionManager::load_extension, GDExtensionManager::__class_id, ctx, this_val, argv);
};
static JSValue gd_extension_manager_class_reload_extension(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GDExtensionManager::reload_extension, GDExtensionManager::__class_id, ctx, this_val, argv);
};
static JSValue gd_extension_manager_class_unload_extension(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GDExtensionManager::unload_extension, GDExtensionManager::__class_id, ctx, this_val, argv);
};
static JSValue gd_extension_manager_class_is_extension_loaded(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GDExtensionManager::is_extension_loaded, GDExtensionManager::__class_id, ctx, this_val, argv);
};
static JSValue gd_extension_manager_class_get_loaded_extensions(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&GDExtensionManager::get_loaded_extensions, GDExtensionManager::__class_id, ctx, this_val, argv);
};
static JSValue gd_extension_manager_class_get_extension(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&GDExtensionManager::get_extension, GDExtensionManager::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry gd_extension_manager_class_proto_funcs[] = {
	JS_CFUNC_DEF("load_extension", 1, &gd_extension_manager_class_load_extension),
	JS_CFUNC_DEF("reload_extension", 1, &gd_extension_manager_class_reload_extension),
	JS_CFUNC_DEF("unload_extension", 1, &gd_extension_manager_class_unload_extension),
	JS_CFUNC_DEF("is_extension_loaded", 1, &gd_extension_manager_class_is_extension_loaded),
	JS_CFUNC_DEF("get_loaded_extensions", 0, &gd_extension_manager_class_get_loaded_extensions),
	JS_CFUNC_DEF("get_extension", 1, &gd_extension_manager_class_get_extension),
};

static int js_gd_extension_manager_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&GDExtensionManager::__class_id);
	classes["GDExtensionManager"] = GDExtensionManager::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), GDExtensionManager::__class_id, &gd_extension_manager_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Object::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, GDExtensionManager::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, gd_extension_manager_class_proto_funcs, _countof(gd_extension_manager_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, gd_extension_manager_class_constructor, "GDExtensionManager", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "GDExtensionManager", ctor);

	return 0;
}

JSModuleDef *_js_init_gd_extension_manager_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_gd_extension_manager_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "GDExtensionManager");
	return m;
}

JSModuleDef *js_init_gd_extension_manager_module(JSContext *ctx) {
	return _js_init_gd_extension_manager_module(ctx, "godot/classes/gd_extension_manager");
}

void register_gd_extension_manager() {
	js_init_gd_extension_manager_module(ctx);
}