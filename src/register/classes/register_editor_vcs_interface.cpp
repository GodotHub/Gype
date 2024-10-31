
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/editor_vcs_interface.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void editor_vcs_interface_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef editor_vcs_interface_class_def = {
	"EditorVCSInterface",
	.finalizer = editor_vcs_interface_class_finalizer
};

static JSValue editor_vcs_interface_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, EditorVCSInterface::__class_id);
	if (JS_IsException(obj))
		return obj;

	EditorVCSInterface *editor_vcs_interface_class;
	if (argc == 1) 
		editor_vcs_interface_class = static_cast<EditorVCSInterface *>(Variant(*argv).operator Object *());
	else 
		editor_vcs_interface_class = memnew(EditorVCSInterface);
	if (!editor_vcs_interface_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, editor_vcs_interface_class);
	return obj;
}
static JSValue editor_vcs_interface_class_create_diff_line(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&EditorVCSInterface::create_diff_line, ctx, this_val, argc, argv);
};
static JSValue editor_vcs_interface_class_create_diff_hunk(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&EditorVCSInterface::create_diff_hunk, ctx, this_val, argc, argv);
};
static JSValue editor_vcs_interface_class_create_diff_file(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&EditorVCSInterface::create_diff_file, ctx, this_val, argc, argv);
};
static JSValue editor_vcs_interface_class_create_commit(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&EditorVCSInterface::create_commit, ctx, this_val, argc, argv);
};
static JSValue editor_vcs_interface_class_create_status_file(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&EditorVCSInterface::create_status_file, ctx, this_val, argc, argv);
};
static JSValue editor_vcs_interface_class_add_diff_hunks_into_diff_file(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&EditorVCSInterface::add_diff_hunks_into_diff_file, ctx, this_val, argc, argv);
};
static JSValue editor_vcs_interface_class_add_line_diffs_into_diff_hunk(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&EditorVCSInterface::add_line_diffs_into_diff_hunk, ctx, this_val, argc, argv);
};
static JSValue editor_vcs_interface_class_popup_error(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&EditorVCSInterface::popup_error, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry editor_vcs_interface_class_proto_funcs[] = {
	JS_CFUNC_DEF("create_diff_line", 4, &editor_vcs_interface_class_create_diff_line),
	JS_CFUNC_DEF("create_diff_hunk", 4, &editor_vcs_interface_class_create_diff_hunk),
	JS_CFUNC_DEF("create_diff_file", 2, &editor_vcs_interface_class_create_diff_file),
	JS_CFUNC_DEF("create_commit", 5, &editor_vcs_interface_class_create_commit),
	JS_CFUNC_DEF("create_status_file", 3, &editor_vcs_interface_class_create_status_file),
	JS_CFUNC_DEF("add_diff_hunks_into_diff_file", 2, &editor_vcs_interface_class_add_diff_hunks_into_diff_file),
	JS_CFUNC_DEF("add_line_diffs_into_diff_hunk", 2, &editor_vcs_interface_class_add_line_diffs_into_diff_hunk),
	JS_CFUNC_DEF("popup_error", 1, &editor_vcs_interface_class_popup_error),
};

static void define_editor_vcs_interface_property(JSContext *ctx, JSValue proto) {
	
}

static void define_editor_vcs_interface_enum(JSContext *ctx, JSValue proto) {
	JSValue ChangeType_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, ChangeType_obj, "CHANGE_TYPE_NEW", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, ChangeType_obj, "CHANGE_TYPE_MODIFIED", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, ChangeType_obj, "CHANGE_TYPE_RENAMED", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, ChangeType_obj, "CHANGE_TYPE_DELETED", JS_NewInt64(ctx, 3));
	JS_SetPropertyStr(ctx, ChangeType_obj, "CHANGE_TYPE_TYPECHANGE", JS_NewInt64(ctx, 4));
	JS_SetPropertyStr(ctx, ChangeType_obj, "CHANGE_TYPE_UNMERGED", JS_NewInt64(ctx, 5));
	JS_SetPropertyStr(ctx, proto, "ChangeType", ChangeType_obj);
	JSValue TreeArea_obj = JS_NewObject(ctx);
	JS_SetPropertyStr(ctx, TreeArea_obj, "TREE_AREA_COMMIT", JS_NewInt64(ctx, 0));
	JS_SetPropertyStr(ctx, TreeArea_obj, "TREE_AREA_STAGED", JS_NewInt64(ctx, 1));
	JS_SetPropertyStr(ctx, TreeArea_obj, "TREE_AREA_UNSTAGED", JS_NewInt64(ctx, 2));
	JS_SetPropertyStr(ctx, proto, "TreeArea", TreeArea_obj);
}

static int js_editor_vcs_interface_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["EditorVCSInterface"] = EditorVCSInterface::__class_id;
	class_id_list.insert(EditorVCSInterface::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), EditorVCSInterface::__class_id, &editor_vcs_interface_class_def);

	JSValue proto = JS_NewObjectClass(ctx, EditorVCSInterface::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Object::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, EditorVCSInterface::__class_id, proto);

	define_editor_vcs_interface_property(ctx, proto);
	define_editor_vcs_interface_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, editor_vcs_interface_class_proto_funcs, _countof(editor_vcs_interface_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, editor_vcs_interface_class_constructor, "EditorVCSInterface", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "EditorVCSInterface", ctor);

	return 0;
}

JSModuleDef *_js_init_editor_vcs_interface_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/godot_object';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_editor_vcs_interface_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "EditorVCSInterface");
	return m;
}

JSModuleDef *js_init_editor_vcs_interface_module(JSContext *ctx) {
	return _js_init_editor_vcs_interface_module(ctx, "@godot/classes/editor_vcs_interface");
}

void register_editor_vcs_interface() {
	EditorVCSInterface::__init_js_class_id();
	js_init_editor_vcs_interface_module(ctx);
}