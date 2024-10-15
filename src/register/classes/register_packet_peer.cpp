
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/packet_peer.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void packet_peer_class_finalizer(JSRuntime *rt, JSValue val) {
	PacketPeer *packet_peer = static_cast<PacketPeer *>(JS_GetOpaque(val, PacketPeer::__class_id));
	if (packet_peer)
		memdelete(packet_peer);
}

static JSClassDef packet_peer_class_def = {
	"PacketPeer",
	.finalizer = packet_peer_class_finalizer
};

static JSValue packet_peer_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, PacketPeer::__class_id);
	if (JS_IsException(obj))
		return obj;
	PacketPeer *packet_peer_class = memnew(PacketPeer);
	if (!packet_peer_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, packet_peer_class);	
	return obj;
}
static JSValue packet_peer_class_get_var(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&PacketPeer::get_var, ctx, this_val, argc, argv);
};
static JSValue packet_peer_class_put_var(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&PacketPeer::put_var, ctx, this_val, argc, argv);
};
static JSValue packet_peer_class_get_packet(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&PacketPeer::get_packet, ctx, this_val, argc, argv);
};
static JSValue packet_peer_class_put_packet(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&PacketPeer::put_packet, ctx, this_val, argc, argv);
};
static JSValue packet_peer_class_get_packet_error(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PacketPeer::get_packet_error, ctx, this_val, argc, argv);
};
static JSValue packet_peer_class_get_available_packet_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PacketPeer::get_available_packet_count, ctx, this_val, argc, argv);
};
static JSValue packet_peer_class_get_encode_buffer_max_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&PacketPeer::get_encode_buffer_max_size, ctx, this_val, argc, argv);
};
static JSValue packet_peer_class_set_encode_buffer_max_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&PacketPeer::set_encode_buffer_max_size, ctx, this_val, argc, argv);
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

void define_packet_peer_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "encode_buffer_max_size"),
        JS_NewCFunction(ctx, packet_peer_class_get_encode_buffer_max_size, "get_encode_buffer_max_size", 0),
        JS_NewCFunction(ctx, packet_peer_class_set_encode_buffer_max_size, "set_encode_buffer_max_size", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
}

static int js_packet_peer_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&PacketPeer::__class_id);
	classes["PacketPeer"] = PacketPeer::__class_id;
	class_id_list.insert(PacketPeer::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), PacketPeer::__class_id, &packet_peer_class_def);

	JSValue proto = JS_NewObjectClass(ctx, PacketPeer::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, PacketPeer::__class_id, proto);

	define_packet_peer_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, packet_peer_class_proto_funcs, _countof(packet_peer_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, packet_peer_class_constructor, "PacketPeer", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "PacketPeer", ctor);

	return 0;
}

JSModuleDef *_js_init_packet_peer_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/ref_counted';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
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
	PacketPeer::__init_js_class_id();
	js_init_packet_peer_module(ctx);
}