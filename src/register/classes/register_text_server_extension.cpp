
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/image.hpp>
#include <godot_cpp/classes/text_server.hpp>
#include <godot_cpp/classes/text_server_extension.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void text_server_extension_class_finalizer(JSRuntime *rt, JSValue val) {
	TextServerExtension *text_server_extension = static_cast<TextServerExtension *>(JS_GetOpaque(val, TextServerExtension::__class_id));
	if (text_server_extension)
		TextServerExtension::free(nullptr, text_server_extension);
}

static JSClassDef text_server_extension_class_def = {
	"TextServerExtension",
	.finalizer = text_server_extension_class_finalizer
};

static JSValue text_server_extension_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	TextServerExtension *text_server_extension_class;
	JSValue obj = JS_NewObjectClass(ctx, TextServerExtension::__class_id);
	if (JS_IsException(obj))
		return obj;
	text_server_extension_class = memnew(TextServerExtension);
	if (!text_server_extension_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, text_server_extension_class);
	return obj;
}

static int js_text_server_extension_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&TextServerExtension::__class_id);
	classes["TextServerExtension"] = TextServerExtension::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), TextServerExtension::__class_id, &text_server_extension_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, TextServer::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, TextServerExtension::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, text_server_extension_class_constructor, "TextServerExtension", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "TextServerExtension", ctor);

	return 0;
}

JSModuleDef *_js_init_text_server_extension_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_text_server_extension_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "TextServerExtension");
	return m;
}

JSModuleDef *js_init_text_server_extension_module(JSContext *ctx) {
	return _js_init_text_server_extension_module(ctx, "godot/classes/text_server_extension");
}

void register_text_server_extension() {
	js_init_text_server_extension_module(ctx);
}