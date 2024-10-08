
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/syntax_highlighter.hpp>
#include <godot_cpp/classes/code_highlighter.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void code_highlighter_class_finalizer(JSRuntime *rt, JSValue val) {
	CodeHighlighter *code_highlighter = static_cast<CodeHighlighter *>(JS_GetOpaque(val, CodeHighlighter::__class_id));
	if (code_highlighter)
		CodeHighlighter::free(nullptr, code_highlighter);
}

static JSClassDef code_highlighter_class_def = {
	"CodeHighlighter",
	.finalizer = code_highlighter_class_finalizer
};

static JSValue code_highlighter_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	CodeHighlighter *code_highlighter_class;
	JSValue obj = JS_NewObjectClass(ctx, CodeHighlighter::__class_id);
	if (JS_IsException(obj))
		return obj;
	code_highlighter_class = memnew(CodeHighlighter);
	if (!code_highlighter_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, code_highlighter_class);
	return obj;
}
static JSValue code_highlighter_class_add_keyword_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CodeHighlighter::add_keyword_color, CodeHighlighter::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue code_highlighter_class_remove_keyword_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CodeHighlighter::remove_keyword_color, CodeHighlighter::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue code_highlighter_class_has_keyword_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CodeHighlighter::has_keyword_color, CodeHighlighter::__class_id, ctx, this_val, argv);
};
static JSValue code_highlighter_class_get_keyword_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CodeHighlighter::get_keyword_color, CodeHighlighter::__class_id, ctx, this_val, argv);
};
static JSValue code_highlighter_class_set_keyword_colors(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CodeHighlighter::set_keyword_colors, CodeHighlighter::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue code_highlighter_class_clear_keyword_colors(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CodeHighlighter::clear_keyword_colors, CodeHighlighter::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue code_highlighter_class_get_keyword_colors(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CodeHighlighter::get_keyword_colors, CodeHighlighter::__class_id, ctx, this_val, argv);
};
static JSValue code_highlighter_class_add_member_keyword_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CodeHighlighter::add_member_keyword_color, CodeHighlighter::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue code_highlighter_class_remove_member_keyword_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CodeHighlighter::remove_member_keyword_color, CodeHighlighter::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue code_highlighter_class_has_member_keyword_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CodeHighlighter::has_member_keyword_color, CodeHighlighter::__class_id, ctx, this_val, argv);
};
static JSValue code_highlighter_class_get_member_keyword_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CodeHighlighter::get_member_keyword_color, CodeHighlighter::__class_id, ctx, this_val, argv);
};
static JSValue code_highlighter_class_set_member_keyword_colors(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CodeHighlighter::set_member_keyword_colors, CodeHighlighter::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue code_highlighter_class_clear_member_keyword_colors(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CodeHighlighter::clear_member_keyword_colors, CodeHighlighter::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue code_highlighter_class_get_member_keyword_colors(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CodeHighlighter::get_member_keyword_colors, CodeHighlighter::__class_id, ctx, this_val, argv);
};
static JSValue code_highlighter_class_add_color_region(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CodeHighlighter::add_color_region, CodeHighlighter::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue code_highlighter_class_remove_color_region(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CodeHighlighter::remove_color_region, CodeHighlighter::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue code_highlighter_class_has_color_region(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CodeHighlighter::has_color_region, CodeHighlighter::__class_id, ctx, this_val, argv);
};
static JSValue code_highlighter_class_set_color_regions(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CodeHighlighter::set_color_regions, CodeHighlighter::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue code_highlighter_class_clear_color_regions(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CodeHighlighter::clear_color_regions, CodeHighlighter::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue code_highlighter_class_get_color_regions(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CodeHighlighter::get_color_regions, CodeHighlighter::__class_id, ctx, this_val, argv);
};
static JSValue code_highlighter_class_set_function_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CodeHighlighter::set_function_color, CodeHighlighter::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue code_highlighter_class_get_function_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CodeHighlighter::get_function_color, CodeHighlighter::__class_id, ctx, this_val, argv);
};
static JSValue code_highlighter_class_set_number_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CodeHighlighter::set_number_color, CodeHighlighter::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue code_highlighter_class_get_number_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CodeHighlighter::get_number_color, CodeHighlighter::__class_id, ctx, this_val, argv);
};
static JSValue code_highlighter_class_set_symbol_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CodeHighlighter::set_symbol_color, CodeHighlighter::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue code_highlighter_class_get_symbol_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CodeHighlighter::get_symbol_color, CodeHighlighter::__class_id, ctx, this_val, argv);
};
static JSValue code_highlighter_class_set_member_variable_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CodeHighlighter::set_member_variable_color, CodeHighlighter::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue code_highlighter_class_get_member_variable_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CodeHighlighter::get_member_variable_color, CodeHighlighter::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry code_highlighter_class_proto_funcs[] = {
	JS_CFUNC_DEF("add_keyword_color", 2, &code_highlighter_class_add_keyword_color),
	JS_CFUNC_DEF("remove_keyword_color", 1, &code_highlighter_class_remove_keyword_color),
	JS_CFUNC_DEF("has_keyword_color", 1, &code_highlighter_class_has_keyword_color),
	JS_CFUNC_DEF("get_keyword_color", 1, &code_highlighter_class_get_keyword_color),
	JS_CFUNC_DEF("set_keyword_colors", 1, &code_highlighter_class_set_keyword_colors),
	JS_CFUNC_DEF("clear_keyword_colors", 0, &code_highlighter_class_clear_keyword_colors),
	JS_CFUNC_DEF("get_keyword_colors", 0, &code_highlighter_class_get_keyword_colors),
	JS_CFUNC_DEF("add_member_keyword_color", 2, &code_highlighter_class_add_member_keyword_color),
	JS_CFUNC_DEF("remove_member_keyword_color", 1, &code_highlighter_class_remove_member_keyword_color),
	JS_CFUNC_DEF("has_member_keyword_color", 1, &code_highlighter_class_has_member_keyword_color),
	JS_CFUNC_DEF("get_member_keyword_color", 1, &code_highlighter_class_get_member_keyword_color),
	JS_CFUNC_DEF("set_member_keyword_colors", 1, &code_highlighter_class_set_member_keyword_colors),
	JS_CFUNC_DEF("clear_member_keyword_colors", 0, &code_highlighter_class_clear_member_keyword_colors),
	JS_CFUNC_DEF("get_member_keyword_colors", 0, &code_highlighter_class_get_member_keyword_colors),
	JS_CFUNC_DEF("add_color_region", 4, &code_highlighter_class_add_color_region),
	JS_CFUNC_DEF("remove_color_region", 1, &code_highlighter_class_remove_color_region),
	JS_CFUNC_DEF("has_color_region", 1, &code_highlighter_class_has_color_region),
	JS_CFUNC_DEF("set_color_regions", 1, &code_highlighter_class_set_color_regions),
	JS_CFUNC_DEF("clear_color_regions", 0, &code_highlighter_class_clear_color_regions),
	JS_CFUNC_DEF("get_color_regions", 0, &code_highlighter_class_get_color_regions),
	JS_CFUNC_DEF("set_function_color", 1, &code_highlighter_class_set_function_color),
	JS_CFUNC_DEF("get_function_color", 0, &code_highlighter_class_get_function_color),
	JS_CFUNC_DEF("set_number_color", 1, &code_highlighter_class_set_number_color),
	JS_CFUNC_DEF("get_number_color", 0, &code_highlighter_class_get_number_color),
	JS_CFUNC_DEF("set_symbol_color", 1, &code_highlighter_class_set_symbol_color),
	JS_CFUNC_DEF("get_symbol_color", 0, &code_highlighter_class_get_symbol_color),
	JS_CFUNC_DEF("set_member_variable_color", 1, &code_highlighter_class_set_member_variable_color),
	JS_CFUNC_DEF("get_member_variable_color", 0, &code_highlighter_class_get_member_variable_color),
};

static int js_code_highlighter_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&CodeHighlighter::__class_id);
	classes["CodeHighlighter"] = CodeHighlighter::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), CodeHighlighter::__class_id, &code_highlighter_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, SyntaxHighlighter::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, CodeHighlighter::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, code_highlighter_class_proto_funcs, _countof(code_highlighter_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, code_highlighter_class_constructor, "CodeHighlighter", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "CodeHighlighter", ctor);

	return 0;
}

JSModuleDef *_js_init_code_highlighter_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_code_highlighter_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "CodeHighlighter");
	return m;
}

JSModuleDef *js_init_code_highlighter_module(JSContext *ctx) {
	return _js_init_code_highlighter_module(ctx, "godot/classes/code_highlighter");
}

void register_code_highlighter() {
	js_init_code_highlighter_module(ctx);
}