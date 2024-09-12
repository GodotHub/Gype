import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { GodotObject } from '@js_godot/classes/godot_object'
import { GDArray } from '@js_godot/variant/gd_array'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_cell_mode;
  method_get_cell_mode;
  method_set_edit_multiline;
  method_is_edit_multiline;
  method_set_checked;
  method_set_indeterminate;
  method_is_checked;
  method_is_indeterminate;
  method_propagate_check;
  method_set_text;
  method_get_text;
  method_set_text_direction;
  method_get_text_direction;
  method_set_autowrap_mode;
  method_get_autowrap_mode;
  method_set_text_overrun_behavior;
  method_get_text_overrun_behavior;
  method_set_structured_text_bidi_override;
  method_get_structured_text_bidi_override;
  method_set_structured_text_bidi_override_options;
  method_get_structured_text_bidi_override_options;
  method_set_language;
  method_get_language;
  method_set_suffix;
  method_get_suffix;
  method_set_icon;
  method_get_icon;
  method_set_icon_region;
  method_get_icon_region;
  method_set_icon_max_width;
  method_get_icon_max_width;
  method_set_icon_modulate;
  method_get_icon_modulate;
  method_set_range;
  method_get_range;
  method_set_range_config;
  method_get_range_config;
  method_set_metadata;
  method_get_metadata;
  method_set_custom_draw;
  method_set_custom_draw_callback;
  method_get_custom_draw_callback;
  method_set_collapsed;
  method_is_collapsed;
  method_set_collapsed_recursive;
  method_is_any_collapsed;
  method_set_visible;
  method_is_visible;
  method_is_visible_in_tree;
  method_uncollapse_tree;
  method_set_custom_minimum_height;
  method_get_custom_minimum_height;
  method_set_selectable;
  method_is_selectable;
  method_is_selected;
  method_select;
  method_deselect;
  method_set_editable;
  method_is_editable;
  method_set_custom_color;
  method_get_custom_color;
  method_clear_custom_color;
  method_set_custom_font;
  method_get_custom_font;
  method_set_custom_font_size;
  method_get_custom_font_size;
  method_set_custom_bg_color;
  method_clear_custom_bg_color;
  method_get_custom_bg_color;
  method_set_custom_as_button;
  method_is_custom_set_as_button;
  method_add_button;
  method_get_button_count;
  method_get_button_tooltip_text;
  method_get_button_id;
  method_get_button_by_id;
  method_get_button_color;
  method_get_button;
  method_set_button_tooltip_text;
  method_set_button;
  method_erase_button;
  method_set_button_disabled;
  method_set_button_color;
  method_is_button_disabled;
  method_set_tooltip_text;
  method_get_tooltip_text;
  method_set_text_alignment;
  method_get_text_alignment;
  method_set_expand_right;
  method_get_expand_right;
  method_set_disable_folding;
  method_is_folding_disabled;
  method_create_child;
  method_add_child;
  method_remove_child;
  method_get_tree;
  method_get_next;
  method_get_prev;
  method_get_parent;
  method_get_first_child;
  method_get_next_in_tree;
  method_get_prev_in_tree;
  method_get_next_visible;
  method_get_prev_visible;
  method_get_child;
  method_get_child_count;
  method_get_children;
  method_get_index;
  method_move_before;
  method_move_after;
  method_call_recursive;
}
export class TreeItem extends GodotObject{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("TreeItem");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_cell_mode() {
    if (!this.#_bindings.method_set_cell_mode) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("set_cell_mode");
      this.#_bindings.method_set_cell_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        289920701
      );
    }
  }
  static init_method_get_cell_mode() {
    if (!this.#_bindings.method_get_cell_mode) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("get_cell_mode");
      this.#_bindings.method_get_cell_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3406114978
      );
    }
  }
  static init_method_set_edit_multiline() {
    if (!this.#_bindings.method_set_edit_multiline) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("set_edit_multiline");
      this.#_bindings.method_set_edit_multiline = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        300928843
      );
    }
  }
  static init_method_is_edit_multiline() {
    if (!this.#_bindings.method_is_edit_multiline) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("is_edit_multiline");
      this.#_bindings.method_is_edit_multiline = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1116898809
      );
    }
  }
  static init_method_set_checked() {
    if (!this.#_bindings.method_set_checked) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("set_checked");
      this.#_bindings.method_set_checked = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        300928843
      );
    }
  }
  static init_method_set_indeterminate() {
    if (!this.#_bindings.method_set_indeterminate) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("set_indeterminate");
      this.#_bindings.method_set_indeterminate = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        300928843
      );
    }
  }
  static init_method_is_checked() {
    if (!this.#_bindings.method_is_checked) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("is_checked");
      this.#_bindings.method_is_checked = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1116898809
      );
    }
  }
  static init_method_is_indeterminate() {
    if (!this.#_bindings.method_is_indeterminate) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("is_indeterminate");
      this.#_bindings.method_is_indeterminate = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1116898809
      );
    }
  }
  static init_method_propagate_check() {
    if (!this.#_bindings.method_propagate_check) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("propagate_check");
      this.#_bindings.method_propagate_check = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        972357352
      );
    }
  }
  static init_method_set_text() {
    if (!this.#_bindings.method_set_text) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("set_text");
      this.#_bindings.method_set_text = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        501894301
      );
    }
  }
  static init_method_get_text() {
    if (!this.#_bindings.method_get_text) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("get_text");
      this.#_bindings.method_get_text = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        844755477
      );
    }
  }
  static init_method_set_text_direction() {
    if (!this.#_bindings.method_set_text_direction) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("set_text_direction");
      this.#_bindings.method_set_text_direction = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1707680378
      );
    }
  }
  static init_method_get_text_direction() {
    if (!this.#_bindings.method_get_text_direction) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("get_text_direction");
      this.#_bindings.method_get_text_direction = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4235602388
      );
    }
  }
  static init_method_set_autowrap_mode() {
    if (!this.#_bindings.method_set_autowrap_mode) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("set_autowrap_mode");
      this.#_bindings.method_set_autowrap_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3633006561
      );
    }
  }
  static init_method_get_autowrap_mode() {
    if (!this.#_bindings.method_get_autowrap_mode) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("get_autowrap_mode");
      this.#_bindings.method_get_autowrap_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2902757236
      );
    }
  }
  static init_method_set_text_overrun_behavior() {
    if (!this.#_bindings.method_set_text_overrun_behavior) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("set_text_overrun_behavior");
      this.#_bindings.method_set_text_overrun_behavior = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1940772195
      );
    }
  }
  static init_method_get_text_overrun_behavior() {
    if (!this.#_bindings.method_get_text_overrun_behavior) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("get_text_overrun_behavior");
      this.#_bindings.method_get_text_overrun_behavior = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3782727860
      );
    }
  }
  static init_method_set_structured_text_bidi_override() {
    if (!this.#_bindings.method_set_structured_text_bidi_override) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("set_structured_text_bidi_override");
      this.#_bindings.method_set_structured_text_bidi_override = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        868756907
      );
    }
  }
  static init_method_get_structured_text_bidi_override() {
    if (!this.#_bindings.method_get_structured_text_bidi_override) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("get_structured_text_bidi_override");
      this.#_bindings.method_get_structured_text_bidi_override = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3377823772
      );
    }
  }
  static init_method_set_structured_text_bidi_override_options() {
    if (!this.#_bindings.method_set_structured_text_bidi_override_options) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("set_structured_text_bidi_override_options");
      this.#_bindings.method_set_structured_text_bidi_override_options = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        537221740
      );
    }
  }
  static init_method_get_structured_text_bidi_override_options() {
    if (!this.#_bindings.method_get_structured_text_bidi_override_options) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("get_structured_text_bidi_override_options");
      this.#_bindings.method_get_structured_text_bidi_override_options = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        663333327
      );
    }
  }
  static init_method_set_language() {
    if (!this.#_bindings.method_set_language) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("set_language");
      this.#_bindings.method_set_language = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        501894301
      );
    }
  }
  static init_method_get_language() {
    if (!this.#_bindings.method_get_language) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("get_language");
      this.#_bindings.method_get_language = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        844755477
      );
    }
  }
  static init_method_set_suffix() {
    if (!this.#_bindings.method_set_suffix) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("set_suffix");
      this.#_bindings.method_set_suffix = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        501894301
      );
    }
  }
  static init_method_get_suffix() {
    if (!this.#_bindings.method_get_suffix) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("get_suffix");
      this.#_bindings.method_get_suffix = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        844755477
      );
    }
  }
  static init_method_set_icon() {
    if (!this.#_bindings.method_set_icon) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("set_icon");
      this.#_bindings.method_set_icon = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        666127730
      );
    }
  }
  static init_method_get_icon() {
    if (!this.#_bindings.method_get_icon) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("get_icon");
      this.#_bindings.method_get_icon = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3536238170
      );
    }
  }
  static init_method_set_icon_region() {
    if (!this.#_bindings.method_set_icon_region) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("set_icon_region");
      this.#_bindings.method_set_icon_region = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1356297692
      );
    }
  }
  static init_method_get_icon_region() {
    if (!this.#_bindings.method_get_icon_region) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("get_icon_region");
      this.#_bindings.method_get_icon_region = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3327874267
      );
    }
  }
  static init_method_set_icon_max_width() {
    if (!this.#_bindings.method_set_icon_max_width) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("set_icon_max_width");
      this.#_bindings.method_set_icon_max_width = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3937882851
      );
    }
  }
  static init_method_get_icon_max_width() {
    if (!this.#_bindings.method_get_icon_max_width) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("get_icon_max_width");
      this.#_bindings.method_get_icon_max_width = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        923996154
      );
    }
  }
  static init_method_set_icon_modulate() {
    if (!this.#_bindings.method_set_icon_modulate) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("set_icon_modulate");
      this.#_bindings.method_set_icon_modulate = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2878471219
      );
    }
  }
  static init_method_get_icon_modulate() {
    if (!this.#_bindings.method_get_icon_modulate) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("get_icon_modulate");
      this.#_bindings.method_get_icon_modulate = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3457211756
      );
    }
  }
  static init_method_set_range() {
    if (!this.#_bindings.method_set_range) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("set_range");
      this.#_bindings.method_set_range = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1602489585
      );
    }
  }
  static init_method_get_range() {
    if (!this.#_bindings.method_get_range) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("get_range");
      this.#_bindings.method_get_range = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2339986948
      );
    }
  }
  static init_method_set_range_config() {
    if (!this.#_bindings.method_set_range_config) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("set_range_config");
      this.#_bindings.method_set_range_config = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1547181014
      );
    }
  }
  static init_method_get_range_config() {
    if (!this.#_bindings.method_get_range_config) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("get_range_config");
      this.#_bindings.method_get_range_config = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3554694381
      );
    }
  }
  static init_method_set_metadata() {
    if (!this.#_bindings.method_set_metadata) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("set_metadata");
      this.#_bindings.method_set_metadata = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2152698145
      );
    }
  }
  static init_method_get_metadata() {
    if (!this.#_bindings.method_get_metadata) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("get_metadata");
      this.#_bindings.method_get_metadata = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4227898402
      );
    }
  }
  static init_method_set_custom_draw() {
    if (!this.#_bindings.method_set_custom_draw) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("set_custom_draw");
      this.#_bindings.method_set_custom_draw = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        272420368
      );
    }
  }
  static init_method_set_custom_draw_callback() {
    if (!this.#_bindings.method_set_custom_draw_callback) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("set_custom_draw_callback");
      this.#_bindings.method_set_custom_draw_callback = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        957362965
      );
    }
  }
  static init_method_get_custom_draw_callback() {
    if (!this.#_bindings.method_get_custom_draw_callback) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("get_custom_draw_callback");
      this.#_bindings.method_get_custom_draw_callback = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1317077508
      );
    }
  }
  static init_method_set_collapsed() {
    if (!this.#_bindings.method_set_collapsed) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("set_collapsed");
      this.#_bindings.method_set_collapsed = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_collapsed() {
    if (!this.#_bindings.method_is_collapsed) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("is_collapsed");
      this.#_bindings.method_is_collapsed = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2240911060
      );
    }
  }
  static init_method_set_collapsed_recursive() {
    if (!this.#_bindings.method_set_collapsed_recursive) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("set_collapsed_recursive");
      this.#_bindings.method_set_collapsed_recursive = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_any_collapsed() {
    if (!this.#_bindings.method_is_any_collapsed) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("is_any_collapsed");
      this.#_bindings.method_is_any_collapsed = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2595650253
      );
    }
  }
  static init_method_set_visible() {
    if (!this.#_bindings.method_set_visible) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("set_visible");
      this.#_bindings.method_set_visible = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_visible() {
    if (!this.#_bindings.method_is_visible) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("is_visible");
      this.#_bindings.method_is_visible = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2240911060
      );
    }
  }
  static init_method_is_visible_in_tree() {
    if (!this.#_bindings.method_is_visible_in_tree) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("is_visible_in_tree");
      this.#_bindings.method_is_visible_in_tree = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_uncollapse_tree() {
    if (!this.#_bindings.method_uncollapse_tree) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("uncollapse_tree");
      this.#_bindings.method_uncollapse_tree = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_set_custom_minimum_height() {
    if (!this.#_bindings.method_set_custom_minimum_height) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("set_custom_minimum_height");
      this.#_bindings.method_set_custom_minimum_height = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_custom_minimum_height() {
    if (!this.#_bindings.method_get_custom_minimum_height) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("get_custom_minimum_height");
      this.#_bindings.method_get_custom_minimum_height = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_selectable() {
    if (!this.#_bindings.method_set_selectable) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("set_selectable");
      this.#_bindings.method_set_selectable = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        300928843
      );
    }
  }
  static init_method_is_selectable() {
    if (!this.#_bindings.method_is_selectable) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("is_selectable");
      this.#_bindings.method_is_selectable = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1116898809
      );
    }
  }
  static init_method_is_selected() {
    if (!this.#_bindings.method_is_selected) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("is_selected");
      this.#_bindings.method_is_selected = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3067735520
      );
    }
  }
  static init_method_select() {
    if (!this.#_bindings.method_select) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("select");
      this.#_bindings.method_select = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_deselect() {
    if (!this.#_bindings.method_deselect) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("deselect");
      this.#_bindings.method_deselect = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_set_editable() {
    if (!this.#_bindings.method_set_editable) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("set_editable");
      this.#_bindings.method_set_editable = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        300928843
      );
    }
  }
  static init_method_is_editable() {
    if (!this.#_bindings.method_is_editable) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("is_editable");
      this.#_bindings.method_is_editable = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3067735520
      );
    }
  }
  static init_method_set_custom_color() {
    if (!this.#_bindings.method_set_custom_color) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("set_custom_color");
      this.#_bindings.method_set_custom_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2878471219
      );
    }
  }
  static init_method_get_custom_color() {
    if (!this.#_bindings.method_get_custom_color) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("get_custom_color");
      this.#_bindings.method_get_custom_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3457211756
      );
    }
  }
  static init_method_clear_custom_color() {
    if (!this.#_bindings.method_clear_custom_color) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("clear_custom_color");
      this.#_bindings.method_clear_custom_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_set_custom_font() {
    if (!this.#_bindings.method_set_custom_font) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("set_custom_font");
      this.#_bindings.method_set_custom_font = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2637609184
      );
    }
  }
  static init_method_get_custom_font() {
    if (!this.#_bindings.method_get_custom_font) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("get_custom_font");
      this.#_bindings.method_get_custom_font = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4244553094
      );
    }
  }
  static init_method_set_custom_font_size() {
    if (!this.#_bindings.method_set_custom_font_size) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("set_custom_font_size");
      this.#_bindings.method_set_custom_font_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3937882851
      );
    }
  }
  static init_method_get_custom_font_size() {
    if (!this.#_bindings.method_get_custom_font_size) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("get_custom_font_size");
      this.#_bindings.method_get_custom_font_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        923996154
      );
    }
  }
  static init_method_set_custom_bg_color() {
    if (!this.#_bindings.method_set_custom_bg_color) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("set_custom_bg_color");
      this.#_bindings.method_set_custom_bg_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        894174518
      );
    }
  }
  static init_method_clear_custom_bg_color() {
    if (!this.#_bindings.method_clear_custom_bg_color) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("clear_custom_bg_color");
      this.#_bindings.method_clear_custom_bg_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_custom_bg_color() {
    if (!this.#_bindings.method_get_custom_bg_color) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("get_custom_bg_color");
      this.#_bindings.method_get_custom_bg_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3457211756
      );
    }
  }
  static init_method_set_custom_as_button() {
    if (!this.#_bindings.method_set_custom_as_button) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("set_custom_as_button");
      this.#_bindings.method_set_custom_as_button = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        300928843
      );
    }
  }
  static init_method_is_custom_set_as_button() {
    if (!this.#_bindings.method_is_custom_set_as_button) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("is_custom_set_as_button");
      this.#_bindings.method_is_custom_set_as_button = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1116898809
      );
    }
  }
  static init_method_add_button() {
    if (!this.#_bindings.method_add_button) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("add_button");
      this.#_bindings.method_add_button = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1688223362
      );
    }
  }
  static init_method_get_button_count() {
    if (!this.#_bindings.method_get_button_count) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("get_button_count");
      this.#_bindings.method_get_button_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        923996154
      );
    }
  }
  static init_method_get_button_tooltip_text() {
    if (!this.#_bindings.method_get_button_tooltip_text) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("get_button_tooltip_text");
      this.#_bindings.method_get_button_tooltip_text = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1391810591
      );
    }
  }
  static init_method_get_button_id() {
    if (!this.#_bindings.method_get_button_id) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("get_button_id");
      this.#_bindings.method_get_button_id = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3175239445
      );
    }
  }
  static init_method_get_button_by_id() {
    if (!this.#_bindings.method_get_button_by_id) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("get_button_by_id");
      this.#_bindings.method_get_button_by_id = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3175239445
      );
    }
  }
  static init_method_get_button_color() {
    if (!this.#_bindings.method_get_button_color) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("get_button_color");
      this.#_bindings.method_get_button_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2165839948
      );
    }
  }
  static init_method_get_button() {
    if (!this.#_bindings.method_get_button) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("get_button");
      this.#_bindings.method_get_button = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2584904275
      );
    }
  }
  static init_method_set_button_tooltip_text() {
    if (!this.#_bindings.method_set_button_tooltip_text) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("set_button_tooltip_text");
      this.#_bindings.method_set_button_tooltip_text = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2285447957
      );
    }
  }
  static init_method_set_button() {
    if (!this.#_bindings.method_set_button) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("set_button");
      this.#_bindings.method_set_button = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        176101966
      );
    }
  }
  static init_method_erase_button() {
    if (!this.#_bindings.method_erase_button) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("erase_button");
      this.#_bindings.method_erase_button = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3937882851
      );
    }
  }
  static init_method_set_button_disabled() {
    if (!this.#_bindings.method_set_button_disabled) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("set_button_disabled");
      this.#_bindings.method_set_button_disabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1383440665
      );
    }
  }
  static init_method_set_button_color() {
    if (!this.#_bindings.method_set_button_color) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("set_button_color");
      this.#_bindings.method_set_button_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3733378741
      );
    }
  }
  static init_method_is_button_disabled() {
    if (!this.#_bindings.method_is_button_disabled) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("is_button_disabled");
      this.#_bindings.method_is_button_disabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2522259332
      );
    }
  }
  static init_method_set_tooltip_text() {
    if (!this.#_bindings.method_set_tooltip_text) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("set_tooltip_text");
      this.#_bindings.method_set_tooltip_text = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        501894301
      );
    }
  }
  static init_method_get_tooltip_text() {
    if (!this.#_bindings.method_get_tooltip_text) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("get_tooltip_text");
      this.#_bindings.method_get_tooltip_text = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        844755477
      );
    }
  }
  static init_method_set_text_alignment() {
    if (!this.#_bindings.method_set_text_alignment) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("set_text_alignment");
      this.#_bindings.method_set_text_alignment = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3276431499
      );
    }
  }
  static init_method_get_text_alignment() {
    if (!this.#_bindings.method_get_text_alignment) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("get_text_alignment");
      this.#_bindings.method_get_text_alignment = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4171562184
      );
    }
  }
  static init_method_set_expand_right() {
    if (!this.#_bindings.method_set_expand_right) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("set_expand_right");
      this.#_bindings.method_set_expand_right = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        300928843
      );
    }
  }
  static init_method_get_expand_right() {
    if (!this.#_bindings.method_get_expand_right) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("get_expand_right");
      this.#_bindings.method_get_expand_right = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1116898809
      );
    }
  }
  static init_method_set_disable_folding() {
    if (!this.#_bindings.method_set_disable_folding) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("set_disable_folding");
      this.#_bindings.method_set_disable_folding = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_folding_disabled() {
    if (!this.#_bindings.method_is_folding_disabled) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("is_folding_disabled");
      this.#_bindings.method_is_folding_disabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_create_child() {
    if (!this.#_bindings.method_create_child) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("create_child");
      this.#_bindings.method_create_child = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        954243986
      );
    }
  }
  static init_method_add_child() {
    if (!this.#_bindings.method_add_child) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("add_child");
      this.#_bindings.method_add_child = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1819951137
      );
    }
  }
  static init_method_remove_child() {
    if (!this.#_bindings.method_remove_child) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("remove_child");
      this.#_bindings.method_remove_child = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1819951137
      );
    }
  }
  static init_method_get_tree() {
    if (!this.#_bindings.method_get_tree) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("get_tree");
      this.#_bindings.method_get_tree = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2243340556
      );
    }
  }
  static init_method_get_next() {
    if (!this.#_bindings.method_get_next) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("get_next");
      this.#_bindings.method_get_next = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1514277247
      );
    }
  }
  static init_method_get_prev() {
    if (!this.#_bindings.method_get_prev) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("get_prev");
      this.#_bindings.method_get_prev = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2768121250
      );
    }
  }
  static init_method_get_parent() {
    if (!this.#_bindings.method_get_parent) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("get_parent");
      this.#_bindings.method_get_parent = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1514277247
      );
    }
  }
  static init_method_get_first_child() {
    if (!this.#_bindings.method_get_first_child) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("get_first_child");
      this.#_bindings.method_get_first_child = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1514277247
      );
    }
  }
  static init_method_get_next_in_tree() {
    if (!this.#_bindings.method_get_next_in_tree) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("get_next_in_tree");
      this.#_bindings.method_get_next_in_tree = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1666920593
      );
    }
  }
  static init_method_get_prev_in_tree() {
    if (!this.#_bindings.method_get_prev_in_tree) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("get_prev_in_tree");
      this.#_bindings.method_get_prev_in_tree = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1666920593
      );
    }
  }
  static init_method_get_next_visible() {
    if (!this.#_bindings.method_get_next_visible) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("get_next_visible");
      this.#_bindings.method_get_next_visible = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1666920593
      );
    }
  }
  static init_method_get_prev_visible() {
    if (!this.#_bindings.method_get_prev_visible) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("get_prev_visible");
      this.#_bindings.method_get_prev_visible = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1666920593
      );
    }
  }
  static init_method_get_child() {
    if (!this.#_bindings.method_get_child) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("get_child");
      this.#_bindings.method_get_child = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        306700752
      );
    }
  }
  static init_method_get_child_count() {
    if (!this.#_bindings.method_get_child_count) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("get_child_count");
      this.#_bindings.method_get_child_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2455072627
      );
    }
  }
  static init_method_get_children() {
    if (!this.#_bindings.method_get_children) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("get_children");
      this.#_bindings.method_get_children = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2915620761
      );
    }
  }
  static init_method_get_index() {
    if (!this.#_bindings.method_get_index) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("get_index");
      this.#_bindings.method_get_index = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2455072627
      );
    }
  }
  static init_method_move_before() {
    if (!this.#_bindings.method_move_before) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("move_before");
      this.#_bindings.method_move_before = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1819951137
      );
    }
  }
  static init_method_move_after() {
    if (!this.#_bindings.method_move_after) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("move_after");
      this.#_bindings.method_move_after = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1819951137
      );
    }
  }
  static init_method_call_recursive() {
    if (!this.#_bindings.method_call_recursive) {
      let classname = new StringName("TreeItem");
      let methodname = new StringName("call_recursive");
      this.#_bindings.method_call_recursive = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2866548813
      );
    }
  }

  
  
  set_cell_mode(_column, _mode) {
    TreeItem.init_method_set_cell_mode();
    return _call_native_mb_no_ret(
      TreeItem.#_bindings.method_set_cell_mode,
      this._owner,
      _column, _mode
    );
    
  }
  get_cell_mode(_column) {
    TreeItem.init_method_get_cell_mode();
    return _call_native_mb_ret(
      TreeItem.#_bindings.method_get_cell_mode,
      this._owner,
			Variant.Type.INT,
    
      _column
    );
    
  }
  set_edit_multiline(_column, _multiline) {
    TreeItem.init_method_set_edit_multiline();
    return _call_native_mb_no_ret(
      TreeItem.#_bindings.method_set_edit_multiline,
      this._owner,
      _column, _multiline
    );
    
  }
  is_edit_multiline(_column) {
    TreeItem.init_method_is_edit_multiline();
    return _call_native_mb_ret(
      TreeItem.#_bindings.method_is_edit_multiline,
      this._owner,
			Variant.Type.BOOL,
    
      _column
    );
    
  }
  set_checked(_column, _checked) {
    TreeItem.init_method_set_checked();
    return _call_native_mb_no_ret(
      TreeItem.#_bindings.method_set_checked,
      this._owner,
      _column, _checked
    );
    
  }
  set_indeterminate(_column, _indeterminate) {
    TreeItem.init_method_set_indeterminate();
    return _call_native_mb_no_ret(
      TreeItem.#_bindings.method_set_indeterminate,
      this._owner,
      _column, _indeterminate
    );
    
  }
  is_checked(_column) {
    TreeItem.init_method_is_checked();
    return _call_native_mb_ret(
      TreeItem.#_bindings.method_is_checked,
      this._owner,
			Variant.Type.BOOL,
    
      _column
    );
    
  }
  is_indeterminate(_column) {
    TreeItem.init_method_is_indeterminate();
    return _call_native_mb_ret(
      TreeItem.#_bindings.method_is_indeterminate,
      this._owner,
			Variant.Type.BOOL,
    
      _column
    );
    
  }
  propagate_check(_column, _emit_signal) {
    TreeItem.init_method_propagate_check();
    return _call_native_mb_no_ret(
      TreeItem.#_bindings.method_propagate_check,
      this._owner,
      _column, _emit_signal
    );
    
  }
  set_text(_column, _text) {
    TreeItem.init_method_set_text();
    return _call_native_mb_no_ret(
      TreeItem.#_bindings.method_set_text,
      this._owner,
      _column, _text
    );
    
  }
  get_text(_column) {
    TreeItem.init_method_get_text();
    return _call_native_mb_ret(
      TreeItem.#_bindings.method_get_text,
      this._owner,
			Variant.Type.STRING,
    
      _column
    );
    
  }
  set_text_direction(_column, _direction) {
    TreeItem.init_method_set_text_direction();
    return _call_native_mb_no_ret(
      TreeItem.#_bindings.method_set_text_direction,
      this._owner,
      _column, _direction
    );
    
  }
  get_text_direction(_column) {
    TreeItem.init_method_get_text_direction();
    return _call_native_mb_ret(
      TreeItem.#_bindings.method_get_text_direction,
      this._owner,
			Variant.Type.INT,
    
      _column
    );
    
  }
  set_autowrap_mode(_column, _autowrap_mode) {
    TreeItem.init_method_set_autowrap_mode();
    return _call_native_mb_no_ret(
      TreeItem.#_bindings.method_set_autowrap_mode,
      this._owner,
      _column, _autowrap_mode
    );
    
  }
  get_autowrap_mode(_column) {
    TreeItem.init_method_get_autowrap_mode();
    return _call_native_mb_ret(
      TreeItem.#_bindings.method_get_autowrap_mode,
      this._owner,
			Variant.Type.INT,
    
      _column
    );
    
  }
  set_text_overrun_behavior(_column, _overrun_behavior) {
    TreeItem.init_method_set_text_overrun_behavior();
    return _call_native_mb_no_ret(
      TreeItem.#_bindings.method_set_text_overrun_behavior,
      this._owner,
      _column, _overrun_behavior
    );
    
  }
  get_text_overrun_behavior(_column) {
    TreeItem.init_method_get_text_overrun_behavior();
    return _call_native_mb_ret(
      TreeItem.#_bindings.method_get_text_overrun_behavior,
      this._owner,
			Variant.Type.INT,
    
      _column
    );
    
  }
  set_structured_text_bidi_override(_column, _parser) {
    TreeItem.init_method_set_structured_text_bidi_override();
    return _call_native_mb_no_ret(
      TreeItem.#_bindings.method_set_structured_text_bidi_override,
      this._owner,
      _column, _parser
    );
    
  }
  get_structured_text_bidi_override(_column) {
    TreeItem.init_method_get_structured_text_bidi_override();
    return _call_native_mb_ret(
      TreeItem.#_bindings.method_get_structured_text_bidi_override,
      this._owner,
			Variant.Type.INT,
    
      _column
    );
    
  }
  set_structured_text_bidi_override_options(_column, _args) {
    TreeItem.init_method_set_structured_text_bidi_override_options();
    return _call_native_mb_no_ret(
      TreeItem.#_bindings.method_set_structured_text_bidi_override_options,
      this._owner,
      _column, _args
    );
    
  }
  get_structured_text_bidi_override_options(_column) {
    TreeItem.init_method_get_structured_text_bidi_override_options();
    return _call_native_mb_ret(
      TreeItem.#_bindings.method_get_structured_text_bidi_override_options,
      this._owner,
			Variant.Type.ARRAY,
    
      _column
    );
    
  }
  set_language(_column, _language) {
    TreeItem.init_method_set_language();
    return _call_native_mb_no_ret(
      TreeItem.#_bindings.method_set_language,
      this._owner,
      _column, _language
    );
    
  }
  get_language(_column) {
    TreeItem.init_method_get_language();
    return _call_native_mb_ret(
      TreeItem.#_bindings.method_get_language,
      this._owner,
			Variant.Type.STRING,
    
      _column
    );
    
  }
  set_suffix(_column, _text) {
    TreeItem.init_method_set_suffix();
    return _call_native_mb_no_ret(
      TreeItem.#_bindings.method_set_suffix,
      this._owner,
      _column, _text
    );
    
  }
  get_suffix(_column) {
    TreeItem.init_method_get_suffix();
    return _call_native_mb_ret(
      TreeItem.#_bindings.method_get_suffix,
      this._owner,
			Variant.Type.STRING,
    
      _column
    );
    
  }
  set_icon(_column, _texture) {
    TreeItem.init_method_set_icon();
    return _call_native_mb_no_ret(
      TreeItem.#_bindings.method_set_icon,
      this._owner,
      _column, _texture
    );
    
  }
  get_icon(_column) {
    TreeItem.init_method_get_icon();
    return _call_native_mb_ret(
      TreeItem.#_bindings.method_get_icon,
      this._owner,
			Variant.Type.OBJECT,
      _column
    );
    
  }
  set_icon_region(_column, _region) {
    TreeItem.init_method_set_icon_region();
    return _call_native_mb_no_ret(
      TreeItem.#_bindings.method_set_icon_region,
      this._owner,
      _column, _region
    );
    
  }
  get_icon_region(_column) {
    TreeItem.init_method_get_icon_region();
    return _call_native_mb_ret(
      TreeItem.#_bindings.method_get_icon_region,
      this._owner,
			Variant.Type.RECT2,
    
      _column
    );
    
  }
  set_icon_max_width(_column, _width) {
    TreeItem.init_method_set_icon_max_width();
    return _call_native_mb_no_ret(
      TreeItem.#_bindings.method_set_icon_max_width,
      this._owner,
      _column, _width
    );
    
  }
  get_icon_max_width(_column) {
    TreeItem.init_method_get_icon_max_width();
    return _call_native_mb_ret(
      TreeItem.#_bindings.method_get_icon_max_width,
      this._owner,
			Variant.Type.INT,
    
      _column
    );
    
  }
  set_icon_modulate(_column, _modulate) {
    TreeItem.init_method_set_icon_modulate();
    return _call_native_mb_no_ret(
      TreeItem.#_bindings.method_set_icon_modulate,
      this._owner,
      _column, _modulate
    );
    
  }
  get_icon_modulate(_column) {
    TreeItem.init_method_get_icon_modulate();
    return _call_native_mb_ret(
      TreeItem.#_bindings.method_get_icon_modulate,
      this._owner,
			Variant.Type.COLOR,
    
      _column
    );
    
  }
  set_range(_column, _value) {
    TreeItem.init_method_set_range();
    return _call_native_mb_no_ret(
      TreeItem.#_bindings.method_set_range,
      this._owner,
      _column, _value
    );
    
  }
  get_range(_column) {
    TreeItem.init_method_get_range();
    return _call_native_mb_ret(
      TreeItem.#_bindings.method_get_range,
      this._owner,
			Variant.Type.FLOAT,
    
      _column
    );
    
  }
  set_range_config(_column, _min, _max, _step, _expr) {
    TreeItem.init_method_set_range_config();
    return _call_native_mb_no_ret(
      TreeItem.#_bindings.method_set_range_config,
      this._owner,
      _column, _min, _max, _step, _expr
    );
    
  }
  get_range_config(_column) {
    TreeItem.init_method_get_range_config();
    return _call_native_mb_ret(
      TreeItem.#_bindings.method_get_range_config,
      this._owner,
			Variant.Type.DICTIONARY,
    
      _column
    );
    
  }
  set_metadata(_column, _meta) {
    TreeItem.init_method_set_metadata();
    return _call_native_mb_no_ret(
      TreeItem.#_bindings.method_set_metadata,
      this._owner,
      _column, _meta
    );
    
  }
  get_metadata(_column) {
    TreeItem.init_method_get_metadata();
    return _call_native_mb_ret(
      TreeItem.#_bindings.method_get_metadata,
      this._owner,
			Variant.Type.VARIANT,
    
      _column
    );
    
  }
  set_custom_draw(_column, _object, _callback) {
    TreeItem.init_method_set_custom_draw();
    return _call_native_mb_no_ret(
      TreeItem.#_bindings.method_set_custom_draw,
      this._owner,
      _column, _object, _callback
    );
    
  }
  set_custom_draw_callback(_column, _callback) {
    TreeItem.init_method_set_custom_draw_callback();
    return _call_native_mb_no_ret(
      TreeItem.#_bindings.method_set_custom_draw_callback,
      this._owner,
      _column, _callback
    );
    
  }
  get_custom_draw_callback(_column) {
    TreeItem.init_method_get_custom_draw_callback();
    return _call_native_mb_ret(
      TreeItem.#_bindings.method_get_custom_draw_callback,
      this._owner,
			Variant.Type.CALLABLE,
    
      _column
    );
    
  }
  set_collapsed(_enable) {
    TreeItem.init_method_set_collapsed();
    return _call_native_mb_no_ret(
      TreeItem.#_bindings.method_set_collapsed,
      this._owner,
      _enable
    );
    
  }
  is_collapsed() {
    TreeItem.init_method_is_collapsed();
    return _call_native_mb_ret(
      TreeItem.#_bindings.method_is_collapsed,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_collapsed_recursive(_enable) {
    TreeItem.init_method_set_collapsed_recursive();
    return _call_native_mb_no_ret(
      TreeItem.#_bindings.method_set_collapsed_recursive,
      this._owner,
      _enable
    );
    
  }
  is_any_collapsed(_only_visible) {
    TreeItem.init_method_is_any_collapsed();
    return _call_native_mb_ret(
      TreeItem.#_bindings.method_is_any_collapsed,
      this._owner,
			Variant.Type.BOOL,
    
      _only_visible
    );
    
  }
  set_visible(_enable) {
    TreeItem.init_method_set_visible();
    return _call_native_mb_no_ret(
      TreeItem.#_bindings.method_set_visible,
      this._owner,
      _enable
    );
    
  }
  is_visible() {
    TreeItem.init_method_is_visible();
    return _call_native_mb_ret(
      TreeItem.#_bindings.method_is_visible,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  is_visible_in_tree() {
    TreeItem.init_method_is_visible_in_tree();
    return _call_native_mb_ret(
      TreeItem.#_bindings.method_is_visible_in_tree,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  uncollapse_tree() {
    TreeItem.init_method_uncollapse_tree();
    return _call_native_mb_no_ret(
      TreeItem.#_bindings.method_uncollapse_tree,
      this._owner,
      
    );
    
  }
  set_custom_minimum_height(_height) {
    TreeItem.init_method_set_custom_minimum_height();
    return _call_native_mb_no_ret(
      TreeItem.#_bindings.method_set_custom_minimum_height,
      this._owner,
      _height
    );
    
  }
  get_custom_minimum_height() {
    TreeItem.init_method_get_custom_minimum_height();
    return _call_native_mb_ret(
      TreeItem.#_bindings.method_get_custom_minimum_height,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_selectable(_column, _selectable) {
    TreeItem.init_method_set_selectable();
    return _call_native_mb_no_ret(
      TreeItem.#_bindings.method_set_selectable,
      this._owner,
      _column, _selectable
    );
    
  }
  is_selectable(_column) {
    TreeItem.init_method_is_selectable();
    return _call_native_mb_ret(
      TreeItem.#_bindings.method_is_selectable,
      this._owner,
			Variant.Type.BOOL,
    
      _column
    );
    
  }
  is_selected(_column) {
    TreeItem.init_method_is_selected();
    return _call_native_mb_ret(
      TreeItem.#_bindings.method_is_selected,
      this._owner,
			Variant.Type.BOOL,
    
      _column
    );
    
  }
  select(_column) {
    TreeItem.init_method_select();
    return _call_native_mb_no_ret(
      TreeItem.#_bindings.method_select,
      this._owner,
      _column
    );
    
  }
  deselect(_column) {
    TreeItem.init_method_deselect();
    return _call_native_mb_no_ret(
      TreeItem.#_bindings.method_deselect,
      this._owner,
      _column
    );
    
  }
  set_editable(_column, _enabled) {
    TreeItem.init_method_set_editable();
    return _call_native_mb_no_ret(
      TreeItem.#_bindings.method_set_editable,
      this._owner,
      _column, _enabled
    );
    
  }
  is_editable(_column) {
    TreeItem.init_method_is_editable();
    return _call_native_mb_ret(
      TreeItem.#_bindings.method_is_editable,
      this._owner,
			Variant.Type.BOOL,
    
      _column
    );
    
  }
  set_custom_color(_column, _color) {
    TreeItem.init_method_set_custom_color();
    return _call_native_mb_no_ret(
      TreeItem.#_bindings.method_set_custom_color,
      this._owner,
      _column, _color
    );
    
  }
  get_custom_color(_column) {
    TreeItem.init_method_get_custom_color();
    return _call_native_mb_ret(
      TreeItem.#_bindings.method_get_custom_color,
      this._owner,
			Variant.Type.COLOR,
    
      _column
    );
    
  }
  clear_custom_color(_column) {
    TreeItem.init_method_clear_custom_color();
    return _call_native_mb_no_ret(
      TreeItem.#_bindings.method_clear_custom_color,
      this._owner,
      _column
    );
    
  }
  set_custom_font(_column, _font) {
    TreeItem.init_method_set_custom_font();
    return _call_native_mb_no_ret(
      TreeItem.#_bindings.method_set_custom_font,
      this._owner,
      _column, _font
    );
    
  }
  get_custom_font(_column) {
    TreeItem.init_method_get_custom_font();
    return _call_native_mb_ret(
      TreeItem.#_bindings.method_get_custom_font,
      this._owner,
			Variant.Type.OBJECT,
      _column
    );
    
  }
  set_custom_font_size(_column, _font_size) {
    TreeItem.init_method_set_custom_font_size();
    return _call_native_mb_no_ret(
      TreeItem.#_bindings.method_set_custom_font_size,
      this._owner,
      _column, _font_size
    );
    
  }
  get_custom_font_size(_column) {
    TreeItem.init_method_get_custom_font_size();
    return _call_native_mb_ret(
      TreeItem.#_bindings.method_get_custom_font_size,
      this._owner,
			Variant.Type.INT,
    
      _column
    );
    
  }
  set_custom_bg_color(_column, _color, _just_outline) {
    TreeItem.init_method_set_custom_bg_color();
    return _call_native_mb_no_ret(
      TreeItem.#_bindings.method_set_custom_bg_color,
      this._owner,
      _column, _color, _just_outline
    );
    
  }
  clear_custom_bg_color(_column) {
    TreeItem.init_method_clear_custom_bg_color();
    return _call_native_mb_no_ret(
      TreeItem.#_bindings.method_clear_custom_bg_color,
      this._owner,
      _column
    );
    
  }
  get_custom_bg_color(_column) {
    TreeItem.init_method_get_custom_bg_color();
    return _call_native_mb_ret(
      TreeItem.#_bindings.method_get_custom_bg_color,
      this._owner,
			Variant.Type.COLOR,
    
      _column
    );
    
  }
  set_custom_as_button(_column, _enable) {
    TreeItem.init_method_set_custom_as_button();
    return _call_native_mb_no_ret(
      TreeItem.#_bindings.method_set_custom_as_button,
      this._owner,
      _column, _enable
    );
    
  }
  is_custom_set_as_button(_column) {
    TreeItem.init_method_is_custom_set_as_button();
    return _call_native_mb_ret(
      TreeItem.#_bindings.method_is_custom_set_as_button,
      this._owner,
			Variant.Type.BOOL,
    
      _column
    );
    
  }
  add_button(_column, _button, _id, _disabled, _tooltip_text) {
    TreeItem.init_method_add_button();
    return _call_native_mb_no_ret(
      TreeItem.#_bindings.method_add_button,
      this._owner,
      _column, _button, _id, _disabled, _tooltip_text
    );
    
  }
  get_button_count(_column) {
    TreeItem.init_method_get_button_count();
    return _call_native_mb_ret(
      TreeItem.#_bindings.method_get_button_count,
      this._owner,
			Variant.Type.INT,
    
      _column
    );
    
  }
  get_button_tooltip_text(_column, _button_index) {
    TreeItem.init_method_get_button_tooltip_text();
    return _call_native_mb_ret(
      TreeItem.#_bindings.method_get_button_tooltip_text,
      this._owner,
			Variant.Type.STRING,
    
      _column, _button_index
    );
    
  }
  get_button_id(_column, _button_index) {
    TreeItem.init_method_get_button_id();
    return _call_native_mb_ret(
      TreeItem.#_bindings.method_get_button_id,
      this._owner,
			Variant.Type.INT,
    
      _column, _button_index
    );
    
  }
  get_button_by_id(_column, _id) {
    TreeItem.init_method_get_button_by_id();
    return _call_native_mb_ret(
      TreeItem.#_bindings.method_get_button_by_id,
      this._owner,
			Variant.Type.INT,
    
      _column, _id
    );
    
  }
  get_button_color(_column, _id) {
    TreeItem.init_method_get_button_color();
    return _call_native_mb_ret(
      TreeItem.#_bindings.method_get_button_color,
      this._owner,
			Variant.Type.COLOR,
    
      _column, _id
    );
    
  }
  get_button(_column, _button_index) {
    TreeItem.init_method_get_button();
    return _call_native_mb_ret(
      TreeItem.#_bindings.method_get_button,
      this._owner,
			Variant.Type.OBJECT,
      _column, _button_index
    );
    
  }
  set_button_tooltip_text(_column, _button_index, _tooltip) {
    TreeItem.init_method_set_button_tooltip_text();
    return _call_native_mb_no_ret(
      TreeItem.#_bindings.method_set_button_tooltip_text,
      this._owner,
      _column, _button_index, _tooltip
    );
    
  }
  set_button(_column, _button_index, _button) {
    TreeItem.init_method_set_button();
    return _call_native_mb_no_ret(
      TreeItem.#_bindings.method_set_button,
      this._owner,
      _column, _button_index, _button
    );
    
  }
  erase_button(_column, _button_index) {
    TreeItem.init_method_erase_button();
    return _call_native_mb_no_ret(
      TreeItem.#_bindings.method_erase_button,
      this._owner,
      _column, _button_index
    );
    
  }
  set_button_disabled(_column, _button_index, _disabled) {
    TreeItem.init_method_set_button_disabled();
    return _call_native_mb_no_ret(
      TreeItem.#_bindings.method_set_button_disabled,
      this._owner,
      _column, _button_index, _disabled
    );
    
  }
  set_button_color(_column, _button_index, _color) {
    TreeItem.init_method_set_button_color();
    return _call_native_mb_no_ret(
      TreeItem.#_bindings.method_set_button_color,
      this._owner,
      _column, _button_index, _color
    );
    
  }
  is_button_disabled(_column, _button_index) {
    TreeItem.init_method_is_button_disabled();
    return _call_native_mb_ret(
      TreeItem.#_bindings.method_is_button_disabled,
      this._owner,
			Variant.Type.BOOL,
    
      _column, _button_index
    );
    
  }
  set_tooltip_text(_column, _tooltip) {
    TreeItem.init_method_set_tooltip_text();
    return _call_native_mb_no_ret(
      TreeItem.#_bindings.method_set_tooltip_text,
      this._owner,
      _column, _tooltip
    );
    
  }
  get_tooltip_text(_column) {
    TreeItem.init_method_get_tooltip_text();
    return _call_native_mb_ret(
      TreeItem.#_bindings.method_get_tooltip_text,
      this._owner,
			Variant.Type.STRING,
    
      _column
    );
    
  }
  set_text_alignment(_column, _text_alignment) {
    TreeItem.init_method_set_text_alignment();
    return _call_native_mb_no_ret(
      TreeItem.#_bindings.method_set_text_alignment,
      this._owner,
      _column, _text_alignment
    );
    
  }
  get_text_alignment(_column) {
    TreeItem.init_method_get_text_alignment();
    return _call_native_mb_ret(
      TreeItem.#_bindings.method_get_text_alignment,
      this._owner,
			Variant.Type.INT,
    
      _column
    );
    
  }
  set_expand_right(_column, _enable) {
    TreeItem.init_method_set_expand_right();
    return _call_native_mb_no_ret(
      TreeItem.#_bindings.method_set_expand_right,
      this._owner,
      _column, _enable
    );
    
  }
  get_expand_right(_column) {
    TreeItem.init_method_get_expand_right();
    return _call_native_mb_ret(
      TreeItem.#_bindings.method_get_expand_right,
      this._owner,
			Variant.Type.BOOL,
    
      _column
    );
    
  }
  set_disable_folding(_disable) {
    TreeItem.init_method_set_disable_folding();
    return _call_native_mb_no_ret(
      TreeItem.#_bindings.method_set_disable_folding,
      this._owner,
      _disable
    );
    
  }
  is_folding_disabled() {
    TreeItem.init_method_is_folding_disabled();
    return _call_native_mb_ret(
      TreeItem.#_bindings.method_is_folding_disabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  create_child(_index) {
    TreeItem.init_method_create_child();
    return _call_native_mb_ret(
      TreeItem.#_bindings.method_create_child,
      this._owner,
			Variant.Type.OBJECT,
      _index
    );
    
  }
  add_child(_child) {
    TreeItem.init_method_add_child();
    return _call_native_mb_no_ret(
      TreeItem.#_bindings.method_add_child,
      this._owner,
      _child
    );
    
  }
  remove_child(_child) {
    TreeItem.init_method_remove_child();
    return _call_native_mb_no_ret(
      TreeItem.#_bindings.method_remove_child,
      this._owner,
      _child
    );
    
  }
  get_tree() {
    TreeItem.init_method_get_tree();
    return _call_native_mb_ret(
      TreeItem.#_bindings.method_get_tree,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  get_next() {
    TreeItem.init_method_get_next();
    return _call_native_mb_ret(
      TreeItem.#_bindings.method_get_next,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  get_prev() {
    TreeItem.init_method_get_prev();
    return _call_native_mb_ret(
      TreeItem.#_bindings.method_get_prev,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  get_parent() {
    TreeItem.init_method_get_parent();
    return _call_native_mb_ret(
      TreeItem.#_bindings.method_get_parent,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  get_first_child() {
    TreeItem.init_method_get_first_child();
    return _call_native_mb_ret(
      TreeItem.#_bindings.method_get_first_child,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  get_next_in_tree(_wrap) {
    TreeItem.init_method_get_next_in_tree();
    return _call_native_mb_ret(
      TreeItem.#_bindings.method_get_next_in_tree,
      this._owner,
			Variant.Type.OBJECT,
      _wrap
    );
    
  }
  get_prev_in_tree(_wrap) {
    TreeItem.init_method_get_prev_in_tree();
    return _call_native_mb_ret(
      TreeItem.#_bindings.method_get_prev_in_tree,
      this._owner,
			Variant.Type.OBJECT,
      _wrap
    );
    
  }
  get_next_visible(_wrap) {
    TreeItem.init_method_get_next_visible();
    return _call_native_mb_ret(
      TreeItem.#_bindings.method_get_next_visible,
      this._owner,
			Variant.Type.OBJECT,
      _wrap
    );
    
  }
  get_prev_visible(_wrap) {
    TreeItem.init_method_get_prev_visible();
    return _call_native_mb_ret(
      TreeItem.#_bindings.method_get_prev_visible,
      this._owner,
			Variant.Type.OBJECT,
      _wrap
    );
    
  }
  get_child(_index) {
    TreeItem.init_method_get_child();
    return _call_native_mb_ret(
      TreeItem.#_bindings.method_get_child,
      this._owner,
			Variant.Type.OBJECT,
      _index
    );
    
  }
  get_child_count() {
    TreeItem.init_method_get_child_count();
    return _call_native_mb_ret(
      TreeItem.#_bindings.method_get_child_count,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_children() {
    TreeItem.init_method_get_children();
    return _call_native_mb_ret(
      TreeItem.#_bindings.method_get_children,
      this._owner,
			Variant.Type.ARRAY,
      
    );
    
  }
  get_index() {
    TreeItem.init_method_get_index();
    return _call_native_mb_ret(
      TreeItem.#_bindings.method_get_index,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  move_before(_item) {
    TreeItem.init_method_move_before();
    return _call_native_mb_no_ret(
      TreeItem.#_bindings.method_move_before,
      this._owner,
      _item
    );
    
  }
  move_after(_item) {
    TreeItem.init_method_move_after();
    return _call_native_mb_no_ret(
      TreeItem.#_bindings.method_move_after,
      this._owner,
      _item
    );
    
  }
  call_recursive(_method) {
    TreeItem.init_method_call_recursive();
    return _call_native_mb_no_ret(
      TreeItem.#_bindings.method_call_recursive,
      this._owner,
      _method
    );
    
  }
  
get collapsed () {
  return this.is_collapsed();
}
set collapsed (new_value) {
  this.set_collapsed(new_value);
}
get visible () {
  return this.is_visible();
}
set visible (new_value) {
  this.set_visible(new_value);
}
get disable_folding () {
  return this.is_folding_disabled();
}
set disable_folding (new_value) {
  this.set_disable_folding(new_value);
}
get custom_minimum_height () {
  return this.get_custom_minimum_height();
}
set custom_minimum_height (new_value) {
  this.set_custom_minimum_height(new_value);
}

  static TreeCellMode = {
    CELL_MODE_STRING: 0,
    CELL_MODE_CHECK: 1,
    CELL_MODE_RANGE: 2,
    CELL_MODE_ICON: 3,
    CELL_MODE_CUSTOM: 4,
  }
}