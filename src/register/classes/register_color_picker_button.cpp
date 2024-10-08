
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/popup_panel.hpp>
#include <godot_cpp/classes/color_picker.hpp>
#include <godot_cpp/classes/button.hpp>
#include <godot_cpp/classes/color_picker_button.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void color_picker_button_class_finalizer(JSRuntime *rt, JSValue val) {
	ColorPickerButton *color_picker_button = static_cast<ColorPickerButton *>(JS_GetOpaque(val, ColorPickerButton::__class_id));
	if (color_picker_button)
		ColorPickerButton::free(nullptr, color_picker_button);
}

static JSClassDef color_picker_button_class_def = {
	"ColorPickerButton",
	.finalizer = color_picker_button_class_finalizer
};

static JSValue color_picker_button_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	ColorPickerButton *color_picker_button_class;
	JSValue obj = JS_NewObjectClass(ctx, ColorPickerButton::__class_id);
	if (JS_IsException(obj))
		return obj;
	color_picker_button_class = memnew(ColorPickerButton);
	if (!color_picker_button_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, color_picker_button_class);
	return obj;
}
static JSValue color_picker_button_class_set_pick_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ColorPickerButton::set_pick_color, ColorPickerButton::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue color_picker_button_class_get_pick_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ColorPickerButton::get_pick_color, ColorPickerButton::__class_id, ctx, this_val, argv);
};
static JSValue color_picker_button_class_get_picker(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&ColorPickerButton::get_picker, ColorPickerButton::__class_id, ctx, this_val, argv);
};
static JSValue color_picker_button_class_get_popup(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&ColorPickerButton::get_popup, ColorPickerButton::__class_id, ctx, this_val, argv);
};
static JSValue color_picker_button_class_set_edit_alpha(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&ColorPickerButton::set_edit_alpha, ColorPickerButton::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue color_picker_button_class_is_editing_alpha(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ColorPickerButton::is_editing_alpha, ColorPickerButton::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry color_picker_button_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_pick_color", 1, &color_picker_button_class_set_pick_color),
	JS_CFUNC_DEF("get_pick_color", 0, &color_picker_button_class_get_pick_color),
	JS_CFUNC_DEF("get_picker", 0, &color_picker_button_class_get_picker),
	JS_CFUNC_DEF("get_popup", 0, &color_picker_button_class_get_popup),
	JS_CFUNC_DEF("set_edit_alpha", 1, &color_picker_button_class_set_edit_alpha),
	JS_CFUNC_DEF("is_editing_alpha", 0, &color_picker_button_class_is_editing_alpha),
};

static int js_color_picker_button_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&ColorPickerButton::__class_id);
	classes["ColorPickerButton"] = ColorPickerButton::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), ColorPickerButton::__class_id, &color_picker_button_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Button::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ColorPickerButton::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, color_picker_button_class_proto_funcs, _countof(color_picker_button_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, color_picker_button_class_constructor, "ColorPickerButton", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "ColorPickerButton", ctor);

	return 0;
}

JSModuleDef *_js_init_color_picker_button_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_color_picker_button_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "ColorPickerButton");
	return m;
}

JSModuleDef *js_init_color_picker_button_module(JSContext *ctx) {
	return _js_init_color_picker_button_module(ctx, "godot/classes/color_picker_button");
}

void register_color_picker_button() {
	js_init_color_picker_button_module(ctx);
}