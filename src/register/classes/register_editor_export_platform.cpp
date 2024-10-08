
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/editor_export_platform.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void editor_export_platform_class_finalizer(JSRuntime *rt, JSValue val) {
	EditorExportPlatform *editor_export_platform = static_cast<EditorExportPlatform *>(JS_GetOpaque(val, EditorExportPlatform::__class_id));
	if (editor_export_platform)
		EditorExportPlatform::free(nullptr, editor_export_platform);
}

static JSClassDef editor_export_platform_class_def = {
	"EditorExportPlatform",
	.finalizer = editor_export_platform_class_finalizer
};

static JSValue editor_export_platform_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	EditorExportPlatform *editor_export_platform_class;
	JSValue obj = JS_NewObjectClass(ctx, EditorExportPlatform::__class_id);
	if (JS_IsException(obj))
		return obj;
	editor_export_platform_class = memnew(EditorExportPlatform);
	if (!editor_export_platform_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, editor_export_platform_class);
	return obj;
}
static JSValue editor_export_platform_class_get_os_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&EditorExportPlatform::get_os_name, EditorExportPlatform::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry editor_export_platform_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_os_name", 0, &editor_export_platform_class_get_os_name),
};

static int js_editor_export_platform_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&EditorExportPlatform::__class_id);
	classes["EditorExportPlatform"] = EditorExportPlatform::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), EditorExportPlatform::__class_id, &editor_export_platform_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, EditorExportPlatform::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, editor_export_platform_class_proto_funcs, _countof(editor_export_platform_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, editor_export_platform_class_constructor, "EditorExportPlatform", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "EditorExportPlatform", ctor);

	return 0;
}

JSModuleDef *_js_init_editor_export_platform_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_editor_export_platform_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "EditorExportPlatform");
	return m;
}

JSModuleDef *js_init_editor_export_platform_module(JSContext *ctx) {
	return _js_init_editor_export_platform_module(ctx, "godot/classes/editor_export_platform");
}

void register_editor_export_platform() {
	js_init_editor_export_platform_module(ctx);
}