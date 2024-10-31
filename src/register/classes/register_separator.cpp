
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/separator.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void separator_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef separator_class_def = {
	"Separator",
	.finalizer = separator_class_finalizer
};

static JSValue separator_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, Separator::__class_id);
	if (JS_IsException(obj))
		return obj;

	Separator *separator_class;
	if (argc == 1) 
		separator_class = static_cast<Separator *>(Variant(*argv).operator Object *());
	else 
		separator_class = memnew(Separator);
	if (!separator_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, separator_class);
	return obj;
}

static void define_separator_property(JSContext *ctx, JSValue proto) {
	
}

static void define_separator_enum(JSContext *ctx, JSValue proto) {
}

static int js_separator_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["Separator"] = Separator::__class_id;
	class_id_list.insert(Separator::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), Separator::__class_id, &separator_class_def);

	JSValue proto = JS_NewObjectClass(ctx, Separator::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Control::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Separator::__class_id, proto);

	define_separator_property(ctx, proto);
	define_separator_enum(ctx, proto);
	JSValue ctor = JS_NewCFunction2(ctx, separator_class_constructor, "Separator", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "Separator", ctor);

	return 0;
}

JSModuleDef *_js_init_separator_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/control';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_separator_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Separator");
	return m;
}

JSModuleDef *js_init_separator_module(JSContext *ctx) {
	return _js_init_separator_module(ctx, "@godot/classes/separator");
}

void register_separator() {
	Separator::__init_js_class_id();
	js_init_separator_module(ctx);
}