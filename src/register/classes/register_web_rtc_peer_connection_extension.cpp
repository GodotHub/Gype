
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/web_rtc_data_channel.hpp>
#include <godot_cpp/classes/web_rtc_peer_connection.hpp>
#include <godot_cpp/classes/web_rtc_peer_connection_extension.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void web_rtc_peer_connection_extension_class_finalizer(JSRuntime *rt, JSValue val) {
	WebRTCPeerConnectionExtension *web_rtc_peer_connection_extension = static_cast<WebRTCPeerConnectionExtension *>(JS_GetOpaque(val, WebRTCPeerConnectionExtension::__class_id));
	if (web_rtc_peer_connection_extension)
		WebRTCPeerConnectionExtension::free(nullptr, web_rtc_peer_connection_extension);
}

static JSClassDef web_rtc_peer_connection_extension_class_def = {
	"WebRTCPeerConnectionExtension",
	.finalizer = web_rtc_peer_connection_extension_class_finalizer
};

static JSValue web_rtc_peer_connection_extension_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	WebRTCPeerConnectionExtension *web_rtc_peer_connection_extension_class;
	JSValue obj = JS_NewObjectClass(ctx, WebRTCPeerConnectionExtension::__class_id);
	if (JS_IsException(obj))
		return obj;
	web_rtc_peer_connection_extension_class = memnew(WebRTCPeerConnectionExtension);
	if (!web_rtc_peer_connection_extension_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, web_rtc_peer_connection_extension_class);
	return obj;
}

static int js_web_rtc_peer_connection_extension_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&WebRTCPeerConnectionExtension::__class_id);
	classes["WebRTCPeerConnectionExtension"] = WebRTCPeerConnectionExtension::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), WebRTCPeerConnectionExtension::__class_id, &web_rtc_peer_connection_extension_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, WebRTCPeerConnection::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, WebRTCPeerConnectionExtension::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, web_rtc_peer_connection_extension_class_constructor, "WebRTCPeerConnectionExtension", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "WebRTCPeerConnectionExtension", ctor);

	return 0;
}

JSModuleDef *_js_init_web_rtc_peer_connection_extension_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_web_rtc_peer_connection_extension_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "WebRTCPeerConnectionExtension");
	return m;
}

JSModuleDef *js_init_web_rtc_peer_connection_extension_module(JSContext *ctx) {
	return _js_init_web_rtc_peer_connection_extension_module(ctx, "godot/classes/web_rtc_peer_connection_extension");
}

void register_web_rtc_peer_connection_extension() {
	js_init_web_rtc_peer_connection_extension_module(ctx);
}