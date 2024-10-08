
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/web_rtc_data_channel.hpp>
#include <godot_cpp/classes/web_rtc_data_channel_extension.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void web_rtc_data_channel_extension_class_finalizer(JSRuntime *rt, JSValue val) {
	WebRTCDataChannelExtension *web_rtc_data_channel_extension = static_cast<WebRTCDataChannelExtension *>(JS_GetOpaque(val, WebRTCDataChannelExtension::__class_id));
	if (web_rtc_data_channel_extension)
		WebRTCDataChannelExtension::free(nullptr, web_rtc_data_channel_extension);
}

static JSClassDef web_rtc_data_channel_extension_class_def = {
	"WebRTCDataChannelExtension",
	.finalizer = web_rtc_data_channel_extension_class_finalizer
};

static JSValue web_rtc_data_channel_extension_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	WebRTCDataChannelExtension *web_rtc_data_channel_extension_class;
	JSValue obj = JS_NewObjectClass(ctx, WebRTCDataChannelExtension::__class_id);
	if (JS_IsException(obj))
		return obj;
	web_rtc_data_channel_extension_class = memnew(WebRTCDataChannelExtension);
	if (!web_rtc_data_channel_extension_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, web_rtc_data_channel_extension_class);
	return obj;
}

static int js_web_rtc_data_channel_extension_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&WebRTCDataChannelExtension::__class_id);
	classes["WebRTCDataChannelExtension"] = WebRTCDataChannelExtension::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), WebRTCDataChannelExtension::__class_id, &web_rtc_data_channel_extension_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, WebRTCDataChannel::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, WebRTCDataChannelExtension::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, web_rtc_data_channel_extension_class_constructor, "WebRTCDataChannelExtension", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "WebRTCDataChannelExtension", ctor);

	return 0;
}

JSModuleDef *_js_init_web_rtc_data_channel_extension_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_web_rtc_data_channel_extension_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "WebRTCDataChannelExtension");
	return m;
}

JSModuleDef *js_init_web_rtc_data_channel_extension_module(JSContext *ctx) {
	return _js_init_web_rtc_data_channel_extension_module(ctx, "godot/classes/web_rtc_data_channel_extension");
}

void register_web_rtc_data_channel_extension() {
	js_init_web_rtc_data_channel_extension_module(ctx);
}