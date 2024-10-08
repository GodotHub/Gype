
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/editor_selection.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void editor_selection_class_finalizer(JSRuntime *rt, JSValue val) {
	EditorSelection *editor_selection = static_cast<EditorSelection *>(JS_GetOpaque(val, EditorSelection::__class_id));
	if (editor_selection)
		EditorSelection::free(nullptr, editor_selection);
}

static JSClassDef editor_selection_class_def = {
	"EditorSelection",
	.finalizer = editor_selection_class_finalizer
};

static JSValue editor_selection_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	EditorSelection *editor_selection_class;
	JSValue obj = JS_NewObjectClass(ctx, EditorSelection::__class_id);
	if (JS_IsException(obj))
		return obj;
	editor_selection_class = memnew(EditorSelection);
	if (!editor_selection_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, editor_selection_class);
	return obj;
}
static JSValue editor_selection_class_clear(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&EditorSelection::clear, EditorSelection::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue editor_selection_class_add_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&EditorSelection::add_node, EditorSelection::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue editor_selection_class_remove_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&EditorSelection::remove_node, EditorSelection::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue editor_selection_class_get_selected_nodes(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&EditorSelection::get_selected_nodes, EditorSelection::__class_id, ctx, this_val, argv);
};
static JSValue editor_selection_class_get_transformable_selected_nodes(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&EditorSelection::get_transformable_selected_nodes, EditorSelection::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry editor_selection_class_proto_funcs[] = {
	JS_CFUNC_DEF("clear", 0, &editor_selection_class_clear),
	JS_CFUNC_DEF("add_node", 1, &editor_selection_class_add_node),
	JS_CFUNC_DEF("remove_node", 1, &editor_selection_class_remove_node),
	JS_CFUNC_DEF("get_selected_nodes", 0, &editor_selection_class_get_selected_nodes),
	JS_CFUNC_DEF("get_transformable_selected_nodes", 0, &editor_selection_class_get_transformable_selected_nodes),
};

static int js_editor_selection_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&EditorSelection::__class_id);
	classes["EditorSelection"] = EditorSelection::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), EditorSelection::__class_id, &editor_selection_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Object::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, EditorSelection::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, editor_selection_class_proto_funcs, _countof(editor_selection_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, editor_selection_class_constructor, "EditorSelection", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "EditorSelection", ctor);

	return 0;
}

JSModuleDef *_js_init_editor_selection_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_editor_selection_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "EditorSelection");
	return m;
}

JSModuleDef *js_init_editor_selection_module(JSContext *ctx) {
	return _js_init_editor_selection_module(ctx, "godot/classes/editor_selection");
}

void register_editor_selection() {
	js_init_editor_selection_module(ctx);
}