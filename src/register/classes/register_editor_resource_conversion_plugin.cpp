
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/editor_resource_conversion_plugin.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void editor_resource_conversion_plugin_class_finalizer(JSRuntime *rt, JSValue val) {
	EditorResourceConversionPlugin *editor_resource_conversion_plugin = static_cast<EditorResourceConversionPlugin *>(JS_GetOpaque(val, EditorResourceConversionPlugin::__class_id));
	if (editor_resource_conversion_plugin)
		EditorResourceConversionPlugin::free(nullptr, editor_resource_conversion_plugin);
}

static JSClassDef editor_resource_conversion_plugin_class_def = {
	"EditorResourceConversionPlugin",
	.finalizer = editor_resource_conversion_plugin_class_finalizer
};

static JSValue editor_resource_conversion_plugin_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	EditorResourceConversionPlugin *editor_resource_conversion_plugin_class;
	JSValue obj = JS_NewObjectClass(ctx, EditorResourceConversionPlugin::__class_id);
	if (JS_IsException(obj))
		return obj;
	editor_resource_conversion_plugin_class = memnew(EditorResourceConversionPlugin);
	if (!editor_resource_conversion_plugin_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, editor_resource_conversion_plugin_class);
	return obj;
}

static int js_editor_resource_conversion_plugin_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&EditorResourceConversionPlugin::__class_id);
	classes["EditorResourceConversionPlugin"] = EditorResourceConversionPlugin::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), EditorResourceConversionPlugin::__class_id, &editor_resource_conversion_plugin_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, EditorResourceConversionPlugin::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, editor_resource_conversion_plugin_class_constructor, "EditorResourceConversionPlugin", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "EditorResourceConversionPlugin", ctor);

	return 0;
}

JSModuleDef *_js_init_editor_resource_conversion_plugin_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_editor_resource_conversion_plugin_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "EditorResourceConversionPlugin");
	return m;
}

JSModuleDef *js_init_editor_resource_conversion_plugin_module(JSContext *ctx) {
	return _js_init_editor_resource_conversion_plugin_module(ctx, "godot/classes/editor_resource_conversion_plugin");
}

void register_editor_resource_conversion_plugin() {
	js_init_editor_resource_conversion_plugin_module(ctx);
}