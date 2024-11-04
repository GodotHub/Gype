
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/editor_scene_format_importer_blend.hpp>
#include <godot_cpp/classes/editor_scene_format_importer.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void editor_scene_format_importer_blend_class_finalizer(JSRuntime *rt, JSValue val) {
	EditorSceneFormatImporterBlend *editor_scene_format_importer_blend = static_cast<EditorSceneFormatImporterBlend *>(JS_GetOpaque(val, EditorSceneFormatImporterBlend::__class_id));
	if (editor_scene_format_importer_blend)
		memdelete(editor_scene_format_importer_blend);
}

static JSClassDef editor_scene_format_importer_blend_class_def = {
	"EditorSceneFormatImporterBlend",
	.finalizer = editor_scene_format_importer_blend_class_finalizer
};

static JSValue editor_scene_format_importer_blend_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, EditorSceneFormatImporterBlend::__class_id);
	if (JS_IsException(obj))
		return obj;

	EditorSceneFormatImporterBlend *editor_scene_format_importer_blend_class;
	if (argc == 1) 
		editor_scene_format_importer_blend_class = static_cast<EditorSceneFormatImporterBlend *>(Variant(*argv).operator Object *());
	else 
		editor_scene_format_importer_blend_class = memnew(EditorSceneFormatImporterBlend);
	if (!editor_scene_format_importer_blend_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, editor_scene_format_importer_blend_class);
	return obj;
}

static void define_editor_scene_format_importer_blend_property(JSContext *ctx, JSValue proto) {
	
}

static void define_editor_scene_format_importer_blend_enum(JSContext *ctx, JSValue proto) {
}

static int js_editor_scene_format_importer_blend_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["EditorSceneFormatImporterBlend"] = EditorSceneFormatImporterBlend::__class_id;
	class_id_list.insert(EditorSceneFormatImporterBlend::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), EditorSceneFormatImporterBlend::__class_id, &editor_scene_format_importer_blend_class_def);

	JSValue proto = JS_NewObjectClass(ctx, EditorSceneFormatImporterBlend::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, EditorSceneFormatImporter::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, EditorSceneFormatImporterBlend::__class_id, proto);

	define_editor_scene_format_importer_blend_property(ctx, proto);
	define_editor_scene_format_importer_blend_enum(ctx, proto);
	JSValue ctor = JS_NewCFunction2(ctx, editor_scene_format_importer_blend_class_constructor, "EditorSceneFormatImporterBlend", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "EditorSceneFormatImporterBlend", ctor);
	constructors[EditorSceneFormatImporterBlend::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_editor_scene_format_importer_blend_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/editor_scene_format_importer';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_editor_scene_format_importer_blend_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "EditorSceneFormatImporterBlend");
	return m;
}

JSModuleDef *js_init_editor_scene_format_importer_blend_module(JSContext *ctx) {
	return _js_init_editor_scene_format_importer_blend_module(ctx, "@godot/classes/editor_scene_format_importer_blend");
}

void register_editor_scene_format_importer_blend() {
	EditorSceneFormatImporterBlend::__init_js_class_id();
	js_init_editor_scene_format_importer_blend_module(ctx);
}