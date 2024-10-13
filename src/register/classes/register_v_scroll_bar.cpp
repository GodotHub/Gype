
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/scroll_bar.hpp>
#include <godot_cpp/classes/v_scroll_bar.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void v_scroll_bar_class_finalizer(JSRuntime *rt, JSValue val) {
	VScrollBar *v_scroll_bar = static_cast<VScrollBar *>(JS_GetOpaque(val, VScrollBar::__class_id));
	if (v_scroll_bar)
		VScrollBar::free(nullptr, v_scroll_bar);
}

static JSClassDef v_scroll_bar_class_def = {
	"VScrollBar",
	.finalizer = v_scroll_bar_class_finalizer
};

static JSValue v_scroll_bar_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	VScrollBar *v_scroll_bar_class;
	JSValue obj = JS_NewObjectClass(ctx, VScrollBar::__class_id);
	if (JS_IsException(obj))
		return obj;
	v_scroll_bar_class = memnew(VScrollBar);
	if (!v_scroll_bar_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, v_scroll_bar_class);
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");

	if (JS_IsObject(proto)) {
		JS_SetPrototype(ctx, obj, proto);
	}
	JS_FreeValue(ctx, proto);

	
	return obj;
}

void define_v_scroll_bar_property(JSContext *ctx, JSValue obj) {
}

static int js_v_scroll_bar_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&VScrollBar::__class_id);
	classes["VScrollBar"] = VScrollBar::__class_id;
	class_id_list.insert(VScrollBar::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), VScrollBar::__class_id, &v_scroll_bar_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, ScrollBar::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, VScrollBar::__class_id, proto);
	define_v_scroll_bar_property(ctx, proto);

	JSValue ctor = JS_NewCFunction2(ctx, v_scroll_bar_class_constructor, "VScrollBar", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "VScrollBar", ctor);

	return 0;
}

JSModuleDef *_js_init_v_scroll_bar_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/scroll_bar';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_v_scroll_bar_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "VScrollBar");
	return m;
}

JSModuleDef *js_init_v_scroll_bar_module(JSContext *ctx) {
	return _js_init_v_scroll_bar_module(ctx, "godot/classes/v_scroll_bar");
}

void register_v_scroll_bar() {
	VScrollBar::__init_js_class_id();
	js_init_v_scroll_bar_module(ctx);
}