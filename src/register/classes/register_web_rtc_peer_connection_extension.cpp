
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/web_rtc_data_channel.hpp>
#include <godot_cpp/classes/web_rtc_peer_connection_extension.hpp>
#include <godot_cpp/classes/web_rtc_peer_connection.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void web_rtc_peer_connection_extension_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef web_rtc_peer_connection_extension_class_def = {
	"WebRTCPeerConnectionExtension",
	.finalizer = web_rtc_peer_connection_extension_class_finalizer
};

static JSValue web_rtc_peer_connection_extension_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, WebRTCPeerConnectionExtension::__class_id);
	if (JS_IsException(obj))
		return obj;
	WebRTCPeerConnectionExtension *web_rtc_peer_connection_extension_class = memnew(WebRTCPeerConnectionExtension);
	if (!web_rtc_peer_connection_extension_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, web_rtc_peer_connection_extension_class);	
	return obj;
}

void define_web_rtc_peer_connection_extension_property(JSContext *ctx, JSValue obj) {
}

static int js_web_rtc_peer_connection_extension_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&WebRTCPeerConnectionExtension::__class_id);
	classes["WebRTCPeerConnectionExtension"] = WebRTCPeerConnectionExtension::__class_id;
	class_id_list.insert(WebRTCPeerConnectionExtension::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), WebRTCPeerConnectionExtension::__class_id, &web_rtc_peer_connection_extension_class_def);

	JSValue proto = JS_NewObjectClass(ctx, WebRTCPeerConnectionExtension::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, WebRTCPeerConnection::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, WebRTCPeerConnectionExtension::__class_id, proto);

	define_web_rtc_peer_connection_extension_property(ctx, proto);
	JSValue ctor = JS_NewCFunction2(ctx, web_rtc_peer_connection_extension_class_constructor, "WebRTCPeerConnectionExtension", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "WebRTCPeerConnectionExtension", ctor);

	return 0;
}

JSModuleDef *_js_init_web_rtc_peer_connection_extension_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/web_rtc_peer_connection';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
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
	WebRTCPeerConnectionExtension::__init_js_class_id();
	js_init_web_rtc_peer_connection_extension_module(ctx);
}