/**************************************************************************/
/*  code_edit.hpp                                                         */
/**************************************************************************/
/*                         This file is part of:                          */
/*                             GODOT ENGINE                               */
/*                        https://godotengine.org                         */
/**************************************************************************/
/* Copyright (c) 2014-present Godot Engine contributors (see AUTHORS.md). */
/* Copyright (c) 2007-2014 Juan Linietsky, Ariel Manzur.                  */
/*                                                                        */
/* Permission is hereby granted, free of charge, to any person obtaining  */
/* a copy of this software and associated documentation files (the        */
/* "Software"), to deal in the Software without restriction, including    */
/* without limitation the rights to use, copy, modify, merge, publish,    */
/* distribute, sublicense, and/or sell copies of the Software, and to     */
/* permit persons to whom the Software is furnished to do so, subject to  */
/* the following conditions:                                              */
/*                                                                        */
/* The above copyright notice and this permission notice shall be         */
/* included in all copies or substantial portions of the Software.        */
/*                                                                        */
/* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,        */
/* EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF     */
/* MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. */
/* IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY   */
/* CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,   */
/* TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE      */
/* SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.                 */
/**************************************************************************/

// THIS FILE IS GENERATED. EDITS WILL BE LOST.

#ifndef GODOT_CPP_CODE_EDIT_HPP
#define GODOT_CPP_CODE_EDIT_HPP

#include <godot_cpp/variant/color.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/packed_int32_array.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/resource.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/classes/text_edit.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/variant.hpp>
#include <godot_cpp/variant/vector2.hpp>

#include <godot_cpp/core/class_db.hpp>

#include <type_traits>

#include <godot_cpp/templates/vararg.hpp>
namespace godot {

class CodeEdit : public TextEdit {
	GDEXTENSION_CLASS(CodeEdit, TextEdit)

public:

	enum CodeCompletionKind {
		KIND_CLASS = 0,
		KIND_FUNCTION = 1,
		KIND_SIGNAL = 2,
		KIND_VARIABLE = 3,
		KIND_MEMBER = 4,
		KIND_ENUM = 5,
		KIND_CONSTANT = 6,
		KIND_NODE_PATH = 7,
		KIND_FILE_PATH = 8,
		KIND_PLAIN_TEXT = 9,
	};

	enum CodeCompletionLocation {
		LOCATION_LOCAL = 0,
		LOCATION_PARENT_MASK = 256,
		LOCATION_OTHER_USER_CODE = 512,
		LOCATION_OTHER = 1024,
	};

