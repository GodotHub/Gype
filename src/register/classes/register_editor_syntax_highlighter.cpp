
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/syntax_highlighter.hpp>
#include <godot_cpp/classes/editor_syntax_highlighter.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void editor_syntax_highlighter_class_finalizer(JSRuntime *rt, JSValue val) {
	EditorSyntaxHighlighter *editor_syntax_highlighter = static_cast<EditorSyntaxHighlighter *>(JS_GetOpaque(val, EditorSyntaxHighlighter::__class_id));
	if (editor_syntax_highlighter)
		memdelete(editor_syntax_highlighter);
}

static JSClassDef editor_syntax_highlighter_class_def = {
	"EditorSyntaxHighlighter",
	.finalizer = editor_syntax_highlighter_class_finalizer
};

static JSValue editor_syntax_highlighter_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, EditorSyntaxHighlighter::__class_id);
	if (JS_IsException(obj))
		return obj;

	EditorSyntaxHighlighter *editor_syntax_highlighter_class;
	if (argc == 1) 
		editor_syntax_highlighter_class = static_cast<EditorSyntaxHighlighter *>(Variant(*argv).operator Object *());
	else 
		editor_syntax_highlighter_class = memnew(EditorSyntaxHighlighter);
	if (!editor_syntax_highlighter_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, editor_syntax_highlighter_class);
	return obj;
}

static void define_editor_syntax_highlighter_property(JSContext *ctx, JSValue proto) {
	
}

static void define_editor_syntax_highlighter_enum(JSContext *ctx, JSValue proto) {
}

static int js_editor_syntax_highlighter_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["EditorSyntaxHighlighter"] = EditorSyntaxHighlighter::__class_id;
	class_id_list.insert(EditorSyntaxHighlighter::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), EditorSyntaxHighlighter::__class_id, &editor_syntax_highlighter_class_def);

	JSValue proto = JS_NewObjectClass(ctx, EditorSyntaxHighlighter::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, SyntaxHighlighter::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, EditorSyntaxHighlighter::__class_id, proto);

	define_editor_syntax_highlighter_property(ctx, proto);
	define_editor_syntax_highlighter_enum(ctx, proto);
	JSValue ctor = JS_NewCFunction2(ctx, editor_syntax_highlighter_class_constructor, "EditorSyntaxHighlighter", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "EditorSyntaxHighlighter", ctor);
	constructors[EditorSyntaxHighlighter::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_editor_syntax_highlighter_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/syntax_highlighter';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_editor_syntax_highlighter_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "EditorSyntaxHighlighter");
	return m;
}

JSModuleDef *js_init_editor_syntax_highlighter_module(JSContext *ctx) {
	return _js_init_editor_syntax_highlighter_module(ctx, "@godot/classes/editor_syntax_highlighter");
}

void register_editor_syntax_highlighter() {
	EditorSyntaxHighlighter::__init_js_class_id();
	js_init_editor_syntax_highlighter_module(ctx);
}