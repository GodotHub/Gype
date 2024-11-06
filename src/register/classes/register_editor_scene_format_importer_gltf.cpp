
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/editor_scene_format_importer_gltf.hpp>
#include <godot_cpp/classes/editor_scene_format_importer.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void editor_scene_format_importer_gltf_class_finalizer(JSRuntime *rt, JSValue val) {
	EditorSceneFormatImporterGLTF *editor_scene_format_importer_gltf = static_cast<EditorSceneFormatImporterGLTF *>(JS_GetOpaque(val, EditorSceneFormatImporterGLTF::__class_id));
	if (editor_scene_format_importer_gltf)
		memdelete(editor_scene_format_importer_gltf);
}

static JSClassDef editor_scene_format_importer_gltf_class_def = {
	"EditorSceneFormatImporterGLTF",
	.finalizer = editor_scene_format_importer_gltf_class_finalizer
};

static JSValue editor_scene_format_importer_gltf_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, EditorSceneFormatImporterGLTF::__class_id);
	if (JS_IsException(obj))
		return obj;

	EditorSceneFormatImporterGLTF *editor_scene_format_importer_gltf_class;
	if (argc == 1) 
		editor_scene_format_importer_gltf_class = static_cast<EditorSceneFormatImporterGLTF *>(Variant(*argv).operator Object *());
	else 
		editor_scene_format_importer_gltf_class = memnew(EditorSceneFormatImporterGLTF);
	if (!editor_scene_format_importer_gltf_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, editor_scene_format_importer_gltf_class);
	return obj;
}

static void define_editor_scene_format_importer_gltf_property(JSContext *ctx, JSValue proto) {
	
}

static void define_editor_scene_format_importer_gltf_enum(JSContext *ctx, JSValue proto) {
}

static int js_editor_scene_format_importer_gltf_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["EditorSceneFormatImporterGLTF"] = EditorSceneFormatImporterGLTF::__class_id;
	class_id_list.insert(EditorSceneFormatImporterGLTF::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), EditorSceneFormatImporterGLTF::__class_id, &editor_scene_format_importer_gltf_class_def);

	JSValue proto = JS_NewObjectClass(ctx, EditorSceneFormatImporterGLTF::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, EditorSceneFormatImporter::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, EditorSceneFormatImporterGLTF::__class_id, proto);

	define_editor_scene_format_importer_gltf_property(ctx, proto);
	define_editor_scene_format_importer_gltf_enum(ctx, proto);
	JSValue ctor = JS_NewCFunction2(ctx, editor_scene_format_importer_gltf_class_constructor, "EditorSceneFormatImporterGLTF", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "EditorSceneFormatImporterGLTF", ctor);
	constructors[EditorSceneFormatImporterGLTF::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_editor_scene_format_importer_gltf_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/editor_scene_format_importer';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_editor_scene_format_importer_gltf_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "EditorSceneFormatImporterGLTF");
	return m;
}

JSModuleDef *js_init_editor_scene_format_importer_gltf_module(JSContext *ctx) {
	return _js_init_editor_scene_format_importer_gltf_module(ctx, "@godot/classes/editor_scene_format_importer_gltf");
}

void register_editor_scene_format_importer_gltf() {
	EditorSceneFormatImporterGLTF::__init_js_class_id();
	js_init_editor_scene_format_importer_gltf_module(ctx);
}