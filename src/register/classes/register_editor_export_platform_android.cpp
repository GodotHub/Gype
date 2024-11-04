
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/editor_export_platform_android.hpp>
#include <godot_cpp/classes/editor_export_platform.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void editor_export_platform_android_class_finalizer(JSRuntime *rt, JSValue val) {
	EditorExportPlatformAndroid *editor_export_platform_android = static_cast<EditorExportPlatformAndroid *>(JS_GetOpaque(val, EditorExportPlatformAndroid::__class_id));
	if (editor_export_platform_android)
		memdelete(editor_export_platform_android);
}

static JSClassDef editor_export_platform_android_class_def = {
	"EditorExportPlatformAndroid",
	.finalizer = editor_export_platform_android_class_finalizer
};

static JSValue editor_export_platform_android_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, EditorExportPlatformAndroid::__class_id);
	if (JS_IsException(obj))
		return obj;

	EditorExportPlatformAndroid *editor_export_platform_android_class;
	if (argc == 1) 
		editor_export_platform_android_class = static_cast<EditorExportPlatformAndroid *>(Variant(*argv).operator Object *());
	else 
		editor_export_platform_android_class = memnew(EditorExportPlatformAndroid);
	if (!editor_export_platform_android_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, editor_export_platform_android_class);
	return obj;
}

static void define_editor_export_platform_android_property(JSContext *ctx, JSValue proto) {
	
}

static void define_editor_export_platform_android_enum(JSContext *ctx, JSValue proto) {
}

static int js_editor_export_platform_android_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["EditorExportPlatformAndroid"] = EditorExportPlatformAndroid::__class_id;
	class_id_list.insert(EditorExportPlatformAndroid::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), EditorExportPlatformAndroid::__class_id, &editor_export_platform_android_class_def);

	JSValue proto = JS_NewObjectClass(ctx, EditorExportPlatformAndroid::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, EditorExportPlatform::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, EditorExportPlatformAndroid::__class_id, proto);

	define_editor_export_platform_android_property(ctx, proto);
	define_editor_export_platform_android_enum(ctx, proto);
	JSValue ctor = JS_NewCFunction2(ctx, editor_export_platform_android_class_constructor, "EditorExportPlatformAndroid", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "EditorExportPlatformAndroid", ctor);
	constructors[EditorExportPlatformAndroid::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_editor_export_platform_android_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/editor_export_platform';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_editor_export_platform_android_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "EditorExportPlatformAndroid");
	return m;
}

JSModuleDef *js_init_editor_export_platform_android_module(JSContext *ctx) {
	return _js_init_editor_export_platform_android_module(ctx, "@godot/classes/editor_export_platform_android");
}

void register_editor_export_platform_android() {
	EditorExportPlatformAndroid::__init_js_class_id();
	js_init_editor_export_platform_android_module(ctx);
}