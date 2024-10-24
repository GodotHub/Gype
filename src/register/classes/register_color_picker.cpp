
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/color_picker.hpp>
#include <godot_cpp/classes/v_box_container.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void color_picker_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef color_picker_class_def = {
	"ColorPicker",
	.finalizer = color_picker_class_finalizer
};

static JSValue color_picker_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, ColorPicker::__class_id);
	if (JS_IsException(obj))
		return obj;
	ColorPicker *color_picker_class = memnew(ColorPicker);
	if (!color_picker_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, color_picker_class);	
	return obj;
}
static JSValue color_picker_class_set_pick_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ColorPicker::set_pick_color, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue color_picker_class_get_pick_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ColorPicker::get_pick_color, ctx, this_val, argc, argv);
};
static JSValue color_picker_class_set_deferred_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ColorPicker::set_deferred_mode, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue color_picker_class_is_deferred_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ColorPicker::is_deferred_mode, ctx, this_val, argc, argv);
};
static JSValue color_picker_class_set_color_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ColorPicker::set_color_mode, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue color_picker_class_get_color_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ColorPicker::get_color_mode, ctx, this_val, argc, argv);
};
static JSValue color_picker_class_set_edit_alpha(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ColorPicker::set_edit_alpha, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue color_picker_class_is_editing_alpha(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ColorPicker::is_editing_alpha, ctx, this_val, argc, argv);
};
static JSValue color_picker_class_set_can_add_swatches(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ColorPicker::set_can_add_swatches, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue color_picker_class_are_swatches_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ColorPicker::are_swatches_enabled, ctx, this_val, argc, argv);
};
static JSValue color_picker_class_set_presets_visible(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ColorPicker::set_presets_visible, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue color_picker_class_are_presets_visible(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ColorPicker::are_presets_visible, ctx, this_val, argc, argv);
};
static JSValue color_picker_class_set_modes_visible(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ColorPicker::set_modes_visible, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue color_picker_class_are_modes_visible(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ColorPicker::are_modes_visible, ctx, this_val, argc, argv);
};
static JSValue color_picker_class_set_sampler_visible(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ColorPicker::set_sampler_visible, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue color_picker_class_is_sampler_visible(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ColorPicker::is_sampler_visible, ctx, this_val, argc, argv);
};
static JSValue color_picker_class_set_sliders_visible(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ColorPicker::set_sliders_visible, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue color_picker_class_are_sliders_visible(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ColorPicker::are_sliders_visible, ctx, this_val, argc, argv);
};
static JSValue color_picker_class_set_hex_visible(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ColorPicker::set_hex_visible, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue color_picker_class_is_hex_visible(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ColorPicker::is_hex_visible, ctx, this_val, argc, argv);
};
static JSValue color_picker_class_add_preset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ColorPicker::add_preset, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue color_picker_class_erase_preset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ColorPicker::erase_preset, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue color_picker_class_get_presets(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ColorPicker::get_presets, ctx, this_val, argc, argv);
};
static JSValue color_picker_class_add_recent_preset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ColorPicker::add_recent_preset, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue color_picker_class_erase_recent_preset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ColorPicker::erase_recent_preset, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue color_picker_class_get_recent_presets(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ColorPicker::get_recent_presets, ctx, this_val, argc, argv);
};
static JSValue color_picker_class_set_picker_shape(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    call_builtin_method_no_ret(&ColorPicker::set_picker_shape, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue color_picker_class_get_picker_shape(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&ColorPicker::get_picker_shape, ctx, this_val, argc, argv);
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

void define_color_picker_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "color"),
        JS_NewCFunction(ctx, color_picker_class_get_pick_color, "get_pick_color", 0),
        JS_NewCFunction(ctx, color_picker_class_set_pick_color, "set_pick_color", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "edit_alpha"),
        JS_NewCFunction(ctx, color_picker_class_is_editing_alpha, "is_editing_alpha", 0),
        JS_NewCFunction(ctx, color_picker_class_set_edit_alpha, "set_edit_alpha", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "color_mode"),
        JS_NewCFunction(ctx, color_picker_class_get_color_mode, "get_color_mode", 0),
        JS_NewCFunction(ctx, color_picker_class_set_color_mode, "set_color_mode", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "deferred_mode"),
        JS_NewCFunction(ctx, color_picker_class_is_deferred_mode, "is_deferred_mode", 0),
        JS_NewCFunction(ctx, color_picker_class_set_deferred_mode, "set_deferred_mode", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "picker_shape"),
        JS_NewCFunction(ctx, color_picker_class_get_picker_shape, "get_picker_shape", 0),
        JS_NewCFunction(ctx, color_picker_class_set_picker_shape, "set_picker_shape", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "can_add_swatches"),
        JS_NewCFunction(ctx, color_picker_class_are_swatches_enabled, "are_swatches_enabled", 0),
        JS_NewCFunction(ctx, color_picker_class_set_can_add_swatches, "set_can_add_swatches", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "sampler_visible"),
        JS_NewCFunction(ctx, color_picker_class_is_sampler_visible, "is_sampler_visible", 0),
        JS_NewCFunction(ctx, color_picker_class_set_sampler_visible, "set_sampler_visible", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "color_modes_visible"),
        JS_NewCFunction(ctx, color_picker_class_are_modes_visible, "are_modes_visible", 0),
        JS_NewCFunction(ctx, color_picker_class_set_modes_visible, "set_modes_visible", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "sliders_visible"),
        JS_NewCFunction(ctx, color_picker_class_are_sliders_visible, "are_sliders_visible", 0),
        JS_NewCFunction(ctx, color_picker_class_set_sliders_visible, "set_sliders_visible", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "hex_visible"),
        JS_NewCFunction(ctx, color_picker_class_is_hex_visible, "is_hex_visible", 0),
        JS_NewCFunction(ctx, color_picker_class_set_hex_visible, "set_hex_visible", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "presets_visible"),
        JS_NewCFunction(ctx, color_picker_class_are_presets_visible, "are_presets_visible", 0),
        JS_NewCFunction(ctx, color_picker_class_set_presets_visible, "set_presets_visible", 1),
        JS_PROP_GETSET
    );
}

static int js_color_picker_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&ColorPicker::__class_id);
	classes["ColorPicker"] = ColorPicker::__class_id;
	class_id_list.insert(ColorPicker::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), ColorPicker::__class_id, &color_picker_class_def);

	JSValue proto = JS_NewObjectClass(ctx, ColorPicker::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, VBoxContainer::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, ColorPicker::__class_id, proto);

	define_color_picker_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, color_picker_class_proto_funcs, _countof(color_picker_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, color_picker_class_constructor, "ColorPicker", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "ColorPicker", ctor);

	return 0;
}

JSModuleDef *_js_init_color_picker_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/v_box_container';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
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
	ColorPicker::__init_js_class_id();
	js_init_color_picker_module(ctx);
}