
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/color_picker_button.hpp>
#include <godot_cpp/classes/popup_panel.hpp>
#include <godot_cpp/classes/color_picker.hpp>
#include <godot_cpp/classes/button.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void color_picker_button_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef color_picker_button_class_def = {
	"ColorPickerButton",
	.finalizer = color_picker_button_class_finalizer
};

static JSValue color_picker_button_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, ColorPickerButton::__class_id);
	if (JS_IsException(obj))
		return obj;

	ColorPickerButton *color_picker_button_class;
	if (argc == 1) 
		color_picker_button_class = static_cast<ColorPickerButton *>(Variant(*argv).operator Object *());
	else 
		color_picker_button_class = memnew(ColorPickerButton);
	if (!color_picker_button_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, color_picker_button_class);
	return obj;
}
static JSValue color_picker_button_class_set_pick_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&ColorPickerButton::set_pick_color, ctx, this_val, argc, argv);
};
static JSValue color_picker_button_class_get_pick_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ColorPickerButton::get_pick_color, ctx, this_val, argc, argv);
};
static JSValue color_picker_button_class_get_picker(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&ColorPickerButton::get_picker, ctx, this_val, argc, argv);
};
static JSValue color_picker_button_class_get_popup(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_method_ret(&ColorPickerButton::get_popup, ctx, this_val, argc, argv);
};
static JSValue color_picker_button_class_set_edit_alpha(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&ColorPickerButton::set_edit_alpha, ctx, this_val, argc, argv);
};
static JSValue color_picker_button_class_is_editing_alpha(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ColorPickerButton::is_editing_alpha, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry color_picker_button_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_pick_color", 1, &color_picker_button_class_set_pick_color),
	JS_CFUNC_DEF("get_pick_color", 0, &color_picker_button_class_get_pick_color),
	JS_CFUNC_DEF("get_picker", 0, &color_picker_button_class_get_picker),
	JS_CFUNC_DEF("get_popup", 0, &color_picker_button_class_get_popup),
	JS_CFUNC_DEF("set_edit_alpha", 1, &color_picker_button_class_set_edit_alpha),
	JS_CFUNC_DEF("is_editing_alpha", 0, &color_picker_button_class_is_editing_alpha),
};
static JSValue color_picker_button_class_get_color_changed_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	ColorPickerButton *opaque = reinterpret_cast<ColorPickerButton *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "color_changed_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "color_changed").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "color_changed_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}
static JSValue color_picker_button_class_get_popup_closed_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	ColorPickerButton *opaque = reinterpret_cast<ColorPickerButton *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "popup_closed_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "popup_closed").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "popup_closed_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}
static JSValue color_picker_button_class_get_picker_created_signal(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	ColorPickerButton *opaque = reinterpret_cast<ColorPickerButton *>(JS_GetOpaque(this_val, JS_GetClassID(this_val)));
	JSValue js_signal = JS_GetPropertyStr(ctx, this_val, "picker_created_signal");
	if (JS_IsUndefined(js_signal)) {
		js_signal = Signal(opaque, "picker_created").operator JSValue();
		JS_DefinePropertyValueStr(ctx, this_val, "picker_created_signal", js_signal, JS_PROP_HAS_VALUE);
	}
	return js_signal;
}

static void define_color_picker_button_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "color"),
        JS_NewCFunction(ctx, color_picker_button_class_get_pick_color, "get_pick_color", 0),
        JS_NewCFunction(ctx, color_picker_button_class_set_pick_color, "set_pick_color", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "edit_alpha"),
        JS_NewCFunction(ctx, color_picker_button_class_is_editing_alpha, "is_editing_alpha", 0),
        JS_NewCFunction(ctx, color_picker_button_class_set_edit_alpha, "set_edit_alpha", 1),
        JS_PROP_GETSET
    );
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "color_changed"),
		JS_NewCFunction(ctx, color_picker_button_class_get_color_changed_signal, "get_color_changed_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "popup_closed"),
		JS_NewCFunction(ctx, color_picker_button_class_get_popup_closed_signal, "get_popup_closed_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
	JS_DefinePropertyGetSet(
		ctx,
		proto,
		JS_NewAtom(ctx, "picker_created"),
		JS_NewCFunction(ctx, color_picker_button_class_get_picker_created_signal, "get_picker_created_signal", 0),
		JS_UNDEFINED,
		JS_PROP_GETSET);
	
}

static void define_color_picker_button_enum(JSContext *ctx, JSValue proto) {
}

static int js_color_picker_button_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["ColorPickerButton"] = ColorPickerButton::__class_id;
	class_id_list.insert(ColorPickerButton::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), ColorPickerButton::__class_id, &color_picker_button_class_def);

	JSValue proto = JS_NewObjectClass(ctx, ColorPickerButton::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Button::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ColorPickerButton::__class_id, proto);

	define_color_picker_button_property(ctx, proto);
	define_color_picker_button_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, color_picker_button_class_proto_funcs, _countof(color_picker_button_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, color_picker_button_class_constructor, "ColorPickerButton", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "ColorPickerButton", ctor);

	return 0;
}

JSModuleDef *_js_init_color_picker_button_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/button';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_color_picker_button_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "ColorPickerButton");
	return m;
}

JSModuleDef *js_init_color_picker_button_module(JSContext *ctx) {
	return _js_init_color_picker_button_module(ctx, "@godot/classes/color_picker_button");
}

void register_color_picker_button() {
	ColorPickerButton::__init_js_class_id();
	js_init_color_picker_button_module(ctx);
}