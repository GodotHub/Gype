
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/packet_peer.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void packet_peer_class_finalizer(JSRuntime *rt, JSValue val) {
	PacketPeer *packet_peer = static_cast<PacketPeer *>(JS_GetOpaque(val, PacketPeer::__class_id));
	if (packet_peer)
		PacketPeer::free(nullptr, packet_peer);
}

static JSClassDef packet_peer_class_def = {
	"PacketPeer",
	.finalizer = packet_peer_class_finalizer
};

static JSValue packet_peer_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	PacketPeer *packet_peer_class;
	JSValue obj = JS_NewObjectClass(ctx, PacketPeer::__class_id);
	if (JS_IsException(obj))
		return obj;
	packet_peer_class = memnew(PacketPeer);
	if (!packet_peer_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, packet_peer_class);
	return obj;
}
static JSValue packet_peer_class_get_var(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&PacketPeer::get_var, PacketPeer::__class_id, ctx, this_val, argv);
};
static JSValue packet_peer_class_put_var(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&PacketPeer::put_var, PacketPeer::__class_id, ctx, this_val, argv);
};
static JSValue packet_peer_class_get_packet(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&PacketPeer::get_packet, PacketPeer::__class_id, ctx, this_val, argv);
};
static JSValue packet_peer_class_put_packet(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&PacketPeer::put_packet, PacketPeer::__class_id, ctx, this_val, argv);
};
static JSValue packet_peer_class_get_packet_error(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PacketPeer::get_packet_error, PacketPeer::__class_id, ctx, this_val, argv);
};
static JSValue packet_peer_class_get_available_packet_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PacketPeer::get_available_packet_count, PacketPeer::__class_id, ctx, this_val, argv);
};
static JSValue packet_peer_class_get_encode_buffer_max_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PacketPeer::get_encode_buffer_max_size, PacketPeer::__class_id, ctx, this_val, argv);
};
static JSValue packet_peer_class_set_encode_buffer_max_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&PacketPeer::set_encode_buffer_max_size, PacketPeer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry packet_peer_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_var", 1, &packet_peer_class_get_var),
	JS_CFUNC_DEF("put_var", 2, &packet_peer_class_put_var),
	JS_CFUNC_DEF("get_packet", 0, &packet_peer_class_get_packet),
	JS_CFUNC_DEF("put_packet", 1, &packet_peer_class_put_packet),
	JS_CFUNC_DEF("get_packet_error", 0, &packet_peer_class_get_packet_error),
	JS_CFUNC_DEF("get_available_packet_count", 0, &packet_peer_class_get_available_packet_count),
	JS_CFUNC_DEF("get_encode_buffer_max_size", 0, &packet_peer_class_get_encode_buffer_max_size),
	JS_CFUNC_DEF("set_encode_buffer_max_size", 1, &packet_peer_class_set_encode_buffer_max_size),
};

static int js_packet_peer_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&PacketPeer::__class_id);
	classes["PacketPeer"] = PacketPeer::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), PacketPeer::__class_id, &packet_peer_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, PacketPeer::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, packet_peer_class_proto_funcs, _countof(packet_peer_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, packet_peer_class_constructor, "PacketPeer", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "PacketPeer", ctor);

	return 0;
}

JSModuleDef *_js_init_packet_peer_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_packet_peer_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "PacketPeer");
	return m;
}

JSModuleDef *js_init_packet_peer_module(JSContext *ctx) {
	return _js_init_packet_peer_module(ctx, "godot/classes/packet_peer");
}

void register_packet_peer() {
	js_init_packet_peer_module(ctx);
}