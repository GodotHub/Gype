
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/packet_peer_udp.hpp>
#include <godot_cpp/classes/tls_options.hpp>
#include <godot_cpp/classes/packet_peer_dtls.hpp>
#include <godot_cpp/classes/packet_peer.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void packet_peer_dtls_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef packet_peer_dtls_class_def = {
	"PacketPeerDTLS",
	.finalizer = packet_peer_dtls_class_finalizer
};

static JSValue packet_peer_dtls_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, PacketPeerDTLS::__class_id);
	if (JS_IsException(obj))
		return obj;

	PacketPeerDTLS *packet_peer_dtls_class;
	if (argc == 1) 
		packet_peer_dtls_class = static_cast<PacketPeerDTLS *>(Variant(*argv).operator Object *());
	else 
		packet_peer_dtls_class = memnew(PacketPeerDTLS);
	if (!packet_peer_dtls_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, packet_peer_dtls_class);
	return obj;
}
static JSValue packet_peer_dtls_class_poll(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&PacketPeerDTLS::poll, ctx, this_val, argc, argv);
};
static JSValue packet_peer_dtls_class_connect_to_peer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&PacketPeerDTLS::connect_to_peer, ctx, this_val, argc, argv);
};
static JSValue packet_peer_dtls_class_get_status(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&PacketPeerDTLS::get_status, ctx, this_val, argc, argv);
};
static JSValue packet_peer_dtls_class_disconnect_from_peer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&PacketPeerDTLS::disconnect_from_peer, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry packet_peer_dtls_class_proto_funcs[] = {
	JS_CFUNC_DEF("poll", 0, &packet_peer_dtls_class_poll),
	JS_CFUNC_DEF("connect_to_peer", 3, &packet_peer_dtls_class_connect_to_peer),
	JS_CFUNC_DEF("get_status", 0, &packet_peer_dtls_class_get_status),
	JS_CFUNC_DEF("disconnect_from_peer", 0, &packet_peer_dtls_class_disconnect_from_peer),
};

static void define_packet_peer_dtls_property(JSContext *ctx, JSValue proto) {
	
}

static void define_packet_peer_dtls_enum(JSContext *ctx, JSValue proto) {
	JSValue Status_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, Status_obj, "STATUS_DISCONNECTED", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, Status_obj, "STATUS_HANDSHAKING", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, Status_obj, "STATUS_CONNECTED", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, Status_obj, "STATUS_ERROR", JS_NewInt64(ctx, 3));
	JS_SetPropertyStr(ctx, Status_obj, "STATUS_ERROR_HOSTNAME_MISMATCH", JS_NewInt64(ctx, 4));
	JS_SetPropertyStr(ctx, proto, "Status", Status_obj);
}

static int js_packet_peer_dtls_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["PacketPeerDTLS"] = PacketPeerDTLS::__class_id;
	class_id_list.insert(PacketPeerDTLS::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), PacketPeerDTLS::__class_id, &packet_peer_dtls_class_def);

	JSValue proto = JS_NewObjectClass(ctx, PacketPeerDTLS::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, PacketPeer::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, PacketPeerDTLS::__class_id, proto);

	define_packet_peer_dtls_property(ctx, proto);
	define_packet_peer_dtls_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, packet_peer_dtls_class_proto_funcs, _countof(packet_peer_dtls_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, packet_peer_dtls_class_constructor, "PacketPeerDTLS", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "PacketPeerDTLS", ctor);

	return 0;
}

JSModuleDef *_js_init_packet_peer_dtls_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/packet_peer';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_packet_peer_dtls_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "PacketPeerDTLS");
	return m;
}

JSModuleDef *js_init_packet_peer_dtls_module(JSContext *ctx) {
	return _js_init_packet_peer_dtls_module(ctx, "@godot/classes/packet_peer_dtls");
}

void register_packet_peer_dtls() {
	PacketPeerDTLS::__init_js_class_id();
	js_init_packet_peer_dtls_module(ctx);
}