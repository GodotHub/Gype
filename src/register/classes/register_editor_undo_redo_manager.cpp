
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/undo_redo.hpp>
#include <godot_cpp/classes/editor_undo_redo_manager.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void editor_undo_redo_manager_class_finalizer(JSRuntime *rt, JSValue val) {
	EditorUndoRedoManager *editor_undo_redo_manager = static_cast<EditorUndoRedoManager *>(JS_GetOpaque(val, EditorUndoRedoManager::__class_id));
	if (editor_undo_redo_manager)
		EditorUndoRedoManager::free(nullptr, editor_undo_redo_manager);
}

static JSClassDef editor_undo_redo_manager_class_def = {
	"EditorUndoRedoManager",
	.finalizer = editor_undo_redo_manager_class_finalizer
};

static JSValue editor_undo_redo_manager_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	EditorUndoRedoManager *editor_undo_redo_manager_class;
	JSValue obj = JS_NewObjectClass(ctx, EditorUndoRedoManager::__class_id);
	if (JS_IsException(obj))
		return obj;
	editor_undo_redo_manager_class = memnew(EditorUndoRedoManager);
	if (!editor_undo_redo_manager_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, editor_undo_redo_manager_class);
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");

	if (JS_IsObject(proto)) {
		JS_SetPrototype(ctx, obj, proto);
	}
	JS_FreeValue(ctx, proto);

	
	return obj;
}
static JSValue editor_undo_redo_manager_class_create_action(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&EditorUndoRedoManager::create_action, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue editor_undo_redo_manager_class_commit_action(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&EditorUndoRedoManager::commit_action, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue editor_undo_redo_manager_class_is_committing_action(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&EditorUndoRedoManager::is_committing_action, ctx, this_val, argc, argv);
};
static JSValue editor_undo_redo_manager_class_force_fixed_history(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&EditorUndoRedoManager::force_fixed_history, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue editor_undo_redo_manager_class_add_do_property(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&EditorUndoRedoManager::add_do_property, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue editor_undo_redo_manager_class_add_undo_property(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&EditorUndoRedoManager::add_undo_property, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue editor_undo_redo_manager_class_add_do_reference(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&EditorUndoRedoManager::add_do_reference, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue editor_undo_redo_manager_class_add_undo_reference(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&EditorUndoRedoManager::add_undo_reference, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue editor_undo_redo_manager_class_get_object_history_id(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&EditorUndoRedoManager::get_object_history_id, ctx, this_val, argc, argv);
};
static JSValue editor_undo_redo_manager_class_get_history_undo_redo(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&EditorUndoRedoManager::get_history_undo_redo, ctx, this_val, argc, argv);
};
static JSValue editor_undo_redo_manager_class_add_do_method(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_vararg_method_no_ret(&EditorUndoRedoManager::js_add_do_method, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
}
static JSValue editor_undo_redo_manager_class_add_undo_method(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_vararg_method_no_ret(&EditorUndoRedoManager::js_add_undo_method, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
}
static const JSCFunctionListEntry editor_undo_redo_manager_class_proto_funcs[] = {
	JS_CFUNC_DEF("create_action", 4, &editor_undo_redo_manager_class_create_action),
	JS_CFUNC_DEF("commit_action", 1, &editor_undo_redo_manager_class_commit_action),
	JS_CFUNC_DEF("is_committing_action", 0, &editor_undo_redo_manager_class_is_committing_action),
	JS_CFUNC_DEF("force_fixed_history", 0, &editor_undo_redo_manager_class_force_fixed_history),
	JS_CFUNC_DEF("add_do_property", 3, &editor_undo_redo_manager_class_add_do_property),
	JS_CFUNC_DEF("add_undo_property", 3, &editor_undo_redo_manager_class_add_undo_property),
	JS_CFUNC_DEF("add_do_reference", 1, &editor_undo_redo_manager_class_add_do_reference),
	JS_CFUNC_DEF("add_undo_reference", 1, &editor_undo_redo_manager_class_add_undo_reference),
	JS_CFUNC_DEF("get_object_history_id", 1, &editor_undo_redo_manager_class_get_object_history_id),
	JS_CFUNC_DEF("get_history_undo_redo", 1, &editor_undo_redo_manager_class_get_history_undo_redo),
	JS_CFUNC_DEF("add_do_method", 2, &editor_undo_redo_manager_class_add_do_method),
	JS_CFUNC_DEF("add_undo_method", 2, &editor_undo_redo_manager_class_add_undo_method),
};

void define_editor_undo_redo_manager_property(JSContext *ctx, JSValue obj) {
}

static int js_editor_undo_redo_manager_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&EditorUndoRedoManager::__class_id);
	classes["EditorUndoRedoManager"] = EditorUndoRedoManager::__class_id;
	class_id_list.insert(EditorUndoRedoManager::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), EditorUndoRedoManager::__class_id, &editor_undo_redo_manager_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Object::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, EditorUndoRedoManager::__class_id, proto);
	define_editor_undo_redo_manager_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, editor_undo_redo_manager_class_proto_funcs, _countof(editor_undo_redo_manager_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, editor_undo_redo_manager_class_constructor, "EditorUndoRedoManager", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "EditorUndoRedoManager", ctor);

	return 0;
}

JSModuleDef *_js_init_editor_undo_redo_manager_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/object';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_editor_undo_redo_manager_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "EditorUndoRedoManager");
	return m;
}

JSModuleDef *js_init_editor_undo_redo_manager_module(JSContext *ctx) {
	return _js_init_editor_undo_redo_manager_module(ctx, "godot/classes/editor_undo_redo_manager");
}

void register_editor_undo_redo_manager() {
	EditorUndoRedoManager::__init_js_class_id();
	js_init_editor_undo_redo_manager_module(ctx);
}