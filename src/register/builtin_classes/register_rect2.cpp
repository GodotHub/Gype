
#include "quickjs/quickjs.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/variant/rect2.hpp>

using namespace godot;

static void rect2_class_finalizer(JSRuntime *rt, JSValue val) {
	Rect2 *rect2 = static_cast<Rect2 *>(JS_GetOpaque(val, Rect2::__class_id));
	if (rect2)
		memfree(rect2);
}

static JSClassDef rect2_class_def = {
	"Rect2",
	.finalizer = rect2_class_finalizer
};

static JSValue rect2_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	Rect2 *rect2_class;
	JSValue obj = JS_NewObjectClass(ctx, Rect2::__class_id);
	if (JS_IsException(obj))
		return obj;
	rect2_class = memnew(Rect2);
	if (!rect2_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, rect2_class);
	return obj;
}

void define_rect2_property(JSContext *ctx, JSValue obj) {
}

static int js_rect2_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&Rect2::__class_id);
	classes["Rect2"] = Rect2::__class_id;
	class_id_list.insert(Rect2::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), Rect2::__class_id, &rect2_class_def);

	JSValue proto = JS_NewObject(ctx);
	JS_SetClassProto(ctx, Rect2::__class_id, proto);
	define_rect2_property(ctx, proto);

	JSValue ctor = JS_NewCFunction2(ctx, rect2_class_constructor, "Rect2", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "Rect2", ctor);

	return 0;
}

JSModuleDef *_js_init_rect2_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_rect2_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Rect2");
	return m;
}

JSModuleDef *js_init_rect2_module(JSContext *ctx) {
	return _js_init_rect2_module(ctx, "godot/classes/rect2");
}

void register_rect2() {
	Rect2::__init_js_class_id();
	js_init_rect2_module(ctx);
}