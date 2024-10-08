
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/editor_inspector.hpp>
#include <godot_cpp/classes/scroll_container.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void editor_inspector_class_finalizer(JSRuntime *rt, JSValue val) {
	EditorInspector *editor_inspector = static_cast<EditorInspector *>(JS_GetOpaque(val, EditorInspector::__class_id));
	if (editor_inspector)
		EditorInspector::free(nullptr, editor_inspector);
}

static JSClassDef editor_inspector_class_def = {
	"EditorInspector",
	.finalizer = editor_inspector_class_finalizer
};

static JSValue editor_inspector_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	EditorInspector *editor_inspector_class;
	JSValue obj = JS_NewObjectClass(ctx, EditorInspector::__class_id);
	if (JS_IsException(obj))
		return obj;
	editor_inspector_class = memnew(EditorInspector);
	if (!editor_inspector_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, editor_inspector_class);
	return obj;
}
static JSValue editor_inspector_class_get_selected_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&EditorInspector::get_selected_path, EditorInspector::__class_id, ctx, this_val, argv);
};
static JSValue editor_inspector_class_get_edited_object(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&EditorInspector::get_edited_object, EditorInspector::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry editor_inspector_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_selected_path", 0, &editor_inspector_class_get_selected_path),
	JS_CFUNC_DEF("get_edited_object", 0, &editor_inspector_class_get_edited_object),
};

static int js_editor_inspector_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&EditorInspector::__class_id);
	classes["EditorInspector"] = EditorInspector::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), EditorInspector::__class_id, &editor_inspector_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, ScrollContainer::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, EditorInspector::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, editor_inspector_class_proto_funcs, _countof(editor_inspector_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, editor_inspector_class_constructor, "EditorInspector", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "EditorInspector", ctor);

	return 0;
}

JSModuleDef *_js_init_editor_inspector_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_editor_inspector_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "EditorInspector");
	return m;
}

JSModuleDef *js_init_editor_inspector_module(JSContext *ctx) {
	return _js_init_editor_inspector_module(ctx, "godot/classes/editor_inspector");
}

void register_editor_inspector() {
	js_init_editor_inspector_module(ctx);
}