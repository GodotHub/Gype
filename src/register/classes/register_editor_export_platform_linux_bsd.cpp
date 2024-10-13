
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/editor_export_platform_linux_bsd.hpp>
#include <godot_cpp/classes/editor_export_platform_pc.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void editor_export_platform_linux_bsd_class_finalizer(JSRuntime *rt, JSValue val) {
	EditorExportPlatformLinuxBSD *editor_export_platform_linux_bsd = static_cast<EditorExportPlatformLinuxBSD *>(JS_GetOpaque(val, EditorExportPlatformLinuxBSD::__class_id));
	if (editor_export_platform_linux_bsd)
		EditorExportPlatformLinuxBSD::free(nullptr, editor_export_platform_linux_bsd);
}

static JSClassDef editor_export_platform_linux_bsd_class_def = {
	"EditorExportPlatformLinuxBSD",
	.finalizer = editor_export_platform_linux_bsd_class_finalizer
};

static JSValue editor_export_platform_linux_bsd_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	EditorExportPlatformLinuxBSD *editor_export_platform_linux_bsd_class;
	JSValue obj = JS_NewObjectClass(ctx, EditorExportPlatformLinuxBSD::__class_id);
	if (JS_IsException(obj))
		return obj;
	editor_export_platform_linux_bsd_class = memnew(EditorExportPlatformLinuxBSD);
	if (!editor_export_platform_linux_bsd_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, editor_export_platform_linux_bsd_class);
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");

	if (JS_IsObject(proto)) {
		JS_SetPrototype(ctx, obj, proto);
	}
	JS_FreeValue(ctx, proto);

	
	return obj;
}

void define_editor_export_platform_linux_bsd_property(JSContext *ctx, JSValue obj) {
}

static int js_editor_export_platform_linux_bsd_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&EditorExportPlatformLinuxBSD::__class_id);
	classes["EditorExportPlatformLinuxBSD"] = EditorExportPlatformLinuxBSD::__class_id;
	class_id_list.insert(EditorExportPlatformLinuxBSD::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), EditorExportPlatformLinuxBSD::__class_id, &editor_export_platform_linux_bsd_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, EditorExportPlatformPC::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, EditorExportPlatformLinuxBSD::__class_id, proto);
	define_editor_export_platform_linux_bsd_property(ctx, proto);

	JSValue ctor = JS_NewCFunction2(ctx, editor_export_platform_linux_bsd_class_constructor, "EditorExportPlatformLinuxBSD", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "EditorExportPlatformLinuxBSD", ctor);

	return 0;
}

JSModuleDef *_js_init_editor_export_platform_linux_bsd_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/editor_export_platform_pc';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_editor_export_platform_linux_bsd_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "EditorExportPlatformLinuxBSD");
	return m;
}

JSModuleDef *js_init_editor_export_platform_linux_bsd_module(JSContext *ctx) {
	return _js_init_editor_export_platform_linux_bsd_module(ctx, "godot/classes/editor_export_platform_linux_bsd");
}

void register_editor_export_platform_linux_bsd() {
	EditorExportPlatformLinuxBSD::__init_js_class_id();
	js_init_editor_export_platform_linux_bsd_module(ctx);
}