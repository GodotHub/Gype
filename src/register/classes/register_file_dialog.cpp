
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/v_box_container.hpp>
#include <godot_cpp/classes/line_edit.hpp>
#include <godot_cpp/classes/confirmation_dialog.hpp>
#include <godot_cpp/classes/file_dialog.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void file_dialog_class_finalizer(JSRuntime *rt, JSValue val) {
	FileDialog *file_dialog = static_cast<FileDialog *>(JS_GetOpaque(val, FileDialog::__class_id));
	if (file_dialog)
		FileDialog::free(nullptr, file_dialog);
}

static JSClassDef file_dialog_class_def = {
	"FileDialog",
	.finalizer = file_dialog_class_finalizer
};

static JSValue file_dialog_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	FileDialog *file_dialog_class;
	JSValue obj = JS_NewObjectClass(ctx, FileDialog::__class_id);
	if (JS_IsException(obj))
		return obj;
	file_dialog_class = memnew(FileDialog);
	if (!file_dialog_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, file_dialog_class);
	return obj;
}
static JSValue file_dialog_class_clear_filters(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&FileDialog::clear_filters, FileDialog::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue file_dialog_class_add_filter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&FileDialog::add_filter, FileDialog::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue file_dialog_class_set_filters(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&FileDialog::set_filters, FileDialog::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue file_dialog_class_get_filters(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FileDialog::get_filters, FileDialog::__class_id, ctx, this_val, argv);
};
static JSValue file_dialog_class_get_option_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FileDialog::get_option_name, FileDialog::__class_id, ctx, this_val, argv);
};
static JSValue file_dialog_class_get_option_values(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FileDialog::get_option_values, FileDialog::__class_id, ctx, this_val, argv);
};
static JSValue file_dialog_class_get_option_default(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FileDialog::get_option_default, FileDialog::__class_id, ctx, this_val, argv);
};
static JSValue file_dialog_class_set_option_name(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&FileDialog::set_option_name, FileDialog::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue file_dialog_class_set_option_values(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&FileDialog::set_option_values, FileDialog::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue file_dialog_class_set_option_default(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&FileDialog::set_option_default, FileDialog::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue file_dialog_class_set_option_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&FileDialog::set_option_count, FileDialog::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue file_dialog_class_get_option_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FileDialog::get_option_count, FileDialog::__class_id, ctx, this_val, argv);
};
static JSValue file_dialog_class_add_option(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&FileDialog::add_option, FileDialog::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue file_dialog_class_get_selected_options(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FileDialog::get_selected_options, FileDialog::__class_id, ctx, this_val, argv);
};
static JSValue file_dialog_class_get_current_dir(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FileDialog::get_current_dir, FileDialog::__class_id, ctx, this_val, argv);
};
static JSValue file_dialog_class_get_current_file(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FileDialog::get_current_file, FileDialog::__class_id, ctx, this_val, argv);
};
static JSValue file_dialog_class_get_current_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FileDialog::get_current_path, FileDialog::__class_id, ctx, this_val, argv);
};
static JSValue file_dialog_class_set_current_dir(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&FileDialog::set_current_dir, FileDialog::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue file_dialog_class_set_current_file(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&FileDialog::set_current_file, FileDialog::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue file_dialog_class_set_current_path(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&FileDialog::set_current_path, FileDialog::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue file_dialog_class_set_mode_overrides_title(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&FileDialog::set_mode_overrides_title, FileDialog::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue file_dialog_class_is_mode_overriding_title(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FileDialog::is_mode_overriding_title, FileDialog::__class_id, ctx, this_val, argv);
};
static JSValue file_dialog_class_set_file_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&FileDialog::set_file_mode, FileDialog::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue file_dialog_class_get_file_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FileDialog::get_file_mode, FileDialog::__class_id, ctx, this_val, argv);
};
static JSValue file_dialog_class_get_vbox(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&FileDialog::get_vbox, FileDialog::__class_id, ctx, this_val, argv);
};
static JSValue file_dialog_class_get_line_edit(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&FileDialog::get_line_edit, FileDialog::__class_id, ctx, this_val, argv);
};
static JSValue file_dialog_class_set_access(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&FileDialog::set_access, FileDialog::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue file_dialog_class_get_access(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FileDialog::get_access, FileDialog::__class_id, ctx, this_val, argv);
};
static JSValue file_dialog_class_set_root_subfolder(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&FileDialog::set_root_subfolder, FileDialog::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue file_dialog_class_get_root_subfolder(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FileDialog::get_root_subfolder, FileDialog::__class_id, ctx, this_val, argv);
};
static JSValue file_dialog_class_set_show_hidden_files(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&FileDialog::set_show_hidden_files, FileDialog::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue file_dialog_class_is_showing_hidden_files(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FileDialog::is_showing_hidden_files, FileDialog::__class_id, ctx, this_val, argv);
};
static JSValue file_dialog_class_set_use_native_dialog(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&FileDialog::set_use_native_dialog, FileDialog::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue file_dialog_class_get_use_native_dialog(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&FileDialog::get_use_native_dialog, FileDialog::__class_id, ctx, this_val, argv);
};
static JSValue file_dialog_class_deselect_all(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&FileDialog::deselect_all, FileDialog::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue file_dialog_class_invalidate(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&FileDialog::invalidate, FileDialog::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry file_dialog_class_proto_funcs[] = {
	JS_CFUNC_DEF("clear_filters", 0, &file_dialog_class_clear_filters),
	JS_CFUNC_DEF("add_filter", 2, &file_dialog_class_add_filter),
	JS_CFUNC_DEF("set_filters", 1, &file_dialog_class_set_filters),
	JS_CFUNC_DEF("get_filters", 0, &file_dialog_class_get_filters),
	JS_CFUNC_DEF("get_option_name", 1, &file_dialog_class_get_option_name),
	JS_CFUNC_DEF("get_option_values", 1, &file_dialog_class_get_option_values),
	JS_CFUNC_DEF("get_option_default", 1, &file_dialog_class_get_option_default),
	JS_CFUNC_DEF("set_option_name", 2, &file_dialog_class_set_option_name),
	JS_CFUNC_DEF("set_option_values", 2, &file_dialog_class_set_option_values),
	JS_CFUNC_DEF("set_option_default", 2, &file_dialog_class_set_option_default),
	JS_CFUNC_DEF("set_option_count", 1, &file_dialog_class_set_option_count),
	JS_CFUNC_DEF("get_option_count", 0, &file_dialog_class_get_option_count),
	JS_CFUNC_DEF("add_option", 3, &file_dialog_class_add_option),
	JS_CFUNC_DEF("get_selected_options", 0, &file_dialog_class_get_selected_options),
	JS_CFUNC_DEF("get_current_dir", 0, &file_dialog_class_get_current_dir),
	JS_CFUNC_DEF("get_current_file", 0, &file_dialog_class_get_current_file),
	JS_CFUNC_DEF("get_current_path", 0, &file_dialog_class_get_current_path),
	JS_CFUNC_DEF("set_current_dir", 1, &file_dialog_class_set_current_dir),
	JS_CFUNC_DEF("set_current_file", 1, &file_dialog_class_set_current_file),
	JS_CFUNC_DEF("set_current_path", 1, &file_dialog_class_set_current_path),
	JS_CFUNC_DEF("set_mode_overrides_title", 1, &file_dialog_class_set_mode_overrides_title),
	JS_CFUNC_DEF("is_mode_overriding_title", 0, &file_dialog_class_is_mode_overriding_title),
	JS_CFUNC_DEF("set_file_mode", 1, &file_dialog_class_set_file_mode),
	JS_CFUNC_DEF("get_file_mode", 0, &file_dialog_class_get_file_mode),
	JS_CFUNC_DEF("get_vbox", 0, &file_dialog_class_get_vbox),
	JS_CFUNC_DEF("get_line_edit", 0, &file_dialog_class_get_line_edit),
	JS_CFUNC_DEF("set_access", 1, &file_dialog_class_set_access),
	JS_CFUNC_DEF("get_access", 0, &file_dialog_class_get_access),
	JS_CFUNC_DEF("set_root_subfolder", 1, &file_dialog_class_set_root_subfolder),
	JS_CFUNC_DEF("get_root_subfolder", 0, &file_dialog_class_get_root_subfolder),
	JS_CFUNC_DEF("set_show_hidden_files", 1, &file_dialog_class_set_show_hidden_files),
	JS_CFUNC_DEF("is_showing_hidden_files", 0, &file_dialog_class_is_showing_hidden_files),
	JS_CFUNC_DEF("set_use_native_dialog", 1, &file_dialog_class_set_use_native_dialog),
	JS_CFUNC_DEF("get_use_native_dialog", 0, &file_dialog_class_get_use_native_dialog),
	JS_CFUNC_DEF("deselect_all", 0, &file_dialog_class_deselect_all),
	JS_CFUNC_DEF("invalidate", 0, &file_dialog_class_invalidate),
};

static int js_file_dialog_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&FileDialog::__class_id);
	classes["FileDialog"] = FileDialog::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), FileDialog::__class_id, &file_dialog_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, ConfirmationDialog::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, FileDialog::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, file_dialog_class_proto_funcs, _countof(file_dialog_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, file_dialog_class_constructor, "FileDialog", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "FileDialog", ctor);

	return 0;
}

JSModuleDef *_js_init_file_dialog_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_file_dialog_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "FileDialog");
	return m;
}

JSModuleDef *js_init_file_dialog_module(JSContext *ctx) {
	return _js_init_file_dialog_module(ctx, "godot/classes/file_dialog");
}

void register_file_dialog() {
	js_init_file_dialog_module(ctx);
}