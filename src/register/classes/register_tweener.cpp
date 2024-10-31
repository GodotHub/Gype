
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/tweener.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void tweener_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef tweener_class_def = {
	"Tweener",
	.finalizer = tweener_class_finalizer
};

static JSValue tweener_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, Tweener::__class_id);
	if (JS_IsException(obj))
		return obj;

	Tweener *tweener_class;
	if (argc == 1) 
		tweener_class = static_cast<Tweener *>(Variant(*argv).operator Object *());
	else 
		tweener_class = memnew(Tweener);
	if (!tweener_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, tweener_class);
	return obj;
}
static JSValue tweener_class_get_finished_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	Tweener *opaque = reinterpret_cast<Tweener *>(JS_GetOpaque(this_val, Tweener::__class_id));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "finished_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "finished").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "finished_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}

static void define_tweener_property(JSContext *ctx, JSValue proto) {
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "finished"),
		JS_NewCFunction(ctx, tweener_class_get_finished_signal, "get_finished_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
}

static void define_tweener_enum(JSContext *ctx, JSValue proto) {
}

static int js_tweener_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["Tweener"] = Tweener::__class_id;
	class_id_list.insert(Tweener::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), Tweener::__class_id, &tweener_class_def);

	JSValue proto = JS_NewObjectClass(ctx, Tweener::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Tweener::__class_id, proto);

	define_tweener_property(ctx, proto);
	define_tweener_enum(ctx, proto);
	JSValue ctor = JS_NewCFunction2(ctx, tweener_class_constructor, "Tweener", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "Tweener", ctor);

	return 0;
}

JSModuleDef *_js_init_tweener_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/ref_counted';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_tweener_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Tweener");
	return m;
}

JSModuleDef *js_init_tweener_module(JSContext *ctx) {
	return _js_init_tweener_module(ctx, "@godot/classes/tweener");
}

void register_tweener() {
	Tweener::__init_js_class_id();
	js_init_tweener_module(ctx);
}