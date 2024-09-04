import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { GDString } from '@js_godot/variant/gd_string'
import { Color } from '@js_godot/variant/color'
import { Popup } from '@js_godot/classes/popup'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

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
export class PopupMenu extends Popup{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("PopupMenu");
    } else {
      super(godot_object);
    }
  }
  
  static async _init_bindings() {
    if (this.#initialized) {
      return;
    }
    this.#initialized = true;
    {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("activate_item_by_event");
      this._bindings.method_activate_item_by_event = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3716412023
      );
    }
    {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("set_prefer_native_menu");
      this._bindings.method_set_prefer_native_menu = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("is_prefer_native_menu");
      this._bindings.method_is_prefer_native_menu = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("is_native_menu");
      this._bindings.method_is_native_menu = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("add_item");
      this._bindings.method_add_item = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3674230041
      );
    }
    {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("add_icon_item");
      this._bindings.method_add_icon_item = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1086190128
      );
    }
    {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("add_check_item");
      this._bindings.method_add_check_item = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3674230041
      );
    }
    {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("add_icon_check_item");
      this._bindings.method_add_icon_check_item = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1086190128
      );
    }
    {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("add_radio_check_item");
      this._bindings.method_add_radio_check_item = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3674230041
      );
    }
    {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("add_icon_radio_check_item");
      this._bindings.method_add_icon_radio_check_item = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1086190128
      );
    }
    {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("add_multistate_item");
      this._bindings.method_add_multistate_item = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        150780458
      );
    }
    {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("add_shortcut");
      this._bindings.method_add_shortcut = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3451850107
      );
    }
    {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("add_icon_shortcut");
      this._bindings.method_add_icon_shortcut = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2997871092
      );
    }
    {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("add_check_shortcut");
      this._bindings.method_add_check_shortcut = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1642193386
      );
    }
    {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("add_icon_check_shortcut");
      this._bindings.method_add_icon_check_shortcut = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3856247530
      );
    }
    {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("add_radio_check_shortcut");
      this._bindings.method_add_radio_check_shortcut = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1642193386
      );
    }
    {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("add_icon_radio_check_shortcut");
      this._bindings.method_add_icon_radio_check_shortcut = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3856247530
      );
    }
    {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("add_submenu_item");
      this._bindings.method_add_submenu_item = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2979222410
      );
    }
    {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("add_submenu_node_item");
      this._bindings.method_add_submenu_node_item = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1325455216
      );
    }
    {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("set_item_text");
      this._bindings.method_set_item_text = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        501894301
      );
    }
    {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("set_item_text_direction");
      this._bindings.method_set_item_text_direction = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1707680378
      );
    }
    {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("set_item_language");
      this._bindings.method_set_item_language = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        501894301
      );
    }
    {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("set_item_icon");
      this._bindings.method_set_item_icon = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        666127730
      );
    }
    {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("set_item_icon_max_width");
      this._bindings.method_set_item_icon_max_width = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3937882851
      );
    }
    {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("set_item_icon_modulate");
      this._bindings.method_set_item_icon_modulate = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2878471219
      );
    }
    {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("set_item_checked");
      this._bindings.method_set_item_checked = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        300928843
      );
    }
    {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("set_item_id");
      this._bindings.method_set_item_id = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3937882851
      );
    }
    {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("set_item_accelerator");
      this._bindings.method_set_item_accelerator = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2992817551
      );
    }
    {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("set_item_metadata");
      this._bindings.method_set_item_metadata = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2152698145
      );
    }
    {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("set_item_disabled");
      this._bindings.method_set_item_disabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        300928843
      );
    }
    {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("set_item_submenu");
      this._bindings.method_set_item_submenu = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        501894301
      );
    }
    {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("set_item_submenu_node");
      this._bindings.method_set_item_submenu_node = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1068370740
      );
    }
    {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("set_item_as_separator");
      this._bindings.method_set_item_as_separator = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        300928843
      );
    }
    {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("set_item_as_checkable");
      this._bindings.method_set_item_as_checkable = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        300928843
      );
    }
    {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("set_item_as_radio_checkable");
      this._bindings.method_set_item_as_radio_checkable = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        300928843
      );
    }
    {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("set_item_tooltip");
      this._bindings.method_set_item_tooltip = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        501894301
      );
    }
    {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("set_item_shortcut");
      this._bindings.method_set_item_shortcut = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        825127832
      );
    }
    {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("set_item_indent");
      this._bindings.method_set_item_indent = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3937882851
      );
    }
    {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("set_item_multistate");
      this._bindings.method_set_item_multistate = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3937882851
      );
    }
    {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("set_item_multistate_max");
      this._bindings.method_set_item_multistate_max = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3937882851
      );
    }
    {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("set_item_shortcut_disabled");
      this._bindings.method_set_item_shortcut_disabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        300928843
      );
    }
    {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("toggle_item_checked");
      this._bindings.method_toggle_item_checked = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("toggle_item_multistate");
      this._bindings.method_toggle_item_multistate = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("get_item_text");
      this._bindings.method_get_item_text = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        844755477
      );
    }
    {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("get_item_text_direction");
      this._bindings.method_get_item_text_direction = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4235602388
      );
    }
    {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("get_item_language");
      this._bindings.method_get_item_language = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        844755477
      );
    }
    {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("get_item_icon");
      this._bindings.method_get_item_icon = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3536238170
      );
    }
    {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("get_item_icon_max_width");
      this._bindings.method_get_item_icon_max_width = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        923996154
      );
    }
    {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("get_item_icon_modulate");
      this._bindings.method_get_item_icon_modulate = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3457211756
      );
    }
    {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("is_item_checked");
      this._bindings.method_is_item_checked = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1116898809
      );
    }
    {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("get_item_id");
      this._bindings.method_get_item_id = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        923996154
      );
    }
    {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("get_item_index");
      this._bindings.method_get_item_index = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        923996154
      );
    }
    {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("get_item_accelerator");
      this._bindings.method_get_item_accelerator = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        253789942
      );
    }
    {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("get_item_metadata");
      this._bindings.method_get_item_metadata = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4227898402
      );
    }
    {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("is_item_disabled");
      this._bindings.method_is_item_disabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1116898809
      );
    }
    {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("get_item_submenu");
      this._bindings.method_get_item_submenu = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        844755477
      );
    }
    {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("get_item_submenu_node");
      this._bindings.method_get_item_submenu_node = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2100501353
      );
    }
    {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("is_item_separator");
      this._bindings.method_is_item_separator = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1116898809
      );
    }
    {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("is_item_checkable");
      this._bindings.method_is_item_checkable = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1116898809
      );
    }
    {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("is_item_radio_checkable");
      this._bindings.method_is_item_radio_checkable = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1116898809
      );
    }
    {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("is_item_shortcut_disabled");
      this._bindings.method_is_item_shortcut_disabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1116898809
      );
    }
    {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("get_item_tooltip");
      this._bindings.method_get_item_tooltip = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        844755477
      );
    }
    {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("get_item_shortcut");
      this._bindings.method_get_item_shortcut = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1449483325
      );
    }
    {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("get_item_indent");
      this._bindings.method_get_item_indent = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        923996154
      );
    }
    {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("get_item_multistate_max");
      this._bindings.method_get_item_multistate_max = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        923996154
      );
    }
    {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("get_item_multistate");
      this._bindings.method_get_item_multistate = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        923996154
      );
    }
    {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("set_focused_item");
      this._bindings.method_set_focused_item = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("get_focused_item");
      this._bindings.method_get_focused_item = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("set_item_count");
      this._bindings.method_set_item_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("get_item_count");
      this._bindings.method_get_item_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("scroll_to_item");
      this._bindings.method_scroll_to_item = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("remove_item");
      this._bindings.method_remove_item = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("add_separator");
      this._bindings.method_add_separator = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2266703459
      );
    }
    {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("clear");
      this._bindings.method_clear = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        107499316
      );
    }
    {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("set_hide_on_item_selection");
      this._bindings.method_set_hide_on_item_selection = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("is_hide_on_item_selection");
      this._bindings.method_is_hide_on_item_selection = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("set_hide_on_checkable_item_selection");
      this._bindings.method_set_hide_on_checkable_item_selection = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("is_hide_on_checkable_item_selection");
      this._bindings.method_is_hide_on_checkable_item_selection = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("set_hide_on_state_item_selection");
      this._bindings.method_set_hide_on_state_item_selection = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("is_hide_on_state_item_selection");
      this._bindings.method_is_hide_on_state_item_selection = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("set_submenu_popup_delay");
      this._bindings.method_set_submenu_popup_delay = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("get_submenu_popup_delay");
      this._bindings.method_get_submenu_popup_delay = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("set_allow_search");
      this._bindings.method_set_allow_search = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("get_allow_search");
      this._bindings.method_get_allow_search = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("is_system_menu");
      this._bindings.method_is_system_menu = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("PopupMenu");
      let methodname = new StringName("set_system_menu");
      this._bindings.method_set_system_menu = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        600639674
      );
    }
    {
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
    return _call_native_mb_ret(
      ClassDB._bindings.method_activate_item_by_event,
      this._owner,
			Variant.Type.BOOL,
      _event, _for_global_only
    );
    
  }
  set_prefer_native_menu(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_prefer_native_menu,
      this._owner,
      _enabled
    );
    
  }
  is_prefer_native_menu() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_prefer_native_menu,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  is_native_menu() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_native_menu,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  add_item(_label, _id, _accel) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_item,
      this._owner,
      _label, _id, _accel
    );
    
  }
  add_icon_item(_texture, _label, _id, _accel) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_icon_item,
      this._owner,
      _texture, _label, _id, _accel
    );
    
  }
  add_check_item(_label, _id, _accel) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_check_item,
      this._owner,
      _label, _id, _accel
    );
    
  }
  add_icon_check_item(_texture, _label, _id, _accel) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_icon_check_item,
      this._owner,
      _texture, _label, _id, _accel
    );
    
  }
  add_radio_check_item(_label, _id, _accel) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_radio_check_item,
      this._owner,
      _label, _id, _accel
    );
    
  }
  add_icon_radio_check_item(_texture, _label, _id, _accel) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_icon_radio_check_item,
      this._owner,
      _texture, _label, _id, _accel
    );
    
  }
  add_multistate_item(_label, _max_states, _default_state, _id, _accel) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_multistate_item,
      this._owner,
      _label, _max_states, _default_state, _id, _accel
    );
    
  }
  add_shortcut(_shortcut, _id, _global, _allow_echo) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_shortcut,
      this._owner,
      _shortcut, _id, _global, _allow_echo
    );
    
  }
  add_icon_shortcut(_texture, _shortcut, _id, _global, _allow_echo) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_icon_shortcut,
      this._owner,
      _texture, _shortcut, _id, _global, _allow_echo
    );
    
  }
  add_check_shortcut(_shortcut, _id, _global) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_check_shortcut,
      this._owner,
      _shortcut, _id, _global
    );
    
  }
  add_icon_check_shortcut(_texture, _shortcut, _id, _global) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_icon_check_shortcut,
      this._owner,
      _texture, _shortcut, _id, _global
    );
    
  }
  add_radio_check_shortcut(_shortcut, _id, _global) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_radio_check_shortcut,
      this._owner,
      _shortcut, _id, _global
    );
    
  }
  add_icon_radio_check_shortcut(_texture, _shortcut, _id, _global) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_icon_radio_check_shortcut,
      this._owner,
      _texture, _shortcut, _id, _global
    );
    
  }
  add_submenu_item(_label, _submenu, _id) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_submenu_item,
      this._owner,
      _label, _submenu, _id
    );
    
  }
  add_submenu_node_item(_label, _submenu, _id) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_submenu_node_item,
      this._owner,
      _label, _submenu, _id
    );
    
  }
  set_item_text(_index, _text) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_item_text,
      this._owner,
      _index, _text
    );
    
  }
  set_item_text_direction(_index, _direction) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_item_text_direction,
      this._owner,
      _index, _direction
    );
    
  }
  set_item_language(_index, _language) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_item_language,
      this._owner,
      _index, _language
    );
    
  }
  set_item_icon(_index, _icon) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_item_icon,
      this._owner,
      _index, _icon
    );
    
  }
  set_item_icon_max_width(_index, _width) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_item_icon_max_width,
      this._owner,
      _index, _width
    );
    
  }
  set_item_icon_modulate(_index, _modulate) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_item_icon_modulate,
      this._owner,
      _index, _modulate
    );
    
  }
  set_item_checked(_index, _checked) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_item_checked,
      this._owner,
      _index, _checked
    );
    
  }
  set_item_id(_index, _id) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_item_id,
      this._owner,
      _index, _id
    );
    
  }
  set_item_accelerator(_index, _accel) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_item_accelerator,
      this._owner,
      _index, _accel
    );
    
  }
  set_item_metadata(_index, _metadata) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_item_metadata,
      this._owner,
      _index, _metadata
    );
    
  }
  set_item_disabled(_index, _disabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_item_disabled,
      this._owner,
      _index, _disabled
    );
    
  }
  set_item_submenu(_index, _submenu) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_item_submenu,
      this._owner,
      _index, _submenu
    );
    
  }
  set_item_submenu_node(_index, _submenu) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_item_submenu_node,
      this._owner,
      _index, _submenu
    );
    
  }
  set_item_as_separator(_index, _enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_item_as_separator,
      this._owner,
      _index, _enable
    );
    
  }
  set_item_as_checkable(_index, _enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_item_as_checkable,
      this._owner,
      _index, _enable
    );
    
  }
  set_item_as_radio_checkable(_index, _enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_item_as_radio_checkable,
      this._owner,
      _index, _enable
    );
    
  }
  set_item_tooltip(_index, _tooltip) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_item_tooltip,
      this._owner,
      _index, _tooltip
    );
    
  }
  set_item_shortcut(_index, _shortcut, _global) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_item_shortcut,
      this._owner,
      _index, _shortcut, _global
    );
    
  }
  set_item_indent(_index, _indent) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_item_indent,
      this._owner,
      _index, _indent
    );
    
  }
  set_item_multistate(_index, _state) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_item_multistate,
      this._owner,
      _index, _state
    );
    
  }
  set_item_multistate_max(_index, _max_states) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_item_multistate_max,
      this._owner,
      _index, _max_states
    );
    
  }
  set_item_shortcut_disabled(_index, _disabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_item_shortcut_disabled,
      this._owner,
      _index, _disabled
    );
    
  }
  toggle_item_checked(_index) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_toggle_item_checked,
      this._owner,
      _index
    );
    
  }
  toggle_item_multistate(_index) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_toggle_item_multistate,
      this._owner,
      _index
    );
    
  }
  get_item_text(_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_item_text,
      this._owner,
			Variant.Type.STRING,
    
      _index
    );
    
  }
  get_item_text_direction(_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_item_text_direction,
      this._owner,
			Variant.INT,
      _index
    );
    
  }
  get_item_language(_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_item_language,
      this._owner,
			Variant.Type.STRING,
    
      _index
    );
    
  }
  get_item_icon(_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_item_icon,
      this._owner,
			Variant.INT,
      _index
    );
    
  }
  get_item_icon_max_width(_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_item_icon_max_width,
      this._owner,
			Variant.Type.INT,
      _index
    );
    
  }
  get_item_icon_modulate(_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_item_icon_modulate,
      this._owner,
			Variant.Type.COLOR,
    
      _index
    );
    
  }
  is_item_checked(_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_item_checked,
      this._owner,
			Variant.Type.BOOL,
      _index
    );
    
  }
  get_item_id(_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_item_id,
      this._owner,
			Variant.Type.INT,
      _index
    );
    
  }
  get_item_index(_id) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_item_index,
      this._owner,
			Variant.Type.INT,
      _id
    );
    
  }
  get_item_accelerator(_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_item_accelerator,
      this._owner,
			Variant.INT,
      _index
    );
    
  }
  get_item_metadata(_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_item_metadata,
      this._owner,
			Variant.Type.VARIANT,
    
      _index
    );
    
  }
  is_item_disabled(_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_item_disabled,
      this._owner,
			Variant.Type.BOOL,
      _index
    );
    
  }
  get_item_submenu(_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_item_submenu,
      this._owner,
			Variant.Type.STRING,
    
      _index
    );
    
  }
  get_item_submenu_node(_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_item_submenu_node,
      this._owner,
			Variant.INT,
      _index
    );
    
  }
  is_item_separator(_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_item_separator,
      this._owner,
			Variant.Type.BOOL,
      _index
    );
    
  }
  is_item_checkable(_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_item_checkable,
      this._owner,
			Variant.Type.BOOL,
      _index
    );
    
  }
  is_item_radio_checkable(_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_item_radio_checkable,
      this._owner,
			Variant.Type.BOOL,
      _index
    );
    
  }
  is_item_shortcut_disabled(_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_item_shortcut_disabled,
      this._owner,
			Variant.Type.BOOL,
      _index
    );
    
  }
  get_item_tooltip(_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_item_tooltip,
      this._owner,
			Variant.Type.STRING,
    
      _index
    );
    
  }
  get_item_shortcut(_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_item_shortcut,
      this._owner,
			Variant.INT,
      _index
    );
    
  }
  get_item_indent(_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_item_indent,
      this._owner,
			Variant.Type.INT,
      _index
    );
    
  }
  get_item_multistate_max(_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_item_multistate_max,
      this._owner,
			Variant.Type.INT,
      _index
    );
    
  }
  get_item_multistate(_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_item_multistate,
      this._owner,
			Variant.Type.INT,
      _index
    );
    
  }
  set_focused_item(_index) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_focused_item,
      this._owner,
      _index
    );
    
  }
  get_focused_item() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_focused_item,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_item_count(_count) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_item_count,
      this._owner,
      _count
    );
    
  }
  get_item_count() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_item_count,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  scroll_to_item(_index) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_scroll_to_item,
      this._owner,
      _index
    );
    
  }
  remove_item(_index) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_remove_item,
      this._owner,
      _index
    );
    
  }
  add_separator(_label, _id) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_separator,
      this._owner,
      _label, _id
    );
    
  }
  clear(_free_submenus) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_clear,
      this._owner,
      _free_submenus
    );
    
  }
  set_hide_on_item_selection(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_hide_on_item_selection,
      this._owner,
      _enable
    );
    
  }
  is_hide_on_item_selection() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_hide_on_item_selection,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_hide_on_checkable_item_selection(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_hide_on_checkable_item_selection,
      this._owner,
      _enable
    );
    
  }
  is_hide_on_checkable_item_selection() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_hide_on_checkable_item_selection,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_hide_on_state_item_selection(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_hide_on_state_item_selection,
      this._owner,
      _enable
    );
    
  }
  is_hide_on_state_item_selection() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_hide_on_state_item_selection,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_submenu_popup_delay(_seconds) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_submenu_popup_delay,
      this._owner,
      _seconds
    );
    
  }
  get_submenu_popup_delay() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_submenu_popup_delay,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_allow_search(_allow) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_allow_search,
      this._owner,
      _allow
    );
    
  }
  get_allow_search() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_allow_search,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  is_system_menu() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_system_menu,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_system_menu(_system_menu_id) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_system_menu,
      this._owner,
      _system_menu_id
    );
    
  }
  get_system_menu() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_system_menu,
      this._owner,
			Variant.INT,
      
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


  static {
    this._init_bindings();
  }
}