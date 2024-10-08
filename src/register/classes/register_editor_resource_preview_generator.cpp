
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/editor_resource_preview_generator.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void editor_resource_preview_generator_class_finalizer(JSRuntime *rt, JSValue val) {
	EditorResourcePreviewGenerator *editor_resource_preview_generator = static_cast<EditorResourcePreviewGenerator *>(JS_GetOpaque(val, EditorResourcePreviewGenerator::__class_id));
	if (editor_resource_preview_generator)
		EditorResourcePreviewGenerator::free(nullptr, editor_resource_preview_generator);
}

static JSClassDef editor_resource_preview_generator_class_def = {
	"EditorResourcePreviewGenerator",
	.finalizer = editor_resource_preview_generator_class_finalizer
};

static JSValue editor_resource_preview_generator_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	EditorResourcePreviewGenerator *editor_resource_preview_generator_class;
	JSValue obj = JS_NewObjectClass(ctx, EditorResourcePreviewGenerator::__class_id);
	if (JS_IsException(obj))
		return obj;
	editor_resource_preview_generator_class = memnew(EditorResourcePreviewGenerator);
	if (!editor_resource_preview_generator_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, editor_resource_preview_generator_class);
	return obj;
}

static int js_editor_resource_preview_generator_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&EditorResourcePreviewGenerator::__class_id);
	classes["EditorResourcePreviewGenerator"] = EditorResourcePreviewGenerator::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), EditorResourcePreviewGenerator::__class_id, &editor_resource_preview_generator_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, EditorResourcePreviewGenerator::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, editor_resource_preview_generator_class_constructor, "EditorResourcePreviewGenerator", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "EditorResourcePreviewGenerator", ctor);

	return 0;
}

JSModuleDef *_js_init_editor_resource_preview_generator_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_editor_resource_preview_generator_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "EditorResourcePreviewGenerator");
	return m;
}

JSModuleDef *js_init_editor_resource_preview_generator_module(JSContext *ctx) {
	return _js_init_editor_resource_preview_generator_module(ctx, "godot/classes/editor_resource_preview_generator");
}

void register_editor_resource_preview_generator() {
	js_init_editor_resource_preview_generator_module(ctx);
}