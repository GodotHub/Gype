import * as internal from '__internal__';
import { Popup } from '@js_godot/classes/popup'
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
  method_activate_item_by_event;
  method_set_prefer_native_menu;
  method_is_prefer_native_menu;
  method_is_native_menu;
  method_add_item;
  method_add_icon_item;
  method_add_check_item;
  method_add_icon_check_item;
  method_add_radio_check_item;
  method_add_icon_radio_check_item;
  method_add_multistate_item;
  method_add_shortcut;
  method_add_icon_shortcut;
  method_add_check_shortcut;
  method_add_icon_check_shortcut;
  method_add_radio_check_shortcut;
  method_add_icon_radio_check_shortcut;
  method_add_submenu_item;
  method_add_submenu_node_item;
  method_set_item_text;
  method_set_item_text_direction;
  method_set_item_language;
  method_set_item_icon;
  method_set_item_icon_max_width;
  method_set_item_icon_modulate;
  method_set_item_checked;
  method_set_item_id;
  method_set_item_accelerator;
  method_set_item_metadata;
  method_set_item_disabled;
  method_set_item_submenu;
  method_set_item_submenu_node;
  method_set_item_as_separator;
  method_set_item_as_checkable;
  method_set_item_as_radio_checkable;
  method_set_item_tooltip;
  method_set_item_shortcut;
  method_set_item_indent;
  method_set_item_multistate;
  method_set_item_multistate_max;
  method_set_item_shortcut_disabled;
  method_toggle_item_checked;
  method_toggle_item_multistate;
  method_get_item_text;
  method_get_item_text_direction;
  method_get_item_language;
  method_get_item_icon;
  method_get_item_icon_max_width;
  method_get_item_icon_modulate;
  method_is_item_checked;
  method_get_item_id;
  method_get_item_index;
  method_get_item_accelerator;
  method_get_item_metadata;
  method_is_item_disabled;
  method_get_item_submenu;
  method_get_item_submenu_node;
  method_is_item_separator;
  method_is_item_checkable;
  method_is_item_radio_checkable;
  method_is_item_shortcut_disabled;
  method_get_item_tooltip;
  method_get_item_shortcut;
  method_get_item_indent;
  method_get_item_multistate_max;
  method_get_item_multistate;
  method_set_focused_item;
  method_get_focused_item;
  method_set_item_count;
  method_get_item_count;
  method_scroll_to_item;
  method_remove_item;
  method_add_separator;
  method_clear;
  method_set_hide_on_item_selection;
  method_is_hide_on_item_selection;
  method_set_hide_on_checkable_item_selection;
  method_is_hide_on_checkable_item_selection;
  method_set_hide_on_state_item_selection;
  method_is_hide_on_state_item_selection;
  method_set_submenu_popup_delay;
  method_get_submenu_popup_delay;
  method_set_allow_search;
  method_get_allow_search;
  method_is_system_menu;
  method_set_system_menu;
  method_get_system_menu;
}
@GodotClass
export class PopupMenu extends Popup{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("PopupMenu");
    } else {
      super(godot_object);
    }
  }
  static init_method_activate_item_by_event() {
    if (!this._bindings.method_activate_item_by_event) {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("activate_item_by_event");
      this._bindings.method_activate_item_by_event = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3716412023
      );
    }
  }
  static init_method_set_prefer_native_menu() {
    if (!this._bindings.method_set_prefer_native_menu) {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("set_prefer_native_menu");
      this._bindings.method_set_prefer_native_menu = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_prefer_native_menu() {
    if (!this._bindings.method_is_prefer_native_menu) {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("is_prefer_native_menu");
      this._bindings.method_is_prefer_native_menu = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_is_native_menu() {
    if (!this._bindings.method_is_native_menu) {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("is_native_menu");
      this._bindings.method_is_native_menu = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_add_item() {
    if (!this._bindings.method_add_item) {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("add_item");
      this._bindings.method_add_item = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3674230041
      );
    }
  }
  static init_method_add_icon_item() {
    if (!this._bindings.method_add_icon_item) {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("add_icon_item");
      this._bindings.method_add_icon_item = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1086190128
      );
    }
  }
  static init_method_add_check_item() {
    if (!this._bindings.method_add_check_item) {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("add_check_item");
      this._bindings.method_add_check_item = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3674230041
      );
    }
  }
  static init_method_add_icon_check_item() {
    if (!this._bindings.method_add_icon_check_item) {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("add_icon_check_item");
      this._bindings.method_add_icon_check_item = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1086190128
      );
    }
  }
  static init_method_add_radio_check_item() {
    if (!this._bindings.method_add_radio_check_item) {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("add_radio_check_item");
      this._bindings.method_add_radio_check_item = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3674230041
      );
    }
  }
  static init_method_add_icon_radio_check_item() {
    if (!this._bindings.method_add_icon_radio_check_item) {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("add_icon_radio_check_item");
      this._bindings.method_add_icon_radio_check_item = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1086190128
      );
    }
  }
  static init_method_add_multistate_item() {
    if (!this._bindings.method_add_multistate_item) {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("add_multistate_item");
      this._bindings.method_add_multistate_item = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        150780458
      );
    }
  }
  static init_method_add_shortcut() {
    if (!this._bindings.method_add_shortcut) {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("add_shortcut");
      this._bindings.method_add_shortcut = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3451850107
      );
    }
  }
  static init_method_add_icon_shortcut() {
    if (!this._bindings.method_add_icon_shortcut) {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("add_icon_shortcut");
      this._bindings.method_add_icon_shortcut = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2997871092
      );
    }
  }
  static init_method_add_check_shortcut() {
    if (!this._bindings.method_add_check_shortcut) {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("add_check_shortcut");
      this._bindings.method_add_check_shortcut = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1642193386
      );
    }
  }
  static init_method_add_icon_check_shortcut() {
    if (!this._bindings.method_add_icon_check_shortcut) {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("add_icon_check_shortcut");
      this._bindings.method_add_icon_check_shortcut = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3856247530
      );
    }
  }
  static init_method_add_radio_check_shortcut() {
    if (!this._bindings.method_add_radio_check_shortcut) {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("add_radio_check_shortcut");
      this._bindings.method_add_radio_check_shortcut = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1642193386
      );
    }
  }
  static init_method_add_icon_radio_check_shortcut() {
    if (!this._bindings.method_add_icon_radio_check_shortcut) {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("add_icon_radio_check_shortcut");
      this._bindings.method_add_icon_radio_check_shortcut = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3856247530
      );
    }
  }
  static init_method_add_submenu_item() {
    if (!this._bindings.method_add_submenu_item) {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("add_submenu_item");
      this._bindings.method_add_submenu_item = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2979222410
      );
    }
  }
  static init_method_add_submenu_node_item() {
    if (!this._bindings.method_add_submenu_node_item) {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("add_submenu_node_item");
      this._bindings.method_add_submenu_node_item = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1325455216
      );
    }
  }
  static init_method_set_item_text() {
    if (!this._bindings.method_set_item_text) {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("set_item_text");
      this._bindings.method_set_item_text = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        501894301
      );
    }
  }
  static init_method_set_item_text_direction() {
    if (!this._bindings.method_set_item_text_direction) {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("set_item_text_direction");
      this._bindings.method_set_item_text_direction = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1707680378
      );
    }
  }
  static init_method_set_item_language() {
    if (!this._bindings.method_set_item_language) {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("set_item_language");
      this._bindings.method_set_item_language = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        501894301
      );
    }
  }
  static init_method_set_item_icon() {
    if (!this._bindings.method_set_item_icon) {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("set_item_icon");
      this._bindings.method_set_item_icon = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        666127730
      );
    }
  }
  static init_method_set_item_icon_max_width() {
    if (!this._bindings.method_set_item_icon_max_width) {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("set_item_icon_max_width");
      this._bindings.method_set_item_icon_max_width = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3937882851
      );
    }
  }
  static init_method_set_item_icon_modulate() {
    if (!this._bindings.method_set_item_icon_modulate) {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("set_item_icon_modulate");
      this._bindings.method_set_item_icon_modulate = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2878471219
      );
    }
  }
  static init_method_set_item_checked() {
    if (!this._bindings.method_set_item_checked) {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("set_item_checked");
      this._bindings.method_set_item_checked = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        300928843
      );
    }
  }
  static init_method_set_item_id() {
    if (!this._bindings.method_set_item_id) {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("set_item_id");
      this._bindings.method_set_item_id = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3937882851
      );
    }
  }
  static init_method_set_item_accelerator() {
    if (!this._bindings.method_set_item_accelerator) {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("set_item_accelerator");
      this._bindings.method_set_item_accelerator = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2992817551
      );
    }
  }
  static init_method_set_item_metadata() {
    if (!this._bindings.method_set_item_metadata) {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("set_item_metadata");
      this._bindings.method_set_item_metadata = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2152698145
      );
    }
  }
  static init_method_set_item_disabled() {
    if (!this._bindings.method_set_item_disabled) {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("set_item_disabled");
      this._bindings.method_set_item_disabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        300928843
      );
    }
  }
  static init_method_set_item_submenu() {
    if (!this._bindings.method_set_item_submenu) {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("set_item_submenu");
      this._bindings.method_set_item_submenu = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        501894301
      );
    }
  }
  static init_method_set_item_submenu_node() {
    if (!this._bindings.method_set_item_submenu_node) {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("set_item_submenu_node");
      this._bindings.method_set_item_submenu_node = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1068370740
      );
    }
  }
  static init_method_set_item_as_separator() {
    if (!this._bindings.method_set_item_as_separator) {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("set_item_as_separator");
      this._bindings.method_set_item_as_separator = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        300928843
      );
    }
  }
  static init_method_set_item_as_checkable() {
    if (!this._bindings.method_set_item_as_checkable) {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("set_item_as_checkable");
      this._bindings.method_set_item_as_checkable = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        300928843
      );
    }
  }
  static init_method_set_item_as_radio_checkable() {
    if (!this._bindings.method_set_item_as_radio_checkable) {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("set_item_as_radio_checkable");
      this._bindings.method_set_item_as_radio_checkable = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        300928843
      );
    }
  }
  static init_method_set_item_tooltip() {
    if (!this._bindings.method_set_item_tooltip) {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("set_item_tooltip");
      this._bindings.method_set_item_tooltip = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        501894301
      );
    }
  }
  static init_method_set_item_shortcut() {
    if (!this._bindings.method_set_item_shortcut) {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("set_item_shortcut");
      this._bindings.method_set_item_shortcut = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        825127832
      );
    }
  }
  static init_method_set_item_indent() {
    if (!this._bindings.method_set_item_indent) {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("set_item_indent");
      this._bindings.method_set_item_indent = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3937882851
      );
    }
  }
  static init_method_set_item_multistate() {
    if (!this._bindings.method_set_item_multistate) {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("set_item_multistate");
      this._bindings.method_set_item_multistate = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3937882851
      );
    }
  }
  static init_method_set_item_multistate_max() {
    if (!this._bindings.method_set_item_multistate_max) {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("set_item_multistate_max");
      this._bindings.method_set_item_multistate_max = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3937882851
      );
    }
  }
  static init_method_set_item_shortcut_disabled() {
    if (!this._bindings.method_set_item_shortcut_disabled) {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("set_item_shortcut_disabled");
      this._bindings.method_set_item_shortcut_disabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        300928843
      );
    }
  }
  static init_method_toggle_item_checked() {
    if (!this._bindings.method_toggle_item_checked) {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("toggle_item_checked");
      this._bindings.method_toggle_item_checked = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_toggle_item_multistate() {
    if (!this._bindings.method_toggle_item_multistate) {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("toggle_item_multistate");
      this._bindings.method_toggle_item_multistate = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_item_text() {
    if (!this._bindings.method_get_item_text) {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("get_item_text");
      this._bindings.method_get_item_text = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        844755477
      );
    }
  }
  static init_method_get_item_text_direction() {
    if (!this._bindings.method_get_item_text_direction) {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("get_item_text_direction");
      this._bindings.method_get_item_text_direction = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4235602388
      );
    }
  }
  static init_method_get_item_language() {
    if (!this._bindings.method_get_item_language) {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("get_item_language");
      this._bindings.method_get_item_language = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        844755477
      );
    }
  }
  static init_method_get_item_icon() {
    if (!this._bindings.method_get_item_icon) {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("get_item_icon");
      this._bindings.method_get_item_icon = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3536238170
      );
    }
  }
  static init_method_get_item_icon_max_width() {
    if (!this._bindings.method_get_item_icon_max_width) {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("get_item_icon_max_width");
      this._bindings.method_get_item_icon_max_width = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        923996154
      );
    }
  }
  static init_method_get_item_icon_modulate() {
    if (!this._bindings.method_get_item_icon_modulate) {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("get_item_icon_modulate");
      this._bindings.method_get_item_icon_modulate = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3457211756
      );
    }
  }
  static init_method_is_item_checked() {
    if (!this._bindings.method_is_item_checked) {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("is_item_checked");
      this._bindings.method_is_item_checked = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1116898809
      );
    }
  }
  static init_method_get_item_id() {
    if (!this._bindings.method_get_item_id) {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("get_item_id");
      this._bindings.method_get_item_id = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        923996154
      );
    }
  }
  static init_method_get_item_index() {
    if (!this._bindings.method_get_item_index) {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("get_item_index");
      this._bindings.method_get_item_index = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        923996154
      );
    }
  }
  static init_method_get_item_accelerator() {
    if (!this._bindings.method_get_item_accelerator) {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("get_item_accelerator");
      this._bindings.method_get_item_accelerator = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        253789942
      );
    }
  }
  static init_method_get_item_metadata() {
    if (!this._bindings.method_get_item_metadata) {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("get_item_metadata");
      this._bindings.method_get_item_metadata = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4227898402
      );
    }
  }
  static init_method_is_item_disabled() {
    if (!this._bindings.method_is_item_disabled) {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("is_item_disabled");
      this._bindings.method_is_item_disabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1116898809
      );
    }
  }
  static init_method_get_item_submenu() {
    if (!this._bindings.method_get_item_submenu) {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("get_item_submenu");
      this._bindings.method_get_item_submenu = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        844755477
      );
    }
  }
  static init_method_get_item_submenu_node() {
    if (!this._bindings.method_get_item_submenu_node) {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("get_item_submenu_node");
      this._bindings.method_get_item_submenu_node = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2100501353
      );
    }
  }
  static init_method_is_item_separator() {
    if (!this._bindings.method_is_item_separator) {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("is_item_separator");
      this._bindings.method_is_item_separator = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1116898809
      );
    }
  }
  static init_method_is_item_checkable() {
    if (!this._bindings.method_is_item_checkable) {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("is_item_checkable");
      this._bindings.method_is_item_checkable = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1116898809
      );
    }
  }
  static init_method_is_item_radio_checkable() {
    if (!this._bindings.method_is_item_radio_checkable) {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("is_item_radio_checkable");
      this._bindings.method_is_item_radio_checkable = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1116898809
      );
    }
  }
  static init_method_is_item_shortcut_disabled() {
    if (!this._bindings.method_is_item_shortcut_disabled) {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("is_item_shortcut_disabled");
      this._bindings.method_is_item_shortcut_disabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1116898809
      );
    }
  }
  static init_method_get_item_tooltip() {
    if (!this._bindings.method_get_item_tooltip) {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("get_item_tooltip");
      this._bindings.method_get_item_tooltip = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        844755477
      );
    }
  }
  static init_method_get_item_shortcut() {
    if (!this._bindings.method_get_item_shortcut) {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("get_item_shortcut");
      this._bindings.method_get_item_shortcut = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1449483325
      );
    }
  }
  static init_method_get_item_indent() {
    if (!this._bindings.method_get_item_indent) {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("get_item_indent");
      this._bindings.method_get_item_indent = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        923996154
      );
    }
  }
  static init_method_get_item_multistate_max() {
    if (!this._bindings.method_get_item_multistate_max) {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("get_item_multistate_max");
      this._bindings.method_get_item_multistate_max = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        923996154
      );
    }
  }
  static init_method_get_item_multistate() {
    if (!this._bindings.method_get_item_multistate) {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("get_item_multistate");
      this._bindings.method_get_item_multistate = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        923996154
      );
    }
  }
  static init_method_set_focused_item() {
    if (!this._bindings.method_set_focused_item) {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("set_focused_item");
      this._bindings.method_set_focused_item = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_focused_item() {
    if (!this._bindings.method_get_focused_item) {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("get_focused_item");
      this._bindings.method_get_focused_item = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_item_count() {
    if (!this._bindings.method_set_item_count) {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("set_item_count");
      this._bindings.method_set_item_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_item_count() {
    if (!this._bindings.method_get_item_count) {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("get_item_count");
      this._bindings.method_get_item_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_scroll_to_item() {
    if (!this._bindings.method_scroll_to_item) {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("scroll_to_item");
      this._bindings.method_scroll_to_item = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_remove_item() {
    if (!this._bindings.method_remove_item) {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("remove_item");
      this._bindings.method_remove_item = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_add_separator() {
    if (!this._bindings.method_add_separator) {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("add_separator");
      this._bindings.method_add_separator = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2266703459
      );
    }
  }
  static init_method_clear() {
    if (!this._bindings.method_clear) {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("clear");
      this._bindings.method_clear = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        107499316
      );
    }
  }
  static init_method_set_hide_on_item_selection() {
    if (!this._bindings.method_set_hide_on_item_selection) {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("set_hide_on_item_selection");
      this._bindings.method_set_hide_on_item_selection = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_hide_on_item_selection() {
    if (!this._bindings.method_is_hide_on_item_selection) {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("is_hide_on_item_selection");
      this._bindings.method_is_hide_on_item_selection = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_hide_on_checkable_item_selection() {
    if (!this._bindings.method_set_hide_on_checkable_item_selection) {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("set_hide_on_checkable_item_selection");
      this._bindings.method_set_hide_on_checkable_item_selection = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_hide_on_checkable_item_selection() {
    if (!this._bindings.method_is_hide_on_checkable_item_selection) {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("is_hide_on_checkable_item_selection");
      this._bindings.method_is_hide_on_checkable_item_selection = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_hide_on_state_item_selection() {
    if (!this._bindings.method_set_hide_on_state_item_selection) {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("set_hide_on_state_item_selection");
      this._bindings.method_set_hide_on_state_item_selection = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_hide_on_state_item_selection() {
    if (!this._bindings.method_is_hide_on_state_item_selection) {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("is_hide_on_state_item_selection");
      this._bindings.method_is_hide_on_state_item_selection = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_submenu_popup_delay() {
    if (!this._bindings.method_set_submenu_popup_delay) {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("set_submenu_popup_delay");
      this._bindings.method_set_submenu_popup_delay = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_submenu_popup_delay() {
    if (!this._bindings.method_get_submenu_popup_delay) {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("get_submenu_popup_delay");
      this._bindings.method_get_submenu_popup_delay = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_allow_search() {
    if (!this._bindings.method_set_allow_search) {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("set_allow_search");
      this._bindings.method_set_allow_search = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_allow_search() {
    if (!this._bindings.method_get_allow_search) {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("get_allow_search");
      this._bindings.method_get_allow_search = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_is_system_menu() {
    if (!this._bindings.method_is_system_menu) {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("is_system_menu");
      this._bindings.method_is_system_menu = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_system_menu() {
    if (!this._bindings.method_set_system_menu) {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("set_system_menu");
      this._bindings.method_set_system_menu = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        600639674
      );
    }
  }
  static init_method_get_system_menu() {
    if (!this._bindings.method_get_system_menu) {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("get_system_menu");
      this._bindings.method_get_system_menu = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1222557358
      );
    }
  }

  
  
  activate_item_by_event(_event, _for_global_only) {
    PopupMenu.init_method_activate_item_by_event();
    return _call_native_mb_ret(
      PopupMenu._bindings.method_activate_item_by_event,
      this._owner,
			Variant.Type.BOOL,
    
      _event, _for_global_only
    );
    
  }
  set_prefer_native_menu(_enabled) {
    PopupMenu.init_method_set_prefer_native_menu();
    return _call_native_mb_no_ret(
      PopupMenu._bindings.method_set_prefer_native_menu,
      this._owner,
      _enabled
    );
    
  }
  is_prefer_native_menu() {
    PopupMenu.init_method_is_prefer_native_menu();
    return _call_native_mb_ret(
      PopupMenu._bindings.method_is_prefer_native_menu,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  is_native_menu() {
    PopupMenu.init_method_is_native_menu();
    return _call_native_mb_ret(
      PopupMenu._bindings.method_is_native_menu,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  add_item(_label, _id, _accel) {
    PopupMenu.init_method_add_item();
    return _call_native_mb_no_ret(
      PopupMenu._bindings.method_add_item,
      this._owner,
      _label, _id, _accel
    );
    
  }
  add_icon_item(_texture, _label, _id, _accel) {
    PopupMenu.init_method_add_icon_item();
    return _call_native_mb_no_ret(
      PopupMenu._bindings.method_add_icon_item,
      this._owner,
      _texture, _label, _id, _accel
    );
    
  }
  add_check_item(_label, _id, _accel) {
    PopupMenu.init_method_add_check_item();
    return _call_native_mb_no_ret(
      PopupMenu._bindings.method_add_check_item,
      this._owner,
      _label, _id, _accel
    );
    
  }
  add_icon_check_item(_texture, _label, _id, _accel) {
    PopupMenu.init_method_add_icon_check_item();
    return _call_native_mb_no_ret(
      PopupMenu._bindings.method_add_icon_check_item,
      this._owner,
      _texture, _label, _id, _accel
    );
    
  }
  add_radio_check_item(_label, _id, _accel) {
    PopupMenu.init_method_add_radio_check_item();
    return _call_native_mb_no_ret(
      PopupMenu._bindings.method_add_radio_check_item,
      this._owner,
      _label, _id, _accel
    );
    
  }
  add_icon_radio_check_item(_texture, _label, _id, _accel) {
    PopupMenu.init_method_add_icon_radio_check_item();
    return _call_native_mb_no_ret(
      PopupMenu._bindings.method_add_icon_radio_check_item,
      this._owner,
      _texture, _label, _id, _accel
    );
    
  }
  add_multistate_item(_label, _max_states, _default_state, _id, _accel) {
    PopupMenu.init_method_add_multistate_item();
    return _call_native_mb_no_ret(
      PopupMenu._bindings.method_add_multistate_item,
      this._owner,
      _label, _max_states, _default_state, _id, _accel
    );
    
  }
  add_shortcut(_shortcut, _id, _global, _allow_echo) {
    PopupMenu.init_method_add_shortcut();
    return _call_native_mb_no_ret(
      PopupMenu._bindings.method_add_shortcut,
      this._owner,
      _shortcut, _id, _global, _allow_echo
    );
    
  }
  add_icon_shortcut(_texture, _shortcut, _id, _global, _allow_echo) {
    PopupMenu.init_method_add_icon_shortcut();
    return _call_native_mb_no_ret(
      PopupMenu._bindings.method_add_icon_shortcut,
      this._owner,
      _texture, _shortcut, _id, _global, _allow_echo
    );
    
  }
  add_check_shortcut(_shortcut, _id, _global) {
    PopupMenu.init_method_add_check_shortcut();
    return _call_native_mb_no_ret(
      PopupMenu._bindings.method_add_check_shortcut,
      this._owner,
      _shortcut, _id, _global
    );
    
  }
  add_icon_check_shortcut(_texture, _shortcut, _id, _global) {
    PopupMenu.init_method_add_icon_check_shortcut();
    return _call_native_mb_no_ret(
      PopupMenu._bindings.method_add_icon_check_shortcut,
      this._owner,
      _texture, _shortcut, _id, _global
    );
    
  }
  add_radio_check_shortcut(_shortcut, _id, _global) {
    PopupMenu.init_method_add_radio_check_shortcut();
    return _call_native_mb_no_ret(
      PopupMenu._bindings.method_add_radio_check_shortcut,
      this._owner,
      _shortcut, _id, _global
    );
    
  }
  add_icon_radio_check_shortcut(_texture, _shortcut, _id, _global) {
    PopupMenu.init_method_add_icon_radio_check_shortcut();
    return _call_native_mb_no_ret(
      PopupMenu._bindings.method_add_icon_radio_check_shortcut,
      this._owner,
      _texture, _shortcut, _id, _global
    );
    
  }
  add_submenu_item(_label, _submenu, _id) {
    PopupMenu.init_method_add_submenu_item();
    return _call_native_mb_no_ret(
      PopupMenu._bindings.method_add_submenu_item,
      this._owner,
      _label, _submenu, _id
    );
    
  }
  add_submenu_node_item(_label, _submenu, _id) {
    PopupMenu.init_method_add_submenu_node_item();
    return _call_native_mb_no_ret(
      PopupMenu._bindings.method_add_submenu_node_item,
      this._owner,
      _label, _submenu, _id
    );
    
  }
  set_item_text(_index, _text) {
    PopupMenu.init_method_set_item_text();
    return _call_native_mb_no_ret(
      PopupMenu._bindings.method_set_item_text,
      this._owner,
      _index, _text
    );
    
  }
  set_item_text_direction(_index, _direction) {
    PopupMenu.init_method_set_item_text_direction();
    return _call_native_mb_no_ret(
      PopupMenu._bindings.method_set_item_text_direction,
      this._owner,
      _index, _direction
    );
    
  }
  set_item_language(_index, _language) {
    PopupMenu.init_method_set_item_language();
    return _call_native_mb_no_ret(
      PopupMenu._bindings.method_set_item_language,
      this._owner,
      _index, _language
    );
    
  }
  set_item_icon(_index, _icon) {
    PopupMenu.init_method_set_item_icon();
    return _call_native_mb_no_ret(
      PopupMenu._bindings.method_set_item_icon,
      this._owner,
      _index, _icon
    );
    
  }
  set_item_icon_max_width(_index, _width) {
    PopupMenu.init_method_set_item_icon_max_width();
    return _call_native_mb_no_ret(
      PopupMenu._bindings.method_set_item_icon_max_width,
      this._owner,
      _index, _width
    );
    
  }
  set_item_icon_modulate(_index, _modulate) {
    PopupMenu.init_method_set_item_icon_modulate();
    return _call_native_mb_no_ret(
      PopupMenu._bindings.method_set_item_icon_modulate,
      this._owner,
      _index, _modulate
    );
    
  }
  set_item_checked(_index, _checked) {
    PopupMenu.init_method_set_item_checked();
    return _call_native_mb_no_ret(
      PopupMenu._bindings.method_set_item_checked,
      this._owner,
      _index, _checked
    );
    
  }
  set_item_id(_index, _id) {
    PopupMenu.init_method_set_item_id();
    return _call_native_mb_no_ret(
      PopupMenu._bindings.method_set_item_id,
      this._owner,
      _index, _id
    );
    
  }
  set_item_accelerator(_index, _accel) {
    PopupMenu.init_method_set_item_accelerator();
    return _call_native_mb_no_ret(
      PopupMenu._bindings.method_set_item_accelerator,
      this._owner,
      _index, _accel
    );
    
  }
  set_item_metadata(_index, _metadata) {
    PopupMenu.init_method_set_item_metadata();
    return _call_native_mb_no_ret(
      PopupMenu._bindings.method_set_item_metadata,
      this._owner,
      _index, _metadata
    );
    
  }
  set_item_disabled(_index, _disabled) {
    PopupMenu.init_method_set_item_disabled();
    return _call_native_mb_no_ret(
      PopupMenu._bindings.method_set_item_disabled,
      this._owner,
      _index, _disabled
    );
    
  }
  set_item_submenu(_index, _submenu) {
    PopupMenu.init_method_set_item_submenu();
    return _call_native_mb_no_ret(
      PopupMenu._bindings.method_set_item_submenu,
      this._owner,
      _index, _submenu
    );
    
  }
  set_item_submenu_node(_index, _submenu) {
    PopupMenu.init_method_set_item_submenu_node();
    return _call_native_mb_no_ret(
      PopupMenu._bindings.method_set_item_submenu_node,
      this._owner,
      _index, _submenu
    );
    
  }
  set_item_as_separator(_index, _enable) {
    PopupMenu.init_method_set_item_as_separator();
    return _call_native_mb_no_ret(
      PopupMenu._bindings.method_set_item_as_separator,
      this._owner,
      _index, _enable
    );
    
  }
  set_item_as_checkable(_index, _enable) {
    PopupMenu.init_method_set_item_as_checkable();
    return _call_native_mb_no_ret(
      PopupMenu._bindings.method_set_item_as_checkable,
      this._owner,
      _index, _enable
    );
    
  }
  set_item_as_radio_checkable(_index, _enable) {
    PopupMenu.init_method_set_item_as_radio_checkable();
    return _call_native_mb_no_ret(
      PopupMenu._bindings.method_set_item_as_radio_checkable,
      this._owner,
      _index, _enable
    );
    
  }
  set_item_tooltip(_index, _tooltip) {
    PopupMenu.init_method_set_item_tooltip();
    return _call_native_mb_no_ret(
      PopupMenu._bindings.method_set_item_tooltip,
      this._owner,
      _index, _tooltip
    );
    
  }
  set_item_shortcut(_index, _shortcut, _global) {
    PopupMenu.init_method_set_item_shortcut();
    return _call_native_mb_no_ret(
      PopupMenu._bindings.method_set_item_shortcut,
      this._owner,
      _index, _shortcut, _global
    );
    
  }
  set_item_indent(_index, _indent) {
    PopupMenu.init_method_set_item_indent();
    return _call_native_mb_no_ret(
      PopupMenu._bindings.method_set_item_indent,
      this._owner,
      _index, _indent
    );
    
  }
  set_item_multistate(_index, _state) {
    PopupMenu.init_method_set_item_multistate();
    return _call_native_mb_no_ret(
      PopupMenu._bindings.method_set_item_multistate,
      this._owner,
      _index, _state
    );
    
  }
  set_item_multistate_max(_index, _max_states) {
    PopupMenu.init_method_set_item_multistate_max();
    return _call_native_mb_no_ret(
      PopupMenu._bindings.method_set_item_multistate_max,
      this._owner,
      _index, _max_states
    );
    
  }
  set_item_shortcut_disabled(_index, _disabled) {
    PopupMenu.init_method_set_item_shortcut_disabled();
    return _call_native_mb_no_ret(
      PopupMenu._bindings.method_set_item_shortcut_disabled,
      this._owner,
      _index, _disabled
    );
    
  }
  toggle_item_checked(_index) {
    PopupMenu.init_method_toggle_item_checked();
    return _call_native_mb_no_ret(
      PopupMenu._bindings.method_toggle_item_checked,
      this._owner,
      _index
    );
    
  }
  toggle_item_multistate(_index) {
    PopupMenu.init_method_toggle_item_multistate();
    return _call_native_mb_no_ret(
      PopupMenu._bindings.method_toggle_item_multistate,
      this._owner,
      _index
    );
    
  }
  get_item_text(_index) {
    PopupMenu.init_method_get_item_text();
    return _call_native_mb_ret(
      PopupMenu._bindings.method_get_item_text,
      this._owner,
			Variant.Type.STRING,
    
      _index
    );
    
  }
  get_item_text_direction(_index) {
    PopupMenu.init_method_get_item_text_direction();
    return _call_native_mb_ret(
      PopupMenu._bindings.method_get_item_text_direction,
      this._owner,
			Variant.Type.INT,
    
      _index
    );
    
  }
  get_item_language(_index) {
    PopupMenu.init_method_get_item_language();
    return _call_native_mb_ret(
      PopupMenu._bindings.method_get_item_language,
      this._owner,
			Variant.Type.STRING,
    
      _index
    );
    
  }
  get_item_icon(_index) {
    PopupMenu.init_method_get_item_icon();
    return _call_native_mb_ret(
      PopupMenu._bindings.method_get_item_icon,
      this._owner,
			Variant.Type.OBJECT,
      _index
    );
    
  }
  get_item_icon_max_width(_index) {
    PopupMenu.init_method_get_item_icon_max_width();
    return _call_native_mb_ret(
      PopupMenu._bindings.method_get_item_icon_max_width,
      this._owner,
			Variant.Type.INT,
    
      _index
    );
    
  }
  get_item_icon_modulate(_index) {
    PopupMenu.init_method_get_item_icon_modulate();
    return _call_native_mb_ret(
      PopupMenu._bindings.method_get_item_icon_modulate,
      this._owner,
			Variant.Type.COLOR,
    
      _index
    );
    
  }
  is_item_checked(_index) {
    PopupMenu.init_method_is_item_checked();
    return _call_native_mb_ret(
      PopupMenu._bindings.method_is_item_checked,
      this._owner,
			Variant.Type.BOOL,
    
      _index
    );
    
  }
  get_item_id(_index) {
    PopupMenu.init_method_get_item_id();
    return _call_native_mb_ret(
      PopupMenu._bindings.method_get_item_id,
      this._owner,
			Variant.Type.INT,
    
      _index
    );
    
  }
  get_item_index(_id) {
    PopupMenu.init_method_get_item_index();
    return _call_native_mb_ret(
      PopupMenu._bindings.method_get_item_index,
      this._owner,
			Variant.Type.INT,
    
      _id
    );
    
  }
  get_item_accelerator(_index) {
    PopupMenu.init_method_get_item_accelerator();
    return _call_native_mb_ret(
      PopupMenu._bindings.method_get_item_accelerator,
      this._owner,
			Variant.Type.INT,
    
      _index
    );
    
  }
  get_item_metadata(_index) {
    PopupMenu.init_method_get_item_metadata();
    return _call_native_mb_ret(
      PopupMenu._bindings.method_get_item_metadata,
      this._owner,
			Variant.Type.VARIANT,
    
      _index
    );
    
  }
  is_item_disabled(_index) {
    PopupMenu.init_method_is_item_disabled();
    return _call_native_mb_ret(
      PopupMenu._bindings.method_is_item_disabled,
      this._owner,
			Variant.Type.BOOL,
    
      _index
    );
    
  }
  get_item_submenu(_index) {
    PopupMenu.init_method_get_item_submenu();
    return _call_native_mb_ret(
      PopupMenu._bindings.method_get_item_submenu,
      this._owner,
			Variant.Type.STRING,
    
      _index
    );
    
  }
  get_item_submenu_node(_index) {
    PopupMenu.init_method_get_item_submenu_node();
    return _call_native_mb_ret(
      PopupMenu._bindings.method_get_item_submenu_node,
      this._owner,
			Variant.Type.OBJECT,
      _index
    );
    
  }
  is_item_separator(_index) {
    PopupMenu.init_method_is_item_separator();
    return _call_native_mb_ret(
      PopupMenu._bindings.method_is_item_separator,
      this._owner,
			Variant.Type.BOOL,
    
      _index
    );
    
  }
  is_item_checkable(_index) {
    PopupMenu.init_method_is_item_checkable();
    return _call_native_mb_ret(
      PopupMenu._bindings.method_is_item_checkable,
      this._owner,
			Variant.Type.BOOL,
    
      _index
    );
    
  }
  is_item_radio_checkable(_index) {
    PopupMenu.init_method_is_item_radio_checkable();
    return _call_native_mb_ret(
      PopupMenu._bindings.method_is_item_radio_checkable,
      this._owner,
			Variant.Type.BOOL,
    
      _index
    );
    
  }
  is_item_shortcut_disabled(_index) {
    PopupMenu.init_method_is_item_shortcut_disabled();
    return _call_native_mb_ret(
      PopupMenu._bindings.method_is_item_shortcut_disabled,
      this._owner,
			Variant.Type.BOOL,
    
      _index
    );
    
  }
  get_item_tooltip(_index) {
    PopupMenu.init_method_get_item_tooltip();
    return _call_native_mb_ret(
      PopupMenu._bindings.method_get_item_tooltip,
      this._owner,
			Variant.Type.STRING,
    
      _index
    );
    
  }
  get_item_shortcut(_index) {
    PopupMenu.init_method_get_item_shortcut();
    return _call_native_mb_ret(
      PopupMenu._bindings.method_get_item_shortcut,
      this._owner,
			Variant.Type.OBJECT,
      _index
    );
    
  }
  get_item_indent(_index) {
    PopupMenu.init_method_get_item_indent();
    return _call_native_mb_ret(
      PopupMenu._bindings.method_get_item_indent,
      this._owner,
			Variant.Type.INT,
    
      _index
    );
    
  }
  get_item_multistate_max(_index) {
    PopupMenu.init_method_get_item_multistate_max();
    return _call_native_mb_ret(
      PopupMenu._bindings.method_get_item_multistate_max,
      this._owner,
			Variant.Type.INT,
    
      _index
    );
    
  }
  get_item_multistate(_index) {
    PopupMenu.init_method_get_item_multistate();
    return _call_native_mb_ret(
      PopupMenu._bindings.method_get_item_multistate,
      this._owner,
			Variant.Type.INT,
    
      _index
    );
    
  }
  set_focused_item(_index) {
    PopupMenu.init_method_set_focused_item();
    return _call_native_mb_no_ret(
      PopupMenu._bindings.method_set_focused_item,
      this._owner,
      _index
    );
    
  }
  get_focused_item() {
    PopupMenu.init_method_get_focused_item();
    return _call_native_mb_ret(
      PopupMenu._bindings.method_get_focused_item,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_item_count(_count) {
    PopupMenu.init_method_set_item_count();
    return _call_native_mb_no_ret(
      PopupMenu._bindings.method_set_item_count,
      this._owner,
      _count
    );
    
  }
  get_item_count() {
    PopupMenu.init_method_get_item_count();
    return _call_native_mb_ret(
      PopupMenu._bindings.method_get_item_count,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  scroll_to_item(_index) {
    PopupMenu.init_method_scroll_to_item();
    return _call_native_mb_no_ret(
      PopupMenu._bindings.method_scroll_to_item,
      this._owner,
      _index
    );
    
  }
  remove_item(_index) {
    PopupMenu.init_method_remove_item();
    return _call_native_mb_no_ret(
      PopupMenu._bindings.method_remove_item,
      this._owner,
      _index
    );
    
  }
  add_separator(_label, _id) {
    PopupMenu.init_method_add_separator();
    return _call_native_mb_no_ret(
      PopupMenu._bindings.method_add_separator,
      this._owner,
      _label, _id
    );
    
  }
  clear(_free_submenus) {
    PopupMenu.init_method_clear();
    return _call_native_mb_no_ret(
      PopupMenu._bindings.method_clear,
      this._owner,
      _free_submenus
    );
    
  }
  set_hide_on_item_selection(_enable) {
    PopupMenu.init_method_set_hide_on_item_selection();
    return _call_native_mb_no_ret(
      PopupMenu._bindings.method_set_hide_on_item_selection,
      this._owner,
      _enable
    );
    
  }
  is_hide_on_item_selection() {
    PopupMenu.init_method_is_hide_on_item_selection();
    return _call_native_mb_ret(
      PopupMenu._bindings.method_is_hide_on_item_selection,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_hide_on_checkable_item_selection(_enable) {
    PopupMenu.init_method_set_hide_on_checkable_item_selection();
    return _call_native_mb_no_ret(
      PopupMenu._bindings.method_set_hide_on_checkable_item_selection,
      this._owner,
      _enable
    );
    
  }
  is_hide_on_checkable_item_selection() {
    PopupMenu.init_method_is_hide_on_checkable_item_selection();
    return _call_native_mb_ret(
      PopupMenu._bindings.method_is_hide_on_checkable_item_selection,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_hide_on_state_item_selection(_enable) {
    PopupMenu.init_method_set_hide_on_state_item_selection();
    return _call_native_mb_no_ret(
      PopupMenu._bindings.method_set_hide_on_state_item_selection,
      this._owner,
      _enable
    );
    
  }
  is_hide_on_state_item_selection() {
    PopupMenu.init_method_is_hide_on_state_item_selection();
    return _call_native_mb_ret(
      PopupMenu._bindings.method_is_hide_on_state_item_selection,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_submenu_popup_delay(_seconds) {
    PopupMenu.init_method_set_submenu_popup_delay();
    return _call_native_mb_no_ret(
      PopupMenu._bindings.method_set_submenu_popup_delay,
      this._owner,
      _seconds
    );
    
  }
  get_submenu_popup_delay() {
    PopupMenu.init_method_get_submenu_popup_delay();
    return _call_native_mb_ret(
      PopupMenu._bindings.method_get_submenu_popup_delay,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_allow_search(_allow) {
    PopupMenu.init_method_set_allow_search();
    return _call_native_mb_no_ret(
      PopupMenu._bindings.method_set_allow_search,
      this._owner,
      _allow
    );
    
  }
  get_allow_search() {
    PopupMenu.init_method_get_allow_search();
    return _call_native_mb_ret(
      PopupMenu._bindings.method_get_allow_search,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  is_system_menu() {
    PopupMenu.init_method_is_system_menu();
    return _call_native_mb_ret(
      PopupMenu._bindings.method_is_system_menu,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_system_menu(_system_menu_id) {
    PopupMenu.init_method_set_system_menu();
    return _call_native_mb_no_ret(
      PopupMenu._bindings.method_set_system_menu,
      this._owner,
      _system_menu_id
    );
    
  }
  get_system_menu() {
    PopupMenu.init_method_get_system_menu();
    return _call_native_mb_ret(
      PopupMenu._bindings.method_get_system_menu,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  
get hide_on_item_selection () {
  return this.is_hide_on_item_selection();
}
set hide_on_item_selection (new_value) {
  this.set_hide_on_item_selection(new_value);
}
get hide_on_checkable_item_selection () {
  return this.is_hide_on_checkable_item_selection();
}
set hide_on_checkable_item_selection (new_value) {
  this.set_hide_on_checkable_item_selection(new_value);
}
get hide_on_state_item_selection () {
  return this.is_hide_on_state_item_selection();
}
set hide_on_state_item_selection (new_value) {
  this.set_hide_on_state_item_selection(new_value);
}
get submenu_popup_delay () {
  return this.get_submenu_popup_delay();
}
set submenu_popup_delay (new_value) {
  this.set_submenu_popup_delay(new_value);
}
get allow_search () {
  return this.get_allow_search();
}
set allow_search (new_value) {
  this.set_allow_search(new_value);
}
get system_menu_id () {
  return this.get_system_menu();
}
set system_menu_id (new_value) {
  this.set_system_menu(new_value);
}
get prefer_native_menu () {
  return this.is_prefer_native_menu();
}
set prefer_native_menu (new_value) {
  this.set_prefer_native_menu(new_value);
}
get item_count () {
  return this.get_item_count();
}
set item_count (new_value) {
  this.set_item_count(new_value);
}

}