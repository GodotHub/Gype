import * as internal from '__internal__';
import { Vector2 } from 'src/js_godot/variant/vector2'
import { GDString } from 'src/js_godot/variant/gd_string'
import { Vector2i } from 'src/js_godot/variant/vector2i'
import { StringName } from 'src/js_godot/variant/string_name'
import { PackedStringArray } from 'src/js_godot/variant/packed_string_array'
import { PackedInt32Array } from 'src/js_godot/variant/packed_int32_array'
import { Callable } from 'src/js_godot/variant/callable'
import { Rect2i } from 'src/js_godot/variant/rect2i'
import { Variant } from 'src/js_godot/variant/variant'
import { GDArray } from 'src/js_godot/variant/gd_array'
import { Color } from 'src/js_godot/variant/color'
import { Control } from 'src/js_godot/classes/control'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_has_ime_text;
    method_cancel_ime;
    method_apply_ime;
    method_set_editable;
    method_is_editable;
    method_set_text_direction;
    method_get_text_direction;
    method_set_language;
    method_get_language;
    method_set_structured_text_bidi_override;
    method_get_structured_text_bidi_override;
    method_set_structured_text_bidi_override_options;
    method_get_structured_text_bidi_override_options;
    method_set_tab_size;
    method_get_tab_size;
    method_set_indent_wrapped_lines;
    method_is_indent_wrapped_lines;
    method_set_overtype_mode_enabled;
    method_is_overtype_mode_enabled;
    method_set_context_menu_enabled;
    method_is_context_menu_enabled;
    method_set_shortcut_keys_enabled;
    method_is_shortcut_keys_enabled;
    method_set_virtual_keyboard_enabled;
    method_is_virtual_keyboard_enabled;
    method_set_middle_mouse_paste_enabled;
    method_is_middle_mouse_paste_enabled;
    method_clear;
    method_set_text;
    method_get_text;
    method_get_line_count;
    method_set_placeholder;
    method_get_placeholder;
    method_set_line;
    method_get_line;
    method_get_line_width;
    method_get_line_height;
    method_get_indent_level;
    method_get_first_non_whitespace_column;
    method_swap_lines;
    method_insert_line_at;
    method_remove_line_at;
    method_insert_text_at_caret;
    method_insert_text;
    method_remove_text;
    method_get_last_unhidden_line;
    method_get_next_visible_line_offset_from;
    method_get_next_visible_line_index_offset_from;
    method_backspace;
    method_cut;
    method_copy;
    method_paste;
    method_paste_primary_clipboard;
    method_start_action;
    method_end_action;
    method_begin_complex_operation;
    method_end_complex_operation;
    method_has_undo;
    method_has_redo;
    method_undo;
    method_redo;
    method_clear_undo_history;
    method_tag_saved_version;
    method_get_version;
    method_get_saved_version;
    method_set_search_text;
    method_set_search_flags;
    method_search;
    method_set_tooltip_request_func;
    method_get_local_mouse_pos;
    method_get_word_at_pos;
    method_get_line_column_at_pos;
    method_get_pos_at_line_column;
    method_get_rect_at_line_column;
    method_get_minimap_line_at_pos;
    method_is_dragging_cursor;
    method_is_mouse_over_selection;
    method_set_caret_type;
    method_get_caret_type;
    method_set_caret_blink_enabled;
    method_is_caret_blink_enabled;
    method_set_caret_blink_interval;
    method_get_caret_blink_interval;
    method_set_draw_caret_when_editable_disabled;
    method_is_drawing_caret_when_editable_disabled;
    method_set_move_caret_on_right_click_enabled;
    method_is_move_caret_on_right_click_enabled;
    method_set_caret_mid_grapheme_enabled;
    method_is_caret_mid_grapheme_enabled;
    method_set_multiple_carets_enabled;
    method_is_multiple_carets_enabled;
    method_add_caret;
    method_remove_caret;
    method_remove_secondary_carets;
    method_get_caret_count;
    method_add_caret_at_carets;
    method_get_sorted_carets;
    method_collapse_carets;
    method_merge_overlapping_carets;
    method_begin_multicaret_edit;
    method_end_multicaret_edit;
    method_is_in_mulitcaret_edit;
    method_multicaret_edit_ignore_caret;
    method_is_caret_visible;
    method_get_caret_draw_pos;
    method_set_caret_line;
    method_get_caret_line;
    method_set_caret_column;
    method_get_caret_column;
    method_get_caret_wrap_index;
    method_get_word_under_caret;
    method_set_use_default_word_separators;
    method_is_default_word_separators_enabled;
    method_set_use_custom_word_separators;
    method_is_custom_word_separators_enabled;
    method_set_custom_word_separators;
    method_get_custom_word_separators;
    method_set_selecting_enabled;
    method_is_selecting_enabled;
    method_set_deselect_on_focus_loss_enabled;
    method_is_deselect_on_focus_loss_enabled;
    method_set_drag_and_drop_selection_enabled;
    method_is_drag_and_drop_selection_enabled;
    method_set_selection_mode;
    method_get_selection_mode;
    method_select_all;
    method_select_word_under_caret;
    method_add_selection_for_next_occurrence;
    method_skip_selection_for_next_occurrence;
    method_select;
    method_has_selection;
    method_get_selected_text;
    method_get_selection_at_line_column;
    method_get_line_ranges_from_carets;
    method_get_selection_origin_line;
    method_get_selection_origin_column;
    method_set_selection_origin_line;
    method_set_selection_origin_column;
    method_get_selection_from_line;
    method_get_selection_from_column;
    method_get_selection_to_line;
    method_get_selection_to_column;
    method_is_caret_after_selection_origin;
    method_deselect;
    method_delete_selection;
    method_set_line_wrapping_mode;
    method_get_line_wrapping_mode;
    method_set_autowrap_mode;
    method_get_autowrap_mode;
    method_is_line_wrapped;
    method_get_line_wrap_count;
    method_get_line_wrap_index_at_column;
    method_get_line_wrapped_text;
    method_set_smooth_scroll_enabled;
    method_is_smooth_scroll_enabled;
    method_get_v_scroll_bar;
    method_get_h_scroll_bar;
    method_set_v_scroll;
    method_get_v_scroll;
    method_set_h_scroll;
    method_get_h_scroll;
    method_set_scroll_past_end_of_file_enabled;
    method_is_scroll_past_end_of_file_enabled;
    method_set_v_scroll_speed;
    method_get_v_scroll_speed;
    method_set_fit_content_height_enabled;
    method_is_fit_content_height_enabled;
    method_get_scroll_pos_for_line;
    method_set_line_as_first_visible;
    method_get_first_visible_line;
    method_set_line_as_center_visible;
    method_set_line_as_last_visible;
    method_get_last_full_visible_line;
    method_get_last_full_visible_line_wrap_index;
    method_get_visible_line_count;
    method_get_visible_line_count_in_range;
    method_get_total_visible_line_count;
    method_adjust_viewport_to_caret;
    method_center_viewport_to_caret;
    method_set_draw_minimap;
    method_is_drawing_minimap;
    method_set_minimap_width;
    method_get_minimap_width;
    method_get_minimap_visible_lines;
    method_add_gutter;
    method_remove_gutter;
    method_get_gutter_count;
    method_set_gutter_name;
    method_get_gutter_name;
    method_set_gutter_type;
    method_get_gutter_type;
    method_set_gutter_width;
    method_get_gutter_width;
    method_set_gutter_draw;
    method_is_gutter_drawn;
    method_set_gutter_clickable;
    method_is_gutter_clickable;
    method_set_gutter_overwritable;
    method_is_gutter_overwritable;
    method_merge_gutters;
    method_set_gutter_custom_draw;
    method_get_total_gutter_width;
    method_set_line_gutter_metadata;
    method_get_line_gutter_metadata;
    method_set_line_gutter_text;
    method_get_line_gutter_text;
    method_set_line_gutter_icon;
    method_get_line_gutter_icon;
    method_set_line_gutter_item_color;
    method_get_line_gutter_item_color;
    method_set_line_gutter_clickable;
    method_is_line_gutter_clickable;
    method_set_line_background_color;
    method_get_line_background_color;
    method_set_syntax_highlighter;
    method_get_syntax_highlighter;
    method_set_highlight_current_line;
    method_is_highlight_current_line_enabled;
    method_set_highlight_all_occurrences;
    method_is_highlight_all_occurrences_enabled;
    method_get_draw_control_chars;
    method_set_draw_control_chars;
    method_set_draw_tabs;
    method_is_drawing_tabs;
    method_set_draw_spaces;
    method_is_drawing_spaces;
    method_get_menu;
    method_is_menu_visible;
    method_menu_option;
    method_adjust_carets_after_edit;
    method_get_caret_index_edit_order;
    method_get_selection_line;
    method_get_selection_column;
}


