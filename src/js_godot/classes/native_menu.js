import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { GodotObject } from '@js_godot/classes/godot_object'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_has_feature;
  method_has_system_menu;
  method_get_system_menu;
  method_get_system_menu_name;
  method_create_menu;
  method_has_menu;
  method_free_menu;
  method_get_size;
  method_popup;
  method_set_interface_direction;
  method_set_popup_open_callback;
  method_get_popup_open_callback;
  method_set_popup_close_callback;
  method_get_popup_close_callback;
  method_set_minimum_width;
  method_get_minimum_width;
  method_is_opened;
  method_add_submenu_item;
  method_add_item;
  method_add_check_item;
  method_add_icon_item;
  method_add_icon_check_item;
  method_add_radio_check_item;
  method_add_icon_radio_check_item;
  method_add_multistate_item;
  method_add_separator;
  method_find_item_index_with_text;
  method_find_item_index_with_tag;
  method_find_item_index_with_submenu;
  method_is_item_checked;
  method_is_item_checkable;
  method_is_item_radio_checkable;
  method_get_item_callback;
  method_get_item_key_callback;
  method_get_item_tag;
  method_get_item_text;
  method_get_item_submenu;
  method_get_item_accelerator;
  method_is_item_disabled;
  method_is_item_hidden;
  method_get_item_tooltip;
  method_get_item_state;
  method_get_item_max_states;
  method_get_item_icon;
  method_get_item_indentation_level;
  method_set_item_checked;
  method_set_item_checkable;
  method_set_item_radio_checkable;
  method_set_item_callback;
  method_set_item_hover_callbacks;
  method_set_item_key_callback;
  method_set_item_tag;
  method_set_item_text;
  method_set_item_submenu;
  method_set_item_accelerator;
  method_set_item_disabled;
  method_set_item_hidden;
  method_set_item_tooltip;
  method_set_item_state;
  method_set_item_max_states;
  method_set_item_icon;
  method_set_item_indentation_level;
  method_get_item_count;
  method_is_system_menu;
  method_remove_item;
  method_clear;
}class _NativeMenu extends GodotObject{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("NativeMenu");
    } else {
      super(godot_object);
    }
  }
  static init_method_has_feature() {
    if (!this.#_bindings.method_has_feature) {
      let classname = new StringName("NativeMenu");
      let methodname = new StringName("has_feature");
      this.#_bindings.method_has_feature = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1708975490
      );
    }
  }
  static init_method_has_system_menu() {
    if (!this.#_bindings.method_has_system_menu) {
      let classname = new StringName("NativeMenu");
      let methodname = new StringName("has_system_menu");
      this.#_bindings.method_has_system_menu = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        718213027
      );
    }
  }
  static init_method_get_system_menu() {
    if (!this.#_bindings.method_get_system_menu) {
      let classname = new StringName("NativeMenu");
      let methodname = new StringName("get_system_menu");
      this.#_bindings.method_get_system_menu = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        469707506
      );
    }
  }
  static init_method_get_system_menu_name() {
    if (!this.#_bindings.method_get_system_menu_name) {
      let classname = new StringName("NativeMenu");
      let methodname = new StringName("get_system_menu_name");
      this.#_bindings.method_get_system_menu_name = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1281499290
      );
    }
  }
  static init_method_create_menu() {
    if (!this.#_bindings.method_create_menu) {
      let classname = new StringName("NativeMenu");
      let methodname = new StringName("create_menu");
      this.#_bindings.method_create_menu = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        529393457
      );
    }
  }
  static init_method_has_menu() {
    if (!this.#_bindings.method_has_menu) {
      let classname = new StringName("NativeMenu");
      let methodname = new StringName("has_menu");
      this.#_bindings.method_has_menu = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4155700596
      );
    }
  }
  static init_method_free_menu() {
    if (!this.#_bindings.method_free_menu) {
      let classname = new StringName("NativeMenu");
      let methodname = new StringName("free_menu");
      this.#_bindings.method_free_menu = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2722037293
      );
    }
  }
  static init_method_get_size() {
    if (!this.#_bindings.method_get_size) {
      let classname = new StringName("NativeMenu");
      let methodname = new StringName("get_size");
      this.#_bindings.method_get_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2440833711
      );
    }
  }
  static init_method_popup() {
    if (!this.#_bindings.method_popup) {
      let classname = new StringName("NativeMenu");
      let methodname = new StringName("popup");
      this.#_bindings.method_popup = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2450610377
      );
    }
  }
  static init_method_set_interface_direction() {
    if (!this.#_bindings.method_set_interface_direction) {
      let classname = new StringName("NativeMenu");
      let methodname = new StringName("set_interface_direction");
      this.#_bindings.method_set_interface_direction = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1265174801
      );
    }
  }
  static init_method_set_popup_open_callback() {
    if (!this.#_bindings.method_set_popup_open_callback) {
      let classname = new StringName("NativeMenu");
      let methodname = new StringName("set_popup_open_callback");
      this.#_bindings.method_set_popup_open_callback = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3379118538
      );
    }
  }
  static init_method_get_popup_open_callback() {
    if (!this.#_bindings.method_get_popup_open_callback) {
      let classname = new StringName("NativeMenu");
      let methodname = new StringName("get_popup_open_callback");
      this.#_bindings.method_get_popup_open_callback = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3170603026
      );
    }
  }
  static init_method_set_popup_close_callback() {
    if (!this.#_bindings.method_set_popup_close_callback) {
      let classname = new StringName("NativeMenu");
      let methodname = new StringName("set_popup_close_callback");
      this.#_bindings.method_set_popup_close_callback = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3379118538
      );
    }
  }
  static init_method_get_popup_close_callback() {
    if (!this.#_bindings.method_get_popup_close_callback) {
      let classname = new StringName("NativeMenu");
      let methodname = new StringName("get_popup_close_callback");
      this.#_bindings.method_get_popup_close_callback = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3170603026
      );
    }
  }
  static init_method_set_minimum_width() {
    if (!this.#_bindings.method_set_minimum_width) {
      let classname = new StringName("NativeMenu");
      let methodname = new StringName("set_minimum_width");
      this.#_bindings.method_set_minimum_width = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1794382983
      );
    }
  }
  static init_method_get_minimum_width() {
    if (!this.#_bindings.method_get_minimum_width) {
      let classname = new StringName("NativeMenu");
      let methodname = new StringName("get_minimum_width");
      this.#_bindings.method_get_minimum_width = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        866169185
      );
    }
  }
  static init_method_is_opened() {
    if (!this.#_bindings.method_is_opened) {
      let classname = new StringName("NativeMenu");
      let methodname = new StringName("is_opened");
      this.#_bindings.method_is_opened = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4155700596
      );
    }
  }
  static init_method_add_submenu_item() {
    if (!this.#_bindings.method_add_submenu_item) {
      let classname = new StringName("NativeMenu");
      let methodname = new StringName("add_submenu_item");
      this.#_bindings.method_add_submenu_item = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1002030223
      );
    }
  }
  static init_method_add_item() {
    if (!this.#_bindings.method_add_item) {
      let classname = new StringName("NativeMenu");
      let methodname = new StringName("add_item");
      this.#_bindings.method_add_item = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2553375659
      );
    }
  }
  static init_method_add_check_item() {
    if (!this.#_bindings.method_add_check_item) {
      let classname = new StringName("NativeMenu");
      let methodname = new StringName("add_check_item");
      this.#_bindings.method_add_check_item = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2553375659
      );
    }
  }
  static init_method_add_icon_item() {
    if (!this.#_bindings.method_add_icon_item) {
      let classname = new StringName("NativeMenu");
      let methodname = new StringName("add_icon_item");
      this.#_bindings.method_add_icon_item = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2987595282
      );
    }
  }
  static init_method_add_icon_check_item() {
    if (!this.#_bindings.method_add_icon_check_item) {
      let classname = new StringName("NativeMenu");
      let methodname = new StringName("add_icon_check_item");
      this.#_bindings.method_add_icon_check_item = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2987595282
      );
    }
  }
  static init_method_add_radio_check_item() {
    if (!this.#_bindings.method_add_radio_check_item) {
      let classname = new StringName("NativeMenu");
      let methodname = new StringName("add_radio_check_item");
      this.#_bindings.method_add_radio_check_item = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2553375659
      );
    }
  }
  static init_method_add_icon_radio_check_item() {
    if (!this.#_bindings.method_add_icon_radio_check_item) {
      let classname = new StringName("NativeMenu");
      let methodname = new StringName("add_icon_radio_check_item");
      this.#_bindings.method_add_icon_radio_check_item = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2987595282
      );
    }
  }
  static init_method_add_multistate_item() {
    if (!this.#_bindings.method_add_multistate_item) {
      let classname = new StringName("NativeMenu");
      let methodname = new StringName("add_multistate_item");
      this.#_bindings.method_add_multistate_item = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1558592568
      );
    }
  }
  static init_method_add_separator() {
    if (!this.#_bindings.method_add_separator) {
      let classname = new StringName("NativeMenu");
      let methodname = new StringName("add_separator");
      this.#_bindings.method_add_separator = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        448810126
      );
    }
  }
  static init_method_find_item_index_with_text() {
    if (!this.#_bindings.method_find_item_index_with_text) {
      let classname = new StringName("NativeMenu");
      let methodname = new StringName("find_item_index_with_text");
      this.#_bindings.method_find_item_index_with_text = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1362438794
      );
    }
  }
  static init_method_find_item_index_with_tag() {
    if (!this.#_bindings.method_find_item_index_with_tag) {
      let classname = new StringName("NativeMenu");
      let methodname = new StringName("find_item_index_with_tag");
      this.#_bindings.method_find_item_index_with_tag = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1260085030
      );
    }
  }
  static init_method_find_item_index_with_submenu() {
    if (!this.#_bindings.method_find_item_index_with_submenu) {
      let classname = new StringName("NativeMenu");
      let methodname = new StringName("find_item_index_with_submenu");
      this.#_bindings.method_find_item_index_with_submenu = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        893635918
      );
    }
  }
  static init_method_is_item_checked() {
    if (!this.#_bindings.method_is_item_checked) {
      let classname = new StringName("NativeMenu");
      let methodname = new StringName("is_item_checked");
      this.#_bindings.method_is_item_checked = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3120086654
      );
    }
  }
  static init_method_is_item_checkable() {
    if (!this.#_bindings.method_is_item_checkable) {
      let classname = new StringName("NativeMenu");
      let methodname = new StringName("is_item_checkable");
      this.#_bindings.method_is_item_checkable = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3120086654
      );
    }
  }
  static init_method_is_item_radio_checkable() {
    if (!this.#_bindings.method_is_item_radio_checkable) {
      let classname = new StringName("NativeMenu");
      let methodname = new StringName("is_item_radio_checkable");
      this.#_bindings.method_is_item_radio_checkable = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3120086654
      );
    }
  }
  static init_method_get_item_callback() {
    if (!this.#_bindings.method_get_item_callback) {
      let classname = new StringName("NativeMenu");
      let methodname = new StringName("get_item_callback");
      this.#_bindings.method_get_item_callback = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1639989698
      );
    }
  }
  static init_method_get_item_key_callback() {
    if (!this.#_bindings.method_get_item_key_callback) {
      let classname = new StringName("NativeMenu");
      let methodname = new StringName("get_item_key_callback");
      this.#_bindings.method_get_item_key_callback = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1639989698
      );
    }
  }
  static init_method_get_item_tag() {
    if (!this.#_bindings.method_get_item_tag) {
      let classname = new StringName("NativeMenu");
      let methodname = new StringName("get_item_tag");
      this.#_bindings.method_get_item_tag = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4069510997
      );
    }
  }
  static init_method_get_item_text() {
    if (!this.#_bindings.method_get_item_text) {
      let classname = new StringName("NativeMenu");
      let methodname = new StringName("get_item_text");
      this.#_bindings.method_get_item_text = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1464764419
      );
    }
  }
  static init_method_get_item_submenu() {
    if (!this.#_bindings.method_get_item_submenu) {
      let classname = new StringName("NativeMenu");
      let methodname = new StringName("get_item_submenu");
      this.#_bindings.method_get_item_submenu = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1066463050
      );
    }
  }
  static init_method_get_item_accelerator() {
    if (!this.#_bindings.method_get_item_accelerator) {
      let classname = new StringName("NativeMenu");
      let methodname = new StringName("get_item_accelerator");
      this.#_bindings.method_get_item_accelerator = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        316800700
      );
    }
  }
  static init_method_is_item_disabled() {
    if (!this.#_bindings.method_is_item_disabled) {
      let classname = new StringName("NativeMenu");
      let methodname = new StringName("is_item_disabled");
      this.#_bindings.method_is_item_disabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3120086654
      );
    }
  }
  static init_method_is_item_hidden() {
    if (!this.#_bindings.method_is_item_hidden) {
      let classname = new StringName("NativeMenu");
      let methodname = new StringName("is_item_hidden");
      this.#_bindings.method_is_item_hidden = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3120086654
      );
    }
  }
  static init_method_get_item_tooltip() {
    if (!this.#_bindings.method_get_item_tooltip) {
      let classname = new StringName("NativeMenu");
      let methodname = new StringName("get_item_tooltip");
      this.#_bindings.method_get_item_tooltip = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1464764419
      );
    }
  }
  static init_method_get_item_state() {
    if (!this.#_bindings.method_get_item_state) {
      let classname = new StringName("NativeMenu");
      let methodname = new StringName("get_item_state");
      this.#_bindings.method_get_item_state = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1120910005
      );
    }
  }
  static init_method_get_item_max_states() {
    if (!this.#_bindings.method_get_item_max_states) {
      let classname = new StringName("NativeMenu");
      let methodname = new StringName("get_item_max_states");
      this.#_bindings.method_get_item_max_states = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1120910005
      );
    }
  }
  static init_method_get_item_icon() {
    if (!this.#_bindings.method_get_item_icon) {
      let classname = new StringName("NativeMenu");
      let methodname = new StringName("get_item_icon");
      this.#_bindings.method_get_item_icon = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3391850701
      );
    }
  }
  static init_method_get_item_indentation_level() {
    if (!this.#_bindings.method_get_item_indentation_level) {
      let classname = new StringName("NativeMenu");
      let methodname = new StringName("get_item_indentation_level");
      this.#_bindings.method_get_item_indentation_level = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1120910005
      );
    }
  }
  static init_method_set_item_checked() {
    if (!this.#_bindings.method_set_item_checked) {
      let classname = new StringName("NativeMenu");
      let methodname = new StringName("set_item_checked");
      this.#_bindings.method_set_item_checked = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2658558584
      );
    }
  }
  static init_method_set_item_checkable() {
    if (!this.#_bindings.method_set_item_checkable) {
      let classname = new StringName("NativeMenu");
      let methodname = new StringName("set_item_checkable");
      this.#_bindings.method_set_item_checkable = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2658558584
      );
    }
  }
  static init_method_set_item_radio_checkable() {
    if (!this.#_bindings.method_set_item_radio_checkable) {
      let classname = new StringName("NativeMenu");
      let methodname = new StringName("set_item_radio_checkable");
      this.#_bindings.method_set_item_radio_checkable = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2658558584
      );
    }
  }
  static init_method_set_item_callback() {
    if (!this.#_bindings.method_set_item_callback) {
      let classname = new StringName("NativeMenu");
      let methodname = new StringName("set_item_callback");
      this.#_bindings.method_set_item_callback = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2779810226
      );
    }
  }
  static init_method_set_item_hover_callbacks() {
    if (!this.#_bindings.method_set_item_hover_callbacks) {
      let classname = new StringName("NativeMenu");
      let methodname = new StringName("set_item_hover_callbacks");
      this.#_bindings.method_set_item_hover_callbacks = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2779810226
      );
    }
  }
  static init_method_set_item_key_callback() {
    if (!this.#_bindings.method_set_item_key_callback) {
      let classname = new StringName("NativeMenu");
      let methodname = new StringName("set_item_key_callback");
      this.#_bindings.method_set_item_key_callback = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2779810226
      );
    }
  }
  static init_method_set_item_tag() {
    if (!this.#_bindings.method_set_item_tag) {
      let classname = new StringName("NativeMenu");
      let methodname = new StringName("set_item_tag");
      this.#_bindings.method_set_item_tag = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2706844827
      );
    }
  }
  static init_method_set_item_text() {
    if (!this.#_bindings.method_set_item_text) {
      let classname = new StringName("NativeMenu");
      let methodname = new StringName("set_item_text");
      this.#_bindings.method_set_item_text = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4153150897
      );
    }
  }
  static init_method_set_item_submenu() {
    if (!this.#_bindings.method_set_item_submenu) {
      let classname = new StringName("NativeMenu");
      let methodname = new StringName("set_item_submenu");
      this.#_bindings.method_set_item_submenu = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2310537182
      );
    }
  }
  static init_method_set_item_accelerator() {
    if (!this.#_bindings.method_set_item_accelerator) {
      let classname = new StringName("NativeMenu");
      let methodname = new StringName("set_item_accelerator");
      this.#_bindings.method_set_item_accelerator = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        786300043
      );
    }
  }
  static init_method_set_item_disabled() {
    if (!this.#_bindings.method_set_item_disabled) {
      let classname = new StringName("NativeMenu");
      let methodname = new StringName("set_item_disabled");
      this.#_bindings.method_set_item_disabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2658558584
      );
    }
  }
  static init_method_set_item_hidden() {
    if (!this.#_bindings.method_set_item_hidden) {
      let classname = new StringName("NativeMenu");
      let methodname = new StringName("set_item_hidden");
      this.#_bindings.method_set_item_hidden = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2658558584
      );
    }
  }
  static init_method_set_item_tooltip() {
    if (!this.#_bindings.method_set_item_tooltip) {
      let classname = new StringName("NativeMenu");
      let methodname = new StringName("set_item_tooltip");
      this.#_bindings.method_set_item_tooltip = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4153150897
      );
    }
  }
  static init_method_set_item_state() {
    if (!this.#_bindings.method_set_item_state) {
      let classname = new StringName("NativeMenu");
      let methodname = new StringName("set_item_state");
      this.#_bindings.method_set_item_state = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4288446313
      );
    }
  }
  static init_method_set_item_max_states() {
    if (!this.#_bindings.method_set_item_max_states) {
      let classname = new StringName("NativeMenu");
      let methodname = new StringName("set_item_max_states");
      this.#_bindings.method_set_item_max_states = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4288446313
      );
    }
  }
  static init_method_set_item_icon() {
    if (!this.#_bindings.method_set_item_icon) {
      let classname = new StringName("NativeMenu");
      let methodname = new StringName("set_item_icon");
      this.#_bindings.method_set_item_icon = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1388763257
      );
    }
  }
  static init_method_set_item_indentation_level() {
    if (!this.#_bindings.method_set_item_indentation_level) {
      let classname = new StringName("NativeMenu");
      let methodname = new StringName("set_item_indentation_level");
      this.#_bindings.method_set_item_indentation_level = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4288446313
      );
    }
  }
  static init_method_get_item_count() {
    if (!this.#_bindings.method_get_item_count) {
      let classname = new StringName("NativeMenu");
      let methodname = new StringName("get_item_count");
      this.#_bindings.method_get_item_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2198884583
      );
    }
  }
  static init_method_is_system_menu() {
    if (!this.#_bindings.method_is_system_menu) {
      let classname = new StringName("NativeMenu");
      let methodname = new StringName("is_system_menu");
      this.#_bindings.method_is_system_menu = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4155700596
      );
    }
  }
  static init_method_remove_item() {
    if (!this.#_bindings.method_remove_item) {
      let classname = new StringName("NativeMenu");
      let methodname = new StringName("remove_item");
      this.#_bindings.method_remove_item = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3411492887
      );
    }
  }
  static init_method_clear() {
    if (!this.#_bindings.method_clear) {
      let classname = new StringName("NativeMenu");
      let methodname = new StringName("clear");
      this.#_bindings.method_clear = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2722037293
      );
    }
  }

  
  
  has_feature(_feature) {
    NativeMenu.init_method_has_feature();
    return _call_native_mb_ret(
      _NativeMenu.#_bindings.method_has_feature,
      this._owner,
			Variant.Type.BOOL,
    
      _feature
    );
    
  }
  has_system_menu(_menu_id) {
    NativeMenu.init_method_has_system_menu();
    return _call_native_mb_ret(
      _NativeMenu.#_bindings.method_has_system_menu,
      this._owner,
			Variant.Type.BOOL,
    
      _menu_id
    );
    
  }
  get_system_menu(_menu_id) {
    NativeMenu.init_method_get_system_menu();
    return _call_native_mb_ret(
      _NativeMenu.#_bindings.method_get_system_menu,
      this._owner,
			Variant.Type.RID,
    
      _menu_id
    );
    
  }
  get_system_menu_name(_menu_id) {
    NativeMenu.init_method_get_system_menu_name();
    return _call_native_mb_ret(
      _NativeMenu.#_bindings.method_get_system_menu_name,
      this._owner,
			Variant.Type.STRING,
    
      _menu_id
    );
    
  }
  create_menu() {
    NativeMenu.init_method_create_menu();
    return _call_native_mb_ret(
      _NativeMenu.#_bindings.method_create_menu,
      this._owner,
			Variant.Type.RID,
    
      
    );
    
  }
  has_menu(_rid) {
    NativeMenu.init_method_has_menu();
    return _call_native_mb_ret(
      _NativeMenu.#_bindings.method_has_menu,
      this._owner,
			Variant.Type.BOOL,
    
      _rid
    );
    
  }
  free_menu(_rid) {
    NativeMenu.init_method_free_menu();
    return _call_native_mb_no_ret(
      _NativeMenu.#_bindings.method_free_menu,
      this._owner,
      _rid
    );
    
  }
  get_size(_rid) {
    NativeMenu.init_method_get_size();
    return _call_native_mb_ret(
      _NativeMenu.#_bindings.method_get_size,
      this._owner,
			Variant.Type.VECTOR2,
    
      _rid
    );
    
  }
  popup(_rid, _position) {
    NativeMenu.init_method_popup();
    return _call_native_mb_no_ret(
      _NativeMenu.#_bindings.method_popup,
      this._owner,
      _rid, _position
    );
    
  }
  set_interface_direction(_rid, _is_rtl) {
    NativeMenu.init_method_set_interface_direction();
    return _call_native_mb_no_ret(
      _NativeMenu.#_bindings.method_set_interface_direction,
      this._owner,
      _rid, _is_rtl
    );
    
  }
  set_popup_open_callback(_rid, _callback) {
    NativeMenu.init_method_set_popup_open_callback();
    return _call_native_mb_no_ret(
      _NativeMenu.#_bindings.method_set_popup_open_callback,
      this._owner,
      _rid, _callback
    );
    
  }
  get_popup_open_callback(_rid) {
    NativeMenu.init_method_get_popup_open_callback();
    return _call_native_mb_ret(
      _NativeMenu.#_bindings.method_get_popup_open_callback,
      this._owner,
			Variant.Type.CALLABLE,
    
      _rid
    );
    
  }
  set_popup_close_callback(_rid, _callback) {
    NativeMenu.init_method_set_popup_close_callback();
    return _call_native_mb_no_ret(
      _NativeMenu.#_bindings.method_set_popup_close_callback,
      this._owner,
      _rid, _callback
    );
    
  }
  get_popup_close_callback(_rid) {
    NativeMenu.init_method_get_popup_close_callback();
    return _call_native_mb_ret(
      _NativeMenu.#_bindings.method_get_popup_close_callback,
      this._owner,
			Variant.Type.CALLABLE,
    
      _rid
    );
    
  }
  set_minimum_width(_rid, _width) {
    NativeMenu.init_method_set_minimum_width();
    return _call_native_mb_no_ret(
      _NativeMenu.#_bindings.method_set_minimum_width,
      this._owner,
      _rid, _width
    );
    
  }
  get_minimum_width(_rid) {
    NativeMenu.init_method_get_minimum_width();
    return _call_native_mb_ret(
      _NativeMenu.#_bindings.method_get_minimum_width,
      this._owner,
			Variant.Type.FLOAT,
    
      _rid
    );
    
  }
  is_opened(_rid) {
    NativeMenu.init_method_is_opened();
    return _call_native_mb_ret(
      _NativeMenu.#_bindings.method_is_opened,
      this._owner,
			Variant.Type.BOOL,
    
      _rid
    );
    
  }
  add_submenu_item(_rid, _label, _submenu_rid, _tag, _index) {
    NativeMenu.init_method_add_submenu_item();
    return _call_native_mb_ret(
      _NativeMenu.#_bindings.method_add_submenu_item,
      this._owner,
			Variant.Type.INT,
    
      _rid, _label, _submenu_rid, _tag, _index
    );
    
  }
  add_item(_rid, _label, _callback, _key_callback, _tag, _accelerator, _index) {
    NativeMenu.init_method_add_item();
    return _call_native_mb_ret(
      _NativeMenu.#_bindings.method_add_item,
      this._owner,
			Variant.Type.INT,
    
      _rid, _label, _callback, _key_callback, _tag, _accelerator, _index
    );
    
  }
  add_check_item(_rid, _label, _callback, _key_callback, _tag, _accelerator, _index) {
    NativeMenu.init_method_add_check_item();
    return _call_native_mb_ret(
      _NativeMenu.#_bindings.method_add_check_item,
      this._owner,
			Variant.Type.INT,
    
      _rid, _label, _callback, _key_callback, _tag, _accelerator, _index
    );
    
  }
  add_icon_item(_rid, _icon, _label, _callback, _key_callback, _tag, _accelerator, _index) {
    NativeMenu.init_method_add_icon_item();
    return _call_native_mb_ret(
      _NativeMenu.#_bindings.method_add_icon_item,
      this._owner,
			Variant.Type.INT,
    
      _rid, _icon, _label, _callback, _key_callback, _tag, _accelerator, _index
    );
    
  }
  add_icon_check_item(_rid, _icon, _label, _callback, _key_callback, _tag, _accelerator, _index) {
    NativeMenu.init_method_add_icon_check_item();
    return _call_native_mb_ret(
      _NativeMenu.#_bindings.method_add_icon_check_item,
      this._owner,
			Variant.Type.INT,
    
      _rid, _icon, _label, _callback, _key_callback, _tag, _accelerator, _index
    );
    
  }
  add_radio_check_item(_rid, _label, _callback, _key_callback, _tag, _accelerator, _index) {
    NativeMenu.init_method_add_radio_check_item();
    return _call_native_mb_ret(
      _NativeMenu.#_bindings.method_add_radio_check_item,
      this._owner,
			Variant.Type.INT,
    
      _rid, _label, _callback, _key_callback, _tag, _accelerator, _index
    );
    
  }
  add_icon_radio_check_item(_rid, _icon, _label, _callback, _key_callback, _tag, _accelerator, _index) {
    NativeMenu.init_method_add_icon_radio_check_item();
    return _call_native_mb_ret(
      _NativeMenu.#_bindings.method_add_icon_radio_check_item,
      this._owner,
			Variant.Type.INT,
    
      _rid, _icon, _label, _callback, _key_callback, _tag, _accelerator, _index
    );
    
  }
  add_multistate_item(_rid, _label, _max_states, _default_state, _callback, _key_callback, _tag, _accelerator, _index) {
    NativeMenu.init_method_add_multistate_item();
    return _call_native_mb_ret(
      _NativeMenu.#_bindings.method_add_multistate_item,
      this._owner,
			Variant.Type.INT,
    
      _rid, _label, _max_states, _default_state, _callback, _key_callback, _tag, _accelerator, _index
    );
    
  }
  add_separator(_rid, _index) {
    NativeMenu.init_method_add_separator();
    return _call_native_mb_ret(
      _NativeMenu.#_bindings.method_add_separator,
      this._owner,
			Variant.Type.INT,
    
      _rid, _index
    );
    
  }
  find_item_index_with_text(_rid, _text) {
    NativeMenu.init_method_find_item_index_with_text();
    return _call_native_mb_ret(
      _NativeMenu.#_bindings.method_find_item_index_with_text,
      this._owner,
			Variant.Type.INT,
    
      _rid, _text
    );
    
  }
  find_item_index_with_tag(_rid, _tag) {
    NativeMenu.init_method_find_item_index_with_tag();
    return _call_native_mb_ret(
      _NativeMenu.#_bindings.method_find_item_index_with_tag,
      this._owner,
			Variant.Type.INT,
    
      _rid, _tag
    );
    
  }
  find_item_index_with_submenu(_rid, _submenu_rid) {
    NativeMenu.init_method_find_item_index_with_submenu();
    return _call_native_mb_ret(
      _NativeMenu.#_bindings.method_find_item_index_with_submenu,
      this._owner,
			Variant.Type.INT,
    
      _rid, _submenu_rid
    );
    
  }
  is_item_checked(_rid, _idx) {
    NativeMenu.init_method_is_item_checked();
    return _call_native_mb_ret(
      _NativeMenu.#_bindings.method_is_item_checked,
      this._owner,
			Variant.Type.BOOL,
    
      _rid, _idx
    );
    
  }
  is_item_checkable(_rid, _idx) {
    NativeMenu.init_method_is_item_checkable();
    return _call_native_mb_ret(
      _NativeMenu.#_bindings.method_is_item_checkable,
      this._owner,
			Variant.Type.BOOL,
    
      _rid, _idx
    );
    
  }
  is_item_radio_checkable(_rid, _idx) {
    NativeMenu.init_method_is_item_radio_checkable();
    return _call_native_mb_ret(
      _NativeMenu.#_bindings.method_is_item_radio_checkable,
      this._owner,
			Variant.Type.BOOL,
    
      _rid, _idx
    );
    
  }
  get_item_callback(_rid, _idx) {
    NativeMenu.init_method_get_item_callback();
    return _call_native_mb_ret(
      _NativeMenu.#_bindings.method_get_item_callback,
      this._owner,
			Variant.Type.CALLABLE,
    
      _rid, _idx
    );
    
  }
  get_item_key_callback(_rid, _idx) {
    NativeMenu.init_method_get_item_key_callback();
    return _call_native_mb_ret(
      _NativeMenu.#_bindings.method_get_item_key_callback,
      this._owner,
			Variant.Type.CALLABLE,
    
      _rid, _idx
    );
    
  }
  get_item_tag(_rid, _idx) {
    NativeMenu.init_method_get_item_tag();
    return _call_native_mb_ret(
      _NativeMenu.#_bindings.method_get_item_tag,
      this._owner,
			Variant.Type.VARIANT,
    
      _rid, _idx
    );
    
  }
  get_item_text(_rid, _idx) {
    NativeMenu.init_method_get_item_text();
    return _call_native_mb_ret(
      _NativeMenu.#_bindings.method_get_item_text,
      this._owner,
			Variant.Type.STRING,
    
      _rid, _idx
    );
    
  }
  get_item_submenu(_rid, _idx) {
    NativeMenu.init_method_get_item_submenu();
    return _call_native_mb_ret(
      _NativeMenu.#_bindings.method_get_item_submenu,
      this._owner,
			Variant.Type.RID,
    
      _rid, _idx
    );
    
  }
  get_item_accelerator(_rid, _idx) {
    NativeMenu.init_method_get_item_accelerator();
    return _call_native_mb_ret(
      _NativeMenu.#_bindings.method_get_item_accelerator,
      this._owner,
			Variant.Type.INT,
    
      _rid, _idx
    );
    
  }
  is_item_disabled(_rid, _idx) {
    NativeMenu.init_method_is_item_disabled();
    return _call_native_mb_ret(
      _NativeMenu.#_bindings.method_is_item_disabled,
      this._owner,
			Variant.Type.BOOL,
    
      _rid, _idx
    );
    
  }
  is_item_hidden(_rid, _idx) {
    NativeMenu.init_method_is_item_hidden();
    return _call_native_mb_ret(
      _NativeMenu.#_bindings.method_is_item_hidden,
      this._owner,
			Variant.Type.BOOL,
    
      _rid, _idx
    );
    
  }
  get_item_tooltip(_rid, _idx) {
    NativeMenu.init_method_get_item_tooltip();
    return _call_native_mb_ret(
      _NativeMenu.#_bindings.method_get_item_tooltip,
      this._owner,
			Variant.Type.STRING,
    
      _rid, _idx
    );
    
  }
  get_item_state(_rid, _idx) {
    NativeMenu.init_method_get_item_state();
    return _call_native_mb_ret(
      _NativeMenu.#_bindings.method_get_item_state,
      this._owner,
			Variant.Type.INT,
    
      _rid, _idx
    );
    
  }
  get_item_max_states(_rid, _idx) {
    NativeMenu.init_method_get_item_max_states();
    return _call_native_mb_ret(
      _NativeMenu.#_bindings.method_get_item_max_states,
      this._owner,
			Variant.Type.INT,
    
      _rid, _idx
    );
    
  }
  get_item_icon(_rid, _idx) {
    NativeMenu.init_method_get_item_icon();
    return _call_native_mb_ret(
      _NativeMenu.#_bindings.method_get_item_icon,
      this._owner,
			Variant.Type.OBJECT,
      _rid, _idx
    );
    
  }
  get_item_indentation_level(_rid, _idx) {
    NativeMenu.init_method_get_item_indentation_level();
    return _call_native_mb_ret(
      _NativeMenu.#_bindings.method_get_item_indentation_level,
      this._owner,
			Variant.Type.INT,
    
      _rid, _idx
    );
    
  }
  set_item_checked(_rid, _idx, _checked) {
    NativeMenu.init_method_set_item_checked();
    return _call_native_mb_no_ret(
      _NativeMenu.#_bindings.method_set_item_checked,
      this._owner,
      _rid, _idx, _checked
    );
    
  }
  set_item_checkable(_rid, _idx, _checkable) {
    NativeMenu.init_method_set_item_checkable();
    return _call_native_mb_no_ret(
      _NativeMenu.#_bindings.method_set_item_checkable,
      this._owner,
      _rid, _idx, _checkable
    );
    
  }
  set_item_radio_checkable(_rid, _idx, _checkable) {
    NativeMenu.init_method_set_item_radio_checkable();
    return _call_native_mb_no_ret(
      _NativeMenu.#_bindings.method_set_item_radio_checkable,
      this._owner,
      _rid, _idx, _checkable
    );
    
  }
  set_item_callback(_rid, _idx, _callback) {
    NativeMenu.init_method_set_item_callback();
    return _call_native_mb_no_ret(
      _NativeMenu.#_bindings.method_set_item_callback,
      this._owner,
      _rid, _idx, _callback
    );
    
  }
  set_item_hover_callbacks(_rid, _idx, _callback) {
    NativeMenu.init_method_set_item_hover_callbacks();
    return _call_native_mb_no_ret(
      _NativeMenu.#_bindings.method_set_item_hover_callbacks,
      this._owner,
      _rid, _idx, _callback
    );
    
  }
  set_item_key_callback(_rid, _idx, _key_callback) {
    NativeMenu.init_method_set_item_key_callback();
    return _call_native_mb_no_ret(
      _NativeMenu.#_bindings.method_set_item_key_callback,
      this._owner,
      _rid, _idx, _key_callback
    );
    
  }
  set_item_tag(_rid, _idx, _tag) {
    NativeMenu.init_method_set_item_tag();
    return _call_native_mb_no_ret(
      _NativeMenu.#_bindings.method_set_item_tag,
      this._owner,
      _rid, _idx, _tag
    );
    
  }
  set_item_text(_rid, _idx, _text) {
    NativeMenu.init_method_set_item_text();
    return _call_native_mb_no_ret(
      _NativeMenu.#_bindings.method_set_item_text,
      this._owner,
      _rid, _idx, _text
    );
    
  }
  set_item_submenu(_rid, _idx, _submenu_rid) {
    NativeMenu.init_method_set_item_submenu();
    return _call_native_mb_no_ret(
      _NativeMenu.#_bindings.method_set_item_submenu,
      this._owner,
      _rid, _idx, _submenu_rid
    );
    
  }
  set_item_accelerator(_rid, _idx, _keycode) {
    NativeMenu.init_method_set_item_accelerator();
    return _call_native_mb_no_ret(
      _NativeMenu.#_bindings.method_set_item_accelerator,
      this._owner,
      _rid, _idx, _keycode
    );
    
  }
  set_item_disabled(_rid, _idx, _disabled) {
    NativeMenu.init_method_set_item_disabled();
    return _call_native_mb_no_ret(
      _NativeMenu.#_bindings.method_set_item_disabled,
      this._owner,
      _rid, _idx, _disabled
    );
    
  }
  set_item_hidden(_rid, _idx, _hidden) {
    NativeMenu.init_method_set_item_hidden();
    return _call_native_mb_no_ret(
      _NativeMenu.#_bindings.method_set_item_hidden,
      this._owner,
      _rid, _idx, _hidden
    );
    
  }
  set_item_tooltip(_rid, _idx, _tooltip) {
    NativeMenu.init_method_set_item_tooltip();
    return _call_native_mb_no_ret(
      _NativeMenu.#_bindings.method_set_item_tooltip,
      this._owner,
      _rid, _idx, _tooltip
    );
    
  }
  set_item_state(_rid, _idx, _state) {
    NativeMenu.init_method_set_item_state();
    return _call_native_mb_no_ret(
      _NativeMenu.#_bindings.method_set_item_state,
      this._owner,
      _rid, _idx, _state
    );
    
  }
  set_item_max_states(_rid, _idx, _max_states) {
    NativeMenu.init_method_set_item_max_states();
    return _call_native_mb_no_ret(
      _NativeMenu.#_bindings.method_set_item_max_states,
      this._owner,
      _rid, _idx, _max_states
    );
    
  }
  set_item_icon(_rid, _idx, _icon) {
    NativeMenu.init_method_set_item_icon();
    return _call_native_mb_no_ret(
      _NativeMenu.#_bindings.method_set_item_icon,
      this._owner,
      _rid, _idx, _icon
    );
    
  }
  set_item_indentation_level(_rid, _idx, _level) {
    NativeMenu.init_method_set_item_indentation_level();
    return _call_native_mb_no_ret(
      _NativeMenu.#_bindings.method_set_item_indentation_level,
      this._owner,
      _rid, _idx, _level
    );
    
  }
  get_item_count(_rid) {
    NativeMenu.init_method_get_item_count();
    return _call_native_mb_ret(
      _NativeMenu.#_bindings.method_get_item_count,
      this._owner,
			Variant.Type.INT,
    
      _rid
    );
    
  }
  is_system_menu(_rid) {
    NativeMenu.init_method_is_system_menu();
    return _call_native_mb_ret(
      _NativeMenu.#_bindings.method_is_system_menu,
      this._owner,
			Variant.Type.BOOL,
    
      _rid
    );
    
  }
  remove_item(_rid, _idx) {
    NativeMenu.init_method_remove_item();
    return _call_native_mb_no_ret(
      _NativeMenu.#_bindings.method_remove_item,
      this._owner,
      _rid, _idx
    );
    
  }
  clear(_rid) {
    NativeMenu.init_method_clear();
    return _call_native_mb_no_ret(
      _NativeMenu.#_bindings.method_clear,
      this._owner,
      _rid
    );
    
  }
  

  static Feature = {
    FEATURE_GLOBAL_MENU: 0,
    FEATURE_POPUP_MENU: 1,
    FEATURE_OPEN_CLOSE_CALLBACK: 2,
    FEATURE_HOVER_CALLBACK: 3,
    FEATURE_KEY_CALLBACK: 4,
  }
  static SystemMenus = {
    INVALID_MENU_ID: 0,
    MAIN_MENU_ID: 1,
    APPLICATION_MENU_ID: 2,
    WINDOW_MENU_ID: 3,
    HELP_MENU_ID: 4,
    DOCK_MENU_ID: 5,
  }
}
export const NativeMenu = (function () {
  let _instance;
  function create_instance() {
    return new _NativeMenu();
  }
  return {
    instance: function () {
      if (!_instance) {
        _instance = create_instance();
      }
      return _instance;
    },
  };
})();