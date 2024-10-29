
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/web_rtc_data_channel.hpp>
#include <godot_cpp/classes/packet_peer.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void web_rtc_data_channel_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef web_rtc_data_channel_class_def = {
	"WebRTCDataChannel",
	.finalizer = web_rtc_data_channel_class_finalizer
};

static JSValue web_rtc_data_channel_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, WebRTCDataChannel::__class_id);
	if (JS_IsException(obj))
		return obj;
	WebRTCDataChannel *web_rtc_data_channel_class = memnew(WebRTCDataChannel);
	if (!web_rtc_data_channel_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, web_rtc_data_channel_class);	
	return obj;
}
static JSValue web_rtc_data_channel_class_poll(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&WebRTCDataChannel::poll, ctx, this_val, argc, argv);
};
static JSValue web_rtc_data_channel_class_close(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&WebRTCDataChannel::close, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue web_rtc_data_channel_class_was_string_packet(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&WebRTCDataChannel::was_string_packet, ctx, this_val, argc, argv);
};
static JSValue web_rtc_data_channel_class_set_write_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&WebRTCDataChannel::set_write_mode, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue web_rtc_data_channel_class_get_write_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&WebRTCDataChannel::get_write_mode, ctx, this_val, argc, argv);
};
static JSValue web_rtc_data_channel_class_get_ready_state(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&WebRTCDataChannel::get_ready_state, ctx, this_val, argc, argv);
};
static JSValue web_rtc_data_channel_class_get_label(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&WebRTCDataChannel::get_label, ctx, this_val, argc, argv);
};
static JSValue web_rtc_data_channel_class_is_ordered(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&WebRTCDataChannel::is_ordered, ctx, this_val, argc, argv);
};
static JSValue web_rtc_data_channel_class_get_id(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&WebRTCDataChannel::get_id, ctx, this_val, argc, argv);
};
static JSValue web_rtc_data_channel_class_get_max_packet_life_time(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&WebRTCDataChannel::get_max_packet_life_time, ctx, this_val, argc, argv);
};
static JSValue web_rtc_data_channel_class_get_max_retransmits(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&WebRTCDataChannel::get_max_retransmits, ctx, this_val, argc, argv);
};
static JSValue web_rtc_data_channel_class_get_protocol(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&WebRTCDataChannel::get_protocol, ctx, this_val, argc, argv);
};
static JSValue web_rtc_data_channel_class_is_negotiated(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&WebRTCDataChannel::is_negotiated, ctx, this_val, argc, argv);
};
static JSValue web_rtc_data_channel_class_get_buffered_amount(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&WebRTCDataChannel::get_buffered_amount, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry web_rtc_data_channel_class_proto_funcs[] = {
	JS_CFUNC_DEF("poll", 0, &web_rtc_data_channel_class_poll),
	JS_CFUNC_DEF("close", 0, &web_rtc_data_channel_class_close),
	JS_CFUNC_DEF("was_string_packet", 0, &web_rtc_data_channel_class_was_string_packet),
	JS_CFUNC_DEF("set_write_mode", 1, &web_rtc_data_channel_class_set_write_mode),
	JS_CFUNC_DEF("get_write_mode", 0, &web_rtc_data_channel_class_get_write_mode),
	JS_CFUNC_DEF("get_ready_state", 0, &web_rtc_data_channel_class_get_ready_state),
	JS_CFUNC_DEF("get_label", 0, &web_rtc_data_channel_class_get_label),
	JS_CFUNC_DEF("is_ordered", 0, &web_rtc_data_channel_class_is_ordered),
	JS_CFUNC_DEF("get_id", 0, &web_rtc_data_channel_class_get_id),
	JS_CFUNC_DEF("get_max_packet_life_time", 0, &web_rtc_data_channel_class_get_max_packet_life_time),
	JS_CFUNC_DEF("get_max_retransmits", 0, &web_rtc_data_channel_class_get_max_retransmits),
	JS_CFUNC_DEF("get_protocol", 0, &web_rtc_data_channel_class_get_protocol),
	JS_CFUNC_DEF("is_negotiated", 0, &web_rtc_data_channel_class_is_negotiated),
	JS_CFUNC_DEF("get_buffered_amount", 0, &web_rtc_data_channel_class_get_buffered_amount),
};

void define_web_rtc_data_channel_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "write_mode"),
        JS_NewCFunction(ctx, web_rtc_data_channel_class_get_write_mode, "get_write_mode", 0),
        JS_NewCFunction(ctx, web_rtc_data_channel_class_set_write_mode, "set_write_mode", 1),
        JS_PROP_GETSET
    );
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
	JSValue WriteMode_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, WriteMode_obj, "WRITE_MODE_TEXT", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, WriteMode_obj, "WRITE_MODE_BINARY", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, proto, "WriteMode", WriteMode_obj);
	JSValue ChannelState_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, ChannelState_obj, "STATE_CONNECTING", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, ChannelState_obj, "STATE_OPEN", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, ChannelState_obj, "STATE_CLOSING", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, ChannelState_obj, "STATE_CLOSED", JS_NewInt64(ctx, 3));
	JS_SetPropertyStr(ctx, proto, "ChannelState", ChannelState_obj);
}

static int js_web_rtc_data_channel_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&WebRTCDataChannel::__class_id);
	classes["WebRTCDataChannel"] = WebRTCDataChannel::__class_id;
	class_id_list.insert(WebRTCDataChannel::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), WebRTCDataChannel::__class_id, &web_rtc_data_channel_class_def);

	JSValue proto = JS_NewObjectClass(ctx, WebRTCDataChannel::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, PacketPeer::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, WebRTCDataChannel::__class_id, proto);

	define_web_rtc_data_channel_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, web_rtc_data_channel_class_proto_funcs, _countof(web_rtc_data_channel_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, web_rtc_data_channel_class_constructor, "WebRTCDataChannel", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "WebRTCDataChannel", ctor);

	return 0;
}

JSModuleDef *_js_init_web_rtc_data_channel_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/packet_peer';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_web_rtc_data_channel_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "WebRTCDataChannel");
	return m;
}

JSModuleDef *js_init_web_rtc_data_channel_module(JSContext *ctx) {
	return _js_init_web_rtc_data_channel_module(ctx, "@godot/classes/web_rtc_data_channel");
}

void register_web_rtc_data_channel() {
	WebRTCDataChannel::__init_js_class_id();
	js_init_web_rtc_data_channel_module(ctx);
}