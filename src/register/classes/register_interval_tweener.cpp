
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/interval_tweener.hpp>
#include <godot_cpp/classes/tweener.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void interval_tweener_class_finalizer(JSRuntime *rt, JSValue val) {
	IntervalTweener *interval_tweener = static_cast<IntervalTweener *>(JS_GetOpaque(val, IntervalTweener::__class_id));
	if (interval_tweener)
		IntervalTweener::free(nullptr, interval_tweener);
}

static JSClassDef interval_tweener_class_def = {
	"IntervalTweener",
	.finalizer = interval_tweener_class_finalizer
};

static JSValue interval_tweener_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	IntervalTweener *interval_tweener_class;
	JSValue obj = JS_NewObjectClass(ctx, IntervalTweener::__class_id);
	if (JS_IsException(obj))
		return obj;
	interval_tweener_class = memnew(IntervalTweener);
	if (!interval_tweener_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, interval_tweener_class);
	return obj;
}

static int js_interval_tweener_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&IntervalTweener::__class_id);
	classes["IntervalTweener"] = IntervalTweener::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), IntervalTweener::__class_id, &interval_tweener_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Tweener::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, IntervalTweener::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, interval_tweener_class_constructor, "IntervalTweener", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "IntervalTweener", ctor);

	return 0;
}

JSModuleDef *_js_init_interval_tweener_module(JSContext *ctx, const char *module_name) {
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
	js_init_interval_tweener_module(ctx);
}