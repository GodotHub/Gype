
#include "quickjs/quickjs.h"
#include "quickjs/str_helper.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include <godot_cpp/classes/control.hpp>
#include <godot_cpp/classes/label.hpp>
#include <godot_cpp/classes/label_settings.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>


using namespace godot;

static void label_class_finalizer(JSRuntime *rt, JSValue val) {
	Label *label = static_cast<Label *>(JS_GetOpaque(val, Label::__class_id));
	if (label)
		Label::free(nullptr, label);
}

static JSClassDef label_class_def = {
	"Label",
	.finalizer = label_class_finalizer
};

static JSValue label_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	Label *label_class;
	JSValue obj = JS_NewObjectClass(ctx, Label::__class_id);
	if (JS_IsException(obj))
		return obj;
	label_class = memnew(Label);
	if (!label_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, label_class);
	return obj;
}
static JSValue label_class_set_horizontal_alignment(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Label::set_horizontal_alignment, Label::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue label_class_get_horizontal_alignment(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Label::get_horizontal_alignment, Label::__class_id, ctx, this_val, argv);
};
static JSValue label_class_set_vertical_alignment(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Label::set_vertical_alignment, Label::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue label_class_get_vertical_alignment(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Label::get_vertical_alignment, Label::__class_id, ctx, this_val, argv);
};
static JSValue label_class_set_text(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Label::set_text, Label::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue label_class_get_text(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Label::get_text, Label::__class_id, ctx, this_val, argv);
};
static JSValue label_class_set_label_settings(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Label::set_label_settings, Label::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue label_class_get_label_settings(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Label::get_label_settings, Label::__class_id, ctx, this_val, argv);
};
static JSValue label_class_set_text_direction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Label::set_text_direction, Label::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue label_class_get_text_direction(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Label::get_text_direction, Label::__class_id, ctx, this_val, argv);
};
static JSValue label_class_set_language(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Label::set_language, Label::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue label_class_get_language(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Label::get_language, Label::__class_id, ctx, this_val, argv);
};
static JSValue label_class_set_autowrap_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Label::set_autowrap_mode, Label::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue label_class_get_autowrap_mode(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Label::get_autowrap_mode, Label::__class_id, ctx, this_val, argv);
};
static JSValue label_class_set_justification_flags(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Label::set_justification_flags, Label::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue label_class_get_justification_flags(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Label::get_justification_flags, Label::__class_id, ctx, this_val, argv);
};
static JSValue label_class_set_clip_text(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Label::set_clip_text, Label::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue label_class_is_clipping_text(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Label::is_clipping_text, Label::__class_id, ctx, this_val, argv);
};
static JSValue label_class_set_tab_stops(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Label::set_tab_stops, Label::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue label_class_get_tab_stops(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Label::get_tab_stops, Label::__class_id, ctx, this_val, argv);
};
static JSValue label_class_set_text_overrun_behavior(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Label::set_text_overrun_behavior, Label::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue label_class_get_text_overrun_behavior(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Label::get_text_overrun_behavior, Label::__class_id, ctx, this_val, argv);
};
static JSValue label_class_set_ellipsis_char(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Label::set_ellipsis_char, Label::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue label_class_get_ellipsis_char(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Label::get_ellipsis_char, Label::__class_id, ctx, this_val, argv);
};
static JSValue label_class_set_uppercase(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Label::set_uppercase, Label::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue label_class_is_uppercase(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Label::is_uppercase, Label::__class_id, ctx, this_val, argv);
};
static JSValue label_class_get_line_height(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Label::get_line_height, Label::__class_id, ctx, this_val, argv);
};
static JSValue label_class_get_line_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Label::get_line_count, Label::__class_id, ctx, this_val, argv);
};
static JSValue label_class_get_visible_line_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Label::get_visible_line_count, Label::__class_id, ctx, this_val, argv);
};
static JSValue label_class_get_total_character_count(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Label::get_total_character_count, Label::__class_id, ctx, this_val, argv);
};
static JSValue label_class_set_visible_characters(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Label::set_visible_characters, Label::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue label_class_get_visible_characters(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Label::get_visible_characters, Label::__class_id, ctx, this_val, argv);
};
static JSValue label_class_get_visible_characters_behavior(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Label::get_visible_characters_behavior, Label::__class_id, ctx, this_val, argv);
};
static JSValue label_class_set_visible_characters_behavior(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Label::set_visible_characters_behavior, Label::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue label_class_set_visible_ratio(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Label::set_visible_ratio, Label::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue label_class_get_visible_ratio(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Label::get_visible_ratio, Label::__class_id, ctx, this_val, argv);
};
static JSValue label_class_set_lines_skipped(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Label::set_lines_skipped, Label::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue label_class_get_lines_skipped(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Label::get_lines_skipped, Label::__class_id, ctx, this_val, argv);
};
static JSValue label_class_set_max_lines_visible(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Label::set_max_lines_visible, Label::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue label_class_get_max_lines_visible(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Label::get_max_lines_visible, Label::__class_id, ctx, this_val, argv);
};
static JSValue label_class_set_structured_text_bidi_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Label::set_structured_text_bidi_override, Label::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue label_class_get_structured_text_bidi_override(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Label::get_structured_text_bidi_override, Label::__class_id, ctx, this_val, argv);
};
static JSValue label_class_set_structured_text_bidi_override_options(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	call_builtin_method_no_ret(&Label::set_structured_text_bidi_override_options, Label::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue label_class_get_structured_text_bidi_override_options(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Label::get_structured_text_bidi_override_options, Label::__class_id, ctx, this_val, argv);
};
static JSValue label_class_get_character_bounds(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&Label::get_character_bounds, Label::__class_id, ctx, this_val, argv);
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

static int js_label_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&Label::__class_id);
	classes["Label"] = Label::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), Label::__class_id, &label_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, Control::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, Label::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, label_class_proto_funcs, _countof(label_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, label_class_constructor, "Label", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "Label", ctor);

	return 0;
}

JSModuleDef *_js_init_label_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_label_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "Label");
	return m;
}

JSModuleDef *js_init_label_module(JSContext *ctx) {
	return _js_init_label_module(ctx, "godot/classes/label");
}

void register_label() {
	js_init_label_module(ctx);
}