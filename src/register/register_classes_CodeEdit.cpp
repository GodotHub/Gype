
#include <godot_cpp/classes/code_edit.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/text_edit.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/packed_int32_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <string>
#include <utility>

#include "qjspp.hpp"
#include "qjspp/utils.h"
#include "register/register_classes.h"

using namespace godot;

void register_classes_CodeEdit() {
	qjs::Context::Module &_module = get_Control_module();
	_module.class_<CodeEdit>("CodeEdit")
			.constructor<>()
			.base<TextEdit>()
			.property<static_cast<bool (CodeEdit::*)() const>(&CodeEdit::is_symbol_lookup_on_click_enabled), static_cast<void (CodeEdit::*)(bool)>(&CodeEdit::set_symbol_lookup_on_click_enabled)>((new std::string("symbol_lookup_on_click"))->c_str())
			.property<static_cast<bool (CodeEdit::*)() const>(&CodeEdit::is_line_folding_enabled), static_cast<void (CodeEdit::*)(bool)>(&CodeEdit::set_line_folding_enabled)>((new std::string("line_folding"))->c_str())
			.property<static_cast<TypedArray<int> (CodeEdit::*)() const>(&CodeEdit::get_line_length_guidelines), static_cast<void (CodeEdit::*)(const TypedArray<int> &)>(&CodeEdit::set_line_length_guidelines)>((new std::string("line_length_guidelines"))->c_str())
			.property<static_cast<bool (CodeEdit::*)() const>(&CodeEdit::is_drawing_breakpoints_gutter), static_cast<void (CodeEdit::*)(bool)>(&CodeEdit::set_draw_breakpoints_gutter)>((new std::string("gutters_draw_breakpoints_gutter"))->c_str())
			.property<static_cast<bool (CodeEdit::*)() const>(&CodeEdit::is_drawing_bookmarks_gutter), static_cast<void (CodeEdit::*)(bool)>(&CodeEdit::set_draw_bookmarks_gutter)>((new std::string("gutters_draw_bookmarks"))->c_str())
			.property<static_cast<bool (CodeEdit::*)() const>(&CodeEdit::is_drawing_executing_lines_gutter), static_cast<void (CodeEdit::*)(bool)>(&CodeEdit::set_draw_executing_lines_gutter)>((new std::string("gutters_draw_executing_lines"))->c_str())
			.property<static_cast<bool (CodeEdit::*)() const>(&CodeEdit::is_draw_line_numbers_enabled), static_cast<void (CodeEdit::*)(bool)>(&CodeEdit::set_draw_line_numbers)>((new std::string("gutters_draw_line_numbers"))->c_str())
			.property<static_cast<bool (CodeEdit::*)() const>(&CodeEdit::is_line_numbers_zero_padded), static_cast<void (CodeEdit::*)(bool)>(&CodeEdit::set_line_numbers_zero_padded)>((new std::string("gutters_zero_pad_line_numbers"))->c_str())
			.property<static_cast<bool (CodeEdit::*)() const>(&CodeEdit::is_drawing_fold_gutter), static_cast<void (CodeEdit::*)(bool)>(&CodeEdit::set_draw_fold_gutter)>((new std::string("gutters_draw_fold_gutter"))->c_str())
			.property<static_cast<TypedArray<String> (CodeEdit::*)() const>(&CodeEdit::get_string_delimiters), static_cast<void (CodeEdit::*)(const TypedArray<String> &)>(&CodeEdit::set_string_delimiters)>((new std::string("delimiter_strings"))->c_str())
			.property<static_cast<TypedArray<String> (CodeEdit::*)() const>(&CodeEdit::get_comment_delimiters), static_cast<void (CodeEdit::*)(const TypedArray<String> &)>(&CodeEdit::set_comment_delimiters)>((new std::string("delimiter_comments"))->c_str())
			.property<static_cast<bool (CodeEdit::*)() const>(&CodeEdit::is_code_completion_enabled), static_cast<void (CodeEdit::*)(bool)>(&CodeEdit::set_code_completion_enabled)>((new std::string("code_completion_enabled"))->c_str())
			.property<static_cast<TypedArray<String> (CodeEdit::*)() const>(&CodeEdit::get_code_completion_prefixes), static_cast<void (CodeEdit::*)(const TypedArray<String> &)>(&CodeEdit::set_code_completion_prefixes)>((new std::string("code_completion_prefixes"))->c_str())
			.property<static_cast<int32_t (CodeEdit::*)() const>(&CodeEdit::get_indent_size), static_cast<void (CodeEdit::*)(int32_t)>(&CodeEdit::set_indent_size)>((new std::string("indent_size"))->c_str())
			.property<static_cast<bool (CodeEdit::*)() const>(&CodeEdit::is_indent_using_spaces), static_cast<void (CodeEdit::*)(bool)>(&CodeEdit::set_indent_using_spaces)>((new std::string("indent_use_spaces"))->c_str())
			.property<static_cast<bool (CodeEdit::*)() const>(&CodeEdit::is_auto_indent_enabled), static_cast<void (CodeEdit::*)(bool)>(&CodeEdit::set_auto_indent_enabled)>((new std::string("indent_automatic"))->c_str())
			.property<static_cast<TypedArray<String> (CodeEdit::*)() const>(&CodeEdit::get_auto_indent_prefixes), static_cast<void (CodeEdit::*)(const TypedArray<String> &)>(&CodeEdit::set_auto_indent_prefixes)>((new std::string("indent_automatic_prefixes"))->c_str())
			.property<static_cast<bool (CodeEdit::*)() const>(&CodeEdit::is_auto_brace_completion_enabled), static_cast<void (CodeEdit::*)(bool)>(&CodeEdit::set_auto_brace_completion_enabled)>((new std::string("auto_brace_completion_enabled"))->c_str())
			.property<static_cast<bool (CodeEdit::*)() const>(&CodeEdit::is_highlight_matching_braces_enabled), static_cast<void (CodeEdit::*)(bool)>(&CodeEdit::set_highlight_matching_braces_enabled)>((new std::string("auto_brace_completion_highlight_matching"))->c_str())
			.property<static_cast<Dictionary (CodeEdit::*)() const>(&CodeEdit::get_auto_brace_completion_pairs), static_cast<void (CodeEdit::*)(const Dictionary &)>(&CodeEdit::set_auto_brace_completion_pairs)>((new std::string("auto_brace_completion_pairs"))->c_str())
			.fun<static_cast<void (CodeEdit::*)(bool)>(&CodeEdit::_confirm_code_completion)>((new std::string("_confirm_code_completion"))->c_str())
			.fun<static_cast<void (CodeEdit::*)(bool)>(&CodeEdit::_request_code_completion)>((new std::string("_request_code_completion"))->c_str())
			.fun<static_cast<TypedArray<Dictionary> (CodeEdit::*)(const TypedArray<Dictionary> &) const>(&CodeEdit::_filter_code_completion_candidates)>((new std::string("_filter_code_completion_candidates"))->c_str())
			.fun<static_cast<void (CodeEdit::*)()>(&CodeEdit::do_indent)>((new std::string("do_indent"))->c_str())
			.fun<static_cast<void (CodeEdit::*)()>(&CodeEdit::indent_lines)>((new std::string("indent_lines"))->c_str())
			.fun<static_cast<void (CodeEdit::*)()>(&CodeEdit::unindent_lines)>((new std::string("unindent_lines"))->c_str())
			.fun<static_cast<void (CodeEdit::*)(int32_t, int32_t)>(&CodeEdit::convert_indent)>((new std::string("convert_indent"))->c_str())
			.fun<static_cast<void (CodeEdit::*)(const String &, const String &)>(&CodeEdit::add_auto_brace_completion_pair)>((new std::string("add_auto_brace_completion_pair"))->c_str())
			.fun<static_cast<bool (CodeEdit::*)(const String &) const>(&CodeEdit::has_auto_brace_completion_open_key)>((new std::string("has_auto_brace_completion_open_key"))->c_str())
			.fun<static_cast<bool (CodeEdit::*)(const String &) const>(&CodeEdit::has_auto_brace_completion_close_key)>((new std::string("has_auto_brace_completion_close_key"))->c_str())
			.fun<static_cast<String (CodeEdit::*)(const String &) const>(&CodeEdit::get_auto_brace_completion_close_key)>((new std::string("get_auto_brace_completion_close_key"))->c_str())
			.fun<static_cast<void (CodeEdit::*)(int32_t, bool)>(&CodeEdit::set_line_as_breakpoint)>((new std::string("set_line_as_breakpoint"))->c_str())
			.fun<static_cast<bool (CodeEdit::*)(int32_t) const>(&CodeEdit::is_line_breakpointed)>((new std::string("is_line_breakpointed"))->c_str())
			.fun<static_cast<void (CodeEdit::*)()>(&CodeEdit::clear_breakpointed_lines)>((new std::string("clear_breakpointed_lines"))->c_str())
			.fun<static_cast<PackedInt32Array (CodeEdit::*)() const>(&CodeEdit::get_breakpointed_lines)>((new std::string("get_breakpointed_lines"))->c_str())
			.fun<static_cast<void (CodeEdit::*)(int32_t, bool)>(&CodeEdit::set_line_as_bookmarked)>((new std::string("set_line_as_bookmarked"))->c_str())
			.fun<static_cast<bool (CodeEdit::*)(int32_t) const>(&CodeEdit::is_line_bookmarked)>((new std::string("is_line_bookmarked"))->c_str())
			.fun<static_cast<void (CodeEdit::*)()>(&CodeEdit::clear_bookmarked_lines)>((new std::string("clear_bookmarked_lines"))->c_str())
			.fun<static_cast<PackedInt32Array (CodeEdit::*)() const>(&CodeEdit::get_bookmarked_lines)>((new std::string("get_bookmarked_lines"))->c_str())
			.fun<static_cast<void (CodeEdit::*)(int32_t, bool)>(&CodeEdit::set_line_as_executing)>((new std::string("set_line_as_executing"))->c_str())
			.fun<static_cast<bool (CodeEdit::*)(int32_t) const>(&CodeEdit::is_line_executing)>((new std::string("is_line_executing"))->c_str())
			.fun<static_cast<void (CodeEdit::*)()>(&CodeEdit::clear_executing_lines)>((new std::string("clear_executing_lines"))->c_str())
			.fun<static_cast<PackedInt32Array (CodeEdit::*)() const>(&CodeEdit::get_executing_lines)>((new std::string("get_executing_lines"))->c_str())
			.fun<static_cast<bool (CodeEdit::*)(int32_t) const>(&CodeEdit::can_fold_line)>((new std::string("can_fold_line"))->c_str())
			.fun<static_cast<void (CodeEdit::*)(int32_t)>(&CodeEdit::fold_line)>((new std::string("fold_line"))->c_str())
			.fun<static_cast<void (CodeEdit::*)(int32_t)>(&CodeEdit::unfold_line)>((new std::string("unfold_line"))->c_str())
			.fun<static_cast<void (CodeEdit::*)()>(&CodeEdit::fold_all_lines)>((new std::string("fold_all_lines"))->c_str())
			.fun<static_cast<void (CodeEdit::*)()>(&CodeEdit::unfold_all_lines)>((new std::string("unfold_all_lines"))->c_str())
			.fun<static_cast<void (CodeEdit::*)(int32_t)>(&CodeEdit::toggle_foldable_line)>((new std::string("toggle_foldable_line"))->c_str())
			.fun<static_cast<void (CodeEdit::*)()>(&CodeEdit::toggle_foldable_lines_at_carets)>((new std::string("toggle_foldable_lines_at_carets"))->c_str())
			.fun<static_cast<bool (CodeEdit::*)(int32_t) const>(&CodeEdit::is_line_folded)>((new std::string("is_line_folded"))->c_str())
			.fun<static_cast<TypedArray<int> (CodeEdit::*)() const>(&CodeEdit::get_folded_lines)>((new std::string("get_folded_lines"))->c_str())
			.fun<static_cast<void (CodeEdit::*)()>(&CodeEdit::create_code_region)>((new std::string("create_code_region"))->c_str())
			.fun<static_cast<String (CodeEdit::*)() const>(&CodeEdit::get_code_region_start_tag)>((new std::string("get_code_region_start_tag"))->c_str())
			.fun<static_cast<String (CodeEdit::*)() const>(&CodeEdit::get_code_region_end_tag)>((new std::string("get_code_region_end_tag"))->c_str())
			.fun<static_cast<void (CodeEdit::*)(const String &, const String &)>(&CodeEdit::set_code_region_tags)>((new std::string("set_code_region_tags"))->c_str())
			.fun<static_cast<bool (CodeEdit::*)(int32_t) const>(&CodeEdit::is_line_code_region_start)>((new std::string("is_line_code_region_start"))->c_str())
			.fun<static_cast<bool (CodeEdit::*)(int32_t) const>(&CodeEdit::is_line_code_region_end)>((new std::string("is_line_code_region_end"))->c_str())
			.fun<static_cast<void (CodeEdit::*)(const String &, const String &, bool)>(&CodeEdit::add_string_delimiter)>((new std::string("add_string_delimiter"))->c_str())
			.fun<static_cast<void (CodeEdit::*)(const String &)>(&CodeEdit::remove_string_delimiter)>((new std::string("remove_string_delimiter"))->c_str())
			.fun<static_cast<bool (CodeEdit::*)(const String &) const>(&CodeEdit::has_string_delimiter)>((new std::string("has_string_delimiter"))->c_str())
			.fun<static_cast<void (CodeEdit::*)()>(&CodeEdit::clear_string_delimiters)>((new std::string("clear_string_delimiters"))->c_str())
			.fun<static_cast<int32_t (CodeEdit::*)(int32_t, int32_t) const>(&CodeEdit::is_in_string)>((new std::string("is_in_string"))->c_str())
			.fun<static_cast<void (CodeEdit::*)(const String &, const String &, bool)>(&CodeEdit::add_comment_delimiter)>((new std::string("add_comment_delimiter"))->c_str())
			.fun<static_cast<void (CodeEdit::*)(const String &)>(&CodeEdit::remove_comment_delimiter)>((new std::string("remove_comment_delimiter"))->c_str())
			.fun<static_cast<bool (CodeEdit::*)(const String &) const>(&CodeEdit::has_comment_delimiter)>((new std::string("has_comment_delimiter"))->c_str())
			.fun<static_cast<void (CodeEdit::*)()>(&CodeEdit::clear_comment_delimiters)>((new std::string("clear_comment_delimiters"))->c_str())
			.fun<static_cast<int32_t (CodeEdit::*)(int32_t, int32_t) const>(&CodeEdit::is_in_comment)>((new std::string("is_in_comment"))->c_str())
			.fun<static_cast<String (CodeEdit::*)(int32_t) const>(&CodeEdit::get_delimiter_start_key)>((new std::string("get_delimiter_start_key"))->c_str())
			.fun<static_cast<String (CodeEdit::*)(int32_t) const>(&CodeEdit::get_delimiter_end_key)>((new std::string("get_delimiter_end_key"))->c_str())
			.fun<static_cast<Vector2 (CodeEdit::*)(int32_t, int32_t) const>(&CodeEdit::get_delimiter_start_position)>((new std::string("get_delimiter_start_position"))->c_str())
			.fun<static_cast<Vector2 (CodeEdit::*)(int32_t, int32_t) const>(&CodeEdit::get_delimiter_end_position)>((new std::string("get_delimiter_end_position"))->c_str())
			.fun<static_cast<void (CodeEdit::*)(const String &)>(&CodeEdit::set_code_hint)>((new std::string("set_code_hint"))->c_str())
			.fun<static_cast<void (CodeEdit::*)(bool)>(&CodeEdit::set_code_hint_draw_below)>((new std::string("set_code_hint_draw_below"))->c_str())
			.fun<static_cast<String (CodeEdit::*)() const>(&CodeEdit::get_text_for_code_completion)>((new std::string("get_text_for_code_completion"))->c_str())
			.fun<static_cast<void (CodeEdit::*)(bool)>(&CodeEdit::request_code_completion)>((new std::string("request_code_completion"))->c_str())
			.fun<static_cast<void (CodeEdit::*)(CodeEdit::CodeCompletionKind, const String &, const String &, const Color &, const Ref<Resource> &, const Variant &, int32_t)>(&CodeEdit::add_code_completion_option)>((new std::string("add_code_completion_option"))->c_str())
			.fun<static_cast<void (CodeEdit::*)(bool)>(&CodeEdit::update_code_completion_options)>((new std::string("update_code_completion_options"))->c_str())
			.fun<static_cast<TypedArray<Dictionary> (CodeEdit::*)() const>(&CodeEdit::get_code_completion_options)>((new std::string("get_code_completion_options"))->c_str())
			.fun<static_cast<Dictionary (CodeEdit::*)(int32_t) const>(&CodeEdit::get_code_completion_option)>((new std::string("get_code_completion_option"))->c_str())
			.fun<static_cast<int32_t (CodeEdit::*)() const>(&CodeEdit::get_code_completion_selected_index)>((new std::string("get_code_completion_selected_index"))->c_str())
			.fun<static_cast<void (CodeEdit::*)(int32_t)>(&CodeEdit::set_code_completion_selected_index)>((new std::string("set_code_completion_selected_index"))->c_str())
			.fun<static_cast<void (CodeEdit::*)(bool)>(&CodeEdit::confirm_code_completion)>((new std::string("confirm_code_completion"))->c_str())
			.fun<static_cast<void (CodeEdit::*)()>(&CodeEdit::cancel_code_completion)>((new std::string("cancel_code_completion"))->c_str())
			.fun<static_cast<String (CodeEdit::*)() const>(&CodeEdit::get_text_for_symbol_lookup)>((new std::string("get_text_for_symbol_lookup"))->c_str())
			.fun<static_cast<String (CodeEdit::*)(int32_t, int32_t) const>(&CodeEdit::get_text_with_cursor_char)>((new std::string("get_text_with_cursor_char"))->c_str())
			.fun<static_cast<void (CodeEdit::*)(bool)>(&CodeEdit::set_symbol_lookup_word_as_valid)>((new std::string("set_symbol_lookup_word_as_valid"))->c_str())
			.fun<static_cast<void (CodeEdit::*)()>(&CodeEdit::move_lines_up)>((new std::string("move_lines_up"))->c_str())
			.fun<static_cast<void (CodeEdit::*)()>(&CodeEdit::move_lines_down)>((new std::string("move_lines_down"))->c_str())
			.fun<static_cast<void (CodeEdit::*)()>(&CodeEdit::delete_lines)>((new std::string("delete_lines"))->c_str())
			.fun<static_cast<void (CodeEdit::*)()>(&CodeEdit::duplicate_selection)>((new std::string("duplicate_selection"))->c_str())
			.fun<static_cast<void (CodeEdit::*)()>(&CodeEdit::duplicate_lines)>((new std::string("duplicate_lines"))->c_str());
	qjs::Value _CodeCompletionKind = context->newObject();
	_CodeCompletionKind[(new std::string("KIND_CLASS"))->c_str()] = CodeEdit::CodeCompletionKind::KIND_CLASS;
	_CodeCompletionKind[(new std::string("KIND_FUNCTION"))->c_str()] = CodeEdit::CodeCompletionKind::KIND_FUNCTION;
	_CodeCompletionKind[(new std::string("KIND_SIGNAL"))->c_str()] = CodeEdit::CodeCompletionKind::KIND_SIGNAL;
	_CodeCompletionKind[(new std::string("KIND_VARIABLE"))->c_str()] = CodeEdit::CodeCompletionKind::KIND_VARIABLE;
	_CodeCompletionKind[(new std::string("KIND_MEMBER"))->c_str()] = CodeEdit::CodeCompletionKind::KIND_MEMBER;
	_CodeCompletionKind[(new std::string("KIND_ENUM"))->c_str()] = CodeEdit::CodeCompletionKind::KIND_ENUM;
	_CodeCompletionKind[(new std::string("KIND_CONSTANT"))->c_str()] = CodeEdit::CodeCompletionKind::KIND_CONSTANT;
	_CodeCompletionKind[(new std::string("KIND_NODE_PATH"))->c_str()] = CodeEdit::CodeCompletionKind::KIND_NODE_PATH;
	_CodeCompletionKind[(new std::string("KIND_FILE_PATH"))->c_str()] = CodeEdit::CodeCompletionKind::KIND_FILE_PATH;
	_CodeCompletionKind[(new std::string("KIND_PLAIN_TEXT"))->c_str()] = CodeEdit::CodeCompletionKind::KIND_PLAIN_TEXT;
	_module.add("CodeCompletionKind", std::move(_CodeCompletionKind));
	qjs::Value _CodeCompletionLocation = context->newObject();
	_CodeCompletionLocation[(new std::string("LOCATION_LOCAL"))->c_str()] = CodeEdit::CodeCompletionLocation::LOCATION_LOCAL;
	_CodeCompletionLocation[(new std::string("LOCATION_PARENT_MASK"))->c_str()] = CodeEdit::CodeCompletionLocation::LOCATION_PARENT_MASK;
	_CodeCompletionLocation[(new std::string("LOCATION_OTHER_USER_CODE"))->c_str()] = CodeEdit::CodeCompletionLocation::LOCATION_OTHER_USER_CODE;
	_CodeCompletionLocation[(new std::string("LOCATION_OTHER"))->c_str()] = CodeEdit::CodeCompletionLocation::LOCATION_OTHER;
	_module.add("CodeCompletionLocation", std::move(_CodeCompletionLocation));
}