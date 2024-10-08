
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/text_server_advanced.hpp>
#include <godot_cpp/classes/text_server_extension.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void text_server_advanced_class_finalizer(JSRuntime *rt, JSValue val) {
	TextServerAdvanced *text_server_advanced = static_cast<TextServerAdvanced *>(JS_GetOpaque(val, TextServerAdvanced::__class_id));
	if (text_server_advanced)
		TextServerAdvanced::free(nullptr, text_server_advanced);
}

static JSClassDef text_server_advanced_class_def = {
	"TextServerAdvanced",
	.finalizer = text_server_advanced_class_finalizer
};

static JSValue text_server_advanced_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	TextServerAdvanced *text_server_advanced_class;
	JSValue obj = JS_NewObjectClass(ctx, TextServerAdvanced::__class_id);
	if (JS_IsException(obj))
		return obj;
	text_server_advanced_class = memnew(TextServerAdvanced);
	if (!text_server_advanced_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, text_server_advanced_class);
	return obj;
}

static int js_text_server_advanced_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&TextServerAdvanced::__class_id);
	classes["TextServerAdvanced"] = TextServerAdvanced::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), TextServerAdvanced::__class_id, &text_server_advanced_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, TextServerExtension::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, TextServerAdvanced::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, text_server_advanced_class_constructor, "TextServerAdvanced", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "TextServerAdvanced", ctor);

	return 0;
}

JSModuleDef *_js_init_text_server_advanced_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_text_server_advanced_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "TextServerAdvanced");
	return m;
}

JSModuleDef *js_init_text_server_advanced_module(JSContext *ctx) {
	return _js_init_text_server_advanced_module(ctx, "godot/classes/text_server_advanced");
}

void register_text_server_advanced() {
	js_init_text_server_advanced_module(ctx);
}