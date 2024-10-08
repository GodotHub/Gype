
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/v_box_container.hpp>
#include <godot_cpp/classes/file_system_dock.hpp>
#include <godot_cpp/classes/editor_resource_tooltip_plugin.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void file_system_dock_class_finalizer(JSRuntime *rt, JSValue val) {
	FileSystemDock *file_system_dock = static_cast<FileSystemDock *>(JS_GetOpaque(val, FileSystemDock::__class_id));
	if (file_system_dock)
		FileSystemDock::free(nullptr, file_system_dock);
}

static JSClassDef file_system_dock_class_def = {
	"FileSystemDock",
	.finalizer = file_system_dock_class_finalizer
};

static JSValue file_system_dock_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	FileSystemDock *file_system_dock_class;
	JSValue obj = JS_NewObjectClass(ctx, FileSystemDock::__class_id);
	if (JS_IsException(obj))
		return obj;
	file_system_dock_class = memnew(FileSystemDock);
	if (!file_system_dock_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, file_system_dock_class);
	return obj;
}
static JSValue file_system_dock_class_navigate_to_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&FileSystemDock::navigate_to_path, FileSystemDock::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue file_system_dock_class_add_resource_tooltip_plugin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&FileSystemDock::add_resource_tooltip_plugin, FileSystemDock::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue file_system_dock_class_remove_resource_tooltip_plugin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&FileSystemDock::remove_resource_tooltip_plugin, FileSystemDock::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry file_system_dock_class_proto_funcs[] = {
	JS_CFUNC_DEF("navigate_to_path", 1, &file_system_dock_class_navigate_to_path),
	JS_CFUNC_DEF("add_resource_tooltip_plugin", 1, &file_system_dock_class_add_resource_tooltip_plugin),
	JS_CFUNC_DEF("remove_resource_tooltip_plugin", 1, &file_system_dock_class_remove_resource_tooltip_plugin),
};

static int js_file_system_dock_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&FileSystemDock::__class_id);
	classes["FileSystemDock"] = FileSystemDock::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), FileSystemDock::__class_id, &file_system_dock_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, VBoxContainer::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, FileSystemDock::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, file_system_dock_class_proto_funcs, _countof(file_system_dock_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, file_system_dock_class_constructor, "FileSystemDock", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "FileSystemDock", ctor);

	return 0;
}

JSModuleDef *_js_init_file_system_dock_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_file_system_dock_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "FileSystemDock");
	return m;
}

JSModuleDef *js_init_file_system_dock_module(JSContext *ctx) {
	return _js_init_file_system_dock_module(ctx, "godot/classes/file_system_dock");
}

void register_file_system_dock() {
	js_init_file_system_dock_module(ctx);
}