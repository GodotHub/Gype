
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/editor_inspector_plugin.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void editor_inspector_plugin_class_finalizer(JSRuntime *rt, JSValue val) {
	EditorInspectorPlugin *editor_inspector_plugin = static_cast<EditorInspectorPlugin *>(JS_GetOpaque(val, EditorInspectorPlugin::__class_id));
	if (editor_inspector_plugin)
		EditorInspectorPlugin::free(nullptr, editor_inspector_plugin);
}

static JSClassDef editor_inspector_plugin_class_def = {
	"EditorInspectorPlugin",
	.finalizer = editor_inspector_plugin_class_finalizer
};

static JSValue editor_inspector_plugin_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	EditorInspectorPlugin *editor_inspector_plugin_class;
	JSValue obj = JS_NewObjectClass(ctx, EditorInspectorPlugin::__class_id);
	if (JS_IsException(obj))
		return obj;
	editor_inspector_plugin_class = memnew(EditorInspectorPlugin);
	if (!editor_inspector_plugin_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, editor_inspector_plugin_class);
	return obj;
}
static JSValue editor_inspector_plugin_class_add_custom_control(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&EditorInspectorPlugin::add_custom_control, EditorInspectorPlugin::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue editor_inspector_plugin_class_add_property_editor(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&EditorInspectorPlugin::add_property_editor, EditorInspectorPlugin::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue editor_inspector_plugin_class_add_property_editor_for_multiple_properties(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&EditorInspectorPlugin::add_property_editor_for_multiple_properties, EditorInspectorPlugin::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry editor_inspector_plugin_class_proto_funcs[] = {
	JS_CFUNC_DEF("add_custom_control", 1, &editor_inspector_plugin_class_add_custom_control),
	JS_CFUNC_DEF("add_property_editor", 4, &editor_inspector_plugin_class_add_property_editor),
	JS_CFUNC_DEF("add_property_editor_for_multiple_properties", 3, &editor_inspector_plugin_class_add_property_editor_for_multiple_properties),
};

static int js_editor_inspector_plugin_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&EditorInspectorPlugin::__class_id);
	classes["EditorInspectorPlugin"] = EditorInspectorPlugin::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), EditorInspectorPlugin::__class_id, &editor_inspector_plugin_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, EditorInspectorPlugin::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, editor_inspector_plugin_class_proto_funcs, _countof(editor_inspector_plugin_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, editor_inspector_plugin_class_constructor, "EditorInspectorPlugin", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "EditorInspectorPlugin", ctor);

	return 0;
}

JSModuleDef *_js_init_editor_inspector_plugin_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_editor_inspector_plugin_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "EditorInspectorPlugin");
	return m;
}

JSModuleDef *js_init_editor_inspector_plugin_module(JSContext *ctx) {
	return _js_init_editor_inspector_plugin_module(ctx, "godot/classes/editor_inspector_plugin");
}

void register_editor_inspector_plugin() {
	js_init_editor_inspector_plugin_module(ctx);
}