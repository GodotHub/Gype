import * as internal from '__internal__';
import { Control } from '@js_godot/classes/control'
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
  method_get_parsed_text;
  method_add_text;
  method_set_text;
  method_add_image;
  method_update_image;
  method_newline;
  method_remove_paragraph;
  method_invalidate_paragraph;
  method_push_font;
  method_push_font_size;
  method_push_normal;
  method_push_bold;
  method_push_bold_italics;
  method_push_italics;
  method_push_mono;
  method_push_color;
  method_push_outline_size;
  method_push_outline_color;
  method_push_paragraph;
  method_push_indent;
  method_push_list;
  method_push_meta;
  method_push_hint;
  method_push_language;
  method_push_underline;
  method_push_strikethrough;
  method_push_table;
  method_push_dropcap;
  method_set_table_column_expand;
  method_set_cell_row_background_color;
  method_set_cell_border_color;
  method_set_cell_size_override;
  method_set_cell_padding;
  method_push_cell;
  method_push_fgcolor;
  method_push_bgcolor;
  method_push_customfx;
  method_push_context;
  method_pop_context;
  method_pop;
  method_pop_all;
  method_clear;
  method_set_structured_text_bidi_override;
  method_get_structured_text_bidi_override;
  method_set_structured_text_bidi_override_options;
  method_get_structured_text_bidi_override_options;
  method_set_text_direction;
  method_get_text_direction;
  method_set_language;
  method_get_language;
  method_set_autowrap_mode;
  method_get_autowrap_mode;
  method_set_meta_underline;
  method_is_meta_underlined;
  method_set_hint_underline;
  method_is_hint_underlined;
  method_set_scroll_active;
  method_is_scroll_active;
  method_set_scroll_follow;
  method_is_scroll_following;
  method_get_v_scroll_bar;
  method_scroll_to_line;
  method_scroll_to_paragraph;
  method_scroll_to_selection;
  method_set_tab_size;
  method_get_tab_size;
  method_set_fit_content;
  method_is_fit_content_enabled;
  method_set_selection_enabled;
  method_is_selection_enabled;
  method_set_context_menu_enabled;
  method_is_context_menu_enabled;
  method_set_shortcut_keys_enabled;
  method_is_shortcut_keys_enabled;
  method_set_deselect_on_focus_loss_enabled;
  method_is_deselect_on_focus_loss_enabled;
  method_set_drag_and_drop_selection_enabled;
  method_is_drag_and_drop_selection_enabled;
  method_get_selection_from;
  method_get_selection_to;
  method_select_all;
  method_get_selected_text;
  method_deselect;
  method_parse_bbcode;
  method_append_text;
  method_get_text;
  method_is_ready;
  method_set_threaded;
  method_is_threaded;
  method_set_progress_bar_delay;
  method_get_progress_bar_delay;
  method_set_visible_characters;
  method_get_visible_characters;
  method_get_visible_characters_behavior;
  method_set_visible_characters_behavior;
  method_set_visible_ratio;
  method_get_visible_ratio;
  method_get_character_line;
  method_get_character_paragraph;
  method_get_total_character_count;
  method_set_use_bbcode;
  method_is_using_bbcode;
  method_get_line_count;
  method_get_visible_line_count;
  method_get_paragraph_count;
  method_get_visible_paragraph_count;
  method_get_content_height;
  method_get_content_width;
  method_get_line_offset;
  method_get_paragraph_offset;
  method_parse_expressions_for_values;
  method_set_effects;
  method_get_effects;
  method_install_effect;
  method_get_menu;
  method_is_menu_visible;
  method_menu_option;
}
@GodotClass
export class RichTextLabel extends Control{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("RichTextLabel");
    } else {
      super(godot_object);
    }
  }
  static init_method_get_parsed_text() {
    if (!this._bindings.method_get_parsed_text) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("get_parsed_text");
      this._bindings.method_get_parsed_text = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_add_text() {
    if (!this._bindings.method_add_text) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("add_text");
      this._bindings.method_add_text = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }
  static init_method_set_text() {
    if (!this._bindings.method_set_text) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("set_text");
      this._bindings.method_set_text = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }
  static init_method_add_image() {
    if (!this._bindings.method_add_image) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("add_image");
      this._bindings.method_add_image = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3017663154
      );
    }
  }
  static init_method_update_image() {
    if (!this._bindings.method_update_image) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("update_image");
      this._bindings.method_update_image = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        815048486
      );
    }
  }
  static init_method_newline() {
    if (!this._bindings.method_newline) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("newline");
      this._bindings.method_newline = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_remove_paragraph() {
    if (!this._bindings.method_remove_paragraph) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("remove_paragraph");
      this._bindings.method_remove_paragraph = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3262369265
      );
    }
  }
  static init_method_invalidate_paragraph() {
    if (!this._bindings.method_invalidate_paragraph) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("invalidate_paragraph");
      this._bindings.method_invalidate_paragraph = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3067735520
      );
    }
  }
  static init_method_push_font() {
    if (!this._bindings.method_push_font) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("push_font");
      this._bindings.method_push_font = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2347424842
      );
    }
  }
  static init_method_push_font_size() {
    if (!this._bindings.method_push_font_size) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("push_font_size");
      this._bindings.method_push_font_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_push_normal() {
    if (!this._bindings.method_push_normal) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("push_normal");
      this._bindings.method_push_normal = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_push_bold() {
    if (!this._bindings.method_push_bold) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("push_bold");
      this._bindings.method_push_bold = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_push_bold_italics() {
    if (!this._bindings.method_push_bold_italics) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("push_bold_italics");
      this._bindings.method_push_bold_italics = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_push_italics() {
    if (!this._bindings.method_push_italics) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("push_italics");
      this._bindings.method_push_italics = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_push_mono() {
    if (!this._bindings.method_push_mono) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("push_mono");
      this._bindings.method_push_mono = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_push_color() {
    if (!this._bindings.method_push_color) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("push_color");
      this._bindings.method_push_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2920490490
      );
    }
  }
  static init_method_push_outline_size() {
    if (!this._bindings.method_push_outline_size) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("push_outline_size");
      this._bindings.method_push_outline_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_push_outline_color() {
    if (!this._bindings.method_push_outline_color) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("push_outline_color");
      this._bindings.method_push_outline_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2920490490
      );
    }
  }
  static init_method_push_paragraph() {
    if (!this._bindings.method_push_paragraph) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("push_paragraph");
      this._bindings.method_push_paragraph = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3089306873
      );
    }
  }
  static init_method_push_indent() {
    if (!this._bindings.method_push_indent) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("push_indent");
      this._bindings.method_push_indent = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_push_list() {
    if (!this._bindings.method_push_list) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("push_list");
      this._bindings.method_push_list = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3017143144
      );
    }
  }
  static init_method_push_meta() {
    if (!this._bindings.method_push_meta) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("push_meta");
      this._bindings.method_push_meta = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2206155733
      );
    }
  }
  static init_method_push_hint() {
    if (!this._bindings.method_push_hint) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("push_hint");
      this._bindings.method_push_hint = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }
  static init_method_push_language() {
    if (!this._bindings.method_push_language) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("push_language");
      this._bindings.method_push_language = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }
  static init_method_push_underline() {
    if (!this._bindings.method_push_underline) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("push_underline");
      this._bindings.method_push_underline = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_push_strikethrough() {
    if (!this._bindings.method_push_strikethrough) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("push_strikethrough");
      this._bindings.method_push_strikethrough = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_push_table() {
    if (!this._bindings.method_push_table) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("push_table");
      this._bindings.method_push_table = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2623499273
      );
    }
  }
  static init_method_push_dropcap() {
    if (!this._bindings.method_push_dropcap) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("push_dropcap");
      this._bindings.method_push_dropcap = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4061635501
      );
    }
  }
  static init_method_set_table_column_expand() {
    if (!this._bindings.method_set_table_column_expand) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("set_table_column_expand");
      this._bindings.method_set_table_column_expand = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2185176273
      );
    }
  }
  static init_method_set_cell_row_background_color() {
    if (!this._bindings.method_set_cell_row_background_color) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("set_cell_row_background_color");
      this._bindings.method_set_cell_row_background_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3465483165
      );
    }
  }
  static init_method_set_cell_border_color() {
    if (!this._bindings.method_set_cell_border_color) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("set_cell_border_color");
      this._bindings.method_set_cell_border_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2920490490
      );
    }
  }
  static init_method_set_cell_size_override() {
    if (!this._bindings.method_set_cell_size_override) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("set_cell_size_override");
      this._bindings.method_set_cell_size_override = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3108078480
      );
    }
  }
  static init_method_set_cell_padding() {
    if (!this._bindings.method_set_cell_padding) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("set_cell_padding");
      this._bindings.method_set_cell_padding = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2046264180
      );
    }
  }
  static init_method_push_cell() {
    if (!this._bindings.method_push_cell) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("push_cell");
      this._bindings.method_push_cell = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_push_fgcolor() {
    if (!this._bindings.method_push_fgcolor) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("push_fgcolor");
      this._bindings.method_push_fgcolor = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2920490490
      );
    }
  }
  static init_method_push_bgcolor() {
    if (!this._bindings.method_push_bgcolor) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("push_bgcolor");
      this._bindings.method_push_bgcolor = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2920490490
      );
    }
  }
  static init_method_push_customfx() {
    if (!this._bindings.method_push_customfx) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("push_customfx");
      this._bindings.method_push_customfx = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2337942958
      );
    }
  }
  static init_method_push_context() {
    if (!this._bindings.method_push_context) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("push_context");
      this._bindings.method_push_context = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_pop_context() {
    if (!this._bindings.method_pop_context) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("pop_context");
      this._bindings.method_pop_context = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_pop() {
    if (!this._bindings.method_pop) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("pop");
      this._bindings.method_pop = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_pop_all() {
    if (!this._bindings.method_pop_all) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("pop_all");
      this._bindings.method_pop_all = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_clear() {
    if (!this._bindings.method_clear) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("clear");
      this._bindings.method_clear = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_set_structured_text_bidi_override() {
    if (!this._bindings.method_set_structured_text_bidi_override) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("set_structured_text_bidi_override");
      this._bindings.method_set_structured_text_bidi_override = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        55961453
      );
    }
  }
  static init_method_get_structured_text_bidi_override() {
    if (!this._bindings.method_get_structured_text_bidi_override) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("get_structured_text_bidi_override");
      this._bindings.method_get_structured_text_bidi_override = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3385126229
      );
    }
  }
  static init_method_set_structured_text_bidi_override_options() {
    if (!this._bindings.method_set_structured_text_bidi_override_options) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("set_structured_text_bidi_override_options");
      this._bindings.method_set_structured_text_bidi_override_options = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        381264803
      );
    }
  }
  static init_method_get_structured_text_bidi_override_options() {
    if (!this._bindings.method_get_structured_text_bidi_override_options) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("get_structured_text_bidi_override_options");
      this._bindings.method_get_structured_text_bidi_override_options = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3995934104
      );
    }
  }
  static init_method_set_text_direction() {
    if (!this._bindings.method_set_text_direction) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("set_text_direction");
      this._bindings.method_set_text_direction = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        119160795
      );
    }
  }
  static init_method_get_text_direction() {
    if (!this._bindings.method_get_text_direction) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("get_text_direction");
      this._bindings.method_get_text_direction = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        797257663
      );
    }
  }
  static init_method_set_language() {
    if (!this._bindings.method_set_language) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("set_language");
      this._bindings.method_set_language = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }
  static init_method_get_language() {
    if (!this._bindings.method_get_language) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("get_language");
      this._bindings.method_get_language = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_set_autowrap_mode() {
    if (!this._bindings.method_set_autowrap_mode) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("set_autowrap_mode");
      this._bindings.method_set_autowrap_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3289138044
      );
    }
  }
  static init_method_get_autowrap_mode() {
    if (!this._bindings.method_get_autowrap_mode) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("get_autowrap_mode");
      this._bindings.method_get_autowrap_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1549071663
      );
    }
  }
  static init_method_set_meta_underline() {
    if (!this._bindings.method_set_meta_underline) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("set_meta_underline");
      this._bindings.method_set_meta_underline = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_meta_underlined() {
    if (!this._bindings.method_is_meta_underlined) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("is_meta_underlined");
      this._bindings.method_is_meta_underlined = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_hint_underline() {
    if (!this._bindings.method_set_hint_underline) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("set_hint_underline");
      this._bindings.method_set_hint_underline = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_hint_underlined() {
    if (!this._bindings.method_is_hint_underlined) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("is_hint_underlined");
      this._bindings.method_is_hint_underlined = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_scroll_active() {
    if (!this._bindings.method_set_scroll_active) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("set_scroll_active");
      this._bindings.method_set_scroll_active = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_scroll_active() {
    if (!this._bindings.method_is_scroll_active) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("is_scroll_active");
      this._bindings.method_is_scroll_active = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_scroll_follow() {
    if (!this._bindings.method_set_scroll_follow) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("set_scroll_follow");
      this._bindings.method_set_scroll_follow = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_scroll_following() {
    if (!this._bindings.method_is_scroll_following) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("is_scroll_following");
      this._bindings.method_is_scroll_following = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_get_v_scroll_bar() {
    if (!this._bindings.method_get_v_scroll_bar) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("get_v_scroll_bar");
      this._bindings.method_get_v_scroll_bar = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2630340773
      );
    }
  }
  static init_method_scroll_to_line() {
    if (!this._bindings.method_scroll_to_line) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("scroll_to_line");
      this._bindings.method_scroll_to_line = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_scroll_to_paragraph() {
    if (!this._bindings.method_scroll_to_paragraph) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("scroll_to_paragraph");
      this._bindings.method_scroll_to_paragraph = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_scroll_to_selection() {
    if (!this._bindings.method_scroll_to_selection) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("scroll_to_selection");
      this._bindings.method_scroll_to_selection = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_set_tab_size() {
    if (!this._bindings.method_set_tab_size) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("set_tab_size");
      this._bindings.method_set_tab_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_tab_size() {
    if (!this._bindings.method_get_tab_size) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("get_tab_size");
      this._bindings.method_get_tab_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_fit_content() {
    if (!this._bindings.method_set_fit_content) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("set_fit_content");
      this._bindings.method_set_fit_content = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_fit_content_enabled() {
    if (!this._bindings.method_is_fit_content_enabled) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("is_fit_content_enabled");
      this._bindings.method_is_fit_content_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_selection_enabled() {
    if (!this._bindings.method_set_selection_enabled) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("set_selection_enabled");
      this._bindings.method_set_selection_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_selection_enabled() {
    if (!this._bindings.method_is_selection_enabled) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("is_selection_enabled");
      this._bindings.method_is_selection_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_context_menu_enabled() {
    if (!this._bindings.method_set_context_menu_enabled) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("set_context_menu_enabled");
      this._bindings.method_set_context_menu_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_context_menu_enabled() {
    if (!this._bindings.method_is_context_menu_enabled) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("is_context_menu_enabled");
      this._bindings.method_is_context_menu_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_shortcut_keys_enabled() {
    if (!this._bindings.method_set_shortcut_keys_enabled) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("set_shortcut_keys_enabled");
      this._bindings.method_set_shortcut_keys_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_shortcut_keys_enabled() {
    if (!this._bindings.method_is_shortcut_keys_enabled) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("is_shortcut_keys_enabled");
      this._bindings.method_is_shortcut_keys_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_deselect_on_focus_loss_enabled() {
    if (!this._bindings.method_set_deselect_on_focus_loss_enabled) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("set_deselect_on_focus_loss_enabled");
      this._bindings.method_set_deselect_on_focus_loss_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_deselect_on_focus_loss_enabled() {
    if (!this._bindings.method_is_deselect_on_focus_loss_enabled) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("is_deselect_on_focus_loss_enabled");
      this._bindings.method_is_deselect_on_focus_loss_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_drag_and_drop_selection_enabled() {
    if (!this._bindings.method_set_drag_and_drop_selection_enabled) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("set_drag_and_drop_selection_enabled");
      this._bindings.method_set_drag_and_drop_selection_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_drag_and_drop_selection_enabled() {
    if (!this._bindings.method_is_drag_and_drop_selection_enabled) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("is_drag_and_drop_selection_enabled");
      this._bindings.method_is_drag_and_drop_selection_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_get_selection_from() {
    if (!this._bindings.method_get_selection_from) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("get_selection_from");
      this._bindings.method_get_selection_from = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_get_selection_to() {
    if (!this._bindings.method_get_selection_to) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("get_selection_to");
      this._bindings.method_get_selection_to = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_select_all() {
    if (!this._bindings.method_select_all) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("select_all");
      this._bindings.method_select_all = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_get_selected_text() {
    if (!this._bindings.method_get_selected_text) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("get_selected_text");
      this._bindings.method_get_selected_text = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_deselect() {
    if (!this._bindings.method_deselect) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("deselect");
      this._bindings.method_deselect = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_parse_bbcode() {
    if (!this._bindings.method_parse_bbcode) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("parse_bbcode");
      this._bindings.method_parse_bbcode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }
  static init_method_append_text() {
    if (!this._bindings.method_append_text) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("append_text");
      this._bindings.method_append_text = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }
  static init_method_get_text() {
    if (!this._bindings.method_get_text) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("get_text");
      this._bindings.method_get_text = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_is_ready() {
    if (!this._bindings.method_is_ready) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("is_ready");
      this._bindings.method_is_ready = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_threaded() {
    if (!this._bindings.method_set_threaded) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("set_threaded");
      this._bindings.method_set_threaded = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_threaded() {
    if (!this._bindings.method_is_threaded) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("is_threaded");
      this._bindings.method_is_threaded = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_progress_bar_delay() {
    if (!this._bindings.method_set_progress_bar_delay) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("set_progress_bar_delay");
      this._bindings.method_set_progress_bar_delay = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_progress_bar_delay() {
    if (!this._bindings.method_get_progress_bar_delay) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("get_progress_bar_delay");
      this._bindings.method_get_progress_bar_delay = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_visible_characters() {
    if (!this._bindings.method_set_visible_characters) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("set_visible_characters");
      this._bindings.method_set_visible_characters = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_visible_characters() {
    if (!this._bindings.method_get_visible_characters) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("get_visible_characters");
      this._bindings.method_get_visible_characters = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_get_visible_characters_behavior() {
    if (!this._bindings.method_get_visible_characters_behavior) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("get_visible_characters_behavior");
      this._bindings.method_get_visible_characters_behavior = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        258789322
      );
    }
  }
  static init_method_set_visible_characters_behavior() {
    if (!this._bindings.method_set_visible_characters_behavior) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("set_visible_characters_behavior");
      this._bindings.method_set_visible_characters_behavior = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3383839701
      );
    }
  }
  static init_method_set_visible_ratio() {
    if (!this._bindings.method_set_visible_ratio) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("set_visible_ratio");
      this._bindings.method_set_visible_ratio = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_visible_ratio() {
    if (!this._bindings.method_get_visible_ratio) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("get_visible_ratio");
      this._bindings.method_get_visible_ratio = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_get_character_line() {
    if (!this._bindings.method_get_character_line) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("get_character_line");
      this._bindings.method_get_character_line = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3744713108
      );
    }
  }
  static init_method_get_character_paragraph() {
    if (!this._bindings.method_get_character_paragraph) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("get_character_paragraph");
      this._bindings.method_get_character_paragraph = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3744713108
      );
    }
  }
  static init_method_get_total_character_count() {
    if (!this._bindings.method_get_total_character_count) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("get_total_character_count");
      this._bindings.method_get_total_character_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_use_bbcode() {
    if (!this._bindings.method_set_use_bbcode) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("set_use_bbcode");
      this._bindings.method_set_use_bbcode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_using_bbcode() {
    if (!this._bindings.method_is_using_bbcode) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("is_using_bbcode");
      this._bindings.method_is_using_bbcode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_get_line_count() {
    if (!this._bindings.method_get_line_count) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("get_line_count");
      this._bindings.method_get_line_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_get_visible_line_count() {
    if (!this._bindings.method_get_visible_line_count) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("get_visible_line_count");
      this._bindings.method_get_visible_line_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_get_paragraph_count() {
    if (!this._bindings.method_get_paragraph_count) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("get_paragraph_count");
      this._bindings.method_get_paragraph_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_get_visible_paragraph_count() {
    if (!this._bindings.method_get_visible_paragraph_count) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("get_visible_paragraph_count");
      this._bindings.method_get_visible_paragraph_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_get_content_height() {
    if (!this._bindings.method_get_content_height) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("get_content_height");
      this._bindings.method_get_content_height = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_get_content_width() {
    if (!this._bindings.method_get_content_width) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("get_content_width");
      this._bindings.method_get_content_width = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_get_line_offset() {
    if (!this._bindings.method_get_line_offset) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("get_line_offset");
      this._bindings.method_get_line_offset = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4025615559
      );
    }
  }
  static init_method_get_paragraph_offset() {
    if (!this._bindings.method_get_paragraph_offset) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("get_paragraph_offset");
      this._bindings.method_get_paragraph_offset = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4025615559
      );
    }
  }
  static init_method_parse_expressions_for_values() {
    if (!this._bindings.method_parse_expressions_for_values) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("parse_expressions_for_values");
      this._bindings.method_parse_expressions_for_values = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1522900837
      );
    }
  }
  static init_method_set_effects() {
    if (!this._bindings.method_set_effects) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("set_effects");
      this._bindings.method_set_effects = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        381264803
      );
    }
  }
  static init_method_get_effects() {
    if (!this._bindings.method_get_effects) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("get_effects");
      this._bindings.method_get_effects = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2915620761
      );
    }
  }
  static init_method_install_effect() {
    if (!this._bindings.method_install_effect) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("install_effect");
      this._bindings.method_install_effect = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1114965689
      );
    }
  }
  static init_method_get_menu() {
    if (!this._bindings.method_get_menu) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("get_menu");
      this._bindings.method_get_menu = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        229722558
      );
    }
  }
  static init_method_is_menu_visible() {
    if (!this._bindings.method_is_menu_visible) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("is_menu_visible");
      this._bindings.method_is_menu_visible = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_menu_option() {
    if (!this._bindings.method_menu_option) {
      let classname = new StringName("RichTextLabel");
      let methodname = new StringName("menu_option");
      this._bindings.method_menu_option = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }

  
  
  get_parsed_text() {
    RichTextLabel.init_method_get_parsed_text();
    return _call_native_mb_ret(
      RichTextLabel._bindings.method_get_parsed_text,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  add_text(_text) {
    RichTextLabel.init_method_add_text();
    return _call_native_mb_no_ret(
      RichTextLabel._bindings.method_add_text,
      this._owner,
      _text
    );
    
  }
  set_text(_text) {
    RichTextLabel.init_method_set_text();
    return _call_native_mb_no_ret(
      RichTextLabel._bindings.method_set_text,
      this._owner,
      _text
    );
    
  }
  add_image(_image, _width, _height, _color, _inline_align, _region, _key, _pad, _tooltip, _size_in_percent) {
    RichTextLabel.init_method_add_image();
    return _call_native_mb_no_ret(
      RichTextLabel._bindings.method_add_image,
      this._owner,
      _image, _width, _height, _color, _inline_align, _region, _key, _pad, _tooltip, _size_in_percent
    );
    
  }
  update_image(_key, _mask, _image, _width, _height, _color, _inline_align, _region, _pad, _tooltip, _size_in_percent) {
    RichTextLabel.init_method_update_image();
    return _call_native_mb_no_ret(
      RichTextLabel._bindings.method_update_image,
      this._owner,
      _key, _mask, _image, _width, _height, _color, _inline_align, _region, _pad, _tooltip, _size_in_percent
    );
    
  }
  newline() {
    RichTextLabel.init_method_newline();
    return _call_native_mb_no_ret(
      RichTextLabel._bindings.method_newline,
      this._owner,
      
    );
    
  }
  remove_paragraph(_paragraph, _no_invalidate) {
    RichTextLabel.init_method_remove_paragraph();
    return _call_native_mb_ret(
      RichTextLabel._bindings.method_remove_paragraph,
      this._owner,
			Variant.Type.BOOL,
    
      _paragraph, _no_invalidate
    );
    
  }
  invalidate_paragraph(_paragraph) {
    RichTextLabel.init_method_invalidate_paragraph();
    return _call_native_mb_ret(
      RichTextLabel._bindings.method_invalidate_paragraph,
      this._owner,
			Variant.Type.BOOL,
    
      _paragraph
    );
    
  }
  push_font(_font, _font_size) {
    RichTextLabel.init_method_push_font();
    return _call_native_mb_no_ret(
      RichTextLabel._bindings.method_push_font,
      this._owner,
      _font, _font_size
    );
    
  }
  push_font_size(_font_size) {
    RichTextLabel.init_method_push_font_size();
    return _call_native_mb_no_ret(
      RichTextLabel._bindings.method_push_font_size,
      this._owner,
      _font_size
    );
    
  }
  push_normal() {
    RichTextLabel.init_method_push_normal();
    return _call_native_mb_no_ret(
      RichTextLabel._bindings.method_push_normal,
      this._owner,
      
    );
    
  }
  push_bold() {
    RichTextLabel.init_method_push_bold();
    return _call_native_mb_no_ret(
      RichTextLabel._bindings.method_push_bold,
      this._owner,
      
    );
    
  }
  push_bold_italics() {
    RichTextLabel.init_method_push_bold_italics();
    return _call_native_mb_no_ret(
      RichTextLabel._bindings.method_push_bold_italics,
      this._owner,
      
    );
    
  }
  push_italics() {
    RichTextLabel.init_method_push_italics();
    return _call_native_mb_no_ret(
      RichTextLabel._bindings.method_push_italics,
      this._owner,
      
    );
    
  }
  push_mono() {
    RichTextLabel.init_method_push_mono();
    return _call_native_mb_no_ret(
      RichTextLabel._bindings.method_push_mono,
      this._owner,
      
    );
    
  }
  push_color(_color) {
    RichTextLabel.init_method_push_color();
    return _call_native_mb_no_ret(
      RichTextLabel._bindings.method_push_color,
      this._owner,
      _color
    );
    
  }
  push_outline_size(_outline_size) {
    RichTextLabel.init_method_push_outline_size();
    return _call_native_mb_no_ret(
      RichTextLabel._bindings.method_push_outline_size,
      this._owner,
      _outline_size
    );
    
  }
  push_outline_color(_color) {
    RichTextLabel.init_method_push_outline_color();
    return _call_native_mb_no_ret(
      RichTextLabel._bindings.method_push_outline_color,
      this._owner,
      _color
    );
    
  }
  push_paragraph(_alignment, _base_direction, _language, _st_parser, _justification_flags, _tab_stops) {
    RichTextLabel.init_method_push_paragraph();
    return _call_native_mb_no_ret(
      RichTextLabel._bindings.method_push_paragraph,
      this._owner,
      _alignment, _base_direction, _language, _st_parser, _justification_flags, _tab_stops
    );
    
  }
  push_indent(_level) {
    RichTextLabel.init_method_push_indent();
    return _call_native_mb_no_ret(
      RichTextLabel._bindings.method_push_indent,
      this._owner,
      _level
    );
    
  }
  push_list(_level, _type, _capitalize, _bullet) {
    RichTextLabel.init_method_push_list();
    return _call_native_mb_no_ret(
      RichTextLabel._bindings.method_push_list,
      this._owner,
      _level, _type, _capitalize, _bullet
    );
    
  }
  push_meta(_data, _underline_mode) {
    RichTextLabel.init_method_push_meta();
    return _call_native_mb_no_ret(
      RichTextLabel._bindings.method_push_meta,
      this._owner,
      _data, _underline_mode
    );
    
  }
  push_hint(_description) {
    RichTextLabel.init_method_push_hint();
    return _call_native_mb_no_ret(
      RichTextLabel._bindings.method_push_hint,
      this._owner,
      _description
    );
    
  }
  push_language(_language) {
    RichTextLabel.init_method_push_language();
    return _call_native_mb_no_ret(
      RichTextLabel._bindings.method_push_language,
      this._owner,
      _language
    );
    
  }
  push_underline() {
    RichTextLabel.init_method_push_underline();
    return _call_native_mb_no_ret(
      RichTextLabel._bindings.method_push_underline,
      this._owner,
      
    );
    
  }
  push_strikethrough() {
    RichTextLabel.init_method_push_strikethrough();
    return _call_native_mb_no_ret(
      RichTextLabel._bindings.method_push_strikethrough,
      this._owner,
      
    );
    
  }
  push_table(_columns, _inline_align, _align_to_row) {
    RichTextLabel.init_method_push_table();
    return _call_native_mb_no_ret(
      RichTextLabel._bindings.method_push_table,
      this._owner,
      _columns, _inline_align, _align_to_row
    );
    
  }
  push_dropcap(_string, _font, _size, _dropcap_margins, _color, _outline_size, _outline_color) {
    RichTextLabel.init_method_push_dropcap();
    return _call_native_mb_no_ret(
      RichTextLabel._bindings.method_push_dropcap,
      this._owner,
      _string, _font, _size, _dropcap_margins, _color, _outline_size, _outline_color
    );
    
  }
  set_table_column_expand(_column, _expand, _ratio) {
    RichTextLabel.init_method_set_table_column_expand();
    return _call_native_mb_no_ret(
      RichTextLabel._bindings.method_set_table_column_expand,
      this._owner,
      _column, _expand, _ratio
    );
    
  }
  set_cell_row_background_color(_odd_row_bg, _even_row_bg) {
    RichTextLabel.init_method_set_cell_row_background_color();
    return _call_native_mb_no_ret(
      RichTextLabel._bindings.method_set_cell_row_background_color,
      this._owner,
      _odd_row_bg, _even_row_bg
    );
    
  }
  set_cell_border_color(_color) {
    RichTextLabel.init_method_set_cell_border_color();
    return _call_native_mb_no_ret(
      RichTextLabel._bindings.method_set_cell_border_color,
      this._owner,
      _color
    );
    
  }
  set_cell_size_override(_min_size, _max_size) {
    RichTextLabel.init_method_set_cell_size_override();
    return _call_native_mb_no_ret(
      RichTextLabel._bindings.method_set_cell_size_override,
      this._owner,
      _min_size, _max_size
    );
    
  }
  set_cell_padding(_padding) {
    RichTextLabel.init_method_set_cell_padding();
    return _call_native_mb_no_ret(
      RichTextLabel._bindings.method_set_cell_padding,
      this._owner,
      _padding
    );
    
  }
  push_cell() {
    RichTextLabel.init_method_push_cell();
    return _call_native_mb_no_ret(
      RichTextLabel._bindings.method_push_cell,
      this._owner,
      
    );
    
  }
  push_fgcolor(_fgcolor) {
    RichTextLabel.init_method_push_fgcolor();
    return _call_native_mb_no_ret(
      RichTextLabel._bindings.method_push_fgcolor,
      this._owner,
      _fgcolor
    );
    
  }
  push_bgcolor(_bgcolor) {
    RichTextLabel.init_method_push_bgcolor();
    return _call_native_mb_no_ret(
      RichTextLabel._bindings.method_push_bgcolor,
      this._owner,
      _bgcolor
    );
    
  }
  push_customfx(_effect, _env) {
    RichTextLabel.init_method_push_customfx();
    return _call_native_mb_no_ret(
      RichTextLabel._bindings.method_push_customfx,
      this._owner,
      _effect, _env
    );
    
  }
  push_context() {
    RichTextLabel.init_method_push_context();
    return _call_native_mb_no_ret(
      RichTextLabel._bindings.method_push_context,
      this._owner,
      
    );
    
  }
  pop_context() {
    RichTextLabel.init_method_pop_context();
    return _call_native_mb_no_ret(
      RichTextLabel._bindings.method_pop_context,
      this._owner,
      
    );
    
  }
  pop() {
    RichTextLabel.init_method_pop();
    return _call_native_mb_no_ret(
      RichTextLabel._bindings.method_pop,
      this._owner,
      
    );
    
  }
  pop_all() {
    RichTextLabel.init_method_pop_all();
    return _call_native_mb_no_ret(
      RichTextLabel._bindings.method_pop_all,
      this._owner,
      
    );
    
  }
  clear() {
    RichTextLabel.init_method_clear();
    return _call_native_mb_no_ret(
      RichTextLabel._bindings.method_clear,
      this._owner,
      
    );
    
  }
  set_structured_text_bidi_override(_parser) {
    RichTextLabel.init_method_set_structured_text_bidi_override();
    return _call_native_mb_no_ret(
      RichTextLabel._bindings.method_set_structured_text_bidi_override,
      this._owner,
      _parser
    );
    
  }
  get_structured_text_bidi_override() {
    RichTextLabel.init_method_get_structured_text_bidi_override();
    return _call_native_mb_ret(
      RichTextLabel._bindings.method_get_structured_text_bidi_override,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_structured_text_bidi_override_options(_args) {
    RichTextLabel.init_method_set_structured_text_bidi_override_options();
    return _call_native_mb_no_ret(
      RichTextLabel._bindings.method_set_structured_text_bidi_override_options,
      this._owner,
      _args
    );
    
  }
  get_structured_text_bidi_override_options() {
    RichTextLabel.init_method_get_structured_text_bidi_override_options();
    return _call_native_mb_ret(
      RichTextLabel._bindings.method_get_structured_text_bidi_override_options,
      this._owner,
			Variant.Type.ARRAY,
    
      
    );
    
  }
  set_text_direction(_direction) {
    RichTextLabel.init_method_set_text_direction();
    return _call_native_mb_no_ret(
      RichTextLabel._bindings.method_set_text_direction,
      this._owner,
      _direction
    );
    
  }
  get_text_direction() {
    RichTextLabel.init_method_get_text_direction();
    return _call_native_mb_ret(
      RichTextLabel._bindings.method_get_text_direction,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_language(_language) {
    RichTextLabel.init_method_set_language();
    return _call_native_mb_no_ret(
      RichTextLabel._bindings.method_set_language,
      this._owner,
      _language
    );
    
  }
  get_language() {
    RichTextLabel.init_method_get_language();
    return _call_native_mb_ret(
      RichTextLabel._bindings.method_get_language,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  set_autowrap_mode(_autowrap_mode) {
    RichTextLabel.init_method_set_autowrap_mode();
    return _call_native_mb_no_ret(
      RichTextLabel._bindings.method_set_autowrap_mode,
      this._owner,
      _autowrap_mode
    );
    
  }
  get_autowrap_mode() {
    RichTextLabel.init_method_get_autowrap_mode();
    return _call_native_mb_ret(
      RichTextLabel._bindings.method_get_autowrap_mode,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_meta_underline(_enable) {
    RichTextLabel.init_method_set_meta_underline();
    return _call_native_mb_no_ret(
      RichTextLabel._bindings.method_set_meta_underline,
      this._owner,
      _enable
    );
    
  }
  is_meta_underlined() {
    RichTextLabel.init_method_is_meta_underlined();
    return _call_native_mb_ret(
      RichTextLabel._bindings.method_is_meta_underlined,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_hint_underline(_enable) {
    RichTextLabel.init_method_set_hint_underline();
    return _call_native_mb_no_ret(
      RichTextLabel._bindings.method_set_hint_underline,
      this._owner,
      _enable
    );
    
  }
  is_hint_underlined() {
    RichTextLabel.init_method_is_hint_underlined();
    return _call_native_mb_ret(
      RichTextLabel._bindings.method_is_hint_underlined,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_scroll_active(_active) {
    RichTextLabel.init_method_set_scroll_active();
    return _call_native_mb_no_ret(
      RichTextLabel._bindings.method_set_scroll_active,
      this._owner,
      _active
    );
    
  }
  is_scroll_active() {
    RichTextLabel.init_method_is_scroll_active();
    return _call_native_mb_ret(
      RichTextLabel._bindings.method_is_scroll_active,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_scroll_follow(_follow) {
    RichTextLabel.init_method_set_scroll_follow();
    return _call_native_mb_no_ret(
      RichTextLabel._bindings.method_set_scroll_follow,
      this._owner,
      _follow
    );
    
  }
  is_scroll_following() {
    RichTextLabel.init_method_is_scroll_following();
    return _call_native_mb_ret(
      RichTextLabel._bindings.method_is_scroll_following,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  get_v_scroll_bar() {
    RichTextLabel.init_method_get_v_scroll_bar();
    return _call_native_mb_ret(
      RichTextLabel._bindings.method_get_v_scroll_bar,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  scroll_to_line(_line) {
    RichTextLabel.init_method_scroll_to_line();
    return _call_native_mb_no_ret(
      RichTextLabel._bindings.method_scroll_to_line,
      this._owner,
      _line
    );
    
  }
  scroll_to_paragraph(_paragraph) {
    RichTextLabel.init_method_scroll_to_paragraph();
    return _call_native_mb_no_ret(
      RichTextLabel._bindings.method_scroll_to_paragraph,
      this._owner,
      _paragraph
    );
    
  }
  scroll_to_selection() {
    RichTextLabel.init_method_scroll_to_selection();
    return _call_native_mb_no_ret(
      RichTextLabel._bindings.method_scroll_to_selection,
      this._owner,
      
    );
    
  }
  set_tab_size(_spaces) {
    RichTextLabel.init_method_set_tab_size();
    return _call_native_mb_no_ret(
      RichTextLabel._bindings.method_set_tab_size,
      this._owner,
      _spaces
    );
    
  }
  get_tab_size() {
    RichTextLabel.init_method_get_tab_size();
    return _call_native_mb_ret(
      RichTextLabel._bindings.method_get_tab_size,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_fit_content(_enabled) {
    RichTextLabel.init_method_set_fit_content();
    return _call_native_mb_no_ret(
      RichTextLabel._bindings.method_set_fit_content,
      this._owner,
      _enabled
    );
    
  }
  is_fit_content_enabled() {
    RichTextLabel.init_method_is_fit_content_enabled();
    return _call_native_mb_ret(
      RichTextLabel._bindings.method_is_fit_content_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_selection_enabled(_enabled) {
    RichTextLabel.init_method_set_selection_enabled();
    return _call_native_mb_no_ret(
      RichTextLabel._bindings.method_set_selection_enabled,
      this._owner,
      _enabled
    );
    
  }
  is_selection_enabled() {
    RichTextLabel.init_method_is_selection_enabled();
    return _call_native_mb_ret(
      RichTextLabel._bindings.method_is_selection_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_context_menu_enabled(_enabled) {
    RichTextLabel.init_method_set_context_menu_enabled();
    return _call_native_mb_no_ret(
      RichTextLabel._bindings.method_set_context_menu_enabled,
      this._owner,
      _enabled
    );
    
  }
  is_context_menu_enabled() {
    RichTextLabel.init_method_is_context_menu_enabled();
    return _call_native_mb_ret(
      RichTextLabel._bindings.method_is_context_menu_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_shortcut_keys_enabled(_enabled) {
    RichTextLabel.init_method_set_shortcut_keys_enabled();
    return _call_native_mb_no_ret(
      RichTextLabel._bindings.method_set_shortcut_keys_enabled,
      this._owner,
      _enabled
    );
    
  }
  is_shortcut_keys_enabled() {
    RichTextLabel.init_method_is_shortcut_keys_enabled();
    return _call_native_mb_ret(
      RichTextLabel._bindings.method_is_shortcut_keys_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_deselect_on_focus_loss_enabled(_enable) {
    RichTextLabel.init_method_set_deselect_on_focus_loss_enabled();
    return _call_native_mb_no_ret(
      RichTextLabel._bindings.method_set_deselect_on_focus_loss_enabled,
      this._owner,
      _enable
    );
    
  }
  is_deselect_on_focus_loss_enabled() {
    RichTextLabel.init_method_is_deselect_on_focus_loss_enabled();
    return _call_native_mb_ret(
      RichTextLabel._bindings.method_is_deselect_on_focus_loss_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_drag_and_drop_selection_enabled(_enable) {
    RichTextLabel.init_method_set_drag_and_drop_selection_enabled();
    return _call_native_mb_no_ret(
      RichTextLabel._bindings.method_set_drag_and_drop_selection_enabled,
      this._owner,
      _enable
    );
    
  }
  is_drag_and_drop_selection_enabled() {
    RichTextLabel.init_method_is_drag_and_drop_selection_enabled();
    return _call_native_mb_ret(
      RichTextLabel._bindings.method_is_drag_and_drop_selection_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  get_selection_from() {
    RichTextLabel.init_method_get_selection_from();
    return _call_native_mb_ret(
      RichTextLabel._bindings.method_get_selection_from,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_selection_to() {
    RichTextLabel.init_method_get_selection_to();
    return _call_native_mb_ret(
      RichTextLabel._bindings.method_get_selection_to,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  select_all() {
    RichTextLabel.init_method_select_all();
    return _call_native_mb_no_ret(
      RichTextLabel._bindings.method_select_all,
      this._owner,
      
    );
    
  }
  get_selected_text() {
    RichTextLabel.init_method_get_selected_text();
    return _call_native_mb_ret(
      RichTextLabel._bindings.method_get_selected_text,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  deselect() {
    RichTextLabel.init_method_deselect();
    return _call_native_mb_no_ret(
      RichTextLabel._bindings.method_deselect,
      this._owner,
      
    );
    
  }
  parse_bbcode(_bbcode) {
    RichTextLabel.init_method_parse_bbcode();
    return _call_native_mb_no_ret(
      RichTextLabel._bindings.method_parse_bbcode,
      this._owner,
      _bbcode
    );
    
  }
  append_text(_bbcode) {
    RichTextLabel.init_method_append_text();
    return _call_native_mb_no_ret(
      RichTextLabel._bindings.method_append_text,
      this._owner,
      _bbcode
    );
    
  }
  get_text() {
    RichTextLabel.init_method_get_text();
    return _call_native_mb_ret(
      RichTextLabel._bindings.method_get_text,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  is_ready() {
    RichTextLabel.init_method_is_ready();
    return _call_native_mb_ret(
      RichTextLabel._bindings.method_is_ready,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_threaded(_threaded) {
    RichTextLabel.init_method_set_threaded();
    return _call_native_mb_no_ret(
      RichTextLabel._bindings.method_set_threaded,
      this._owner,
      _threaded
    );
    
  }
  is_threaded() {
    RichTextLabel.init_method_is_threaded();
    return _call_native_mb_ret(
      RichTextLabel._bindings.method_is_threaded,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_progress_bar_delay(_delay_ms) {
    RichTextLabel.init_method_set_progress_bar_delay();
    return _call_native_mb_no_ret(
      RichTextLabel._bindings.method_set_progress_bar_delay,
      this._owner,
      _delay_ms
    );
    
  }
  get_progress_bar_delay() {
    RichTextLabel.init_method_get_progress_bar_delay();
    return _call_native_mb_ret(
      RichTextLabel._bindings.method_get_progress_bar_delay,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_visible_characters(_amount) {
    RichTextLabel.init_method_set_visible_characters();
    return _call_native_mb_no_ret(
      RichTextLabel._bindings.method_set_visible_characters,
      this._owner,
      _amount
    );
    
  }
  get_visible_characters() {
    RichTextLabel.init_method_get_visible_characters();
    return _call_native_mb_ret(
      RichTextLabel._bindings.method_get_visible_characters,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_visible_characters_behavior() {
    RichTextLabel.init_method_get_visible_characters_behavior();
    return _call_native_mb_ret(
      RichTextLabel._bindings.method_get_visible_characters_behavior,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_visible_characters_behavior(_behavior) {
    RichTextLabel.init_method_set_visible_characters_behavior();
    return _call_native_mb_no_ret(
      RichTextLabel._bindings.method_set_visible_characters_behavior,
      this._owner,
      _behavior
    );
    
  }
  set_visible_ratio(_ratio) {
    RichTextLabel.init_method_set_visible_ratio();
    return _call_native_mb_no_ret(
      RichTextLabel._bindings.method_set_visible_ratio,
      this._owner,
      _ratio
    );
    
  }
  get_visible_ratio() {
    RichTextLabel.init_method_get_visible_ratio();
    return _call_native_mb_ret(
      RichTextLabel._bindings.method_get_visible_ratio,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  get_character_line(_character) {
    RichTextLabel.init_method_get_character_line();
    return _call_native_mb_ret(
      RichTextLabel._bindings.method_get_character_line,
      this._owner,
			Variant.Type.INT,
    
      _character
    );
    
  }
  get_character_paragraph(_character) {
    RichTextLabel.init_method_get_character_paragraph();
    return _call_native_mb_ret(
      RichTextLabel._bindings.method_get_character_paragraph,
      this._owner,
			Variant.Type.INT,
    
      _character
    );
    
  }
  get_total_character_count() {
    RichTextLabel.init_method_get_total_character_count();
    return _call_native_mb_ret(
      RichTextLabel._bindings.method_get_total_character_count,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_use_bbcode(_enable) {
    RichTextLabel.init_method_set_use_bbcode();
    return _call_native_mb_no_ret(
      RichTextLabel._bindings.method_set_use_bbcode,
      this._owner,
      _enable
    );
    
  }
  is_using_bbcode() {
    RichTextLabel.init_method_is_using_bbcode();
    return _call_native_mb_ret(
      RichTextLabel._bindings.method_is_using_bbcode,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  get_line_count() {
    RichTextLabel.init_method_get_line_count();
    return _call_native_mb_ret(
      RichTextLabel._bindings.method_get_line_count,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_visible_line_count() {
    RichTextLabel.init_method_get_visible_line_count();
    return _call_native_mb_ret(
      RichTextLabel._bindings.method_get_visible_line_count,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_paragraph_count() {
    RichTextLabel.init_method_get_paragraph_count();
    return _call_native_mb_ret(
      RichTextLabel._bindings.method_get_paragraph_count,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_visible_paragraph_count() {
    RichTextLabel.init_method_get_visible_paragraph_count();
    return _call_native_mb_ret(
      RichTextLabel._bindings.method_get_visible_paragraph_count,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_content_height() {
    RichTextLabel.init_method_get_content_height();
    return _call_native_mb_ret(
      RichTextLabel._bindings.method_get_content_height,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_content_width() {
    RichTextLabel.init_method_get_content_width();
    return _call_native_mb_ret(
      RichTextLabel._bindings.method_get_content_width,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_line_offset(_line) {
    RichTextLabel.init_method_get_line_offset();
    return _call_native_mb_ret(
      RichTextLabel._bindings.method_get_line_offset,
      this._owner,
			Variant.Type.FLOAT,
    
      _line
    );
    
  }
  get_paragraph_offset(_paragraph) {
    RichTextLabel.init_method_get_paragraph_offset();
    return _call_native_mb_ret(
      RichTextLabel._bindings.method_get_paragraph_offset,
      this._owner,
			Variant.Type.FLOAT,
    
      _paragraph
    );
    
  }
  parse_expressions_for_values(_expressions) {
    RichTextLabel.init_method_parse_expressions_for_values();
    return _call_native_mb_ret(
      RichTextLabel._bindings.method_parse_expressions_for_values,
      this._owner,
			Variant.Type.DICTIONARY,
    
      _expressions
    );
    
  }
  set_effects(_effects) {
    RichTextLabel.init_method_set_effects();
    return _call_native_mb_no_ret(
      RichTextLabel._bindings.method_set_effects,
      this._owner,
      _effects
    );
    
  }
  get_effects() {
    RichTextLabel.init_method_get_effects();
    return _call_native_mb_ret(
      RichTextLabel._bindings.method_get_effects,
      this._owner,
			Variant.Type.ARRAY,
    
      
    );
    
  }
  install_effect(_effect) {
    RichTextLabel.init_method_install_effect();
    return _call_native_mb_no_ret(
      RichTextLabel._bindings.method_install_effect,
      this._owner,
      _effect
    );
    
  }
  get_menu() {
    RichTextLabel.init_method_get_menu();
    return _call_native_mb_ret(
      RichTextLabel._bindings.method_get_menu,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  is_menu_visible() {
    RichTextLabel.init_method_is_menu_visible();
    return _call_native_mb_ret(
      RichTextLabel._bindings.method_is_menu_visible,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  menu_option(_option) {
    RichTextLabel.init_method_menu_option();
    return _call_native_mb_no_ret(
      RichTextLabel._bindings.method_menu_option,
      this._owner,
      _option
    );
    
  }
  
get bbcode_enabled () {
  return this.is_using_bbcode();
}
set bbcode_enabled (new_value) {
  this.set_use_bbcode(new_value);
}
get text () {
  return this.get_text();
}
set text (new_value) {
  this.set_text(new_value);
}
get fit_content () {
  return this.is_fit_content_enabled();
}
set fit_content (new_value) {
  this.set_fit_content(new_value);
}
get scroll_active () {
  return this.is_scroll_active();
}
set scroll_active (new_value) {
  this.set_scroll_active(new_value);
}
get scroll_following () {
  return this.is_scroll_following();
}
set scroll_following (new_value) {
  this.set_scroll_follow(new_value);
}
get autowrap_mode () {
  return this.get_autowrap_mode();
}
set autowrap_mode (new_value) {
  this.set_autowrap_mode(new_value);
}
get tab_size () {
  return this.get_tab_size();
}
set tab_size (new_value) {
  this.set_tab_size(new_value);
}
get context_menu_enabled () {
  return this.is_context_menu_enabled();
}
set context_menu_enabled (new_value) {
  this.set_context_menu_enabled(new_value);
}
get shortcut_keys_enabled () {
  return this.is_shortcut_keys_enabled();
}
set shortcut_keys_enabled (new_value) {
  this.set_shortcut_keys_enabled(new_value);
}
get custom_effects () {
  return this.get_effects();
}
set custom_effects (new_value) {
  this.set_effects(new_value);
}
get meta_underlined () {
  return this.is_meta_underlined();
}
set meta_underlined (new_value) {
  this.set_meta_underline(new_value);
}
get hint_underlined () {
  return this.is_hint_underlined();
}
set hint_underlined (new_value) {
  this.set_hint_underline(new_value);
}
get threaded () {
  return this.is_threaded();
}
set threaded (new_value) {
  this.set_threaded(new_value);
}
get progress_bar_delay () {
  return this.get_progress_bar_delay();
}
set progress_bar_delay (new_value) {
  this.set_progress_bar_delay(new_value);
}
get selection_enabled () {
  return this.is_selection_enabled();
}
set selection_enabled (new_value) {
  this.set_selection_enabled(new_value);
}
get deselect_on_focus_loss_enabled () {
  return this.is_deselect_on_focus_loss_enabled();
}
set deselect_on_focus_loss_enabled (new_value) {
  this.set_deselect_on_focus_loss_enabled(new_value);
}
get drag_and_drop_selection_enabled () {
  return this.is_drag_and_drop_selection_enabled();
}
set drag_and_drop_selection_enabled (new_value) {
  this.set_drag_and_drop_selection_enabled(new_value);
}
get visible_characters () {
  return this.get_visible_characters();
}
set visible_characters (new_value) {
  this.set_visible_characters(new_value);
}
get visible_characters_behavior () {
  return this.get_visible_characters_behavior();
}
set visible_characters_behavior (new_value) {
  this.set_visible_characters_behavior(new_value);
}
get visible_ratio () {
  return this.get_visible_ratio();
}
set visible_ratio (new_value) {
  this.set_visible_ratio(new_value);
}
get text_direction () {
  return this.get_text_direction();
}
set text_direction (new_value) {
  this.set_text_direction(new_value);
}
get language () {
  return this.get_language();
}
set language (new_value) {
  this.set_language(new_value);
}
get structured_text_bidi_override () {
  return this.get_structured_text_bidi_override();
}
set structured_text_bidi_override (new_value) {
  this.set_structured_text_bidi_override(new_value);
}
get structured_text_bidi_override_options () {
  return this.get_structured_text_bidi_override_options();
}
set structured_text_bidi_override_options (new_value) {
  this.set_structured_text_bidi_override_options(new_value);
}

  static ListType = {
    LIST_NUMBERS: 0,
    LIST_LETTERS: 1,
    LIST_ROMAN: 2,
    LIST_DOTS: 3,
  }
  static MenuItems = {
    MENU_COPY: 0,
    MENU_SELECT_ALL: 1,
    MENU_MAX: 2,
  }
  static MetaUnderline = {
    META_UNDERLINE_NEVER: 0,
    META_UNDERLINE_ALWAYS: 1,
    META_UNDERLINE_ON_HOVER: 2,
  }
  static ImageUpdateMask = {
    UPDATE_TEXTURE: 1,
    UPDATE_SIZE: 2,
    UPDATE_COLOR: 4,
    UPDATE_ALIGNMENT: 8,
    UPDATE_REGION: 16,
    UPDATE_PAD: 32,
    UPDATE_TOOLTIP: 64,
    UPDATE_WIDTH_IN_PERCENT: 128,
  }
}