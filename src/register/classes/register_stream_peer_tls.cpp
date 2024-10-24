
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/stream_peer_tls.hpp>
#include <godot_cpp/classes/stream_peer.hpp>
#include <godot_cpp/classes/tls_options.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void stream_peer_tls_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef stream_peer_tls_class_def = {
	"StreamPeerTLS",
	.finalizer = stream_peer_tls_class_finalizer
};

static JSValue stream_peer_tls_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, StreamPeerTLS::__class_id);
	if (JS_IsException(obj))
		return obj;
	StreamPeerTLS *stream_peer_tls_class = memnew(StreamPeerTLS);
	if (!stream_peer_tls_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, stream_peer_tls_class);	
	return obj;
}
static JSValue stream_peer_tls_class_poll(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&StreamPeerTLS::poll, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue stream_peer_tls_class_accept_stream(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&StreamPeerTLS::accept_stream, ctx, this_val, argc, argv);
};
static JSValue stream_peer_tls_class_connect_to_stream(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&StreamPeerTLS::connect_to_stream, ctx, this_val, argc, argv);
};
static JSValue stream_peer_tls_class_get_status(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&StreamPeerTLS::get_status, ctx, this_val, argc, argv);
};
static JSValue stream_peer_tls_class_get_stream(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&StreamPeerTLS::get_stream, ctx, this_val, argc, argv);
};
static JSValue stream_peer_tls_class_disconnect_from_stream(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&StreamPeerTLS::disconnect_from_stream, ctx, this_val, argc, argv);
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

void define_stream_peer_tls_property(JSContext *ctx, JSValue obj) {
}

static int js_stream_peer_tls_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&StreamPeerTLS::__class_id);
	classes["StreamPeerTLS"] = StreamPeerTLS::__class_id;
	class_id_list.insert(StreamPeerTLS::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), StreamPeerTLS::__class_id, &stream_peer_tls_class_def);

	JSValue proto = JS_NewObjectClass(ctx, StreamPeerTLS::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, StreamPeer::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, StreamPeerTLS::__class_id, proto);

	define_stream_peer_tls_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, stream_peer_tls_class_proto_funcs, _countof(stream_peer_tls_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, stream_peer_tls_class_constructor, "StreamPeerTLS", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "StreamPeerTLS", ctor);

	return 0;
}

JSModuleDef *_js_init_stream_peer_tls_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/stream_peer';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
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
	StreamPeerTLS::__init_js_class_id();
	js_init_stream_peer_tls_module(ctx);
}