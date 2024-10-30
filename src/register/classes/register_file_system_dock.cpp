
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/file_system_dock.hpp>
#include <godot_cpp/classes/editor_resource_tooltip_plugin.hpp>
#include <godot_cpp/classes/v_box_container.hpp>
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
	if (argc == 1) {
		Variant vobj = *argv;
		file_system_dock_class = static_cast<FileSystemDock *>(static_cast<Object *>(vobj));
	} else {
		file_system_dock_class = memnew(FileSystemDock);
	}
	if (!file_system_dock_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, file_system_dock_class);	
	return obj;
}
static JSValue file_system_dock_class_navigate_to_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&FileSystemDock::navigate_to_path, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue file_system_dock_class_add_resource_tooltip_plugin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&FileSystemDock::add_resource_tooltip_plugin, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue file_system_dock_class_remove_resource_tooltip_plugin(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&FileSystemDock::remove_resource_tooltip_plugin, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry file_system_dock_class_proto_funcs[] = {
	JS_CFUNC_DEF("navigate_to_path", 1, &file_system_dock_class_navigate_to_path),
	JS_CFUNC_DEF("add_resource_tooltip_plugin", 1, &file_system_dock_class_add_resource_tooltip_plugin),
	JS_CFUNC_DEF("remove_resource_tooltip_plugin", 1, &file_system_dock_class_remove_resource_tooltip_plugin),
};

void define_file_system_dock_property(JSContext *ctx, JSValue obj) {
}

static void define_node_enum(JSContext *ctx, JSValue proto) {
}

static int js_file_system_dock_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&FileSystemDock::__class_id);
	classes["FileSystemDock"] = FileSystemDock::__class_id;
	class_id_list.insert(FileSystemDock::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), FileSystemDock::__class_id, &file_system_dock_class_def);

	JSValue proto = JS_NewObjectClass(ctx, FileSystemDock::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, VBoxContainer::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, FileSystemDock::__class_id, proto);

	define_file_system_dock_property(ctx, proto);
	define_node_enum(ctx, proto);
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