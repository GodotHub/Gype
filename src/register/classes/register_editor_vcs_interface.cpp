
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/editor_vcs_interface.hpp>
#include <godot_cpp/classes/object.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void editor_vcs_interface_class_finalizer(JSRuntime *rt, JSValue val) {
	EditorVCSInterface *editor_vcs_interface = static_cast<EditorVCSInterface *>(JS_GetOpaque(val, EditorVCSInterface::__class_id));
	if (editor_vcs_interface)
		EditorVCSInterface::free(nullptr, editor_vcs_interface);
}

static JSClassDef editor_vcs_interface_class_def = {
	"EditorVCSInterface",
	.finalizer = editor_vcs_interface_class_finalizer
};

static JSValue editor_vcs_interface_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	EditorVCSInterface *editor_vcs_interface_class;
	JSValue obj = JS_NewObjectClass(ctx, EditorVCSInterface::__class_id);
	if (JS_IsException(obj))
		return obj;
	editor_vcs_interface_class = memnew(EditorVCSInterface);
	if (!editor_vcs_interface_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, editor_vcs_interface_class);
	return obj;
}
static JSValue editor_vcs_interface_class_create_diff_line(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&EditorVCSInterface::create_diff_line, EditorVCSInterface::__class_id, ctx, this_val, argv);
};
static JSValue editor_vcs_interface_class_create_diff_hunk(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&EditorVCSInterface::create_diff_hunk, EditorVCSInterface::__class_id, ctx, this_val, argv);
};
static JSValue editor_vcs_interface_class_create_diff_file(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&EditorVCSInterface::create_diff_file, EditorVCSInterface::__class_id, ctx, this_val, argv);
};
static JSValue editor_vcs_interface_class_create_commit(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&EditorVCSInterface::create_commit, EditorVCSInterface::__class_id, ctx, this_val, argv);
};
static JSValue editor_vcs_interface_class_create_status_file(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&EditorVCSInterface::create_status_file, EditorVCSInterface::__class_id, ctx, this_val, argv);
};
static JSValue editor_vcs_interface_class_add_diff_hunks_into_diff_file(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&EditorVCSInterface::add_diff_hunks_into_diff_file, EditorVCSInterface::__class_id, ctx, this_val, argv);
};
static JSValue editor_vcs_interface_class_add_line_diffs_into_diff_hunk(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&EditorVCSInterface::add_line_diffs_into_diff_hunk, EditorVCSInterface::__class_id, ctx, this_val, argv);
};
static JSValue editor_vcs_interface_class_popup_error(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&EditorVCSInterface::popup_error, EditorVCSInterface::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
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

static int js_editor_vcs_interface_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&EditorVCSInterface::__class_id);
	classes["EditorVCSInterface"] = EditorVCSInterface::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), EditorVCSInterface::__class_id, &editor_vcs_interface_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Object::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, EditorVCSInterface::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, editor_vcs_interface_class_proto_funcs, _countof(editor_vcs_interface_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, editor_vcs_interface_class_constructor, "EditorVCSInterface", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "EditorVCSInterface", ctor);

	return 0;
}

JSModuleDef *_js_init_editor_vcs_interface_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_editor_vcs_interface_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "EditorVCSInterface");
	return m;
}

JSModuleDef *js_init_editor_vcs_interface_module(JSContext *ctx) {
	return _js_init_editor_vcs_interface_module(ctx, "godot/classes/editor_vcs_interface");
}

void register_editor_vcs_interface() {
	js_init_editor_vcs_interface_module(ctx);
}