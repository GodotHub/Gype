
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/packet_peer.hpp>
#include <godot_cpp/classes/e_net_packet_peer.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void e_net_packet_peer_class_finalizer(JSRuntime *rt, JSValue val) {
	ENetPacketPeer *e_net_packet_peer = static_cast<ENetPacketPeer *>(JS_GetOpaque(val, ENetPacketPeer::__class_id));
	if (e_net_packet_peer)
		ENetPacketPeer::free(nullptr, e_net_packet_peer);
}

static JSClassDef e_net_packet_peer_class_def = {
	"ENetPacketPeer",
	.finalizer = e_net_packet_peer_class_finalizer
};

static JSValue e_net_packet_peer_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	ENetPacketPeer *e_net_packet_peer_class;
	JSValue obj = JS_NewObjectClass(ctx, ENetPacketPeer::__class_id);
	if (JS_IsException(obj))
		return obj;
	e_net_packet_peer_class = memnew(ENetPacketPeer);
	if (!e_net_packet_peer_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, e_net_packet_peer_class);
	return obj;
}
static JSValue e_net_packet_peer_class_peer_disconnect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ENetPacketPeer::peer_disconnect, ENetPacketPeer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue e_net_packet_peer_class_peer_disconnect_later(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ENetPacketPeer::peer_disconnect_later, ENetPacketPeer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue e_net_packet_peer_class_peer_disconnect_now(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ENetPacketPeer::peer_disconnect_now, ENetPacketPeer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue e_net_packet_peer_class_ping(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ENetPacketPeer::ping, ENetPacketPeer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue e_net_packet_peer_class_ping_interval(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ENetPacketPeer::ping_interval, ENetPacketPeer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue e_net_packet_peer_class_reset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ENetPacketPeer::reset, ENetPacketPeer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue e_net_packet_peer_class_send(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&ENetPacketPeer::send, ENetPacketPeer::__class_id, ctx, this_val, argv);
};
static JSValue e_net_packet_peer_class_throttle_configure(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ENetPacketPeer::throttle_configure, ENetPacketPeer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue e_net_packet_peer_class_set_timeout(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ENetPacketPeer::set_timeout, ENetPacketPeer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue e_net_packet_peer_class_get_remote_address(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ENetPacketPeer::get_remote_address, ENetPacketPeer::__class_id, ctx, this_val, argv);
};
static JSValue e_net_packet_peer_class_get_remote_port(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ENetPacketPeer::get_remote_port, ENetPacketPeer::__class_id, ctx, this_val, argv);
};
static JSValue e_net_packet_peer_class_get_statistic(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&ENetPacketPeer::get_statistic, ENetPacketPeer::__class_id, ctx, this_val, argv);
};
static JSValue e_net_packet_peer_class_get_state(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ENetPacketPeer::get_state, ENetPacketPeer::__class_id, ctx, this_val, argv);
};
static JSValue e_net_packet_peer_class_get_channels(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ENetPacketPeer::get_channels, ENetPacketPeer::__class_id, ctx, this_val, argv);
};
static JSValue e_net_packet_peer_class_is_active(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ENetPacketPeer::is_active, ENetPacketPeer::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry e_net_packet_peer_class_proto_funcs[] = {
	JS_CFUNC_DEF("peer_disconnect", 1, &e_net_packet_peer_class_peer_disconnect),
	JS_CFUNC_DEF("peer_disconnect_later", 1, &e_net_packet_peer_class_peer_disconnect_later),
	JS_CFUNC_DEF("peer_disconnect_now", 1, &e_net_packet_peer_class_peer_disconnect_now),
	JS_CFUNC_DEF("ping", 0, &e_net_packet_peer_class_ping),
	JS_CFUNC_DEF("ping_interval", 1, &e_net_packet_peer_class_ping_interval),
	JS_CFUNC_DEF("reset", 0, &e_net_packet_peer_class_reset),
	JS_CFUNC_DEF("send", 3, &e_net_packet_peer_class_send),
	JS_CFUNC_DEF("throttle_configure", 3, &e_net_packet_peer_class_throttle_configure),
	JS_CFUNC_DEF("set_timeout", 3, &e_net_packet_peer_class_set_timeout),
	JS_CFUNC_DEF("get_remote_address", 0, &e_net_packet_peer_class_get_remote_address),
	JS_CFUNC_DEF("get_remote_port", 0, &e_net_packet_peer_class_get_remote_port),
	JS_CFUNC_DEF("get_statistic", 1, &e_net_packet_peer_class_get_statistic),
	JS_CFUNC_DEF("get_state", 0, &e_net_packet_peer_class_get_state),
	JS_CFUNC_DEF("get_channels", 0, &e_net_packet_peer_class_get_channels),
	JS_CFUNC_DEF("is_active", 0, &e_net_packet_peer_class_is_active),
};

static int js_e_net_packet_peer_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&ENetPacketPeer::__class_id);
	classes["ENetPacketPeer"] = ENetPacketPeer::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), ENetPacketPeer::__class_id, &e_net_packet_peer_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, PacketPeer::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ENetPacketPeer::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, e_net_packet_peer_class_proto_funcs, _countof(e_net_packet_peer_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, e_net_packet_peer_class_constructor, "ENetPacketPeer", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "ENetPacketPeer", ctor);

	return 0;
}

JSModuleDef *_js_init_e_net_packet_peer_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_e_net_packet_peer_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "ENetPacketPeer");
	return m;
}

JSModuleDef *js_init_e_net_packet_peer_module(JSContext *ctx) {
	return _js_init_e_net_packet_peer_module(ctx, "godot/classes/e_net_packet_peer");
}

void register_e_net_packet_peer() {
	js_init_e_net_packet_peer_module(ctx);
}