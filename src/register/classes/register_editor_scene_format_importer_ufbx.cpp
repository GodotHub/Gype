
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/editor_scene_format_importer_ufbx.hpp>
#include <godot_cpp/classes/editor_scene_format_importer.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void editor_scene_format_importer_ufbx_class_finalizer(JSRuntime *rt, JSValue val) {
	EditorSceneFormatImporterUFBX *editor_scene_format_importer_ufbx = static_cast<EditorSceneFormatImporterUFBX *>(JS_GetOpaque(val, EditorSceneFormatImporterUFBX::__class_id));
	if (editor_scene_format_importer_ufbx)
		memdelete(editor_scene_format_importer_ufbx);
}

static JSClassDef editor_scene_format_importer_ufbx_class_def = {
	"EditorSceneFormatImporterUFBX",
	.finalizer = editor_scene_format_importer_ufbx_class_finalizer
};

static JSValue editor_scene_format_importer_ufbx_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, EditorSceneFormatImporterUFBX::__class_id);
	if (JS_IsException(obj))
		return obj;

	EditorSceneFormatImporterUFBX *editor_scene_format_importer_ufbx_class;
	if (argc == 1) 
		editor_scene_format_importer_ufbx_class = static_cast<EditorSceneFormatImporterUFBX *>(Variant(*argv).operator Object *());
	else 
		editor_scene_format_importer_ufbx_class = memnew(EditorSceneFormatImporterUFBX);
	if (!editor_scene_format_importer_ufbx_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, editor_scene_format_importer_ufbx_class);
	return obj;
}

static void define_editor_scene_format_importer_ufbx_property(JSContext *ctx, JSValue proto) {
	
}

static void define_editor_scene_format_importer_ufbx_enum(JSContext *ctx, JSValue proto) {
}

static int js_editor_scene_format_importer_ufbx_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["EditorSceneFormatImporterUFBX"] = EditorSceneFormatImporterUFBX::__class_id;
	class_id_list.insert(EditorSceneFormatImporterUFBX::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), EditorSceneFormatImporterUFBX::__class_id, &editor_scene_format_importer_ufbx_class_def);

	JSValue proto = JS_NewObjectClass(ctx, EditorSceneFormatImporterUFBX::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, EditorSceneFormatImporter::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, EditorSceneFormatImporterUFBX::__class_id, proto);

	define_editor_scene_format_importer_ufbx_property(ctx, proto);
	define_editor_scene_format_importer_ufbx_enum(ctx, proto);
	JSValue ctor = JS_NewCFunction2(ctx, editor_scene_format_importer_ufbx_class_constructor, "EditorSceneFormatImporterUFBX", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "EditorSceneFormatImporterUFBX", ctor);
	constructors[EditorSceneFormatImporterUFBX::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_editor_scene_format_importer_ufbx_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/editor_scene_format_importer';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_editor_scene_format_importer_ufbx_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "EditorSceneFormatImporterUFBX");
	return m;
}

JSModuleDef *js_init_editor_scene_format_importer_ufbx_module(JSContext *ctx) {
	return _js_init_editor_scene_format_importer_ufbx_module(ctx, "@godot/classes/editor_scene_format_importer_ufbx");
}

void register_editor_scene_format_importer_ufbx() {
	EditorSceneFormatImporterUFBX::__init_js_class_id();
	js_init_editor_scene_format_importer_ufbx_module(ctx);
}