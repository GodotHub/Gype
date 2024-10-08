
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/editor_export_platform_linux_bsd.hpp>
#include <godot_cpp/classes/editor_export_platform_pc.hpp>
#include <godot_cpp/core/convert_helper.hpp>
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
	return obj;
}

static int js_editor_export_platform_linux_bsd_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&EditorExportPlatformLinuxBSD::__class_id);
	classes["EditorExportPlatformLinuxBSD"] = EditorExportPlatformLinuxBSD::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), EditorExportPlatformLinuxBSD::__class_id, &editor_export_platform_linux_bsd_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, EditorExportPlatformPC::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, EditorExportPlatformLinuxBSD::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, editor_export_platform_linux_bsd_class_constructor, "EditorExportPlatformLinuxBSD", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "EditorExportPlatformLinuxBSD", ctor);

	return 0;
}

JSModuleDef *_js_init_editor_export_platform_linux_bsd_module(JSContext *ctx, const char *module_name) {
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
	js_init_editor_export_platform_linux_bsd_module(ctx);
}