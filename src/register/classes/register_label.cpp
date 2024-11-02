
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "quickjs/env.h"
#include "utils/func_utils.h"
#include "quickjs/str_helper.h"
#include "quickjs/quickjs_helper.h"
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/label_settings.hpp>
#include <godot_cpp/classes/label.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void label_class_finalizer(JSRuntime *rt, JSValue val) {
	
	// nothing
}

static JSClassDef label_class_def = {
	"Label",
	.finalizer = label_class_finalizer
};

static JSValue label_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	JSValue proto = JS_GetPropertyStr(ctx, new_target, "prototype");
	JSValue obj = JS_NewObjectProtoClass(ctx, proto, Label::__class_id);
	if (JS_IsException(obj))
		return obj;

	Label *label_class;
	if (argc == 1) 
		label_class = static_cast<Label *>(Variant(*argv).operator Object *());
	else 
		label_class = memnew(Label);
	if (!label_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}
	JS_SetOpaque(obj, label_class);
	return obj;
}
static JSValue label_class_set_horizontal_alignment(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Label::set_horizontal_alignment, ctx, this_val, argc, argv);
};
static JSValue label_class_get_horizontal_alignment(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Label::get_horizontal_alignment, ctx, this_val, argc, argv);
};
static JSValue label_class_set_vertical_alignment(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Label::set_vertical_alignment, ctx, this_val, argc, argv);
};
static JSValue label_class_get_vertical_alignment(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Label::get_vertical_alignment, ctx, this_val, argc, argv);
};
static JSValue label_class_set_text(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Label::set_text, ctx, this_val, argc, argv);
};
static JSValue label_class_get_text(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Label::get_text, ctx, this_val, argc, argv);
};
static JSValue label_class_set_label_settings(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Label::set_label_settings, ctx, this_val, argc, argv);
};
static JSValue label_class_get_label_settings(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Label::get_label_settings, ctx, this_val, argc, argv);
};
static JSValue label_class_set_text_direction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Label::set_text_direction, ctx, this_val, argc, argv);
};
static JSValue label_class_get_text_direction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Label::get_text_direction, ctx, this_val, argc, argv);
};
static JSValue label_class_set_language(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Label::set_language, ctx, this_val, argc, argv);
};
static JSValue label_class_get_language(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Label::get_language, ctx, this_val, argc, argv);
};
static JSValue label_class_set_autowrap_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Label::set_autowrap_mode, ctx, this_val, argc, argv);
};
static JSValue label_class_get_autowrap_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Label::get_autowrap_mode, ctx, this_val, argc, argv);
};
static JSValue label_class_set_justification_flags(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Label::set_justification_flags, ctx, this_val, argc, argv);
};
static JSValue label_class_get_justification_flags(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Label::get_justification_flags, ctx, this_val, argc, argv);
};
static JSValue label_class_set_clip_text(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Label::set_clip_text, ctx, this_val, argc, argv);
};
static JSValue label_class_is_clipping_text(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Label::is_clipping_text, ctx, this_val, argc, argv);
};
static JSValue label_class_set_tab_stops(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Label::set_tab_stops, ctx, this_val, argc, argv);
};
static JSValue label_class_get_tab_stops(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Label::get_tab_stops, ctx, this_val, argc, argv);
};
static JSValue label_class_set_text_overrun_behavior(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Label::set_text_overrun_behavior, ctx, this_val, argc, argv);
};
static JSValue label_class_get_text_overrun_behavior(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Label::get_text_overrun_behavior, ctx, this_val, argc, argv);
};
static JSValue label_class_set_ellipsis_char(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Label::set_ellipsis_char, ctx, this_val, argc, argv);
};
static JSValue label_class_get_ellipsis_char(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Label::get_ellipsis_char, ctx, this_val, argc, argv);
};
static JSValue label_class_set_uppercase(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Label::set_uppercase, ctx, this_val, argc, argv);
};
static JSValue label_class_is_uppercase(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Label::is_uppercase, ctx, this_val, argc, argv);
};
static JSValue label_class_get_line_height(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Label::get_line_height, ctx, this_val, argc, argv);
};
static JSValue label_class_get_line_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Label::get_line_count, ctx, this_val, argc, argv);
};
static JSValue label_class_get_visible_line_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Label::get_visible_line_count, ctx, this_val, argc, argv);
};
static JSValue label_class_get_total_character_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Label::get_total_character_count, ctx, this_val, argc, argv);
};
static JSValue label_class_set_visible_characters(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Label::set_visible_characters, ctx, this_val, argc, argv);
};
static JSValue label_class_get_visible_characters(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Label::get_visible_characters, ctx, this_val, argc, argv);
};
static JSValue label_class_get_visible_characters_behavior(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Label::get_visible_characters_behavior, ctx, this_val, argc, argv);
};
static JSValue label_class_set_visible_characters_behavior(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Label::set_visible_characters_behavior, ctx, this_val, argc, argv);
};
static JSValue label_class_set_visible_ratio(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Label::set_visible_ratio, ctx, this_val, argc, argv);
};
static JSValue label_class_get_visible_ratio(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Label::get_visible_ratio, ctx, this_val, argc, argv);
};
static JSValue label_class_set_lines_skipped(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Label::set_lines_skipped, ctx, this_val, argc, argv);
};
static JSValue label_class_get_lines_skipped(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Label::get_lines_skipped, ctx, this_val, argc, argv);
};
static JSValue label_class_set_max_lines_visible(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Label::set_max_lines_visible, ctx, this_val, argc, argv);
};
static JSValue label_class_get_max_lines_visible(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Label::get_max_lines_visible, ctx, this_val, argc, argv);
};
static JSValue label_class_set_structured_text_bidi_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Label::set_structured_text_bidi_override, ctx, this_val, argc, argv);
};
static JSValue label_class_get_structured_text_bidi_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Label::get_structured_text_bidi_override, ctx, this_val, argc, argv);
};
static JSValue label_class_set_structured_text_bidi_override_options(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
    return call_builtin_method_no_ret(&Label::set_structured_text_bidi_override_options, ctx, this_val, argc, argv);
};
static JSValue label_class_get_structured_text_bidi_override_options(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Label::get_structured_text_bidi_override_options, ctx, this_val, argc, argv);
};
static JSValue label_class_get_character_bounds(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	CHECK_INSTANCE_VALID_V(this_val);
	return call_builtin_const_method_ret(&Label::get_character_bounds, ctx, this_val, argc, argv);
};
static const JSCFunctionListEntry label_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_horizontal_alignment", 1, &label_class_set_horizontal_alignment),
	JS_CFUNC_DEF("get_horizontal_alignment", 0, &label_class_get_horizontal_alignment),
	JS_CFUNC_DEF("set_vertical_alignment", 1, &label_class_set_vertical_alignment),
	JS_CFUNC_DEF("get_vertical_alignment", 0, &label_class_get_vertical_alignment),
	JS_CFUNC_DEF("set_text", 1, &label_class_set_text),
	JS_CFUNC_DEF("get_text", 0, &label_class_get_text),
	JS_CFUNC_DEF("set_label_settings", 1, &label_class_set_label_settings),
	JS_CFUNC_DEF("get_label_settings", 0, &label_class_get_label_settings),
	JS_CFUNC_DEF("set_text_direction", 1, &label_class_set_text_direction),
	JS_CFUNC_DEF("get_text_direction", 0, &label_class_get_text_direction),
	JS_CFUNC_DEF("set_language", 1, &label_class_set_language),
	JS_CFUNC_DEF("get_language", 0, &label_class_get_language),
	JS_CFUNC_DEF("set_autowrap_mode", 1, &label_class_set_autowrap_mode),
	JS_CFUNC_DEF("get_autowrap_mode", 0, &label_class_get_autowrap_mode),
	JS_CFUNC_DEF("set_justification_flags", 1, &label_class_set_justification_flags),
	JS_CFUNC_DEF("get_justification_flags", 0, &label_class_get_justification_flags),
	JS_CFUNC_DEF("set_clip_text", 1, &label_class_set_clip_text),
	JS_CFUNC_DEF("is_clipping_text", 0, &label_class_is_clipping_text),
	JS_CFUNC_DEF("set_tab_stops", 1, &label_class_set_tab_stops),
	JS_CFUNC_DEF("get_tab_stops", 0, &label_class_get_tab_stops),
	JS_CFUNC_DEF("set_text_overrun_behavior", 1, &label_class_set_text_overrun_behavior),
	JS_CFUNC_DEF("get_text_overrun_behavior", 0, &label_class_get_text_overrun_behavior),
	JS_CFUNC_DEF("set_ellipsis_char", 1, &label_class_set_ellipsis_char),
	JS_CFUNC_DEF("get_ellipsis_char", 0, &label_class_get_ellipsis_char),
	JS_CFUNC_DEF("set_uppercase", 1, &label_class_set_uppercase),
	JS_CFUNC_DEF("is_uppercase", 0, &label_class_is_uppercase),
	JS_CFUNC_DEF("get_line_height", 1, &label_class_get_line_height),
	JS_CFUNC_DEF("get_line_count", 0, &label_class_get_line_count),
	JS_CFUNC_DEF("get_visible_line_count", 0, &label_class_get_visible_line_count),
	JS_CFUNC_DEF("get_total_character_count", 0, &label_class_get_total_character_count),
	JS_CFUNC_DEF("set_visible_characters", 1, &label_class_set_visible_characters),
	JS_CFUNC_DEF("get_visible_characters", 0, &label_class_get_visible_characters),
	JS_CFUNC_DEF("get_visible_characters_behavior", 0, &label_class_get_visible_characters_behavior),
	JS_CFUNC_DEF("set_visible_characters_behavior", 1, &label_class_set_visible_characters_behavior),
	JS_CFUNC_DEF("set_visible_ratio", 1, &label_class_set_visible_ratio),
	JS_CFUNC_DEF("get_visible_ratio", 0, &label_class_get_visible_ratio),
	JS_CFUNC_DEF("set_lines_skipped", 1, &label_class_set_lines_skipped),
	JS_CFUNC_DEF("get_lines_skipped", 0, &label_class_get_lines_skipped),
	JS_CFUNC_DEF("set_max_lines_visible", 1, &label_class_set_max_lines_visible),
	JS_CFUNC_DEF("get_max_lines_visible", 0, &label_class_get_max_lines_visible),
	JS_CFUNC_DEF("set_structured_text_bidi_override", 1, &label_class_set_structured_text_bidi_override),
	JS_CFUNC_DEF("get_structured_text_bidi_override", 0, &label_class_get_structured_text_bidi_override),
	JS_CFUNC_DEF("set_structured_text_bidi_override_options", 1, &label_class_set_structured_text_bidi_override_options),
	JS_CFUNC_DEF("get_structured_text_bidi_override_options", 0, &label_class_get_structured_text_bidi_override_options),
	JS_CFUNC_DEF("get_character_bounds", 1, &label_class_get_character_bounds),
};