export class TextEdit extends Control{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("TextEdit");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("has_ime_text");
        this._bindings.method_has_ime_text = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("cancel_ime");
        this._bindings.method_cancel_ime = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3218959716
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("apply_ime");
        this._bindings.method_apply_ime = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3218959716
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("set_editable");
        this._bindings.method_set_editable = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("is_editable");
        this._bindings.method_is_editable = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("set_text_direction");
        this._bindings.method_set_text_direction = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          119160795
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("get_text_direction");
        this._bindings.method_get_text_direction = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          797257663
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("set_language");
        this._bindings.method_set_language = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          83702148
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("get_language");
        this._bindings.method_get_language = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          201670096
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("set_structured_text_bidi_override");
        this._bindings.method_set_structured_text_bidi_override = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          55961453
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("get_structured_text_bidi_override");
        this._bindings.method_get_structured_text_bidi_override = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3385126229
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("set_structured_text_bidi_override_options");
        this._bindings.method_set_structured_text_bidi_override_options = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          381264803
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("get_structured_text_bidi_override_options");
        this._bindings.method_get_structured_text_bidi_override_options = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3995934104
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("set_tab_size");
        this._bindings.method_set_tab_size = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("get_tab_size");
        this._bindings.method_get_tab_size = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("set_indent_wrapped_lines");
        this._bindings.method_set_indent_wrapped_lines = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("is_indent_wrapped_lines");
        this._bindings.method_is_indent_wrapped_lines = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("set_overtype_mode_enabled");
        this._bindings.method_set_overtype_mode_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("is_overtype_mode_enabled");
        this._bindings.method_is_overtype_mode_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("set_context_menu_enabled");
        this._bindings.method_set_context_menu_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("is_context_menu_enabled");
        this._bindings.method_is_context_menu_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("set_shortcut_keys_enabled");
        this._bindings.method_set_shortcut_keys_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("is_shortcut_keys_enabled");
        this._bindings.method_is_shortcut_keys_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("set_virtual_keyboard_enabled");
        this._bindings.method_set_virtual_keyboard_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("is_virtual_keyboard_enabled");
        this._bindings.method_is_virtual_keyboard_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("set_middle_mouse_paste_enabled");
        this._bindings.method_set_middle_mouse_paste_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("is_middle_mouse_paste_enabled");
        this._bindings.method_is_middle_mouse_paste_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("clear");
        this._bindings.method_clear = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3218959716
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("set_text");
        this._bindings.method_set_text = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          83702148
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("get_text");
        this._bindings.method_get_text = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          201670096
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("get_line_count");
        this._bindings.method_get_line_count = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("set_placeholder");
        this._bindings.method_set_placeholder = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          83702148
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("get_placeholder");
        this._bindings.method_get_placeholder = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          201670096
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("set_line");
        this._bindings.method_set_line = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          501894301
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("get_line");
        this._bindings.method_get_line = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          844755477
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("get_line_width");
        this._bindings.method_get_line_width = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          688195400
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("get_line_height");
        this._bindings.method_get_line_height = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("get_indent_level");
        this._bindings.method_get_indent_level = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          923996154
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("get_first_non_whitespace_column");
        this._bindings.method_get_first_non_whitespace_column = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          923996154
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("swap_lines");
        this._bindings.method_swap_lines = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3937882851
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("insert_line_at");
        this._bindings.method_insert_line_at = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          501894301
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("remove_line_at");
        this._bindings.method_remove_line_at = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          972357352
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("insert_text_at_caret");
        this._bindings.method_insert_text_at_caret = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2697778442
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("insert_text");
        this._bindings.method_insert_text = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1881564334
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("remove_text");
        this._bindings.method_remove_text = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          4275841770
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("get_last_unhidden_line");
        this._bindings.method_get_last_unhidden_line = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("get_next_visible_line_offset_from");
        this._bindings.method_get_next_visible_line_offset_from = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3175239445
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("get_next_visible_line_index_offset_from");
        this._bindings.method_get_next_visible_line_index_offset_from = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3386475622
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("backspace");
        this._bindings.method_backspace = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1025054187
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("cut");
        this._bindings.method_cut = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1025054187
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("copy");
        this._bindings.method_copy = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1025054187
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("paste");
        this._bindings.method_paste = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1025054187
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("paste_primary_clipboard");
        this._bindings.method_paste_primary_clipboard = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1025054187
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("start_action");
        this._bindings.method_start_action = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2834827583
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("end_action");
        this._bindings.method_end_action = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3218959716
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("begin_complex_operation");
        this._bindings.method_begin_complex_operation = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3218959716
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("end_complex_operation");
        this._bindings.method_end_complex_operation = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3218959716
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("has_undo");
        this._bindings.method_has_undo = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("has_redo");
        this._bindings.method_has_redo = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("undo");
        this._bindings.method_undo = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3218959716
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("redo");
        this._bindings.method_redo = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3218959716
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("clear_undo_history");
        this._bindings.method_clear_undo_history = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3218959716
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("tag_saved_version");
        this._bindings.method_tag_saved_version = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3218959716
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("get_version");
        this._bindings.method_get_version = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("get_saved_version");
        this._bindings.method_get_saved_version = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("set_search_text");
        this._bindings.method_set_search_text = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          83702148
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("set_search_flags");
        this._bindings.method_set_search_flags = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("search");
        this._bindings.method_search = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1203739136
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("set_tooltip_request_func");
        this._bindings.method_set_tooltip_request_func = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1611583062
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("get_local_mouse_pos");
        this._bindings.method_get_local_mouse_pos = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3341600327
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("get_word_at_pos");
        this._bindings.method_get_word_at_pos = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3674420000
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("get_line_column_at_pos");
        this._bindings.method_get_line_column_at_pos = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          239517838
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("get_pos_at_line_column");
        this._bindings.method_get_pos_at_line_column = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          410388347
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("get_rect_at_line_column");
        this._bindings.method_get_rect_at_line_column = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3256618057
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("get_minimap_line_at_pos");
        this._bindings.method_get_minimap_line_at_pos = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2485466453
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("is_dragging_cursor");
        this._bindings.method_is_dragging_cursor = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("is_mouse_over_selection");
        this._bindings.method_is_mouse_over_selection = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1840282309
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("set_caret_type");
        this._bindings.method_set_caret_type = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1211596914
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("get_caret_type");
        this._bindings.method_get_caret_type = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2830252959
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("set_caret_blink_enabled");
        this._bindings.method_set_caret_blink_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("is_caret_blink_enabled");
        this._bindings.method_is_caret_blink_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("set_caret_blink_interval");
        this._bindings.method_set_caret_blink_interval = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("get_caret_blink_interval");
        this._bindings.method_get_caret_blink_interval = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("set_draw_caret_when_editable_disabled");
        this._bindings.method_set_draw_caret_when_editable_disabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("is_drawing_caret_when_editable_disabled");
        this._bindings.method_is_drawing_caret_when_editable_disabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("set_move_caret_on_right_click_enabled");
        this._bindings.method_set_move_caret_on_right_click_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("is_move_caret_on_right_click_enabled");
        this._bindings.method_is_move_caret_on_right_click_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("set_caret_mid_grapheme_enabled");
        this._bindings.method_set_caret_mid_grapheme_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("is_caret_mid_grapheme_enabled");
        this._bindings.method_is_caret_mid_grapheme_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("set_multiple_carets_enabled");
        this._bindings.method_set_multiple_carets_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("is_multiple_carets_enabled");
        this._bindings.method_is_multiple_carets_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("add_caret");
        this._bindings.method_add_caret = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          50157827
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("remove_caret");
        this._bindings.method_remove_caret = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("remove_secondary_carets");
        this._bindings.method_remove_secondary_carets = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3218959716
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("get_caret_count");
        this._bindings.method_get_caret_count = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("add_caret_at_carets");
        this._bindings.method_add_caret_at_carets = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("get_sorted_carets");
        this._bindings.method_get_sorted_carets = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2131714034
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("collapse_carets");
        this._bindings.method_collapse_carets = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          228654177
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("merge_overlapping_carets");
        this._bindings.method_merge_overlapping_carets = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3218959716
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("begin_multicaret_edit");
        this._bindings.method_begin_multicaret_edit = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3218959716
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("end_multicaret_edit");
        this._bindings.method_end_multicaret_edit = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3218959716
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("is_in_mulitcaret_edit");
        this._bindings.method_is_in_mulitcaret_edit = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("multicaret_edit_ignore_caret");
        this._bindings.method_multicaret_edit_ignore_caret = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1116898809
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("is_caret_visible");
        this._bindings.method_is_caret_visible = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1051549951
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("get_caret_draw_pos");
        this._bindings.method_get_caret_draw_pos = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          478253731
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("set_caret_line");
        this._bindings.method_set_caret_line = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1302582944
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("get_caret_line");
        this._bindings.method_get_caret_line = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1591665591
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("set_caret_column");
        this._bindings.method_set_caret_column = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3796796178
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("get_caret_column");
        this._bindings.method_get_caret_column = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1591665591
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("get_caret_wrap_index");
        this._bindings.method_get_caret_wrap_index = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1591665591
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("get_word_under_caret");
        this._bindings.method_get_word_under_caret = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3929349208
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("set_use_default_word_separators");
        this._bindings.method_set_use_default_word_separators = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("is_default_word_separators_enabled");
        this._bindings.method_is_default_word_separators_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("set_use_custom_word_separators");
        this._bindings.method_set_use_custom_word_separators = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("is_custom_word_separators_enabled");
        this._bindings.method_is_custom_word_separators_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("set_custom_word_separators");
        this._bindings.method_set_custom_word_separators = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          83702148
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("get_custom_word_separators");
        this._bindings.method_get_custom_word_separators = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          201670096
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("set_selecting_enabled");
        this._bindings.method_set_selecting_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("is_selecting_enabled");
        this._bindings.method_is_selecting_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("set_deselect_on_focus_loss_enabled");
        this._bindings.method_set_deselect_on_focus_loss_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("is_deselect_on_focus_loss_enabled");
        this._bindings.method_is_deselect_on_focus_loss_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("set_drag_and_drop_selection_enabled");
        this._bindings.method_set_drag_and_drop_selection_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("is_drag_and_drop_selection_enabled");
        this._bindings.method_is_drag_and_drop_selection_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("set_selection_mode");
        this._bindings.method_set_selection_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1658801786
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("get_selection_mode");
        this._bindings.method_get_selection_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3750106938
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("select_all");
        this._bindings.method_select_all = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3218959716
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("select_word_under_caret");
        this._bindings.method_select_word_under_caret = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1025054187
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("add_selection_for_next_occurrence");
        this._bindings.method_add_selection_for_next_occurrence = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3218959716
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("skip_selection_for_next_occurrence");
        this._bindings.method_skip_selection_for_next_occurrence = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3218959716
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("select");
        this._bindings.method_select = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2560984452
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("has_selection");
        this._bindings.method_has_selection = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2824505868
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("get_selected_text");
        this._bindings.method_get_selected_text = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2309358862
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("get_selection_at_line_column");
        this._bindings.method_get_selection_at_line_column = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1810224333
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("get_line_ranges_from_carets");
        this._bindings.method_get_line_ranges_from_carets = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2393089247
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("get_selection_origin_line");
        this._bindings.method_get_selection_origin_line = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1591665591
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("get_selection_origin_column");
        this._bindings.method_get_selection_origin_column = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1591665591
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("set_selection_origin_line");
        this._bindings.method_set_selection_origin_line = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          195434140
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("set_selection_origin_column");
        this._bindings.method_set_selection_origin_column = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2230941749
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("get_selection_from_line");
        this._bindings.method_get_selection_from_line = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1591665591
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("get_selection_from_column");
        this._bindings.method_get_selection_from_column = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1591665591
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("get_selection_to_line");
        this._bindings.method_get_selection_to_line = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1591665591
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("get_selection_to_column");
        this._bindings.method_get_selection_to_column = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1591665591
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("is_caret_after_selection_origin");
        this._bindings.method_is_caret_after_selection_origin = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1051549951
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("deselect");
        this._bindings.method_deselect = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1025054187
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("delete_selection");
        this._bindings.method_delete_selection = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1025054187
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("set_line_wrapping_mode");
        this._bindings.method_set_line_wrapping_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2525115309
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("get_line_wrapping_mode");
        this._bindings.method_get_line_wrapping_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3562716114
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("set_autowrap_mode");
        this._bindings.method_set_autowrap_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3289138044
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("get_autowrap_mode");
        this._bindings.method_get_autowrap_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1549071663
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("is_line_wrapped");
        this._bindings.method_is_line_wrapped = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1116898809
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("get_line_wrap_count");
        this._bindings.method_get_line_wrap_count = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          923996154
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("get_line_wrap_index_at_column");
        this._bindings.method_get_line_wrap_index_at_column = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3175239445
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("get_line_wrapped_text");
        this._bindings.method_get_line_wrapped_text = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          647634434
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("set_smooth_scroll_enabled");
        this._bindings.method_set_smooth_scroll_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("is_smooth_scroll_enabled");
        this._bindings.method_is_smooth_scroll_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("get_v_scroll_bar");
        this._bindings.method_get_v_scroll_bar = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3226026593
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("get_h_scroll_bar");
        this._bindings.method_get_h_scroll_bar = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3774687988
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("set_v_scroll");
        this._bindings.method_set_v_scroll = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("get_v_scroll");
        this._bindings.method_get_v_scroll = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("set_h_scroll");
        this._bindings.method_set_h_scroll = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("get_h_scroll");
        this._bindings.method_get_h_scroll = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("set_scroll_past_end_of_file_enabled");
        this._bindings.method_set_scroll_past_end_of_file_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("is_scroll_past_end_of_file_enabled");
        this._bindings.method_is_scroll_past_end_of_file_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("set_v_scroll_speed");
        this._bindings.method_set_v_scroll_speed = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("get_v_scroll_speed");
        this._bindings.method_get_v_scroll_speed = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("set_fit_content_height_enabled");
        this._bindings.method_set_fit_content_height_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("is_fit_content_height_enabled");
        this._bindings.method_is_fit_content_height_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("get_scroll_pos_for_line");
        this._bindings.method_get_scroll_pos_for_line = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3929084198
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("set_line_as_first_visible");
        this._bindings.method_set_line_as_first_visible = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2230941749
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("get_first_visible_line");
        this._bindings.method_get_first_visible_line = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("set_line_as_center_visible");
        this._bindings.method_set_line_as_center_visible = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2230941749
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("set_line_as_last_visible");
        this._bindings.method_set_line_as_last_visible = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2230941749
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("get_last_full_visible_line");
        this._bindings.method_get_last_full_visible_line = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("get_last_full_visible_line_wrap_index");
        this._bindings.method_get_last_full_visible_line_wrap_index = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("get_visible_line_count");
        this._bindings.method_get_visible_line_count = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("get_visible_line_count_in_range");
        this._bindings.method_get_visible_line_count_in_range = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3175239445
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("get_total_visible_line_count");
        this._bindings.method_get_total_visible_line_count = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("adjust_viewport_to_caret");
        this._bindings.method_adjust_viewport_to_caret = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1995695955
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("center_viewport_to_caret");
        this._bindings.method_center_viewport_to_caret = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1995695955
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("set_draw_minimap");
        this._bindings.method_set_draw_minimap = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("is_drawing_minimap");
        this._bindings.method_is_drawing_minimap = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("set_minimap_width");
        this._bindings.method_set_minimap_width = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("get_minimap_width");
        this._bindings.method_get_minimap_width = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("get_minimap_visible_lines");
        this._bindings.method_get_minimap_visible_lines = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("add_gutter");
        this._bindings.method_add_gutter = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1025054187
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("remove_gutter");
        this._bindings.method_remove_gutter = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("get_gutter_count");
        this._bindings.method_get_gutter_count = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("set_gutter_name");
        this._bindings.method_set_gutter_name = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          501894301
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("get_gutter_name");
        this._bindings.method_get_gutter_name = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          844755477
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("set_gutter_type");
        this._bindings.method_set_gutter_type = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1088959071
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("get_gutter_type");
        this._bindings.method_get_gutter_type = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1159699127
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("set_gutter_width");
        this._bindings.method_set_gutter_width = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3937882851
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("get_gutter_width");
        this._bindings.method_get_gutter_width = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          923996154
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("set_gutter_draw");
        this._bindings.method_set_gutter_draw = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          300928843
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("is_gutter_drawn");
        this._bindings.method_is_gutter_drawn = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1116898809
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("set_gutter_clickable");
        this._bindings.method_set_gutter_clickable = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          300928843
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("is_gutter_clickable");
        this._bindings.method_is_gutter_clickable = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1116898809
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("set_gutter_overwritable");
        this._bindings.method_set_gutter_overwritable = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          300928843
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("is_gutter_overwritable");
        this._bindings.method_is_gutter_overwritable = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1116898809
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("merge_gutters");
        this._bindings.method_merge_gutters = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3937882851
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("set_gutter_custom_draw");
        this._bindings.method_set_gutter_custom_draw = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          957362965
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("get_total_gutter_width");
        this._bindings.method_get_total_gutter_width = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("set_line_gutter_metadata");
        this._bindings.method_set_line_gutter_metadata = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2060538656
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("get_line_gutter_metadata");
        this._bindings.method_get_line_gutter_metadata = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          678354945
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("set_line_gutter_text");
        this._bindings.method_set_line_gutter_text = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2285447957
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("get_line_gutter_text");
        this._bindings.method_get_line_gutter_text = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1391810591
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("set_line_gutter_icon");
        this._bindings.method_set_line_gutter_icon = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          176101966
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("get_line_gutter_icon");
        this._bindings.method_get_line_gutter_icon = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2584904275
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("set_line_gutter_item_color");
        this._bindings.method_set_line_gutter_item_color = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3733378741
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("get_line_gutter_item_color");
        this._bindings.method_get_line_gutter_item_color = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2165839948
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("set_line_gutter_clickable");
        this._bindings.method_set_line_gutter_clickable = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1383440665
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("is_line_gutter_clickable");
        this._bindings.method_is_line_gutter_clickable = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2522259332
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("set_line_background_color");
        this._bindings.method_set_line_background_color = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2878471219
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("get_line_background_color");
        this._bindings.method_get_line_background_color = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3457211756
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("set_syntax_highlighter");
        this._bindings.method_set_syntax_highlighter = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2765644541
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("get_syntax_highlighter");
        this._bindings.method_get_syntax_highlighter = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2721131626
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("set_highlight_current_line");
        this._bindings.method_set_highlight_current_line = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("is_highlight_current_line_enabled");
        this._bindings.method_is_highlight_current_line_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("set_highlight_all_occurrences");
        this._bindings.method_set_highlight_all_occurrences = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("is_highlight_all_occurrences_enabled");
        this._bindings.method_is_highlight_all_occurrences_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("get_draw_control_chars");
        this._bindings.method_get_draw_control_chars = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("set_draw_control_chars");
        this._bindings.method_set_draw_control_chars = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("set_draw_tabs");
        this._bindings.method_set_draw_tabs = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("is_drawing_tabs");
        this._bindings.method_is_drawing_tabs = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("set_draw_spaces");
        this._bindings.method_set_draw_spaces = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("is_drawing_spaces");
        this._bindings.method_is_drawing_spaces = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("get_menu");
        this._bindings.method_get_menu = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          229722558
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("is_menu_visible");
        this._bindings.method_is_menu_visible = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("menu_option");
        this._bindings.method_menu_option = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("adjust_carets_after_edit");
        this._bindings.method_adjust_carets_after_edit = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1770277138
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("get_caret_index_edit_order");
        this._bindings.method_get_caret_index_edit_order = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          969006518
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("get_selection_line");
        this._bindings.method_get_selection_line = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1591665591
        );
      }
      {
        let classname = new StringName("TextEdit");
        let methodname = new StringName("get_selection_column");
        this._bindings.method_get_selection_column = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1591665591
        );
      }
  }
  _handle_unicode_input(_unicode_char, _caret_index) {
  }
  _backspace(_caret_index) {
  }
  _cut(_caret_index) {
  }
  _copy(_caret_index) {
  }
  _paste(_caret_index) {
  }
  _paste_primary_clipboard(_caret_index) {
  }
  has_ime_text() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_has_ime_text,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  cancel_ime() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_cancel_ime,
      this._owner,
      
    );
    
  }
  apply_ime() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_apply_ime,
      this._owner,
      
    );
    
  }
  set_editable(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_editable,
      this._owner,
      _enabled
    );
    
  }
  is_editable() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_editable,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_text_direction(_direction) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_text_direction,
      this._owner,
      _direction
    );
    
  }
  get_text_direction() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_text_direction,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_language(_language) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_language,
      this._owner,
      _language
    );
    
  }
  get_language() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_language,
      this._owner,
			Variant.Type.STRING
    ,
      
    );
    
  }
  set_structured_text_bidi_override(_parser) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_structured_text_bidi_override,
      this._owner,
      _parser
    );
    
  }
  get_structured_text_bidi_override() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_structured_text_bidi_override,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_structured_text_bidi_override_options(_args) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_structured_text_bidi_override_options,
      this._owner,
      _args
    );
    
  }
  get_structured_text_bidi_override_options() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_structured_text_bidi_override_options,
      this._owner,
			Variant.Type.ARRAY
    ,
      
    );
    
  }
  set_tab_size(_size) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_tab_size,
      this._owner,
      _size
    );
    
  }
  get_tab_size() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_tab_size,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_indent_wrapped_lines(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_indent_wrapped_lines,
      this._owner,
      _enabled
    );
    
  }
  is_indent_wrapped_lines() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_indent_wrapped_lines,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_overtype_mode_enabled(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_overtype_mode_enabled,
      this._owner,
      _enabled
    );
    
  }
  is_overtype_mode_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_overtype_mode_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_context_menu_enabled(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_context_menu_enabled,
      this._owner,
      _enabled
    );
    
  }
  is_context_menu_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_context_menu_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_shortcut_keys_enabled(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_shortcut_keys_enabled,
      this._owner,
      _enabled
    );
    
  }
  is_shortcut_keys_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_shortcut_keys_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_virtual_keyboard_enabled(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_virtual_keyboard_enabled,
      this._owner,
      _enabled
    );
    
  }
  is_virtual_keyboard_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_virtual_keyboard_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_middle_mouse_paste_enabled(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_middle_mouse_paste_enabled,
      this._owner,
      _enabled
    );
    
  }
  is_middle_mouse_paste_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_middle_mouse_paste_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  clear() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_clear,
      this._owner,
      
    );
    
  }
  set_text(_text) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_text,
      this._owner,
      _text
    );
    
  }
  get_text() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_text,
      this._owner,
			Variant.Type.STRING
    ,
      
    );
    
  }
  get_line_count() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_line_count,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_placeholder(_text) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_placeholder,
      this._owner,
      _text
    );
    
  }
  get_placeholder() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_placeholder,
      this._owner,
			Variant.Type.STRING
    ,
      
    );
    
  }
  set_line(_line, _new_text) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_line,
      this._owner,
      _line, _new_text
    );
    
  }
  get_line(_line) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_line,
      this._owner,
			Variant.Type.STRING
    ,
      _line
    );
    
  }
  get_line_width(_line, _wrap_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_line_width,
      this._owner,
			Variant.Type.INT,
      _line, _wrap_index
    );
    
  }
  get_line_height() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_line_height,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  get_indent_level(_line) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_indent_level,
      this._owner,
			Variant.Type.INT,
      _line
    );
    
  }
  get_first_non_whitespace_column(_line) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_first_non_whitespace_column,
      this._owner,
			Variant.Type.INT,
      _line
    );
    
  }
  swap_lines(_from_line, _to_line) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_swap_lines,
      this._owner,
      _from_line, _to_line
    );
    
  }
  insert_line_at(_line, _text) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_insert_line_at,
      this._owner,
      _line, _text
    );
    
  }
  remove_line_at(_line, _move_carets_down) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_remove_line_at,
      this._owner,
      _line, _move_carets_down
    );
    
  }
  insert_text_at_caret(_text, _caret_index) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_insert_text_at_caret,
      this._owner,
      _text, _caret_index
    );
    
  }
  insert_text(_text, _line, _column, _before_selection_begin, _before_selection_end) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_insert_text,
      this._owner,
      _text, _line, _column, _before_selection_begin, _before_selection_end
    );
    
  }
  remove_text(_from_line, _from_column, _to_line, _to_column) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_remove_text,
      this._owner,
      _from_line, _from_column, _to_line, _to_column
    );
    
  }
  get_last_unhidden_line() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_last_unhidden_line,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  get_next_visible_line_offset_from(_line, _visible_amount) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_next_visible_line_offset_from,
      this._owner,
			Variant.Type.INT,
      _line, _visible_amount
    );
    
  }
  get_next_visible_line_index_offset_from(_line, _wrap_index, _visible_amount) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_next_visible_line_index_offset_from,
      this._owner,
			Variant.Type.VECTOR2I
    ,
      _line, _wrap_index, _visible_amount
    );
    
  }
  backspace(_caret_index) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_backspace,
      this._owner,
      _caret_index
    );
    
  }
  cut(_caret_index) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_cut,
      this._owner,
      _caret_index
    );
    
  }
  copy(_caret_index) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_copy,
      this._owner,
      _caret_index
    );
    
  }
  paste(_caret_index) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_paste,
      this._owner,
      _caret_index
    );
    
  }
  paste_primary_clipboard(_caret_index) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_paste_primary_clipboard,
      this._owner,
      _caret_index
    );
    
  }
  start_action(_action) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_start_action,
      this._owner,
      _action
    );
    
  }
  end_action() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_end_action,
      this._owner,
      
    );
    
  }
  begin_complex_operation() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_begin_complex_operation,
      this._owner,
      
    );
    
  }
  end_complex_operation() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_end_complex_operation,
      this._owner,
      
    );
    
  }
  has_undo() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_has_undo,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  has_redo() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_has_redo,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  undo() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_undo,
      this._owner,
      
    );
    
  }
  redo() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_redo,
      this._owner,
      
    );
    
  }
  clear_undo_history() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_clear_undo_history,
      this._owner,
      
    );
    
  }
  tag_saved_version() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_tag_saved_version,
      this._owner,
      
    );
    
  }
  get_version() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_version,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  get_saved_version() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_saved_version,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_search_text(_search_text) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_search_text,
      this._owner,
      _search_text
    );
    
  }
  set_search_flags(_flags) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_search_flags,
      this._owner,
      _flags
    );
    
  }
  search(_text, _flags, _from_line, _from_column) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_search,
      this._owner,
			Variant.Type.VECTOR2I
    ,
      _text, _flags, _from_line, _from_column
    );
    
  }
  set_tooltip_request_func(_callback) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_tooltip_request_func,
      this._owner,
      _callback
    );
    
  }
  get_local_mouse_pos() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_local_mouse_pos,
      this._owner,
			Variant.Type.VECTOR2
    ,
      
    );
    
  }
  get_word_at_pos(_position) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_word_at_pos,
      this._owner,
			Variant.Type.STRING
    ,
      _position
    );
    
  }
  get_line_column_at_pos(_position, _allow_out_of_bounds) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_line_column_at_pos,
      this._owner,
			Variant.Type.VECTOR2I
    ,
      _position, _allow_out_of_bounds
    );
    
  }
  get_pos_at_line_column(_line, _column) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_pos_at_line_column,
      this._owner,
			Variant.Type.VECTOR2I
    ,
      _line, _column
    );
    
  }
  get_rect_at_line_column(_line, _column) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_rect_at_line_column,
      this._owner,
			Variant.Type.RECT2I
    ,
      _line, _column
    );
    
  }
  get_minimap_line_at_pos(_position) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_minimap_line_at_pos,
      this._owner,
			Variant.Type.INT,
      _position
    );
    
  }
  is_dragging_cursor() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_dragging_cursor,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  is_mouse_over_selection(_edges, _caret_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_mouse_over_selection,
      this._owner,
			Variant.Type.BOOL,
      _edges, _caret_index
    );
    
  }
  set_caret_type(_type) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_caret_type,
      this._owner,
      _type
    );
    
  }
  get_caret_type() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_caret_type,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_caret_blink_enabled(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_caret_blink_enabled,
      this._owner,
      _enable
    );
    
  }
  is_caret_blink_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_caret_blink_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_caret_blink_interval(_interval) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_caret_blink_interval,
      this._owner,
      _interval
    );
    
  }
  get_caret_blink_interval() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_caret_blink_interval,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_draw_caret_when_editable_disabled(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_draw_caret_when_editable_disabled,
      this._owner,
      _enable
    );
    
  }
  is_drawing_caret_when_editable_disabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_drawing_caret_when_editable_disabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_move_caret_on_right_click_enabled(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_move_caret_on_right_click_enabled,
      this._owner,
      _enable
    );
    
  }
  is_move_caret_on_right_click_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_move_caret_on_right_click_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_caret_mid_grapheme_enabled(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_caret_mid_grapheme_enabled,
      this._owner,
      _enabled
    );
    
  }
  is_caret_mid_grapheme_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_caret_mid_grapheme_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_multiple_carets_enabled(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_multiple_carets_enabled,
      this._owner,
      _enabled
    );
    
  }
  is_multiple_carets_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_multiple_carets_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  add_caret(_line, _column) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_add_caret,
      this._owner,
			Variant.Type.INT,
      _line, _column
    );
    
  }
  remove_caret(_caret) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_remove_caret,
      this._owner,
      _caret
    );
    
  }
  remove_secondary_carets() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_remove_secondary_carets,
      this._owner,
      
    );
    
  }
  get_caret_count() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_caret_count,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  add_caret_at_carets(_below) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_caret_at_carets,
      this._owner,
      _below
    );
    
  }
  get_sorted_carets(_include_ignored_carets) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_sorted_carets,
      this._owner,
			Variant.Type.PACKED_INT32_ARRAY
    ,
      _include_ignored_carets
    );
    
  }
  collapse_carets(_from_line, _from_column, _to_line, _to_column, _inclusive) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_collapse_carets,
      this._owner,
      _from_line, _from_column, _to_line, _to_column, _inclusive
    );
    
  }
  merge_overlapping_carets() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_merge_overlapping_carets,
      this._owner,
      
    );
    
  }
  begin_multicaret_edit() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_begin_multicaret_edit,
      this._owner,
      
    );
    
  }
  end_multicaret_edit() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_end_multicaret_edit,
      this._owner,
      
    );
    
  }
  is_in_mulitcaret_edit() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_in_mulitcaret_edit,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  multicaret_edit_ignore_caret(_caret_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_multicaret_edit_ignore_caret,
      this._owner,
			Variant.Type.BOOL,
      _caret_index
    );
    
  }
  is_caret_visible(_caret_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_caret_visible,
      this._owner,
			Variant.Type.BOOL,
      _caret_index
    );
    
  }
  get_caret_draw_pos(_caret_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_caret_draw_pos,
      this._owner,
			Variant.Type.VECTOR2
    ,
      _caret_index
    );
    
  }
  set_caret_line(_line, _adjust_viewport, _can_be_hidden, _wrap_index, _caret_index) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_caret_line,
      this._owner,
      _line, _adjust_viewport, _can_be_hidden, _wrap_index, _caret_index
    );
    
  }
  get_caret_line(_caret_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_caret_line,
      this._owner,
			Variant.Type.INT,
      _caret_index
    );
    
  }
  set_caret_column(_column, _adjust_viewport, _caret_index) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_caret_column,
      this._owner,
      _column, _adjust_viewport, _caret_index
    );
    
  }
  get_caret_column(_caret_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_caret_column,
      this._owner,
			Variant.Type.INT,
      _caret_index
    );
    
  }
  get_caret_wrap_index(_caret_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_caret_wrap_index,
      this._owner,
			Variant.Type.INT,
      _caret_index
    );
    
  }
  get_word_under_caret(_caret_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_word_under_caret,
      this._owner,
			Variant.Type.STRING
    ,
      _caret_index
    );
    
  }
  set_use_default_word_separators(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_use_default_word_separators,
      this._owner,
      _enabled
    );
    
  }
  is_default_word_separators_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_default_word_separators_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_use_custom_word_separators(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_use_custom_word_separators,
      this._owner,
      _enabled
    );
    
  }
  is_custom_word_separators_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_custom_word_separators_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_custom_word_separators(_custom_word_separators) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_custom_word_separators,
      this._owner,
      _custom_word_separators
    );
    
  }
  get_custom_word_separators() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_custom_word_separators,
      this._owner,
			Variant.Type.STRING
    ,
      
    );
    
  }
  set_selecting_enabled(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_selecting_enabled,
      this._owner,
      _enable
    );
    
  }
  is_selecting_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_selecting_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_deselect_on_focus_loss_enabled(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_deselect_on_focus_loss_enabled,
      this._owner,
      _enable
    );
    
  }
  is_deselect_on_focus_loss_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_deselect_on_focus_loss_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_drag_and_drop_selection_enabled(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_drag_and_drop_selection_enabled,
      this._owner,
      _enable
    );
    
  }
  is_drag_and_drop_selection_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_drag_and_drop_selection_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_selection_mode(_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_selection_mode,
      this._owner,
      _mode
    );
    
  }
  get_selection_mode() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_selection_mode,
      this._owner,
			Variant.INT,
      
    );
    
  }
  select_all() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_select_all,
      this._owner,
      
    );
    
  }
  select_word_under_caret(_caret_index) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_select_word_under_caret,
      this._owner,
      _caret_index
    );
    
  }
  add_selection_for_next_occurrence() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_selection_for_next_occurrence,
      this._owner,
      
    );
    
  }
  skip_selection_for_next_occurrence() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_skip_selection_for_next_occurrence,
      this._owner,
      
    );
    
  }
  select(_origin_line, _origin_column, _caret_line, _caret_column, _caret_index) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_select,
      this._owner,
      _origin_line, _origin_column, _caret_line, _caret_column, _caret_index
    );
    
  }
  has_selection(_caret_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_has_selection,
      this._owner,
			Variant.Type.BOOL,
      _caret_index
    );
    
  }
  get_selected_text(_caret_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_selected_text,
      this._owner,
			Variant.Type.STRING
    ,
      _caret_index
    );
    
  }
  get_selection_at_line_column(_line, _column, _include_edges, _only_selections) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_selection_at_line_column,
      this._owner,
			Variant.Type.INT,
      _line, _column, _include_edges, _only_selections
    );
    
  }
  get_line_ranges_from_carets(_only_selections, _merge_adjacent) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_line_ranges_from_carets,
      this._owner,
			Variant.INT,
      _only_selections, _merge_adjacent
    );
    
  }
  get_selection_origin_line(_caret_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_selection_origin_line,
      this._owner,
			Variant.Type.INT,
      _caret_index
    );
    
  }
  get_selection_origin_column(_caret_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_selection_origin_column,
      this._owner,
			Variant.Type.INT,
      _caret_index
    );
    
  }
  set_selection_origin_line(_line, _can_be_hidden, _wrap_index, _caret_index) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_selection_origin_line,
      this._owner,
      _line, _can_be_hidden, _wrap_index, _caret_index
    );
    
  }
  set_selection_origin_column(_column, _caret_index) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_selection_origin_column,
      this._owner,
      _column, _caret_index
    );
    
  }
  get_selection_from_line(_caret_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_selection_from_line,
      this._owner,
			Variant.Type.INT,
      _caret_index
    );
    
  }
  get_selection_from_column(_caret_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_selection_from_column,
      this._owner,
			Variant.Type.INT,
      _caret_index
    );
    
  }
  get_selection_to_line(_caret_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_selection_to_line,
      this._owner,
			Variant.Type.INT,
      _caret_index
    );
    
  }
  get_selection_to_column(_caret_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_selection_to_column,
      this._owner,
			Variant.Type.INT,
      _caret_index
    );
    
  }
  is_caret_after_selection_origin(_caret_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_caret_after_selection_origin,
      this._owner,
			Variant.Type.BOOL,
      _caret_index
    );
    
  }
  deselect(_caret_index) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_deselect,
      this._owner,
      _caret_index
    );
    
  }
  delete_selection(_caret_index) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_delete_selection,
      this._owner,
      _caret_index
    );
    
  }
  set_line_wrapping_mode(_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_line_wrapping_mode,
      this._owner,
      _mode
    );
    
  }
  get_line_wrapping_mode() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_line_wrapping_mode,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_autowrap_mode(_autowrap_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_autowrap_mode,
      this._owner,
      _autowrap_mode
    );
    
  }
  get_autowrap_mode() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_autowrap_mode,
      this._owner,
			Variant.INT,
      
    );
    
  }
  is_line_wrapped(_line) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_line_wrapped,
      this._owner,
			Variant.Type.BOOL,
      _line
    );
    
  }
  get_line_wrap_count(_line) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_line_wrap_count,
      this._owner,
			Variant.Type.INT,
      _line
    );
    
  }
  get_line_wrap_index_at_column(_line, _column) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_line_wrap_index_at_column,
      this._owner,
			Variant.Type.INT,
      _line, _column
    );
    
  }
  get_line_wrapped_text(_line) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_line_wrapped_text,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY
    ,
      _line
    );
    
  }
  set_smooth_scroll_enabled(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_smooth_scroll_enabled,
      this._owner,
      _enable
    );
    
  }
  is_smooth_scroll_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_smooth_scroll_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  get_v_scroll_bar() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_v_scroll_bar,
      this._owner,
			Variant.INT,
      
    );
    
  }
  get_h_scroll_bar() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_h_scroll_bar,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_v_scroll(_value) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_v_scroll,
      this._owner,
      _value
    );
    
  }
  get_v_scroll() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_v_scroll,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_h_scroll(_value) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_h_scroll,
      this._owner,
      _value
    );
    
  }
  get_h_scroll() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_h_scroll,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_scroll_past_end_of_file_enabled(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_scroll_past_end_of_file_enabled,
      this._owner,
      _enable
    );
    
  }
  is_scroll_past_end_of_file_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_scroll_past_end_of_file_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_v_scroll_speed(_speed) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_v_scroll_speed,
      this._owner,
      _speed
    );
    
  }
  get_v_scroll_speed() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_v_scroll_speed,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_fit_content_height_enabled(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_fit_content_height_enabled,
      this._owner,
      _enabled
    );
    
  }
  is_fit_content_height_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_fit_content_height_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  get_scroll_pos_for_line(_line, _wrap_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_scroll_pos_for_line,
      this._owner,
			Variant.Type.FLOAT,
      _line, _wrap_index
    );
    
  }
  set_line_as_first_visible(_line, _wrap_index) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_line_as_first_visible,
      this._owner,
      _line, _wrap_index
    );
    
  }
  get_first_visible_line() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_first_visible_line,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_line_as_center_visible(_line, _wrap_index) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_line_as_center_visible,
      this._owner,
      _line, _wrap_index
    );
    
  }
  set_line_as_last_visible(_line, _wrap_index) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_line_as_last_visible,
      this._owner,
      _line, _wrap_index
    );
    
  }
  get_last_full_visible_line() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_last_full_visible_line,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  get_last_full_visible_line_wrap_index() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_last_full_visible_line_wrap_index,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  get_visible_line_count() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_visible_line_count,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  get_visible_line_count_in_range(_from_line, _to_line) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_visible_line_count_in_range,
      this._owner,
			Variant.Type.INT,
      _from_line, _to_line
    );
    
  }
  get_total_visible_line_count() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_total_visible_line_count,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  adjust_viewport_to_caret(_caret_index) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_adjust_viewport_to_caret,
      this._owner,
      _caret_index
    );
    
  }
  center_viewport_to_caret(_caret_index) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_center_viewport_to_caret,
      this._owner,
      _caret_index
    );
    
  }
  set_draw_minimap(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_draw_minimap,
      this._owner,
      _enabled
    );
    
  }
  is_drawing_minimap() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_drawing_minimap,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_minimap_width(_width) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_minimap_width,
      this._owner,
      _width
    );
    
  }
  get_minimap_width() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_minimap_width,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  get_minimap_visible_lines() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_minimap_visible_lines,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  add_gutter(_at) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_gutter,
      this._owner,
      _at
    );
    
  }
  remove_gutter(_gutter) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_remove_gutter,
      this._owner,
      _gutter
    );
    
  }
  get_gutter_count() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_gutter_count,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_gutter_name(_gutter, _name) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_gutter_name,
      this._owner,
      _gutter, _name
    );
    
  }
  get_gutter_name(_gutter) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_gutter_name,
      this._owner,
			Variant.Type.STRING
    ,
      _gutter
    );
    
  }
  set_gutter_type(_gutter, _type) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_gutter_type,
      this._owner,
      _gutter, _type
    );
    
  }
  get_gutter_type(_gutter) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_gutter_type,
      this._owner,
			Variant.INT,
      _gutter
    );
    
  }
  set_gutter_width(_gutter, _width) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_gutter_width,
      this._owner,
      _gutter, _width
    );
    
  }
  get_gutter_width(_gutter) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_gutter_width,
      this._owner,
			Variant.Type.INT,
      _gutter
    );
    
  }
  set_gutter_draw(_gutter, _draw) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_gutter_draw,
      this._owner,
      _gutter, _draw
    );
    
  }
  is_gutter_drawn(_gutter) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_gutter_drawn,
      this._owner,
			Variant.Type.BOOL,
      _gutter
    );
    
  }
  set_gutter_clickable(_gutter, _clickable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_gutter_clickable,
      this._owner,
      _gutter, _clickable
    );
    
  }
  is_gutter_clickable(_gutter) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_gutter_clickable,
      this._owner,
			Variant.Type.BOOL,
      _gutter
    );
    
  }
  set_gutter_overwritable(_gutter, _overwritable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_gutter_overwritable,
      this._owner,
      _gutter, _overwritable
    );
    
  }
  is_gutter_overwritable(_gutter) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_gutter_overwritable,
      this._owner,
			Variant.Type.BOOL,
      _gutter
    );
    
  }
  merge_gutters(_from_line, _to_line) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_merge_gutters,
      this._owner,
      _from_line, _to_line
    );
    
  }
  set_gutter_custom_draw(_column, _draw_callback) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_gutter_custom_draw,
      this._owner,
      _column, _draw_callback
    );
    
  }
  get_total_gutter_width() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_total_gutter_width,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_line_gutter_metadata(_line, _gutter, _metadata) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_line_gutter_metadata,
      this._owner,
      _line, _gutter, _metadata
    );
    
  }
  get_line_gutter_metadata(_line, _gutter) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_line_gutter_metadata,
      this._owner,
			Variant.Type.VARIANT
    ,
      _line, _gutter
    );
    
  }
  set_line_gutter_text(_line, _gutter, _text) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_line_gutter_text,
      this._owner,
      _line, _gutter, _text
    );
    
  }
  get_line_gutter_text(_line, _gutter) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_line_gutter_text,
      this._owner,
			Variant.Type.STRING
    ,
      _line, _gutter
    );
    
  }
  set_line_gutter_icon(_line, _gutter, _icon) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_line_gutter_icon,
      this._owner,
      _line, _gutter, _icon
    );
    
  }
  get_line_gutter_icon(_line, _gutter) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_line_gutter_icon,
      this._owner,
			Variant.INT,
      _line, _gutter
    );
    
  }
  set_line_gutter_item_color(_line, _gutter, _color) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_line_gutter_item_color,
      this._owner,
      _line, _gutter, _color
    );
    
  }
  get_line_gutter_item_color(_line, _gutter) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_line_gutter_item_color,
      this._owner,
			Variant.Type.COLOR
    ,
      _line, _gutter
    );
    
  }
  set_line_gutter_clickable(_line, _gutter, _clickable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_line_gutter_clickable,
      this._owner,
      _line, _gutter, _clickable
    );
    
  }
  is_line_gutter_clickable(_line, _gutter) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_line_gutter_clickable,
      this._owner,
			Variant.Type.BOOL,
      _line, _gutter
    );
    
  }
  set_line_background_color(_line, _color) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_line_background_color,
      this._owner,
      _line, _color
    );
    
  }
  get_line_background_color(_line) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_line_background_color,
      this._owner,
			Variant.Type.COLOR
    ,
      _line
    );
    
  }
  set_syntax_highlighter(_syntax_highlighter) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_syntax_highlighter,
      this._owner,
      _syntax_highlighter
    );
    
  }
  get_syntax_highlighter() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_syntax_highlighter,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_highlight_current_line(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_highlight_current_line,
      this._owner,
      _enabled
    );
    
  }
  is_highlight_current_line_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_highlight_current_line_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_highlight_all_occurrences(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_highlight_all_occurrences,
      this._owner,
      _enabled
    );
    
  }
  is_highlight_all_occurrences_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_highlight_all_occurrences_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  get_draw_control_chars() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_draw_control_chars,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_draw_control_chars(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_draw_control_chars,
      this._owner,
      _enabled
    );
    
  }
  set_draw_tabs(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_draw_tabs,
      this._owner,
      _enabled
    );
    
  }
  is_drawing_tabs() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_drawing_tabs,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_draw_spaces(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_draw_spaces,
      this._owner,
      _enabled
    );
    
  }
  is_drawing_spaces() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_drawing_spaces,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  get_menu() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_menu,
      this._owner,
			Variant.INT,
      
    );
    
  }
  is_menu_visible() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_menu_visible,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  menu_option(_option) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_menu_option,
      this._owner,
      _option
    );
    
  }
  adjust_carets_after_edit(_caret, _from_line, _from_col, _to_line, _to_col) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_adjust_carets_after_edit,
      this._owner,
      _caret, _from_line, _from_col, _to_line, _to_col
    );
    
  }
  get_caret_index_edit_order() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_caret_index_edit_order,
      this._owner,
			Variant.Type.PACKED_INT32_ARRAY
    ,
      
    );
    
  }
  get_selection_line(_caret_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_selection_line,
      this._owner,
			Variant.Type.INT,
      _caret_index
    );
    
  }
  get_selection_column(_caret_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_selection_column,
      this._owner,
			Variant.Type.INT,
      _caret_index
    );
    
  }
  static MenuItems = {
    MENU_CUT: 0,
    MENU_COPY: 1,
    MENU_PASTE: 2,
    MENU_CLEAR: 3,
    MENU_SELECT_ALL: 4,
    MENU_UNDO: 5,
    MENU_REDO: 6,
    MENU_SUBMENU_TEXT_DIR: 7,
    MENU_DIR_INHERITED: 8,
    MENU_DIR_AUTO: 9,
    MENU_DIR_LTR: 10,
    MENU_DIR_RTL: 11,
    MENU_DISPLAY_UCC: 12,
    MENU_SUBMENU_INSERT_UCC: 13,
    MENU_INSERT_LRM: 14,
    MENU_INSERT_RLM: 15,
    MENU_INSERT_LRE: 16,
    MENU_INSERT_RLE: 17,
    MENU_INSERT_LRO: 18,
    MENU_INSERT_RLO: 19,
    MENU_INSERT_PDF: 20,
    MENU_INSERT_ALM: 21,
    MENU_INSERT_LRI: 22,
    MENU_INSERT_RLI: 23,
    MENU_INSERT_FSI: 24,
    MENU_INSERT_PDI: 25,
    MENU_INSERT_ZWJ: 26,
    MENU_INSERT_ZWNJ: 27,
    MENU_INSERT_WJ: 28,
    MENU_INSERT_SHY: 29,
    MENU_MAX: 30,
  }
  static EditAction = {
    ACTION_NONE: 0,
    ACTION_TYPING: 1,
    ACTION_BACKSPACE: 2,
    ACTION_DELETE: 3,
  }
  static SearchFlags = {
    SEARCH_MATCH_CASE: 1,
    SEARCH_WHOLE_WORDS: 2,
    SEARCH_BACKWARDS: 4,
  }
  static CaretType = {
    CARET_TYPE_LINE: 0,
    CARET_TYPE_BLOCK: 1,
  }
  static SelectionMode = {
    SELECTION_MODE_NONE: 0,
    SELECTION_MODE_SHIFT: 1,
    SELECTION_MODE_POINTER: 2,
    SELECTION_MODE_WORD: 3,
    SELECTION_MODE_LINE: 4,
  }
  static LineWrappingMode = {
    LINE_WRAPPING_NONE: 0,
    LINE_WRAPPING_BOUNDARY: 1,
  }
  static GutterType = {
    GUTTER_TYPE_STRING: 0,
    GUTTER_TYPE_ICON: 1,
    GUTTER_TYPE_CUSTOM: 2,
  }
}