
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/text_server.hpp>
#include <godot_cpp/classes/text_server_manager.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void text_server_manager_class_finalizer(JSRuntime *rt, JSValue val) {
	TextServerManager *text_server_manager = static_cast<TextServerManager *>(JS_GetOpaque(val, TextServerManager::__class_id));
	if (text_server_manager)
		memdelete(text_server_manager);
}

static JSClassDef text_server_manager_class_def = {
	"_TextServerManager",
	.finalizer = text_server_manager_class_finalizer
};

static JSValue text_server_manager_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue obj = JS_NewObjectClass(ctx, TextServerManager::__class_id);
	if (JS_IsException(obj))
		return obj;
	TextServerManager *text_server_manager_class = TextServerManager::get_singleton();
	if (!text_server_manager_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, text_server_manager_class);
	return obj;
}
static JSValue text_server_manager_class_add_interface(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextServerManager::add_interface, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue text_server_manager_class_get_interface_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServerManager::get_interface_count, ctx, this_val, argc, argv);
};
static JSValue text_server_manager_class_remove_interface(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextServerManager::remove_interface, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue text_server_manager_class_get_interface(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServerManager::get_interface, ctx, this_val, argc, argv);
};
static JSValue text_server_manager_class_get_interfaces(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServerManager::get_interfaces, ctx, this_val, argc, argv);
};
static JSValue text_server_manager_class_find_interface(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServerManager::find_interface, ctx, this_val, argc, argv);
};
static JSValue text_server_manager_class_set_primary_interface(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextServerManager::set_primary_interface, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue text_server_manager_class_get_primary_interface(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextServerManager::get_primary_interface, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry text_server_manager_class_proto_funcs[] = {
	JS_CFUNC_DEF("add_interface", 1, &text_server_manager_class_add_interface),
	JS_CFUNC_DEF("get_interface_count", 0, &text_server_manager_class_get_interface_count),
	JS_CFUNC_DEF("remove_interface", 1, &text_server_manager_class_remove_interface),
	JS_CFUNC_DEF("get_interface", 1, &text_server_manager_class_get_interface),
	JS_CFUNC_DEF("get_interfaces", 0, &text_server_manager_class_get_interfaces),
	JS_CFUNC_DEF("find_interface", 1, &text_server_manager_class_find_interface),
	JS_CFUNC_DEF("set_primary_interface", 1, &text_server_manager_class_set_primary_interface),
	JS_CFUNC_DEF("get_primary_interface", 0, &text_server_manager_class_get_primary_interface),
};

static int js_text_server_manager_class_init(JSContext *ctx) {
	classes["TextServerManager"] = TextServerManager::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), TextServerManager::__class_id, &text_server_manager_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Object::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, TextServerManager::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, text_server_manager_class_proto_funcs, _countof(text_server_manager_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, text_server_manager_class_constructor, "_TextServerManager", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JSValue global = JS_GetGlobalObject(ctx);
	JS_SetPropertyStr(ctx, global, "_TextServerManager", ctor);
	JS_FreeValue(ctx, global);
	return 0;
}

void register_text_server_manager() {
	TextServerManager::__init_js_class_id();
	js_text_server_manager_class_init(ctx);
}