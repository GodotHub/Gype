
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/v_box_container.hpp>
#include <godot_cpp/classes/script_editor_base.hpp>
#include <godot_cpp/classes/editor_syntax_highlighter.hpp>
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void script_editor_base_class_finalizer(JSRuntime *rt, JSValue val) {
	ScriptEditorBase *script_editor_base = static_cast<ScriptEditorBase *>(JS_GetOpaque(val, ScriptEditorBase::__class_id));
	if (script_editor_base)
		ScriptEditorBase::free(nullptr, script_editor_base);
}

static JSClassDef script_editor_base_class_def = {
	"ScriptEditorBase",
	.finalizer = script_editor_base_class_finalizer
};

static JSValue script_editor_base_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	ScriptEditorBase *script_editor_base_class;
	JSValue obj = JS_NewObjectClass(ctx, ScriptEditorBase::__class_id);
	if (JS_IsException(obj))
		return obj;
	script_editor_base_class = memnew(ScriptEditorBase);
	if (!script_editor_base_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, script_editor_base_class);
	return obj;
}
static JSValue script_editor_base_class_get_base_editor(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ScriptEditorBase::get_base_editor, ScriptEditorBase::__class_id, ctx, this_val, argv);
};
static JSValue script_editor_base_class_add_syntax_highlighter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ScriptEditorBase::add_syntax_highlighter, ScriptEditorBase::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry script_editor_base_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_base_editor", 0, &script_editor_base_class_get_base_editor),
	JS_CFUNC_DEF("add_syntax_highlighter", 1, &script_editor_base_class_add_syntax_highlighter),
};

static int js_script_editor_base_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&ScriptEditorBase::__class_id);
	classes["ScriptEditorBase"] = ScriptEditorBase::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), ScriptEditorBase::__class_id, &script_editor_base_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, VBoxContainer::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ScriptEditorBase::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, script_editor_base_class_proto_funcs, _countof(script_editor_base_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, script_editor_base_class_constructor, "ScriptEditorBase", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "ScriptEditorBase", ctor);

	return 0;
}

JSModuleDef *_js_init_script_editor_base_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_script_editor_base_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "ScriptEditorBase");
	return m;
}

JSModuleDef *js_init_script_editor_base_module(JSContext *ctx) {
	return _js_init_script_editor_base_module(ctx, "godot/classes/script_editor_base");
}

void register_script_editor_base() {
	js_init_script_editor_base_module(ctx);
}