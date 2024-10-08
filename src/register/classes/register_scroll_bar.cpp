
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/range.hpp>
#include <godot_cpp/classes/scroll_bar.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void scroll_bar_class_finalizer(JSRuntime *rt, JSValue val) {
	ScrollBar *scroll_bar = static_cast<ScrollBar *>(JS_GetOpaque(val, ScrollBar::__class_id));
	if (scroll_bar)
		ScrollBar::free(nullptr, scroll_bar);
}

static JSClassDef scroll_bar_class_def = {
	"ScrollBar",
	.finalizer = scroll_bar_class_finalizer
};

static JSValue scroll_bar_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	ScrollBar *scroll_bar_class;
	JSValue obj = JS_NewObjectClass(ctx, ScrollBar::__class_id);
	if (JS_IsException(obj))
		return obj;
	scroll_bar_class = memnew(ScrollBar);
	if (!scroll_bar_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, scroll_bar_class);
	return obj;
}
static JSValue scroll_bar_class_set_custom_step(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ScrollBar::set_custom_step, ScrollBar::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue scroll_bar_class_get_custom_step(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ScrollBar::get_custom_step, ScrollBar::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry scroll_bar_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_custom_step", 1, &scroll_bar_class_set_custom_step),
	JS_CFUNC_DEF("get_custom_step", 0, &scroll_bar_class_get_custom_step),
};

static int js_scroll_bar_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&ScrollBar::__class_id);
	classes["ScrollBar"] = ScrollBar::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), ScrollBar::__class_id, &scroll_bar_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Range::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ScrollBar::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, scroll_bar_class_proto_funcs, _countof(scroll_bar_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, scroll_bar_class_constructor, "ScrollBar", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "ScrollBar", ctor);

	return 0;
}

JSModuleDef *_js_init_scroll_bar_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_scroll_bar_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "ScrollBar");
	return m;
}

JSModuleDef *js_init_scroll_bar_module(JSContext *ctx) {
	return _js_init_scroll_bar_module(ctx, "godot/classes/scroll_bar");
}

void register_scroll_bar() {
	js_init_scroll_bar_module(ctx);
}