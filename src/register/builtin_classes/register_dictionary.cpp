
#include "quickjs/quickjs.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/variant/dictionary.hpp>

using namespace godot;

static void dictionary_class_finalizer(JSRuntime *rt, JSValue val) {
	Dictionary *dictionary = static_cast<Dictionary *>(JS_GetOpaque(val, Dictionary::__class_id));
	if (dictionary)
		memfree(dictionary);
}

static JSClassDef dictionary_class_def = {
	"Dictionary",
	.finalizer = dictionary_class_finalizer
};

static JSValue dictionary_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	Dictionary *dictionary_class;
	JSValue obj = JS_NewObjectClass(ctx, Dictionary::__class_id);
	if (JS_IsException(obj))
		return obj;
	dictionary_class = memnew(Dictionary);
	if (!dictionary_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, dictionary_class);
	return obj;
}

void define_dictionary_property(JSContext *ctx, JSValue obj) {
}

static int js_dictionary_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&Dictionary::__class_id);
	classes["Dictionary"] = Dictionary::__class_id;
	class_id_list.insert(Dictionary::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), Dictionary::__class_id, &dictionary_class_def);

	JSValue proto = JS_NewObject(ctx);
	JS_SetClassProto(ctx, Dictionary::__class_id, proto);
	define_dictionary_property(ctx, proto);

	JSValue ctor = JS_NewCFunction2(ctx, dictionary_class_constructor, "Dictionary", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "Dictionary", ctor);

	return 0;
}

JSModuleDef *_js_init_dictionary_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_dictionary_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Dictionary");
	return m;
}

JSModuleDef *js_init_dictionary_module(JSContext *ctx) {
	return _js_init_dictionary_module(ctx, "godot/classes/dictionary");
}

void register_dictionary() {
	Dictionary::__init_js_class_id();
	js_init_dictionary_module(ctx);
}