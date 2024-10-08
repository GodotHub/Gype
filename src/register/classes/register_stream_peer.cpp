
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/stream_peer.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void stream_peer_class_finalizer(JSRuntime *rt, JSValue val) {
	StreamPeer *stream_peer = static_cast<StreamPeer *>(JS_GetOpaque(val, StreamPeer::__class_id));
	if (stream_peer)
		StreamPeer::free(nullptr, stream_peer);
}

static JSClassDef stream_peer_class_def = {
	"StreamPeer",
	.finalizer = stream_peer_class_finalizer
};

static JSValue stream_peer_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	StreamPeer *stream_peer_class;
	JSValue obj = JS_NewObjectClass(ctx, StreamPeer::__class_id);
	if (JS_IsException(obj))
		return obj;
	stream_peer_class = memnew(StreamPeer);
	if (!stream_peer_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, stream_peer_class);
	return obj;
}
static JSValue stream_peer_class_put_data(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&StreamPeer::put_data, StreamPeer::__class_id, ctx, this_val, argv);
};
static JSValue stream_peer_class_put_partial_data(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&StreamPeer::put_partial_data, StreamPeer::__class_id, ctx, this_val, argv);
};
static JSValue stream_peer_class_get_data(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&StreamPeer::get_data, StreamPeer::__class_id, ctx, this_val, argv);
};
static JSValue stream_peer_class_get_partial_data(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&StreamPeer::get_partial_data, StreamPeer::__class_id, ctx, this_val, argv);
};
static JSValue stream_peer_class_get_available_bytes(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&StreamPeer::get_available_bytes, StreamPeer::__class_id, ctx, this_val, argv);
};
static JSValue stream_peer_class_set_big_endian(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&StreamPeer::set_big_endian, StreamPeer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue stream_peer_class_is_big_endian_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&StreamPeer::is_big_endian_enabled, StreamPeer::__class_id, ctx, this_val, argv);
};
static JSValue stream_peer_class_put_8(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&StreamPeer::put_8, StreamPeer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue stream_peer_class_put_u8(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&StreamPeer::put_u8, StreamPeer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue stream_peer_class_put_16(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&StreamPeer::put_16, StreamPeer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue stream_peer_class_put_u16(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&StreamPeer::put_u16, StreamPeer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue stream_peer_class_put_32(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&StreamPeer::put_32, StreamPeer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue stream_peer_class_put_u32(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&StreamPeer::put_u32, StreamPeer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue stream_peer_class_put_64(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&StreamPeer::put_64, StreamPeer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue stream_peer_class_put_u64(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&StreamPeer::put_u64, StreamPeer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue stream_peer_class_put_float(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&StreamPeer::put_float, StreamPeer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue stream_peer_class_put_double(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&StreamPeer::put_double, StreamPeer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue stream_peer_class_put_string(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&StreamPeer::put_string, StreamPeer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue stream_peer_class_put_utf8_string(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&StreamPeer::put_utf8_string, StreamPeer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue stream_peer_class_put_var(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&StreamPeer::put_var, StreamPeer::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue stream_peer_class_get_8(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&StreamPeer::get_8, StreamPeer::__class_id, ctx, this_val, argv);
};
static JSValue stream_peer_class_get_u8(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&StreamPeer::get_u8, StreamPeer::__class_id, ctx, this_val, argv);
};
static JSValue stream_peer_class_get_16(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&StreamPeer::get_16, StreamPeer::__class_id, ctx, this_val, argv);
};
static JSValue stream_peer_class_get_u16(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&StreamPeer::get_u16, StreamPeer::__class_id, ctx, this_val, argv);
};
static JSValue stream_peer_class_get_32(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&StreamPeer::get_32, StreamPeer::__class_id, ctx, this_val, argv);
};
static JSValue stream_peer_class_get_u32(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&StreamPeer::get_u32, StreamPeer::__class_id, ctx, this_val, argv);
};
static JSValue stream_peer_class_get_64(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&StreamPeer::get_64, StreamPeer::__class_id, ctx, this_val, argv);
};
static JSValue stream_peer_class_get_u64(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&StreamPeer::get_u64, StreamPeer::__class_id, ctx, this_val, argv);
};
static JSValue stream_peer_class_get_float(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&StreamPeer::get_float, StreamPeer::__class_id, ctx, this_val, argv);
};
static JSValue stream_peer_class_get_double(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&StreamPeer::get_double, StreamPeer::__class_id, ctx, this_val, argv);
};
static JSValue stream_peer_class_get_string(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&StreamPeer::get_string, StreamPeer::__class_id, ctx, this_val, argv);
};
static JSValue stream_peer_class_get_utf8_string(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&StreamPeer::get_utf8_string, StreamPeer::__class_id, ctx, this_val, argv);
};
static JSValue stream_peer_class_get_var(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&StreamPeer::get_var, StreamPeer::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry stream_peer_class_proto_funcs[] = {
	JS_CFUNC_DEF("put_data", 1, &stream_peer_class_put_data),
	JS_CFUNC_DEF("put_partial_data", 1, &stream_peer_class_put_partial_data),
	JS_CFUNC_DEF("get_data", 1, &stream_peer_class_get_data),
	JS_CFUNC_DEF("get_partial_data", 1, &stream_peer_class_get_partial_data),
	JS_CFUNC_DEF("get_available_bytes", 0, &stream_peer_class_get_available_bytes),
	JS_CFUNC_DEF("set_big_endian", 1, &stream_peer_class_set_big_endian),
	JS_CFUNC_DEF("is_big_endian_enabled", 0, &stream_peer_class_is_big_endian_enabled),
	JS_CFUNC_DEF("put_8", 1, &stream_peer_class_put_8),
	JS_CFUNC_DEF("put_u8", 1, &stream_peer_class_put_u8),
	JS_CFUNC_DEF("put_16", 1, &stream_peer_class_put_16),
	JS_CFUNC_DEF("put_u16", 1, &stream_peer_class_put_u16),
	JS_CFUNC_DEF("put_32", 1, &stream_peer_class_put_32),
	JS_CFUNC_DEF("put_u32", 1, &stream_peer_class_put_u32),
	JS_CFUNC_DEF("put_64", 1, &stream_peer_class_put_64),
	JS_CFUNC_DEF("put_u64", 1, &stream_peer_class_put_u64),
	JS_CFUNC_DEF("put_float", 1, &stream_peer_class_put_float),
	JS_CFUNC_DEF("put_double", 1, &stream_peer_class_put_double),
	JS_CFUNC_DEF("put_string", 1, &stream_peer_class_put_string),
	JS_CFUNC_DEF("put_utf8_string", 1, &stream_peer_class_put_utf8_string),
	JS_CFUNC_DEF("put_var", 2, &stream_peer_class_put_var),
	JS_CFUNC_DEF("get_8", 0, &stream_peer_class_get_8),
	JS_CFUNC_DEF("get_u8", 0, &stream_peer_class_get_u8),
	JS_CFUNC_DEF("get_16", 0, &stream_peer_class_get_16),
	JS_CFUNC_DEF("get_u16", 0, &stream_peer_class_get_u16),
	JS_CFUNC_DEF("get_32", 0, &stream_peer_class_get_32),
	JS_CFUNC_DEF("get_u32", 0, &stream_peer_class_get_u32),
	JS_CFUNC_DEF("get_64", 0, &stream_peer_class_get_64),
	JS_CFUNC_DEF("get_u64", 0, &stream_peer_class_get_u64),
	JS_CFUNC_DEF("get_float", 0, &stream_peer_class_get_float),
	JS_CFUNC_DEF("get_double", 0, &stream_peer_class_get_double),
	JS_CFUNC_DEF("get_string", 1, &stream_peer_class_get_string),
	JS_CFUNC_DEF("get_utf8_string", 1, &stream_peer_class_get_utf8_string),
	JS_CFUNC_DEF("get_var", 1, &stream_peer_class_get_var),
};

static int js_stream_peer_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&StreamPeer::__class_id);
	classes["StreamPeer"] = StreamPeer::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), StreamPeer::__class_id, &stream_peer_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, StreamPeer::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, stream_peer_class_proto_funcs, _countof(stream_peer_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, stream_peer_class_constructor, "StreamPeer", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "StreamPeer", ctor);

	return 0;
}

JSModuleDef *_js_init_stream_peer_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_stream_peer_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "StreamPeer");
	return m;
}

JSModuleDef *js_init_stream_peer_module(JSContext *ctx) {
	return _js_init_stream_peer_module(ctx, "godot/classes/stream_peer");
}

void register_stream_peer() {
	js_init_stream_peer_module(ctx);
}