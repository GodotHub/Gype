
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/accept_dialog.hpp>
#include <godot_cpp/classes/button.hpp>
#include <godot_cpp/classes/confirmation_dialog.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void confirmation_dialog_class_finalizer(JSRuntime *rt, JSValue val) {
	ConfirmationDialog *confirmation_dialog = static_cast<ConfirmationDialog *>(JS_GetOpaque(val, ConfirmationDialog::__class_id));
	if (confirmation_dialog)
		ConfirmationDialog::free(nullptr, confirmation_dialog);
}

static JSClassDef confirmation_dialog_class_def = {
	"ConfirmationDialog",
	.finalizer = confirmation_dialog_class_finalizer
};

static JSValue confirmation_dialog_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	ConfirmationDialog *confirmation_dialog_class;
	JSValue obj = JS_NewObjectClass(ctx, ConfirmationDialog::__class_id);
	if (JS_IsException(obj))
		return obj;
	confirmation_dialog_class = memnew(ConfirmationDialog);
	if (!confirmation_dialog_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, confirmation_dialog_class);
	return obj;
}
static JSValue confirmation_dialog_class_get_cancel_button(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&ConfirmationDialog::get_cancel_button, ConfirmationDialog::__class_id, ctx, this_val, argv);
};
static JSValue confirmation_dialog_class_set_cancel_button_text(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ConfirmationDialog::set_cancel_button_text, ConfirmationDialog::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue confirmation_dialog_class_get_cancel_button_text(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ConfirmationDialog::get_cancel_button_text, ConfirmationDialog::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry confirmation_dialog_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_cancel_button", 0, &confirmation_dialog_class_get_cancel_button),
	JS_CFUNC_DEF("set_cancel_button_text", 1, &confirmation_dialog_class_set_cancel_button_text),
	JS_CFUNC_DEF("get_cancel_button_text", 0, &confirmation_dialog_class_get_cancel_button_text),
};

static int js_confirmation_dialog_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&ConfirmationDialog::__class_id);
	classes["ConfirmationDialog"] = ConfirmationDialog::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), ConfirmationDialog::__class_id, &confirmation_dialog_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, AcceptDialog::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ConfirmationDialog::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, confirmation_dialog_class_proto_funcs, _countof(confirmation_dialog_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, confirmation_dialog_class_constructor, "ConfirmationDialog", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "ConfirmationDialog", ctor);

	return 0;
}

JSModuleDef *_js_init_confirmation_dialog_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_confirmation_dialog_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "ConfirmationDialog");
	return m;
}

JSModuleDef *js_init_confirmation_dialog_module(JSContext *ctx) {
	return _js_init_confirmation_dialog_module(ctx, "godot/classes/confirmation_dialog");
}

void register_confirmation_dialog() {
	js_init_confirmation_dialog_module(ctx);
}