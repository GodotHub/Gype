
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/window.hpp>
#include <godot_cpp/classes/button.hpp>
#include <godot_cpp/classes/label.hpp>
#include <godot_cpp/classes/accept_dialog.hpp>
#include <godot_cpp/classes/line_edit.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void accept_dialog_class_finalizer(JSRuntime *rt, JSValue val) {
	AcceptDialog *accept_dialog = static_cast<AcceptDialog *>(JS_GetOpaque(val, AcceptDialog::__class_id));
	if (accept_dialog)
		memdelete(accept_dialog);
}

static JSClassDef accept_dialog_class_def = {
	"AcceptDialog",
	.finalizer = accept_dialog_class_finalizer
};

static JSValue accept_dialog_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, AcceptDialog::__class_id);
	if (JS_IsException(obj))
		return obj;

	AcceptDialog *accept_dialog_class;
	if (argc == 1) 
		accept_dialog_class = static_cast<AcceptDialog *>(Variant(*argv).operator Object *());
	else 
		accept_dialog_class = memnew(AcceptDialog);
	if (!accept_dialog_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, accept_dialog_class);
	return obj;
}
static JSValue accept_dialog_class_get_ok_button(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&AcceptDialog::get_ok_button, ctx, this_val, argc, argv);
};
static JSValue accept_dialog_class_get_label(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&AcceptDialog::get_label, ctx, this_val, argc, argv);
};
static JSValue accept_dialog_class_set_hide_on_ok(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AcceptDialog::set_hide_on_ok, ctx, this_val, argc, argv);
};
static JSValue accept_dialog_class_get_hide_on_ok(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AcceptDialog::get_hide_on_ok, ctx, this_val, argc, argv);
};
static JSValue accept_dialog_class_set_close_on_escape(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AcceptDialog::set_close_on_escape, ctx, this_val, argc, argv);
};
static JSValue accept_dialog_class_get_close_on_escape(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AcceptDialog::get_close_on_escape, ctx, this_val, argc, argv);
};
static JSValue accept_dialog_class_add_button(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&AcceptDialog::add_button, ctx, this_val, argc, argv);
};
static JSValue accept_dialog_class_add_cancel_button(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&AcceptDialog::add_cancel_button, ctx, this_val, argc, argv);
};
static JSValue accept_dialog_class_remove_button(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AcceptDialog::remove_button, ctx, this_val, argc, argv);
};
static JSValue accept_dialog_class_register_text_enter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AcceptDialog::register_text_enter, ctx, this_val, argc, argv);
};
static JSValue accept_dialog_class_set_text(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AcceptDialog::set_text, ctx, this_val, argc, argv);
};
static JSValue accept_dialog_class_get_text(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AcceptDialog::get_text, ctx, this_val, argc, argv);
};
static JSValue accept_dialog_class_set_autowrap(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AcceptDialog::set_autowrap, ctx, this_val, argc, argv);
};
static JSValue accept_dialog_class_has_autowrap(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&AcceptDialog::has_autowrap, ctx, this_val, argc, argv);
};
static JSValue accept_dialog_class_set_ok_button_text(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&AcceptDialog::set_ok_button_text, ctx, this_val, argc, argv);
};
static JSValue accept_dialog_class_get_ok_button_text(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&AcceptDialog::get_ok_button_text, ctx, this_val, argc, argv);
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
static JSValue accept_dialog_class_get_confirmed_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	AcceptDialog *opaque = reinterpret_cast<AcceptDialog *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "confirmed_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "confirmed").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "confirmed_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}
static JSValue accept_dialog_class_get_canceled_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	AcceptDialog *opaque = reinterpret_cast<AcceptDialog *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "canceled_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "canceled").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "canceled_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}
static JSValue accept_dialog_class_get_custom_action_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	AcceptDialog *opaque = reinterpret_cast<AcceptDialog *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "custom_action_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "custom_action").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "custom_action_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}

static void define_accept_dialog_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "ok_button_text"),
        JS_NewCFunction(ctx, accept_dialog_class_get_ok_button_text, "get_ok_button_text", 0),
        JS_NewCFunction(ctx, accept_dialog_class_set_ok_button_text, "set_ok_button_text", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "dialog_text"),
        JS_NewCFunction(ctx, accept_dialog_class_get_text, "get_text", 0),
        JS_NewCFunction(ctx, accept_dialog_class_set_text, "set_text", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "dialog_hide_on_ok"),
        JS_NewCFunction(ctx, accept_dialog_class_get_hide_on_ok, "get_hide_on_ok", 0),
        JS_NewCFunction(ctx, accept_dialog_class_set_hide_on_ok, "set_hide_on_ok", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "dialog_close_on_escape"),
        JS_NewCFunction(ctx, accept_dialog_class_get_close_on_escape, "get_close_on_escape", 0),
        JS_NewCFunction(ctx, accept_dialog_class_set_close_on_escape, "set_close_on_escape", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "dialog_autowrap"),
        JS_NewCFunction(ctx, accept_dialog_class_has_autowrap, "has_autowrap", 0),
        JS_NewCFunction(ctx, accept_dialog_class_set_autowrap, "set_autowrap", 1),
        JS_PROP_GETSET
    );
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "confirmed"),
		JS_NewCFunction(ctx, accept_dialog_class_get_confirmed_signal, "get_confirmed_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "canceled"),
		JS_NewCFunction(ctx, accept_dialog_class_get_canceled_signal, "get_canceled_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "custom_action"),
		JS_NewCFunction(ctx, accept_dialog_class_get_custom_action_signal, "get_custom_action_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
}

static void define_accept_dialog_enum(JSContext *ctx, JSValue proto) {
}

static int js_accept_dialog_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["AcceptDialog"] = AcceptDialog::__class_id;
	class_id_list.insert(AcceptDialog::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), AcceptDialog::__class_id, &accept_dialog_class_def);

	JSValue proto = JS_NewObjectClass(ctx, AcceptDialog::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Window::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, AcceptDialog::__class_id, proto);

	define_accept_dialog_property(ctx, proto);
	define_accept_dialog_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, accept_dialog_class_proto_funcs, _countof(accept_dialog_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, accept_dialog_class_constructor, "AcceptDialog", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);
	JS_SetModuleExport(ctx, m, "AcceptDialog", ctor);
	constructors[AcceptDialog::__class_id] = ctor;

	return 0;
}

JSModuleDef *_js_init_accept_dialog_module(JSContext *ctx, const char *module_name) {
	// 需要提前完成import依赖
	const char *code = "import * as _ from '@godot/classes/window';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_accept_dialog_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "AcceptDialog");
	return m;
}

JSModuleDef *js_init_accept_dialog_module(JSContext *ctx) {
	return _js_init_accept_dialog_module(ctx, "@godot/classes/accept_dialog");
}

void register_accept_dialog() {
	AcceptDialog::__init_js_class_id();
	js_init_accept_dialog_module(ctx);
}