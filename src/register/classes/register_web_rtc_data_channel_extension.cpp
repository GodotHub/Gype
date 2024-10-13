
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/web_rtc_data_channel.hpp>
#include <godot_cpp/classes/web_rtc_data_channel_extension.hpp>
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
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");

	if (JS_IsObject(proto)) {
		JS_SetPrototype(ctx, obj, proto);
	}
	JS_FreeValue(ctx, proto);

	
	return obj;
}

void define_web_rtc_data_channel_extension_property(JSContext *ctx, JSValue obj) {
}

static int js_web_rtc_data_channel_extension_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&WebRTCDataChannelExtension::__class_id);
	classes["WebRTCDataChannelExtension"] = WebRTCDataChannelExtension::__class_id;
	class_id_list.insert(WebRTCDataChannelExtension::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), WebRTCDataChannelExtension::__class_id, &web_rtc_data_channel_extension_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, WebRTCDataChannel::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, WebRTCDataChannelExtension::__class_id, proto);
	define_web_rtc_data_channel_extension_property(ctx, proto);

	JSValue ctor = JS_NewCFunction2(ctx, web_rtc_data_channel_extension_class_constructor, "WebRTCDataChannelExtension", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "WebRTCDataChannelExtension", ctor);

	return 0;
}

JSModuleDef *_js_init_web_rtc_data_channel_extension_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/web_rtc_data_channel';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
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
	WebRTCDataChannelExtension::__init_js_class_id();
	js_init_web_rtc_data_channel_extension_module(ctx);
}