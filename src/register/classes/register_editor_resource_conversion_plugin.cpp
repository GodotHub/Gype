
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/editor_resource_conversion_plugin.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void editor_resource_conversion_plugin_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef editor_resource_conversion_plugin_class_def = {
	"EditorResourceConversionPlugin",
	.finalizer = editor_resource_conversion_plugin_class_finalizer
};

static JSValue editor_resource_conversion_plugin_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, EditorResourceConversionPlugin::__class_id);
	if (JS_IsException(obj))
		return obj;

	EditorResourceConversionPlugin *editor_resource_conversion_plugin_class;
	if (argc == 1) 
		editor_resource_conversion_plugin_class = static_cast<EditorResourceConversionPlugin *>(Variant(*argv).operator Object *());
	else 
		editor_resource_conversion_plugin_class = memnew(EditorResourceConversionPlugin);
	if (!editor_resource_conversion_plugin_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, editor_resource_conversion_plugin_class);
	return obj;
}

static void define_editor_resource_conversion_plugin_property(JSContext *ctx, JSValue proto) {
	
}

static void define_editor_resource_conversion_plugin_enum(JSContext *ctx, JSValue proto) {
}

static int js_editor_resource_conversion_plugin_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["EditorResourceConversionPlugin"] = EditorResourceConversionPlugin::__class_id;
	class_id_list.insert(EditorResourceConversionPlugin::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), EditorResourceConversionPlugin::__class_id, &editor_resource_conversion_plugin_class_def);

	JSValue proto = JS_NewObjectClass(ctx, EditorResourceConversionPlugin::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, EditorResourceConversionPlugin::__class_id, proto);

	define_editor_resource_conversion_plugin_property(ctx, proto);
	define_editor_resource_conversion_plugin_enum(ctx, proto);
	JSValue ctor = JS_NewCFunction2(ctx, editor_resource_conversion_plugin_class_constructor, "EditorResourceConversionPlugin", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "EditorResourceConversionPlugin", ctor);

	return 0;
}

JSModuleDef *_js_init_editor_resource_conversion_plugin_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/ref_counted';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_editor_resource_conversion_plugin_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "EditorResourceConversionPlugin");
	return m;
}

JSModuleDef *js_init_editor_resource_conversion_plugin_module(JSContext *ctx) {
	return _js_init_editor_resource_conversion_plugin_module(ctx, "@godot/classes/editor_resource_conversion_plugin");
}

void register_editor_resource_conversion_plugin() {
	EditorResourceConversionPlugin::__init_js_class_id();
	js_init_editor_resource_conversion_plugin_module(ctx);
}