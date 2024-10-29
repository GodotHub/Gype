
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/editor_scene_format_importer_fbx2_gltf.hpp>
#include <godot_cpp/classes/editor_scene_format_importer.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void editor_scene_format_importer_fbx2_gltf_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef editor_scene_format_importer_fbx2_gltf_class_def = {
	"EditorSceneFormatImporterFBX2GLTF",
	.finalizer = editor_scene_format_importer_fbx2_gltf_class_finalizer
};

static JSValue editor_scene_format_importer_fbx2_gltf_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, EditorSceneFormatImporterFBX2GLTF::__class_id);
	if (JS_IsException(obj))
		return obj;
	EditorSceneFormatImporterFBX2GLTF *editor_scene_format_importer_fbx2_gltf_class = memnew(EditorSceneFormatImporterFBX2GLTF);
	if (!editor_scene_format_importer_fbx2_gltf_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, editor_scene_format_importer_fbx2_gltf_class);	
	return obj;
}

void define_editor_scene_format_importer_fbx2_gltf_property(JSContext *ctx, JSValue obj) {
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
}

static int js_editor_scene_format_importer_fbx2_gltf_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&EditorSceneFormatImporterFBX2GLTF::__class_id);
	classes["EditorSceneFormatImporterFBX2GLTF"] = EditorSceneFormatImporterFBX2GLTF::__class_id;
	class_id_list.insert(EditorSceneFormatImporterFBX2GLTF::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), EditorSceneFormatImporterFBX2GLTF::__class_id, &editor_scene_format_importer_fbx2_gltf_class_def);

	JSValue proto = JS_NewObjectClass(ctx, EditorSceneFormatImporterFBX2GLTF::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, EditorSceneFormatImporter::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, EditorSceneFormatImporterFBX2GLTF::__class_id, proto);

	define_editor_scene_format_importer_fbx2_gltf_property(ctx, proto);
	define_node_enum(ctx, proto);
	JSValue ctor = JS_NewCFunction2(ctx, editor_scene_format_importer_fbx2_gltf_class_constructor, "EditorSceneFormatImporterFBX2GLTF", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "EditorSceneFormatImporterFBX2GLTF", ctor);

	return 0;
}

JSModuleDef *_js_init_editor_scene_format_importer_fbx2_gltf_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/editor_scene_format_importer';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_editor_scene_format_importer_fbx2_gltf_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "EditorSceneFormatImporterFBX2GLTF");
	return m;
}

JSModuleDef *js_init_editor_scene_format_importer_fbx2_gltf_module(JSContext *ctx) {
	return _js_init_editor_scene_format_importer_fbx2_gltf_module(ctx, "@godot/classes/editor_scene_format_importer_fbx2_gltf");
}

void register_editor_scene_format_importer_fbx2_gltf() {
	EditorSceneFormatImporterFBX2GLTF::__init_js_class_id();
	js_init_editor_scene_format_importer_fbx2_gltf_module(ctx);
}