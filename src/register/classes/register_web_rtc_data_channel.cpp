
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/packet_peer.hpp>
#include <godot_cpp/classes/web_rtc_data_channel.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void web_rtc_data_channel_class_finalizer(JSRuntime *rt, JSValue val) {
	WebRTCDataChannel *web_rtc_data_channel = static_cast<WebRTCDataChannel *>(JS_GetOpaque(val, WebRTCDataChannel::__class_id));
	if (web_rtc_data_channel)
		WebRTCDataChannel::free(nullptr, web_rtc_data_channel);
}

static JSClassDef web_rtc_data_channel_class_def = {
	"WebRTCDataChannel",
	.finalizer = web_rtc_data_channel_class_finalizer
};

static JSValue web_rtc_data_channel_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	WebRTCDataChannel *web_rtc_data_channel_class;
	JSValue obj = JS_NewObjectClass(ctx, WebRTCDataChannel::__class_id);
	if (JS_IsException(obj))
		return obj;
	web_rtc_data_channel_class = memnew(WebRTCDataChannel);
	if (!web_rtc_data_channel_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, web_rtc_data_channel_class);
	return obj;
}
static JSValue web_rtc_data_channel_class_poll(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&WebRTCDataChannel::poll, WebRTCDataChannel::__class_id, ctx, this_val, argv);
};
static JSValue web_rtc_data_channel_class_close(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&WebRTCDataChannel::close, WebRTCDataChannel::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue web_rtc_data_channel_class_was_string_packet(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&WebRTCDataChannel::was_string_packet, WebRTCDataChannel::__class_id, ctx, this_val, argv);
};
static JSValue web_rtc_data_channel_class_set_write_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&WebRTCDataChannel::set_write_mode, WebRTCDataChannel::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue web_rtc_data_channel_class_get_write_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&WebRTCDataChannel::get_write_mode, WebRTCDataChannel::__class_id, ctx, this_val, argv);
};
static JSValue web_rtc_data_channel_class_get_ready_state(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&WebRTCDataChannel::get_ready_state, WebRTCDataChannel::__class_id, ctx, this_val, argv);
};
static JSValue web_rtc_data_channel_class_get_label(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&WebRTCDataChannel::get_label, WebRTCDataChannel::__class_id, ctx, this_val, argv);
};
static JSValue web_rtc_data_channel_class_is_ordered(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&WebRTCDataChannel::is_ordered, WebRTCDataChannel::__class_id, ctx, this_val, argv);
};
static JSValue web_rtc_data_channel_class_get_id(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&WebRTCDataChannel::get_id, WebRTCDataChannel::__class_id, ctx, this_val, argv);
};
static JSValue web_rtc_data_channel_class_get_max_packet_life_time(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&WebRTCDataChannel::get_max_packet_life_time, WebRTCDataChannel::__class_id, ctx, this_val, argv);
};
static JSValue web_rtc_data_channel_class_get_max_retransmits(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&WebRTCDataChannel::get_max_retransmits, WebRTCDataChannel::__class_id, ctx, this_val, argv);
};
static JSValue web_rtc_data_channel_class_get_protocol(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&WebRTCDataChannel::get_protocol, WebRTCDataChannel::__class_id, ctx, this_val, argv);
};
static JSValue web_rtc_data_channel_class_is_negotiated(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&WebRTCDataChannel::is_negotiated, WebRTCDataChannel::__class_id, ctx, this_val, argv);
};
static JSValue web_rtc_data_channel_class_get_buffered_amount(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&WebRTCDataChannel::get_buffered_amount, WebRTCDataChannel::__class_id, ctx, this_val, argv);
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

static int js_web_rtc_data_channel_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&WebRTCDataChannel::__class_id);
	classes["WebRTCDataChannel"] = WebRTCDataChannel::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), WebRTCDataChannel::__class_id, &web_rtc_data_channel_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, PacketPeer::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, WebRTCDataChannel::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, web_rtc_data_channel_class_proto_funcs, _countof(web_rtc_data_channel_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, web_rtc_data_channel_class_constructor, "WebRTCDataChannel", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "WebRTCDataChannel", ctor);

	return 0;
}

JSModuleDef *_js_init_web_rtc_data_channel_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_web_rtc_data_channel_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "WebRTCDataChannel");
	return m;
}

JSModuleDef *js_init_web_rtc_data_channel_module(JSContext *ctx) {
	return _js_init_web_rtc_data_channel_module(ctx, "godot/classes/web_rtc_data_channel");
}

void register_web_rtc_data_channel() {
	js_init_web_rtc_data_channel_module(ctx);
}