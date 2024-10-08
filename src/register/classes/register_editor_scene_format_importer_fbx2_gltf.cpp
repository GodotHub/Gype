
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/editor_scene_format_importer.hpp>
#include <godot_cpp/classes/editor_scene_format_importer_fbx2_gltf.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void editor_scene_format_importer_fbx2_gltf_class_finalizer(JSRuntime *rt, JSValue val) {
	EditorSceneFormatImporterFBX2GLTF *editor_scene_format_importer_fbx2_gltf = static_cast<EditorSceneFormatImporterFBX2GLTF *>(JS_GetOpaque(val, EditorSceneFormatImporterFBX2GLTF::__class_id));
	if (editor_scene_format_importer_fbx2_gltf)
		EditorSceneFormatImporterFBX2GLTF::free(nullptr, editor_scene_format_importer_fbx2_gltf);
}

static JSClassDef editor_scene_format_importer_fbx2_gltf_class_def = {
	"EditorSceneFormatImporterFBX2GLTF",
	.finalizer = editor_scene_format_importer_fbx2_gltf_class_finalizer
};

static JSValue editor_scene_format_importer_fbx2_gltf_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	EditorSceneFormatImporterFBX2GLTF *editor_scene_format_importer_fbx2_gltf_class;
	JSValue obj = JS_NewObjectClass(ctx, EditorSceneFormatImporterFBX2GLTF::__class_id);
	if (JS_IsException(obj))
		return obj;
	editor_scene_format_importer_fbx2_gltf_class = memnew(EditorSceneFormatImporterFBX2GLTF);
	if (!editor_scene_format_importer_fbx2_gltf_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, editor_scene_format_importer_fbx2_gltf_class);
	return obj;
}

static int js_editor_scene_format_importer_fbx2_gltf_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&EditorSceneFormatImporterFBX2GLTF::__class_id);
	classes["EditorSceneFormatImporterFBX2GLTF"] = EditorSceneFormatImporterFBX2GLTF::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), EditorSceneFormatImporterFBX2GLTF::__class_id, &editor_scene_format_importer_fbx2_gltf_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, EditorSceneFormatImporter::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, EditorSceneFormatImporterFBX2GLTF::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, editor_scene_format_importer_fbx2_gltf_class_constructor, "EditorSceneFormatImporterFBX2GLTF", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "EditorSceneFormatImporterFBX2GLTF", ctor);

	return 0;
}

JSModuleDef *_js_init_editor_scene_format_importer_fbx2_gltf_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_editor_scene_format_importer_fbx2_gltf_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "EditorSceneFormatImporterFBX2GLTF");
	return m;
}

JSModuleDef *js_init_editor_scene_format_importer_fbx2_gltf_module(JSContext *ctx) {
	return _js_init_editor_scene_format_importer_fbx2_gltf_module(ctx, "godot/classes/editor_scene_format_importer_fbx2_gltf");
}

void register_editor_scene_format_importer_fbx2_gltf() {
	js_init_editor_scene_format_importer_fbx2_gltf_module(ctx);
}