
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/confirmation_dialog.hpp>
#include <godot_cpp/classes/editor_command_palette.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void editor_command_palette_class_finalizer(JSRuntime *rt, JSValue val) {
	EditorCommandPalette *editor_command_palette = static_cast<EditorCommandPalette *>(JS_GetOpaque(val, EditorCommandPalette::__class_id));
	if (editor_command_palette)
		EditorCommandPalette::free(nullptr, editor_command_palette);
}

static JSClassDef editor_command_palette_class_def = {
	"EditorCommandPalette",
	.finalizer = editor_command_palette_class_finalizer
};

static JSValue editor_command_palette_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	EditorCommandPalette *editor_command_palette_class;
	JSValue obj = JS_NewObjectClass(ctx, EditorCommandPalette::__class_id);
	if (JS_IsException(obj))
		return obj;
	editor_command_palette_class = memnew(EditorCommandPalette);
	if (!editor_command_palette_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, editor_command_palette_class);
	return obj;
}
static JSValue editor_command_palette_class_add_command(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&EditorCommandPalette::add_command, EditorCommandPalette::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue editor_command_palette_class_remove_command(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&EditorCommandPalette::remove_command, EditorCommandPalette::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry editor_command_palette_class_proto_funcs[] = {
	JS_CFUNC_DEF("add_command", 4, &editor_command_palette_class_add_command),
	JS_CFUNC_DEF("remove_command", 1, &editor_command_palette_class_remove_command),
};

static int js_editor_command_palette_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&EditorCommandPalette::__class_id);
	classes["EditorCommandPalette"] = EditorCommandPalette::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), EditorCommandPalette::__class_id, &editor_command_palette_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, ConfirmationDialog::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, EditorCommandPalette::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, editor_command_palette_class_proto_funcs, _countof(editor_command_palette_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, editor_command_palette_class_constructor, "EditorCommandPalette", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "EditorCommandPalette", ctor);

	return 0;
}

JSModuleDef *_js_init_editor_command_palette_module(JSContext *ctx, const char *module_name) {
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
	js_init_editor_command_palette_module(ctx);
}