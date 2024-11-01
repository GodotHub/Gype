
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/text_server.hpp>
#include <godot_cpp/classes/text_server_extension.hpp>
#include <godot_cpp/classes/image.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void text_server_extension_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef text_server_extension_class_def = {
	"TextServerExtension",
	.finalizer = text_server_extension_class_finalizer
};

static JSValue text_server_extension_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, TextServerExtension::__class_id);
	if (JS_IsException(obj))
		return obj;

	TextServerExtension *text_server_extension_class;
	if (argc == 1) 
		text_server_extension_class = static_cast<TextServerExtension *>(Variant(*argv).operator Object *());
	else 
		text_server_extension_class = memnew(TextServerExtension);
	if (!text_server_extension_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, text_server_extension_class);
	return obj;
}

static void define_text_server_extension_property(JSContext *ctx, JSValue proto) {
	
}

static void define_text_server_extension_enum(JSContext *ctx, JSValue proto) {
}

static int js_text_server_extension_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["TextServerExtension"] = TextServerExtension::__class_id;
	class_id_list.insert(TextServerExtension::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), TextServerExtension::__class_id, &text_server_extension_class_def);

	JSValue proto = JS_NewObjectClass(ctx, TextServerExtension::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, TextServer::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, TextServerExtension::__class_id, proto);

	define_text_server_extension_property(ctx, proto);
	define_text_server_extension_enum(ctx, proto);
	JSValue ctor = JS_NewCFunction2(ctx, text_server_extension_class_constructor, "TextServerExtension", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "TextServerExtension", ctor);

	return 0;
}

JSModuleDef *_js_init_text_server_extension_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/text_server';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_text_server_extension_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "TextServerExtension");
	return m;
}

JSModuleDef *js_init_text_server_extension_module(JSContext *ctx) {
	return _js_init_text_server_extension_module(ctx, "@godot/classes/text_server_extension");
}

void register_text_server_extension() {
	TextServerExtension::__init_js_class_id();
	js_init_text_server_extension_module(ctx);
}