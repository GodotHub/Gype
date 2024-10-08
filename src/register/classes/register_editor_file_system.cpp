
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/editor_file_system.hpp>
#include <godot_cpp/classes/editor_file_system_directory.hpp>
#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void editor_file_system_class_finalizer(JSRuntime *rt, JSValue val) {
	EditorFileSystem *editor_file_system = static_cast<EditorFileSystem *>(JS_GetOpaque(val, EditorFileSystem::__class_id));
	if (editor_file_system)
		EditorFileSystem::free(nullptr, editor_file_system);
}

static JSClassDef editor_file_system_class_def = {
	"EditorFileSystem",
	.finalizer = editor_file_system_class_finalizer
};

static JSValue editor_file_system_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	EditorFileSystem *editor_file_system_class;
	JSValue obj = JS_NewObjectClass(ctx, EditorFileSystem::__class_id);
	if (JS_IsException(obj))
		return obj;
	editor_file_system_class = memnew(EditorFileSystem);
	if (!editor_file_system_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, editor_file_system_class);
	return obj;
}
static JSValue editor_file_system_class_get_filesystem(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&EditorFileSystem::get_filesystem, EditorFileSystem::__class_id, ctx, this_val, argv);
};
static JSValue editor_file_system_class_is_scanning(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&EditorFileSystem::is_scanning, EditorFileSystem::__class_id, ctx, this_val, argv);
};
static JSValue editor_file_system_class_get_scanning_progress(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&EditorFileSystem::get_scanning_progress, EditorFileSystem::__class_id, ctx, this_val, argv);
};
static JSValue editor_file_system_class_scan(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&EditorFileSystem::scan, EditorFileSystem::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue editor_file_system_class_scan_sources(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&EditorFileSystem::scan_sources, EditorFileSystem::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue editor_file_system_class_update_file(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&EditorFileSystem::update_file, EditorFileSystem::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue editor_file_system_class_get_filesystem_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&EditorFileSystem::get_filesystem_path, EditorFileSystem::__class_id, ctx, this_val, argv);
};
static JSValue editor_file_system_class_get_file_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&EditorFileSystem::get_file_type, EditorFileSystem::__class_id, ctx, this_val, argv);
};
static JSValue editor_file_system_class_reimport_files(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&EditorFileSystem::reimport_files, EditorFileSystem::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry editor_file_system_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_filesystem", 0, &editor_file_system_class_get_filesystem),
	JS_CFUNC_DEF("is_scanning", 0, &editor_file_system_class_is_scanning),
	JS_CFUNC_DEF("get_scanning_progress", 0, &editor_file_system_class_get_scanning_progress),
	JS_CFUNC_DEF("scan", 0, &editor_file_system_class_scan),
	JS_CFUNC_DEF("scan_sources", 0, &editor_file_system_class_scan_sources),
	JS_CFUNC_DEF("update_file", 1, &editor_file_system_class_update_file),
	JS_CFUNC_DEF("get_filesystem_path", 1, &editor_file_system_class_get_filesystem_path),
	JS_CFUNC_DEF("get_file_type", 1, &editor_file_system_class_get_file_type),
	JS_CFUNC_DEF("reimport_files", 1, &editor_file_system_class_reimport_files),
};

static int js_editor_file_system_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&EditorFileSystem::__class_id);
	classes["EditorFileSystem"] = EditorFileSystem::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), EditorFileSystem::__class_id, &editor_file_system_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Node::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, EditorFileSystem::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, editor_file_system_class_proto_funcs, _countof(editor_file_system_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, editor_file_system_class_constructor, "EditorFileSystem", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "EditorFileSystem", ctor);

	return 0;
}

JSModuleDef *_js_init_editor_file_system_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_editor_file_system_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "EditorFileSystem");
	return m;
}

JSModuleDef *js_init_editor_file_system_module(JSContext *ctx) {
	return _js_init_editor_file_system_module(ctx, "godot/classes/editor_file_system");
}

void register_editor_file_system() {
	js_init_editor_file_system_module(ctx);
}