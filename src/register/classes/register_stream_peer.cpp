
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/stream_peer.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void stream_peer_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef stream_peer_class_def = {
	"StreamPeer",
	.finalizer = stream_peer_class_finalizer
};

static JSValue stream_peer_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, StreamPeer::__class_id);
	if (JS_IsException(obj))
		return obj;

	StreamPeer *stream_peer_class;
	if (argc == 1) 
		stream_peer_class = static_cast<StreamPeer *>(static_cast<Object *>(Variant(*argv)));
	else 
		stream_peer_class = memnew(StreamPeer);
	if (!stream_peer_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, stream_peer_class);	
	return obj;
}
static JSValue stream_peer_class_put_data(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&StreamPeer::put_data, ctx, this_val, argc, argv);
};
static JSValue stream_peer_class_put_partial_data(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&StreamPeer::put_partial_data, ctx, this_val, argc, argv);
};
static JSValue stream_peer_class_get_data(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&StreamPeer::get_data, ctx, this_val, argc, argv);
};
static JSValue stream_peer_class_get_partial_data(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&StreamPeer::get_partial_data, ctx, this_val, argc, argv);
};
static JSValue stream_peer_class_get_available_bytes(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&StreamPeer::get_available_bytes, ctx, this_val, argc, argv);
};
static JSValue stream_peer_class_set_big_endian(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&StreamPeer::set_big_endian, ctx, this_val, argc, argv);
};
static JSValue stream_peer_class_is_big_endian_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&StreamPeer::is_big_endian_enabled, ctx, this_val, argc, argv);
};
static JSValue stream_peer_class_put_8(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&StreamPeer::put_8, ctx, this_val, argc, argv);
};
static JSValue stream_peer_class_put_u8(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&StreamPeer::put_u8, ctx, this_val, argc, argv);
};
static JSValue stream_peer_class_put_16(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&StreamPeer::put_16, ctx, this_val, argc, argv);
};
static JSValue stream_peer_class_put_u16(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&StreamPeer::put_u16, ctx, this_val, argc, argv);
};
static JSValue stream_peer_class_put_32(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&StreamPeer::put_32, ctx, this_val, argc, argv);
};
static JSValue stream_peer_class_put_u32(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&StreamPeer::put_u32, ctx, this_val, argc, argv);
};
static JSValue stream_peer_class_put_64(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&StreamPeer::put_64, ctx, this_val, argc, argv);
};
static JSValue stream_peer_class_put_u64(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&StreamPeer::put_u64, ctx, this_val, argc, argv);
};
static JSValue stream_peer_class_put_float(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&StreamPeer::put_float, ctx, this_val, argc, argv);
};
static JSValue stream_peer_class_put_double(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&StreamPeer::put_double, ctx, this_val, argc, argv);
};
static JSValue stream_peer_class_put_string(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&StreamPeer::put_string, ctx, this_val, argc, argv);
};
static JSValue stream_peer_class_put_utf8_string(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&StreamPeer::put_utf8_string, ctx, this_val, argc, argv);
};
static JSValue stream_peer_class_put_var(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&StreamPeer::put_var, ctx, this_val, argc, argv);
};
static JSValue stream_peer_class_get_8(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&StreamPeer::get_8, ctx, this_val, argc, argv);
};
static JSValue stream_peer_class_get_u8(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&StreamPeer::get_u8, ctx, this_val, argc, argv);
};
static JSValue stream_peer_class_get_16(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&StreamPeer::get_16, ctx, this_val, argc, argv);
};
static JSValue stream_peer_class_get_u16(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&StreamPeer::get_u16, ctx, this_val, argc, argv);
};
static JSValue stream_peer_class_get_32(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&StreamPeer::get_32, ctx, this_val, argc, argv);
};
static JSValue stream_peer_class_get_u32(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&StreamPeer::get_u32, ctx, this_val, argc, argv);
};
static JSValue stream_peer_class_get_64(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&StreamPeer::get_64, ctx, this_val, argc, argv);
};
static JSValue stream_peer_class_get_u64(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&StreamPeer::get_u64, ctx, this_val, argc, argv);
};
static JSValue stream_peer_class_get_float(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&StreamPeer::get_float, ctx, this_val, argc, argv);
};
static JSValue stream_peer_class_get_double(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&StreamPeer::get_double, ctx, this_val, argc, argv);
};
static JSValue stream_peer_class_get_string(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&StreamPeer::get_string, ctx, this_val, argc, argv);
};
static JSValue stream_peer_class_get_utf8_string(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&StreamPeer::get_utf8_string, ctx, this_val, argc, argv);
};
static JSValue stream_peer_class_get_var(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&StreamPeer::get_var, ctx, this_val, argc, argv);
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

static void define_stream_peer_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "big_endian"),
        JS_NewCFunction(ctx, stream_peer_class_is_big_endian_enabled, "is_big_endian_enabled", 0),
        JS_NewCFunction(ctx, stream_peer_class_set_big_endian, "set_big_endian", 1),
        JS_PROP_GETSET
    );
	
}

static void define_stream_peer_enum(JSContext *ctx, JSValue proto) {
}

static int js_stream_peer_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&StreamPeer::__class_id);
	classes["StreamPeer"] = StreamPeer::__class_id;
	class_id_list.insert(StreamPeer::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), StreamPeer::__class_id, &stream_peer_class_def);

	JSValue proto = JS_NewObjectClass(ctx, StreamPeer::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, StreamPeer::__class_id, proto);

	define_stream_peer_property(ctx, proto);
	define_stream_peer_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, stream_peer_class_proto_funcs, _countof(stream_peer_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, stream_peer_class_constructor, "StreamPeer", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "StreamPeer", ctor);

	return 0;
}

JSModuleDef *_js_init_stream_peer_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/ref_counted';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_stream_peer_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "StreamPeer");
	return m;
}

JSModuleDef *js_init_stream_peer_module(JSContext *ctx) {
	return _js_init_stream_peer_module(ctx, "@godot/classes/stream_peer");
}

void register_stream_peer() {
	StreamPeer::__init_js_class_id();
	js_init_stream_peer_module(ctx);
}