
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/classes/editor_export_platform.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/editor_export_plugin.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void editor_export_plugin_class_finalizer(JSRuntime *rt, JSValue val) {
	EditorExportPlugin *editor_export_plugin = static_cast<EditorExportPlugin *>(JS_GetOpaque(val, EditorExportPlugin::__class_id));
	if (editor_export_plugin)
		EditorExportPlugin::free(nullptr, editor_export_plugin);
}

static JSClassDef editor_export_plugin_class_def = {
	"EditorExportPlugin",
	.finalizer = editor_export_plugin_class_finalizer
};

static JSValue editor_export_plugin_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	EditorExportPlugin *editor_export_plugin_class;
	JSValue obj = JS_NewObjectClass(ctx, EditorExportPlugin::__class_id);
	if (JS_IsException(obj))
		return obj;
	editor_export_plugin_class = memnew(EditorExportPlugin);
	if (!editor_export_plugin_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, editor_export_plugin_class);
	return obj;
}
static JSValue editor_export_plugin_class_add_shared_object(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&EditorExportPlugin::add_shared_object, EditorExportPlugin::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue editor_export_plugin_class_add_ios_project_static_lib(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&EditorExportPlugin::add_ios_project_static_lib, EditorExportPlugin::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue editor_export_plugin_class_add_file(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&EditorExportPlugin::add_file, EditorExportPlugin::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue editor_export_plugin_class_add_ios_framework(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&EditorExportPlugin::add_ios_framework, EditorExportPlugin::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue editor_export_plugin_class_add_ios_embedded_framework(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&EditorExportPlugin::add_ios_embedded_framework, EditorExportPlugin::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue editor_export_plugin_class_add_ios_plist_content(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&EditorExportPlugin::add_ios_plist_content, EditorExportPlugin::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue editor_export_plugin_class_add_ios_linker_flags(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&EditorExportPlugin::add_ios_linker_flags, EditorExportPlugin::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue editor_export_plugin_class_add_ios_bundle_file(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&EditorExportPlugin::add_ios_bundle_file, EditorExportPlugin::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue editor_export_plugin_class_add_ios_cpp_code(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&EditorExportPlugin::add_ios_cpp_code, EditorExportPlugin::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue editor_export_plugin_class_add_macos_plugin_file(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&EditorExportPlugin::add_macos_plugin_file, EditorExportPlugin::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue editor_export_plugin_class_skip(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&EditorExportPlugin::skip, EditorExportPlugin::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue editor_export_plugin_class_get_option(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&EditorExportPlugin::get_option, EditorExportPlugin::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry editor_export_plugin_class_proto_funcs[] = {
	JS_CFUNC_DEF("add_shared_object", 3, &editor_export_plugin_class_add_shared_object),
	JS_CFUNC_DEF("add_ios_project_static_lib", 1, &editor_export_plugin_class_add_ios_project_static_lib),
	JS_CFUNC_DEF("add_file", 3, &editor_export_plugin_class_add_file),
	JS_CFUNC_DEF("add_ios_framework", 1, &editor_export_plugin_class_add_ios_framework),
	JS_CFUNC_DEF("add_ios_embedded_framework", 1, &editor_export_plugin_class_add_ios_embedded_framework),
	JS_CFUNC_DEF("add_ios_plist_content", 1, &editor_export_plugin_class_add_ios_plist_content),
	JS_CFUNC_DEF("add_ios_linker_flags", 1, &editor_export_plugin_class_add_ios_linker_flags),
	JS_CFUNC_DEF("add_ios_bundle_file", 1, &editor_export_plugin_class_add_ios_bundle_file),
	JS_CFUNC_DEF("add_ios_cpp_code", 1, &editor_export_plugin_class_add_ios_cpp_code),
	JS_CFUNC_DEF("add_macos_plugin_file", 1, &editor_export_plugin_class_add_macos_plugin_file),
	JS_CFUNC_DEF("skip", 0, &editor_export_plugin_class_skip),
	JS_CFUNC_DEF("get_option", 1, &editor_export_plugin_class_get_option),
};

static int js_editor_export_plugin_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&EditorExportPlugin::__class_id);
	classes["EditorExportPlugin"] = EditorExportPlugin::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), EditorExportPlugin::__class_id, &editor_export_plugin_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, EditorExportPlugin::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, editor_export_plugin_class_proto_funcs, _countof(editor_export_plugin_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, editor_export_plugin_class_constructor, "EditorExportPlugin", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "EditorExportPlugin", ctor);

	return 0;
}

JSModuleDef *_js_init_editor_export_plugin_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_editor_export_plugin_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "EditorExportPlugin");
	return m;
}

JSModuleDef *js_init_editor_export_plugin_module(JSContext *ctx) {
	return _js_init_editor_export_plugin_module(ctx, "godot/classes/editor_export_plugin");
}

void register_editor_export_plugin() {
	js_init_editor_export_plugin_module(ctx);
}