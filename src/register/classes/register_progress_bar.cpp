
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/range.hpp>
#include <godot_cpp/classes/progress_bar.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void progress_bar_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef progress_bar_class_def = {
	"ProgressBar",
	.finalizer = progress_bar_class_finalizer
};

static JSValue progress_bar_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, ProgressBar::__class_id);
	if (JS_IsException(obj))
		return obj;

	ProgressBar *progress_bar_class;
	if (argc == 1) 
		progress_bar_class = static_cast<ProgressBar *>(Variant(*argv).operator Object *());
	else 
		progress_bar_class = memnew(ProgressBar);
	if (!progress_bar_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, progress_bar_class);
	return obj;
}
static JSValue progress_bar_class_set_fill_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&ProgressBar::set_fill_mode, ctx, this_val, argc, argv);
};
static JSValue progress_bar_class_get_fill_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&ProgressBar::get_fill_mode, ctx, this_val, argc, argv);
};
static JSValue progress_bar_class_set_show_percentage(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&ProgressBar::set_show_percentage, ctx, this_val, argc, argv);
};
static JSValue progress_bar_class_is_percentage_shown(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ProgressBar::is_percentage_shown, ctx, this_val, argc, argv);
};
static JSValue progress_bar_class_set_indeterminate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&ProgressBar::set_indeterminate, ctx, this_val, argc, argv);
};
static JSValue progress_bar_class_is_indeterminate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ProgressBar::is_indeterminate, ctx, this_val, argc, argv);
};
static JSValue progress_bar_class_set_editor_preview_indeterminate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&ProgressBar::set_editor_preview_indeterminate, ctx, this_val, argc, argv);
};
static JSValue progress_bar_class_is_editor_preview_indeterminate_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ProgressBar::is_editor_preview_indeterminate_enabled, ctx, this_val, argc, argv);
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

static void define_progress_bar_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "fill_mode"),
        JS_NewCFunction(ctx, progress_bar_class_get_fill_mode, "get_fill_mode", 0),
        JS_NewCFunction(ctx, progress_bar_class_set_fill_mode, "set_fill_mode", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "show_percentage"),
        JS_NewCFunction(ctx, progress_bar_class_is_percentage_shown, "is_percentage_shown", 0),
        JS_NewCFunction(ctx, progress_bar_class_set_show_percentage, "set_show_percentage", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "indeterminate"),
        JS_NewCFunction(ctx, progress_bar_class_is_indeterminate, "is_indeterminate", 0),
        JS_NewCFunction(ctx, progress_bar_class_set_indeterminate, "set_indeterminate", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "editor_preview_indeterminate"),
        JS_NewCFunction(ctx, progress_bar_class_is_editor_preview_indeterminate_enabled, "is_editor_preview_indeterminate_enabled", 0),
        JS_NewCFunction(ctx, progress_bar_class_set_editor_preview_indeterminate, "set_editor_preview_indeterminate", 1),
        JS_PROP_GETSET
    );
	
}

static void define_progress_bar_enum(JSContext *ctx, JSValue proto) {
	JSValue FillMode_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, FillMode_obj, "FILL_BEGIN_TO_END", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, FillMode_obj, "FILL_END_TO_BEGIN", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, FillMode_obj, "FILL_TOP_TO_BOTTOM", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, FillMode_obj, "FILL_BOTTOM_TO_TOP", JS_NewInt64(ctx, 3));
	JS_SetPropertyStr(ctx, proto, "FillMode", FillMode_obj);
}

static int js_progress_bar_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["ProgressBar"] = ProgressBar::__class_id;
	class_id_list.insert(ProgressBar::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), ProgressBar::__class_id, &progress_bar_class_def);

	JSValue proto = JS_NewObjectClass(ctx, ProgressBar::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Range::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ProgressBar::__class_id, proto);

	define_progress_bar_property(ctx, proto);
	define_progress_bar_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, progress_bar_class_proto_funcs, _countof(progress_bar_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, progress_bar_class_constructor, "ProgressBar", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "ProgressBar", ctor);

	return 0;
}

JSModuleDef *_js_init_progress_bar_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/range';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_progress_bar_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "ProgressBar");
	return m;
}

JSModuleDef *js_init_progress_bar_module(JSContext *ctx) {
	return _js_init_progress_bar_module(ctx, "@godot/classes/progress_bar");
}

void register_progress_bar() {
	ProgressBar::__init_js_class_id();
	js_init_progress_bar_module(ctx);
}