
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/confirmation_dialog.hpp>
#include <godot_cpp/classes/editor_command_palette.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void editor_command_palette_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef editor_command_palette_class_def = {
	"EditorCommandPalette",
	.finalizer = editor_command_palette_class_finalizer
};

static JSValue editor_command_palette_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, EditorCommandPalette::__class_id);
	if (JS_IsException(obj))
		return obj;
	EditorCommandPalette *editor_command_palette_class = memnew(EditorCommandPalette);
	if (!editor_command_palette_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, editor_command_palette_class);	
	return obj;
}
static JSValue editor_command_palette_class_add_command(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&EditorCommandPalette::add_command, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue editor_command_palette_class_remove_command(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&EditorCommandPalette::remove_command, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry editor_command_palette_class_proto_funcs[] = {
	JS_CFUNC_DEF("add_command", 4, &editor_command_palette_class_add_command),
	JS_CFUNC_DEF("remove_command", 1, &editor_command_palette_class_remove_command),
};

void define_editor_command_palette_property(JSContext *ctx, JSValue obj) {
}

static int js_editor_command_palette_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&EditorCommandPalette::__class_id);
	classes["EditorCommandPalette"] = EditorCommandPalette::__class_id;
	class_id_list.insert(EditorCommandPalette::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), EditorCommandPalette::__class_id, &editor_command_palette_class_def);

	JSValue proto = JS_NewObjectClass(ctx, EditorCommandPalette::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, ConfirmationDialog::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, EditorCommandPalette::__class_id, proto);

	define_editor_command_palette_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, editor_command_palette_class_proto_funcs, _countof(editor_command_palette_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, editor_command_palette_class_constructor, "EditorCommandPalette", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "EditorCommandPalette", ctor);

	return 0;
}

JSModuleDef *_js_init_editor_command_palette_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/confirmation_dialog';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_editor_command_palette_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "EditorCommandPalette");
	return m;
}

JSModuleDef *js_init_editor_command_palette_module(JSContext *ctx) {
	return _js_init_editor_command_palette_module(ctx, "godot/classes/editor_command_palette");
}

void register_editor_command_palette() {
	EditorCommandPalette::__init_js_class_id();
	js_init_editor_command_palette_module(ctx);
}