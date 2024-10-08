
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/stream_peer.hpp>
#include <godot_cpp/classes/stream_peer_buffer.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void stream_peer_buffer_class_finalizer(JSRuntime *rt, JSValue val) {
	StreamPeerBuffer *stream_peer_buffer = static_cast<StreamPeerBuffer *>(JS_GetOpaque(val, StreamPeerBuffer::__class_id));
	if (stream_peer_buffer)
		StreamPeerBuffer::free(nullptr, stream_peer_buffer);
}

static JSClassDef stream_peer_buffer_class_def = {
	"StreamPeerBuffer",
	.finalizer = stream_peer_buffer_class_finalizer
};

static JSValue stream_peer_buffer_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	StreamPeerBuffer *stream_peer_buffer_class;
	JSValue obj = JS_NewObjectClass(ctx, StreamPeerBuffer::__class_id);
	if (JS_IsException(obj))
		return obj;
	stream_peer_buffer_class = memnew(StreamPeerBuffer);
	if (!stream_peer_buffer_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, stream_peer_buffer_class);
	return obj;
}
static JSValue stream_peer_buffer_class_seek(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&StreamPeerBuffer::seek, StreamPeerBuffer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue stream_peer_buffer_class_get_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&StreamPeerBuffer::get_size, StreamPeerBuffer::__class_id, ctx, this_val, argv);
};
static JSValue stream_peer_buffer_class_get_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&StreamPeerBuffer::get_position, StreamPeerBuffer::__class_id, ctx, this_val, argv);
};
static JSValue stream_peer_buffer_class_resize(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&StreamPeerBuffer::resize, StreamPeerBuffer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue stream_peer_buffer_class_set_data_array(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&StreamPeerBuffer::set_data_array, StreamPeerBuffer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue stream_peer_buffer_class_get_data_array(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&StreamPeerBuffer::get_data_array, StreamPeerBuffer::__class_id, ctx, this_val, argv);
};
static JSValue stream_peer_buffer_class_clear(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&StreamPeerBuffer::clear, StreamPeerBuffer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue stream_peer_buffer_class_duplicate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&StreamPeerBuffer::duplicate, StreamPeerBuffer::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry stream_peer_buffer_class_proto_funcs[] = {
	JS_CFUNC_DEF("seek", 1, &stream_peer_buffer_class_seek),
	JS_CFUNC_DEF("get_size", 0, &stream_peer_buffer_class_get_size),
	JS_CFUNC_DEF("get_position", 0, &stream_peer_buffer_class_get_position),
	JS_CFUNC_DEF("resize", 1, &stream_peer_buffer_class_resize),
	JS_CFUNC_DEF("set_data_array", 1, &stream_peer_buffer_class_set_data_array),
	JS_CFUNC_DEF("get_data_array", 0, &stream_peer_buffer_class_get_data_array),
	JS_CFUNC_DEF("clear", 0, &stream_peer_buffer_class_clear),
	JS_CFUNC_DEF("duplicate", 0, &stream_peer_buffer_class_duplicate),
};

static int js_stream_peer_buffer_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&StreamPeerBuffer::__class_id);
	classes["StreamPeerBuffer"] = StreamPeerBuffer::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), StreamPeerBuffer::__class_id, &stream_peer_buffer_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, StreamPeer::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, StreamPeerBuffer::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, stream_peer_buffer_class_proto_funcs, _countof(stream_peer_buffer_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, stream_peer_buffer_class_constructor, "StreamPeerBuffer", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "StreamPeerBuffer", ctor);

	return 0;
}

JSModuleDef *_js_init_stream_peer_buffer_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_stream_peer_buffer_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "StreamPeerBuffer");
	return m;
}

JSModuleDef *js_init_stream_peer_buffer_module(JSContext *ctx) {
	return _js_init_stream_peer_buffer_module(ctx, "godot/classes/stream_peer_buffer");
}

void register_stream_peer_buffer() {
	js_init_stream_peer_buffer_module(ctx);
}