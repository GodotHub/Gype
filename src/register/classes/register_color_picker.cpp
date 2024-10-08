
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/color_picker.hpp>
#include <godot_cpp/classes/v_box_container.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void color_picker_class_finalizer(JSRuntime *rt, JSValue val) {
	ColorPicker *color_picker = static_cast<ColorPicker *>(JS_GetOpaque(val, ColorPicker::__class_id));
	if (color_picker)
		ColorPicker::free(nullptr, color_picker);
}

static JSClassDef color_picker_class_def = {
	"ColorPicker",
	.finalizer = color_picker_class_finalizer
};

static JSValue color_picker_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	ColorPicker *color_picker_class;
	JSValue obj = JS_NewObjectClass(ctx, ColorPicker::__class_id);
	if (JS_IsException(obj))
		return obj;
	color_picker_class = memnew(ColorPicker);
	if (!color_picker_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, color_picker_class);
	return obj;
}
static JSValue color_picker_class_set_pick_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ColorPicker::set_pick_color, ColorPicker::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue color_picker_class_get_pick_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ColorPicker::get_pick_color, ColorPicker::__class_id, ctx, this_val, argv);
};
static JSValue color_picker_class_set_deferred_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ColorPicker::set_deferred_mode, ColorPicker::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue color_picker_class_is_deferred_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ColorPicker::is_deferred_mode, ColorPicker::__class_id, ctx, this_val, argv);
};
static JSValue color_picker_class_set_color_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ColorPicker::set_color_mode, ColorPicker::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue color_picker_class_get_color_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ColorPicker::get_color_mode, ColorPicker::__class_id, ctx, this_val, argv);
};
static JSValue color_picker_class_set_edit_alpha(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ColorPicker::set_edit_alpha, ColorPicker::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue color_picker_class_is_editing_alpha(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ColorPicker::is_editing_alpha, ColorPicker::__class_id, ctx, this_val, argv);
};
static JSValue color_picker_class_set_can_add_swatches(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ColorPicker::set_can_add_swatches, ColorPicker::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue color_picker_class_are_swatches_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ColorPicker::are_swatches_enabled, ColorPicker::__class_id, ctx, this_val, argv);
};
static JSValue color_picker_class_set_presets_visible(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ColorPicker::set_presets_visible, ColorPicker::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue color_picker_class_are_presets_visible(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ColorPicker::are_presets_visible, ColorPicker::__class_id, ctx, this_val, argv);
};
static JSValue color_picker_class_set_modes_visible(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ColorPicker::set_modes_visible, ColorPicker::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue color_picker_class_are_modes_visible(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ColorPicker::are_modes_visible, ColorPicker::__class_id, ctx, this_val, argv);
};
static JSValue color_picker_class_set_sampler_visible(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ColorPicker::set_sampler_visible, ColorPicker::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue color_picker_class_is_sampler_visible(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ColorPicker::is_sampler_visible, ColorPicker::__class_id, ctx, this_val, argv);
};
static JSValue color_picker_class_set_sliders_visible(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ColorPicker::set_sliders_visible, ColorPicker::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue color_picker_class_are_sliders_visible(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ColorPicker::are_sliders_visible, ColorPicker::__class_id, ctx, this_val, argv);
};
static JSValue color_picker_class_set_hex_visible(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ColorPicker::set_hex_visible, ColorPicker::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue color_picker_class_is_hex_visible(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ColorPicker::is_hex_visible, ColorPicker::__class_id, ctx, this_val, argv);
};
static JSValue color_picker_class_add_preset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ColorPicker::add_preset, ColorPicker::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue color_picker_class_erase_preset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ColorPicker::erase_preset, ColorPicker::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue color_picker_class_get_presets(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ColorPicker::get_presets, ColorPicker::__class_id, ctx, this_val, argv);
};
static JSValue color_picker_class_add_recent_preset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ColorPicker::add_recent_preset, ColorPicker::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue color_picker_class_erase_recent_preset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ColorPicker::erase_recent_preset, ColorPicker::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue color_picker_class_get_recent_presets(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ColorPicker::get_recent_presets, ColorPicker::__class_id, ctx, this_val, argv);
};
static JSValue color_picker_class_set_picker_shape(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&ColorPicker::set_picker_shape, ColorPicker::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue color_picker_class_get_picker_shape(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&ColorPicker::get_picker_shape, ColorPicker::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry color_picker_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_pick_color", 1, &color_picker_class_set_pick_color),
	JS_CFUNC_DEF("get_pick_color", 0, &color_picker_class_get_pick_color),
	JS_CFUNC_DEF("set_deferred_mode", 1, &color_picker_class_set_deferred_mode),
	JS_CFUNC_DEF("is_deferred_mode", 0, &color_picker_class_is_deferred_mode),
	JS_CFUNC_DEF("set_color_mode", 1, &color_picker_class_set_color_mode),
	JS_CFUNC_DEF("get_color_mode", 0, &color_picker_class_get_color_mode),
	JS_CFUNC_DEF("set_edit_alpha", 1, &color_picker_class_set_edit_alpha),
	JS_CFUNC_DEF("is_editing_alpha", 0, &color_picker_class_is_editing_alpha),
	JS_CFUNC_DEF("set_can_add_swatches", 1, &color_picker_class_set_can_add_swatches),
	JS_CFUNC_DEF("are_swatches_enabled", 0, &color_picker_class_are_swatches_enabled),
	JS_CFUNC_DEF("set_presets_visible", 1, &color_picker_class_set_presets_visible),
	JS_CFUNC_DEF("are_presets_visible", 0, &color_picker_class_are_presets_visible),
	JS_CFUNC_DEF("set_modes_visible", 1, &color_picker_class_set_modes_visible),
	JS_CFUNC_DEF("are_modes_visible", 0, &color_picker_class_are_modes_visible),
	JS_CFUNC_DEF("set_sampler_visible", 1, &color_picker_class_set_sampler_visible),
	JS_CFUNC_DEF("is_sampler_visible", 0, &color_picker_class_is_sampler_visible),
	JS_CFUNC_DEF("set_sliders_visible", 1, &color_picker_class_set_sliders_visible),
	JS_CFUNC_DEF("are_sliders_visible", 0, &color_picker_class_are_sliders_visible),
	JS_CFUNC_DEF("set_hex_visible", 1, &color_picker_class_set_hex_visible),
	JS_CFUNC_DEF("is_hex_visible", 0, &color_picker_class_is_hex_visible),
	JS_CFUNC_DEF("add_preset", 1, &color_picker_class_add_preset),
	JS_CFUNC_DEF("erase_preset", 1, &color_picker_class_erase_preset),
	JS_CFUNC_DEF("get_presets", 0, &color_picker_class_get_presets),
	JS_CFUNC_DEF("add_recent_preset", 1, &color_picker_class_add_recent_preset),
	JS_CFUNC_DEF("erase_recent_preset", 1, &color_picker_class_erase_recent_preset),
	JS_CFUNC_DEF("get_recent_presets", 0, &color_picker_class_get_recent_presets),
	JS_CFUNC_DEF("set_picker_shape", 1, &color_picker_class_set_picker_shape),
	JS_CFUNC_DEF("get_picker_shape", 0, &color_picker_class_get_picker_shape),
};

static int js_color_picker_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&ColorPicker::__class_id);
	classes["ColorPicker"] = ColorPicker::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), ColorPicker::__class_id, &color_picker_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, VBoxContainer::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ColorPicker::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, color_picker_class_proto_funcs, _countof(color_picker_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, color_picker_class_constructor, "ColorPicker", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "ColorPicker", ctor);

	return 0;
}

JSModuleDef *_js_init_color_picker_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_color_picker_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "ColorPicker");
	return m;
}

JSModuleDef *js_init_color_picker_module(JSContext *ctx) {
	return _js_init_color_picker_module(ctx, "godot/classes/color_picker");
}

void register_color_picker() {
	js_init_color_picker_module(ctx);
}