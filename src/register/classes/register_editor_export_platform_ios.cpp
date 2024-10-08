
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/editor_export_platform.hpp>
#include <godot_cpp/classes/editor_export_platform_ios.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void editor_export_platform_ios_class_finalizer(JSRuntime *rt, JSValue val) {
	EditorExportPlatformIOS *editor_export_platform_ios = static_cast<EditorExportPlatformIOS *>(JS_GetOpaque(val, EditorExportPlatformIOS::__class_id));
	if (editor_export_platform_ios)
		EditorExportPlatformIOS::free(nullptr, editor_export_platform_ios);
}

static JSClassDef editor_export_platform_ios_class_def = {
	"EditorExportPlatformIOS",
	.finalizer = editor_export_platform_ios_class_finalizer
};

static JSValue editor_export_platform_ios_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	EditorExportPlatformIOS *editor_export_platform_ios_class;
	JSValue obj = JS_NewObjectClass(ctx, EditorExportPlatformIOS::__class_id);
	if (JS_IsException(obj))
		return obj;
	editor_export_platform_ios_class = memnew(EditorExportPlatformIOS);
	if (!editor_export_platform_ios_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, editor_export_platform_ios_class);
	return obj;
}

static int js_editor_export_platform_ios_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&EditorExportPlatformIOS::__class_id);
	classes["EditorExportPlatformIOS"] = EditorExportPlatformIOS::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), EditorExportPlatformIOS::__class_id, &editor_export_platform_ios_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, EditorExportPlatform::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, EditorExportPlatformIOS::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, editor_export_platform_ios_class_constructor, "EditorExportPlatformIOS", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "EditorExportPlatformIOS", ctor);

	return 0;
}

JSModuleDef *_js_init_editor_export_platform_ios_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_editor_export_platform_ios_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "EditorExportPlatformIOS");
	return m;
}

JSModuleDef *js_init_editor_export_platform_ios_module(JSContext *ctx) {
	return _js_init_editor_export_platform_ios_module(ctx, "godot/classes/editor_export_platform_ios");
}

void register_editor_export_platform_ios() {
	js_init_editor_export_platform_ios_module(ctx);
}