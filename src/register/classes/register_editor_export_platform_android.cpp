
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/editor_export_platform.hpp>
#include <godot_cpp/classes/editor_export_platform_android.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void editor_export_platform_android_class_finalizer(JSRuntime *rt, JSValue val) {
	EditorExportPlatformAndroid *editor_export_platform_android = static_cast<EditorExportPlatformAndroid *>(JS_GetOpaque(val, EditorExportPlatformAndroid::__class_id));
	if (editor_export_platform_android)
		EditorExportPlatformAndroid::free(nullptr, editor_export_platform_android);
}

static JSClassDef editor_export_platform_android_class_def = {
	"EditorExportPlatformAndroid",
	.finalizer = editor_export_platform_android_class_finalizer
};

static JSValue editor_export_platform_android_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	EditorExportPlatformAndroid *editor_export_platform_android_class;
	JSValue obj = JS_NewObjectClass(ctx, EditorExportPlatformAndroid::__class_id);
	if (JS_IsException(obj))
		return obj;
	editor_export_platform_android_class = memnew(EditorExportPlatformAndroid);
	if (!editor_export_platform_android_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, editor_export_platform_android_class);
	return obj;
}

static int js_editor_export_platform_android_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&EditorExportPlatformAndroid::__class_id);
	classes["EditorExportPlatformAndroid"] = EditorExportPlatformAndroid::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), EditorExportPlatformAndroid::__class_id, &editor_export_platform_android_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, EditorExportPlatform::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, EditorExportPlatformAndroid::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, editor_export_platform_android_class_constructor, "EditorExportPlatformAndroid", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "EditorExportPlatformAndroid", ctor);

	return 0;
}

JSModuleDef *_js_init_editor_export_platform_android_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_editor_export_platform_android_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "EditorExportPlatformAndroid");
	return m;
}

JSModuleDef *js_init_editor_export_platform_android_module(JSContext *ctx) {
	return _js_init_editor_export_platform_android_module(ctx, "godot/classes/editor_export_platform_android");
}

void register_editor_export_platform_android() {
	js_init_editor_export_platform_android_module(ctx);
}