
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/text_line.hpp>
#include <godot_cpp/classes/font.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void text_line_class_finalizer(JSRuntime *rt, JSValue val) {
	TextLine *text_line = static_cast<TextLine *>(JS_GetOpaque(val, TextLine::__class_id));
	if (text_line)
		TextLine::free(nullptr, text_line);
}

static JSClassDef text_line_class_def = {
	"TextLine",
	.finalizer = text_line_class_finalizer
};

static JSValue text_line_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	TextLine *text_line_class;
	JSValue obj = JS_NewObjectClass(ctx, TextLine::__class_id);
	if (JS_IsException(obj))
		return obj;
	text_line_class = memnew(TextLine);
	if (!text_line_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, text_line_class);
	return obj;
}
static JSValue text_line_class_clear(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextLine::clear, TextLine::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_line_class_set_direction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextLine::set_direction, TextLine::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_line_class_get_direction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextLine::get_direction, TextLine::__class_id, ctx, this_val, argv);
};
static JSValue text_line_class_set_orientation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextLine::set_orientation, TextLine::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_line_class_get_orientation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextLine::get_orientation, TextLine::__class_id, ctx, this_val, argv);
};
static JSValue text_line_class_set_preserve_invalid(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextLine::set_preserve_invalid, TextLine::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_line_class_get_preserve_invalid(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextLine::get_preserve_invalid, TextLine::__class_id, ctx, this_val, argv);
};
static JSValue text_line_class_set_preserve_control(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextLine::set_preserve_control, TextLine::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_line_class_get_preserve_control(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextLine::get_preserve_control, TextLine::__class_id, ctx, this_val, argv);
};
static JSValue text_line_class_set_bidi_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextLine::set_bidi_override, TextLine::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_line_class_add_string(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&TextLine::add_string, TextLine::__class_id, ctx, this_val, argv);
};
static JSValue text_line_class_add_object(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&TextLine::add_object, TextLine::__class_id, ctx, this_val, argv);
};
static JSValue text_line_class_resize_object(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&TextLine::resize_object, TextLine::__class_id, ctx, this_val, argv);
};
static JSValue text_line_class_set_width(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextLine::set_width, TextLine::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_line_class_get_width(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextLine::get_width, TextLine::__class_id, ctx, this_val, argv);
};
static JSValue text_line_class_set_horizontal_alignment(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextLine::set_horizontal_alignment, TextLine::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_line_class_get_horizontal_alignment(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextLine::get_horizontal_alignment, TextLine::__class_id, ctx, this_val, argv);
};
static JSValue text_line_class_tab_align(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextLine::tab_align, TextLine::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_line_class_set_flags(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextLine::set_flags, TextLine::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_line_class_get_flags(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextLine::get_flags, TextLine::__class_id, ctx, this_val, argv);
};
static JSValue text_line_class_set_text_overrun_behavior(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextLine::set_text_overrun_behavior, TextLine::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_line_class_get_text_overrun_behavior(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextLine::get_text_overrun_behavior, TextLine::__class_id, ctx, this_val, argv);
};
static JSValue text_line_class_set_ellipsis_char(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextLine::set_ellipsis_char, TextLine::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_line_class_get_ellipsis_char(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextLine::get_ellipsis_char, TextLine::__class_id, ctx, this_val, argv);
};
static JSValue text_line_class_get_objects(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextLine::get_objects, TextLine::__class_id, ctx, this_val, argv);
};
static JSValue text_line_class_get_object_rect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextLine::get_object_rect, TextLine::__class_id, ctx, this_val, argv);
};
static JSValue text_line_class_get_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextLine::get_size, TextLine::__class_id, ctx, this_val, argv);
};
static JSValue text_line_class_get_rid(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextLine::get_rid, TextLine::__class_id, ctx, this_val, argv);
};
static JSValue text_line_class_get_line_ascent(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextLine::get_line_ascent, TextLine::__class_id, ctx, this_val, argv);
};
static JSValue text_line_class_get_line_descent(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextLine::get_line_descent, TextLine::__class_id, ctx, this_val, argv);
};
static JSValue text_line_class_get_line_width(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextLine::get_line_width, TextLine::__class_id, ctx, this_val, argv);
};
static JSValue text_line_class_get_line_underline_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextLine::get_line_underline_position, TextLine::__class_id, ctx, this_val, argv);
};
static JSValue text_line_class_get_line_underline_thickness(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextLine::get_line_underline_thickness, TextLine::__class_id, ctx, this_val, argv);
};
static JSValue text_line_class_draw(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_const_method_no_ret(&TextLine::draw, TextLine::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_line_class_draw_outline(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_const_method_no_ret(&TextLine::draw_outline, TextLine::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_line_class_hit_test(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextLine::hit_test, TextLine::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry text_line_class_proto_funcs[] = {
	JS_CFUNC_DEF("clear", 0, &text_line_class_clear),
	JS_CFUNC_DEF("set_direction", 1, &text_line_class_set_direction),
	JS_CFUNC_DEF("get_direction", 0, &text_line_class_get_direction),
	JS_CFUNC_DEF("set_orientation", 1, &text_line_class_set_orientation),
	JS_CFUNC_DEF("get_orientation", 0, &text_line_class_get_orientation),
	JS_CFUNC_DEF("set_preserve_invalid", 1, &text_line_class_set_preserve_invalid),
	JS_CFUNC_DEF("get_preserve_invalid", 0, &text_line_class_get_preserve_invalid),
	JS_CFUNC_DEF("set_preserve_control", 1, &text_line_class_set_preserve_control),
	JS_CFUNC_DEF("get_preserve_control", 0, &text_line_class_get_preserve_control),
	JS_CFUNC_DEF("set_bidi_override", 1, &text_line_class_set_bidi_override),
	JS_CFUNC_DEF("add_string", 5, &text_line_class_add_string),
	JS_CFUNC_DEF("add_object", 5, &text_line_class_add_object),
	JS_CFUNC_DEF("resize_object", 4, &text_line_class_resize_object),
	JS_CFUNC_DEF("set_width", 1, &text_line_class_set_width),
	JS_CFUNC_DEF("get_width", 0, &text_line_class_get_width),
	JS_CFUNC_DEF("set_horizontal_alignment", 1, &text_line_class_set_horizontal_alignment),
	JS_CFUNC_DEF("get_horizontal_alignment", 0, &text_line_class_get_horizontal_alignment),
	JS_CFUNC_DEF("tab_align", 1, &text_line_class_tab_align),
	JS_CFUNC_DEF("set_flags", 1, &text_line_class_set_flags),
	JS_CFUNC_DEF("get_flags", 0, &text_line_class_get_flags),
	JS_CFUNC_DEF("set_text_overrun_behavior", 1, &text_line_class_set_text_overrun_behavior),
	JS_CFUNC_DEF("get_text_overrun_behavior", 0, &text_line_class_get_text_overrun_behavior),
	JS_CFUNC_DEF("set_ellipsis_char", 1, &text_line_class_set_ellipsis_char),
	JS_CFUNC_DEF("get_ellipsis_char", 0, &text_line_class_get_ellipsis_char),
	JS_CFUNC_DEF("get_objects", 0, &text_line_class_get_objects),
	JS_CFUNC_DEF("get_object_rect", 1, &text_line_class_get_object_rect),
	JS_CFUNC_DEF("get_size", 0, &text_line_class_get_size),
	JS_CFUNC_DEF("get_rid", 0, &text_line_class_get_rid),
	JS_CFUNC_DEF("get_line_ascent", 0, &text_line_class_get_line_ascent),
	JS_CFUNC_DEF("get_line_descent", 0, &text_line_class_get_line_descent),
	JS_CFUNC_DEF("get_line_width", 0, &text_line_class_get_line_width),
	JS_CFUNC_DEF("get_line_underline_position", 0, &text_line_class_get_line_underline_position),
	JS_CFUNC_DEF("get_line_underline_thickness", 0, &text_line_class_get_line_underline_thickness),
	JS_CFUNC_DEF("draw", 3, &text_line_class_draw),
	JS_CFUNC_DEF("draw_outline", 4, &text_line_class_draw_outline),
	JS_CFUNC_DEF("hit_test", 1, &text_line_class_hit_test),
};

static int js_text_line_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&TextLine::__class_id);
	classes["TextLine"] = TextLine::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), TextLine::__class_id, &text_line_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, TextLine::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, text_line_class_proto_funcs, _countof(text_line_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, text_line_class_constructor, "TextLine", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "TextLine", ctor);

	return 0;
}

JSModuleDef *_js_init_text_line_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_text_line_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "TextLine");
	return m;
}

JSModuleDef *js_init_text_line_module(JSContext *ctx) {
	return _js_init_text_line_module(ctx, "godot/classes/text_line");
}

void register_text_line() {
	js_init_text_line_module(ctx);
}