
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/editor_scene_post_import.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void editor_scene_post_import_class_finalizer(JSRuntime *rt, JSValue val) {
	EditorScenePostImport *editor_scene_post_import = static_cast<EditorScenePostImport *>(JS_GetOpaque(val, EditorScenePostImport::__class_id));
	if (editor_scene_post_import)
		EditorScenePostImport::free(nullptr, editor_scene_post_import);
}

static JSClassDef editor_scene_post_import_class_def = {
	"EditorScenePostImport",
	.finalizer = editor_scene_post_import_class_finalizer
};

static JSValue editor_scene_post_import_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	EditorScenePostImport *editor_scene_post_import_class;
	JSValue obj = JS_NewObjectClass(ctx, EditorScenePostImport::__class_id);
	if (JS_IsException(obj))
		return obj;
	editor_scene_post_import_class = memnew(EditorScenePostImport);
	if (!editor_scene_post_import_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, editor_scene_post_import_class);
	return obj;
}
static JSValue editor_scene_post_import_class_get_source_file(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&EditorScenePostImport::get_source_file, EditorScenePostImport::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry editor_scene_post_import_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_source_file", 0, &editor_scene_post_import_class_get_source_file),
};

static int js_editor_scene_post_import_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&EditorScenePostImport::__class_id);
	classes["EditorScenePostImport"] = EditorScenePostImport::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), EditorScenePostImport::__class_id, &editor_scene_post_import_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, EditorScenePostImport::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, editor_scene_post_import_class_proto_funcs, _countof(editor_scene_post_import_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, editor_scene_post_import_class_constructor, "EditorScenePostImport", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "EditorScenePostImport", ctor);

	return 0;
}

JSModuleDef *_js_init_editor_scene_post_import_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_editor_scene_post_import_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "EditorScenePostImport");
	return m;
}

JSModuleDef *js_init_editor_scene_post_import_module(JSContext *ctx) {
	return _js_init_editor_scene_post_import_module(ctx, "godot/classes/editor_scene_post_import");
}

void register_editor_scene_post_import() {
	js_init_editor_scene_post_import_module(ctx);
}