
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/font.hpp>
#include <godot_cpp/classes/label_settings.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void label_settings_class_finalizer(JSRuntime *rt, JSValue val) {
	LabelSettings *label_settings = static_cast<LabelSettings *>(JS_GetOpaque(val, LabelSettings::__class_id));
	if (label_settings)
		LabelSettings::free(nullptr, label_settings);
}

static JSClassDef label_settings_class_def = {
	"LabelSettings",
	.finalizer = label_settings_class_finalizer
};

static JSValue label_settings_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	LabelSettings *label_settings_class;
	JSValue obj = JS_NewObjectClass(ctx, LabelSettings::__class_id);
	if (JS_IsException(obj))
		return obj;
	label_settings_class = memnew(LabelSettings);
	if (!label_settings_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, label_settings_class);
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");

	if (JS_IsObject(proto)) {
		JS_SetPrototype(ctx, obj, proto);
	}
	JS_FreeValue(ctx, proto);

	
	return obj;
}
static JSValue label_settings_class_set_line_spacing(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&LabelSettings::set_line_spacing, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue label_settings_class_get_line_spacing(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LabelSettings::get_line_spacing, ctx, this_val, argc, argv);
};
static JSValue label_settings_class_set_font(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&LabelSettings::set_font, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue label_settings_class_get_font(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LabelSettings::get_font, ctx, this_val, argc, argv);
};
static JSValue label_settings_class_set_font_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&LabelSettings::set_font_size, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue label_settings_class_get_font_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LabelSettings::get_font_size, ctx, this_val, argc, argv);
};
static JSValue label_settings_class_set_font_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&LabelSettings::set_font_color, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue label_settings_class_get_font_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LabelSettings::get_font_color, ctx, this_val, argc, argv);
};
static JSValue label_settings_class_set_outline_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&LabelSettings::set_outline_size, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue label_settings_class_get_outline_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LabelSettings::get_outline_size, ctx, this_val, argc, argv);
};
static JSValue label_settings_class_set_outline_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&LabelSettings::set_outline_color, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue label_settings_class_get_outline_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LabelSettings::get_outline_color, ctx, this_val, argc, argv);
};
static JSValue label_settings_class_set_shadow_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&LabelSettings::set_shadow_size, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue label_settings_class_get_shadow_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LabelSettings::get_shadow_size, ctx, this_val, argc, argv);
};
static JSValue label_settings_class_set_shadow_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&LabelSettings::set_shadow_color, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue label_settings_class_get_shadow_color(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LabelSettings::get_shadow_color, ctx, this_val, argc, argv);
};
static JSValue label_settings_class_set_shadow_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&LabelSettings::set_shadow_offset, ctx, this_val, argc, argv);
	return JS_UNDEFINED;
};
static JSValue label_settings_class_get_shadow_offset(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&LabelSettings::get_shadow_offset, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry label_settings_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_line_spacing", 1, &label_settings_class_set_line_spacing),
	JS_CFUNC_DEF("get_line_spacing", 0, &label_settings_class_get_line_spacing),
	JS_CFUNC_DEF("set_font", 1, &label_settings_class_set_font),
	JS_CFUNC_DEF("get_font", 0, &label_settings_class_get_font),
	JS_CFUNC_DEF("set_font_size", 1, &label_settings_class_set_font_size),
	JS_CFUNC_DEF("get_font_size", 0, &label_settings_class_get_font_size),
	JS_CFUNC_DEF("set_font_color", 1, &label_settings_class_set_font_color),
	JS_CFUNC_DEF("get_font_color", 0, &label_settings_class_get_font_color),
	JS_CFUNC_DEF("set_outline_size", 1, &label_settings_class_set_outline_size),
	JS_CFUNC_DEF("get_outline_size", 0, &label_settings_class_get_outline_size),
	JS_CFUNC_DEF("set_outline_color", 1, &label_settings_class_set_outline_color),
	JS_CFUNC_DEF("get_outline_color", 0, &label_settings_class_get_outline_color),
	JS_CFUNC_DEF("set_shadow_size", 1, &label_settings_class_set_shadow_size),
	JS_CFUNC_DEF("get_shadow_size", 0, &label_settings_class_get_shadow_size),
	JS_CFUNC_DEF("set_shadow_color", 1, &label_settings_class_set_shadow_color),
	JS_CFUNC_DEF("get_shadow_color", 0, &label_settings_class_get_shadow_color),
	JS_CFUNC_DEF("set_shadow_offset", 1, &label_settings_class_set_shadow_offset),
	JS_CFUNC_DEF("get_shadow_offset", 0, &label_settings_class_get_shadow_offset),
};

