
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/stream_peer.hpp>
#include <godot_cpp/classes/stream_peer_gzip.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void stream_peer_gzip_class_finalizer(JSRuntime *rt, JSValue val) {
	StreamPeerGZIP *stream_peer_gzip = static_cast<StreamPeerGZIP *>(JS_GetOpaque(val, StreamPeerGZIP::__class_id));
	if (stream_peer_gzip)
		StreamPeerGZIP::free(nullptr, stream_peer_gzip);
}

static JSClassDef stream_peer_gzip_class_def = {
	"StreamPeerGZIP",
	.finalizer = stream_peer_gzip_class_finalizer
};

static JSValue stream_peer_gzip_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	StreamPeerGZIP *stream_peer_gzip_class;
	JSValue obj = JS_NewObjectClass(ctx, StreamPeerGZIP::__class_id);
	if (JS_IsException(obj))
		return obj;
	stream_peer_gzip_class = memnew(StreamPeerGZIP);
	if (!stream_peer_gzip_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, stream_peer_gzip_class);
	return obj;
}
static JSValue stream_peer_gzip_class_start_compression(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&StreamPeerGZIP::start_compression, StreamPeerGZIP::__class_id, ctx, this_val, argv);
};
static JSValue stream_peer_gzip_class_start_decompression(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&StreamPeerGZIP::start_decompression, StreamPeerGZIP::__class_id, ctx, this_val, argv);
};
static JSValue stream_peer_gzip_class_finish(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&StreamPeerGZIP::finish, StreamPeerGZIP::__class_id, ctx, this_val, argv);
};
static JSValue stream_peer_gzip_class_clear(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&StreamPeerGZIP::clear, StreamPeerGZIP::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry stream_peer_gzip_class_proto_funcs[] = {
	JS_CFUNC_DEF("start_compression", 2, &stream_peer_gzip_class_start_compression),
	JS_CFUNC_DEF("start_decompression", 2, &stream_peer_gzip_class_start_decompression),
	JS_CFUNC_DEF("finish", 0, &stream_peer_gzip_class_finish),
	JS_CFUNC_DEF("clear", 0, &stream_peer_gzip_class_clear),
};

static int js_stream_peer_gzip_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&StreamPeerGZIP::__class_id);
	classes["StreamPeerGZIP"] = StreamPeerGZIP::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), StreamPeerGZIP::__class_id, &stream_peer_gzip_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, StreamPeer::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, StreamPeerGZIP::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, stream_peer_gzip_class_proto_funcs, _countof(stream_peer_gzip_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, stream_peer_gzip_class_constructor, "StreamPeerGZIP", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "StreamPeerGZIP", ctor);

	return 0;
}

JSModuleDef *_js_init_stream_peer_gzip_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_stream_peer_gzip_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "StreamPeerGZIP");
	return m;
}

JSModuleDef *js_init_stream_peer_gzip_module(JSContext *ctx) {
	return _js_init_stream_peer_gzip_module(ctx, "godot/classes/stream_peer_gzip");
}

void register_stream_peer_gzip() {
	js_init_stream_peer_gzip_module(ctx);
}