
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/classes/editor_file_system_directory.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void editor_file_system_directory_class_finalizer(JSRuntime *rt, JSValue val) {
	EditorFileSystemDirectory *editor_file_system_directory = static_cast<EditorFileSystemDirectory *>(JS_GetOpaque(val, EditorFileSystemDirectory::__class_id));
	if (editor_file_system_directory)
		EditorFileSystemDirectory::free(nullptr, editor_file_system_directory);
}

static JSClassDef editor_file_system_directory_class_def = {
	"EditorFileSystemDirectory",
	.finalizer = editor_file_system_directory_class_finalizer
};

static JSValue editor_file_system_directory_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	EditorFileSystemDirectory *editor_file_system_directory_class;
	JSValue obj = JS_NewObjectClass(ctx, EditorFileSystemDirectory::__class_id);
	if (JS_IsException(obj))
		return obj;
	editor_file_system_directory_class = memnew(EditorFileSystemDirectory);
	if (!editor_file_system_directory_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, editor_file_system_directory_class);
	return obj;
}
static JSValue editor_file_system_directory_class_get_subdir_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&EditorFileSystemDirectory::get_subdir_count, EditorFileSystemDirectory::__class_id, ctx, this_val, argv);
};
static JSValue editor_file_system_directory_class_get_subdir(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&EditorFileSystemDirectory::get_subdir, EditorFileSystemDirectory::__class_id, ctx, this_val, argv);
};
static JSValue editor_file_system_directory_class_get_file_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&EditorFileSystemDirectory::get_file_count, EditorFileSystemDirectory::__class_id, ctx, this_val, argv);
};
static JSValue editor_file_system_directory_class_get_file(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&EditorFileSystemDirectory::get_file, EditorFileSystemDirectory::__class_id, ctx, this_val, argv);
};
static JSValue editor_file_system_directory_class_get_file_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&EditorFileSystemDirectory::get_file_path, EditorFileSystemDirectory::__class_id, ctx, this_val, argv);
};
static JSValue editor_file_system_directory_class_get_file_type(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&EditorFileSystemDirectory::get_file_type, EditorFileSystemDirectory::__class_id, ctx, this_val, argv);
};
static JSValue editor_file_system_directory_class_get_file_script_class_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&EditorFileSystemDirectory::get_file_script_class_name, EditorFileSystemDirectory::__class_id, ctx, this_val, argv);
};
static JSValue editor_file_system_directory_class_get_file_script_class_extends(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&EditorFileSystemDirectory::get_file_script_class_extends, EditorFileSystemDirectory::__class_id, ctx, this_val, argv);
};
static JSValue editor_file_system_directory_class_get_file_import_is_valid(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&EditorFileSystemDirectory::get_file_import_is_valid, EditorFileSystemDirectory::__class_id, ctx, this_val, argv);
};
static JSValue editor_file_system_directory_class_get_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&EditorFileSystemDirectory::get_name, EditorFileSystemDirectory::__class_id, ctx, this_val, argv);
};
static JSValue editor_file_system_directory_class_get_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&EditorFileSystemDirectory::get_path, EditorFileSystemDirectory::__class_id, ctx, this_val, argv);
};
static JSValue editor_file_system_directory_class_get_parent(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&EditorFileSystemDirectory::get_parent, EditorFileSystemDirectory::__class_id, ctx, this_val, argv);
};
static JSValue editor_file_system_directory_class_find_file_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&EditorFileSystemDirectory::find_file_index, EditorFileSystemDirectory::__class_id, ctx, this_val, argv);
};
static JSValue editor_file_system_directory_class_find_dir_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&EditorFileSystemDirectory::find_dir_index, EditorFileSystemDirectory::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry editor_file_system_directory_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_subdir_count", 0, &editor_file_system_directory_class_get_subdir_count),
	JS_CFUNC_DEF("get_subdir", 1, &editor_file_system_directory_class_get_subdir),
	JS_CFUNC_DEF("get_file_count", 0, &editor_file_system_directory_class_get_file_count),
	JS_CFUNC_DEF("get_file", 1, &editor_file_system_directory_class_get_file),
	JS_CFUNC_DEF("get_file_path", 1, &editor_file_system_directory_class_get_file_path),
	JS_CFUNC_DEF("get_file_type", 1, &editor_file_system_directory_class_get_file_type),
	JS_CFUNC_DEF("get_file_script_class_name", 1, &editor_file_system_directory_class_get_file_script_class_name),
	JS_CFUNC_DEF("get_file_script_class_extends", 1, &editor_file_system_directory_class_get_file_script_class_extends),
	JS_CFUNC_DEF("get_file_import_is_valid", 1, &editor_file_system_directory_class_get_file_import_is_valid),
	JS_CFUNC_DEF("get_name", 0, &editor_file_system_directory_class_get_name),
	JS_CFUNC_DEF("get_path", 0, &editor_file_system_directory_class_get_path),
	JS_CFUNC_DEF("get_parent", 0, &editor_file_system_directory_class_get_parent),
	JS_CFUNC_DEF("find_file_index", 1, &editor_file_system_directory_class_find_file_index),
	JS_CFUNC_DEF("find_dir_index", 1, &editor_file_system_directory_class_find_dir_index),
};

static int js_editor_file_system_directory_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&EditorFileSystemDirectory::__class_id);
	classes["EditorFileSystemDirectory"] = EditorFileSystemDirectory::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), EditorFileSystemDirectory::__class_id, &editor_file_system_directory_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Object::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, EditorFileSystemDirectory::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, editor_file_system_directory_class_proto_funcs, _countof(editor_file_system_directory_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, editor_file_system_directory_class_constructor, "EditorFileSystemDirectory", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "EditorFileSystemDirectory", ctor);

	return 0;
}

JSModuleDef *_js_init_editor_file_system_directory_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_editor_file_system_directory_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "EditorFileSystemDirectory");
	return m;
}

JSModuleDef *js_init_editor_file_system_directory_module(JSContext *ctx) {
	return _js_init_editor_file_system_directory_module(ctx, "godot/classes/editor_file_system_directory");
}

void register_editor_file_system_directory() {
	js_init_editor_file_system_directory_module(ctx);
}