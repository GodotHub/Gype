
#include "quickjs/env.h"
#include "quickjs/quickjs.h"
#include "quickjs/quickjs_helper.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/func_utils.h"
#include <godot_cpp/classes/editor_syntax_highlighter.hpp>
#include <godot_cpp/classes/panel_container.hpp>
#include <godot_cpp/classes/script.hpp>
#include <godot_cpp/classes/script_editor.hpp>
#include <godot_cpp/classes/script_editor_base.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void script_editor_class_finalizer(JSRuntime *rt, JSValue val) {
	// nothing
}

static JSClassDef script_editor_class_def = {
	"ScriptEditor",
	.finalizer = script_editor_class_finalizer
};

static JSValue script_editor_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, ScriptEditor::__class_id);
	if (JS_IsException(obj))
		return obj;
	ScriptEditor *script_editor_class = memnew(ScriptEditor);
	if (!script_editor_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, script_editor_class);
	return obj;
}
static JSValue script_editor_class_get_current_editor(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ScriptEditor::get_current_editor, ctx, this_val, argc, argv);
};
static JSValue script_editor_class_get_open_script_editors(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ScriptEditor::get_open_script_editors, ctx, this_val, argc, argv);
};
static JSValue script_editor_class_register_syntax_highlighter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	call_builtin_method_no_ret(&ScriptEditor::register_syntax_highlighter, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue script_editor_class_unregister_syntax_highlighter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	call_builtin_method_no_ret(&ScriptEditor::unregister_syntax_highlighter, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue script_editor_class_goto_line(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	call_builtin_method_no_ret(&ScriptEditor::goto_line, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue script_editor_class_get_current_script(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&ScriptEditor::get_current_script, ctx, this_val, argc, argv);
};
static JSValue script_editor_class_get_open_scripts(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ScriptEditor::get_open_scripts, ctx, this_val, argc, argv);
};
static JSValue script_editor_class_open_script_create_dialog(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	call_builtin_method_no_ret(&ScriptEditor::open_script_create_dialog, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue script_editor_class_goto_help(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	call_builtin_method_no_ret(&ScriptEditor::goto_help, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry script_editor_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_current_editor", 0, &script_editor_class_get_current_editor),
	JS_CFUNC_DEF("get_open_script_editors", 0, &script_editor_class_get_open_script_editors),
	JS_CFUNC_DEF("register_syntax_highlighter", 1, &script_editor_class_register_syntax_highlighter),
	JS_CFUNC_DEF("unregister_syntax_highlighter", 1, &script_editor_class_unregister_syntax_highlighter),
	JS_CFUNC_DEF("goto_line", 1, &script_editor_class_goto_line),
	JS_CFUNC_DEF("get_current_script", 0, &script_editor_class_get_current_script),
	JS_CFUNC_DEF("get_open_scripts", 0, &script_editor_class_get_open_scripts),
	JS_CFUNC_DEF("open_script_create_dialog", 2, &script_editor_class_open_script_create_dialog),
	JS_CFUNC_DEF("goto_help", 1, &script_editor_class_goto_help),
};

void define_script_editor_property(JSContext *ctx, JSValue obj) {
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
}

static int js_script_editor_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&ScriptEditor::__class_id);
	classes["ScriptEditor"] = ScriptEditor::__class_id;
	class_id_list.insert(ScriptEditor::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), ScriptEditor::__class_id, &script_editor_class_def);

	JSValue proto = JS_NewObjectClass(ctx, ScriptEditor::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, PanelContainer::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ScriptEditor::__class_id, proto);

	define_script_editor_property(ctx, proto);
	define_node_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, script_editor_class_proto_funcs, _countof(script_editor_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, script_editor_class_constructor, "ScriptEditor", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "ScriptEditor", ctor);

	return 0;
}

JSModuleDef *_js_init_script_editor_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/panel_container';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_script_editor_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "ScriptEditor");
	return m;
}

JSModuleDef *js_init_script_editor_module(JSContext *ctx) {
	return _js_init_script_editor_module(ctx, "godot/classes/script_editor");
}

void register_script_editor() {
	ScriptEditor::__init_js_class_id();
	js_init_script_editor_module(ctx);
}