static void define_label_property(JSContext *ctx, JSValue proto) {
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "text"),
        JS_NewCFunction(ctx, label_class_get_text, "get_text", 0),
        JS_NewCFunction(ctx, label_class_set_text, "set_text", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "label_settings"),
        JS_NewCFunction(ctx, label_class_get_label_settings, "get_label_settings", 0),
        JS_NewCFunction(ctx, label_class_set_label_settings, "set_label_settings", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "horizontal_alignment"),
        JS_NewCFunction(ctx, label_class_get_horizontal_alignment, "get_horizontal_alignment", 0),
        JS_NewCFunction(ctx, label_class_set_horizontal_alignment, "set_horizontal_alignment", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "vertical_alignment"),
        JS_NewCFunction(ctx, label_class_get_vertical_alignment, "get_vertical_alignment", 0),
        JS_NewCFunction(ctx, label_class_set_vertical_alignment, "set_vertical_alignment", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "autowrap_mode"),
        JS_NewCFunction(ctx, label_class_get_autowrap_mode, "get_autowrap_mode", 0),
        JS_NewCFunction(ctx, label_class_set_autowrap_mode, "set_autowrap_mode", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "justification_flags"),
        JS_NewCFunction(ctx, label_class_get_justification_flags, "get_justification_flags", 0),
        JS_NewCFunction(ctx, label_class_set_justification_flags, "set_justification_flags", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "clip_text"),
        JS_NewCFunction(ctx, label_class_is_clipping_text, "is_clipping_text", 0),
        JS_NewCFunction(ctx, label_class_set_clip_text, "set_clip_text", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "text_overrun_behavior"),
        JS_NewCFunction(ctx, label_class_get_text_overrun_behavior, "get_text_overrun_behavior", 0),
        JS_NewCFunction(ctx, label_class_set_text_overrun_behavior, "set_text_overrun_behavior", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "ellipsis_char"),
        JS_NewCFunction(ctx, label_class_get_ellipsis_char, "get_ellipsis_char", 0),
        JS_NewCFunction(ctx, label_class_set_ellipsis_char, "set_ellipsis_char", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "uppercase"),
        JS_NewCFunction(ctx, label_class_is_uppercase, "is_uppercase", 0),
        JS_NewCFunction(ctx, label_class_set_uppercase, "set_uppercase", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "tab_stops"),
        JS_NewCFunction(ctx, label_class_get_tab_stops, "get_tab_stops", 0),
        JS_NewCFunction(ctx, label_class_set_tab_stops, "set_tab_stops", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "lines_skipped"),
        JS_NewCFunction(ctx, label_class_get_lines_skipped, "get_lines_skipped", 0),
        JS_NewCFunction(ctx, label_class_set_lines_skipped, "set_lines_skipped", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "max_lines_visible"),
        JS_NewCFunction(ctx, label_class_get_max_lines_visible, "get_max_lines_visible", 0),
        JS_NewCFunction(ctx, label_class_set_max_lines_visible, "set_max_lines_visible", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "visible_characters"),
        JS_NewCFunction(ctx, label_class_get_visible_characters, "get_visible_characters", 0),
        JS_NewCFunction(ctx, label_class_set_visible_characters, "set_visible_characters", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "visible_characters_behavior"),
        JS_NewCFunction(ctx, label_class_get_visible_characters_behavior, "get_visible_characters_behavior", 0),
        JS_NewCFunction(ctx, label_class_set_visible_characters_behavior, "set_visible_characters_behavior", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "visible_ratio"),
        JS_NewCFunction(ctx, label_class_get_visible_ratio, "get_visible_ratio", 0),
        JS_NewCFunction(ctx, label_class_set_visible_ratio, "set_visible_ratio", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "text_direction"),
        JS_NewCFunction(ctx, label_class_get_text_direction, "get_text_direction", 0),
        JS_NewCFunction(ctx, label_class_set_text_direction, "set_text_direction", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "language"),
        JS_NewCFunction(ctx, label_class_get_language, "get_language", 0),
        JS_NewCFunction(ctx, label_class_set_language, "set_language", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "structured_text_bidi_override"),
        JS_NewCFunction(ctx, label_class_get_structured_text_bidi_override, "get_structured_text_bidi_override", 0),
        JS_NewCFunction(ctx, label_class_set_structured_text_bidi_override, "set_structured_text_bidi_override", 1),
        JS_PROP_GETSET
    );
    JS_DefinePropertyGetSet(
        ctx,
        proto,
        JS_NewAtom(ctx, "structured_text_bidi_override_options"),
        JS_NewCFunction(ctx, label_class_get_structured_text_bidi_override_options, "get_structured_text_bidi_override_options", 0),
        JS_NewCFunction(ctx, label_class_set_structured_text_bidi_override_options, "set_structured_text_bidi_override_options", 1),
        JS_PROP_GETSET
    );
	
}

