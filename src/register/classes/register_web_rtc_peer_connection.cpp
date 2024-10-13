
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/web_rtc_peer_connection.hpp>
#include <godot_cpp/classes/web_rtc_data_channel.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void web_rtc_peer_connection_class_finalizer(JSRuntime *rt, JSValue val) {
	WebRTCPeerConnection *web_rtc_peer_connection = static_cast<WebRTCPeerConnection *>(JS_GetOpaque(val, WebRTCPeerConnection::__class_id));
	if (web_rtc_peer_connection)
		WebRTCPeerConnection::free(nullptr, web_rtc_peer_connection);
}

static JSClassDef web_rtc_peer_connection_class_def = {
	"WebRTCPeerConnection",
	.finalizer = web_rtc_peer_connection_class_finalizer
};

static JSValue web_rtc_peer_connection_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	WebRTCPeerConnection *web_rtc_peer_connection_class;
	JSValue obj = JS_NewObjectClass(ctx, WebRTCPeerConnection::__class_id);
	if (JS_IsException(obj))
		return obj;
	web_rtc_peer_connection_class = memnew(WebRTCPeerConnection);
	if (!web_rtc_peer_connection_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, web_rtc_peer_connection_class);
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");

	if (JS_IsObject(proto)) {
		JS_SetPrototype(ctx, obj, proto);
	}
	JS_FreeValue(ctx, proto);

	
	return obj;
}
static JSValue web_rtc_peer_connection_class_initialize(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&WebRTCPeerConnection::initialize, ctx, this_val, argc, argv);
};
static JSValue web_rtc_peer_connection_class_create_data_channel(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&WebRTCPeerConnection::create_data_channel, ctx, this_val, argc, argv);
};
static JSValue web_rtc_peer_connection_class_create_offer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&WebRTCPeerConnection::create_offer, ctx, this_val, argc, argv);
};
static JSValue web_rtc_peer_connection_class_set_local_description(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&WebRTCPeerConnection::set_local_description, ctx, this_val, argc, argv);
};
static JSValue web_rtc_peer_connection_class_set_remote_description(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&WebRTCPeerConnection::set_remote_description, ctx, this_val, argc, argv);
};
static JSValue web_rtc_peer_connection_class_add_ice_candidate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&WebRTCPeerConnection::add_ice_candidate, ctx, this_val, argc, argv);
};
static JSValue web_rtc_peer_connection_class_poll(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&WebRTCPeerConnection::poll, ctx, this_val, argc, argv);
};
static JSValue web_rtc_peer_connection_class_close(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&WebRTCPeerConnection::close, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue web_rtc_peer_connection_class_get_connection_state(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&WebRTCPeerConnection::get_connection_state, ctx, this_val, argc, argv);
};
static JSValue web_rtc_peer_connection_class_get_gathering_state(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&WebRTCPeerConnection::get_gathering_state, ctx, this_val, argc, argv);
};
static JSValue web_rtc_peer_connection_class_get_signaling_state(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&WebRTCPeerConnection::get_signaling_state, ctx, this_val, argc, argv);
};
static JSValue web_rtc_peer_connection_class_set_default_extension(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_static_method_no_ret(&WebRTCPeerConnection::set_default_extension, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry web_rtc_peer_connection_class_proto_funcs[] = {
	JS_CFUNC_DEF("initialize", 1, &web_rtc_peer_connection_class_initialize),
	JS_CFUNC_DEF("create_data_channel", 2, &web_rtc_peer_connection_class_create_data_channel),
	JS_CFUNC_DEF("create_offer", 0, &web_rtc_peer_connection_class_create_offer),
	JS_CFUNC_DEF("set_local_description", 2, &web_rtc_peer_connection_class_set_local_description),
	JS_CFUNC_DEF("set_remote_description", 2, &web_rtc_peer_connection_class_set_remote_description),
	JS_CFUNC_DEF("add_ice_candidate", 3, &web_rtc_peer_connection_class_add_ice_candidate),
	JS_CFUNC_DEF("poll", 0, &web_rtc_peer_connection_class_poll),
	JS_CFUNC_DEF("close", 0, &web_rtc_peer_connection_class_close),
	JS_CFUNC_DEF("get_connection_state", 0, &web_rtc_peer_connection_class_get_connection_state),
	JS_CFUNC_DEF("get_gathering_state", 0, &web_rtc_peer_connection_class_get_gathering_state),
	JS_CFUNC_DEF("get_signaling_state", 0, &web_rtc_peer_connection_class_get_signaling_state),
};
static const JSCFunctionListEntry web_rtc_peer_connection_class_static_funcs[] = {
	JS_CFUNC_DEF("set_default_extension", 1, &web_rtc_peer_connection_class_set_default_extension),
};

void define_web_rtc_peer_connection_property(JSContext *ctx, JSValue obj) {
}

static int js_web_rtc_peer_connection_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&WebRTCPeerConnection::__class_id);
	classes["WebRTCPeerConnection"] = WebRTCPeerConnection::__class_id;
	class_id_list.insert(WebRTCPeerConnection::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), WebRTCPeerConnection::__class_id, &web_rtc_peer_connection_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, WebRTCPeerConnection::__class_id, proto);
	define_web_rtc_peer_connection_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, web_rtc_peer_connection_class_proto_funcs, _countof(web_rtc_peer_connection_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, web_rtc_peer_connection_class_constructor, "WebRTCPeerConnection", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetPropertyFunctionList(ctx, ctor, web_rtc_peer_connection_class_static_funcs, _countof(web_rtc_peer_connection_class_static_funcs));

	JS_SetModuleExport(ctx, m, "WebRTCPeerConnection", ctor);

	return 0;
}

JSModuleDef *_js_init_web_rtc_peer_connection_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/ref_counted';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_web_rtc_peer_connection_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "WebRTCPeerConnection");
	return m;
}

JSModuleDef *js_init_web_rtc_peer_connection_module(JSContext *ctx) {
	return _js_init_web_rtc_peer_connection_module(ctx, "godot/classes/web_rtc_peer_connection");
}

void register_web_rtc_peer_connection() {
	WebRTCPeerConnection::__init_js_class_id();
	js_init_web_rtc_peer_connection_module(ctx);
}