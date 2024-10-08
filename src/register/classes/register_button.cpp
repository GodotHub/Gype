
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/button.hpp>
#include <godot_cpp/classes/base_button.hpp>
#include <godot_cpp/classes/texture2d.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void button_class_finalizer(JSRuntime *rt, JSValue val) {
	Button *button = static_cast<Button *>(JS_GetOpaque(val, Button::__class_id));
	if (button)
		Button::free(nullptr, button);
}

static JSClassDef button_class_def = {
	"Button",
	.finalizer = button_class_finalizer
};

static JSValue button_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	Button *button_class;
	JSValue obj = JS_NewObjectClass(ctx, Button::__class_id);
	if (JS_IsException(obj))
		return obj;
	button_class = memnew(Button);
	if (!button_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, button_class);
	return obj;
}
static JSValue button_class_set_text(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Button::set_text, Button::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue button_class_get_text(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Button::get_text, Button::__class_id, ctx, this_val, argv);
};
static JSValue button_class_set_text_overrun_behavior(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Button::set_text_overrun_behavior, Button::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue button_class_get_text_overrun_behavior(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Button::get_text_overrun_behavior, Button::__class_id, ctx, this_val, argv);
};
static JSValue button_class_set_autowrap_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Button::set_autowrap_mode, Button::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue button_class_get_autowrap_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Button::get_autowrap_mode, Button::__class_id, ctx, this_val, argv);
};
static JSValue button_class_set_text_direction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Button::set_text_direction, Button::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue button_class_get_text_direction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Button::get_text_direction, Button::__class_id, ctx, this_val, argv);
};
static JSValue button_class_set_language(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Button::set_language, Button::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue button_class_get_language(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Button::get_language, Button::__class_id, ctx, this_val, argv);
};
static JSValue button_class_set_button_icon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Button::set_button_icon, Button::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue button_class_get_button_icon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Button::get_button_icon, Button::__class_id, ctx, this_val, argv);
};
static JSValue button_class_set_flat(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Button::set_flat, Button::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue button_class_is_flat(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Button::is_flat, Button::__class_id, ctx, this_val, argv);
};
static JSValue button_class_set_clip_text(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Button::set_clip_text, Button::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue button_class_get_clip_text(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Button::get_clip_text, Button::__class_id, ctx, this_val, argv);
};
static JSValue button_class_set_text_alignment(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Button::set_text_alignment, Button::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue button_class_get_text_alignment(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Button::get_text_alignment, Button::__class_id, ctx, this_val, argv);
};
static JSValue button_class_set_icon_alignment(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Button::set_icon_alignment, Button::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue button_class_get_icon_alignment(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Button::get_icon_alignment, Button::__class_id, ctx, this_val, argv);
};
static JSValue button_class_set_vertical_icon_alignment(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Button::set_vertical_icon_alignment, Button::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue button_class_get_vertical_icon_alignment(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Button::get_vertical_icon_alignment, Button::__class_id, ctx, this_val, argv);
};
static JSValue button_class_set_expand_icon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&Button::set_expand_icon, Button::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue button_class_is_expand_icon(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Button::is_expand_icon, Button::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry button_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_text", 1, &button_class_set_text),
	JS_CFUNC_DEF("get_text", 0, &button_class_get_text),
	JS_CFUNC_DEF("set_text_overrun_behavior", 1, &button_class_set_text_overrun_behavior),
	JS_CFUNC_DEF("get_text_overrun_behavior", 0, &button_class_get_text_overrun_behavior),
	JS_CFUNC_DEF("set_autowrap_mode", 1, &button_class_set_autowrap_mode),
	JS_CFUNC_DEF("get_autowrap_mode", 0, &button_class_get_autowrap_mode),
	JS_CFUNC_DEF("set_text_direction", 1, &button_class_set_text_direction),
	JS_CFUNC_DEF("get_text_direction", 0, &button_class_get_text_direction),
	JS_CFUNC_DEF("set_language", 1, &button_class_set_language),
	JS_CFUNC_DEF("get_language", 0, &button_class_get_language),
	JS_CFUNC_DEF("set_button_icon", 1, &button_class_set_button_icon),
	JS_CFUNC_DEF("get_button_icon", 0, &button_class_get_button_icon),
	JS_CFUNC_DEF("set_flat", 1, &button_class_set_flat),
	JS_CFUNC_DEF("is_flat", 0, &button_class_is_flat),
	JS_CFUNC_DEF("set_clip_text", 1, &button_class_set_clip_text),
	JS_CFUNC_DEF("get_clip_text", 0, &button_class_get_clip_text),
	JS_CFUNC_DEF("set_text_alignment", 1, &button_class_set_text_alignment),
	JS_CFUNC_DEF("get_text_alignment", 0, &button_class_get_text_alignment),
	JS_CFUNC_DEF("set_icon_alignment", 1, &button_class_set_icon_alignment),
	JS_CFUNC_DEF("get_icon_alignment", 0, &button_class_get_icon_alignment),
	JS_CFUNC_DEF("set_vertical_icon_alignment", 1, &button_class_set_vertical_icon_alignment),
	JS_CFUNC_DEF("get_vertical_icon_alignment", 0, &button_class_get_vertical_icon_alignment),
	JS_CFUNC_DEF("set_expand_icon", 1, &button_class_set_expand_icon),
	JS_CFUNC_DEF("is_expand_icon", 0, &button_class_is_expand_icon),
};

static int js_button_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&Button::__class_id);
	classes["Button"] = Button::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), Button::__class_id, &button_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, BaseButton::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Button::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, button_class_proto_funcs, _countof(button_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, button_class_constructor, "Button", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "Button", ctor);

	return 0;
}

JSModuleDef *_js_init_button_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_button_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Button");
	return m;
}

JSModuleDef *js_init_button_module(JSContext *ctx) {
	return _js_init_button_module(ctx, "godot/classes/button");
}

void register_button() {
	js_init_button_module(ctx);
}