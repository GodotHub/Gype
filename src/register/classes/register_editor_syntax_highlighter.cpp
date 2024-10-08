
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/editor_syntax_highlighter.hpp>
#include <godot_cpp/classes/syntax_highlighter.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void editor_syntax_highlighter_class_finalizer(JSRuntime *rt, JSValue val) {
	EditorSyntaxHighlighter *editor_syntax_highlighter = static_cast<EditorSyntaxHighlighter *>(JS_GetOpaque(val, EditorSyntaxHighlighter::__class_id));
	if (editor_syntax_highlighter)
		EditorSyntaxHighlighter::free(nullptr, editor_syntax_highlighter);
}

static JSClassDef editor_syntax_highlighter_class_def = {
	"EditorSyntaxHighlighter",
	.finalizer = editor_syntax_highlighter_class_finalizer
};

static JSValue editor_syntax_highlighter_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	EditorSyntaxHighlighter *editor_syntax_highlighter_class;
	JSValue obj = JS_NewObjectClass(ctx, EditorSyntaxHighlighter::__class_id);
	if (JS_IsException(obj))
		return obj;
	editor_syntax_highlighter_class = memnew(EditorSyntaxHighlighter);
	if (!editor_syntax_highlighter_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, editor_syntax_highlighter_class);
	return obj;
}

static int js_editor_syntax_highlighter_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&EditorSyntaxHighlighter::__class_id);
	classes["EditorSyntaxHighlighter"] = EditorSyntaxHighlighter::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), EditorSyntaxHighlighter::__class_id, &editor_syntax_highlighter_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, SyntaxHighlighter::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, EditorSyntaxHighlighter::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, editor_syntax_highlighter_class_constructor, "EditorSyntaxHighlighter", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "EditorSyntaxHighlighter", ctor);

	return 0;
}

JSModuleDef *_js_init_editor_syntax_highlighter_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_editor_syntax_highlighter_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "EditorSyntaxHighlighter");
	return m;
}

JSModuleDef *js_init_editor_syntax_highlighter_module(JSContext *ctx) {
	return _js_init_editor_syntax_highlighter_module(ctx, "godot/classes/editor_syntax_highlighter");
}

void register_editor_syntax_highlighter() {
	js_init_editor_syntax_highlighter_module(ctx);
}