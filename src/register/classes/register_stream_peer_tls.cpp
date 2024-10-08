
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/stream_peer.hpp>
#include <godot_cpp/classes/stream_peer_tls.hpp>
#include <godot_cpp/classes/tls_options.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void stream_peer_tls_class_finalizer(JSRuntime *rt, JSValue val) {
	StreamPeerTLS *stream_peer_tls = static_cast<StreamPeerTLS *>(JS_GetOpaque(val, StreamPeerTLS::__class_id));
	if (stream_peer_tls)
		StreamPeerTLS::free(nullptr, stream_peer_tls);
}

static JSClassDef stream_peer_tls_class_def = {
	"StreamPeerTLS",
	.finalizer = stream_peer_tls_class_finalizer
};

static JSValue stream_peer_tls_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	StreamPeerTLS *stream_peer_tls_class;
	JSValue obj = JS_NewObjectClass(ctx, StreamPeerTLS::__class_id);
	if (JS_IsException(obj))
		return obj;
	stream_peer_tls_class = memnew(StreamPeerTLS);
	if (!stream_peer_tls_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, stream_peer_tls_class);
	return obj;
}
static JSValue stream_peer_tls_class_poll(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&StreamPeerTLS::poll, StreamPeerTLS::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue stream_peer_tls_class_accept_stream(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&StreamPeerTLS::accept_stream, StreamPeerTLS::__class_id, ctx, this_val, argv);
};
static JSValue stream_peer_tls_class_connect_to_stream(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&StreamPeerTLS::connect_to_stream, StreamPeerTLS::__class_id, ctx, this_val, argv);
};
static JSValue stream_peer_tls_class_get_status(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&StreamPeerTLS::get_status, StreamPeerTLS::__class_id, ctx, this_val, argv);
};
static JSValue stream_peer_tls_class_get_stream(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&StreamPeerTLS::get_stream, StreamPeerTLS::__class_id, ctx, this_val, argv);
};
static JSValue stream_peer_tls_class_disconnect_from_stream(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&StreamPeerTLS::disconnect_from_stream, StreamPeerTLS::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry stream_peer_tls_class_proto_funcs[] = {
	JS_CFUNC_DEF("poll", 0, &stream_peer_tls_class_poll),
	JS_CFUNC_DEF("accept_stream", 2, &stream_peer_tls_class_accept_stream),
	JS_CFUNC_DEF("connect_to_stream", 3, &stream_peer_tls_class_connect_to_stream),
	JS_CFUNC_DEF("get_status", 0, &stream_peer_tls_class_get_status),
	JS_CFUNC_DEF("get_stream", 0, &stream_peer_tls_class_get_stream),
	JS_CFUNC_DEF("disconnect_from_stream", 0, &stream_peer_tls_class_disconnect_from_stream),
};

static int js_stream_peer_tls_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&StreamPeerTLS::__class_id);
	classes["StreamPeerTLS"] = StreamPeerTLS::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), StreamPeerTLS::__class_id, &stream_peer_tls_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, StreamPeer::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, StreamPeerTLS::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, stream_peer_tls_class_proto_funcs, _countof(stream_peer_tls_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, stream_peer_tls_class_constructor, "StreamPeerTLS", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "StreamPeerTLS", ctor);

	return 0;
}

JSModuleDef *_js_init_stream_peer_tls_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_stream_peer_tls_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "StreamPeerTLS");
	return m;
}

JSModuleDef *js_init_stream_peer_tls_module(JSContext *ctx) {
	return _js_init_stream_peer_tls_module(ctx, "godot/classes/stream_peer_tls");
}

void register_stream_peer_tls() {
	js_init_stream_peer_tls_module(ctx);
}