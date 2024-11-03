
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/button.hpp>
#include <godot_cpp/classes/confirmation_dialog.hpp>
#include <godot_cpp/classes/accept_dialog.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void confirmation_dialog_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef confirmation_dialog_class_def = {
	"ConfirmationDialog",
	.finalizer = confirmation_dialog_class_finalizer
};

static JSValue confirmation_dialog_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, ConfirmationDialog::__class_id);
	if (JS_IsException(obj))
		return obj;

	ConfirmationDialog *confirmation_dialog_class;
	if (argc == 1) 
		confirmation_dialog_class = static_cast<ConfirmationDialog *>(Variant(*argv).operator Object *());
	else 
		confirmation_dialog_class = memnew(ConfirmationDialog);
	if (!confirmation_dialog_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, confirmation_dialog_class);
	return obj;
}
static JSValue confirmation_dialog_class_get_cancel_button(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&ConfirmationDialog::get_cancel_button, ctx, this_val, argc, argv);
};
static JSValue confirmation_dialog_class_set_cancel_button_text(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&ConfirmationDialog::set_cancel_button_text, ctx, this_val, argc, argv);
};
static JSValue confirmation_dialog_class_get_cancel_button_text(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ConfirmationDialog::get_cancel_button_text, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry confirmation_dialog_class_proto_funcs[] = {
	JS_CFUNC_DEF("get_cancel_button", 0, &confirmation_dialog_class_get_cancel_button),
	JS_CFUNC_DEF("set_cancel_button_text", 1, &confirmation_dialog_class_set_cancel_button_text),
	JS_CFUNC_DEF("get_cancel_button_text", 0, &confirmation_dialog_class_get_cancel_button_text),
};

static void define_confirmation_dialog_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "cancel_button_text"),
        JS_NewCFunction(ctx, confirmation_dialog_class_get_cancel_button_text, "get_cancel_button_text", 0),
        JS_NewCFunction(ctx, confirmation_dialog_class_set_cancel_button_text, "set_cancel_button_text", 1),
        JS_PROP_GETSET
    );
	
}

static void define_confirmation_dialog_enum(JSContext *ctx, JSValue proto) {
}

static int js_confirmation_dialog_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["ConfirmationDialog"] = ConfirmationDialog::__class_id;
	class_id_list.insert(ConfirmationDialog::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), ConfirmationDialog::__class_id, &confirmation_dialog_class_def);

	JSValue proto = JS_NewObjectClass(ctx, ConfirmationDialog::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, AcceptDialog::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ConfirmationDialog::__class_id, proto);

	define_confirmation_dialog_property(ctx, proto);
	define_confirmation_dialog_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, confirmation_dialog_class_proto_funcs, _countof(confirmation_dialog_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, confirmation_dialog_class_constructor, "ConfirmationDialog", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "ConfirmationDialog", ctor);
	constructors[ConfirmationDialog::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_confirmation_dialog_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/accept_dialog';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_confirmation_dialog_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "ConfirmationDialog");
	return m;
}

JSModuleDef *js_init_confirmation_dialog_module(JSContext *ctx) {
	return _js_init_confirmation_dialog_module(ctx, "@godot/classes/confirmation_dialog");
}

void register_confirmation_dialog() {
	ConfirmationDialog::__init_js_class_id();
	js_init_confirmation_dialog_module(ctx);
}