import * as internal from '__internal__';
import { GDArray } from '@js_godot/variant/gd_array'
import { StringName } from '@js_godot/variant/string_name'
import { TextEdit } from '@js_godot/classes/text_edit'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
  method_set_indent_size;
  method_get_indent_size;
  method_set_indent_using_spaces;
  method_is_indent_using_spaces;
  method_set_auto_indent_enabled;
  method_is_auto_indent_enabled;
  method_set_auto_indent_prefixes;
  method_get_auto_indent_prefixes;
  method_do_indent;
  method_indent_lines;
  method_unindent_lines;
  method_convert_indent;
  method_set_auto_brace_completion_enabled;
  method_is_auto_brace_completion_enabled;
  method_set_highlight_matching_braces_enabled;
  method_is_highlight_matching_braces_enabled;
  method_add_auto_brace_completion_pair;
  method_set_auto_brace_completion_pairs;
  method_get_auto_brace_completion_pairs;
  method_has_auto_brace_completion_open_key;
  method_has_auto_brace_completion_close_key;
  method_get_auto_brace_completion_close_key;
  method_set_draw_breakpoints_gutter;
  method_is_drawing_breakpoints_gutter;
  method_set_draw_bookmarks_gutter;
  method_is_drawing_bookmarks_gutter;
  method_set_draw_executing_lines_gutter;
  method_is_drawing_executing_lines_gutter;
  method_set_line_as_breakpoint;
  method_is_line_breakpointed;
  method_clear_breakpointed_lines;
  method_get_breakpointed_lines;
  method_set_line_as_bookmarked;
  method_is_line_bookmarked;
  method_clear_bookmarked_lines;
  method_get_bookmarked_lines;
  method_set_line_as_executing;
  method_is_line_executing;
  method_clear_executing_lines;
  method_get_executing_lines;
  method_set_draw_line_numbers;
  method_is_draw_line_numbers_enabled;
  method_set_line_numbers_zero_padded;
  method_is_line_numbers_zero_padded;
  method_set_draw_fold_gutter;
  method_is_drawing_fold_gutter;
  method_set_line_folding_enabled;
  method_is_line_folding_enabled;
  method_can_fold_line;
  method_fold_line;
  method_unfold_line;
  method_fold_all_lines;
  method_unfold_all_lines;
  method_toggle_foldable_line;
  method_toggle_foldable_lines_at_carets;
  method_is_line_folded;
  method_get_folded_lines;
  method_create_code_region;
  method_get_code_region_start_tag;
  method_get_code_region_end_tag;
  method_set_code_region_tags;
  method_is_line_code_region_start;
  method_is_line_code_region_end;
  method_add_string_delimiter;
  method_remove_string_delimiter;
  method_has_string_delimiter;
  method_set_string_delimiters;
  method_clear_string_delimiters;
  method_get_string_delimiters;
  method_is_in_string;
  method_add_comment_delimiter;
  method_remove_comment_delimiter;
  method_has_comment_delimiter;
  method_set_comment_delimiters;
  method_clear_comment_delimiters;
  method_get_comment_delimiters;
  method_is_in_comment;
  method_get_delimiter_start_key;
  method_get_delimiter_end_key;
  method_get_delimiter_start_position;
  method_get_delimiter_end_position;
  method_set_code_hint;
  method_set_code_hint_draw_below;
  method_get_text_for_code_completion;
  method_request_code_completion;
  method_add_code_completion_option;
  method_update_code_completion_options;
  method_get_code_completion_options;
  method_get_code_completion_option;
  method_get_code_completion_selected_index;
  method_set_code_completion_selected_index;
  method_confirm_code_completion;
  method_cancel_code_completion;
  method_set_code_completion_enabled;
  method_is_code_completion_enabled;
  method_set_code_completion_prefixes;
  method_get_code_completion_prefixes;
  method_set_line_length_guidelines;
  method_get_line_length_guidelines;
  method_set_symbol_lookup_on_click_enabled;
  method_is_symbol_lookup_on_click_enabled;
  method_get_text_for_symbol_lookup;
  method_get_text_with_cursor_char;
  method_set_symbol_lookup_word_as_valid;
  method_move_lines_up;
  method_move_lines_down;
  method_delete_lines;
  method_duplicate_selection;
  method_duplicate_lines;
}
@GodotClass
export class CodeEdit extends TextEdit{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("CodeEdit");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_indent_size() {
    if (!this._bindings.method_set_indent_size) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("set_indent_size");
      this._bindings.method_set_indent_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_indent_size() {
    if (!this._bindings.method_get_indent_size) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("get_indent_size");
      this._bindings.method_get_indent_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_indent_using_spaces() {
    if (!this._bindings.method_set_indent_using_spaces) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("set_indent_using_spaces");
      this._bindings.method_set_indent_using_spaces = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_indent_using_spaces() {
    if (!this._bindings.method_is_indent_using_spaces) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("is_indent_using_spaces");
      this._bindings.method_is_indent_using_spaces = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_auto_indent_enabled() {
    if (!this._bindings.method_set_auto_indent_enabled) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("set_auto_indent_enabled");
      this._bindings.method_set_auto_indent_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_auto_indent_enabled() {
    if (!this._bindings.method_is_auto_indent_enabled) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("is_auto_indent_enabled");
      this._bindings.method_is_auto_indent_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_auto_indent_prefixes() {
    if (!this._bindings.method_set_auto_indent_prefixes) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("set_auto_indent_prefixes");
      this._bindings.method_set_auto_indent_prefixes = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        381264803
      );
    }
  }
  static init_method_get_auto_indent_prefixes() {
    if (!this._bindings.method_get_auto_indent_prefixes) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("get_auto_indent_prefixes");
      this._bindings.method_get_auto_indent_prefixes = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3995934104
      );
    }
  }
  static init_method_do_indent() {
    if (!this._bindings.method_do_indent) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("do_indent");
      this._bindings.method_do_indent = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_indent_lines() {
    if (!this._bindings.method_indent_lines) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("indent_lines");
      this._bindings.method_indent_lines = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_unindent_lines() {
    if (!this._bindings.method_unindent_lines) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("unindent_lines");
      this._bindings.method_unindent_lines = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_convert_indent() {
    if (!this._bindings.method_convert_indent) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("convert_indent");
      this._bindings.method_convert_indent = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        423910286
      );
    }
  }
  static init_method_set_auto_brace_completion_enabled() {
    if (!this._bindings.method_set_auto_brace_completion_enabled) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("set_auto_brace_completion_enabled");
      this._bindings.method_set_auto_brace_completion_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_auto_brace_completion_enabled() {
    if (!this._bindings.method_is_auto_brace_completion_enabled) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("is_auto_brace_completion_enabled");
      this._bindings.method_is_auto_brace_completion_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_highlight_matching_braces_enabled() {
    if (!this._bindings.method_set_highlight_matching_braces_enabled) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("set_highlight_matching_braces_enabled");
      this._bindings.method_set_highlight_matching_braces_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_highlight_matching_braces_enabled() {
    if (!this._bindings.method_is_highlight_matching_braces_enabled) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("is_highlight_matching_braces_enabled");
      this._bindings.method_is_highlight_matching_braces_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_add_auto_brace_completion_pair() {
    if (!this._bindings.method_add_auto_brace_completion_pair) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("add_auto_brace_completion_pair");
      this._bindings.method_add_auto_brace_completion_pair = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3186203200
      );
    }
  }
  static init_method_set_auto_brace_completion_pairs() {
    if (!this._bindings.method_set_auto_brace_completion_pairs) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("set_auto_brace_completion_pairs");
      this._bindings.method_set_auto_brace_completion_pairs = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4155329257
      );
    }
  }
  static init_method_get_auto_brace_completion_pairs() {
    if (!this._bindings.method_get_auto_brace_completion_pairs) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("get_auto_brace_completion_pairs");
      this._bindings.method_get_auto_brace_completion_pairs = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3102165223
      );
    }
  }
  static init_method_has_auto_brace_completion_open_key() {
    if (!this._bindings.method_has_auto_brace_completion_open_key) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("has_auto_brace_completion_open_key");
      this._bindings.method_has_auto_brace_completion_open_key = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3927539163
      );
    }
  }
  static init_method_has_auto_brace_completion_close_key() {
    if (!this._bindings.method_has_auto_brace_completion_close_key) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("has_auto_brace_completion_close_key");
      this._bindings.method_has_auto_brace_completion_close_key = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3927539163
      );
    }
  }
  static init_method_get_auto_brace_completion_close_key() {
    if (!this._bindings.method_get_auto_brace_completion_close_key) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("get_auto_brace_completion_close_key");
      this._bindings.method_get_auto_brace_completion_close_key = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3135753539
      );
    }
  }
  static init_method_set_draw_breakpoints_gutter() {
    if (!this._bindings.method_set_draw_breakpoints_gutter) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("set_draw_breakpoints_gutter");
      this._bindings.method_set_draw_breakpoints_gutter = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_drawing_breakpoints_gutter() {
    if (!this._bindings.method_is_drawing_breakpoints_gutter) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("is_drawing_breakpoints_gutter");
      this._bindings.method_is_drawing_breakpoints_gutter = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_draw_bookmarks_gutter() {
    if (!this._bindings.method_set_draw_bookmarks_gutter) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("set_draw_bookmarks_gutter");
      this._bindings.method_set_draw_bookmarks_gutter = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_drawing_bookmarks_gutter() {
    if (!this._bindings.method_is_drawing_bookmarks_gutter) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("is_drawing_bookmarks_gutter");
      this._bindings.method_is_drawing_bookmarks_gutter = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_draw_executing_lines_gutter() {
    if (!this._bindings.method_set_draw_executing_lines_gutter) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("set_draw_executing_lines_gutter");
      this._bindings.method_set_draw_executing_lines_gutter = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_drawing_executing_lines_gutter() {
    if (!this._bindings.method_is_drawing_executing_lines_gutter) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("is_drawing_executing_lines_gutter");
      this._bindings.method_is_drawing_executing_lines_gutter = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_line_as_breakpoint() {
    if (!this._bindings.method_set_line_as_breakpoint) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("set_line_as_breakpoint");
      this._bindings.method_set_line_as_breakpoint = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        300928843
      );
    }
  }
  static init_method_is_line_breakpointed() {
    if (!this._bindings.method_is_line_breakpointed) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("is_line_breakpointed");
      this._bindings.method_is_line_breakpointed = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1116898809
      );
    }
  }
  static init_method_clear_breakpointed_lines() {
    if (!this._bindings.method_clear_breakpointed_lines) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("clear_breakpointed_lines");
      this._bindings.method_clear_breakpointed_lines = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_get_breakpointed_lines() {
    if (!this._bindings.method_get_breakpointed_lines) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("get_breakpointed_lines");
      this._bindings.method_get_breakpointed_lines = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1930428628
      );
    }
  }
  static init_method_set_line_as_bookmarked() {
    if (!this._bindings.method_set_line_as_bookmarked) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("set_line_as_bookmarked");
      this._bindings.method_set_line_as_bookmarked = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        300928843
      );
    }
  }
  static init_method_is_line_bookmarked() {
    if (!this._bindings.method_is_line_bookmarked) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("is_line_bookmarked");
      this._bindings.method_is_line_bookmarked = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1116898809
      );
    }
  }
  static init_method_clear_bookmarked_lines() {
    if (!this._bindings.method_clear_bookmarked_lines) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("clear_bookmarked_lines");
      this._bindings.method_clear_bookmarked_lines = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_get_bookmarked_lines() {
    if (!this._bindings.method_get_bookmarked_lines) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("get_bookmarked_lines");
      this._bindings.method_get_bookmarked_lines = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1930428628
      );
    }
  }
  static init_method_set_line_as_executing() {
    if (!this._bindings.method_set_line_as_executing) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("set_line_as_executing");
      this._bindings.method_set_line_as_executing = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        300928843
      );
    }
  }
  static init_method_is_line_executing() {
    if (!this._bindings.method_is_line_executing) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("is_line_executing");
      this._bindings.method_is_line_executing = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1116898809
      );
    }
  }
  static init_method_clear_executing_lines() {
    if (!this._bindings.method_clear_executing_lines) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("clear_executing_lines");
      this._bindings.method_clear_executing_lines = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_get_executing_lines() {
    if (!this._bindings.method_get_executing_lines) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("get_executing_lines");
      this._bindings.method_get_executing_lines = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1930428628
      );
    }
  }
  static init_method_set_draw_line_numbers() {
    if (!this._bindings.method_set_draw_line_numbers) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("set_draw_line_numbers");
      this._bindings.method_set_draw_line_numbers = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_draw_line_numbers_enabled() {
    if (!this._bindings.method_is_draw_line_numbers_enabled) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("is_draw_line_numbers_enabled");
      this._bindings.method_is_draw_line_numbers_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_line_numbers_zero_padded() {
    if (!this._bindings.method_set_line_numbers_zero_padded) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("set_line_numbers_zero_padded");
      this._bindings.method_set_line_numbers_zero_padded = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_line_numbers_zero_padded() {
    if (!this._bindings.method_is_line_numbers_zero_padded) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("is_line_numbers_zero_padded");
      this._bindings.method_is_line_numbers_zero_padded = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_draw_fold_gutter() {
    if (!this._bindings.method_set_draw_fold_gutter) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("set_draw_fold_gutter");
      this._bindings.method_set_draw_fold_gutter = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_drawing_fold_gutter() {
    if (!this._bindings.method_is_drawing_fold_gutter) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("is_drawing_fold_gutter");
      this._bindings.method_is_drawing_fold_gutter = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_line_folding_enabled() {
    if (!this._bindings.method_set_line_folding_enabled) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("set_line_folding_enabled");
      this._bindings.method_set_line_folding_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_line_folding_enabled() {
    if (!this._bindings.method_is_line_folding_enabled) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("is_line_folding_enabled");
      this._bindings.method_is_line_folding_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_can_fold_line() {
    if (!this._bindings.method_can_fold_line) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("can_fold_line");
      this._bindings.method_can_fold_line = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1116898809
      );
    }
  }
  static init_method_fold_line() {
    if (!this._bindings.method_fold_line) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("fold_line");
      this._bindings.method_fold_line = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_unfold_line() {
    if (!this._bindings.method_unfold_line) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("unfold_line");
      this._bindings.method_unfold_line = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_fold_all_lines() {
    if (!this._bindings.method_fold_all_lines) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("fold_all_lines");
      this._bindings.method_fold_all_lines = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_unfold_all_lines() {
    if (!this._bindings.method_unfold_all_lines) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("unfold_all_lines");
      this._bindings.method_unfold_all_lines = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_toggle_foldable_line() {
    if (!this._bindings.method_toggle_foldable_line) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("toggle_foldable_line");
      this._bindings.method_toggle_foldable_line = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_toggle_foldable_lines_at_carets() {
    if (!this._bindings.method_toggle_foldable_lines_at_carets) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("toggle_foldable_lines_at_carets");
      this._bindings.method_toggle_foldable_lines_at_carets = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_is_line_folded() {
    if (!this._bindings.method_is_line_folded) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("is_line_folded");
      this._bindings.method_is_line_folded = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1116898809
      );
    }
  }
  static init_method_get_folded_lines() {
    if (!this._bindings.method_get_folded_lines) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("get_folded_lines");
      this._bindings.method_get_folded_lines = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3995934104
      );
    }
  }
  static init_method_create_code_region() {
    if (!this._bindings.method_create_code_region) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("create_code_region");
      this._bindings.method_create_code_region = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_get_code_region_start_tag() {
    if (!this._bindings.method_get_code_region_start_tag) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("get_code_region_start_tag");
      this._bindings.method_get_code_region_start_tag = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_get_code_region_end_tag() {
    if (!this._bindings.method_get_code_region_end_tag) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("get_code_region_end_tag");
      this._bindings.method_get_code_region_end_tag = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_set_code_region_tags() {
    if (!this._bindings.method_set_code_region_tags) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("set_code_region_tags");
      this._bindings.method_set_code_region_tags = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        708800718
      );
    }
  }
  static init_method_is_line_code_region_start() {
    if (!this._bindings.method_is_line_code_region_start) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("is_line_code_region_start");
      this._bindings.method_is_line_code_region_start = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1116898809
      );
    }
  }
  static init_method_is_line_code_region_end() {
    if (!this._bindings.method_is_line_code_region_end) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("is_line_code_region_end");
      this._bindings.method_is_line_code_region_end = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1116898809
      );
    }
  }
  static init_method_add_string_delimiter() {
    if (!this._bindings.method_add_string_delimiter) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("add_string_delimiter");
      this._bindings.method_add_string_delimiter = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3146098955
      );
    }
  }
  static init_method_remove_string_delimiter() {
    if (!this._bindings.method_remove_string_delimiter) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("remove_string_delimiter");
      this._bindings.method_remove_string_delimiter = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }
  static init_method_has_string_delimiter() {
    if (!this._bindings.method_has_string_delimiter) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("has_string_delimiter");
      this._bindings.method_has_string_delimiter = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3927539163
      );
    }
  }
  static init_method_set_string_delimiters() {
    if (!this._bindings.method_set_string_delimiters) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("set_string_delimiters");
      this._bindings.method_set_string_delimiters = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        381264803
      );
    }
  }
  static init_method_clear_string_delimiters() {
    if (!this._bindings.method_clear_string_delimiters) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("clear_string_delimiters");
      this._bindings.method_clear_string_delimiters = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_get_string_delimiters() {
    if (!this._bindings.method_get_string_delimiters) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("get_string_delimiters");
      this._bindings.method_get_string_delimiters = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3995934104
      );
    }
  }
  static init_method_is_in_string() {
    if (!this._bindings.method_is_in_string) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("is_in_string");
      this._bindings.method_is_in_string = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        688195400
      );
    }
  }
  static init_method_add_comment_delimiter() {
    if (!this._bindings.method_add_comment_delimiter) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("add_comment_delimiter");
      this._bindings.method_add_comment_delimiter = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3146098955
      );
    }
  }
  static init_method_remove_comment_delimiter() {
    if (!this._bindings.method_remove_comment_delimiter) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("remove_comment_delimiter");
      this._bindings.method_remove_comment_delimiter = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }
  static init_method_has_comment_delimiter() {
    if (!this._bindings.method_has_comment_delimiter) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("has_comment_delimiter");
      this._bindings.method_has_comment_delimiter = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3927539163
      );
    }
  }
  static init_method_set_comment_delimiters() {
    if (!this._bindings.method_set_comment_delimiters) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("set_comment_delimiters");
      this._bindings.method_set_comment_delimiters = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        381264803
      );
    }
  }
  static init_method_clear_comment_delimiters() {
    if (!this._bindings.method_clear_comment_delimiters) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("clear_comment_delimiters");
      this._bindings.method_clear_comment_delimiters = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_get_comment_delimiters() {
    if (!this._bindings.method_get_comment_delimiters) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("get_comment_delimiters");
      this._bindings.method_get_comment_delimiters = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3995934104
      );
    }
  }
  static init_method_is_in_comment() {
    if (!this._bindings.method_is_in_comment) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("is_in_comment");
      this._bindings.method_is_in_comment = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        688195400
      );
    }
  }
  static init_method_get_delimiter_start_key() {
    if (!this._bindings.method_get_delimiter_start_key) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("get_delimiter_start_key");
      this._bindings.method_get_delimiter_start_key = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        844755477
      );
    }
  }
  static init_method_get_delimiter_end_key() {
    if (!this._bindings.method_get_delimiter_end_key) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("get_delimiter_end_key");
      this._bindings.method_get_delimiter_end_key = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        844755477
      );
    }
  }
  static init_method_get_delimiter_start_position() {
    if (!this._bindings.method_get_delimiter_start_position) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("get_delimiter_start_position");
      this._bindings.method_get_delimiter_start_position = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3016396712
      );
    }
  }
  static init_method_get_delimiter_end_position() {
    if (!this._bindings.method_get_delimiter_end_position) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("get_delimiter_end_position");
      this._bindings.method_get_delimiter_end_position = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3016396712
      );
    }
  }
  static init_method_set_code_hint() {
    if (!this._bindings.method_set_code_hint) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("set_code_hint");
      this._bindings.method_set_code_hint = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }
  static init_method_set_code_hint_draw_below() {
    if (!this._bindings.method_set_code_hint_draw_below) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("set_code_hint_draw_below");
      this._bindings.method_set_code_hint_draw_below = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_text_for_code_completion() {
    if (!this._bindings.method_get_text_for_code_completion) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("get_text_for_code_completion");
      this._bindings.method_get_text_for_code_completion = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_request_code_completion() {
    if (!this._bindings.method_request_code_completion) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("request_code_completion");
      this._bindings.method_request_code_completion = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        107499316
      );
    }
  }
  static init_method_add_code_completion_option() {
    if (!this._bindings.method_add_code_completion_option) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("add_code_completion_option");
      this._bindings.method_add_code_completion_option = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3944379502
      );
    }
  }
  static init_method_update_code_completion_options() {
    if (!this._bindings.method_update_code_completion_options) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("update_code_completion_options");
      this._bindings.method_update_code_completion_options = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_code_completion_options() {
    if (!this._bindings.method_get_code_completion_options) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("get_code_completion_options");
      this._bindings.method_get_code_completion_options = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3995934104
      );
    }
  }
  static init_method_get_code_completion_option() {
    if (!this._bindings.method_get_code_completion_option) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("get_code_completion_option");
      this._bindings.method_get_code_completion_option = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3485342025
      );
    }
  }
  static init_method_get_code_completion_selected_index() {
    if (!this._bindings.method_get_code_completion_selected_index) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("get_code_completion_selected_index");
      this._bindings.method_get_code_completion_selected_index = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_code_completion_selected_index() {
    if (!this._bindings.method_set_code_completion_selected_index) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("set_code_completion_selected_index");
      this._bindings.method_set_code_completion_selected_index = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_confirm_code_completion() {
    if (!this._bindings.method_confirm_code_completion) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("confirm_code_completion");
      this._bindings.method_confirm_code_completion = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        107499316
      );
    }
  }
  static init_method_cancel_code_completion() {
    if (!this._bindings.method_cancel_code_completion) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("cancel_code_completion");
      this._bindings.method_cancel_code_completion = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_set_code_completion_enabled() {
    if (!this._bindings.method_set_code_completion_enabled) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("set_code_completion_enabled");
      this._bindings.method_set_code_completion_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_code_completion_enabled() {
    if (!this._bindings.method_is_code_completion_enabled) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("is_code_completion_enabled");
      this._bindings.method_is_code_completion_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_code_completion_prefixes() {
    if (!this._bindings.method_set_code_completion_prefixes) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("set_code_completion_prefixes");
      this._bindings.method_set_code_completion_prefixes = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        381264803
      );
    }
  }
  static init_method_get_code_completion_prefixes() {
    if (!this._bindings.method_get_code_completion_prefixes) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("get_code_completion_prefixes");
      this._bindings.method_get_code_completion_prefixes = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3995934104
      );
    }
  }
  static init_method_set_line_length_guidelines() {
    if (!this._bindings.method_set_line_length_guidelines) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("set_line_length_guidelines");
      this._bindings.method_set_line_length_guidelines = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        381264803
      );
    }
  }
  static init_method_get_line_length_guidelines() {
    if (!this._bindings.method_get_line_length_guidelines) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("get_line_length_guidelines");
      this._bindings.method_get_line_length_guidelines = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3995934104
      );
    }
  }
  static init_method_set_symbol_lookup_on_click_enabled() {
    if (!this._bindings.method_set_symbol_lookup_on_click_enabled) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("set_symbol_lookup_on_click_enabled");
      this._bindings.method_set_symbol_lookup_on_click_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_symbol_lookup_on_click_enabled() {
    if (!this._bindings.method_is_symbol_lookup_on_click_enabled) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("is_symbol_lookup_on_click_enabled");
      this._bindings.method_is_symbol_lookup_on_click_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_get_text_for_symbol_lookup() {
    if (!this._bindings.method_get_text_for_symbol_lookup) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("get_text_for_symbol_lookup");
      this._bindings.method_get_text_for_symbol_lookup = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_get_text_with_cursor_char() {
    if (!this._bindings.method_get_text_with_cursor_char) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("get_text_with_cursor_char");
      this._bindings.method_get_text_with_cursor_char = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1391810591
      );
    }
  }
  static init_method_set_symbol_lookup_word_as_valid() {
    if (!this._bindings.method_set_symbol_lookup_word_as_valid) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("set_symbol_lookup_word_as_valid");
      this._bindings.method_set_symbol_lookup_word_as_valid = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_move_lines_up() {
    if (!this._bindings.method_move_lines_up) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("move_lines_up");
      this._bindings.method_move_lines_up = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_move_lines_down() {
    if (!this._bindings.method_move_lines_down) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("move_lines_down");
      this._bindings.method_move_lines_down = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_delete_lines() {
    if (!this._bindings.method_delete_lines) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("delete_lines");
      this._bindings.method_delete_lines = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_duplicate_selection() {
    if (!this._bindings.method_duplicate_selection) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("duplicate_selection");
      this._bindings.method_duplicate_selection = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_duplicate_lines() {
    if (!this._bindings.method_duplicate_lines) {
      let classname = new StringName("CodeEdit");
      let methodname = new StringName("duplicate_lines");
      this._bindings.method_duplicate_lines = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }

  
  
  _confirm_code_completion(_replace) {
  }
  _request_code_completion(_force) {
  }
  _filter_code_completion_candidates(_candidates) {
  }
  set_indent_size(_size) {
    CodeEdit.init_method_set_indent_size();
    return _call_native_mb_no_ret(
      CodeEdit._bindings.method_set_indent_size,
      this._owner,
      _size
    );
    
  }
  get_indent_size() {
    CodeEdit.init_method_get_indent_size();
    return _call_native_mb_ret(
      CodeEdit._bindings.method_get_indent_size,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_indent_using_spaces(_use_spaces) {
    CodeEdit.init_method_set_indent_using_spaces();
    return _call_native_mb_no_ret(
      CodeEdit._bindings.method_set_indent_using_spaces,
      this._owner,
      _use_spaces
    );
    
  }
  is_indent_using_spaces() {
    CodeEdit.init_method_is_indent_using_spaces();
    return _call_native_mb_ret(
      CodeEdit._bindings.method_is_indent_using_spaces,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_auto_indent_enabled(_enable) {
    CodeEdit.init_method_set_auto_indent_enabled();
    return _call_native_mb_no_ret(
      CodeEdit._bindings.method_set_auto_indent_enabled,
      this._owner,
      _enable
    );
    
  }
  is_auto_indent_enabled() {
    CodeEdit.init_method_is_auto_indent_enabled();
    return _call_native_mb_ret(
      CodeEdit._bindings.method_is_auto_indent_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_auto_indent_prefixes(_prefixes) {
    CodeEdit.init_method_set_auto_indent_prefixes();
    return _call_native_mb_no_ret(
      CodeEdit._bindings.method_set_auto_indent_prefixes,
      this._owner,
      _prefixes
    );
    
  }
  get_auto_indent_prefixes() {
    CodeEdit.init_method_get_auto_indent_prefixes();
    return _call_native_mb_ret(
      CodeEdit._bindings.method_get_auto_indent_prefixes,
      this._owner,
			Variant.Type.ARRAY,
      
    );
    
  }
  do_indent() {
    CodeEdit.init_method_do_indent();
    return _call_native_mb_no_ret(
      CodeEdit._bindings.method_do_indent,
      this._owner,
      
    );
    
  }
  indent_lines() {
    CodeEdit.init_method_indent_lines();
    return _call_native_mb_no_ret(
      CodeEdit._bindings.method_indent_lines,
      this._owner,
      
    );
    
  }
  unindent_lines() {
    CodeEdit.init_method_unindent_lines();
    return _call_native_mb_no_ret(
      CodeEdit._bindings.method_unindent_lines,
      this._owner,
      
    );
    
  }
  convert_indent(_from_line, _to_line) {
    CodeEdit.init_method_convert_indent();
    return _call_native_mb_no_ret(
      CodeEdit._bindings.method_convert_indent,
      this._owner,
      _from_line, _to_line
    );
    
  }
  set_auto_brace_completion_enabled(_enable) {
    CodeEdit.init_method_set_auto_brace_completion_enabled();
    return _call_native_mb_no_ret(
      CodeEdit._bindings.method_set_auto_brace_completion_enabled,
      this._owner,
      _enable
    );
    
  }
  is_auto_brace_completion_enabled() {
    CodeEdit.init_method_is_auto_brace_completion_enabled();
    return _call_native_mb_ret(
      CodeEdit._bindings.method_is_auto_brace_completion_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_highlight_matching_braces_enabled(_enable) {
    CodeEdit.init_method_set_highlight_matching_braces_enabled();
    return _call_native_mb_no_ret(
      CodeEdit._bindings.method_set_highlight_matching_braces_enabled,
      this._owner,
      _enable
    );
    
  }
  is_highlight_matching_braces_enabled() {
    CodeEdit.init_method_is_highlight_matching_braces_enabled();
    return _call_native_mb_ret(
      CodeEdit._bindings.method_is_highlight_matching_braces_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  add_auto_brace_completion_pair(_start_key, _end_key) {
    CodeEdit.init_method_add_auto_brace_completion_pair();
    return _call_native_mb_no_ret(
      CodeEdit._bindings.method_add_auto_brace_completion_pair,
      this._owner,
      _start_key, _end_key
    );
    
  }
  set_auto_brace_completion_pairs(_pairs) {
    CodeEdit.init_method_set_auto_brace_completion_pairs();
    return _call_native_mb_no_ret(
      CodeEdit._bindings.method_set_auto_brace_completion_pairs,
      this._owner,
      _pairs
    );
    
  }
  get_auto_brace_completion_pairs() {
    CodeEdit.init_method_get_auto_brace_completion_pairs();
    return _call_native_mb_ret(
      CodeEdit._bindings.method_get_auto_brace_completion_pairs,
      this._owner,
			Variant.Type.DICTIONARY,
    
      
    );
    
  }
  has_auto_brace_completion_open_key(_open_key) {
    CodeEdit.init_method_has_auto_brace_completion_open_key();
    return _call_native_mb_ret(
      CodeEdit._bindings.method_has_auto_brace_completion_open_key,
      this._owner,
			Variant.Type.BOOL,
    
      _open_key
    );
    
  }
  has_auto_brace_completion_close_key(_close_key) {
    CodeEdit.init_method_has_auto_brace_completion_close_key();
    return _call_native_mb_ret(
      CodeEdit._bindings.method_has_auto_brace_completion_close_key,
      this._owner,
			Variant.Type.BOOL,
    
      _close_key
    );
    
  }
  get_auto_brace_completion_close_key(_open_key) {
    CodeEdit.init_method_get_auto_brace_completion_close_key();
    return _call_native_mb_ret(
      CodeEdit._bindings.method_get_auto_brace_completion_close_key,
      this._owner,
			Variant.Type.STRING,
    
      _open_key
    );
    
  }
  set_draw_breakpoints_gutter(_enable) {
    CodeEdit.init_method_set_draw_breakpoints_gutter();
    return _call_native_mb_no_ret(
      CodeEdit._bindings.method_set_draw_breakpoints_gutter,
      this._owner,
      _enable
    );
    
  }
  is_drawing_breakpoints_gutter() {
    CodeEdit.init_method_is_drawing_breakpoints_gutter();
    return _call_native_mb_ret(
      CodeEdit._bindings.method_is_drawing_breakpoints_gutter,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_draw_bookmarks_gutter(_enable) {
    CodeEdit.init_method_set_draw_bookmarks_gutter();
    return _call_native_mb_no_ret(
      CodeEdit._bindings.method_set_draw_bookmarks_gutter,
      this._owner,
      _enable
    );
    
  }
  is_drawing_bookmarks_gutter() {
    CodeEdit.init_method_is_drawing_bookmarks_gutter();
    return _call_native_mb_ret(
      CodeEdit._bindings.method_is_drawing_bookmarks_gutter,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_draw_executing_lines_gutter(_enable) {
    CodeEdit.init_method_set_draw_executing_lines_gutter();
    return _call_native_mb_no_ret(
      CodeEdit._bindings.method_set_draw_executing_lines_gutter,
      this._owner,
      _enable
    );
    
  }
  is_drawing_executing_lines_gutter() {
    CodeEdit.init_method_is_drawing_executing_lines_gutter();
    return _call_native_mb_ret(
      CodeEdit._bindings.method_is_drawing_executing_lines_gutter,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_line_as_breakpoint(_line, _breakpointed) {
    CodeEdit.init_method_set_line_as_breakpoint();
    return _call_native_mb_no_ret(
      CodeEdit._bindings.method_set_line_as_breakpoint,
      this._owner,
      _line, _breakpointed
    );
    
  }
  is_line_breakpointed(_line) {
    CodeEdit.init_method_is_line_breakpointed();
    return _call_native_mb_ret(
      CodeEdit._bindings.method_is_line_breakpointed,
      this._owner,
			Variant.Type.BOOL,
    
      _line
    );
    
  }
  clear_breakpointed_lines() {
    CodeEdit.init_method_clear_breakpointed_lines();
    return _call_native_mb_no_ret(
      CodeEdit._bindings.method_clear_breakpointed_lines,
      this._owner,
      
    );
    
  }
  get_breakpointed_lines() {
    CodeEdit.init_method_get_breakpointed_lines();
    return _call_native_mb_ret(
      CodeEdit._bindings.method_get_breakpointed_lines,
      this._owner,
			Variant.Type.PACKED_INT32_ARRAY,
    
      
    );
    
  }
  set_line_as_bookmarked(_line, _bookmarked) {
    CodeEdit.init_method_set_line_as_bookmarked();
    return _call_native_mb_no_ret(
      CodeEdit._bindings.method_set_line_as_bookmarked,
      this._owner,
      _line, _bookmarked
    );
    
  }
  is_line_bookmarked(_line) {
    CodeEdit.init_method_is_line_bookmarked();
    return _call_native_mb_ret(
      CodeEdit._bindings.method_is_line_bookmarked,
      this._owner,
			Variant.Type.BOOL,
    
      _line
    );
    
  }
  clear_bookmarked_lines() {
    CodeEdit.init_method_clear_bookmarked_lines();
    return _call_native_mb_no_ret(
      CodeEdit._bindings.method_clear_bookmarked_lines,
      this._owner,
      
    );
    
  }
  get_bookmarked_lines() {
    CodeEdit.init_method_get_bookmarked_lines();
    return _call_native_mb_ret(
      CodeEdit._bindings.method_get_bookmarked_lines,
      this._owner,
			Variant.Type.PACKED_INT32_ARRAY,
    
      
    );
    
  }
  set_line_as_executing(_line, _executing) {
    CodeEdit.init_method_set_line_as_executing();
    return _call_native_mb_no_ret(
      CodeEdit._bindings.method_set_line_as_executing,
      this._owner,
      _line, _executing
    );
    
  }
  is_line_executing(_line) {
    CodeEdit.init_method_is_line_executing();
    return _call_native_mb_ret(
      CodeEdit._bindings.method_is_line_executing,
      this._owner,
			Variant.Type.BOOL,
    
      _line
    );
    
  }
  clear_executing_lines() {
    CodeEdit.init_method_clear_executing_lines();
    return _call_native_mb_no_ret(
      CodeEdit._bindings.method_clear_executing_lines,
      this._owner,
      
    );
    
  }
  get_executing_lines() {
    CodeEdit.init_method_get_executing_lines();
    return _call_native_mb_ret(
      CodeEdit._bindings.method_get_executing_lines,
      this._owner,
			Variant.Type.PACKED_INT32_ARRAY,
    
      
    );
    
  }
  set_draw_line_numbers(_enable) {
    CodeEdit.init_method_set_draw_line_numbers();
    return _call_native_mb_no_ret(
      CodeEdit._bindings.method_set_draw_line_numbers,
      this._owner,
      _enable
    );
    
  }
  is_draw_line_numbers_enabled() {
    CodeEdit.init_method_is_draw_line_numbers_enabled();
    return _call_native_mb_ret(
      CodeEdit._bindings.method_is_draw_line_numbers_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_line_numbers_zero_padded(_enable) {
    CodeEdit.init_method_set_line_numbers_zero_padded();
    return _call_native_mb_no_ret(
      CodeEdit._bindings.method_set_line_numbers_zero_padded,
      this._owner,
      _enable
    );
    
  }
  is_line_numbers_zero_padded() {
    CodeEdit.init_method_is_line_numbers_zero_padded();
    return _call_native_mb_ret(
      CodeEdit._bindings.method_is_line_numbers_zero_padded,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_draw_fold_gutter(_enable) {
    CodeEdit.init_method_set_draw_fold_gutter();
    return _call_native_mb_no_ret(
      CodeEdit._bindings.method_set_draw_fold_gutter,
      this._owner,
      _enable
    );
    
  }
  is_drawing_fold_gutter() {
    CodeEdit.init_method_is_drawing_fold_gutter();
    return _call_native_mb_ret(
      CodeEdit._bindings.method_is_drawing_fold_gutter,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_line_folding_enabled(_enabled) {
    CodeEdit.init_method_set_line_folding_enabled();
    return _call_native_mb_no_ret(
      CodeEdit._bindings.method_set_line_folding_enabled,
      this._owner,
      _enabled
    );
    
  }
  is_line_folding_enabled() {
    CodeEdit.init_method_is_line_folding_enabled();
    return _call_native_mb_ret(
      CodeEdit._bindings.method_is_line_folding_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  can_fold_line(_line) {
    CodeEdit.init_method_can_fold_line();
    return _call_native_mb_ret(
      CodeEdit._bindings.method_can_fold_line,
      this._owner,
			Variant.Type.BOOL,
    
      _line
    );
    
  }
  fold_line(_line) {
    CodeEdit.init_method_fold_line();
    return _call_native_mb_no_ret(
      CodeEdit._bindings.method_fold_line,
      this._owner,
      _line
    );
    
  }
  unfold_line(_line) {
    CodeEdit.init_method_unfold_line();
    return _call_native_mb_no_ret(
      CodeEdit._bindings.method_unfold_line,
      this._owner,
      _line
    );
    
  }
  fold_all_lines() {
    CodeEdit.init_method_fold_all_lines();
    return _call_native_mb_no_ret(
      CodeEdit._bindings.method_fold_all_lines,
      this._owner,
      
    );
    
  }
  unfold_all_lines() {
    CodeEdit.init_method_unfold_all_lines();
    return _call_native_mb_no_ret(
      CodeEdit._bindings.method_unfold_all_lines,
      this._owner,
      
    );
    
  }
  toggle_foldable_line(_line) {
    CodeEdit.init_method_toggle_foldable_line();
    return _call_native_mb_no_ret(
      CodeEdit._bindings.method_toggle_foldable_line,
      this._owner,
      _line
    );
    
  }
  toggle_foldable_lines_at_carets() {
    CodeEdit.init_method_toggle_foldable_lines_at_carets();
    return _call_native_mb_no_ret(
      CodeEdit._bindings.method_toggle_foldable_lines_at_carets,
      this._owner,
      
    );
    
  }
  is_line_folded(_line) {
    CodeEdit.init_method_is_line_folded();
    return _call_native_mb_ret(
      CodeEdit._bindings.method_is_line_folded,
      this._owner,
			Variant.Type.BOOL,
    
      _line
    );
    
  }
  get_folded_lines() {
    CodeEdit.init_method_get_folded_lines();
    return _call_native_mb_ret(
      CodeEdit._bindings.method_get_folded_lines,
      this._owner,
			Variant.Type.ARRAY,
      
    );
    
  }
  create_code_region() {
    CodeEdit.init_method_create_code_region();
    return _call_native_mb_no_ret(
      CodeEdit._bindings.method_create_code_region,
      this._owner,
      
    );
    
  }
  get_code_region_start_tag() {
    CodeEdit.init_method_get_code_region_start_tag();
    return _call_native_mb_ret(
      CodeEdit._bindings.method_get_code_region_start_tag,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  get_code_region_end_tag() {
    CodeEdit.init_method_get_code_region_end_tag();
    return _call_native_mb_ret(
      CodeEdit._bindings.method_get_code_region_end_tag,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  set_code_region_tags(_start, _end) {
    CodeEdit.init_method_set_code_region_tags();
    return _call_native_mb_no_ret(
      CodeEdit._bindings.method_set_code_region_tags,
      this._owner,
      _start, _end
    );
    
  }
  is_line_code_region_start(_line) {
    CodeEdit.init_method_is_line_code_region_start();
    return _call_native_mb_ret(
      CodeEdit._bindings.method_is_line_code_region_start,
      this._owner,
			Variant.Type.BOOL,
    
      _line
    );
    
  }
  is_line_code_region_end(_line) {
    CodeEdit.init_method_is_line_code_region_end();
    return _call_native_mb_ret(
      CodeEdit._bindings.method_is_line_code_region_end,
      this._owner,
			Variant.Type.BOOL,
    
      _line
    );
    
  }
  add_string_delimiter(_start_key, _end_key, _line_only) {
    CodeEdit.init_method_add_string_delimiter();
    return _call_native_mb_no_ret(
      CodeEdit._bindings.method_add_string_delimiter,
      this._owner,
      _start_key, _end_key, _line_only
    );
    
  }
  remove_string_delimiter(_start_key) {
    CodeEdit.init_method_remove_string_delimiter();
    return _call_native_mb_no_ret(
      CodeEdit._bindings.method_remove_string_delimiter,
      this._owner,
      _start_key
    );
    
  }
  has_string_delimiter(_start_key) {
    CodeEdit.init_method_has_string_delimiter();
    return _call_native_mb_ret(
      CodeEdit._bindings.method_has_string_delimiter,
      this._owner,
			Variant.Type.BOOL,
    
      _start_key
    );
    
  }
  set_string_delimiters(_string_delimiters) {
    CodeEdit.init_method_set_string_delimiters();
    return _call_native_mb_no_ret(
      CodeEdit._bindings.method_set_string_delimiters,
      this._owner,
      _string_delimiters
    );
    
  }
  clear_string_delimiters() {
    CodeEdit.init_method_clear_string_delimiters();
    return _call_native_mb_no_ret(
      CodeEdit._bindings.method_clear_string_delimiters,
      this._owner,
      
    );
    
  }
  get_string_delimiters() {
    CodeEdit.init_method_get_string_delimiters();
    return _call_native_mb_ret(
      CodeEdit._bindings.method_get_string_delimiters,
      this._owner,
			Variant.Type.ARRAY,
      
    );
    
  }
  is_in_string(_line, _column) {
    CodeEdit.init_method_is_in_string();
    return _call_native_mb_ret(
      CodeEdit._bindings.method_is_in_string,
      this._owner,
			Variant.Type.INT,
    
      _line, _column
    );
    
  }
  add_comment_delimiter(_start_key, _end_key, _line_only) {
    CodeEdit.init_method_add_comment_delimiter();
    return _call_native_mb_no_ret(
      CodeEdit._bindings.method_add_comment_delimiter,
      this._owner,
      _start_key, _end_key, _line_only
    );
    
  }
  remove_comment_delimiter(_start_key) {
    CodeEdit.init_method_remove_comment_delimiter();
    return _call_native_mb_no_ret(
      CodeEdit._bindings.method_remove_comment_delimiter,
      this._owner,
      _start_key
    );
    
  }
  has_comment_delimiter(_start_key) {
    CodeEdit.init_method_has_comment_delimiter();
    return _call_native_mb_ret(
      CodeEdit._bindings.method_has_comment_delimiter,
      this._owner,
			Variant.Type.BOOL,
    
      _start_key
    );
    
  }
  set_comment_delimiters(_comment_delimiters) {
    CodeEdit.init_method_set_comment_delimiters();
    return _call_native_mb_no_ret(
      CodeEdit._bindings.method_set_comment_delimiters,
      this._owner,
      _comment_delimiters
    );
    
  }
  clear_comment_delimiters() {
    CodeEdit.init_method_clear_comment_delimiters();
    return _call_native_mb_no_ret(
      CodeEdit._bindings.method_clear_comment_delimiters,
      this._owner,
      
    );
    
  }
  get_comment_delimiters() {
    CodeEdit.init_method_get_comment_delimiters();
    return _call_native_mb_ret(
      CodeEdit._bindings.method_get_comment_delimiters,
      this._owner,
			Variant.Type.ARRAY,
      
    );
    
  }
  is_in_comment(_line, _column) {
    CodeEdit.init_method_is_in_comment();
    return _call_native_mb_ret(
      CodeEdit._bindings.method_is_in_comment,
      this._owner,
			Variant.Type.INT,
    
      _line, _column
    );
    
  }
  get_delimiter_start_key(_delimiter_index) {
    CodeEdit.init_method_get_delimiter_start_key();
    return _call_native_mb_ret(
      CodeEdit._bindings.method_get_delimiter_start_key,
      this._owner,
			Variant.Type.STRING,
    
      _delimiter_index
    );
    
  }
  get_delimiter_end_key(_delimiter_index) {
    CodeEdit.init_method_get_delimiter_end_key();
    return _call_native_mb_ret(
      CodeEdit._bindings.method_get_delimiter_end_key,
      this._owner,
			Variant.Type.STRING,
    
      _delimiter_index
    );
    
  }
  get_delimiter_start_position(_line, _column) {
    CodeEdit.init_method_get_delimiter_start_position();
    return _call_native_mb_ret(
      CodeEdit._bindings.method_get_delimiter_start_position,
      this._owner,
			Variant.Type.VECTOR2,
    
      _line, _column
    );
    
  }
  get_delimiter_end_position(_line, _column) {
    CodeEdit.init_method_get_delimiter_end_position();
    return _call_native_mb_ret(
      CodeEdit._bindings.method_get_delimiter_end_position,
      this._owner,
			Variant.Type.VECTOR2,
    
      _line, _column
    );
    
  }
  set_code_hint(_code_hint) {
    CodeEdit.init_method_set_code_hint();
    return _call_native_mb_no_ret(
      CodeEdit._bindings.method_set_code_hint,
      this._owner,
      _code_hint
    );
    
  }
  set_code_hint_draw_below(_draw_below) {
    CodeEdit.init_method_set_code_hint_draw_below();
    return _call_native_mb_no_ret(
      CodeEdit._bindings.method_set_code_hint_draw_below,
      this._owner,
      _draw_below
    );
    
  }
  get_text_for_code_completion() {
    CodeEdit.init_method_get_text_for_code_completion();
    return _call_native_mb_ret(
      CodeEdit._bindings.method_get_text_for_code_completion,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  request_code_completion(_force) {
    CodeEdit.init_method_request_code_completion();
    return _call_native_mb_no_ret(
      CodeEdit._bindings.method_request_code_completion,
      this._owner,
      _force
    );
    
  }
  add_code_completion_option(_type, _display_text, _insert_text, _text_color, _icon, _value, _location) {
    CodeEdit.init_method_add_code_completion_option();
    return _call_native_mb_no_ret(
      CodeEdit._bindings.method_add_code_completion_option,
      this._owner,
      _type, _display_text, _insert_text, _text_color, _icon, _value, _location
    );
    
  }
  update_code_completion_options(_force) {
    CodeEdit.init_method_update_code_completion_options();
    return _call_native_mb_no_ret(
      CodeEdit._bindings.method_update_code_completion_options,
      this._owner,
      _force
    );
    
  }
  get_code_completion_options() {
    CodeEdit.init_method_get_code_completion_options();
    return _call_native_mb_ret(
      CodeEdit._bindings.method_get_code_completion_options,
      this._owner,
			Variant.Type.ARRAY,
      
    );
    
  }
  get_code_completion_option(_index) {
    CodeEdit.init_method_get_code_completion_option();
    return _call_native_mb_ret(
      CodeEdit._bindings.method_get_code_completion_option,
      this._owner,
			Variant.Type.DICTIONARY,
    
      _index
    );
    
  }
  get_code_completion_selected_index() {
    CodeEdit.init_method_get_code_completion_selected_index();
    return _call_native_mb_ret(
      CodeEdit._bindings.method_get_code_completion_selected_index,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_code_completion_selected_index(_index) {
    CodeEdit.init_method_set_code_completion_selected_index();
    return _call_native_mb_no_ret(
      CodeEdit._bindings.method_set_code_completion_selected_index,
      this._owner,
      _index
    );
    
  }
  confirm_code_completion(_replace) {
    CodeEdit.init_method_confirm_code_completion();
    return _call_native_mb_no_ret(
      CodeEdit._bindings.method_confirm_code_completion,
      this._owner,
      _replace
    );
    
  }
  cancel_code_completion() {
    CodeEdit.init_method_cancel_code_completion();
    return _call_native_mb_no_ret(
      CodeEdit._bindings.method_cancel_code_completion,
      this._owner,
      
    );
    
  }
  set_code_completion_enabled(_enable) {
    CodeEdit.init_method_set_code_completion_enabled();
    return _call_native_mb_no_ret(
      CodeEdit._bindings.method_set_code_completion_enabled,
      this._owner,
      _enable
    );
    
  }
  is_code_completion_enabled() {
    CodeEdit.init_method_is_code_completion_enabled();
    return _call_native_mb_ret(
      CodeEdit._bindings.method_is_code_completion_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_code_completion_prefixes(_prefixes) {
    CodeEdit.init_method_set_code_completion_prefixes();
    return _call_native_mb_no_ret(
      CodeEdit._bindings.method_set_code_completion_prefixes,
      this._owner,
      _prefixes
    );
    
  }
  get_code_completion_prefixes() {
    CodeEdit.init_method_get_code_completion_prefixes();
    return _call_native_mb_ret(
      CodeEdit._bindings.method_get_code_completion_prefixes,
      this._owner,
			Variant.Type.ARRAY,
      
    );
    
  }
  set_line_length_guidelines(_guideline_columns) {
    CodeEdit.init_method_set_line_length_guidelines();
    return _call_native_mb_no_ret(
      CodeEdit._bindings.method_set_line_length_guidelines,
      this._owner,
      _guideline_columns
    );
    
  }
  get_line_length_guidelines() {
    CodeEdit.init_method_get_line_length_guidelines();
    return _call_native_mb_ret(
      CodeEdit._bindings.method_get_line_length_guidelines,
      this._owner,
			Variant.Type.ARRAY,
      
    );
    
  }
  set_symbol_lookup_on_click_enabled(_enable) {
    CodeEdit.init_method_set_symbol_lookup_on_click_enabled();
    return _call_native_mb_no_ret(
      CodeEdit._bindings.method_set_symbol_lookup_on_click_enabled,
      this._owner,
      _enable
    );
    
  }
  is_symbol_lookup_on_click_enabled() {
    CodeEdit.init_method_is_symbol_lookup_on_click_enabled();
    return _call_native_mb_ret(
      CodeEdit._bindings.method_is_symbol_lookup_on_click_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  get_text_for_symbol_lookup() {
    CodeEdit.init_method_get_text_for_symbol_lookup();
    return _call_native_mb_ret(
      CodeEdit._bindings.method_get_text_for_symbol_lookup,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  get_text_with_cursor_char(_line, _column) {
    CodeEdit.init_method_get_text_with_cursor_char();
    return _call_native_mb_ret(
      CodeEdit._bindings.method_get_text_with_cursor_char,
      this._owner,
			Variant.Type.STRING,
    
      _line, _column
    );
    
  }
  set_symbol_lookup_word_as_valid(_valid) {
    CodeEdit.init_method_set_symbol_lookup_word_as_valid();
    return _call_native_mb_no_ret(
      CodeEdit._bindings.method_set_symbol_lookup_word_as_valid,
      this._owner,
      _valid
    );
    
  }
  move_lines_up() {
    CodeEdit.init_method_move_lines_up();
    return _call_native_mb_no_ret(
      CodeEdit._bindings.method_move_lines_up,
      this._owner,
      
    );
    
  }
  move_lines_down() {
    CodeEdit.init_method_move_lines_down();
    return _call_native_mb_no_ret(
      CodeEdit._bindings.method_move_lines_down,
      this._owner,
      
    );
    
  }
  delete_lines() {
    CodeEdit.init_method_delete_lines();
    return _call_native_mb_no_ret(
      CodeEdit._bindings.method_delete_lines,
      this._owner,
      
    );
    
  }
  duplicate_selection() {
    CodeEdit.init_method_duplicate_selection();
    return _call_native_mb_no_ret(
      CodeEdit._bindings.method_duplicate_selection,
      this._owner,
      
    );
    
  }
  duplicate_lines() {
    CodeEdit.init_method_duplicate_lines();
    return _call_native_mb_no_ret(
      CodeEdit._bindings.method_duplicate_lines,
      this._owner,
      
    );
    
  }
  
get symbol_lookup_on_click () {
  return this.is_symbol_lookup_on_click_enabled();
}
set symbol_lookup_on_click (new_value) {
  this.set_symbol_lookup_on_click_enabled(new_value);
}
get line_folding () {
  return this.is_line_folding_enabled();
}
set line_folding (new_value) {
  this.set_line_folding_enabled(new_value);
}
get line_length_guidelines () {
  return this.get_line_length_guidelines();
}
set line_length_guidelines (new_value) {
  this.set_line_length_guidelines(new_value);
}
get gutters_draw_breakpoints_gutter () {
  return this.is_drawing_breakpoints_gutter();
}
set gutters_draw_breakpoints_gutter (new_value) {
  this.set_draw_breakpoints_gutter(new_value);
}
get gutters_draw_bookmarks () {
  return this.is_drawing_bookmarks_gutter();
}
set gutters_draw_bookmarks (new_value) {
  this.set_draw_bookmarks_gutter(new_value);
}
get gutters_draw_executing_lines () {
  return this.is_drawing_executing_lines_gutter();
}
set gutters_draw_executing_lines (new_value) {
  this.set_draw_executing_lines_gutter(new_value);
}
get gutters_draw_line_numbers () {
  return this.is_draw_line_numbers_enabled();
}
set gutters_draw_line_numbers (new_value) {
  this.set_draw_line_numbers(new_value);
}
get gutters_zero_pad_line_numbers () {
  return this.is_line_numbers_zero_padded();
}
set gutters_zero_pad_line_numbers (new_value) {
  this.set_line_numbers_zero_padded(new_value);
}
get gutters_draw_fold_gutter () {
  return this.is_drawing_fold_gutter();
}
set gutters_draw_fold_gutter (new_value) {
  this.set_draw_fold_gutter(new_value);
}
get delimiter_strings () {
  return this.get_string_delimiters();
}
set delimiter_strings (new_value) {
  this.set_string_delimiters(new_value);
}
get delimiter_comments () {
  return this.get_comment_delimiters();
}
set delimiter_comments (new_value) {
  this.set_comment_delimiters(new_value);
}
get code_completion_enabled () {
  return this.is_code_completion_enabled();
}
set code_completion_enabled (new_value) {
  this.set_code_completion_enabled(new_value);
}
get code_completion_prefixes () {
  return this.get_code_completion_prefixes();
}
set code_completion_prefixes (new_value) {
  this.set_code_completion_prefixes(new_value);
}
get indent_size () {
  return this.get_indent_size();
}
set indent_size (new_value) {
  this.set_indent_size(new_value);
}
get indent_use_spaces () {
  return this.is_indent_using_spaces();
}
set indent_use_spaces (new_value) {
  this.set_indent_using_spaces(new_value);
}
get indent_automatic () {
  return this.is_auto_indent_enabled();
}
set indent_automatic (new_value) {
  this.set_auto_indent_enabled(new_value);
}
get indent_automatic_prefixes () {
  return this.get_auto_indent_prefixes();
}
set indent_automatic_prefixes (new_value) {
  this.set_auto_indent_prefixes(new_value);
}
get auto_brace_completion_enabled () {
  return this.is_auto_brace_completion_enabled();
}
set auto_brace_completion_enabled (new_value) {
  this.set_auto_brace_completion_enabled(new_value);
}
get auto_brace_completion_highlight_matching () {
  return this.is_highlight_matching_braces_enabled();
}
set auto_brace_completion_highlight_matching (new_value) {
  this.set_highlight_matching_braces_enabled(new_value);
}
get auto_brace_completion_pairs () {
  return this.get_auto_brace_completion_pairs();
}
set auto_brace_completion_pairs (new_value) {
  this.set_auto_brace_completion_pairs(new_value);
}

  static CodeCompletionKind = {
    KIND_CLASS: 0,
    KIND_FUNCTION: 1,
    KIND_SIGNAL: 2,
    KIND_VARIABLE: 3,
    KIND_MEMBER: 4,
    KIND_ENUM: 5,
    KIND_CONSTANT: 6,
    KIND_NODE_PATH: 7,
    KIND_FILE_PATH: 8,
    KIND_PLAIN_TEXT: 9,
  }
  static CodeCompletionLocation = {
    LOCATION_LOCAL: 0,
    LOCATION_PARENT_MASK: 256,
    LOCATION_OTHER_USER_CODE: 512,
    LOCATION_OTHER: 1024,
  }
}