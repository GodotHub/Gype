
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/h_scroll_bar.hpp>
#include <godot_cpp/classes/scroll_bar.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void h_scroll_bar_class_finalizer(JSRuntime *rt, JSValue val) {
	HScrollBar *h_scroll_bar = static_cast<HScrollBar *>(JS_GetOpaque(val, HScrollBar::__class_id));
	if (h_scroll_bar)
		HScrollBar::free(nullptr, h_scroll_bar);
}

static JSClassDef h_scroll_bar_class_def = {
	"HScrollBar",
	.finalizer = h_scroll_bar_class_finalizer
};

static JSValue h_scroll_bar_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	HScrollBar *h_scroll_bar_class;
	JSValue obj = JS_NewObjectClass(ctx, HScrollBar::__class_id);
	if (JS_IsException(obj))
		return obj;
	h_scroll_bar_class = memnew(HScrollBar);
	if (!h_scroll_bar_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, h_scroll_bar_class);
	return obj;
}

static int js_h_scroll_bar_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&HScrollBar::__class_id);
	classes["HScrollBar"] = HScrollBar::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), HScrollBar::__class_id, &h_scroll_bar_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, ScrollBar::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, HScrollBar::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, h_scroll_bar_class_constructor, "HScrollBar", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "HScrollBar", ctor);

	return 0;
}

JSModuleDef *_js_init_h_scroll_bar_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_h_scroll_bar_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "HScrollBar");
	return m;
}

JSModuleDef *js_init_h_scroll_bar_module(JSContext *ctx) {
	return _js_init_h_scroll_bar_module(ctx, "godot/classes/h_scroll_bar");
}

void register_h_scroll_bar() {
	js_init_h_scroll_bar_module(ctx);
}