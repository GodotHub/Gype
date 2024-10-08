
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/stream_peer.hpp>
#include <godot_cpp/classes/packet_peer_stream.hpp>
#include <godot_cpp/classes/packet_peer.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void packet_peer_stream_class_finalizer(JSRuntime *rt, JSValue val) {
	PacketPeerStream *packet_peer_stream = static_cast<PacketPeerStream *>(JS_GetOpaque(val, PacketPeerStream::__class_id));
	if (packet_peer_stream)
		PacketPeerStream::free(nullptr, packet_peer_stream);
}

static JSClassDef packet_peer_stream_class_def = {
	"PacketPeerStream",
	.finalizer = packet_peer_stream_class_finalizer
};

static JSValue packet_peer_stream_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	PacketPeerStream *packet_peer_stream_class;
	JSValue obj = JS_NewObjectClass(ctx, PacketPeerStream::__class_id);
	if (JS_IsException(obj))
		return obj;
	packet_peer_stream_class = memnew(PacketPeerStream);
	if (!packet_peer_stream_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, packet_peer_stream_class);
	return obj;
}
static JSValue packet_peer_stream_class_set_stream_peer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PacketPeerStream::set_stream_peer, PacketPeerStream::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue packet_peer_stream_class_get_stream_peer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PacketPeerStream::get_stream_peer, PacketPeerStream::__class_id, ctx, this_val, argv);
};
static JSValue packet_peer_stream_class_set_input_buffer_max_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PacketPeerStream::set_input_buffer_max_size, PacketPeerStream::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue packet_peer_stream_class_set_output_buffer_max_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PacketPeerStream::set_output_buffer_max_size, PacketPeerStream::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue packet_peer_stream_class_get_input_buffer_max_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PacketPeerStream::get_input_buffer_max_size, PacketPeerStream::__class_id, ctx, this_val, argv);
};
static JSValue packet_peer_stream_class_get_output_buffer_max_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PacketPeerStream::get_output_buffer_max_size, PacketPeerStream::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry packet_peer_stream_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_stream_peer", 1, &packet_peer_stream_class_set_stream_peer),
	JS_CFUNC_DEF("get_stream_peer", 0, &packet_peer_stream_class_get_stream_peer),
	JS_CFUNC_DEF("set_input_buffer_max_size", 1, &packet_peer_stream_class_set_input_buffer_max_size),
	JS_CFUNC_DEF("set_output_buffer_max_size", 1, &packet_peer_stream_class_set_output_buffer_max_size),
	JS_CFUNC_DEF("get_input_buffer_max_size", 0, &packet_peer_stream_class_get_input_buffer_max_size),
	JS_CFUNC_DEF("get_output_buffer_max_size", 0, &packet_peer_stream_class_get_output_buffer_max_size),
};

static int js_packet_peer_stream_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&PacketPeerStream::__class_id);
	classes["PacketPeerStream"] = PacketPeerStream::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), PacketPeerStream::__class_id, &packet_peer_stream_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, PacketPeer::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, PacketPeerStream::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, packet_peer_stream_class_proto_funcs, _countof(packet_peer_stream_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, packet_peer_stream_class_constructor, "PacketPeerStream", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "PacketPeerStream", ctor);

	return 0;
}

JSModuleDef *_js_init_packet_peer_stream_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_packet_peer_stream_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "PacketPeerStream");
	return m;
}

JSModuleDef *js_init_packet_peer_stream_module(JSContext *ctx) {
	return _js_init_packet_peer_stream_module(ctx, "godot/classes/packet_peer_stream");
}

void register_packet_peer_stream() {
	js_init_packet_peer_stream_module(ctx);
}