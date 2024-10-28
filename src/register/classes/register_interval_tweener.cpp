
#include "quickjs/env.h"
#include "quickjs/quickjs.h"
#include "quickjs/quickjs_helper.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/func_utils.h"
#include <godot_cpp/classes/interval_tweener.hpp>
#include <godot_cpp/classes/tweener.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void interval_tweener_class_finalizer(JSRuntime *rt, JSValue val) {
	// nothing
}

static JSClassDef interval_tweener_class_def = {
	"IntervalTweener",
	.finalizer = interval_tweener_class_finalizer
};

static JSValue interval_tweener_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, IntervalTweener::__class_id);
	if (JS_IsException(obj))
		return obj;
	IntervalTweener *interval_tweener_class = memnew(IntervalTweener);
	if (!interval_tweener_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, interval_tweener_class);
	return obj;
}

void define_interval_tweener_property(JSContext *ctx, JSValue obj) {
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
}

static int js_interval_tweener_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&IntervalTweener::__class_id);
	classes["IntervalTweener"] = IntervalTweener::__class_id;
	class_id_list.insert(IntervalTweener::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), IntervalTweener::__class_id, &interval_tweener_class_def);

	JSValue proto = JS_NewObjectClass(ctx, IntervalTweener::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Tweener::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, IntervalTweener::__class_id, proto);

	define_interval_tweener_property(ctx, proto);
	define_node_enum(ctx, proto);
	JSValue ctor = JS_NewCFunction2(ctx, interval_tweener_class_constructor, "IntervalTweener", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "IntervalTweener", ctor);

	return 0;
}

JSModuleDef *_js_init_interval_tweener_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/tweener';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_interval_tweener_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "IntervalTweener");
	return m;
}

JSModuleDef *js_init_interval_tweener_module(JSContext *ctx) {
	return _js_init_interval_tweener_module(ctx, "godot/classes/interval_tweener");
}

void register_interval_tweener() {
	IntervalTweener::__init_js_class_id();
	js_init_interval_tweener_module(ctx);
}