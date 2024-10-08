
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/button_group.hpp>
#include <godot_cpp/classes/shortcut.hpp>
#include <godot_cpp/classes/base_button.hpp>
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void base_button_class_finalizer(JSRuntime *rt, JSValue val) {
	BaseButton *base_button = static_cast<BaseButton *>(JS_GetOpaque(val, BaseButton::__class_id));
	if (base_button)
		BaseButton::free(nullptr, base_button);
}

static JSClassDef base_button_class_def = {
	"BaseButton",
	.finalizer = base_button_class_finalizer
};

static JSValue base_button_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	BaseButton *base_button_class;
	JSValue obj = JS_NewObjectClass(ctx, BaseButton::__class_id);
	if (JS_IsException(obj))
		return obj;
	base_button_class = memnew(BaseButton);
	if (!base_button_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, base_button_class);
	return obj;
}
static JSValue base_button_class_set_pressed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&BaseButton::set_pressed, BaseButton::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue base_button_class_is_pressed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&BaseButton::is_pressed, BaseButton::__class_id, ctx, this_val, argv);
};
static JSValue base_button_class_set_pressed_no_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&BaseButton::set_pressed_no_signal, BaseButton::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue base_button_class_is_hovered(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&BaseButton::is_hovered, BaseButton::__class_id, ctx, this_val, argv);
};
static JSValue base_button_class_set_toggle_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&BaseButton::set_toggle_mode, BaseButton::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue base_button_class_is_toggle_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&BaseButton::is_toggle_mode, BaseButton::__class_id, ctx, this_val, argv);
};
static JSValue base_button_class_set_shortcut_in_tooltip(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&BaseButton::set_shortcut_in_tooltip, BaseButton::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue base_button_class_is_shortcut_in_tooltip_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&BaseButton::is_shortcut_in_tooltip_enabled, BaseButton::__class_id, ctx, this_val, argv);
};
static JSValue base_button_class_set_disabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&BaseButton::set_disabled, BaseButton::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue base_button_class_is_disabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&BaseButton::is_disabled, BaseButton::__class_id, ctx, this_val, argv);
};
static JSValue base_button_class_set_action_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&BaseButton::set_action_mode, BaseButton::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue base_button_class_get_action_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&BaseButton::get_action_mode, BaseButton::__class_id, ctx, this_val, argv);
};
static JSValue base_button_class_set_button_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&BaseButton::set_button_mask, BaseButton::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue base_button_class_get_button_mask(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&BaseButton::get_button_mask, BaseButton::__class_id, ctx, this_val, argv);
};
static JSValue base_button_class_get_draw_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&BaseButton::get_draw_mode, BaseButton::__class_id, ctx, this_val, argv);
};
static JSValue base_button_class_set_keep_pressed_outside(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&BaseButton::set_keep_pressed_outside, BaseButton::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue base_button_class_is_keep_pressed_outside(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&BaseButton::is_keep_pressed_outside, BaseButton::__class_id, ctx, this_val, argv);
};
static JSValue base_button_class_set_shortcut_feedback(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&BaseButton::set_shortcut_feedback, BaseButton::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue base_button_class_is_shortcut_feedback(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&BaseButton::is_shortcut_feedback, BaseButton::__class_id, ctx, this_val, argv);
};
static JSValue base_button_class_set_shortcut(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&BaseButton::set_shortcut, BaseButton::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue base_button_class_get_shortcut(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&BaseButton::get_shortcut, BaseButton::__class_id, ctx, this_val, argv);
};
static JSValue base_button_class_set_button_group(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&BaseButton::set_button_group, BaseButton::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue base_button_class_get_button_group(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&BaseButton::get_button_group, BaseButton::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry base_button_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_pressed", 1, &base_button_class_set_pressed),
	JS_CFUNC_DEF("is_pressed", 0, &base_button_class_is_pressed),
	JS_CFUNC_DEF("set_pressed_no_signal", 1, &base_button_class_set_pressed_no_signal),
	JS_CFUNC_DEF("is_hovered", 0, &base_button_class_is_hovered),
	JS_CFUNC_DEF("set_toggle_mode", 1, &base_button_class_set_toggle_mode),
	JS_CFUNC_DEF("is_toggle_mode", 0, &base_button_class_is_toggle_mode),
	JS_CFUNC_DEF("set_shortcut_in_tooltip", 1, &base_button_class_set_shortcut_in_tooltip),
	JS_CFUNC_DEF("is_shortcut_in_tooltip_enabled", 0, &base_button_class_is_shortcut_in_tooltip_enabled),
	JS_CFUNC_DEF("set_disabled", 1, &base_button_class_set_disabled),
	JS_CFUNC_DEF("is_disabled", 0, &base_button_class_is_disabled),
	JS_CFUNC_DEF("set_action_mode", 1, &base_button_class_set_action_mode),
	JS_CFUNC_DEF("get_action_mode", 0, &base_button_class_get_action_mode),
	JS_CFUNC_DEF("set_button_mask", 1, &base_button_class_set_button_mask),
	JS_CFUNC_DEF("get_button_mask", 0, &base_button_class_get_button_mask),
	JS_CFUNC_DEF("get_draw_mode", 0, &base_button_class_get_draw_mode),
	JS_CFUNC_DEF("set_keep_pressed_outside", 1, &base_button_class_set_keep_pressed_outside),
	JS_CFUNC_DEF("is_keep_pressed_outside", 0, &base_button_class_is_keep_pressed_outside),
	JS_CFUNC_DEF("set_shortcut_feedback", 1, &base_button_class_set_shortcut_feedback),
	JS_CFUNC_DEF("is_shortcut_feedback", 0, &base_button_class_is_shortcut_feedback),
	JS_CFUNC_DEF("set_shortcut", 1, &base_button_class_set_shortcut),
	JS_CFUNC_DEF("get_shortcut", 0, &base_button_class_get_shortcut),
	JS_CFUNC_DEF("set_button_group", 1, &base_button_class_set_button_group),
	JS_CFUNC_DEF("get_button_group", 0, &base_button_class_get_button_group),
};

static int js_base_button_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&BaseButton::__class_id);
	classes["BaseButton"] = BaseButton::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), BaseButton::__class_id, &base_button_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Control::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, BaseButton::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, base_button_class_proto_funcs, _countof(base_button_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, base_button_class_constructor, "BaseButton", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "BaseButton", ctor);

	return 0;
}

JSModuleDef *_js_init_base_button_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_base_button_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "BaseButton");
	return m;
}

JSModuleDef *js_init_base_button_module(JSContext *ctx) {
	return _js_init_base_button_module(ctx, "godot/classes/base_button");
}

void register_base_button() {
	js_init_base_button_module(ctx);
}