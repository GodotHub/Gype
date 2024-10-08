
#include "quickjs/quickjs.h"
#include "register/classes/register_classes.h"
#include "utils/env.h"
#include "utils/register_helper.h"
#include "quickjs/str_helper.h"
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/text_edit.hpp>
#include <godot_cpp/classes/code_edit.hpp>
#include <godot_cpp/core/convert_helper.hpp>
#include <godot_cpp/variant/builtin_types.hpp>

using namespace godot;

static void code_edit_class_finalizer(JSRuntime *rt, JSValue val) {
	CodeEdit *code_edit = static_cast<CodeEdit *>(JS_GetOpaque(val, CodeEdit::__class_id));
	if (code_edit)
		CodeEdit::free(nullptr, code_edit);
}

static JSClassDef code_edit_class_def = {
	"CodeEdit",
	.finalizer = code_edit_class_finalizer
};

static JSValue code_edit_class_constructor(JSContext *ctx, JSValueConst new_target, int argc, JSValueConst *argv) {
	CodeEdit *code_edit_class;
	JSValue obj = JS_NewObjectClass(ctx, CodeEdit::__class_id);
	if (JS_IsException(obj))
		return obj;
	code_edit_class = memnew(CodeEdit);
	if (!code_edit_class) {
		JS_FreeValue(ctx, obj);
		return JS_EXCEPTION;
	}

	JS_SetOpaque(obj, code_edit_class);
	return obj;
}
static JSValue code_edit_class_set_indent_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CodeEdit::set_indent_size, CodeEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue code_edit_class_get_indent_size(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CodeEdit::get_indent_size, CodeEdit::__class_id, ctx, this_val, argv);
};
static JSValue code_edit_class_set_indent_using_spaces(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CodeEdit::set_indent_using_spaces, CodeEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue code_edit_class_is_indent_using_spaces(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CodeEdit::is_indent_using_spaces, CodeEdit::__class_id, ctx, this_val, argv);
};
static JSValue code_edit_class_set_auto_indent_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CodeEdit::set_auto_indent_enabled, CodeEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue code_edit_class_is_auto_indent_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CodeEdit::is_auto_indent_enabled, CodeEdit::__class_id, ctx, this_val, argv);
};
static JSValue code_edit_class_set_auto_indent_prefixes(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CodeEdit::set_auto_indent_prefixes, CodeEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue code_edit_class_get_auto_indent_prefixes(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CodeEdit::get_auto_indent_prefixes, CodeEdit::__class_id, ctx, this_val, argv);
};
static JSValue code_edit_class_do_indent(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CodeEdit::do_indent, CodeEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue code_edit_class_indent_lines(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CodeEdit::indent_lines, CodeEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue code_edit_class_unindent_lines(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CodeEdit::unindent_lines, CodeEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue code_edit_class_convert_indent(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CodeEdit::convert_indent, CodeEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue code_edit_class_set_auto_brace_completion_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CodeEdit::set_auto_brace_completion_enabled, CodeEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue code_edit_class_is_auto_brace_completion_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CodeEdit::is_auto_brace_completion_enabled, CodeEdit::__class_id, ctx, this_val, argv);
};
static JSValue code_edit_class_set_highlight_matching_braces_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CodeEdit::set_highlight_matching_braces_enabled, CodeEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue code_edit_class_is_highlight_matching_braces_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CodeEdit::is_highlight_matching_braces_enabled, CodeEdit::__class_id, ctx, this_val, argv);
};
static JSValue code_edit_class_add_auto_brace_completion_pair(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CodeEdit::add_auto_brace_completion_pair, CodeEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue code_edit_class_set_auto_brace_completion_pairs(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CodeEdit::set_auto_brace_completion_pairs, CodeEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue code_edit_class_get_auto_brace_completion_pairs(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CodeEdit::get_auto_brace_completion_pairs, CodeEdit::__class_id, ctx, this_val, argv);
};
static JSValue code_edit_class_has_auto_brace_completion_open_key(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CodeEdit::has_auto_brace_completion_open_key, CodeEdit::__class_id, ctx, this_val, argv);
};
static JSValue code_edit_class_has_auto_brace_completion_close_key(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CodeEdit::has_auto_brace_completion_close_key, CodeEdit::__class_id, ctx, this_val, argv);
};
static JSValue code_edit_class_get_auto_brace_completion_close_key(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CodeEdit::get_auto_brace_completion_close_key, CodeEdit::__class_id, ctx, this_val, argv);
};
static JSValue code_edit_class_set_draw_breakpoints_gutter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CodeEdit::set_draw_breakpoints_gutter, CodeEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue code_edit_class_is_drawing_breakpoints_gutter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CodeEdit::is_drawing_breakpoints_gutter, CodeEdit::__class_id, ctx, this_val, argv);
};
static JSValue code_edit_class_set_draw_bookmarks_gutter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CodeEdit::set_draw_bookmarks_gutter, CodeEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue code_edit_class_is_drawing_bookmarks_gutter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CodeEdit::is_drawing_bookmarks_gutter, CodeEdit::__class_id, ctx, this_val, argv);
};
static JSValue code_edit_class_set_draw_executing_lines_gutter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CodeEdit::set_draw_executing_lines_gutter, CodeEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue code_edit_class_is_drawing_executing_lines_gutter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CodeEdit::is_drawing_executing_lines_gutter, CodeEdit::__class_id, ctx, this_val, argv);
};
static JSValue code_edit_class_set_line_as_breakpoint(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CodeEdit::set_line_as_breakpoint, CodeEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue code_edit_class_is_line_breakpointed(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CodeEdit::is_line_breakpointed, CodeEdit::__class_id, ctx, this_val, argv);
};
static JSValue code_edit_class_clear_breakpointed_lines(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CodeEdit::clear_breakpointed_lines, CodeEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue code_edit_class_get_breakpointed_lines(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CodeEdit::get_breakpointed_lines, CodeEdit::__class_id, ctx, this_val, argv);
};
static JSValue code_edit_class_set_line_as_bookmarked(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CodeEdit::set_line_as_bookmarked, CodeEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue code_edit_class_is_line_bookmarked(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CodeEdit::is_line_bookmarked, CodeEdit::__class_id, ctx, this_val, argv);
};
static JSValue code_edit_class_clear_bookmarked_lines(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CodeEdit::clear_bookmarked_lines, CodeEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue code_edit_class_get_bookmarked_lines(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CodeEdit::get_bookmarked_lines, CodeEdit::__class_id, ctx, this_val, argv);
};
static JSValue code_edit_class_set_line_as_executing(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CodeEdit::set_line_as_executing, CodeEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue code_edit_class_is_line_executing(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CodeEdit::is_line_executing, CodeEdit::__class_id, ctx, this_val, argv);
};
static JSValue code_edit_class_clear_executing_lines(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CodeEdit::clear_executing_lines, CodeEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue code_edit_class_get_executing_lines(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CodeEdit::get_executing_lines, CodeEdit::__class_id, ctx, this_val, argv);
};
static JSValue code_edit_class_set_draw_line_numbers(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CodeEdit::set_draw_line_numbers, CodeEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue code_edit_class_is_draw_line_numbers_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CodeEdit::is_draw_line_numbers_enabled, CodeEdit::__class_id, ctx, this_val, argv);
};
static JSValue code_edit_class_set_line_numbers_zero_padded(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CodeEdit::set_line_numbers_zero_padded, CodeEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue code_edit_class_is_line_numbers_zero_padded(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CodeEdit::is_line_numbers_zero_padded, CodeEdit::__class_id, ctx, this_val, argv);
};
static JSValue code_edit_class_set_draw_fold_gutter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CodeEdit::set_draw_fold_gutter, CodeEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue code_edit_class_is_drawing_fold_gutter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CodeEdit::is_drawing_fold_gutter, CodeEdit::__class_id, ctx, this_val, argv);
};
static JSValue code_edit_class_set_line_folding_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CodeEdit::set_line_folding_enabled, CodeEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue code_edit_class_is_line_folding_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CodeEdit::is_line_folding_enabled, CodeEdit::__class_id, ctx, this_val, argv);
};
static JSValue code_edit_class_can_fold_line(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CodeEdit::can_fold_line, CodeEdit::__class_id, ctx, this_val, argv);
};
static JSValue code_edit_class_fold_line(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CodeEdit::fold_line, CodeEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue code_edit_class_unfold_line(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CodeEdit::unfold_line, CodeEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue code_edit_class_fold_all_lines(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CodeEdit::fold_all_lines, CodeEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue code_edit_class_unfold_all_lines(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CodeEdit::unfold_all_lines, CodeEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue code_edit_class_toggle_foldable_line(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CodeEdit::toggle_foldable_line, CodeEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue code_edit_class_toggle_foldable_lines_at_carets(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CodeEdit::toggle_foldable_lines_at_carets, CodeEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue code_edit_class_is_line_folded(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CodeEdit::is_line_folded, CodeEdit::__class_id, ctx, this_val, argv);
};
static JSValue code_edit_class_get_folded_lines(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CodeEdit::get_folded_lines, CodeEdit::__class_id, ctx, this_val, argv);
};
static JSValue code_edit_class_create_code_region(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CodeEdit::create_code_region, CodeEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue code_edit_class_get_code_region_start_tag(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CodeEdit::get_code_region_start_tag, CodeEdit::__class_id, ctx, this_val, argv);
};
static JSValue code_edit_class_get_code_region_end_tag(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CodeEdit::get_code_region_end_tag, CodeEdit::__class_id, ctx, this_val, argv);
};
static JSValue code_edit_class_set_code_region_tags(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CodeEdit::set_code_region_tags, CodeEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue code_edit_class_is_line_code_region_start(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CodeEdit::is_line_code_region_start, CodeEdit::__class_id, ctx, this_val, argv);
};
static JSValue code_edit_class_is_line_code_region_end(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CodeEdit::is_line_code_region_end, CodeEdit::__class_id, ctx, this_val, argv);
};
static JSValue code_edit_class_add_string_delimiter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CodeEdit::add_string_delimiter, CodeEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue code_edit_class_remove_string_delimiter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CodeEdit::remove_string_delimiter, CodeEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue code_edit_class_has_string_delimiter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CodeEdit::has_string_delimiter, CodeEdit::__class_id, ctx, this_val, argv);
};
static JSValue code_edit_class_set_string_delimiters(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CodeEdit::set_string_delimiters, CodeEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue code_edit_class_clear_string_delimiters(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CodeEdit::clear_string_delimiters, CodeEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue code_edit_class_get_string_delimiters(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CodeEdit::get_string_delimiters, CodeEdit::__class_id, ctx, this_val, argv);
};
static JSValue code_edit_class_is_in_string(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CodeEdit::is_in_string, CodeEdit::__class_id, ctx, this_val, argv);
};
static JSValue code_edit_class_add_comment_delimiter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CodeEdit::add_comment_delimiter, CodeEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue code_edit_class_remove_comment_delimiter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CodeEdit::remove_comment_delimiter, CodeEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue code_edit_class_has_comment_delimiter(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CodeEdit::has_comment_delimiter, CodeEdit::__class_id, ctx, this_val, argv);
};
static JSValue code_edit_class_set_comment_delimiters(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CodeEdit::set_comment_delimiters, CodeEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue code_edit_class_clear_comment_delimiters(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CodeEdit::clear_comment_delimiters, CodeEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue code_edit_class_get_comment_delimiters(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CodeEdit::get_comment_delimiters, CodeEdit::__class_id, ctx, this_val, argv);
};
static JSValue code_edit_class_is_in_comment(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CodeEdit::is_in_comment, CodeEdit::__class_id, ctx, this_val, argv);
};
static JSValue code_edit_class_get_delimiter_start_key(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CodeEdit::get_delimiter_start_key, CodeEdit::__class_id, ctx, this_val, argv);
};
static JSValue code_edit_class_get_delimiter_end_key(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CodeEdit::get_delimiter_end_key, CodeEdit::__class_id, ctx, this_val, argv);
};
static JSValue code_edit_class_get_delimiter_start_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CodeEdit::get_delimiter_start_position, CodeEdit::__class_id, ctx, this_val, argv);
};
static JSValue code_edit_class_get_delimiter_end_position(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CodeEdit::get_delimiter_end_position, CodeEdit::__class_id, ctx, this_val, argv);
};
static JSValue code_edit_class_set_code_hint(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CodeEdit::set_code_hint, CodeEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue code_edit_class_set_code_hint_draw_below(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CodeEdit::set_code_hint_draw_below, CodeEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue code_edit_class_get_text_for_code_completion(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CodeEdit::get_text_for_code_completion, CodeEdit::__class_id, ctx, this_val, argv);
};
static JSValue code_edit_class_request_code_completion(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CodeEdit::request_code_completion, CodeEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue code_edit_class_add_code_completion_option(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CodeEdit::add_code_completion_option, CodeEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue code_edit_class_update_code_completion_options(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CodeEdit::update_code_completion_options, CodeEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue code_edit_class_get_code_completion_options(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CodeEdit::get_code_completion_options, CodeEdit::__class_id, ctx, this_val, argv);
};
static JSValue code_edit_class_get_code_completion_option(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CodeEdit::get_code_completion_option, CodeEdit::__class_id, ctx, this_val, argv);
};
static JSValue code_edit_class_get_code_completion_selected_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CodeEdit::get_code_completion_selected_index, CodeEdit::__class_id, ctx, this_val, argv);
};
static JSValue code_edit_class_set_code_completion_selected_index(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CodeEdit::set_code_completion_selected_index, CodeEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue code_edit_class_confirm_code_completion(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CodeEdit::confirm_code_completion, CodeEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue code_edit_class_cancel_code_completion(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CodeEdit::cancel_code_completion, CodeEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue code_edit_class_set_code_completion_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CodeEdit::set_code_completion_enabled, CodeEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue code_edit_class_is_code_completion_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CodeEdit::is_code_completion_enabled, CodeEdit::__class_id, ctx, this_val, argv);
};
static JSValue code_edit_class_set_code_completion_prefixes(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CodeEdit::set_code_completion_prefixes, CodeEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue code_edit_class_get_code_completion_prefixes(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CodeEdit::get_code_completion_prefixes, CodeEdit::__class_id, ctx, this_val, argv);
};
static JSValue code_edit_class_set_line_length_guidelines(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CodeEdit::set_line_length_guidelines, CodeEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue code_edit_class_get_line_length_guidelines(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CodeEdit::get_line_length_guidelines, CodeEdit::__class_id, ctx, this_val, argv);
};
static JSValue code_edit_class_set_symbol_lookup_on_click_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CodeEdit::set_symbol_lookup_on_click_enabled, CodeEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue code_edit_class_is_symbol_lookup_on_click_enabled(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CodeEdit::is_symbol_lookup_on_click_enabled, CodeEdit::__class_id, ctx, this_val, argv);
};
static JSValue code_edit_class_get_text_for_symbol_lookup(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CodeEdit::get_text_for_symbol_lookup, CodeEdit::__class_id, ctx, this_val, argv);
};
static JSValue code_edit_class_get_text_with_cursor_char(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
	return call_builtin_const_method_ret(&CodeEdit::get_text_with_cursor_char, CodeEdit::__class_id, ctx, this_val, argv);
};
static JSValue code_edit_class_set_symbol_lookup_word_as_valid(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CodeEdit::set_symbol_lookup_word_as_valid, CodeEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue code_edit_class_move_lines_up(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CodeEdit::move_lines_up, CodeEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue code_edit_class_move_lines_down(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CodeEdit::move_lines_down, CodeEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue code_edit_class_delete_lines(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CodeEdit::delete_lines, CodeEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue code_edit_class_duplicate_selection(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CodeEdit::duplicate_selection, CodeEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static JSValue code_edit_class_duplicate_lines(JSContext *ctx, JSValueConst this_val, int argc, JSValueConst *argv) {
    call_builtin_method_no_ret(&CodeEdit::duplicate_lines, CodeEdit::__class_id, ctx, this_val, argv);
	return JS_UNDEFINED;
};
static const JSCFunctionListEntry code_edit_class_proto_funcs[] = {
	JS_CFUNC_DEF("set_indent_size", 1, &code_edit_class_set_indent_size),
	JS_CFUNC_DEF("get_indent_size", 0, &code_edit_class_get_indent_size),
	JS_CFUNC_DEF("set_indent_using_spaces", 1, &code_edit_class_set_indent_using_spaces),
	JS_CFUNC_DEF("is_indent_using_spaces", 0, &code_edit_class_is_indent_using_spaces),
	JS_CFUNC_DEF("set_auto_indent_enabled", 1, &code_edit_class_set_auto_indent_enabled),
	JS_CFUNC_DEF("is_auto_indent_enabled", 0, &code_edit_class_is_auto_indent_enabled),
	JS_CFUNC_DEF("set_auto_indent_prefixes", 1, &code_edit_class_set_auto_indent_prefixes),
	JS_CFUNC_DEF("get_auto_indent_prefixes", 0, &code_edit_class_get_auto_indent_prefixes),
	JS_CFUNC_DEF("do_indent", 0, &code_edit_class_do_indent),
	JS_CFUNC_DEF("indent_lines", 0, &code_edit_class_indent_lines),
	JS_CFUNC_DEF("unindent_lines", 0, &code_edit_class_unindent_lines),
	JS_CFUNC_DEF("convert_indent", 2, &code_edit_class_convert_indent),
	JS_CFUNC_DEF("set_auto_brace_completion_enabled", 1, &code_edit_class_set_auto_brace_completion_enabled),
	JS_CFUNC_DEF("is_auto_brace_completion_enabled", 0, &code_edit_class_is_auto_brace_completion_enabled),
	JS_CFUNC_DEF("set_highlight_matching_braces_enabled", 1, &code_edit_class_set_highlight_matching_braces_enabled),
	JS_CFUNC_DEF("is_highlight_matching_braces_enabled", 0, &code_edit_class_is_highlight_matching_braces_enabled),
	JS_CFUNC_DEF("add_auto_brace_completion_pair", 2, &code_edit_class_add_auto_brace_completion_pair),
	JS_CFUNC_DEF("set_auto_brace_completion_pairs", 1, &code_edit_class_set_auto_brace_completion_pairs),
	JS_CFUNC_DEF("get_auto_brace_completion_pairs", 0, &code_edit_class_get_auto_brace_completion_pairs),
	JS_CFUNC_DEF("has_auto_brace_completion_open_key", 1, &code_edit_class_has_auto_brace_completion_open_key),
	JS_CFUNC_DEF("has_auto_brace_completion_close_key", 1, &code_edit_class_has_auto_brace_completion_close_key),
	JS_CFUNC_DEF("get_auto_brace_completion_close_key", 1, &code_edit_class_get_auto_brace_completion_close_key),
	JS_CFUNC_DEF("set_draw_breakpoints_gutter", 1, &code_edit_class_set_draw_breakpoints_gutter),
	JS_CFUNC_DEF("is_drawing_breakpoints_gutter", 0, &code_edit_class_is_drawing_breakpoints_gutter),
	JS_CFUNC_DEF("set_draw_bookmarks_gutter", 1, &code_edit_class_set_draw_bookmarks_gutter),
	JS_CFUNC_DEF("is_drawing_bookmarks_gutter", 0, &code_edit_class_is_drawing_bookmarks_gutter),
	JS_CFUNC_DEF("set_draw_executing_lines_gutter", 1, &code_edit_class_set_draw_executing_lines_gutter),
	JS_CFUNC_DEF("is_drawing_executing_lines_gutter", 0, &code_edit_class_is_drawing_executing_lines_gutter),
	JS_CFUNC_DEF("set_line_as_breakpoint", 2, &code_edit_class_set_line_as_breakpoint),
	JS_CFUNC_DEF("is_line_breakpointed", 1, &code_edit_class_is_line_breakpointed),
	JS_CFUNC_DEF("clear_breakpointed_lines", 0, &code_edit_class_clear_breakpointed_lines),
	JS_CFUNC_DEF("get_breakpointed_lines", 0, &code_edit_class_get_breakpointed_lines),
	JS_CFUNC_DEF("set_line_as_bookmarked", 2, &code_edit_class_set_line_as_bookmarked),
	JS_CFUNC_DEF("is_line_bookmarked", 1, &code_edit_class_is_line_bookmarked),
	JS_CFUNC_DEF("clear_bookmarked_lines", 0, &code_edit_class_clear_bookmarked_lines),
	JS_CFUNC_DEF("get_bookmarked_lines", 0, &code_edit_class_get_bookmarked_lines),
	JS_CFUNC_DEF("set_line_as_executing", 2, &code_edit_class_set_line_as_executing),
	JS_CFUNC_DEF("is_line_executing", 1, &code_edit_class_is_line_executing),
	JS_CFUNC_DEF("clear_executing_lines", 0, &code_edit_class_clear_executing_lines),
	JS_CFUNC_DEF("get_executing_lines", 0, &code_edit_class_get_executing_lines),
	JS_CFUNC_DEF("set_draw_line_numbers", 1, &code_edit_class_set_draw_line_numbers),
	JS_CFUNC_DEF("is_draw_line_numbers_enabled", 0, &code_edit_class_is_draw_line_numbers_enabled),
	JS_CFUNC_DEF("set_line_numbers_zero_padded", 1, &code_edit_class_set_line_numbers_zero_padded),
	JS_CFUNC_DEF("is_line_numbers_zero_padded", 0, &code_edit_class_is_line_numbers_zero_padded),
	JS_CFUNC_DEF("set_draw_fold_gutter", 1, &code_edit_class_set_draw_fold_gutter),
	JS_CFUNC_DEF("is_drawing_fold_gutter", 0, &code_edit_class_is_drawing_fold_gutter),
	JS_CFUNC_DEF("set_line_folding_enabled", 1, &code_edit_class_set_line_folding_enabled),
	JS_CFUNC_DEF("is_line_folding_enabled", 0, &code_edit_class_is_line_folding_enabled),
	JS_CFUNC_DEF("can_fold_line", 1, &code_edit_class_can_fold_line),
	JS_CFUNC_DEF("fold_line", 1, &code_edit_class_fold_line),
	JS_CFUNC_DEF("unfold_line", 1, &code_edit_class_unfold_line),
	JS_CFUNC_DEF("fold_all_lines", 0, &code_edit_class_fold_all_lines),
	JS_CFUNC_DEF("unfold_all_lines", 0, &code_edit_class_unfold_all_lines),
	JS_CFUNC_DEF("toggle_foldable_line", 1, &code_edit_class_toggle_foldable_line),
	JS_CFUNC_DEF("toggle_foldable_lines_at_carets", 0, &code_edit_class_toggle_foldable_lines_at_carets),
	JS_CFUNC_DEF("is_line_folded", 1, &code_edit_class_is_line_folded),
	JS_CFUNC_DEF("get_folded_lines", 0, &code_edit_class_get_folded_lines),
	JS_CFUNC_DEF("create_code_region", 0, &code_edit_class_create_code_region),
	JS_CFUNC_DEF("get_code_region_start_tag", 0, &code_edit_class_get_code_region_start_tag),
	JS_CFUNC_DEF("get_code_region_end_tag", 0, &code_edit_class_get_code_region_end_tag),
	JS_CFUNC_DEF("set_code_region_tags", 2, &code_edit_class_set_code_region_tags),
	JS_CFUNC_DEF("is_line_code_region_start", 1, &code_edit_class_is_line_code_region_start),
	JS_CFUNC_DEF("is_line_code_region_end", 1, &code_edit_class_is_line_code_region_end),
	JS_CFUNC_DEF("add_string_delimiter", 3, &code_edit_class_add_string_delimiter),
	JS_CFUNC_DEF("remove_string_delimiter", 1, &code_edit_class_remove_string_delimiter),
	JS_CFUNC_DEF("has_string_delimiter", 1, &code_edit_class_has_string_delimiter),
	JS_CFUNC_DEF("set_string_delimiters", 1, &code_edit_class_set_string_delimiters),
	JS_CFUNC_DEF("clear_string_delimiters", 0, &code_edit_class_clear_string_delimiters),
	JS_CFUNC_DEF("get_string_delimiters", 0, &code_edit_class_get_string_delimiters),
	JS_CFUNC_DEF("is_in_string", 2, &code_edit_class_is_in_string),
	JS_CFUNC_DEF("add_comment_delimiter", 3, &code_edit_class_add_comment_delimiter),
	JS_CFUNC_DEF("remove_comment_delimiter", 1, &code_edit_class_remove_comment_delimiter),
	JS_CFUNC_DEF("has_comment_delimiter", 1, &code_edit_class_has_comment_delimiter),
	JS_CFUNC_DEF("set_comment_delimiters", 1, &code_edit_class_set_comment_delimiters),
	JS_CFUNC_DEF("clear_comment_delimiters", 0, &code_edit_class_clear_comment_delimiters),
	JS_CFUNC_DEF("get_comment_delimiters", 0, &code_edit_class_get_comment_delimiters),
	JS_CFUNC_DEF("is_in_comment", 2, &code_edit_class_is_in_comment),
	JS_CFUNC_DEF("get_delimiter_start_key", 1, &code_edit_class_get_delimiter_start_key),
	JS_CFUNC_DEF("get_delimiter_end_key", 1, &code_edit_class_get_delimiter_end_key),
	JS_CFUNC_DEF("get_delimiter_start_position", 2, &code_edit_class_get_delimiter_start_position),
	JS_CFUNC_DEF("get_delimiter_end_position", 2, &code_edit_class_get_delimiter_end_position),
	JS_CFUNC_DEF("set_code_hint", 1, &code_edit_class_set_code_hint),
	JS_CFUNC_DEF("set_code_hint_draw_below", 1, &code_edit_class_set_code_hint_draw_below),
	JS_CFUNC_DEF("get_text_for_code_completion", 0, &code_edit_class_get_text_for_code_completion),
	JS_CFUNC_DEF("request_code_completion", 1, &code_edit_class_request_code_completion),
	JS_CFUNC_DEF("add_code_completion_option", 7, &code_edit_class_add_code_completion_option),
	JS_CFUNC_DEF("update_code_completion_options", 1, &code_edit_class_update_code_completion_options),
	JS_CFUNC_DEF("get_code_completion_options", 0, &code_edit_class_get_code_completion_options),
	JS_CFUNC_DEF("get_code_completion_option", 1, &code_edit_class_get_code_completion_option),
	JS_CFUNC_DEF("get_code_completion_selected_index", 0, &code_edit_class_get_code_completion_selected_index),
	JS_CFUNC_DEF("set_code_completion_selected_index", 1, &code_edit_class_set_code_completion_selected_index),
	JS_CFUNC_DEF("confirm_code_completion", 1, &code_edit_class_confirm_code_completion),
	JS_CFUNC_DEF("cancel_code_completion", 0, &code_edit_class_cancel_code_completion),
	JS_CFUNC_DEF("set_code_completion_enabled", 1, &code_edit_class_set_code_completion_enabled),
	JS_CFUNC_DEF("is_code_completion_enabled", 0, &code_edit_class_is_code_completion_enabled),
	JS_CFUNC_DEF("set_code_completion_prefixes", 1, &code_edit_class_set_code_completion_prefixes),
	JS_CFUNC_DEF("get_code_completion_prefixes", 0, &code_edit_class_get_code_completion_prefixes),
	JS_CFUNC_DEF("set_line_length_guidelines", 1, &code_edit_class_set_line_length_guidelines),
	JS_CFUNC_DEF("get_line_length_guidelines", 0, &code_edit_class_get_line_length_guidelines),
	JS_CFUNC_DEF("set_symbol_lookup_on_click_enabled", 1, &code_edit_class_set_symbol_lookup_on_click_enabled),
	JS_CFUNC_DEF("is_symbol_lookup_on_click_enabled", 0, &code_edit_class_is_symbol_lookup_on_click_enabled),
	JS_CFUNC_DEF("get_text_for_symbol_lookup", 0, &code_edit_class_get_text_for_symbol_lookup),
	JS_CFUNC_DEF("get_text_with_cursor_char", 2, &code_edit_class_get_text_with_cursor_char),
	JS_CFUNC_DEF("set_symbol_lookup_word_as_valid", 1, &code_edit_class_set_symbol_lookup_word_as_valid),
	JS_CFUNC_DEF("move_lines_up", 0, &code_edit_class_move_lines_up),
	JS_CFUNC_DEF("move_lines_down", 0, &code_edit_class_move_lines_down),
	JS_CFUNC_DEF("delete_lines", 0, &code_edit_class_delete_lines),
	JS_CFUNC_DEF("duplicate_selection", 0, &code_edit_class_duplicate_selection),
	JS_CFUNC_DEF("duplicate_lines", 0, &code_edit_class_duplicate_lines),
};

static int js_code_edit_class_init(JSContext *ctx, JSModuleDef *m) {
	JS_NewClassID(&CodeEdit::__class_id);
	classes["CodeEdit"] = CodeEdit::__class_id;
	JS_NewClass(JS_GetRuntime(ctx), CodeEdit::__class_id, &code_edit_class_def);

	JSValue proto = JS_NewObject(ctx);
	JSValue base_class = JS_GetClassProto(ctx, TextEdit::__class_id);
	JS_SetPrototype(ctx, proto, base_class);
	JS_SetClassProto(ctx, CodeEdit::__class_id, proto);
	JS_SetPropertyFunctionList(ctx, proto, code_edit_class_proto_funcs, _countof(code_edit_class_proto_funcs));

	JSValue ctor = JS_NewCFunction2(ctx, code_edit_class_constructor, "CodeEdit", 0, JS_CFUNC_constructor, 0);

	JS_SetModuleExport(ctx, m, "CodeEdit", ctor);

	return 0;
}

JSModuleDef *_js_init_code_edit_module(JSContext *ctx, const char *module_name) {
	JSModuleDef *m = JS_NewCModule(ctx, module_name, js_code_edit_class_init);
	if (!m)
		return NULL;
	JS_AddModuleExport(ctx, m, "CodeEdit");
	return m;
}

JSModuleDef *js_init_code_edit_module(JSContext *ctx) {
	return _js_init_code_edit_module(ctx, "godot/classes/code_edit");
}

void register_code_edit() {
	js_init_code_edit_module(ctx);
}