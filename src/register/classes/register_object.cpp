
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void object_class_finalizer(JSRuntime *rt, JSValue val) {
	Object *object = static_cast<Object *>(JS_GetOpaque(val, Object::__class_id));
	if (object)
		Object::free(nullptr, object);
}

static JSClassDef object_class_def = {
	"Object",
	.finalizer = object_class_finalizer
};

static JSValue object_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	Object *object_class;
	JSValue obj = JS_NewObjectClass(ctx, Object::__class_id);
	if (JS_IsException(obj))
		return obj;
	object_class = memnew(Object);
	if (!object_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, object_class);
	return obj;
}
static JSValue object_class_get_class(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Object::get_class, Object::__class_id, ctx, this_val, argv);
};
static JSValue object_class_is_class(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Object::is_class, Object::__class_id, ctx, this_val, argv);
};
static JSValue object_class_set(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Object::set, Object::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue object_class_get(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Object::get, Object::__class_id, ctx, this_val, argv);
};
static JSValue object_class_set_indexed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Object::set_indexed, Object::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue object_class_get_indexed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Object::get_indexed, Object::__class_id, ctx, this_val, argv);
};
static JSValue object_class_get_property_list(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Object::get_property_list, Object::__class_id, ctx, this_val, argv);
};
static JSValue object_class_get_method_list(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Object::get_method_list, Object::__class_id, ctx, this_val, argv);
};
static JSValue object_class_property_can_revert(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Object::property_can_revert, Object::__class_id, ctx, this_val, argv);
};
static JSValue object_class_property_get_revert(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Object::property_get_revert, Object::__class_id, ctx, this_val, argv);
};
static JSValue object_class_notification(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Object::notification, Object::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue object_class_to_string(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Object::to_string, Object::__class_id, ctx, this_val, argv);
};
static JSValue object_class_get_instance_id(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Object::get_instance_id, Object::__class_id, ctx, this_val, argv);
};
static JSValue object_class_set_script(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Object::set_script, Object::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue object_class_get_script(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Object::get_script, Object::__class_id, ctx, this_val, argv);
};
static JSValue object_class_set_meta(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Object::set_meta, Object::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue object_class_remove_meta(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Object::remove_meta, Object::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue object_class_get_meta(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Object::get_meta, Object::__class_id, ctx, this_val, argv);
};
static JSValue object_class_has_meta(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Object::has_meta, Object::__class_id, ctx, this_val, argv);
};
static JSValue object_class_get_meta_list(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Object::get_meta_list, Object::__class_id, ctx, this_val, argv);
};
static JSValue object_class_add_user_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Object::add_user_signal, Object::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue object_class_has_user_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Object::has_user_signal, Object::__class_id, ctx, this_val, argv);
};
static JSValue object_class_remove_user_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Object::remove_user_signal, Object::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue object_class_set_deferred(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Object::set_deferred, Object::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue object_class_callv(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Object::callv, Object::__class_id, ctx, this_val, argv);
};
static JSValue object_class_has_method(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Object::has_method, Object::__class_id, ctx, this_val, argv);
};
static JSValue object_class_get_method_argument_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Object::get_method_argument_count, Object::__class_id, ctx, this_val, argv);
};
static JSValue object_class_has_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Object::has_signal, Object::__class_id, ctx, this_val, argv);
};
static JSValue object_class_get_signal_list(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Object::get_signal_list, Object::__class_id, ctx, this_val, argv);
};
static JSValue object_class_get_signal_connection_list(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Object::get_signal_connection_list, Object::__class_id, ctx, this_val, argv);
};
static JSValue object_class_get_incoming_connections(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Object::get_incoming_connections, Object::__class_id, ctx, this_val, argv);
};
static JSValue object_class_connect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&Object::connect, Object::__class_id, ctx, this_val, argv);
};
static JSValue object_class_disconnect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Object::disconnect, Object::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue object_class_is_connected(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Object::is_connected, Object::__class_id, ctx, this_val, argv);
};
static JSValue object_class_set_block_signals(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Object::set_block_signals, Object::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue object_class_is_blocking_signals(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Object::is_blocking_signals, Object::__class_id, ctx, this_val, argv);
};
static JSValue object_class_notify_property_list_changed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Object::notify_property_list_changed, Object::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue object_class_set_message_translation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Object::set_message_translation, Object::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue object_class_can_translate_messages(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Object::can_translate_messages, Object::__class_id, ctx, this_val, argv);
};
static JSValue object_class_tr(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Object::tr, Object::__class_id, ctx, this_val, argv);
};
static JSValue object_class_tr_n(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Object::tr_n, Object::__class_id, ctx, this_val, argv);
};
static JSValue object_class_is_queued_for_deletion(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Object::is_queued_for_deletion, Object::__class_id, ctx, this_val, argv);
};
static JSValue object_class_cancel_free(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Object::cancel_free, Object::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue object_class_emit_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_vararg_method_ret(&Object::js_emit_signal, Object::__class_id, ctx, this_val, argc, argv);
}
static JSValue object_class_call(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_vararg_method_ret(&Object::js_call, Object::__class_id, ctx, this_val, argc, argv);
}
static JSValue object_class_call_deferred(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_vararg_method_ret(&Object::js_call_deferred, Object::__class_id, ctx, this_val, argc, argv);
}
static const JSCFunctionListEntry object_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_class", 0, &object_class_get_class),
	JS_CFUNC_DEF("is_class", 1, &object_class_is_class),
	JS_CFUNC_DEF("set", 2, &object_class_set),
	JS_CFUNC_DEF("get", 1, &object_class_get),
	JS_CFUNC_DEF("set_indexed", 2, &object_class_set_indexed),
	JS_CFUNC_DEF("get_indexed", 1, &object_class_get_indexed),
	JS_CFUNC_DEF("get_property_list", 0, &object_class_get_property_list),
	JS_CFUNC_DEF("get_method_list", 0, &object_class_get_method_list),
	JS_CFUNC_DEF("property_can_revert", 1, &object_class_property_can_revert),
	JS_CFUNC_DEF("property_get_revert", 1, &object_class_property_get_revert),
	JS_CFUNC_DEF("notification", 2, &object_class_notification),
	JS_CFUNC_DEF("to_string", 0, &object_class_to_string),
	JS_CFUNC_DEF("get_instance_id", 0, &object_class_get_instance_id),
	JS_CFUNC_DEF("set_script", 1, &object_class_set_script),
	JS_CFUNC_DEF("get_script", 0, &object_class_get_script),
	JS_CFUNC_DEF("set_meta", 2, &object_class_set_meta),
	JS_CFUNC_DEF("remove_meta", 1, &object_class_remove_meta),
	JS_CFUNC_DEF("get_meta", 2, &object_class_get_meta),
	JS_CFUNC_DEF("has_meta", 1, &object_class_has_meta),
	JS_CFUNC_DEF("get_meta_list", 0, &object_class_get_meta_list),
	JS_CFUNC_DEF("add_user_signal", 2, &object_class_add_user_signal),
	JS_CFUNC_DEF("has_user_signal", 1, &object_class_has_user_signal),
	JS_CFUNC_DEF("remove_user_signal", 1, &object_class_remove_user_signal),
	JS_CFUNC_DEF("set_deferred", 2, &object_class_set_deferred),
	JS_CFUNC_DEF("callv", 2, &object_class_callv),
	JS_CFUNC_DEF("has_method", 1, &object_class_has_method),
	JS_CFUNC_DEF("get_method_argument_count", 1, &object_class_get_method_argument_count),
	JS_CFUNC_DEF("has_signal", 1, &object_class_has_signal),
	JS_CFUNC_DEF("get_signal_list", 0, &object_class_get_signal_list),
	JS_CFUNC_DEF("get_signal_connection_list", 1, &object_class_get_signal_connection_list),
	JS_CFUNC_DEF("get_incoming_connections", 0, &object_class_get_incoming_connections),
	JS_CFUNC_DEF("connect", 3, &object_class_connect),
	JS_CFUNC_DEF("disconnect", 2, &object_class_disconnect),
	JS_CFUNC_DEF("is_connected", 2, &object_class_is_connected),
	JS_CFUNC_DEF("set_block_signals", 1, &object_class_set_block_signals),
	JS_CFUNC_DEF("is_blocking_signals", 0, &object_class_is_blocking_signals),
	JS_CFUNC_DEF("notify_property_list_changed", 0, &object_class_notify_property_list_changed),
	JS_CFUNC_DEF("set_message_translation", 1, &object_class_set_message_translation),
	JS_CFUNC_DEF("can_translate_messages", 0, &object_class_can_translate_messages),
	JS_CFUNC_DEF("tr", 2, &object_class_tr),
	JS_CFUNC_DEF("tr_n", 4, &object_class_tr_n),
	JS_CFUNC_DEF("is_queued_for_deletion", 0, &object_class_is_queued_for_deletion),
	JS_CFUNC_DEF("cancel_free", 0, &object_class_cancel_free),
	JS_CFUNC_DEF("emit_signal", 1, &object_class_emit_signal),
	JS_CFUNC_DEF("call", 1, &object_class_call),
	JS_CFUNC_DEF("call_deferred", 1, &object_class_call_deferred),
};

static int js_object_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&Object::__class_id);
	classes["Object"] = Object::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), Object::__class_id, &object_class_def);

	JSValue proto = JS_NewObject(ctx);
	JS_SetClassProto(ctx, Object::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, object_class_proto_funcs, _countof(object_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, object_class_constructor, "Object", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "Object", ctor);

	return 0;
}

JSModuleDef *_js_init_object_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_object_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Object");
	return m;
}

JSModuleDef *js_init_object_module(JSContext *ctx) {
	return _js_init_object_module(ctx, "godot/classes/object");
}

void register_object() {
	js_init_object_module(ctx);
}