
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/packet_peer.hpp>
#include <godot_cpp/classes/packet_peer_stream.hpp>
#include <godot_cpp/classes/stream_peer.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void packet_peer_stream_class_finalizer(JSRuntime *rt, JSValue val) {
	PacketPeerStream *packet_peer_stream = static_cast<PacketPeerStream *>(JS_GetOpaque(val, PacketPeerStream::__class_id));
	if (packet_peer_stream)
		memdelete(packet_peer_stream);
}

static JSClassDef packet_peer_stream_class_def = {
	"PacketPeerStream",
	.finalizer = packet_peer_stream_class_finalizer
};

static JSValue packet_peer_stream_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, PacketPeerStream::__class_id);
	if (JS_IsException(obj))
		return obj;

	PacketPeerStream *packet_peer_stream_class;
	if (argc == 1) 
		packet_peer_stream_class = static_cast<PacketPeerStream *>(Variant(*argv).operator Object *());
	else 
		packet_peer_stream_class = memnew(PacketPeerStream);
	if (!packet_peer_stream_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, packet_peer_stream_class);
	return obj;
}
static JSValue packet_peer_stream_class_set_stream_peer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&PacketPeerStream::set_stream_peer, ctx, this_val, argc, argv);
};
static JSValue packet_peer_stream_class_get_stream_peer(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&PacketPeerStream::get_stream_peer, ctx, this_val, argc, argv);
};
static JSValue packet_peer_stream_class_set_input_buffer_max_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&PacketPeerStream::set_input_buffer_max_size, ctx, this_val, argc, argv);
};
static JSValue packet_peer_stream_class_set_output_buffer_max_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&PacketPeerStream::set_output_buffer_max_size, ctx, this_val, argc, argv);
};
static JSValue packet_peer_stream_class_get_input_buffer_max_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&PacketPeerStream::get_input_buffer_max_size, ctx, this_val, argc, argv);
};
static JSValue packet_peer_stream_class_get_output_buffer_max_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&PacketPeerStream::get_output_buffer_max_size, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry packet_peer_stream_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_stream_peer", 1, &packet_peer_stream_class_set_stream_peer),
	JS_CFUNC_DEF("get_stream_peer", 0, &packet_peer_stream_class_get_stream_peer),
	JS_CFUNC_DEF("set_input_buffer_max_size", 1, &packet_peer_stream_class_set_input_buffer_max_size),
	JS_CFUNC_DEF("set_output_buffer_max_size", 1, &packet_peer_stream_class_set_output_buffer_max_size),
	JS_CFUNC_DEF("get_input_buffer_max_size", 0, &packet_peer_stream_class_get_input_buffer_max_size),
	JS_CFUNC_DEF("get_output_buffer_max_size", 0, &packet_peer_stream_class_get_output_buffer_max_size),
};

static void define_packet_peer_stream_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "input_buffer_max_size"),
        JS_NewCFunction(ctx, packet_peer_stream_class_get_input_buffer_max_size, "get_input_buffer_max_size", 0),
        JS_NewCFunction(ctx, packet_peer_stream_class_set_input_buffer_max_size, "set_input_buffer_max_size", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "output_buffer_max_size"),
        JS_NewCFunction(ctx, packet_peer_stream_class_get_output_buffer_max_size, "get_output_buffer_max_size", 0),
        JS_NewCFunction(ctx, packet_peer_stream_class_set_output_buffer_max_size, "set_output_buffer_max_size", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "stream_peer"),
        JS_NewCFunction(ctx, packet_peer_stream_class_get_stream_peer, "get_stream_peer", 0),
        JS_NewCFunction(ctx, packet_peer_stream_class_set_stream_peer, "set_stream_peer", 1),
        JS_PROP_GETSET
    );
	
}

static void define_packet_peer_stream_enum(JSContext *ctx, JSValue proto) {
}

static int js_packet_peer_stream_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["PacketPeerStream"] = PacketPeerStream::__class_id;
	class_id_list.insert(PacketPeerStream::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), PacketPeerStream::__class_id, &packet_peer_stream_class_def);

	JSValue proto = JS_NewObjectClass(ctx, PacketPeerStream::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, PacketPeer::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, PacketPeerStream::__class_id, proto);

	define_packet_peer_stream_property(ctx, proto);
	define_packet_peer_stream_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, packet_peer_stream_class_proto_funcs, _countof(packet_peer_stream_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, packet_peer_stream_class_constructor, "PacketPeerStream", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "PacketPeerStream", ctor);
	constructors[PacketPeerStream::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_packet_peer_stream_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/packet_peer';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_packet_peer_stream_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "PacketPeerStream");
	return m;
}

JSModuleDef *js_init_packet_peer_stream_module(JSContext *ctx) {
	return _js_init_packet_peer_stream_module(ctx, "@godot/classes/packet_peer_stream");
}

void register_packet_peer_stream() {
	PacketPeerStream::__init_js_class_id();
	js_init_packet_peer_stream_module(ctx);
}