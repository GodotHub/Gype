
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/packet_peer_udp.hpp>
#include <godot_cpp/classes/packet_peer.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void packet_peer_udp_class_finalizer(JSRuntime *rt, JSValue val) {
	PacketPeerUDP *packet_peer_udp = static_cast<PacketPeerUDP *>(JS_GetOpaque(val, PacketPeerUDP::__class_id));
	if (packet_peer_udp)
		memdelete(packet_peer_udp);
}

static JSClassDef packet_peer_udp_class_def = {
	"PacketPeerUDP",
	.finalizer = packet_peer_udp_class_finalizer
};

static JSValue packet_peer_udp_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, PacketPeerUDP::__class_id);
	if (JS_IsException(obj))
		return obj;
	PacketPeerUDP *packet_peer_udp_class = memnew(PacketPeerUDP);
	if (!packet_peer_udp_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, packet_peer_udp_class);	
	return obj;
}
static JSValue packet_peer_udp_class_bind(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&PacketPeerUDP::bind, ctx, this_val, argc, argv);
};
static JSValue packet_peer_udp_class_close(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PacketPeerUDP::close, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue packet_peer_udp_class_wait(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&PacketPeerUDP::wait, ctx, this_val, argc, argv);
};
static JSValue packet_peer_udp_class_is_bound(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PacketPeerUDP::is_bound, ctx, this_val, argc, argv);
};
static JSValue packet_peer_udp_class_connect_to_host(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&PacketPeerUDP::connect_to_host, ctx, this_val, argc, argv);
};
static JSValue packet_peer_udp_class_is_socket_connected(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PacketPeerUDP::is_socket_connected, ctx, this_val, argc, argv);
};
static JSValue packet_peer_udp_class_get_packet_ip(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PacketPeerUDP::get_packet_ip, ctx, this_val, argc, argv);
};
static JSValue packet_peer_udp_class_get_packet_port(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PacketPeerUDP::get_packet_port, ctx, this_val, argc, argv);
};
static JSValue packet_peer_udp_class_get_local_port(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PacketPeerUDP::get_local_port, ctx, this_val, argc, argv);
};
static JSValue packet_peer_udp_class_set_dest_address(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&PacketPeerUDP::set_dest_address, ctx, this_val, argc, argv);
};
static JSValue packet_peer_udp_class_set_broadcast_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PacketPeerUDP::set_broadcast_enabled, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue packet_peer_udp_class_join_multicast_group(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&PacketPeerUDP::join_multicast_group, ctx, this_val, argc, argv);
};
static JSValue packet_peer_udp_class_leave_multicast_group(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&PacketPeerUDP::leave_multicast_group, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry packet_peer_udp_class_proto_funcs[] = {
	JS_CFUNC_DEF("bind", 3, &packet_peer_udp_class_bind),
	JS_CFUNC_DEF("close", 0, &packet_peer_udp_class_close),
	JS_CFUNC_DEF("wait", 0, &packet_peer_udp_class_wait),
	JS_CFUNC_DEF("is_bound", 0, &packet_peer_udp_class_is_bound),
	JS_CFUNC_DEF("connect_to_host", 2, &packet_peer_udp_class_connect_to_host),
	JS_CFUNC_DEF("is_socket_connected", 0, &packet_peer_udp_class_is_socket_connected),
	JS_CFUNC_DEF("get_packet_ip", 0, &packet_peer_udp_class_get_packet_ip),
	JS_CFUNC_DEF("get_packet_port", 0, &packet_peer_udp_class_get_packet_port),
	JS_CFUNC_DEF("get_local_port", 0, &packet_peer_udp_class_get_local_port),
	JS_CFUNC_DEF("set_dest_address", 2, &packet_peer_udp_class_set_dest_address),
	JS_CFUNC_DEF("set_broadcast_enabled", 1, &packet_peer_udp_class_set_broadcast_enabled),
	JS_CFUNC_DEF("join_multicast_group", 2, &packet_peer_udp_class_join_multicast_group),
	JS_CFUNC_DEF("leave_multicast_group", 2, &packet_peer_udp_class_leave_multicast_group),
};

void define_packet_peer_udp_property(JSContext *ctx, JSValue obj) {
}

static int js_packet_peer_udp_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&PacketPeerUDP::__class_id);
	classes["PacketPeerUDP"] = PacketPeerUDP::__class_id;
	class_id_list.insert(PacketPeerUDP::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), PacketPeerUDP::__class_id, &packet_peer_udp_class_def);

	JSValue proto = JS_NewObjectClass(ctx, PacketPeerUDP::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, PacketPeer::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, PacketPeerUDP::__class_id, proto);

	define_packet_peer_udp_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, packet_peer_udp_class_proto_funcs, _countof(packet_peer_udp_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, packet_peer_udp_class_constructor, "PacketPeerUDP", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "PacketPeerUDP", ctor);

	return 0;
}

JSModuleDef *_js_init_packet_peer_udp_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/packet_peer';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_packet_peer_udp_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "PacketPeerUDP");
	return m;
}

JSModuleDef *js_init_packet_peer_udp_module(JSContext *ctx) {
	return _js_init_packet_peer_udp_module(ctx, "godot/classes/packet_peer_udp");
}

void register_packet_peer_udp() {
	PacketPeerUDP::__init_js_class_id();
	js_init_packet_peer_udp_module(ctx);
}