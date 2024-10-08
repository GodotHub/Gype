
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/label.hpp>
#include <godot_cpp/classes/button.hpp>
#include <godot_cpp/classes/accept_dialog.hpp>
#include <godot_cpp/classes/window.hpp>
#include <godot_cpp/classes/line_edit.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void accept_dialog_class_finalizer(JSRuntime *rt, JSValue val) {
	AcceptDialog *accept_dialog = static_cast<AcceptDialog *>(JS_GetOpaque(val, AcceptDialog::__class_id));
	if (accept_dialog)
		AcceptDialog::free(nullptr, accept_dialog);
}

static JSClassDef accept_dialog_class_def = {
	"AcceptDialog",
	.finalizer = accept_dialog_class_finalizer
};

static JSValue accept_dialog_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	AcceptDialog *accept_dialog_class;
	JSValue obj = JS_NewObjectClass(ctx, AcceptDialog::__class_id);
	if (JS_IsException(obj))
		return obj;
	accept_dialog_class = memnew(AcceptDialog);
	if (!accept_dialog_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, accept_dialog_class);
	return obj;
}
static JSValue accept_dialog_class_get_ok_button(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&AcceptDialog::get_ok_button, AcceptDialog::__class_id, ctx, this_val, argv);
};
static JSValue accept_dialog_class_get_label(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&AcceptDialog::get_label, AcceptDialog::__class_id, ctx, this_val, argv);
};
static JSValue accept_dialog_class_set_hide_on_ok(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AcceptDialog::set_hide_on_ok, AcceptDialog::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue accept_dialog_class_get_hide_on_ok(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AcceptDialog::get_hide_on_ok, AcceptDialog::__class_id, ctx, this_val, argv);
};
static JSValue accept_dialog_class_set_close_on_escape(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AcceptDialog::set_close_on_escape, AcceptDialog::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue accept_dialog_class_get_close_on_escape(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AcceptDialog::get_close_on_escape, AcceptDialog::__class_id, ctx, this_val, argv);
};
static JSValue accept_dialog_class_add_button(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&AcceptDialog::add_button, AcceptDialog::__class_id, ctx, this_val, argv);
};
static JSValue accept_dialog_class_add_cancel_button(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&AcceptDialog::add_cancel_button, AcceptDialog::__class_id, ctx, this_val, argv);
};
static JSValue accept_dialog_class_remove_button(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AcceptDialog::remove_button, AcceptDialog::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue accept_dialog_class_register_text_enter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AcceptDialog::register_text_enter, AcceptDialog::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue accept_dialog_class_set_text(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AcceptDialog::set_text, AcceptDialog::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue accept_dialog_class_get_text(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AcceptDialog::get_text, AcceptDialog::__class_id, ctx, this_val, argv);
};
static JSValue accept_dialog_class_set_autowrap(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AcceptDialog::set_autowrap, AcceptDialog::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue accept_dialog_class_has_autowrap(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&AcceptDialog::has_autowrap, AcceptDialog::__class_id, ctx, this_val, argv);
};
static JSValue accept_dialog_class_set_ok_button_text(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&AcceptDialog::set_ok_button_text, AcceptDialog::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue accept_dialog_class_get_ok_button_text(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&AcceptDialog::get_ok_button_text, AcceptDialog::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry accept_dialog_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_ok_button", 0, &accept_dialog_class_get_ok_button),
	JS_CFUNC_DEF("get_label", 0, &accept_dialog_class_get_label),
	JS_CFUNC_DEF("set_hide_on_ok", 1, &accept_dialog_class_set_hide_on_ok),
	JS_CFUNC_DEF("get_hide_on_ok", 0, &accept_dialog_class_get_hide_on_ok),
	JS_CFUNC_DEF("set_close_on_escape", 1, &accept_dialog_class_set_close_on_escape),
	JS_CFUNC_DEF("get_close_on_escape", 0, &accept_dialog_class_get_close_on_escape),
	JS_CFUNC_DEF("add_button", 3, &accept_dialog_class_add_button),
	JS_CFUNC_DEF("add_cancel_button", 1, &accept_dialog_class_add_cancel_button),
	JS_CFUNC_DEF("remove_button", 1, &accept_dialog_class_remove_button),
	JS_CFUNC_DEF("register_text_enter", 1, &accept_dialog_class_register_text_enter),
	JS_CFUNC_DEF("set_text", 1, &accept_dialog_class_set_text),
	JS_CFUNC_DEF("get_text", 0, &accept_dialog_class_get_text),
	JS_CFUNC_DEF("set_autowrap", 1, &accept_dialog_class_set_autowrap),
	JS_CFUNC_DEF("has_autowrap", 0, &accept_dialog_class_has_autowrap),
	JS_CFUNC_DEF("set_ok_button_text", 1, &accept_dialog_class_set_ok_button_text),
	JS_CFUNC_DEF("get_ok_button_text", 0, &accept_dialog_class_get_ok_button_text),
};

static int js_accept_dialog_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&AcceptDialog::__class_id);
	classes["AcceptDialog"] = AcceptDialog::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), AcceptDialog::__class_id, &accept_dialog_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Window::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AcceptDialog::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, accept_dialog_class_proto_funcs, _countof(accept_dialog_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, accept_dialog_class_constructor, "AcceptDialog", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "AcceptDialog", ctor);

	return 0;
}

JSModuleDef *_js_init_accept_dialog_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_accept_dialog_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AcceptDialog");
	return m;
}

JSModuleDef *js_init_accept_dialog_module(JSContext *ctx) {
	return _js_init_accept_dialog_module(ctx, "godot/classes/accept_dialog");
}

void register_accept_dialog() {
	js_init_accept_dialog_module(ctx);
}