	void set_indent_size(int32_t size);
	int32_t get_indent_size() const;
	void set_indent_using_spaces(bool use_spaces);
	bool is_indent_using_spaces() const;
	void set_auto_indent_enabled(bool enable);
	bool is_auto_indent_enabled() const;
	void set_auto_indent_prefixes(const TypedArray<String> &prefixes);
	TypedArray<String> get_auto_indent_prefixes() const;
	void do_indent();
	void indent_lines();
	void unindent_lines();
	void convert_indent(int32_t from_line = -1, int32_t to_line = -1);
	void set_auto_brace_completion_enabled(bool enable);
	bool is_auto_brace_completion_enabled() const;
	void set_highlight_matching_braces_enabled(bool enable);
	bool is_highlight_matching_braces_enabled() const;
	void add_auto_brace_completion_pair(const String &start_key, const String &end_key);
	void set_auto_brace_completion_pairs(const Dictionary &pairs);
	Dictionary get_auto_brace_completion_pairs() const;
	bool has_auto_brace_completion_open_key(const String &open_key) const;
	bool has_auto_brace_completion_close_key(const String &close_key) const;
	String get_auto_brace_completion_close_key(const String &open_key) const;
	void set_draw_breakpoints_gutter(bool enable);
	bool is_drawing_breakpoints_gutter() const;
	void set_draw_bookmarks_gutter(bool enable);
	bool is_drawing_bookmarks_gutter() const;
	void set_draw_executing_lines_gutter(bool enable);
	bool is_drawing_executing_lines_gutter() const;
	void set_line_as_breakpoint(int32_t line, bool breakpointed);
	bool is_line_breakpointed(int32_t line) const;
	void clear_breakpointed_lines();
	PackedInt32Array get_breakpointed_lines() const;
	void set_line_as_bookmarked(int32_t line, bool bookmarked);
	bool is_line_bookmarked(int32_t line) const;
	void clear_bookmarked_lines();
	PackedInt32Array get_bookmarked_lines() const;
	void set_line_as_executing(int32_t line, bool executing);
	bool is_line_executing(int32_t line) const;
	void clear_executing_lines();
	PackedInt32Array get_executing_lines() const;
	void set_draw_line_numbers(bool enable);
	bool is_draw_line_numbers_enabled() const;
	void set_line_numbers_zero_padded(bool enable);
	bool is_line_numbers_zero_padded() const;
	void set_draw_fold_gutter(bool enable);
	bool is_drawing_fold_gutter() const;
	void set_line_folding_enabled(bool enabled);
	bool is_line_folding_enabled() const;
	bool can_fold_line(int32_t line) const;
	void fold_line(int32_t line);
	void unfold_line(int32_t line);
	void fold_all_lines();
	void unfold_all_lines();
	void toggle_foldable_line(int32_t line);
	bool is_line_folded(int32_t line) const;
	TypedArray<int> get_folded_lines() const;
	void create_code_region();
	String get_code_region_start_tag() const;
	String get_code_region_end_tag() const;
	void set_code_region_tags(const String &start = "region", const String &end = "endregion");
	bool is_line_code_region_start(int32_t line) const;
	bool is_line_code_region_end(int32_t line) const;
	void add_string_delimiter(const String &start_key, const String &end_key, bool line_only = false);
	void remove_string_delimiter(const String &start_key);
	bool has_string_delimiter(const String &start_key) const;
	void set_string_delimiters(const TypedArray<String> &string_delimiters);
	void clear_string_delimiters();
	TypedArray<String> get_string_delimiters() const;
	int32_t is_in_string(int32_t line, int32_t column = -1) const;
	void add_comment_delimiter(const String &start_key, const String &end_key, bool line_only = false);
	void remove_comment_delimiter(const String &start_key);
	bool has_comment_delimiter(const String &start_key) const;
	void set_comment_delimiters(const TypedArray<String> &comment_delimiters);
	void clear_comment_delimiters();
	TypedArray<String> get_comment_delimiters() const;
	int32_t is_in_comment(int32_t line, int32_t column = -1) const;
	String get_delimiter_start_key(int32_t delimiter_index) const;
	String get_delimiter_end_key(int32_t delimiter_index) const;
	Vector2 get_delimiter_start_position(int32_t line, int32_t column) const;
	Vector2 get_delimiter_end_position(int32_t line, int32_t column) const;
	void set_code_hint(const String &code_hint);
	void set_code_hint_draw_below(bool draw_below);
	String get_text_for_code_completion() const;
	void request_code_completion(bool force = false);
	void add_code_completion_option(CodeEdit::CodeCompletionKind type, const String &display_text, const String &insert_text, const Color &text_color = Color(1, 1, 1, 1), const Ref<Resource> &icon = nullptr, const Variant &value = 0, int32_t location = 1024);
	void update_code_completion_options(bool force);
	TypedArray<Dictionary> get_code_completion_options() const;
	Dictionary get_code_completion_option(int32_t index) const;
	int32_t get_code_completion_selected_index() const;
	void set_code_completion_selected_index(int32_t index);
	void confirm_code_completion(bool replace = false);
	void cancel_code_completion();
	void set_code_completion_enabled(bool enable);
	bool is_code_completion_enabled() const;
	void set_code_completion_prefixes(const TypedArray<String> &prefixes);
	TypedArray<String> get_code_completion_prefixes() const;
	void set_line_length_guidelines(const TypedArray<int> &guideline_columns);
	TypedArray<int> get_line_length_guidelines() const;
	void set_symbol_lookup_on_click_enabled(bool enable);
	bool is_symbol_lookup_on_click_enabled() const;
	String get_text_for_symbol_lookup() const;
	String get_text_with_cursor_char(int32_t line, int32_t column) const;
	void set_symbol_lookup_word_as_valid(bool valid);
	void duplicate_lines();
	virtual void _confirm_code_completion(bool replace);
	virtual void _request_code_completion(bool force);
	virtual TypedArray<Dictionary> _filter_code_completion_candidates(const TypedArray<Dictionary> &candidates) const;
protected:
	template <typename T, typename B>
	static void register_virtuals() {
		TextEdit::register_virtuals<T, B>();
		if constexpr (!std::is_same_v<decltype(&B::_confirm_code_completion),decltype(&T::_confirm_code_completion)>) {
			BIND_VIRTUAL_METHOD(T, _confirm_code_completion);
		}
		if constexpr (!std::is_same_v<decltype(&B::_request_code_completion),decltype(&T::_request_code_completion)>) {
			BIND_VIRTUAL_METHOD(T, _request_code_completion);
		}
		if constexpr (!std::is_same_v<decltype(&B::_filter_code_completion_candidates),decltype(&T::_filter_code_completion_candidates)>) {
			BIND_VIRTUAL_METHOD(T, _filter_code_completion_candidates);
		}
	}

public:

};

} // namespace godot

VARIANT_ENUM_CAST(CodeEdit::CodeCompletionKind);
VARIANT_ENUM_CAST(CodeEdit::CodeCompletionLocation);

#endif // ! GODOT_CPP_CODE_EDIT_HPP