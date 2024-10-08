
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/font.hpp>
#include <godot_cpp/classes/text_paragraph.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void text_paragraph_class_finalizer(JSRuntime *rt, JSValue val) {
	TextParagraph *text_paragraph = static_cast<TextParagraph *>(JS_GetOpaque(val, TextParagraph::__class_id));
	if (text_paragraph)
		TextParagraph::free(nullptr, text_paragraph);
}

static JSClassDef text_paragraph_class_def = {
	"TextParagraph",
	.finalizer = text_paragraph_class_finalizer
};

static JSValue text_paragraph_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	TextParagraph *text_paragraph_class;
	JSValue obj = JS_NewObjectClass(ctx, TextParagraph::__class_id);
	if (JS_IsException(obj))
		return obj;
	text_paragraph_class = memnew(TextParagraph);
	if (!text_paragraph_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, text_paragraph_class);
	return obj;
}
static JSValue text_paragraph_class_clear(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextParagraph::clear, TextParagraph::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_paragraph_class_set_direction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextParagraph::set_direction, TextParagraph::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_paragraph_class_get_direction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextParagraph::get_direction, TextParagraph::__class_id, ctx, this_val, argv);
};
static JSValue text_paragraph_class_set_custom_punctuation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextParagraph::set_custom_punctuation, TextParagraph::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_paragraph_class_get_custom_punctuation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextParagraph::get_custom_punctuation, TextParagraph::__class_id, ctx, this_val, argv);
};
static JSValue text_paragraph_class_set_orientation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextParagraph::set_orientation, TextParagraph::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_paragraph_class_get_orientation(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextParagraph::get_orientation, TextParagraph::__class_id, ctx, this_val, argv);
};
static JSValue text_paragraph_class_set_preserve_invalid(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextParagraph::set_preserve_invalid, TextParagraph::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_paragraph_class_get_preserve_invalid(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextParagraph::get_preserve_invalid, TextParagraph::__class_id, ctx, this_val, argv);
};
static JSValue text_paragraph_class_set_preserve_control(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextParagraph::set_preserve_control, TextParagraph::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_paragraph_class_get_preserve_control(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextParagraph::get_preserve_control, TextParagraph::__class_id, ctx, this_val, argv);
};
static JSValue text_paragraph_class_set_bidi_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextParagraph::set_bidi_override, TextParagraph::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_paragraph_class_set_dropcap(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&TextParagraph::set_dropcap, TextParagraph::__class_id, ctx, this_val, argv);
};
static JSValue text_paragraph_class_clear_dropcap(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextParagraph::clear_dropcap, TextParagraph::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_paragraph_class_add_string(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&TextParagraph::add_string, TextParagraph::__class_id, ctx, this_val, argv);
};
static JSValue text_paragraph_class_add_object(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&TextParagraph::add_object, TextParagraph::__class_id, ctx, this_val, argv);
};
static JSValue text_paragraph_class_resize_object(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_method_ret(&TextParagraph::resize_object, TextParagraph::__class_id, ctx, this_val, argv);
};
static JSValue text_paragraph_class_set_alignment(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextParagraph::set_alignment, TextParagraph::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_paragraph_class_get_alignment(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextParagraph::get_alignment, TextParagraph::__class_id, ctx, this_val, argv);
};
static JSValue text_paragraph_class_tab_align(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextParagraph::tab_align, TextParagraph::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_paragraph_class_set_break_flags(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextParagraph::set_break_flags, TextParagraph::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_paragraph_class_get_break_flags(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextParagraph::get_break_flags, TextParagraph::__class_id, ctx, this_val, argv);
};
static JSValue text_paragraph_class_set_justification_flags(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextParagraph::set_justification_flags, TextParagraph::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_paragraph_class_get_justification_flags(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextParagraph::get_justification_flags, TextParagraph::__class_id, ctx, this_val, argv);
};
static JSValue text_paragraph_class_set_text_overrun_behavior(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextParagraph::set_text_overrun_behavior, TextParagraph::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_paragraph_class_get_text_overrun_behavior(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextParagraph::get_text_overrun_behavior, TextParagraph::__class_id, ctx, this_val, argv);
};
static JSValue text_paragraph_class_set_ellipsis_char(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextParagraph::set_ellipsis_char, TextParagraph::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_paragraph_class_get_ellipsis_char(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextParagraph::get_ellipsis_char, TextParagraph::__class_id, ctx, this_val, argv);
};
static JSValue text_paragraph_class_set_width(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextParagraph::set_width, TextParagraph::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_paragraph_class_get_width(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextParagraph::get_width, TextParagraph::__class_id, ctx, this_val, argv);
};
static JSValue text_paragraph_class_get_non_wrapped_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextParagraph::get_non_wrapped_size, TextParagraph::__class_id, ctx, this_val, argv);
};
static JSValue text_paragraph_class_get_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextParagraph::get_size, TextParagraph::__class_id, ctx, this_val, argv);
};
static JSValue text_paragraph_class_get_rid(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextParagraph::get_rid, TextParagraph::__class_id, ctx, this_val, argv);
};
static JSValue text_paragraph_class_get_line_rid(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextParagraph::get_line_rid, TextParagraph::__class_id, ctx, this_val, argv);
};
static JSValue text_paragraph_class_get_dropcap_rid(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextParagraph::get_dropcap_rid, TextParagraph::__class_id, ctx, this_val, argv);
};
static JSValue text_paragraph_class_get_line_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextParagraph::get_line_count, TextParagraph::__class_id, ctx, this_val, argv);
};
static JSValue text_paragraph_class_set_max_lines_visible(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&TextParagraph::set_max_lines_visible, TextParagraph::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_paragraph_class_get_max_lines_visible(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextParagraph::get_max_lines_visible, TextParagraph::__class_id, ctx, this_val, argv);
};
static JSValue text_paragraph_class_get_line_objects(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextParagraph::get_line_objects, TextParagraph::__class_id, ctx, this_val, argv);
};
static JSValue text_paragraph_class_get_line_object_rect(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextParagraph::get_line_object_rect, TextParagraph::__class_id, ctx, this_val, argv);
};
static JSValue text_paragraph_class_get_line_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextParagraph::get_line_size, TextParagraph::__class_id, ctx, this_val, argv);
};
static JSValue text_paragraph_class_get_line_range(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextParagraph::get_line_range, TextParagraph::__class_id, ctx, this_val, argv);
};
static JSValue text_paragraph_class_get_line_ascent(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextParagraph::get_line_ascent, TextParagraph::__class_id, ctx, this_val, argv);
};
static JSValue text_paragraph_class_get_line_descent(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextParagraph::get_line_descent, TextParagraph::__class_id, ctx, this_val, argv);
};
static JSValue text_paragraph_class_get_line_width(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextParagraph::get_line_width, TextParagraph::__class_id, ctx, this_val, argv);
};
static JSValue text_paragraph_class_get_line_underline_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextParagraph::get_line_underline_position, TextParagraph::__class_id, ctx, this_val, argv);
};
static JSValue text_paragraph_class_get_line_underline_thickness(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextParagraph::get_line_underline_thickness, TextParagraph::__class_id, ctx, this_val, argv);
};
static JSValue text_paragraph_class_get_dropcap_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextParagraph::get_dropcap_size, TextParagraph::__class_id, ctx, this_val, argv);
};
static JSValue text_paragraph_class_get_dropcap_lines(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextParagraph::get_dropcap_lines, TextParagraph::__class_id, ctx, this_val, argv);
};
static JSValue text_paragraph_class_draw(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_const_method_no_ret(&TextParagraph::draw, TextParagraph::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_paragraph_class_draw_outline(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_const_method_no_ret(&TextParagraph::draw_outline, TextParagraph::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_paragraph_class_draw_line(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_const_method_no_ret(&TextParagraph::draw_line, TextParagraph::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_paragraph_class_draw_line_outline(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_const_method_no_ret(&TextParagraph::draw_line_outline, TextParagraph::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_paragraph_class_draw_dropcap(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_const_method_no_ret(&TextParagraph::draw_dropcap, TextParagraph::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_paragraph_class_draw_dropcap_outline(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_const_method_no_ret(&TextParagraph::draw_dropcap_outline, TextParagraph::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue text_paragraph_class_hit_test(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&TextParagraph::hit_test, TextParagraph::__class_id, ctx, this_val, argv);
};
static const JSCFunctionListEntry text_paragraph_class_proto_funcs[] = {
	JS_CFUNC_DEF("clear", 0, &text_paragraph_class_clear),
	JS_CFUNC_DEF("set_direction", 1, &text_paragraph_class_set_direction),
	JS_CFUNC_DEF("get_direction", 0, &text_paragraph_class_get_direction),
	JS_CFUNC_DEF("set_custom_punctuation", 1, &text_paragraph_class_set_custom_punctuation),
	JS_CFUNC_DEF("get_custom_punctuation", 0, &text_paragraph_class_get_custom_punctuation),
	JS_CFUNC_DEF("set_orientation", 1, &text_paragraph_class_set_orientation),
	JS_CFUNC_DEF("get_orientation", 0, &text_paragraph_class_get_orientation),
	JS_CFUNC_DEF("set_preserve_invalid", 1, &text_paragraph_class_set_preserve_invalid),
	JS_CFUNC_DEF("get_preserve_invalid", 0, &text_paragraph_class_get_preserve_invalid),
	JS_CFUNC_DEF("set_preserve_control", 1, &text_paragraph_class_set_preserve_control),
	JS_CFUNC_DEF("get_preserve_control", 0, &text_paragraph_class_get_preserve_control),
	JS_CFUNC_DEF("set_bidi_override", 1, &text_paragraph_class_set_bidi_override),
	JS_CFUNC_DEF("set_dropcap", 5, &text_paragraph_class_set_dropcap),
	JS_CFUNC_DEF("clear_dropcap", 0, &text_paragraph_class_clear_dropcap),
	JS_CFUNC_DEF("add_string", 5, &text_paragraph_class_add_string),
	JS_CFUNC_DEF("add_object", 5, &text_paragraph_class_add_object),
	JS_CFUNC_DEF("resize_object", 4, &text_paragraph_class_resize_object),
	JS_CFUNC_DEF("set_alignment", 1, &text_paragraph_class_set_alignment),
	JS_CFUNC_DEF("get_alignment", 0, &text_paragraph_class_get_alignment),
	JS_CFUNC_DEF("tab_align", 1, &text_paragraph_class_tab_align),
	JS_CFUNC_DEF("set_break_flags", 1, &text_paragraph_class_set_break_flags),
	JS_CFUNC_DEF("get_break_flags", 0, &text_paragraph_class_get_break_flags),
	JS_CFUNC_DEF("set_justification_flags", 1, &text_paragraph_class_set_justification_flags),
	JS_CFUNC_DEF("get_justification_flags", 0, &text_paragraph_class_get_justification_flags),
	JS_CFUNC_DEF("set_text_overrun_behavior", 1, &text_paragraph_class_set_text_overrun_behavior),
	JS_CFUNC_DEF("get_text_overrun_behavior", 0, &text_paragraph_class_get_text_overrun_behavior),
	JS_CFUNC_DEF("set_ellipsis_char", 1, &text_paragraph_class_set_ellipsis_char),
	JS_CFUNC_DEF("get_ellipsis_char", 0, &text_paragraph_class_get_ellipsis_char),
	JS_CFUNC_DEF("set_width", 1, &text_paragraph_class_set_width),
	JS_CFUNC_DEF("get_width", 0, &text_paragraph_class_get_width),
	JS_CFUNC_DEF("get_non_wrapped_size", 0, &text_paragraph_class_get_non_wrapped_size),
	JS_CFUNC_DEF("get_size", 0, &text_paragraph_class_get_size),
	JS_CFUNC_DEF("get_rid", 0, &text_paragraph_class_get_rid),
	JS_CFUNC_DEF("get_line_rid", 1, &text_paragraph_class_get_line_rid),
	JS_CFUNC_DEF("get_dropcap_rid", 0, &text_paragraph_class_get_dropcap_rid),
	JS_CFUNC_DEF("get_line_count", 0, &text_paragraph_class_get_line_count),
	JS_CFUNC_DEF("set_max_lines_visible", 1, &text_paragraph_class_set_max_lines_visible),
	JS_CFUNC_DEF("get_max_lines_visible", 0, &text_paragraph_class_get_max_lines_visible),
	JS_CFUNC_DEF("get_line_objects", 1, &text_paragraph_class_get_line_objects),
	JS_CFUNC_DEF("get_line_object_rect", 2, &text_paragraph_class_get_line_object_rect),
	JS_CFUNC_DEF("get_line_size", 1, &text_paragraph_class_get_line_size),
	JS_CFUNC_DEF("get_line_range", 1, &text_paragraph_class_get_line_range),
	JS_CFUNC_DEF("get_line_ascent", 1, &text_paragraph_class_get_line_ascent),
	JS_CFUNC_DEF("get_line_descent", 1, &text_paragraph_class_get_line_descent),
	JS_CFUNC_DEF("get_line_width", 1, &text_paragraph_class_get_line_width),
	JS_CFUNC_DEF("get_line_underline_position", 1, &text_paragraph_class_get_line_underline_position),
	JS_CFUNC_DEF("get_line_underline_thickness", 1, &text_paragraph_class_get_line_underline_thickness),
	JS_CFUNC_DEF("get_dropcap_size", 0, &text_paragraph_class_get_dropcap_size),
	JS_CFUNC_DEF("get_dropcap_lines", 0, &text_paragraph_class_get_dropcap_lines),
	JS_CFUNC_DEF("draw", 4, &text_paragraph_class_draw),
	JS_CFUNC_DEF("draw_outline", 5, &text_paragraph_class_draw_outline),
	JS_CFUNC_DEF("draw_line", 4, &text_paragraph_class_draw_line),
	JS_CFUNC_DEF("draw_line_outline", 5, &text_paragraph_class_draw_line_outline),
	JS_CFUNC_DEF("draw_dropcap", 3, &text_paragraph_class_draw_dropcap),
	JS_CFUNC_DEF("draw_dropcap_outline", 4, &text_paragraph_class_draw_dropcap_outline),
	JS_CFUNC_DEF("hit_test", 1, &text_paragraph_class_hit_test),
};

static int js_text_paragraph_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&TextParagraph::__class_id);
	classes["TextParagraph"] = TextParagraph::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), TextParagraph::__class_id, &text_paragraph_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, RefCounted::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, TextParagraph::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, text_paragraph_class_proto_funcs, _countof(text_paragraph_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, text_paragraph_class_constructor, "TextParagraph", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "TextParagraph", ctor);

	return 0;
}

JSModuleDef *_js_init_text_paragraph_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_text_paragraph_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "TextParagraph");
	return m;
}

JSModuleDef *js_init_text_paragraph_module(JSContext *ctx) {
	return _js_init_text_paragraph_module(ctx, "godot/classes/text_paragraph");
}

void register_text_paragraph() {
	js_init_text_paragraph_module(ctx);
}