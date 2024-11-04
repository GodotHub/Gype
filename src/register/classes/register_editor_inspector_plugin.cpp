
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/editor_inspector_plugin.hpp>
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void editor_inspector_plugin_class_finalizer(JSRuntime *rt, JSValue val) {
	EditorInspectorPlugin *editor_inspector_plugin = static_cast<EditorInspectorPlugin *>(JS_GetOpaque(val, EditorInspectorPlugin::__class_id));
	if (editor_inspector_plugin)
		memdelete(editor_inspector_plugin);
}

static JSClassDef editor_inspector_plugin_class_def = {
	"EditorInspectorPlugin",
	.finalizer = editor_inspector_plugin_class_finalizer
};

static JSValue editor_inspector_plugin_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, EditorInspectorPlugin::__class_id);
	if (JS_IsException(obj))
		return obj;

	EditorInspectorPlugin *editor_inspector_plugin_class;
	if (argc == 1) 
		editor_inspector_plugin_class = static_cast<EditorInspectorPlugin *>(Variant(*argv).operator Object *());
	else 
		editor_inspector_plugin_class = memnew(EditorInspectorPlugin);
	if (!editor_inspector_plugin_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, editor_inspector_plugin_class);
	return obj;
}
static JSValue editor_inspector_plugin_class_add_custom_control(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&EditorInspectorPlugin::add_custom_control, ctx, this_val, argc, argv);
};
static JSValue editor_inspector_plugin_class_add_property_editor(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&EditorInspectorPlugin::add_property_editor, ctx, this_val, argc, argv);
};
static JSValue editor_inspector_plugin_class_add_property_editor_for_multiple_properties(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&EditorInspectorPlugin::add_property_editor_for_multiple_properties, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry editor_inspector_plugin_class_proto_funcs[] = {
	JS_CFUNC_DEF("add_custom_control", 1, &editor_inspector_plugin_class_add_custom_control),
	JS_CFUNC_DEF("add_property_editor", 4, &editor_inspector_plugin_class_add_property_editor),
	JS_CFUNC_DEF("add_property_editor_for_multiple_properties", 3, &editor_inspector_plugin_class_add_property_editor_for_multiple_properties),
};

static void define_editor_inspector_plugin_property(JSContext *ctx, JSValue proto) {
	
}

static void define_editor_inspector_plugin_enum(JSContext *ctx, JSValue proto) {
}

static int js_editor_inspector_plugin_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["EditorInspectorPlugin"] = EditorInspectorPlugin::__class_id;
	class_id_list.insert(EditorInspectorPlugin::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), EditorInspectorPlugin::__class_id, &editor_inspector_plugin_class_def);

	JSValue proto = JS_NewObjectClass(ctx, EditorInspectorPlugin::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, EditorInspectorPlugin::__class_id, proto);

	define_editor_inspector_plugin_property(ctx, proto);
	define_editor_inspector_plugin_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, editor_inspector_plugin_class_proto_funcs, _countof(editor_inspector_plugin_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, editor_inspector_plugin_class_constructor, "EditorInspectorPlugin", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "EditorInspectorPlugin", ctor);
	constructors[EditorInspectorPlugin::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_editor_inspector_plugin_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/ref_counted';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_editor_inspector_plugin_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "EditorInspectorPlugin");
	return m;
}

JSModuleDef *js_init_editor_inspector_plugin_module(JSContext *ctx) {
	return _js_init_editor_inspector_plugin_module(ctx, "@godot/classes/editor_inspector_plugin");
}

void register_editor_inspector_plugin() {
	EditorInspectorPlugin::__init_js_class_id();
	js_init_editor_inspector_plugin_module(ctx);
}