void define_label_settings_property(JSContext *ctx, JSValue obj) {
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "line_spacing"),
        JS_NewCFunction(ctx, label_settings_class_get_line_spacing, "get_line_spacing", 0),
        JS_NewCFunction(ctx, label_settings_class_set_line_spacing, "set_line_spacing", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "font"),
        JS_NewCFunction(ctx, label_settings_class_get_font, "get_font", 0),
        JS_NewCFunction(ctx, label_settings_class_set_font, "set_font", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "font_size"),
        JS_NewCFunction(ctx, label_settings_class_get_font_size, "get_font_size", 0),
        JS_NewCFunction(ctx, label_settings_class_set_font_size, "set_font_size", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "font_color"),
        JS_NewCFunction(ctx, label_settings_class_get_font_color, "get_font_color", 0),
        JS_NewCFunction(ctx, label_settings_class_set_font_color, "set_font_color", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "outline_size"),
        JS_NewCFunction(ctx, label_settings_class_get_outline_size, "get_outline_size", 0),
        JS_NewCFunction(ctx, label_settings_class_set_outline_size, "set_outline_size", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "outline_color"),
        JS_NewCFunction(ctx, label_settings_class_get_outline_color, "get_outline_color", 0),
        JS_NewCFunction(ctx, label_settings_class_set_outline_color, "set_outline_color", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "shadow_size"),
        JS_NewCFunction(ctx, label_settings_class_get_shadow_size, "get_shadow_size", 0),
        JS_NewCFunction(ctx, label_settings_class_set_shadow_size, "set_shadow_size", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "shadow_color"),
        JS_NewCFunction(ctx, label_settings_class_get_shadow_color, "get_shadow_color", 0),
        JS_NewCFunction(ctx, label_settings_class_set_shadow_color, "set_shadow_color", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
    JS_DefinePropertyGetSet(
        ctx,
        obj,
        JS_NewAtom(ctx, "shadow_offset"),
        JS_NewCFunction(ctx, label_settings_class_get_shadow_offset, "get_shadow_offset", 0),
        JS_NewCFunction(ctx, label_settings_class_set_shadow_offset, "set_shadow_offset", 0),
        JS_PROP_CONFIGURABLE | JS_PROP_ENUMERABLE
    );
}

static int js_label_settings_class_init(JSContext *ctx, JSModuleDef *m) {
	
	JS_NewClassID(&LabelSettings::__class_id);
	classes["LabelSettings"] = LabelSettings::__class_id;
	class_id_list.insert(LabelSettings::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), LabelSettings::__class_id, &label_settings_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Resource::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, LabelSettings::__class_id, proto);
	define_label_settings_property(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, label_settings_class_proto_funcs, _countof(label_settings_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, label_settings_class_constructor, "LabelSettings", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "LabelSettings", ctor);

	return 0;
}

JSModuleDef *_js_init_label_settings_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from 'godot/classes/resource';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_label_settings_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "LabelSettings");
	return m;
}

JSModuleDef *js_init_label_settings_module(JSContext *ctx) {
	return _js_init_label_settings_module(ctx, "godot/classes/label_settings");
}

void register_label_settings() {
	LabelSettings::__init_js_class_id();
	js_init_label_settings_module(ctx);
}