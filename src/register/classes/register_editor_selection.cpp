
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/editor_selection.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void editor_selection_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef editor_selection_class_def = {
	"EditorSelection",
	.finalizer = editor_selection_class_finalizer
};

static JSValue editor_selection_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, EditorSelection::__class_id);
	if (JS_IsException(obj))
		return obj;

	EditorSelection *editor_selection_class;
	if (argc == 1) 
		editor_selection_class = static_cast<EditorSelection *>(Variant(*argv).operator Object *());
	else 
		editor_selection_class = memnew(EditorSelection);
	if (!editor_selection_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, editor_selection_class);
	return obj;
}
static JSValue editor_selection_class_clear(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&EditorSelection::clear, ctx, this_val, argc, argv);
};
static JSValue editor_selection_class_add_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&EditorSelection::add_node, ctx, this_val, argc, argv);
};
static JSValue editor_selection_class_remove_node(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&EditorSelection::remove_node, ctx, this_val, argc, argv);
};
static JSValue editor_selection_class_get_selected_nodes(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&EditorSelection::get_selected_nodes, ctx, this_val, argc, argv);
};
static JSValue editor_selection_class_get_transformable_selected_nodes(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&EditorSelection::get_transformable_selected_nodes, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry editor_selection_class_proto_funcs[] = {
	JS_CFUNC_DEF("clear", 0, &editor_selection_class_clear),
	JS_CFUNC_DEF("add_node", 1, &editor_selection_class_add_node),
	JS_CFUNC_DEF("remove_node", 1, &editor_selection_class_remove_node),
	JS_CFUNC_DEF("get_selected_nodes", 0, &editor_selection_class_get_selected_nodes),
	JS_CFUNC_DEF("get_transformable_selected_nodes", 0, &editor_selection_class_get_transformable_selected_nodes),
};
static JSValue editor_selection_class_get_selection_changed_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	EditorSelection *opaque = reinterpret_cast<EditorSelection *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "selection_changed_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "selection_changed").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "selection_changed_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}

static void define_editor_selection_property(JSContext *ctx, JSValue proto) {
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "selection_changed"),
		JS_NewCFunction(ctx, editor_selection_class_get_selection_changed_signal, "get_selection_changed_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
}

static void define_editor_selection_enum(JSContext *ctx, JSValue proto) {
}

static int js_editor_selection_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["EditorSelection"] = EditorSelection::__class_id;
	class_id_list.insert(EditorSelection::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), EditorSelection::__class_id, &editor_selection_class_def);

	JSValue proto = JS_NewObjectClass(ctx, EditorSelection::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Object::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, EditorSelection::__class_id, proto);

	define_editor_selection_property(ctx, proto);
	define_editor_selection_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, editor_selection_class_proto_funcs, _countof(editor_selection_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, editor_selection_class_constructor, "EditorSelection", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "EditorSelection", ctor);

	return 0;
}

JSModuleDef *_js_init_editor_selection_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/godot_object';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_editor_selection_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "EditorSelection");
	return m;
}

JSModuleDef *js_init_editor_selection_module(JSContext *ctx) {
	return _js_init_editor_selection_module(ctx, "@godot/classes/editor_selection");
}

void register_editor_selection() {
	EditorSelection::__init_js_class_id();
	js_init_editor_selection_module(ctx);
}