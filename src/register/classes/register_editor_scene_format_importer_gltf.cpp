
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/editor_scene_format_importer.hpp>
#include <godot_cpp/classes/editor_scene_format_importer_gltf.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void editor_scene_format_importer_gltf_class_finalizer(JSRuntime *rt, JSValue val) {
	EditorSceneFormatImporterGLTF *editor_scene_format_importer_gltf = static_cast<EditorSceneFormatImporterGLTF *>(JS_GetOpaque(val, EditorSceneFormatImporterGLTF::__class_id));
	if (editor_scene_format_importer_gltf)
		EditorSceneFormatImporterGLTF::free(nullptr, editor_scene_format_importer_gltf);
}

static JSClassDef editor_scene_format_importer_gltf_class_def = {
	"EditorSceneFormatImporterGLTF",
	.finalizer = editor_scene_format_importer_gltf_class_finalizer
};

static JSValue editor_scene_format_importer_gltf_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	EditorSceneFormatImporterGLTF *editor_scene_format_importer_gltf_class;
	JSValue obj = JS_NewObjectClass(ctx, EditorSceneFormatImporterGLTF::__class_id);
	if (JS_IsException(obj))
		return obj;
	editor_scene_format_importer_gltf_class = memnew(EditorSceneFormatImporterGLTF);
	if (!editor_scene_format_importer_gltf_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, editor_scene_format_importer_gltf_class);
	return obj;
}

static int js_editor_scene_format_importer_gltf_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&EditorSceneFormatImporterGLTF::__class_id);
	classes["EditorSceneFormatImporterGLTF"] = EditorSceneFormatImporterGLTF::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), EditorSceneFormatImporterGLTF::__class_id, &editor_scene_format_importer_gltf_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, EditorSceneFormatImporter::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, EditorSceneFormatImporterGLTF::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, editor_scene_format_importer_gltf_class_constructor, "EditorSceneFormatImporterGLTF", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "EditorSceneFormatImporterGLTF", ctor);

	return 0;
}

JSModuleDef *_js_init_editor_scene_format_importer_gltf_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_editor_scene_format_importer_gltf_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "EditorSceneFormatImporterGLTF");
	return m;
}

JSModuleDef *js_init_editor_scene_format_importer_gltf_module(JSContext *ctx) {
	return _js_init_editor_scene_format_importer_gltf_module(ctx, "godot/classes/editor_scene_format_importer_gltf");
}

void register_editor_scene_format_importer_gltf() {
	js_init_editor_scene_format_importer_gltf_module(ctx);
}