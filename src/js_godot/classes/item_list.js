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
  method_add_item;
  method_add_icon_item;
  method_set_item_text;
  method_get_item_text;
  method_set_item_icon;
  method_get_item_icon;
  method_set_item_text_direction;
  method_get_item_text_direction;
  method_set_item_language;
  method_get_item_language;
  method_set_item_icon_transposed;
  method_is_item_icon_transposed;
  method_set_item_icon_region;
  method_get_item_icon_region;
  method_set_item_icon_modulate;
  method_get_item_icon_modulate;
  method_set_item_selectable;
  method_is_item_selectable;
  method_set_item_disabled;
  method_is_item_disabled;
  method_set_item_metadata;
  method_get_item_metadata;
  method_set_item_custom_bg_color;
  method_get_item_custom_bg_color;
  method_set_item_custom_fg_color;
  method_get_item_custom_fg_color;
  method_get_item_rect;
  method_set_item_tooltip_enabled;
  method_is_item_tooltip_enabled;
  method_set_item_tooltip;
  method_get_item_tooltip;
  method_select;
  method_deselect;
  method_deselect_all;
  method_is_selected;
  method_get_selected_items;
  method_move_item;
  method_set_item_count;
  method_get_item_count;
  method_remove_item;
  method_clear;
  method_sort_items_by_text;
  method_set_fixed_column_width;
  method_get_fixed_column_width;
  method_set_same_column_width;
  method_is_same_column_width;
  method_set_max_text_lines;
  method_get_max_text_lines;
  method_set_max_columns;
  method_get_max_columns;
  method_set_select_mode;
  method_get_select_mode;
  method_set_icon_mode;
  method_get_icon_mode;
  method_set_fixed_icon_size;
  method_get_fixed_icon_size;
  method_set_icon_scale;
  method_get_icon_scale;
  method_set_allow_rmb_select;
  method_get_allow_rmb_select;
  method_set_allow_reselect;
  method_get_allow_reselect;
  method_set_allow_search;
  method_get_allow_search;
  method_set_auto_height;
  method_has_auto_height;
  method_is_anything_selected;
  method_get_item_at_position;
  method_ensure_current_is_visible;
  method_get_v_scroll_bar;
  method_set_text_overrun_behavior;
  method_get_text_overrun_behavior;
  method_force_update_list_size;
}
export class ItemList extends Control{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("ItemList");
    } else {
      super(godot_object);
    }
  }
  static init_method_add_item() {
    if (!this.#_bindings.method_add_item) {
      let classname = new StringName("ItemList");
      let methodname = new StringName("add_item");
      this.#_bindings.method_add_item = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        359861678
      );
    }
  }
  static init_method_add_icon_item() {
    if (!this.#_bindings.method_add_icon_item) {
      let classname = new StringName("ItemList");
      let methodname = new StringName("add_icon_item");
      this.#_bindings.method_add_icon_item = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4256579627
      );
    }
  }
  static init_method_set_item_text() {
    if (!this.#_bindings.method_set_item_text) {
      let classname = new StringName("ItemList");
      let methodname = new StringName("set_item_text");
      this.#_bindings.method_set_item_text = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        501894301
      );
    }
  }
  static init_method_get_item_text() {
    if (!this.#_bindings.method_get_item_text) {
      let classname = new StringName("ItemList");
      let methodname = new StringName("get_item_text");
      this.#_bindings.method_get_item_text = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        844755477
      );
    }
  }
  static init_method_set_item_icon() {
    if (!this.#_bindings.method_set_item_icon) {
      let classname = new StringName("ItemList");
      let methodname = new StringName("set_item_icon");
      this.#_bindings.method_set_item_icon = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        666127730
      );
    }
  }
  static init_method_get_item_icon() {
    if (!this.#_bindings.method_get_item_icon) {
      let classname = new StringName("ItemList");
      let methodname = new StringName("get_item_icon");
      this.#_bindings.method_get_item_icon = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3536238170
      );
    }
  }
  static init_method_set_item_text_direction() {
    if (!this.#_bindings.method_set_item_text_direction) {
      let classname = new StringName("ItemList");
      let methodname = new StringName("set_item_text_direction");
      this.#_bindings.method_set_item_text_direction = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1707680378
      );
    }
  }
  static init_method_get_item_text_direction() {
    if (!this.#_bindings.method_get_item_text_direction) {
      let classname = new StringName("ItemList");
      let methodname = new StringName("get_item_text_direction");
      this.#_bindings.method_get_item_text_direction = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4235602388
      );
    }
  }
  static init_method_set_item_language() {
    if (!this.#_bindings.method_set_item_language) {
      let classname = new StringName("ItemList");
      let methodname = new StringName("set_item_language");
      this.#_bindings.method_set_item_language = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        501894301
      );
    }
  }
  static init_method_get_item_language() {
    if (!this.#_bindings.method_get_item_language) {
      let classname = new StringName("ItemList");
      let methodname = new StringName("get_item_language");
      this.#_bindings.method_get_item_language = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        844755477
      );
    }
  }
  static init_method_set_item_icon_transposed() {
    if (!this.#_bindings.method_set_item_icon_transposed) {
      let classname = new StringName("ItemList");
      let methodname = new StringName("set_item_icon_transposed");
      this.#_bindings.method_set_item_icon_transposed = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        300928843
      );
    }
  }
  static init_method_is_item_icon_transposed() {
    if (!this.#_bindings.method_is_item_icon_transposed) {
      let classname = new StringName("ItemList");
      let methodname = new StringName("is_item_icon_transposed");
      this.#_bindings.method_is_item_icon_transposed = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1116898809
      );
    }
  }
  static init_method_set_item_icon_region() {
    if (!this.#_bindings.method_set_item_icon_region) {
      let classname = new StringName("ItemList");
      let methodname = new StringName("set_item_icon_region");
      this.#_bindings.method_set_item_icon_region = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1356297692
      );
    }
  }
  static init_method_get_item_icon_region() {
    if (!this.#_bindings.method_get_item_icon_region) {
      let classname = new StringName("ItemList");
      let methodname = new StringName("get_item_icon_region");
      this.#_bindings.method_get_item_icon_region = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3327874267
      );
    }
  }
  static init_method_set_item_icon_modulate() {
    if (!this.#_bindings.method_set_item_icon_modulate) {
      let classname = new StringName("ItemList");
      let methodname = new StringName("set_item_icon_modulate");
      this.#_bindings.method_set_item_icon_modulate = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2878471219
      );
    }
  }
  static init_method_get_item_icon_modulate() {
    if (!this.#_bindings.method_get_item_icon_modulate) {
      let classname = new StringName("ItemList");
      let methodname = new StringName("get_item_icon_modulate");
      this.#_bindings.method_get_item_icon_modulate = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3457211756
      );
    }
  }
  static init_method_set_item_selectable() {
    if (!this.#_bindings.method_set_item_selectable) {
      let classname = new StringName("ItemList");
      let methodname = new StringName("set_item_selectable");
      this.#_bindings.method_set_item_selectable = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        300928843
      );
    }
  }
  static init_method_is_item_selectable() {
    if (!this.#_bindings.method_is_item_selectable) {
      let classname = new StringName("ItemList");
      let methodname = new StringName("is_item_selectable");
      this.#_bindings.method_is_item_selectable = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1116898809
      );
    }
  }
  static init_method_set_item_disabled() {
    if (!this.#_bindings.method_set_item_disabled) {
      let classname = new StringName("ItemList");
      let methodname = new StringName("set_item_disabled");
      this.#_bindings.method_set_item_disabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        300928843
      );
    }
  }
  static init_method_is_item_disabled() {
    if (!this.#_bindings.method_is_item_disabled) {
      let classname = new StringName("ItemList");
      let methodname = new StringName("is_item_disabled");
      this.#_bindings.method_is_item_disabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1116898809
      );
    }
  }
  static init_method_set_item_metadata() {
    if (!this.#_bindings.method_set_item_metadata) {
      let classname = new StringName("ItemList");
      let methodname = new StringName("set_item_metadata");
      this.#_bindings.method_set_item_metadata = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2152698145
      );
    }
  }
  static init_method_get_item_metadata() {
    if (!this.#_bindings.method_get_item_metadata) {
      let classname = new StringName("ItemList");
      let methodname = new StringName("get_item_metadata");
      this.#_bindings.method_get_item_metadata = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4227898402
      );
    }
  }
  static init_method_set_item_custom_bg_color() {
    if (!this.#_bindings.method_set_item_custom_bg_color) {
      let classname = new StringName("ItemList");
      let methodname = new StringName("set_item_custom_bg_color");
      this.#_bindings.method_set_item_custom_bg_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2878471219
      );
    }
  }
  static init_method_get_item_custom_bg_color() {
    if (!this.#_bindings.method_get_item_custom_bg_color) {
      let classname = new StringName("ItemList");
      let methodname = new StringName("get_item_custom_bg_color");
      this.#_bindings.method_get_item_custom_bg_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3457211756
      );
    }
  }
  static init_method_set_item_custom_fg_color() {
    if (!this.#_bindings.method_set_item_custom_fg_color) {
      let classname = new StringName("ItemList");
      let methodname = new StringName("set_item_custom_fg_color");
      this.#_bindings.method_set_item_custom_fg_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2878471219
      );
    }
  }
  static init_method_get_item_custom_fg_color() {
    if (!this.#_bindings.method_get_item_custom_fg_color) {
      let classname = new StringName("ItemList");
      let methodname = new StringName("get_item_custom_fg_color");
      this.#_bindings.method_get_item_custom_fg_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3457211756
      );
    }
  }
  static init_method_get_item_rect() {
    if (!this.#_bindings.method_get_item_rect) {
      let classname = new StringName("ItemList");
      let methodname = new StringName("get_item_rect");
      this.#_bindings.method_get_item_rect = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        159227807
      );
    }
  }
  static init_method_set_item_tooltip_enabled() {
    if (!this.#_bindings.method_set_item_tooltip_enabled) {
      let classname = new StringName("ItemList");
      let methodname = new StringName("set_item_tooltip_enabled");
      this.#_bindings.method_set_item_tooltip_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        300928843
      );
    }
  }
  static init_method_is_item_tooltip_enabled() {
    if (!this.#_bindings.method_is_item_tooltip_enabled) {
      let classname = new StringName("ItemList");
      let methodname = new StringName("is_item_tooltip_enabled");
      this.#_bindings.method_is_item_tooltip_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1116898809
      );
    }
  }
  static init_method_set_item_tooltip() {
    if (!this.#_bindings.method_set_item_tooltip) {
      let classname = new StringName("ItemList");
      let methodname = new StringName("set_item_tooltip");
      this.#_bindings.method_set_item_tooltip = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        501894301
      );
    }
  }
  static init_method_get_item_tooltip() {
    if (!this.#_bindings.method_get_item_tooltip) {
      let classname = new StringName("ItemList");
      let methodname = new StringName("get_item_tooltip");
      this.#_bindings.method_get_item_tooltip = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        844755477
      );
    }
  }
  static init_method_select() {
    if (!this.#_bindings.method_select) {
      let classname = new StringName("ItemList");
      let methodname = new StringName("select");
      this.#_bindings.method_select = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        972357352
      );
    }
  }
  static init_method_deselect() {
    if (!this.#_bindings.method_deselect) {
      let classname = new StringName("ItemList");
      let methodname = new StringName("deselect");
      this.#_bindings.method_deselect = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_deselect_all() {
    if (!this.#_bindings.method_deselect_all) {
      let classname = new StringName("ItemList");
      let methodname = new StringName("deselect_all");
      this.#_bindings.method_deselect_all = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_is_selected() {
    if (!this.#_bindings.method_is_selected) {
      let classname = new StringName("ItemList");
      let methodname = new StringName("is_selected");
      this.#_bindings.method_is_selected = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1116898809
      );
    }
  }
  static init_method_get_selected_items() {
    if (!this.#_bindings.method_get_selected_items) {
      let classname = new StringName("ItemList");
      let methodname = new StringName("get_selected_items");
      this.#_bindings.method_get_selected_items = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        969006518
      );
    }
  }
  static init_method_move_item() {
    if (!this.#_bindings.method_move_item) {
      let classname = new StringName("ItemList");
      let methodname = new StringName("move_item");
      this.#_bindings.method_move_item = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3937882851
      );
    }
  }
  static init_method_set_item_count() {
    if (!this.#_bindings.method_set_item_count) {
      let classname = new StringName("ItemList");
      let methodname = new StringName("set_item_count");
      this.#_bindings.method_set_item_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_item_count() {
    if (!this.#_bindings.method_get_item_count) {
      let classname = new StringName("ItemList");
      let methodname = new StringName("get_item_count");
      this.#_bindings.method_get_item_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_remove_item() {
    if (!this.#_bindings.method_remove_item) {
      let classname = new StringName("ItemList");
      let methodname = new StringName("remove_item");
      this.#_bindings.method_remove_item = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_clear() {
    if (!this.#_bindings.method_clear) {
      let classname = new StringName("ItemList");
      let methodname = new StringName("clear");
      this.#_bindings.method_clear = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_sort_items_by_text() {
    if (!this.#_bindings.method_sort_items_by_text) {
      let classname = new StringName("ItemList");
      let methodname = new StringName("sort_items_by_text");
      this.#_bindings.method_sort_items_by_text = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_set_fixed_column_width() {
    if (!this.#_bindings.method_set_fixed_column_width) {
      let classname = new StringName("ItemList");
      let methodname = new StringName("set_fixed_column_width");
      this.#_bindings.method_set_fixed_column_width = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_fixed_column_width() {
    if (!this.#_bindings.method_get_fixed_column_width) {
      let classname = new StringName("ItemList");
      let methodname = new StringName("get_fixed_column_width");
      this.#_bindings.method_get_fixed_column_width = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_same_column_width() {
    if (!this.#_bindings.method_set_same_column_width) {
      let classname = new StringName("ItemList");
      let methodname = new StringName("set_same_column_width");
      this.#_bindings.method_set_same_column_width = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_same_column_width() {
    if (!this.#_bindings.method_is_same_column_width) {
      let classname = new StringName("ItemList");
      let methodname = new StringName("is_same_column_width");
      this.#_bindings.method_is_same_column_width = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_max_text_lines() {
    if (!this.#_bindings.method_set_max_text_lines) {
      let classname = new StringName("ItemList");
      let methodname = new StringName("set_max_text_lines");
      this.#_bindings.method_set_max_text_lines = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_max_text_lines() {
    if (!this.#_bindings.method_get_max_text_lines) {
      let classname = new StringName("ItemList");
      let methodname = new StringName("get_max_text_lines");
      this.#_bindings.method_get_max_text_lines = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_max_columns() {
    if (!this.#_bindings.method_set_max_columns) {
      let classname = new StringName("ItemList");
      let methodname = new StringName("set_max_columns");
      this.#_bindings.method_set_max_columns = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_max_columns() {
    if (!this.#_bindings.method_get_max_columns) {
      let classname = new StringName("ItemList");
      let methodname = new StringName("get_max_columns");
      this.#_bindings.method_get_max_columns = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_select_mode() {
    if (!this.#_bindings.method_set_select_mode) {
      let classname = new StringName("ItemList");
      let methodname = new StringName("set_select_mode");
      this.#_bindings.method_set_select_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        928267388
      );
    }
  }
  static init_method_get_select_mode() {
    if (!this.#_bindings.method_get_select_mode) {
      let classname = new StringName("ItemList");
      let methodname = new StringName("get_select_mode");
      this.#_bindings.method_get_select_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1191945842
      );
    }
  }
  static init_method_set_icon_mode() {
    if (!this.#_bindings.method_set_icon_mode) {
      let classname = new StringName("ItemList");
      let methodname = new StringName("set_icon_mode");
      this.#_bindings.method_set_icon_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2025053633
      );
    }
  }
  static init_method_get_icon_mode() {
    if (!this.#_bindings.method_get_icon_mode) {
      let classname = new StringName("ItemList");
      let methodname = new StringName("get_icon_mode");
      this.#_bindings.method_get_icon_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3353929232
      );
    }
  }
  static init_method_set_fixed_icon_size() {
    if (!this.#_bindings.method_set_fixed_icon_size) {
      let classname = new StringName("ItemList");
      let methodname = new StringName("set_fixed_icon_size");
      this.#_bindings.method_set_fixed_icon_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1130785943
      );
    }
  }
  static init_method_get_fixed_icon_size() {
    if (!this.#_bindings.method_get_fixed_icon_size) {
      let classname = new StringName("ItemList");
      let methodname = new StringName("get_fixed_icon_size");
      this.#_bindings.method_get_fixed_icon_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3690982128
      );
    }
  }
  static init_method_set_icon_scale() {
    if (!this.#_bindings.method_set_icon_scale) {
      let classname = new StringName("ItemList");
      let methodname = new StringName("set_icon_scale");
      this.#_bindings.method_set_icon_scale = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_icon_scale() {
    if (!this.#_bindings.method_get_icon_scale) {
      let classname = new StringName("ItemList");
      let methodname = new StringName("get_icon_scale");
      this.#_bindings.method_get_icon_scale = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_allow_rmb_select() {
    if (!this.#_bindings.method_set_allow_rmb_select) {
      let classname = new StringName("ItemList");
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
      let classname = new StringName("ItemList");
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
      let classname = new StringName("ItemList");
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
      let classname = new StringName("ItemList");
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
      let classname = new StringName("ItemList");
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
      let classname = new StringName("ItemList");
      let methodname = new StringName("get_allow_search");
      this.#_bindings.method_get_allow_search = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_auto_height() {
    if (!this.#_bindings.method_set_auto_height) {
      let classname = new StringName("ItemList");
      let methodname = new StringName("set_auto_height");
      this.#_bindings.method_set_auto_height = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_has_auto_height() {
    if (!this.#_bindings.method_has_auto_height) {
      let classname = new StringName("ItemList");
      let methodname = new StringName("has_auto_height");
      this.#_bindings.method_has_auto_height = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_is_anything_selected() {
    if (!this.#_bindings.method_is_anything_selected) {
      let classname = new StringName("ItemList");
      let methodname = new StringName("is_anything_selected");
      this.#_bindings.method_is_anything_selected = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2240911060
      );
    }
  }
  static init_method_get_item_at_position() {
    if (!this.#_bindings.method_get_item_at_position) {
      let classname = new StringName("ItemList");
      let methodname = new StringName("get_item_at_position");
      this.#_bindings.method_get_item_at_position = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2300324924
      );
    }
  }
  static init_method_ensure_current_is_visible() {
    if (!this.#_bindings.method_ensure_current_is_visible) {
      let classname = new StringName("ItemList");
      let methodname = new StringName("ensure_current_is_visible");
      this.#_bindings.method_ensure_current_is_visible = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_get_v_scroll_bar() {
    if (!this.#_bindings.method_get_v_scroll_bar) {
      let classname = new StringName("ItemList");
      let methodname = new StringName("get_v_scroll_bar");
      this.#_bindings.method_get_v_scroll_bar = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2630340773
      );
    }
  }
  static init_method_set_text_overrun_behavior() {
    if (!this.#_bindings.method_set_text_overrun_behavior) {
      let classname = new StringName("ItemList");
      let methodname = new StringName("set_text_overrun_behavior");
      this.#_bindings.method_set_text_overrun_behavior = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1008890932
      );
    }
  }
  static init_method_get_text_overrun_behavior() {
    if (!this.#_bindings.method_get_text_overrun_behavior) {
      let classname = new StringName("ItemList");
      let methodname = new StringName("get_text_overrun_behavior");
      this.#_bindings.method_get_text_overrun_behavior = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3779142101
      );
    }
  }
  static init_method_force_update_list_size() {
    if (!this.#_bindings.method_force_update_list_size) {
      let classname = new StringName("ItemList");
      let methodname = new StringName("force_update_list_size");
      this.#_bindings.method_force_update_list_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }

  
  
  add_item(_text, _icon, _selectable) {
    ItemList.init_method_add_item();
    return _call_native_mb_ret(
      ItemList.#_bindings.method_add_item,
      this._owner,
			Variant.Type.INT,
    
      _text, _icon, _selectable
    );
    
  }
  add_icon_item(_icon, _selectable) {
    ItemList.init_method_add_icon_item();
    return _call_native_mb_ret(
      ItemList.#_bindings.method_add_icon_item,
      this._owner,
			Variant.Type.INT,
    
      _icon, _selectable
    );
    
  }
  set_item_text(_idx, _text) {
    ItemList.init_method_set_item_text();
    return _call_native_mb_no_ret(
      ItemList.#_bindings.method_set_item_text,
      this._owner,
      _idx, _text
    );
    
  }
  get_item_text(_idx) {
    ItemList.init_method_get_item_text();
    return _call_native_mb_ret(
      ItemList.#_bindings.method_get_item_text,
      this._owner,
			Variant.Type.STRING,
    
      _idx
    );
    
  }
  set_item_icon(_idx, _icon) {
    ItemList.init_method_set_item_icon();
    return _call_native_mb_no_ret(
      ItemList.#_bindings.method_set_item_icon,
      this._owner,
      _idx, _icon
    );
    
  }
  get_item_icon(_idx) {
    ItemList.init_method_get_item_icon();
    return _call_native_mb_ret(
      ItemList.#_bindings.method_get_item_icon,
      this._owner,
			Variant.Type.OBJECT,
      _idx
    );
    
  }
  set_item_text_direction(_idx, _direction) {
    ItemList.init_method_set_item_text_direction();
    return _call_native_mb_no_ret(
      ItemList.#_bindings.method_set_item_text_direction,
      this._owner,
      _idx, _direction
    );
    
  }
  get_item_text_direction(_idx) {
    ItemList.init_method_get_item_text_direction();
    return _call_native_mb_ret(
      ItemList.#_bindings.method_get_item_text_direction,
      this._owner,
			Variant.Type.INT,
    
      _idx
    );
    
  }
  set_item_language(_idx, _language) {
    ItemList.init_method_set_item_language();
    return _call_native_mb_no_ret(
      ItemList.#_bindings.method_set_item_language,
      this._owner,
      _idx, _language
    );
    
  }
  get_item_language(_idx) {
    ItemList.init_method_get_item_language();
    return _call_native_mb_ret(
      ItemList.#_bindings.method_get_item_language,
      this._owner,
			Variant.Type.STRING,
    
      _idx
    );
    
  }
  set_item_icon_transposed(_idx, _transposed) {
    ItemList.init_method_set_item_icon_transposed();
    return _call_native_mb_no_ret(
      ItemList.#_bindings.method_set_item_icon_transposed,
      this._owner,
      _idx, _transposed
    );
    
  }
  is_item_icon_transposed(_idx) {
    ItemList.init_method_is_item_icon_transposed();
    return _call_native_mb_ret(
      ItemList.#_bindings.method_is_item_icon_transposed,
      this._owner,
			Variant.Type.BOOL,
    
      _idx
    );
    
  }
  set_item_icon_region(_idx, _rect) {
    ItemList.init_method_set_item_icon_region();
    return _call_native_mb_no_ret(
      ItemList.#_bindings.method_set_item_icon_region,
      this._owner,
      _idx, _rect
    );
    
  }
  get_item_icon_region(_idx) {
    ItemList.init_method_get_item_icon_region();
    return _call_native_mb_ret(
      ItemList.#_bindings.method_get_item_icon_region,
      this._owner,
			Variant.Type.RECT2,
    
      _idx
    );
    
  }
  set_item_icon_modulate(_idx, _modulate) {
    ItemList.init_method_set_item_icon_modulate();
    return _call_native_mb_no_ret(
      ItemList.#_bindings.method_set_item_icon_modulate,
      this._owner,
      _idx, _modulate
    );
    
  }
  get_item_icon_modulate(_idx) {
    ItemList.init_method_get_item_icon_modulate();
    return _call_native_mb_ret(
      ItemList.#_bindings.method_get_item_icon_modulate,
      this._owner,
			Variant.Type.COLOR,
    
      _idx
    );
    
  }
  set_item_selectable(_idx, _selectable) {
    ItemList.init_method_set_item_selectable();
    return _call_native_mb_no_ret(
      ItemList.#_bindings.method_set_item_selectable,
      this._owner,
      _idx, _selectable
    );
    
  }
  is_item_selectable(_idx) {
    ItemList.init_method_is_item_selectable();
    return _call_native_mb_ret(
      ItemList.#_bindings.method_is_item_selectable,
      this._owner,
			Variant.Type.BOOL,
    
      _idx
    );
    
  }
  set_item_disabled(_idx, _disabled) {
    ItemList.init_method_set_item_disabled();
    return _call_native_mb_no_ret(
      ItemList.#_bindings.method_set_item_disabled,
      this._owner,
      _idx, _disabled
    );
    
  }
  is_item_disabled(_idx) {
    ItemList.init_method_is_item_disabled();
    return _call_native_mb_ret(
      ItemList.#_bindings.method_is_item_disabled,
      this._owner,
			Variant.Type.BOOL,
    
      _idx
    );
    
  }
  set_item_metadata(_idx, _metadata) {
    ItemList.init_method_set_item_metadata();
    return _call_native_mb_no_ret(
      ItemList.#_bindings.method_set_item_metadata,
      this._owner,
      _idx, _metadata
    );
    
  }
  get_item_metadata(_idx) {
    ItemList.init_method_get_item_metadata();
    return _call_native_mb_ret(
      ItemList.#_bindings.method_get_item_metadata,
      this._owner,
			Variant.Type.VARIANT,
    
      _idx
    );
    
  }
  set_item_custom_bg_color(_idx, _custom_bg_color) {
    ItemList.init_method_set_item_custom_bg_color();
    return _call_native_mb_no_ret(
      ItemList.#_bindings.method_set_item_custom_bg_color,
      this._owner,
      _idx, _custom_bg_color
    );
    
  }
  get_item_custom_bg_color(_idx) {
    ItemList.init_method_get_item_custom_bg_color();
    return _call_native_mb_ret(
      ItemList.#_bindings.method_get_item_custom_bg_color,
      this._owner,
			Variant.Type.COLOR,
    
      _idx
    );
    
  }
  set_item_custom_fg_color(_idx, _custom_fg_color) {
    ItemList.init_method_set_item_custom_fg_color();
    return _call_native_mb_no_ret(
      ItemList.#_bindings.method_set_item_custom_fg_color,
      this._owner,
      _idx, _custom_fg_color
    );
    
  }
  get_item_custom_fg_color(_idx) {
    ItemList.init_method_get_item_custom_fg_color();
    return _call_native_mb_ret(
      ItemList.#_bindings.method_get_item_custom_fg_color,
      this._owner,
			Variant.Type.COLOR,
    
      _idx
    );
    
  }
  get_item_rect(_idx, _expand) {
    ItemList.init_method_get_item_rect();
    return _call_native_mb_ret(
      ItemList.#_bindings.method_get_item_rect,
      this._owner,
			Variant.Type.RECT2,
    
      _idx, _expand
    );
    
  }
  set_item_tooltip_enabled(_idx, _enable) {
    ItemList.init_method_set_item_tooltip_enabled();
    return _call_native_mb_no_ret(
      ItemList.#_bindings.method_set_item_tooltip_enabled,
      this._owner,
      _idx, _enable
    );
    
  }
  is_item_tooltip_enabled(_idx) {
    ItemList.init_method_is_item_tooltip_enabled();
    return _call_native_mb_ret(
      ItemList.#_bindings.method_is_item_tooltip_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      _idx
    );
    
  }
  set_item_tooltip(_idx, _tooltip) {
    ItemList.init_method_set_item_tooltip();
    return _call_native_mb_no_ret(
      ItemList.#_bindings.method_set_item_tooltip,
      this._owner,
      _idx, _tooltip
    );
    
  }
  get_item_tooltip(_idx) {
    ItemList.init_method_get_item_tooltip();
    return _call_native_mb_ret(
      ItemList.#_bindings.method_get_item_tooltip,
      this._owner,
			Variant.Type.STRING,
    
      _idx
    );
    
  }
  select(_idx, _single) {
    ItemList.init_method_select();
    return _call_native_mb_no_ret(
      ItemList.#_bindings.method_select,
      this._owner,
      _idx, _single
    );
    
  }
  deselect(_idx) {
    ItemList.init_method_deselect();
    return _call_native_mb_no_ret(
      ItemList.#_bindings.method_deselect,
      this._owner,
      _idx
    );
    
  }
  deselect_all() {
    ItemList.init_method_deselect_all();
    return _call_native_mb_no_ret(
      ItemList.#_bindings.method_deselect_all,
      this._owner,
      
    );
    
  }
  is_selected(_idx) {
    ItemList.init_method_is_selected();
    return _call_native_mb_ret(
      ItemList.#_bindings.method_is_selected,
      this._owner,
			Variant.Type.BOOL,
    
      _idx
    );
    
  }
  get_selected_items() {
    ItemList.init_method_get_selected_items();
    return _call_native_mb_ret(
      ItemList.#_bindings.method_get_selected_items,
      this._owner,
			Variant.Type.PACKED_INT32_ARRAY,
    
      
    );
    
  }
  move_item(_from_idx, _to_idx) {
    ItemList.init_method_move_item();
    return _call_native_mb_no_ret(
      ItemList.#_bindings.method_move_item,
      this._owner,
      _from_idx, _to_idx
    );
    
  }
  set_item_count(_count) {
    ItemList.init_method_set_item_count();
    return _call_native_mb_no_ret(
      ItemList.#_bindings.method_set_item_count,
      this._owner,
      _count
    );
    
  }
  get_item_count() {
    ItemList.init_method_get_item_count();
    return _call_native_mb_ret(
      ItemList.#_bindings.method_get_item_count,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  remove_item(_idx) {
    ItemList.init_method_remove_item();
    return _call_native_mb_no_ret(
      ItemList.#_bindings.method_remove_item,
      this._owner,
      _idx
    );
    
  }
  clear() {
    ItemList.init_method_clear();
    return _call_native_mb_no_ret(
      ItemList.#_bindings.method_clear,
      this._owner,
      
    );
    
  }
  sort_items_by_text() {
    ItemList.init_method_sort_items_by_text();
    return _call_native_mb_no_ret(
      ItemList.#_bindings.method_sort_items_by_text,
      this._owner,
      
    );
    
  }
  set_fixed_column_width(_width) {
    ItemList.init_method_set_fixed_column_width();
    return _call_native_mb_no_ret(
      ItemList.#_bindings.method_set_fixed_column_width,
      this._owner,
      _width
    );
    
  }
  get_fixed_column_width() {
    ItemList.init_method_get_fixed_column_width();
    return _call_native_mb_ret(
      ItemList.#_bindings.method_get_fixed_column_width,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_same_column_width(_enable) {
    ItemList.init_method_set_same_column_width();
    return _call_native_mb_no_ret(
      ItemList.#_bindings.method_set_same_column_width,
      this._owner,
      _enable
    );
    
  }
  is_same_column_width() {
    ItemList.init_method_is_same_column_width();
    return _call_native_mb_ret(
      ItemList.#_bindings.method_is_same_column_width,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_max_text_lines(_lines) {
    ItemList.init_method_set_max_text_lines();
    return _call_native_mb_no_ret(
      ItemList.#_bindings.method_set_max_text_lines,
      this._owner,
      _lines
    );
    
  }
  get_max_text_lines() {
    ItemList.init_method_get_max_text_lines();
    return _call_native_mb_ret(
      ItemList.#_bindings.method_get_max_text_lines,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_max_columns(_amount) {
    ItemList.init_method_set_max_columns();
    return _call_native_mb_no_ret(
      ItemList.#_bindings.method_set_max_columns,
      this._owner,
      _amount
    );
    
  }
  get_max_columns() {
    ItemList.init_method_get_max_columns();
    return _call_native_mb_ret(
      ItemList.#_bindings.method_get_max_columns,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_select_mode(_mode) {
    ItemList.init_method_set_select_mode();
    return _call_native_mb_no_ret(
      ItemList.#_bindings.method_set_select_mode,
      this._owner,
      _mode
    );
    
  }
  get_select_mode() {
    ItemList.init_method_get_select_mode();
    return _call_native_mb_ret(
      ItemList.#_bindings.method_get_select_mode,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_icon_mode(_mode) {
    ItemList.init_method_set_icon_mode();
    return _call_native_mb_no_ret(
      ItemList.#_bindings.method_set_icon_mode,
      this._owner,
      _mode
    );
    
  }
  get_icon_mode() {
    ItemList.init_method_get_icon_mode();
    return _call_native_mb_ret(
      ItemList.#_bindings.method_get_icon_mode,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_fixed_icon_size(_size) {
    ItemList.init_method_set_fixed_icon_size();
    return _call_native_mb_no_ret(
      ItemList.#_bindings.method_set_fixed_icon_size,
      this._owner,
      _size
    );
    
  }
  get_fixed_icon_size() {
    ItemList.init_method_get_fixed_icon_size();
    return _call_native_mb_ret(
      ItemList.#_bindings.method_get_fixed_icon_size,
      this._owner,
			Variant.Type.VECTOR2I,
    
      
    );
    
  }
  set_icon_scale(_scale) {
    ItemList.init_method_set_icon_scale();
    return _call_native_mb_no_ret(
      ItemList.#_bindings.method_set_icon_scale,
      this._owner,
      _scale
    );
    
  }
  get_icon_scale() {
    ItemList.init_method_get_icon_scale();
    return _call_native_mb_ret(
      ItemList.#_bindings.method_get_icon_scale,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_allow_rmb_select(_allow) {
    ItemList.init_method_set_allow_rmb_select();
    return _call_native_mb_no_ret(
      ItemList.#_bindings.method_set_allow_rmb_select,
      this._owner,
      _allow
    );
    
  }
  get_allow_rmb_select() {
    ItemList.init_method_get_allow_rmb_select();
    return _call_native_mb_ret(
      ItemList.#_bindings.method_get_allow_rmb_select,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_allow_reselect(_allow) {
    ItemList.init_method_set_allow_reselect();
    return _call_native_mb_no_ret(
      ItemList.#_bindings.method_set_allow_reselect,
      this._owner,
      _allow
    );
    
  }
  get_allow_reselect() {
    ItemList.init_method_get_allow_reselect();
    return _call_native_mb_ret(
      ItemList.#_bindings.method_get_allow_reselect,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_allow_search(_allow) {
    ItemList.init_method_set_allow_search();
    return _call_native_mb_no_ret(
      ItemList.#_bindings.method_set_allow_search,
      this._owner,
      _allow
    );
    
  }
  get_allow_search() {
    ItemList.init_method_get_allow_search();
    return _call_native_mb_ret(
      ItemList.#_bindings.method_get_allow_search,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_auto_height(_enable) {
    ItemList.init_method_set_auto_height();
    return _call_native_mb_no_ret(
      ItemList.#_bindings.method_set_auto_height,
      this._owner,
      _enable
    );
    
  }
  has_auto_height() {
    ItemList.init_method_has_auto_height();
    return _call_native_mb_ret(
      ItemList.#_bindings.method_has_auto_height,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  is_anything_selected() {
    ItemList.init_method_is_anything_selected();
    return _call_native_mb_ret(
      ItemList.#_bindings.method_is_anything_selected,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  get_item_at_position(_position, _exact) {
    ItemList.init_method_get_item_at_position();
    return _call_native_mb_ret(
      ItemList.#_bindings.method_get_item_at_position,
      this._owner,
			Variant.Type.INT,
    
      _position, _exact
    );
    
  }
  ensure_current_is_visible() {
    ItemList.init_method_ensure_current_is_visible();
    return _call_native_mb_no_ret(
      ItemList.#_bindings.method_ensure_current_is_visible,
      this._owner,
      
    );
    
  }
  get_v_scroll_bar() {
    ItemList.init_method_get_v_scroll_bar();
    return _call_native_mb_ret(
      ItemList.#_bindings.method_get_v_scroll_bar,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_text_overrun_behavior(_overrun_behavior) {
    ItemList.init_method_set_text_overrun_behavior();
    return _call_native_mb_no_ret(
      ItemList.#_bindings.method_set_text_overrun_behavior,
      this._owner,
      _overrun_behavior
    );
    
  }
  get_text_overrun_behavior() {
    ItemList.init_method_get_text_overrun_behavior();
    return _call_native_mb_ret(
      ItemList.#_bindings.method_get_text_overrun_behavior,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  force_update_list_size() {
    ItemList.init_method_force_update_list_size();
    return _call_native_mb_no_ret(
      ItemList.#_bindings.method_force_update_list_size,
      this._owner,
      
    );
    
  }
  
get select_mode () {
  return this.get_select_mode();
}
set select_mode (new_value) {
  this.set_select_mode(new_value);
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
get max_text_lines () {
  return this.get_max_text_lines();
}
set max_text_lines (new_value) {
  this.set_max_text_lines(new_value);
}
get auto_height () {
  return this.has_auto_height();
}
set auto_height (new_value) {
  this.set_auto_height(new_value);
}
get text_overrun_behavior () {
  return this.get_text_overrun_behavior();
}
set text_overrun_behavior (new_value) {
  this.set_text_overrun_behavior(new_value);
}
get item_count () {
  return this.get_item_count();
}
set item_count (new_value) {
  this.set_item_count(new_value);
}
get max_columns () {
  return this.get_max_columns();
}
set max_columns (new_value) {
  this.set_max_columns(new_value);
}
get same_column_width () {
  return this.is_same_column_width();
}
set same_column_width (new_value) {
  this.set_same_column_width(new_value);
}
get fixed_column_width () {
  return this.get_fixed_column_width();
}
set fixed_column_width (new_value) {
  this.set_fixed_column_width(new_value);
}
get icon_mode () {
  return this.get_icon_mode();
}
set icon_mode (new_value) {
  this.set_icon_mode(new_value);
}
get icon_scale () {
  return this.get_icon_scale();
}
set icon_scale (new_value) {
  this.set_icon_scale(new_value);
}
get fixed_icon_size () {
  return this.get_fixed_icon_size();
}
set fixed_icon_size (new_value) {
  this.set_fixed_icon_size(new_value);
}

  static IconMode = {
    ICON_MODE_TOP: 0,
    ICON_MODE_LEFT: 1,
  }
  static SelectMode = {
    SELECT_SINGLE: 0,
    SELECT_MULTI: 1,
  }
}