
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/editor_scene_format_importer.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void editor_scene_format_importer_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef editor_scene_format_importer_class_def = {
	"EditorSceneFormatImporter",
	.finalizer = editor_scene_format_importer_class_finalizer
};

static JSValue editor_scene_format_importer_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, EditorSceneFormatImporter::__class_id);
	if (JS_IsException(obj))
		return obj;
	EditorSceneFormatImporter *editor_scene_format_importer_class = memnew(EditorSceneFormatImporter);
	if (!editor_scene_format_importer_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, editor_scene_format_importer_class);	
	return obj;
}

void define_editor_scene_format_importer_property(JSContext *ctx, JSValue obj) {
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
}

static int js_editor_scene_format_importer_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&EditorSceneFormatImporter::__class_id);
	classes["EditorSceneFormatImporter"] = EditorSceneFormatImporter::__class_id;
	class_id_list.insert(EditorSceneFormatImporter::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), EditorSceneFormatImporter::__class_id, &editor_scene_format_importer_class_def);

	JSValue proto = JS_NewObjectClass(ctx, EditorSceneFormatImporter::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, EditorSceneFormatImporter::__class_id, proto);

	define_editor_scene_format_importer_property(ctx, proto);
	define_node_enum(ctx, proto);
	JSValue ctor = JS_NewCFunction2(ctx, editor_scene_format_importer_class_constructor, "EditorSceneFormatImporter", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "EditorSceneFormatImporter", ctor);

	return 0;
}

JSModuleDef *_js_init_editor_scene_format_importer_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/ref_counted';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_editor_scene_format_importer_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "EditorSceneFormatImporter");
	return m;
}

JSModuleDef *js_init_editor_scene_format_importer_module(JSContext *ctx) {
	return _js_init_editor_scene_format_importer_module(ctx, "godot/classes/editor_scene_format_importer");
}

void register_editor_scene_format_importer() {
	EditorSceneFormatImporter::__init_js_class_id();
	js_init_editor_scene_format_importer_module(ctx);
}