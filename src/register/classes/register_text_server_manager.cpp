
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

static JSValue text_server_manager_instance;

static void js_text_server_manager_singleton();

static void text_server_manager_class_finalizer(JSRuntime *rt, JSValue val) {
	TextServerManager *text_server_manager = static_cast<TextServerManager *>(JS_GetOpaque(val, TextServerManager::__class_id));
	if (text_server_manager)
		TextServerManager::free(nullptr, text_server_manager);
}

static JSClassDef text_server_manager_class_def = {
	"TextServerManager",
	.finalizer = text_server_manager_class_finalizer
};

static JSValue text_server_manager_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	TextServerManager *text_server_manager_class;
	JSValue obj = JS_NewObjectClass(ctx, TextServerManager::__class_id);
	if (JS_IsException(obj))
		return obj;
	text_server_manager_class = TextServerManager::get_singleton();
	if (!text_server_manager_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, text_server_manager_class);
	return obj;
}
static JSValue text_server_manager_class_add_interface(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_text_server_manager_singleton();
    call_builtin_method_no_ret(&TextServerManager::add_interface, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue text_server_manager_class_get_interface_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_text_server_manager_singleton();
	return call_builtin_const_method_ret(&TextServerManager::get_interface_count, ctx, this_val, argc, argv);
};
static JSValue text_server_manager_class_remove_interface(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_text_server_manager_singleton();
    call_builtin_method_no_ret(&TextServerManager::remove_interface, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue text_server_manager_class_get_interface(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_text_server_manager_singleton();
	return call_builtin_const_method_ret(&TextServerManager::get_interface, ctx, this_val, argc, argv);
};
static JSValue text_server_manager_class_get_interfaces(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_text_server_manager_singleton();
	return call_builtin_const_method_ret(&TextServerManager::get_interfaces, ctx, this_val, argc, argv);
};
static JSValue text_server_manager_class_find_interface(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_text_server_manager_singleton();
	return call_builtin_const_method_ret(&TextServerManager::find_interface, ctx, this_val, argc, argv);
};
static JSValue text_server_manager_class_set_primary_interface(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_text_server_manager_singleton();
    call_builtin_method_no_ret(&TextServerManager::set_primary_interface, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue text_server_manager_class_get_primary_interface(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    js_text_server_manager_singleton();
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
	JS_NewClassID(&TextServerManager::__class_id);
	classes["TextServerManager"] = TextServerManager::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), TextServerManager::__class_id, &text_server_manager_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Object::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, TextServerManager::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, text_server_manager_class_proto_funcs, _countof(text_server_manager_class_proto_funcs));
	return 0;
}

static void js_text_server_manager_singleton() {
	if (JS_IsUninitialized(text_server_manager_instance)) {
		JSValue global = JS_GetGlobalObject(ctx);
		text_server_manager_instance = text_server_manager_class_constructor(ctx, global, 0, NULL);
		JS_SetPropertyStr(ctx, global, "TextServerManager", text_server_manager_instance);
	}
}


void register_text_server_manager() {
	js_text_server_manager_class_init(ctx);
}