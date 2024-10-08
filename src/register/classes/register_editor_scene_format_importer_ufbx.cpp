
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/editor_scene_format_importer.hpp>
#include <godot_cpp/classes/editor_scene_format_importer_ufbx.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void editor_scene_format_importer_ufbx_class_finalizer(JSRuntime *rt, JSValue val) {
	EditorSceneFormatImporterUFBX *editor_scene_format_importer_ufbx = static_cast<EditorSceneFormatImporterUFBX *>(JS_GetOpaque(val, EditorSceneFormatImporterUFBX::__class_id));
	if (editor_scene_format_importer_ufbx)
		EditorSceneFormatImporterUFBX::free(nullptr, editor_scene_format_importer_ufbx);
}

static JSClassDef editor_scene_format_importer_ufbx_class_def = {
	"EditorSceneFormatImporterUFBX",
	.finalizer = editor_scene_format_importer_ufbx_class_finalizer
};

static JSValue editor_scene_format_importer_ufbx_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	EditorSceneFormatImporterUFBX *editor_scene_format_importer_ufbx_class;
	JSValue obj = JS_NewObjectClass(ctx, EditorSceneFormatImporterUFBX::__class_id);
	if (JS_IsException(obj))
		return obj;
	editor_scene_format_importer_ufbx_class = memnew(EditorSceneFormatImporterUFBX);
	if (!editor_scene_format_importer_ufbx_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, editor_scene_format_importer_ufbx_class);
	return obj;
}

static int js_editor_scene_format_importer_ufbx_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&EditorSceneFormatImporterUFBX::__class_id);
	classes["EditorSceneFormatImporterUFBX"] = EditorSceneFormatImporterUFBX::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), EditorSceneFormatImporterUFBX::__class_id, &editor_scene_format_importer_ufbx_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, EditorSceneFormatImporter::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, EditorSceneFormatImporterUFBX::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, editor_scene_format_importer_ufbx_class_constructor, "EditorSceneFormatImporterUFBX", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "EditorSceneFormatImporterUFBX", ctor);

	return 0;
}

JSModuleDef *_js_init_editor_scene_format_importer_ufbx_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_editor_scene_format_importer_ufbx_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "EditorSceneFormatImporterUFBX");
	return m;
}

JSModuleDef *js_init_editor_scene_format_importer_ufbx_module(JSContext *ctx) {
	return _js_init_editor_scene_format_importer_ufbx_module(ctx, "godot/classes/editor_scene_format_importer_ufbx");
}

void register_editor_scene_format_importer_ufbx() {
	js_init_editor_scene_format_importer_ufbx_module(ctx);
}