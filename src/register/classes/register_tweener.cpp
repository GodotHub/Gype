
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/tweener.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void tweener_class_finalizer(JSRuntime *rt, JSValue val) {
	Tweener *tweener = static_cast<Tweener *>(JS_GetOpaque(val, Tweener::__class_id));
	if (tweener)
		Tweener::free(nullptr, tweener);
}

static JSClassDef tweener_class_def = {
	"Tweener",
	.finalizer = tweener_class_finalizer
};

static JSValue tweener_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	Tweener *tweener_class;
	JSValue obj = JS_NewObjectClass(ctx, Tweener::__class_id);
	if (JS_IsException(obj))
		return obj;
	tweener_class = memnew(Tweener);
	if (!tweener_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, tweener_class);
	return obj;
}

static int js_tweener_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&Tweener::__class_id);
	classes["Tweener"] = Tweener::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), Tweener::__class_id, &tweener_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Tweener::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, tweener_class_constructor, "Tweener", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "Tweener", ctor);

	return 0;
}

JSModuleDef *_js_init_tweener_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_tweener_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Tweener");
	return m;
}

JSModuleDef *js_init_tweener_module(JSContext *ctx) {
	return _js_init_tweener_module(ctx, "godot/classes/tweener");
}

void register_tweener() {
	js_init_tweener_module(ctx);
}