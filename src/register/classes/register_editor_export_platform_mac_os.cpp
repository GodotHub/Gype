
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/editor_export_platform.hpp>
#include <godot_cpp/classes/editor_export_platform_mac_os.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void editor_export_platform_mac_os_class_finalizer(JSRuntime *rt, JSValue val) {
	EditorExportPlatformMacOS *editor_export_platform_mac_os = static_cast<EditorExportPlatformMacOS *>(JS_GetOpaque(val, EditorExportPlatformMacOS::__class_id));
	if (editor_export_platform_mac_os)
		EditorExportPlatformMacOS::free(nullptr, editor_export_platform_mac_os);
}

static JSClassDef editor_export_platform_mac_os_class_def = {
	"EditorExportPlatformMacOS",
	.finalizer = editor_export_platform_mac_os_class_finalizer
};

static JSValue editor_export_platform_mac_os_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	EditorExportPlatformMacOS *editor_export_platform_mac_os_class;
	JSValue obj = JS_NewObjectClass(ctx, EditorExportPlatformMacOS::__class_id);
	if (JS_IsException(obj))
		return obj;
	editor_export_platform_mac_os_class = memnew(EditorExportPlatformMacOS);
	if (!editor_export_platform_mac_os_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, editor_export_platform_mac_os_class);
	return obj;
}

static int js_editor_export_platform_mac_os_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&EditorExportPlatformMacOS::__class_id);
	classes["EditorExportPlatformMacOS"] = EditorExportPlatformMacOS::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), EditorExportPlatformMacOS::__class_id, &editor_export_platform_mac_os_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, EditorExportPlatform::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, EditorExportPlatformMacOS::__class_id, proto);

	JSValue ctor = JS_NewCFunction2(ctx, editor_export_platform_mac_os_class_constructor, "EditorExportPlatformMacOS", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "EditorExportPlatformMacOS", ctor);

	return 0;
}

JSModuleDef *_js_init_editor_export_platform_mac_os_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_editor_export_platform_mac_os_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "EditorExportPlatformMacOS");
	return m;
}

JSModuleDef *js_init_editor_export_platform_mac_os_module(JSContext *ctx) {
	return _js_init_editor_export_platform_mac_os_module(ctx, "godot/classes/editor_export_platform_mac_os");
}

void register_editor_export_platform_mac_os() {
	js_init_editor_export_platform_mac_os_module(ctx);
}