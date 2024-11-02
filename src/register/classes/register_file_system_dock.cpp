
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/editor_resource_tooltip_plugin.hpp>
#include <godot_cpp/classes/v_box_container.hpp>
#include <godot_cpp/classes/file_system_dock.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void file_system_dock_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef file_system_dock_class_def = {
	"FileSystemDock",
	.finalizer = file_system_dock_class_finalizer
};

static JSValue file_system_dock_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, FileSystemDock::__class_id);
	if (JS_IsException(obj))
		return obj;

	FileSystemDock *file_system_dock_class;
	if (argc == 1) 
		file_system_dock_class = static_cast<FileSystemDock *>(Variant(*argv).operator Object *());
	else 
		file_system_dock_class = memnew(FileSystemDock);
	if (!file_system_dock_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, file_system_dock_class);
	return obj;
}
static JSValue file_system_dock_class_navigate_to_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&FileSystemDock::navigate_to_path, ctx, this_val, argc, argv);
};
static JSValue file_system_dock_class_add_resource_tooltip_plugin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&FileSystemDock::add_resource_tooltip_plugin, ctx, this_val, argc, argv);
};
static JSValue file_system_dock_class_remove_resource_tooltip_plugin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&FileSystemDock::remove_resource_tooltip_plugin, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry file_system_dock_class_proto_funcs[] = {
	JS_CFUNC_DEF("navigate_to_path", 1, &file_system_dock_class_navigate_to_path),
	JS_CFUNC_DEF("add_resource_tooltip_plugin", 1, &file_system_dock_class_add_resource_tooltip_plugin),
	JS_CFUNC_DEF("remove_resource_tooltip_plugin", 1, &file_system_dock_class_remove_resource_tooltip_plugin),
};
static JSValue file_system_dock_class_get_inherit_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	FileSystemDock *opaque = reinterpret_cast<FileSystemDock *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "inherit_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "inherit").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "inherit_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}
static JSValue file_system_dock_class_get_instantiate_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	FileSystemDock *opaque = reinterpret_cast<FileSystemDock *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "instantiate_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "instantiate").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "instantiate_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}
static JSValue file_system_dock_class_get_resource_removed_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	FileSystemDock *opaque = reinterpret_cast<FileSystemDock *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "resource_removed_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "resource_removed").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "resource_removed_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}
static JSValue file_system_dock_class_get_file_removed_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	FileSystemDock *opaque = reinterpret_cast<FileSystemDock *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "file_removed_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "file_removed").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "file_removed_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}
static JSValue file_system_dock_class_get_folder_removed_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	FileSystemDock *opaque = reinterpret_cast<FileSystemDock *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "folder_removed_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "folder_removed").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "folder_removed_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}
static JSValue file_system_dock_class_get_files_moved_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	FileSystemDock *opaque = reinterpret_cast<FileSystemDock *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "files_moved_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "files_moved").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "files_moved_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}
static JSValue file_system_dock_class_get_folder_moved_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	FileSystemDock *opaque = reinterpret_cast<FileSystemDock *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "folder_moved_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "folder_moved").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "folder_moved_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}
static JSValue file_system_dock_class_get_folder_color_changed_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	FileSystemDock *opaque = reinterpret_cast<FileSystemDock *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "folder_color_changed_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "folder_color_changed").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "folder_color_changed_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}
static JSValue file_system_dock_class_get_display_mode_changed_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	FileSystemDock *opaque = reinterpret_cast<FileSystemDock *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "display_mode_changed_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "display_mode_changed").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "display_mode_changed_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}

static void define_file_system_dock_property(JSContext *ctx, JSValue proto) {
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "inherit"),
		JS_NewCFunction(ctx, file_system_dock_class_get_inherit_signal, "get_inherit_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "instantiate"),
		JS_NewCFunction(ctx, file_system_dock_class_get_instantiate_signal, "get_instantiate_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "resource_removed"),
		JS_NewCFunction(ctx, file_system_dock_class_get_resource_removed_signal, "get_resource_removed_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "file_removed"),
		JS_NewCFunction(ctx, file_system_dock_class_get_file_removed_signal, "get_file_removed_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "folder_removed"),
		JS_NewCFunction(ctx, file_system_dock_class_get_folder_removed_signal, "get_folder_removed_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "files_moved"),
		JS_NewCFunction(ctx, file_system_dock_class_get_files_moved_signal, "get_files_moved_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "folder_moved"),
		JS_NewCFunction(ctx, file_system_dock_class_get_folder_moved_signal, "get_folder_moved_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "folder_color_changed"),
		JS_NewCFunction(ctx, file_system_dock_class_get_folder_color_changed_signal, "get_folder_color_changed_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "display_mode_changed"),
		JS_NewCFunction(ctx, file_system_dock_class_get_display_mode_changed_signal, "get_display_mode_changed_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
}

static void define_file_system_dock_enum(JSContext *ctx, JSValue proto) {
}

static int js_file_system_dock_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["FileSystemDock"] = FileSystemDock::__class_id;
	class_id_list.insert(FileSystemDock::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), FileSystemDock::__class_id, &file_system_dock_class_def);

	JSValue proto = JS_NewObjectClass(ctx, FileSystemDock::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, VBoxContainer::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, FileSystemDock::__class_id, proto);

	define_file_system_dock_property(ctx, proto);
	define_file_system_dock_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, file_system_dock_class_proto_funcs, _countof(file_system_dock_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, file_system_dock_class_constructor, "FileSystemDock", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "FileSystemDock", ctor);

	return 0;
}

JSModuleDef *_js_init_file_system_dock_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/v_box_container';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_file_system_dock_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "FileSystemDock");
	return m;
}

JSModuleDef *js_init_file_system_dock_module(JSContext *ctx) {
	return _js_init_file_system_dock_module(ctx, "@godot/classes/file_system_dock");
}

void register_file_system_dock() {
	FileSystemDock::__init_js_class_id();
	js_init_file_system_dock_module(ctx);
}