static void define_label_enum(JSContext *ctx, JSValue proto) {
}

static int js_label_class_init(JSContext *ctx, JSModuleDef *m) {
	
	classes["Label"] = Label::__class_id;
	class_id_list.insert(Label::__class_id);
	JS_NewClass(JS_GetRuntime(ctx), Label::__class_id, &label_class_def);

	JSValue proto = JS_NewObjectClass(ctx, Label::__class_id);
	JSValue base_class = JS_GetClassProto(ctx, Control::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Label::__class_id, proto);

	define_label_property(ctx, proto);
	define_label_enum(ctx, proto);
	JS_SetPropertyFunctionList(ctx, proto, label_class_proto_funcs, _countof(label_class_proto_funcs));
	JSValue ctor = JS_NewCFunction2(ctx, label_class_constructor, "Label", 0, JS_CFUNC_constructor, 0);
	JS_SetConstructor(ctx, ctor, proto);

	JS_SetModuleExport(ctx, m, "Label", ctor);

	return 0;
}

JSModuleDef *_js_init_label_module(JSContext *ctx, const char *module_name) {
	const char *code = "import * as _ from '@godot/classes/control';";
	JSValue module = JS_Eval(ctx, code, strlen(code), "<eval>", JS_EVAL_TYPE_MODULE);
	if (JS_IsException(module))
		return NULL;
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_label_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Label");
	return m;
}

JSModuleDef *js_init_label_module(JSContext *ctx) {
	return _js_init_label_module(ctx, "@godot/classes/label");
}

void register_label() {
	Label::__init_js_class_id();
	js_init_label_module(ctx);
}