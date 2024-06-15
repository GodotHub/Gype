#include <godot_cpp/classes/code_edit.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/variant/vector2.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/classes/text_edit.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/packed_int32_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <stdint.h>
#include <utility>

#include "register/register_classes.h"
#include "qjspp/utils.h"
#include "qjspp.hpp"

using namespace godot;

void register_classes_CodeEdit() {
    qjs::Context::Module &_module = get_Control_module();
    _module.class_<CodeEdit>("CodeEdit")
            .constructor<>()
            .base<TextEdit>()
            .property<static_cast<bool(CodeEdit::*)()const>(&CodeEdit::is_symbol_lookup_on_click_enabled),static_cast<void(CodeEdit::*)(bool)>(&CodeEdit::set_symbol_lookup_on_click_enabled)>("symbol_lookup_on_click")
            .property<static_cast<bool(CodeEdit::*)()const>(&CodeEdit::is_line_folding_enabled),static_cast<void(CodeEdit::*)(bool)>(&CodeEdit::set_line_folding_enabled)>("line_folding")
            .property<static_cast<TypedArray<int>(CodeEdit::*)()const>(&CodeEdit::get_line_length_guidelines),static_cast<void(CodeEdit::*)(const TypedArray<int> &)>(&CodeEdit::set_line_length_guidelines)>("line_length_guidelines")
            .property<static_cast<bool(CodeEdit::*)()const>(&CodeEdit::is_drawing_breakpoints_gutter),static_cast<void(CodeEdit::*)(bool)>(&CodeEdit::set_draw_breakpoints_gutter)>("gutters_draw_breakpoints_gutter")
            .property<static_cast<bool(CodeEdit::*)()const>(&CodeEdit::is_drawing_bookmarks_gutter),static_cast<void(CodeEdit::*)(bool)>(&CodeEdit::set_draw_bookmarks_gutter)>("gutters_draw_bookmarks")
            .property<static_cast<bool(CodeEdit::*)()const>(&CodeEdit::is_drawing_executing_lines_gutter),static_cast<void(CodeEdit::*)(bool)>(&CodeEdit::set_draw_executing_lines_gutter)>("gutters_draw_executing_lines")
            .property<static_cast<bool(CodeEdit::*)()const>(&CodeEdit::is_draw_line_numbers_enabled),static_cast<void(CodeEdit::*)(bool)>(&CodeEdit::set_draw_line_numbers)>("gutters_draw_line_numbers")
            .property<static_cast<bool(CodeEdit::*)()const>(&CodeEdit::is_line_numbers_zero_padded),static_cast<void(CodeEdit::*)(bool)>(&CodeEdit::set_line_numbers_zero_padded)>("gutters_zero_pad_line_numbers")
            .property<static_cast<bool(CodeEdit::*)()const>(&CodeEdit::is_drawing_fold_gutter),static_cast<void(CodeEdit::*)(bool)>(&CodeEdit::set_draw_fold_gutter)>("gutters_draw_fold_gutter")
            .property<static_cast<TypedArray<String>(CodeEdit::*)()const>(&CodeEdit::get_string_delimiters),static_cast<void(CodeEdit::*)(const TypedArray<String> &)>(&CodeEdit::set_string_delimiters)>("delimiter_strings")
            .property<static_cast<TypedArray<String>(CodeEdit::*)()const>(&CodeEdit::get_comment_delimiters),static_cast<void(CodeEdit::*)(const TypedArray<String> &)>(&CodeEdit::set_comment_delimiters)>("delimiter_comments")
            .property<static_cast<bool(CodeEdit::*)()const>(&CodeEdit::is_code_completion_enabled),static_cast<void(CodeEdit::*)(bool)>(&CodeEdit::set_code_completion_enabled)>("code_completion_enabled")
            .property<static_cast<TypedArray<String>(CodeEdit::*)()const>(&CodeEdit::get_code_completion_prefixes),static_cast<void(CodeEdit::*)(const TypedArray<String> &)>(&CodeEdit::set_code_completion_prefixes)>("code_completion_prefixes")
            .property<static_cast<int32_t(CodeEdit::*)()const>(&CodeEdit::get_indent_size),static_cast<void(CodeEdit::*)(int32_t)>(&CodeEdit::set_indent_size)>("indent_size")
            .property<static_cast<bool(CodeEdit::*)()const>(&CodeEdit::is_indent_using_spaces),static_cast<void(CodeEdit::*)(bool)>(&CodeEdit::set_indent_using_spaces)>("indent_use_spaces")
            .property<static_cast<bool(CodeEdit::*)()const>(&CodeEdit::is_auto_indent_enabled),static_cast<void(CodeEdit::*)(bool)>(&CodeEdit::set_auto_indent_enabled)>("indent_automatic")
            .property<static_cast<TypedArray<String>(CodeEdit::*)()const>(&CodeEdit::get_auto_indent_prefixes),static_cast<void(CodeEdit::*)(const TypedArray<String> &)>(&CodeEdit::set_auto_indent_prefixes)>("indent_automatic_prefixes")
            .property<static_cast<bool(CodeEdit::*)()const>(&CodeEdit::is_auto_brace_completion_enabled),static_cast<void(CodeEdit::*)(bool)>(&CodeEdit::set_auto_brace_completion_enabled)>("auto_brace_completion_enabled")
            .property<static_cast<bool(CodeEdit::*)()const>(&CodeEdit::is_highlight_matching_braces_enabled),static_cast<void(CodeEdit::*)(bool)>(&CodeEdit::set_highlight_matching_braces_enabled)>("auto_brace_completion_highlight_matching")
            .property<static_cast<Dictionary(CodeEdit::*)()const>(&CodeEdit::get_auto_brace_completion_pairs),static_cast<void(CodeEdit::*)(const Dictionary &)>(&CodeEdit::set_auto_brace_completion_pairs)>("auto_brace_completion_pairs")
            .fun<static_cast<void(CodeEdit::*)(bool)>(&CodeEdit::_confirm_code_completion)>("_confirm_code_completion")
            .fun<static_cast<void(CodeEdit::*)(bool)>(&CodeEdit::_request_code_completion)>("_request_code_completion")
            .fun<static_cast<TypedArray<Dictionary>(CodeEdit::*)(const TypedArray<Dictionary> &)const>(&CodeEdit::_filter_code_completion_candidates)>("_filter_code_completion_candidates")
            .fun<static_cast<void(CodeEdit::*)()>(&CodeEdit::do_indent)>("do_indent")
            .fun<static_cast<void(CodeEdit::*)()>(&CodeEdit::indent_lines)>("indent_lines")
            .fun<static_cast<void(CodeEdit::*)()>(&CodeEdit::unindent_lines)>("unindent_lines")
            .fun<static_cast<void(CodeEdit::*)(int32_t,int32_t)>(&CodeEdit::convert_indent)>("convert_indent")
            .fun<static_cast<void(CodeEdit::*)(const String &,const String &)>(&CodeEdit::add_auto_brace_completion_pair)>("add_auto_brace_completion_pair")
            .fun<static_cast<bool(CodeEdit::*)(const String &)const>(&CodeEdit::has_auto_brace_completion_open_key)>("has_auto_brace_completion_open_key")
            .fun<static_cast<bool(CodeEdit::*)(const String &)const>(&CodeEdit::has_auto_brace_completion_close_key)>("has_auto_brace_completion_close_key")
            .fun<static_cast<String(CodeEdit::*)(const String &)const>(&CodeEdit::get_auto_brace_completion_close_key)>("get_auto_brace_completion_close_key")
            .fun<static_cast<void(CodeEdit::*)(int32_t,bool)>(&CodeEdit::set_line_as_breakpoint)>("set_line_as_breakpoint")
            .fun<static_cast<bool(CodeEdit::*)(int32_t)const>(&CodeEdit::is_line_breakpointed)>("is_line_breakpointed")
            .fun<static_cast<void(CodeEdit::*)()>(&CodeEdit::clear_breakpointed_lines)>("clear_breakpointed_lines")
            .fun<static_cast<PackedInt32Array(CodeEdit::*)()const>(&CodeEdit::get_breakpointed_lines)>("get_breakpointed_lines")
            .fun<static_cast<void(CodeEdit::*)(int32_t,bool)>(&CodeEdit::set_line_as_bookmarked)>("set_line_as_bookmarked")
            .fun<static_cast<bool(CodeEdit::*)(int32_t)const>(&CodeEdit::is_line_bookmarked)>("is_line_bookmarked")
            .fun<static_cast<void(CodeEdit::*)()>(&CodeEdit::clear_bookmarked_lines)>("clear_bookmarked_lines")
            .fun<static_cast<PackedInt32Array(CodeEdit::*)()const>(&CodeEdit::get_bookmarked_lines)>("get_bookmarked_lines")
            .fun<static_cast<void(CodeEdit::*)(int32_t,bool)>(&CodeEdit::set_line_as_executing)>("set_line_as_executing")
            .fun<static_cast<bool(CodeEdit::*)(int32_t)const>(&CodeEdit::is_line_executing)>("is_line_executing")
            .fun<static_cast<void(CodeEdit::*)()>(&CodeEdit::clear_executing_lines)>("clear_executing_lines")
            .fun<static_cast<PackedInt32Array(CodeEdit::*)()const>(&CodeEdit::get_executing_lines)>("get_executing_lines")
            .fun<static_cast<bool(CodeEdit::*)(int32_t)const>(&CodeEdit::can_fold_line)>("can_fold_line")
            .fun<static_cast<void(CodeEdit::*)(int32_t)>(&CodeEdit::fold_line)>("fold_line")
            .fun<static_cast<void(CodeEdit::*)(int32_t)>(&CodeEdit::unfold_line)>("unfold_line")
            .fun<static_cast<void(CodeEdit::*)()>(&CodeEdit::fold_all_lines)>("fold_all_lines")
            .fun<static_cast<void(CodeEdit::*)()>(&CodeEdit::unfold_all_lines)>("unfold_all_lines")
            .fun<static_cast<void(CodeEdit::*)(int32_t)>(&CodeEdit::toggle_foldable_line)>("toggle_foldable_line")
            .fun<static_cast<void(CodeEdit::*)()>(&CodeEdit::toggle_foldable_lines_at_carets)>("toggle_foldable_lines_at_carets")
            .fun<static_cast<bool(CodeEdit::*)(int32_t)const>(&CodeEdit::is_line_folded)>("is_line_folded")
            .fun<static_cast<TypedArray<int>(CodeEdit::*)()const>(&CodeEdit::get_folded_lines)>("get_folded_lines")
            .fun<static_cast<void(CodeEdit::*)()>(&CodeEdit::create_code_region)>("create_code_region")
            .fun<static_cast<String(CodeEdit::*)()const>(&CodeEdit::get_code_region_start_tag)>("get_code_region_start_tag")
            .fun<static_cast<String(CodeEdit::*)()const>(&CodeEdit::get_code_region_end_tag)>("get_code_region_end_tag")
            .fun<static_cast<void(CodeEdit::*)(const String &,const String &)>(&CodeEdit::set_code_region_tags)>("set_code_region_tags")
            .fun<static_cast<bool(CodeEdit::*)(int32_t)const>(&CodeEdit::is_line_code_region_start)>("is_line_code_region_start")
            .fun<static_cast<bool(CodeEdit::*)(int32_t)const>(&CodeEdit::is_line_code_region_end)>("is_line_code_region_end")
            .fun<static_cast<void(CodeEdit::*)(const String &,const String &,bool)>(&CodeEdit::add_string_delimiter)>("add_string_delimiter")
            .fun<static_cast<void(CodeEdit::*)(const String &)>(&CodeEdit::remove_string_delimiter)>("remove_string_delimiter")
            .fun<static_cast<bool(CodeEdit::*)(const String &)const>(&CodeEdit::has_string_delimiter)>("has_string_delimiter")
            .fun<static_cast<void(CodeEdit::*)()>(&CodeEdit::clear_string_delimiters)>("clear_string_delimiters")
            .fun<static_cast<int32_t(CodeEdit::*)(int32_t,int32_t)const>(&CodeEdit::is_in_string)>("is_in_string")
            .fun<static_cast<void(CodeEdit::*)(const String &,const String &,bool)>(&CodeEdit::add_comment_delimiter)>("add_comment_delimiter")
            .fun<static_cast<void(CodeEdit::*)(const String &)>(&CodeEdit::remove_comment_delimiter)>("remove_comment_delimiter")
            .fun<static_cast<bool(CodeEdit::*)(const String &)const>(&CodeEdit::has_comment_delimiter)>("has_comment_delimiter")
            .fun<static_cast<void(CodeEdit::*)()>(&CodeEdit::clear_comment_delimiters)>("clear_comment_delimiters")
            .fun<static_cast<int32_t(CodeEdit::*)(int32_t,int32_t)const>(&CodeEdit::is_in_comment)>("is_in_comment")
            .fun<static_cast<String(CodeEdit::*)(int32_t)const>(&CodeEdit::get_delimiter_start_key)>("get_delimiter_start_key")
            .fun<static_cast<String(CodeEdit::*)(int32_t)const>(&CodeEdit::get_delimiter_end_key)>("get_delimiter_end_key")
            .fun<static_cast<Vector2(CodeEdit::*)(int32_t,int32_t)const>(&CodeEdit::get_delimiter_start_position)>("get_delimiter_start_position")
            .fun<static_cast<Vector2(CodeEdit::*)(int32_t,int32_t)const>(&CodeEdit::get_delimiter_end_position)>("get_delimiter_end_position")
            .fun<static_cast<void(CodeEdit::*)(const String &)>(&CodeEdit::set_code_hint)>("set_code_hint")
            .fun<static_cast<void(CodeEdit::*)(bool)>(&CodeEdit::set_code_hint_draw_below)>("set_code_hint_draw_below")
            .fun<static_cast<String(CodeEdit::*)()const>(&CodeEdit::get_text_for_code_completion)>("get_text_for_code_completion")
            .fun<static_cast<void(CodeEdit::*)(bool)>(&CodeEdit::request_code_completion)>("request_code_completion")
            .fun<static_cast<void(CodeEdit::*)(CodeEdit::CodeCompletionKind,const String &,const String &,const Color &,const Ref<Resource> &,const Variant &,int32_t)>(&CodeEdit::add_code_completion_option)>("add_code_completion_option")
            .fun<static_cast<void(CodeEdit::*)(bool)>(&CodeEdit::update_code_completion_options)>("update_code_completion_options")
            .fun<static_cast<TypedArray<Dictionary>(CodeEdit::*)()const>(&CodeEdit::get_code_completion_options)>("get_code_completion_options")
            .fun<static_cast<Dictionary(CodeEdit::*)(int32_t)const>(&CodeEdit::get_code_completion_option)>("get_code_completion_option")
            .fun<static_cast<int32_t(CodeEdit::*)()const>(&CodeEdit::get_code_completion_selected_index)>("get_code_completion_selected_index")
            .fun<static_cast<void(CodeEdit::*)(int32_t)>(&CodeEdit::set_code_completion_selected_index)>("set_code_completion_selected_index")
            .fun<static_cast<void(CodeEdit::*)(bool)>(&CodeEdit::confirm_code_completion)>("confirm_code_completion")
            .fun<static_cast<void(CodeEdit::*)()>(&CodeEdit::cancel_code_completion)>("cancel_code_completion")
            .fun<static_cast<String(CodeEdit::*)()const>(&CodeEdit::get_text_for_symbol_lookup)>("get_text_for_symbol_lookup")
            .fun<static_cast<String(CodeEdit::*)(int32_t,int32_t)const>(&CodeEdit::get_text_with_cursor_char)>("get_text_with_cursor_char")
            .fun<static_cast<void(CodeEdit::*)(bool)>(&CodeEdit::set_symbol_lookup_word_as_valid)>("set_symbol_lookup_word_as_valid")
            .fun<static_cast<void(CodeEdit::*)()>(&CodeEdit::move_lines_up)>("move_lines_up")
            .fun<static_cast<void(CodeEdit::*)()>(&CodeEdit::move_lines_down)>("move_lines_down")
            .fun<static_cast<void(CodeEdit::*)()>(&CodeEdit::delete_lines)>("delete_lines")
            .fun<static_cast<void(CodeEdit::*)()>(&CodeEdit::duplicate_selection)>("duplicate_selection")
            .fun<static_cast<void(CodeEdit::*)()>(&CodeEdit::duplicate_lines)>("duplicate_lines")
;    qjs::Value _CodeCompletionKind = context->newObject();
    _CodeCompletionKind["KIND_CLASS"] = CodeEdit::CodeCompletionKind::KIND_CLASS;
    _CodeCompletionKind["KIND_FUNCTION"] = CodeEdit::CodeCompletionKind::KIND_FUNCTION;
    _CodeCompletionKind["KIND_SIGNAL"] = CodeEdit::CodeCompletionKind::KIND_SIGNAL;
    _CodeCompletionKind["KIND_VARIABLE"] = CodeEdit::CodeCompletionKind::KIND_VARIABLE;
    _CodeCompletionKind["KIND_MEMBER"] = CodeEdit::CodeCompletionKind::KIND_MEMBER;
    _CodeCompletionKind["KIND_ENUM"] = CodeEdit::CodeCompletionKind::KIND_ENUM;
    _CodeCompletionKind["KIND_CONSTANT"] = CodeEdit::CodeCompletionKind::KIND_CONSTANT;
    _CodeCompletionKind["KIND_NODE_PATH"] = CodeEdit::CodeCompletionKind::KIND_NODE_PATH;
    _CodeCompletionKind["KIND_FILE_PATH"] = CodeEdit::CodeCompletionKind::KIND_FILE_PATH;
    _CodeCompletionKind["KIND_PLAIN_TEXT"] = CodeEdit::CodeCompletionKind::KIND_PLAIN_TEXT;
    _module.add("CodeCompletionKind", std::move(_CodeCompletionKind));
    qjs::Value _CodeCompletionLocation = context->newObject();
    _CodeCompletionLocation["LOCATION_LOCAL"] = CodeEdit::CodeCompletionLocation::LOCATION_LOCAL;
    _CodeCompletionLocation["LOCATION_PARENT_MASK"] = CodeEdit::CodeCompletionLocation::LOCATION_PARENT_MASK;
    _CodeCompletionLocation["LOCATION_OTHER_USER_CODE"] = CodeEdit::CodeCompletionLocation::LOCATION_OTHER_USER_CODE;
    _CodeCompletionLocation["LOCATION_OTHER"] = CodeEdit::CodeCompletionLocation::LOCATION_OTHER;
    _module.add("CodeCompletionLocation", std::move(_CodeCompletionLocation));
}