
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/text_server_extension.hpp>
#include <godot_cpp/classes/text_server_dummy.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void text_server_dummy_class_finalizer(JSRuntime *rt, JSValue val) {
	TextServerDummy *text_server_dummy = static_cast<TextServerDummy *>(JS_GetOpaque(val, TextServerDummy::__class_id));
	if (text_server_dummy)
		memdelete(text_server_dummy);
}

static JSClassDef text_server_dummy_class_def = {
	"TextServerDummy",
	.finalizer = text_server_dummy_class_finalizer
};

static JSValue text_server_dummy_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, TextServerDummy::__class_id);
	if (JS_IsException(obj))
		return obj;
	TextServerDummy *text_server_dummy_class = memnew(TextServerDummy);
	if (!text_server_dummy_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, text_server_dummy_class);	
	return obj;
}

void define_text_server_dummy_property(JSContext *ctx, JSValue obj) {
}

static int js_text_server_dummy_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&TextServerDummy::__class_id);
	classes["TextServerDummy"] = TextServerDummy::__class_id;
	class_id_list.insert(TextServerDummy::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), TextServerDummy::__class_id, &text_server_dummy_class_def);

	JSValue proto = JS_NewObjectClass(ctx, TextServerDummy::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, TextServerExtension::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, TextServerDummy::__class_id, proto);

	define_text_server_dummy_property(ctx, proto);
	JSValue ctor = JS_NewCFunction2(ctx, text_server_dummy_class_constructor, "TextServerDummy", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "TextServerDummy", ctor);

	return 0;
}

JSModuleDef *_js_init_text_server_dummy_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/text_server_extension';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_text_server_dummy_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "TextServerDummy");
	return m;
}

JSModuleDef *js_init_text_server_dummy_module(JSContext *ctx) {
	return _js_init_text_server_dummy_module(ctx, "godot/classes/text_server_dummy");
}

void register_text_server_dummy() {
	TextServerDummy::__init_js_class_id();
	js_init_text_server_dummy_module(ctx);
}