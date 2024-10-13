
#include "quickjs/quickjs.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/variant/rect2i.hpp>

using namespace godot;

static void rect2i_class_finalizer(JSRuntime *rt, JSValue val) {
	Rect2i *rect2i = static_cast<Rect2i *>(JS_GetOpaque(val, Rect2i::__class_id));
	if (rect2i)
		memfree(rect2i);
}

static JSClassDef rect2i_class_def = {
	"Rect2i",
	.finalizer = rect2i_class_finalizer
};

static JSValue rect2i_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	Rect2i *rect2i_class;
	JSValue obj = JS_NewObjectClass(ctx, Rect2i::__class_id);
	if (JS_IsException(obj))
		return obj;
	rect2i_class = memnew(Rect2i);
	if (!rect2i_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, rect2i_class);
	return obj;
}

void define_rect2i_property(JSContext *ctx, JSValue obj) {
}

static int js_rect2i_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&Rect2i::__class_id);
	classes["Rect2i"] = Rect2i::__class_id;
	class_id_list.insert(Rect2i::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), Rect2i::__class_id, &rect2i_class_def);

	JSValue proto = JS_NewObject(ctx);
	JS_SetClassProto(ctx, Rect2i::__class_id, proto);
	define_rect2i_property(ctx, proto);

	JSValue ctor = JS_NewCFunction2(ctx, rect2i_class_constructor, "Rect2i", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "Rect2i", ctor);

	return 0;
}

JSModuleDef *_js_init_rect2i_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_rect2i_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Rect2i");
	return m;
}

JSModuleDef *js_init_rect2i_module(JSContext *ctx) {
	return _js_init_rect2i_module(ctx, "godot/classes/rect2i");
}

void register_rect2i() {
	Rect2i::__init_js_class_id();
	js_init_rect2i_module(ctx);
}