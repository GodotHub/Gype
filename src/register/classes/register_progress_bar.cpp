
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/progress_bar.hpp>
#include <godot_cpp/classes/range.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void progress_bar_class_finalizer(JSRuntime *rt, JSValue val) {
	ProgressBar *progress_bar = static_cast<ProgressBar *>(JS_GetOpaque(val, ProgressBar::__class_id));
	if (progress_bar)
		ProgressBar::free(nullptr, progress_bar);
}

static JSClassDef progress_bar_class_def = {
	"ProgressBar",
	.finalizer = progress_bar_class_finalizer
};

static JSValue progress_bar_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	ProgressBar *progress_bar_class;
	JSValue obj = JS_NewObjectClass(ctx, ProgressBar::__class_id);
	if (JS_IsException(obj))
		return obj;
	progress_bar_class = memnew(ProgressBar);
	if (!progress_bar_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, progress_bar_class);
	return obj;
}
static JSValue progress_bar_class_set_fill_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ProgressBar::set_fill_mode, ProgressBar::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue progress_bar_class_get_fill_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&ProgressBar::get_fill_mode, ProgressBar::__class_id, ctx, this_val, argv);
};
static JSValue progress_bar_class_set_show_percentage(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ProgressBar::set_show_percentage, ProgressBar::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue progress_bar_class_is_percentage_shown(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ProgressBar::is_percentage_shown, ProgressBar::__class_id, ctx, this_val, argv);
};
static JSValue progress_bar_class_set_indeterminate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ProgressBar::set_indeterminate, ProgressBar::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue progress_bar_class_is_indeterminate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ProgressBar::is_indeterminate, ProgressBar::__class_id, ctx, this_val, argv);
};
static JSValue progress_bar_class_set_editor_preview_indeterminate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ProgressBar::set_editor_preview_indeterminate, ProgressBar::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue progress_bar_class_is_editor_preview_indeterminate_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ProgressBar::is_editor_preview_indeterminate_enabled, ProgressBar::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry progress_bar_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_fill_mode", 1, &progress_bar_class_set_fill_mode),
	JS_CFUNC_DEF("get_fill_mode", 0, &progress_bar_class_get_fill_mode),
	JS_CFUNC_DEF("set_show_percentage", 1, &progress_bar_class_set_show_percentage),
	JS_CFUNC_DEF("is_percentage_shown", 0, &progress_bar_class_is_percentage_shown),
	JS_CFUNC_DEF("set_indeterminate", 1, &progress_bar_class_set_indeterminate),
	JS_CFUNC_DEF("is_indeterminate", 0, &progress_bar_class_is_indeterminate),
	JS_CFUNC_DEF("set_editor_preview_indeterminate", 1, &progress_bar_class_set_editor_preview_indeterminate),
	JS_CFUNC_DEF("is_editor_preview_indeterminate_enabled", 0, &progress_bar_class_is_editor_preview_indeterminate_enabled),
};

static int js_progress_bar_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&ProgressBar::__class_id);
	classes["ProgressBar"] = ProgressBar::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), ProgressBar::__class_id, &progress_bar_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Range::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ProgressBar::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, progress_bar_class_proto_funcs, _countof(progress_bar_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, progress_bar_class_constructor, "ProgressBar", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "ProgressBar", ctor);

	return 0;
}

JSModuleDef *_js_init_progress_bar_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_progress_bar_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "ProgressBar");
	return m;
}

JSModuleDef *js_init_progress_bar_module(JSContext *ctx) {
	return _js_init_progress_bar_module(ctx, "godot/classes/progress_bar");
}

void register_progress_bar() {
	js_init_progress_bar_module(ctx);
}