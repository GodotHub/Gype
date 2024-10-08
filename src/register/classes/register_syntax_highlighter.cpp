
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/text_edit.hpp>
#include <godot_cpp/classes/syntax_highlighter.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void syntax_highlighter_class_finalizer(JSRuntime *rt, JSValue val) {
	SyntaxHighlighter *syntax_highlighter = static_cast<SyntaxHighlighter *>(JS_GetOpaque(val, SyntaxHighlighter::__class_id));
	if (syntax_highlighter)
		SyntaxHighlighter::free(nullptr, syntax_highlighter);
}

static JSClassDef syntax_highlighter_class_def = {
	"SyntaxHighlighter",
	.finalizer = syntax_highlighter_class_finalizer
};

static JSValue syntax_highlighter_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	SyntaxHighlighter *syntax_highlighter_class;
	JSValue obj = JS_NewObjectClass(ctx, SyntaxHighlighter::__class_id);
	if (JS_IsException(obj))
		return obj;
	syntax_highlighter_class = memnew(SyntaxHighlighter);
	if (!syntax_highlighter_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, syntax_highlighter_class);
	return obj;
}
static JSValue syntax_highlighter_class_get_line_syntax_highlighting(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&SyntaxHighlighter::get_line_syntax_highlighting, SyntaxHighlighter::__class_id, ctx, this_val, argv);
};
static JSValue syntax_highlighter_class_update_cache(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SyntaxHighlighter::update_cache, SyntaxHighlighter::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue syntax_highlighter_class_clear_highlighting_cache(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&SyntaxHighlighter::clear_highlighting_cache, SyntaxHighlighter::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue syntax_highlighter_class_get_text_edit(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&SyntaxHighlighter::get_text_edit, SyntaxHighlighter::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry syntax_highlighter_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_line_syntax_highlighting", 1, &syntax_highlighter_class_get_line_syntax_highlighting),
	JS_CFUNC_DEF("update_cache", 0, &syntax_highlighter_class_update_cache),
	JS_CFUNC_DEF("clear_highlighting_cache", 0, &syntax_highlighter_class_clear_highlighting_cache),
	JS_CFUNC_DEF("get_text_edit", 0, &syntax_highlighter_class_get_text_edit),
};

static int js_syntax_highlighter_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&SyntaxHighlighter::__class_id);
	classes["SyntaxHighlighter"] = SyntaxHighlighter::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), SyntaxHighlighter::__class_id, &syntax_highlighter_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, SyntaxHighlighter::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, syntax_highlighter_class_proto_funcs, _countof(syntax_highlighter_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, syntax_highlighter_class_constructor, "SyntaxHighlighter", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "SyntaxHighlighter", ctor);

	return 0;
}

JSModuleDef *_js_init_syntax_highlighter_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_syntax_highlighter_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "SyntaxHighlighter");
	return m;
}

JSModuleDef *js_init_syntax_highlighter_module(JSContext *ctx) {
	return _js_init_syntax_highlighter_module(ctx, "godot/classes/syntax_highlighter");
}

void register_syntax_highlighter() {
	js_init_syntax_highlighter_module(ctx);
}