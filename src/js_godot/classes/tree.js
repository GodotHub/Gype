import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { Control } from '@js_godot/classes/control'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_clear;
  method_create_item;
  method_get_root;
  method_set_column_custom_minimum_width;
  method_set_column_expand;
  method_set_column_expand_ratio;
  method_set_column_clip_content;
  method_is_column_expanding;
  method_is_column_clipping_content;
  method_get_column_expand_ratio;
  method_get_column_width;
  method_set_hide_root;
  method_is_root_hidden;
  method_get_next_selected;
  method_get_selected;
  method_set_selected;
  method_get_selected_column;
  method_get_pressed_button;
  method_set_select_mode;
  method_get_select_mode;
  method_deselect_all;
  method_set_columns;
  method_get_columns;
  method_get_edited;
  method_get_edited_column;
  method_edit_selected;
  method_get_custom_popup_rect;
  method_get_item_area_rect;
  method_get_item_at_position;
  method_get_column_at_position;
  method_get_drop_section_at_position;
  method_get_button_id_at_position;
  method_ensure_cursor_is_visible;
  method_set_column_titles_visible;
  method_are_column_titles_visible;
  method_set_column_title;
  method_get_column_title;
  method_set_column_title_alignment;
  method_get_column_title_alignment;
  method_set_column_title_direction;
  method_get_column_title_direction;
  method_set_column_title_language;
  method_get_column_title_language;
  method_get_scroll;
  method_scroll_to_item;
  method_set_h_scroll_enabled;
  method_is_h_scroll_enabled;
  method_set_v_scroll_enabled;
  method_is_v_scroll_enabled;
  method_set_hide_folding;
  method_is_folding_hidden;
  method_set_enable_recursive_folding;
  method_is_recursive_folding_enabled;
  method_set_drop_mode_flags;
  method_get_drop_mode_flags;
  method_set_allow_rmb_select;
  method_get_allow_rmb_select;
  method_set_allow_reselect;
  method_get_allow_reselect;
  method_set_allow_search;
  method_get_allow_search;
}
export class Tree extends Control{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("Tree");
    } else {
      super(godot_object);
    }
  }
  static init_method_clear() {
    if (!this.#_bindings.method_clear) {
      let classname = new StringName("Tree");
      let methodname = new StringName("clear");
      this.#_bindings.method_clear = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_create_item() {
    if (!this.#_bindings.method_create_item) {
      let classname = new StringName("Tree");
      let methodname = new StringName("create_item");
      this.#_bindings.method_create_item = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        528467046
      );
    }
  }
  static init_method_get_root() {
    if (!this.#_bindings.method_get_root) {
      let classname = new StringName("Tree");
      let methodname = new StringName("get_root");
      this.#_bindings.method_get_root = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1514277247
      );
    }
  }
  static init_method_set_column_custom_minimum_width() {
    if (!this.#_bindings.method_set_column_custom_minimum_width) {
      let classname = new StringName("Tree");
      let methodname = new StringName("set_column_custom_minimum_width");
      this.#_bindings.method_set_column_custom_minimum_width = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3937882851
      );
    }
  }
  static init_method_set_column_expand() {
    if (!this.#_bindings.method_set_column_expand) {
      let classname = new StringName("Tree");
      let methodname = new StringName("set_column_expand");
      this.#_bindings.method_set_column_expand = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        300928843
      );
    }
  }
  static init_method_set_column_expand_ratio() {
    if (!this.#_bindings.method_set_column_expand_ratio) {
      let classname = new StringName("Tree");
      let methodname = new StringName("set_column_expand_ratio");
      this.#_bindings.method_set_column_expand_ratio = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3937882851
      );
    }
  }
  static init_method_set_column_clip_content() {
    if (!this.#_bindings.method_set_column_clip_content) {
      let classname = new StringName("Tree");
      let methodname = new StringName("set_column_clip_content");
      this.#_bindings.method_set_column_clip_content = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        300928843
      );
    }
  }
  static init_method_is_column_expanding() {
    if (!this.#_bindings.method_is_column_expanding) {
      let classname = new StringName("Tree");
      let methodname = new StringName("is_column_expanding");
      this.#_bindings.method_is_column_expanding = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1116898809
      );
    }
  }
  static init_method_is_column_clipping_content() {
    if (!this.#_bindings.method_is_column_clipping_content) {
      let classname = new StringName("Tree");
      let methodname = new StringName("is_column_clipping_content");
      this.#_bindings.method_is_column_clipping_content = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1116898809
      );
    }
  }
  static init_method_get_column_expand_ratio() {
    if (!this.#_bindings.method_get_column_expand_ratio) {
      let classname = new StringName("Tree");
      let methodname = new StringName("get_column_expand_ratio");
      this.#_bindings.method_get_column_expand_ratio = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        923996154
      );
    }
  }
  static init_method_get_column_width() {
    if (!this.#_bindings.method_get_column_width) {
      let classname = new StringName("Tree");
      let methodname = new StringName("get_column_width");
      this.#_bindings.method_get_column_width = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        923996154
      );
    }
  }
  static init_method_set_hide_root() {
    if (!this.#_bindings.method_set_hide_root) {
      let classname = new StringName("Tree");
      let methodname = new StringName("set_hide_root");
      this.#_bindings.method_set_hide_root = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_root_hidden() {
    if (!this.#_bindings.method_is_root_hidden) {
      let classname = new StringName("Tree");
      let methodname = new StringName("is_root_hidden");
      this.#_bindings.method_is_root_hidden = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_get_next_selected() {
    if (!this.#_bindings.method_get_next_selected) {
      let classname = new StringName("Tree");
      let methodname = new StringName("get_next_selected");
      this.#_bindings.method_get_next_selected = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        873446299
      );
    }
  }
  static init_method_get_selected() {
    if (!this.#_bindings.method_get_selected) {
      let classname = new StringName("Tree");
      let methodname = new StringName("get_selected");
      this.#_bindings.method_get_selected = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1514277247
      );
    }
  }
  static init_method_set_selected() {
    if (!this.#_bindings.method_set_selected) {
      let classname = new StringName("Tree");
      let methodname = new StringName("set_selected");
      this.#_bindings.method_set_selected = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2662547442
      );
    }
  }
  static init_method_get_selected_column() {
    if (!this.#_bindings.method_get_selected_column) {
      let classname = new StringName("Tree");
      let methodname = new StringName("get_selected_column");
      this.#_bindings.method_get_selected_column = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_get_pressed_button() {
    if (!this.#_bindings.method_get_pressed_button) {
      let classname = new StringName("Tree");
      let methodname = new StringName("get_pressed_button");
      this.#_bindings.method_get_pressed_button = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_select_mode() {
    if (!this.#_bindings.method_set_select_mode) {
      let classname = new StringName("Tree");
      let methodname = new StringName("set_select_mode");
      this.#_bindings.method_set_select_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3223887270
      );
    }
  }
  static init_method_get_select_mode() {
    if (!this.#_bindings.method_get_select_mode) {
      let classname = new StringName("Tree");
      let methodname = new StringName("get_select_mode");
      this.#_bindings.method_get_select_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        100748571
      );
    }
  }
  static init_method_deselect_all() {
    if (!this.#_bindings.method_deselect_all) {
      let classname = new StringName("Tree");
      let methodname = new StringName("deselect_all");
      this.#_bindings.method_deselect_all = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_set_columns() {
    if (!this.#_bindings.method_set_columns) {
      let classname = new StringName("Tree");
      let methodname = new StringName("set_columns");
      this.#_bindings.method_set_columns = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_columns() {
    if (!this.#_bindings.method_get_columns) {
      let classname = new StringName("Tree");
      let methodname = new StringName("get_columns");
      this.#_bindings.method_get_columns = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_get_edited() {
    if (!this.#_bindings.method_get_edited) {
      let classname = new StringName("Tree");
      let methodname = new StringName("get_edited");
      this.#_bindings.method_get_edited = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1514277247
      );
    }
  }
  static init_method_get_edited_column() {
    if (!this.#_bindings.method_get_edited_column) {
      let classname = new StringName("Tree");
      let methodname = new StringName("get_edited_column");
      this.#_bindings.method_get_edited_column = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_edit_selected() {
    if (!this.#_bindings.method_edit_selected) {
      let classname = new StringName("Tree");
      let methodname = new StringName("edit_selected");
      this.#_bindings.method_edit_selected = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2595650253
      );
    }
  }
  static init_method_get_custom_popup_rect() {
    if (!this.#_bindings.method_get_custom_popup_rect) {
      let classname = new StringName("Tree");
      let methodname = new StringName("get_custom_popup_rect");
      this.#_bindings.method_get_custom_popup_rect = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1639390495
      );
    }
  }
  static init_method_get_item_area_rect() {
    if (!this.#_bindings.method_get_item_area_rect) {
      let classname = new StringName("Tree");
      let methodname = new StringName("get_item_area_rect");
      this.#_bindings.method_get_item_area_rect = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        47968679
      );
    }
  }
  static init_method_get_item_at_position() {
    if (!this.#_bindings.method_get_item_at_position) {
      let classname = new StringName("Tree");
      let methodname = new StringName("get_item_at_position");
      this.#_bindings.method_get_item_at_position = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4193340126
      );
    }
  }
  static init_method_get_column_at_position() {
    if (!this.#_bindings.method_get_column_at_position) {
      let classname = new StringName("Tree");
      let methodname = new StringName("get_column_at_position");
      this.#_bindings.method_get_column_at_position = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3820158470
      );
    }
  }
  static init_method_get_drop_section_at_position() {
    if (!this.#_bindings.method_get_drop_section_at_position) {
      let classname = new StringName("Tree");
      let methodname = new StringName("get_drop_section_at_position");
      this.#_bindings.method_get_drop_section_at_position = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3820158470
      );
    }
  }
  static init_method_get_button_id_at_position() {
    if (!this.#_bindings.method_get_button_id_at_position) {
      let classname = new StringName("Tree");
      let methodname = new StringName("get_button_id_at_position");
      this.#_bindings.method_get_button_id_at_position = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3820158470
      );
    }
  }
  static init_method_ensure_cursor_is_visible() {
    if (!this.#_bindings.method_ensure_cursor_is_visible) {
      let classname = new StringName("Tree");
      let methodname = new StringName("ensure_cursor_is_visible");
      this.#_bindings.method_ensure_cursor_is_visible = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_set_column_titles_visible() {
    if (!this.#_bindings.method_set_column_titles_visible) {
      let classname = new StringName("Tree");
      let methodname = new StringName("set_column_titles_visible");
      this.#_bindings.method_set_column_titles_visible = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_are_column_titles_visible() {
    if (!this.#_bindings.method_are_column_titles_visible) {
      let classname = new StringName("Tree");
      let methodname = new StringName("are_column_titles_visible");
      this.#_bindings.method_are_column_titles_visible = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_column_title() {
    if (!this.#_bindings.method_set_column_title) {
      let classname = new StringName("Tree");
      let methodname = new StringName("set_column_title");
      this.#_bindings.method_set_column_title = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        501894301
      );
    }
  }
  static init_method_get_column_title() {
    if (!this.#_bindings.method_get_column_title) {
      let classname = new StringName("Tree");
      let methodname = new StringName("get_column_title");
      this.#_bindings.method_get_column_title = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        844755477
      );
    }
  }
  static init_method_set_column_title_alignment() {
    if (!this.#_bindings.method_set_column_title_alignment) {
      let classname = new StringName("Tree");
      let methodname = new StringName("set_column_title_alignment");
      this.#_bindings.method_set_column_title_alignment = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3276431499
      );
    }
  }
  static init_method_get_column_title_alignment() {
    if (!this.#_bindings.method_get_column_title_alignment) {
      let classname = new StringName("Tree");
      let methodname = new StringName("get_column_title_alignment");
      this.#_bindings.method_get_column_title_alignment = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4171562184
      );
    }
  }
  static init_method_set_column_title_direction() {
    if (!this.#_bindings.method_set_column_title_direction) {
      let classname = new StringName("Tree");
      let methodname = new StringName("set_column_title_direction");
      this.#_bindings.method_set_column_title_direction = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1707680378
      );
    }
  }
  static init_method_get_column_title_direction() {
    if (!this.#_bindings.method_get_column_title_direction) {
      let classname = new StringName("Tree");
      let methodname = new StringName("get_column_title_direction");
      this.#_bindings.method_get_column_title_direction = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4235602388
      );
    }
  }
  static init_method_set_column_title_language() {
    if (!this.#_bindings.method_set_column_title_language) {
      let classname = new StringName("Tree");
      let methodname = new StringName("set_column_title_language");
      this.#_bindings.method_set_column_title_language = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        501894301
      );
    }
  }
  static init_method_get_column_title_language() {
    if (!this.#_bindings.method_get_column_title_language) {
      let classname = new StringName("Tree");
      let methodname = new StringName("get_column_title_language");
      this.#_bindings.method_get_column_title_language = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        844755477
      );
    }
  }
  static init_method_get_scroll() {
    if (!this.#_bindings.method_get_scroll) {
      let classname = new StringName("Tree");
      let methodname = new StringName("get_scroll");
      this.#_bindings.method_get_scroll = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3341600327
      );
    }
  }
  static init_method_scroll_to_item() {
    if (!this.#_bindings.method_scroll_to_item) {
      let classname = new StringName("Tree");
      let methodname = new StringName("scroll_to_item");
      this.#_bindings.method_scroll_to_item = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1314737213
      );
    }
  }
  static init_method_set_h_scroll_enabled() {
    if (!this.#_bindings.method_set_h_scroll_enabled) {
      let classname = new StringName("Tree");
      let methodname = new StringName("set_h_scroll_enabled");
      this.#_bindings.method_set_h_scroll_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_h_scroll_enabled() {
    if (!this.#_bindings.method_is_h_scroll_enabled) {
      let classname = new StringName("Tree");
      let methodname = new StringName("is_h_scroll_enabled");
      this.#_bindings.method_is_h_scroll_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_v_scroll_enabled() {
    if (!this.#_bindings.method_set_v_scroll_enabled) {
      let classname = new StringName("Tree");
      let methodname = new StringName("set_v_scroll_enabled");
      this.#_bindings.method_set_v_scroll_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_v_scroll_enabled() {
    if (!this.#_bindings.method_is_v_scroll_enabled) {
      let classname = new StringName("Tree");
      let methodname = new StringName("is_v_scroll_enabled");
      this.#_bindings.method_is_v_scroll_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_hide_folding() {
    if (!this.#_bindings.method_set_hide_folding) {
      let classname = new StringName("Tree");
      let methodname = new StringName("set_hide_folding");
      this.#_bindings.method_set_hide_folding = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_folding_hidden() {
    if (!this.#_bindings.method_is_folding_hidden) {
      let classname = new StringName("Tree");
      let methodname = new StringName("is_folding_hidden");
      this.#_bindings.method_is_folding_hidden = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_enable_recursive_folding() {
    if (!this.#_bindings.method_set_enable_recursive_folding) {
      let classname = new StringName("Tree");
      let methodname = new StringName("set_enable_recursive_folding");
      this.#_bindings.method_set_enable_recursive_folding = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_recursive_folding_enabled() {
    if (!this.#_bindings.method_is_recursive_folding_enabled) {
      let classname = new StringName("Tree");
      let methodname = new StringName("is_recursive_folding_enabled");
      this.#_bindings.method_is_recursive_folding_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_drop_mode_flags() {
    if (!this.#_bindings.method_set_drop_mode_flags) {
      let classname = new StringName("Tree");
      let methodname = new StringName("set_drop_mode_flags");
      this.#_bindings.method_set_drop_mode_flags = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_drop_mode_flags() {
    if (!this.#_bindings.method_get_drop_mode_flags) {
      let classname = new StringName("Tree");
      let methodname = new StringName("get_drop_mode_flags");
      this.#_bindings.method_get_drop_mode_flags = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_allow_rmb_select() {
    if (!this.#_bindings.method_set_allow_rmb_select) {
      let classname = new StringName("Tree");
      let methodname = new StringName("set_allow_rmb_select");
      this.#_bindings.method_set_allow_rmb_select = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_allow_rmb_select() {
    if (!this.#_bindings.method_get_allow_rmb_select) {
      let classname = new StringName("Tree");
      let methodname = new StringName("get_allow_rmb_select");
      this.#_bindings.method_get_allow_rmb_select = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_allow_reselect() {
    if (!this.#_bindings.method_set_allow_reselect) {
      let classname = new StringName("Tree");
      let methodname = new StringName("set_allow_reselect");
      this.#_bindings.method_set_allow_reselect = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_allow_reselect() {
    if (!this.#_bindings.method_get_allow_reselect) {
      let classname = new StringName("Tree");
      let methodname = new StringName("get_allow_reselect");
      this.#_bindings.method_get_allow_reselect = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_allow_search() {
    if (!this.#_bindings.method_set_allow_search) {
      let classname = new StringName("Tree");
      let methodname = new StringName("set_allow_search");
      this.#_bindings.method_set_allow_search = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_allow_search() {
    if (!this.#_bindings.method_get_allow_search) {
      let classname = new StringName("Tree");
      let methodname = new StringName("get_allow_search");
      this.#_bindings.method_get_allow_search = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }

  
  
  clear() {
    Tree.init_method_clear();
    return _call_native_mb_no_ret(
      Tree.#_bindings.method_clear,
      this._owner,
      
    );
    
  }
  create_item(_parent, _index) {
    Tree.init_method_create_item();
    return _call_native_mb_ret(
      Tree.#_bindings.method_create_item,
      this._owner,
			Variant.Type.OBJECT,
      _parent, _index
    );
    
  }
  get_root() {
    Tree.init_method_get_root();
    return _call_native_mb_ret(
      Tree.#_bindings.method_get_root,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_column_custom_minimum_width(_column, _min_width) {
    Tree.init_method_set_column_custom_minimum_width();
    return _call_native_mb_no_ret(
      Tree.#_bindings.method_set_column_custom_minimum_width,
      this._owner,
      _column, _min_width
    );
    
  }
  set_column_expand(_column, _expand) {
    Tree.init_method_set_column_expand();
    return _call_native_mb_no_ret(
      Tree.#_bindings.method_set_column_expand,
      this._owner,
      _column, _expand
    );
    
  }
  set_column_expand_ratio(_column, _ratio) {
    Tree.init_method_set_column_expand_ratio();
    return _call_native_mb_no_ret(
      Tree.#_bindings.method_set_column_expand_ratio,
      this._owner,
      _column, _ratio
    );
    
  }
  set_column_clip_content(_column, _enable) {
    Tree.init_method_set_column_clip_content();
    return _call_native_mb_no_ret(
      Tree.#_bindings.method_set_column_clip_content,
      this._owner,
      _column, _enable
    );
    
  }
  is_column_expanding(_column) {
    Tree.init_method_is_column_expanding();
    return _call_native_mb_ret(
      Tree.#_bindings.method_is_column_expanding,
      this._owner,
			Variant.Type.BOOL,
    
      _column
    );
    
  }
  is_column_clipping_content(_column) {
    Tree.init_method_is_column_clipping_content();
    return _call_native_mb_ret(
      Tree.#_bindings.method_is_column_clipping_content,
      this._owner,
			Variant.Type.BOOL,
    
      _column
    );
    
  }
  get_column_expand_ratio(_column) {
    Tree.init_method_get_column_expand_ratio();
    return _call_native_mb_ret(
      Tree.#_bindings.method_get_column_expand_ratio,
      this._owner,
			Variant.Type.INT,
    
      _column
    );
    
  }
  get_column_width(_column) {
    Tree.init_method_get_column_width();
    return _call_native_mb_ret(
      Tree.#_bindings.method_get_column_width,
      this._owner,
			Variant.Type.INT,
    
      _column
    );
    
  }
  set_hide_root(_enable) {
    Tree.init_method_set_hide_root();
    return _call_native_mb_no_ret(
      Tree.#_bindings.method_set_hide_root,
      this._owner,
      _enable
    );
    
  }
  is_root_hidden() {
    Tree.init_method_is_root_hidden();
    return _call_native_mb_ret(
      Tree.#_bindings.method_is_root_hidden,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  get_next_selected(_from) {
    Tree.init_method_get_next_selected();
    return _call_native_mb_ret(
      Tree.#_bindings.method_get_next_selected,
      this._owner,
			Variant.Type.OBJECT,
      _from
    );
    
  }
  get_selected() {
    Tree.init_method_get_selected();
    return _call_native_mb_ret(
      Tree.#_bindings.method_get_selected,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_selected(_item, _column) {
    Tree.init_method_set_selected();
    return _call_native_mb_no_ret(
      Tree.#_bindings.method_set_selected,
      this._owner,
      _item, _column
    );
    
  }
  get_selected_column() {
    Tree.init_method_get_selected_column();
    return _call_native_mb_ret(
      Tree.#_bindings.method_get_selected_column,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_pressed_button() {
    Tree.init_method_get_pressed_button();
    return _call_native_mb_ret(
      Tree.#_bindings.method_get_pressed_button,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_select_mode(_mode) {
    Tree.init_method_set_select_mode();
    return _call_native_mb_no_ret(
      Tree.#_bindings.method_set_select_mode,
      this._owner,
      _mode
    );
    
  }
  get_select_mode() {
    Tree.init_method_get_select_mode();
    return _call_native_mb_ret(
      Tree.#_bindings.method_get_select_mode,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  deselect_all() {
    Tree.init_method_deselect_all();
    return _call_native_mb_no_ret(
      Tree.#_bindings.method_deselect_all,
      this._owner,
      
    );
    
  }
  set_columns(_amount) {
    Tree.init_method_set_columns();
    return _call_native_mb_no_ret(
      Tree.#_bindings.method_set_columns,
      this._owner,
      _amount
    );
    
  }
  get_columns() {
    Tree.init_method_get_columns();
    return _call_native_mb_ret(
      Tree.#_bindings.method_get_columns,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_edited() {
    Tree.init_method_get_edited();
    return _call_native_mb_ret(
      Tree.#_bindings.method_get_edited,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  get_edited_column() {
    Tree.init_method_get_edited_column();
    return _call_native_mb_ret(
      Tree.#_bindings.method_get_edited_column,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  edit_selected(_force_edit) {
    Tree.init_method_edit_selected();
    return _call_native_mb_ret(
      Tree.#_bindings.method_edit_selected,
      this._owner,
			Variant.Type.BOOL,
    
      _force_edit
    );
    
  }
  get_custom_popup_rect() {
    Tree.init_method_get_custom_popup_rect();
    return _call_native_mb_ret(
      Tree.#_bindings.method_get_custom_popup_rect,
      this._owner,
			Variant.Type.RECT2,
    
      
    );
    
  }
  get_item_area_rect(_item, _column, _button_index) {
    Tree.init_method_get_item_area_rect();
    return _call_native_mb_ret(
      Tree.#_bindings.method_get_item_area_rect,
      this._owner,
			Variant.Type.RECT2,
    
      _item, _column, _button_index
    );
    
  }
  get_item_at_position(_position) {
    Tree.init_method_get_item_at_position();
    return _call_native_mb_ret(
      Tree.#_bindings.method_get_item_at_position,
      this._owner,
			Variant.Type.OBJECT,
      _position
    );
    
  }
  get_column_at_position(_position) {
    Tree.init_method_get_column_at_position();
    return _call_native_mb_ret(
      Tree.#_bindings.method_get_column_at_position,
      this._owner,
			Variant.Type.INT,
    
      _position
    );
    
  }
  get_drop_section_at_position(_position) {
    Tree.init_method_get_drop_section_at_position();
    return _call_native_mb_ret(
      Tree.#_bindings.method_get_drop_section_at_position,
      this._owner,
			Variant.Type.INT,
    
      _position
    );
    
  }
  get_button_id_at_position(_position) {
    Tree.init_method_get_button_id_at_position();
    return _call_native_mb_ret(
      Tree.#_bindings.method_get_button_id_at_position,
      this._owner,
			Variant.Type.INT,
    
      _position
    );
    
  }
  ensure_cursor_is_visible() {
    Tree.init_method_ensure_cursor_is_visible();
    return _call_native_mb_no_ret(
      Tree.#_bindings.method_ensure_cursor_is_visible,
      this._owner,
      
    );
    
  }
  set_column_titles_visible(_visible) {
    Tree.init_method_set_column_titles_visible();
    return _call_native_mb_no_ret(
      Tree.#_bindings.method_set_column_titles_visible,
      this._owner,
      _visible
    );
    
  }
  are_column_titles_visible() {
    Tree.init_method_are_column_titles_visible();
    return _call_native_mb_ret(
      Tree.#_bindings.method_are_column_titles_visible,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_column_title(_column, _title) {
    Tree.init_method_set_column_title();
    return _call_native_mb_no_ret(
      Tree.#_bindings.method_set_column_title,
      this._owner,
      _column, _title
    );
    
  }
  get_column_title(_column) {
    Tree.init_method_get_column_title();
    return _call_native_mb_ret(
      Tree.#_bindings.method_get_column_title,
      this._owner,
			Variant.Type.STRING,
    
      _column
    );
    
  }
  set_column_title_alignment(_column, _title_alignment) {
    Tree.init_method_set_column_title_alignment();
    return _call_native_mb_no_ret(
      Tree.#_bindings.method_set_column_title_alignment,
      this._owner,
      _column, _title_alignment
    );
    
  }
  get_column_title_alignment(_column) {
    Tree.init_method_get_column_title_alignment();
    return _call_native_mb_ret(
      Tree.#_bindings.method_get_column_title_alignment,
      this._owner,
			Variant.Type.INT,
    
      _column
    );
    
  }
  set_column_title_direction(_column, _direction) {
    Tree.init_method_set_column_title_direction();
    return _call_native_mb_no_ret(
      Tree.#_bindings.method_set_column_title_direction,
      this._owner,
      _column, _direction
    );
    
  }
  get_column_title_direction(_column) {
    Tree.init_method_get_column_title_direction();
    return _call_native_mb_ret(
      Tree.#_bindings.method_get_column_title_direction,
      this._owner,
			Variant.Type.INT,
    
      _column
    );
    
  }
  set_column_title_language(_column, _language) {
    Tree.init_method_set_column_title_language();
    return _call_native_mb_no_ret(
      Tree.#_bindings.method_set_column_title_language,
      this._owner,
      _column, _language
    );
    
  }
  get_column_title_language(_column) {
    Tree.init_method_get_column_title_language();
    return _call_native_mb_ret(
      Tree.#_bindings.method_get_column_title_language,
      this._owner,
			Variant.Type.STRING,
    
      _column
    );
    
  }
  get_scroll() {
    Tree.init_method_get_scroll();
    return _call_native_mb_ret(
      Tree.#_bindings.method_get_scroll,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  scroll_to_item(_item, _center_on_item) {
    Tree.init_method_scroll_to_item();
    return _call_native_mb_no_ret(
      Tree.#_bindings.method_scroll_to_item,
      this._owner,
      _item, _center_on_item
    );
    
  }
  set_h_scroll_enabled(_h_scroll) {
    Tree.init_method_set_h_scroll_enabled();
    return _call_native_mb_no_ret(
      Tree.#_bindings.method_set_h_scroll_enabled,
      this._owner,
      _h_scroll
    );
    
  }
  is_h_scroll_enabled() {
    Tree.init_method_is_h_scroll_enabled();
    return _call_native_mb_ret(
      Tree.#_bindings.method_is_h_scroll_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_v_scroll_enabled(_h_scroll) {
    Tree.init_method_set_v_scroll_enabled();
    return _call_native_mb_no_ret(
      Tree.#_bindings.method_set_v_scroll_enabled,
      this._owner,
      _h_scroll
    );
    
  }
  is_v_scroll_enabled() {
    Tree.init_method_is_v_scroll_enabled();
    return _call_native_mb_ret(
      Tree.#_bindings.method_is_v_scroll_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_hide_folding(_hide) {
    Tree.init_method_set_hide_folding();
    return _call_native_mb_no_ret(
      Tree.#_bindings.method_set_hide_folding,
      this._owner,
      _hide
    );
    
  }
  is_folding_hidden() {
    Tree.init_method_is_folding_hidden();
    return _call_native_mb_ret(
      Tree.#_bindings.method_is_folding_hidden,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_enable_recursive_folding(_enable) {
    Tree.init_method_set_enable_recursive_folding();
    return _call_native_mb_no_ret(
      Tree.#_bindings.method_set_enable_recursive_folding,
      this._owner,
      _enable
    );
    
  }
  is_recursive_folding_enabled() {
    Tree.init_method_is_recursive_folding_enabled();
    return _call_native_mb_ret(
      Tree.#_bindings.method_is_recursive_folding_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_drop_mode_flags(_flags) {
    Tree.init_method_set_drop_mode_flags();
    return _call_native_mb_no_ret(
      Tree.#_bindings.method_set_drop_mode_flags,
      this._owner,
      _flags
    );
    
  }
  get_drop_mode_flags() {
    Tree.init_method_get_drop_mode_flags();
    return _call_native_mb_ret(
      Tree.#_bindings.method_get_drop_mode_flags,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_allow_rmb_select(_allow) {
    Tree.init_method_set_allow_rmb_select();
    return _call_native_mb_no_ret(
      Tree.#_bindings.method_set_allow_rmb_select,
      this._owner,
      _allow
    );
    
  }
  get_allow_rmb_select() {
    Tree.init_method_get_allow_rmb_select();
    return _call_native_mb_ret(
      Tree.#_bindings.method_get_allow_rmb_select,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_allow_reselect(_allow) {
    Tree.init_method_set_allow_reselect();
    return _call_native_mb_no_ret(
      Tree.#_bindings.method_set_allow_reselect,
      this._owner,
      _allow
    );
    
  }
  get_allow_reselect() {
    Tree.init_method_get_allow_reselect();
    return _call_native_mb_ret(
      Tree.#_bindings.method_get_allow_reselect,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_allow_search(_allow) {
    Tree.init_method_set_allow_search();
    return _call_native_mb_no_ret(
      Tree.#_bindings.method_set_allow_search,
      this._owner,
      _allow
    );
    
  }
  get_allow_search() {
    Tree.init_method_get_allow_search();
    return _call_native_mb_ret(
      Tree.#_bindings.method_get_allow_search,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  
get columns () {
  return this.get_columns();
}
set columns (new_value) {
  this.set_columns(new_value);
}
get column_titles_visible () {
  return this.are_column_titles_visible();
}
set column_titles_visible (new_value) {
  this.set_column_titles_visible(new_value);
}
get allow_reselect () {
  return this.get_allow_reselect();
}
set allow_reselect (new_value) {
  this.set_allow_reselect(new_value);
}
get allow_rmb_select () {
  return this.get_allow_rmb_select();
}
set allow_rmb_select (new_value) {
  this.set_allow_rmb_select(new_value);
}
get allow_search () {
  return this.get_allow_search();
}
set allow_search (new_value) {
  this.set_allow_search(new_value);
}
get hide_folding () {
  return this.is_folding_hidden();
}
set hide_folding (new_value) {
  this.set_hide_folding(new_value);
}
get enable_recursive_folding () {
  return this.is_recursive_folding_enabled();
}
set enable_recursive_folding (new_value) {
  this.set_enable_recursive_folding(new_value);
}
get hide_root () {
  return this.is_root_hidden();
}
set hide_root (new_value) {
  this.set_hide_root(new_value);
}
get drop_mode_flags () {
  return this.get_drop_mode_flags();
}
set drop_mode_flags (new_value) {
  this.set_drop_mode_flags(new_value);
}
get select_mode () {
  return this.get_select_mode();
}
set select_mode (new_value) {
  this.set_select_mode(new_value);
}
get scroll_horizontal_enabled () {
  return this.is_h_scroll_enabled();
}
set scroll_horizontal_enabled (new_value) {
  this.set_h_scroll_enabled(new_value);
}
get scroll_vertical_enabled () {
  return this.is_v_scroll_enabled();
}
set scroll_vertical_enabled (new_value) {
  this.set_v_scroll_enabled(new_value);
}

  static SelectMode = {
    SELECT_SINGLE: 0,
    SELECT_ROW: 1,
    SELECT_MULTI: 2,
  }
  static DropModeFlags = {
    DROP_MODE_DISABLED: 0,
    DROP_MODE_ON_ITEM: 1,
    DROP_MODE_INBETWEEN: 2,
  }
}