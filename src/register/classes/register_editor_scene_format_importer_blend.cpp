
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/editor_scene_format_importer.hpp>
#include <godot_cpp/classes/editor_scene_format_importer_blend.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void editor_scene_format_importer_blend_class_finalizer(JSRuntime *rt, JSValue val) {
	EditorSceneFormatImporterBlend *editor_scene_format_importer_blend = static_cast<EditorSceneFormatImporterBlend *>(JS_GetOpaque(val, EditorSceneFormatImporterBlend::__class_id));
	if (editor_scene_format_importer_blend)
		EditorSceneFormatImporterBlend::free(nullptr, editor_scene_format_importer_blend);
}

static JSClassDef editor_scene_format_importer_blend_class_def = {
	"EditorSceneFormatImporterBlend",
	.finalizer = editor_scene_format_importer_blend_class_finalizer
};

static JSValue editor_scene_format_importer_blend_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	EditorSceneFormatImporterBlend *editor_scene_format_importer_blend_class;
	JSValue obj = JS_NewObjectClass(ctx, EditorSceneFormatImporterBlend::__class_id);
	if (JS_IsException(obj))
		return obj;
	editor_scene_format_importer_blend_class = memnew(EditorSceneFormatImporterBlend);
	if (!editor_scene_format_importer_blend_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, editor_scene_format_importer_blend_class);
	return obj;
}

static int js_editor_scene_format_importer_blend_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&EditorSceneFormatImporterBlend::__class_id);
	classes["EditorSceneFormatImporterBlend"] = EditorSceneFormatImporterBlend::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), EditorSceneFormatImporterBlend::__class_id, &editor_scene_format_importer_blend_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, EditorSceneFormatImporter::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, EditorSceneFormatImporterBlend::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, editor_scene_format_importer_blend_class_constructor, "EditorSceneFormatImporterBlend", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "EditorSceneFormatImporterBlend", ctor);

	return 0;
}

JSModuleDef *_js_init_editor_scene_format_importer_blend_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_editor_scene_format_importer_blend_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "EditorSceneFormatImporterBlend");
	return m;
}

JSModuleDef *js_init_editor_scene_format_importer_blend_module(JSContext *ctx) {
	return _js_init_editor_scene_format_importer_blend_module(ctx, "godot/classes/editor_scene_format_importer_blend");
}

void register_editor_scene_format_importer_blend() {
	js_init_editor_scene_format_importer_blend_module(ctx);
}