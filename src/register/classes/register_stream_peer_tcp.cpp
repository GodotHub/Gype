
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/stream_peer_tcp.hpp>
#include <godot_cpp/classes/stream_peer.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void stream_peer_tcp_class_finalizer(JSRuntime *rt, JSValue val) {
	StreamPeerTCP *stream_peer_tcp = static_cast<StreamPeerTCP *>(JS_GetOpaque(val, StreamPeerTCP::__class_id));
	if (stream_peer_tcp)
		memdelete(stream_peer_tcp);
}

static JSClassDef stream_peer_tcp_class_def = {
	"StreamPeerTCP",
	.finalizer = stream_peer_tcp_class_finalizer
};

static JSValue stream_peer_tcp_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, StreamPeerTCP::__class_id);
	if (JS_IsException(obj))
		return obj;
	StreamPeerTCP *stream_peer_tcp_class = memnew(StreamPeerTCP);
	if (!stream_peer_tcp_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, stream_peer_tcp_class);	
	return obj;
}
static JSValue stream_peer_tcp_class_bind(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&StreamPeerTCP::bind, ctx, this_val, argc, argv);
};
static JSValue stream_peer_tcp_class_connect_to_host(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&StreamPeerTCP::connect_to_host, ctx, this_val, argc, argv);
};
static JSValue stream_peer_tcp_class_poll(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&StreamPeerTCP::poll, ctx, this_val, argc, argv);
};
static JSValue stream_peer_tcp_class_get_status(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&StreamPeerTCP::get_status, ctx, this_val, argc, argv);
};
static JSValue stream_peer_tcp_class_get_connected_host(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&StreamPeerTCP::get_connected_host, ctx, this_val, argc, argv);
};
static JSValue stream_peer_tcp_class_get_connected_port(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&StreamPeerTCP::get_connected_port, ctx, this_val, argc, argv);
};
static JSValue stream_peer_tcp_class_get_local_port(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&StreamPeerTCP::get_local_port, ctx, this_val, argc, argv);
};
static JSValue stream_peer_tcp_class_disconnect_from_host(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&StreamPeerTCP::disconnect_from_host, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue stream_peer_tcp_class_set_no_delay(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&StreamPeerTCP::set_no_delay, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry stream_peer_tcp_class_proto_funcs[] = {
	JS_CFUNC_DEF("bind", 2, &stream_peer_tcp_class_bind),
	JS_CFUNC_DEF("connect_to_host", 2, &stream_peer_tcp_class_connect_to_host),
	JS_CFUNC_DEF("poll", 0, &stream_peer_tcp_class_poll),
	JS_CFUNC_DEF("get_status", 0, &stream_peer_tcp_class_get_status),
	JS_CFUNC_DEF("get_connected_host", 0, &stream_peer_tcp_class_get_connected_host),
	JS_CFUNC_DEF("get_connected_port", 0, &stream_peer_tcp_class_get_connected_port),
	JS_CFUNC_DEF("get_local_port", 0, &stream_peer_tcp_class_get_local_port),
	JS_CFUNC_DEF("disconnect_from_host", 0, &stream_peer_tcp_class_disconnect_from_host),
	JS_CFUNC_DEF("set_no_delay", 1, &stream_peer_tcp_class_set_no_delay),
};

void define_stream_peer_tcp_property(JSContext *ctx, JSValue obj) {
}

static int js_stream_peer_tcp_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&StreamPeerTCP::__class_id);
	classes["StreamPeerTCP"] = StreamPeerTCP::__class_id;
	class_id_list.insert(StreamPeerTCP::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), StreamPeerTCP::__class_id, &stream_peer_tcp_class_def);

	JSValue proto = JS_NewObjectClass(ctx, StreamPeerTCP::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, StreamPeer::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, StreamPeerTCP::__class_id, proto);

	define_stream_peer_tcp_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, stream_peer_tcp_class_proto_funcs, _countof(stream_peer_tcp_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, stream_peer_tcp_class_constructor, "StreamPeerTCP", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "StreamPeerTCP", ctor);

	return 0;
}

JSModuleDef *_js_init_stream_peer_tcp_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/stream_peer';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_stream_peer_tcp_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "StreamPeerTCP");
	return m;
}

JSModuleDef *js_init_stream_peer_tcp_module(JSContext *ctx) {
	return _js_init_stream_peer_tcp_module(ctx, "godot/classes/stream_peer_tcp");
}

void register_stream_peer_tcp() {
	StreamPeerTCP::__init_js_class_id();
	js_init_stream_peer_tcp_module(ctx);
}