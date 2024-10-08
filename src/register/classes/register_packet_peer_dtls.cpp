
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/packet_peer.hpp>
#include <godot_cpp/classes/packet_peer_dtls.hpp>
#include <godot_cpp/classes/packet_peer_udp.hpp>
#include <godot_cpp/classes/tls_options.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void packet_peer_dtls_class_finalizer(JSRuntime *rt, JSValue val) {
	PacketPeerDTLS *packet_peer_dtls = static_cast<PacketPeerDTLS *>(JS_GetOpaque(val, PacketPeerDTLS::__class_id));
	if (packet_peer_dtls)
		PacketPeerDTLS::free(nullptr, packet_peer_dtls);
}

static JSClassDef packet_peer_dtls_class_def = {
	"PacketPeerDTLS",
	.finalizer = packet_peer_dtls_class_finalizer
};

static JSValue packet_peer_dtls_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	PacketPeerDTLS *packet_peer_dtls_class;
	JSValue obj = JS_NewObjectClass(ctx, PacketPeerDTLS::__class_id);
	if (JS_IsException(obj))
		return obj;
	packet_peer_dtls_class = memnew(PacketPeerDTLS);
	if (!packet_peer_dtls_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, packet_peer_dtls_class);
	return obj;
}
static JSValue packet_peer_dtls_class_poll(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PacketPeerDTLS::poll, PacketPeerDTLS::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue packet_peer_dtls_class_connect_to_peer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&PacketPeerDTLS::connect_to_peer, PacketPeerDTLS::__class_id, ctx, this_val, argv);
};
static JSValue packet_peer_dtls_class_get_status(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PacketPeerDTLS::get_status, PacketPeerDTLS::__class_id, ctx, this_val, argv);
};
static JSValue packet_peer_dtls_class_disconnect_from_peer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PacketPeerDTLS::disconnect_from_peer, PacketPeerDTLS::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry packet_peer_dtls_class_proto_funcs[] = {
	JS_CFUNC_DEF("poll", 0, &packet_peer_dtls_class_poll),
	JS_CFUNC_DEF("connect_to_peer", 3, &packet_peer_dtls_class_connect_to_peer),
	JS_CFUNC_DEF("get_status", 0, &packet_peer_dtls_class_get_status),
	JS_CFUNC_DEF("disconnect_from_peer", 0, &packet_peer_dtls_class_disconnect_from_peer),
};

static int js_packet_peer_dtls_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&PacketPeerDTLS::__class_id);
	classes["PacketPeerDTLS"] = PacketPeerDTLS::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), PacketPeerDTLS::__class_id, &packet_peer_dtls_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, PacketPeer::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, PacketPeerDTLS::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, packet_peer_dtls_class_proto_funcs, _countof(packet_peer_dtls_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, packet_peer_dtls_class_constructor, "PacketPeerDTLS", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "PacketPeerDTLS", ctor);

	return 0;
}

JSModuleDef *_js_init_packet_peer_dtls_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_packet_peer_dtls_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "PacketPeerDTLS");
	return m;
}

JSModuleDef *js_init_packet_peer_dtls_module(JSContext *ctx) {
	return _js_init_packet_peer_dtls_module(ctx, "godot/classes/packet_peer_dtls");
}

void register_packet_peer_dtls() {
	js_init_packet_peer_dtls_module(ctx);
}