import * as internal from '__internal__';
import { GDArray } from '@js_godot/variant/gd_array'
import { GodotObject } from '@js_godot/classes/godot_object'
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
  method_has_feature;
  method_get_name;
  method_help_set_search_callbacks;
  method_global_menu_set_popup_callbacks;
  method_global_menu_add_submenu_item;
  method_global_menu_add_item;
  method_global_menu_add_check_item;
  method_global_menu_add_icon_item;
  method_global_menu_add_icon_check_item;
  method_global_menu_add_radio_check_item;
  method_global_menu_add_icon_radio_check_item;
  method_global_menu_add_multistate_item;
  method_global_menu_add_separator;
  method_global_menu_get_item_index_from_text;
  method_global_menu_get_item_index_from_tag;
  method_global_menu_is_item_checked;
  method_global_menu_is_item_checkable;
  method_global_menu_is_item_radio_checkable;
  method_global_menu_get_item_callback;
  method_global_menu_get_item_key_callback;
  method_global_menu_get_item_tag;
  method_global_menu_get_item_text;
  method_global_menu_get_item_submenu;
  method_global_menu_get_item_accelerator;
  method_global_menu_is_item_disabled;
  method_global_menu_is_item_hidden;
  method_global_menu_get_item_tooltip;
  method_global_menu_get_item_state;
  method_global_menu_get_item_max_states;
  method_global_menu_get_item_icon;
  method_global_menu_get_item_indentation_level;
  method_global_menu_set_item_checked;
  method_global_menu_set_item_checkable;
  method_global_menu_set_item_radio_checkable;
  method_global_menu_set_item_callback;
  method_global_menu_set_item_hover_callbacks;
  method_global_menu_set_item_key_callback;
  method_global_menu_set_item_tag;
  method_global_menu_set_item_text;
  method_global_menu_set_item_submenu;
  method_global_menu_set_item_accelerator;
  method_global_menu_set_item_disabled;
  method_global_menu_set_item_hidden;
  method_global_menu_set_item_tooltip;
  method_global_menu_set_item_state;
  method_global_menu_set_item_max_states;
  method_global_menu_set_item_icon;
  method_global_menu_set_item_indentation_level;
  method_global_menu_get_item_count;
  method_global_menu_remove_item;
  method_global_menu_clear;
  method_global_menu_get_system_menu_roots;
  method_tts_is_speaking;
  method_tts_is_paused;
  method_tts_get_voices;
  method_tts_get_voices_for_language;
  method_tts_speak;
  method_tts_pause;
  method_tts_resume;
  method_tts_stop;
  method_tts_set_utterance_callback;
  method_is_dark_mode_supported;
  method_is_dark_mode;
  method_get_accent_color;
  method_get_base_color;
  method_set_system_theme_change_callback;
  method_mouse_set_mode;
  method_mouse_get_mode;
  method_warp_mouse;
  method_mouse_get_position;
  method_mouse_get_button_state;
  method_clipboard_set;
  method_clipboard_get;
  method_clipboard_get_image;
  method_clipboard_has;
  method_clipboard_has_image;
  method_clipboard_set_primary;
  method_clipboard_get_primary;
  method_get_display_cutouts;
  method_get_display_safe_area;
  method_get_screen_count;
  method_get_primary_screen;
  method_get_keyboard_focus_screen;
  method_get_screen_from_rect;
  method_screen_get_position;
  method_screen_get_size;
  method_screen_get_usable_rect;
  method_screen_get_dpi;
  method_screen_get_scale;
  method_is_touchscreen_available;
  method_screen_get_max_scale;
  method_screen_get_refresh_rate;
  method_screen_get_pixel;
  method_screen_get_image;
  method_screen_set_orientation;
  method_screen_get_orientation;
  method_screen_set_keep_on;
  method_screen_is_kept_on;
  method_get_window_list;
  method_get_window_at_screen_position;
  method_window_get_native_handle;
  method_window_get_active_popup;
  method_window_set_popup_safe_rect;
  method_window_get_popup_safe_rect;
  method_window_set_title;
  method_window_get_title_size;
  method_window_set_mouse_passthrough;
  method_window_get_current_screen;
  method_window_set_current_screen;
  method_window_get_position;
  method_window_get_position_with_decorations;
  method_window_set_position;
  method_window_get_size;
  method_window_set_size;
  method_window_set_rect_changed_callback;
  method_window_set_window_event_callback;
  method_window_set_input_event_callback;
  method_window_set_input_text_callback;
  method_window_set_drop_files_callback;
  method_window_get_attached_instance_id;
  method_window_get_max_size;
  method_window_set_max_size;
  method_window_get_min_size;
  method_window_set_min_size;
  method_window_get_size_with_decorations;
  method_window_get_mode;
  method_window_set_mode;
  method_window_set_flag;
  method_window_get_flag;
  method_window_set_window_buttons_offset;
  method_window_get_safe_title_margins;
  method_window_request_attention;
  method_window_move_to_foreground;
  method_window_is_focused;
  method_window_can_draw;
  method_window_set_transient;
  method_window_set_exclusive;
  method_window_set_ime_active;
  method_window_set_ime_position;
  method_window_set_vsync_mode;
  method_window_get_vsync_mode;
  method_window_is_maximize_allowed;
  method_window_maximize_on_title_dbl_click;
  method_window_minimize_on_title_dbl_click;
  method_ime_get_selection;
  method_ime_get_text;
  method_virtual_keyboard_show;
  method_virtual_keyboard_hide;
  method_virtual_keyboard_get_height;
  method_cursor_set_shape;
  method_cursor_get_shape;
  method_cursor_set_custom_image;
  method_get_swap_cancel_ok;
  method_enable_for_stealing_focus;
  method_dialog_show;
  method_dialog_input_text;
  method_file_dialog_show;
  method_file_dialog_with_options_show;
  method_keyboard_get_layout_count;
  method_keyboard_get_current_layout;
  method_keyboard_set_current_layout;
  method_keyboard_get_layout_language;
  method_keyboard_get_layout_name;
  method_keyboard_get_keycode_from_physical;
  method_keyboard_get_label_from_physical;
  method_process_events;
  method_force_process_and_drop_events;
  method_set_native_icon;
  method_set_icon;
  method_create_status_indicator;
  method_status_indicator_set_icon;
  method_status_indicator_set_tooltip;
  method_status_indicator_set_menu;
  method_status_indicator_set_callback;
  method_status_indicator_get_rect;
  method_delete_status_indicator;
  method_tablet_get_driver_count;
  method_tablet_get_driver_name;
  method_tablet_get_current_driver;
  method_tablet_set_current_driver;
  method_is_window_transparency_available;
  method_register_additional_output;
  method_unregister_additional_output;
  method_has_additional_outputs;
}class _DisplayServer extends GodotObject{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("DisplayServer");
    } else {
      super(godot_object);
    }
  }
  static init_method_has_feature() {
    if (!this._bindings.method_has_feature) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("has_feature");
      this._bindings.method_has_feature = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        334065950
      );
    }
  }
  static init_method_get_name() {
    if (!this._bindings.method_get_name) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("get_name");
      this._bindings.method_get_name = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_help_set_search_callbacks() {
    if (!this._bindings.method_help_set_search_callbacks) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("help_set_search_callbacks");
      this._bindings.method_help_set_search_callbacks = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1687350599
      );
    }
  }
  static init_method_global_menu_set_popup_callbacks() {
    if (!this._bindings.method_global_menu_set_popup_callbacks) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("global_menu_set_popup_callbacks");
      this._bindings.method_global_menu_set_popup_callbacks = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3893727526
      );
    }
  }
  static init_method_global_menu_add_submenu_item() {
    if (!this._bindings.method_global_menu_add_submenu_item) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("global_menu_add_submenu_item");
      this._bindings.method_global_menu_add_submenu_item = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2828985934
      );
    }
  }
  static init_method_global_menu_add_item() {
    if (!this._bindings.method_global_menu_add_item) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("global_menu_add_item");
      this._bindings.method_global_menu_add_item = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3401266716
      );
    }
  }
  static init_method_global_menu_add_check_item() {
    if (!this._bindings.method_global_menu_add_check_item) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("global_menu_add_check_item");
      this._bindings.method_global_menu_add_check_item = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3401266716
      );
    }
  }
  static init_method_global_menu_add_icon_item() {
    if (!this._bindings.method_global_menu_add_icon_item) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("global_menu_add_icon_item");
      this._bindings.method_global_menu_add_icon_item = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4245856523
      );
    }
  }
  static init_method_global_menu_add_icon_check_item() {
    if (!this._bindings.method_global_menu_add_icon_check_item) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("global_menu_add_icon_check_item");
      this._bindings.method_global_menu_add_icon_check_item = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4245856523
      );
    }
  }
  static init_method_global_menu_add_radio_check_item() {
    if (!this._bindings.method_global_menu_add_radio_check_item) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("global_menu_add_radio_check_item");
      this._bindings.method_global_menu_add_radio_check_item = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3401266716
      );
    }
  }
  static init_method_global_menu_add_icon_radio_check_item() {
    if (!this._bindings.method_global_menu_add_icon_radio_check_item) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("global_menu_add_icon_radio_check_item");
      this._bindings.method_global_menu_add_icon_radio_check_item = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4245856523
      );
    }
  }
  static init_method_global_menu_add_multistate_item() {
    if (!this._bindings.method_global_menu_add_multistate_item) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("global_menu_add_multistate_item");
      this._bindings.method_global_menu_add_multistate_item = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3431222859
      );
    }
  }
  static init_method_global_menu_add_separator() {
    if (!this._bindings.method_global_menu_add_separator) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("global_menu_add_separator");
      this._bindings.method_global_menu_add_separator = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3214812433
      );
    }
  }
  static init_method_global_menu_get_item_index_from_text() {
    if (!this._bindings.method_global_menu_get_item_index_from_text) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("global_menu_get_item_index_from_text");
      this._bindings.method_global_menu_get_item_index_from_text = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2878152881
      );
    }
  }
  static init_method_global_menu_get_item_index_from_tag() {
    if (!this._bindings.method_global_menu_get_item_index_from_tag) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("global_menu_get_item_index_from_tag");
      this._bindings.method_global_menu_get_item_index_from_tag = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2941063483
      );
    }
  }
  static init_method_global_menu_is_item_checked() {
    if (!this._bindings.method_global_menu_is_item_checked) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("global_menu_is_item_checked");
      this._bindings.method_global_menu_is_item_checked = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3511468594
      );
    }
  }
  static init_method_global_menu_is_item_checkable() {
    if (!this._bindings.method_global_menu_is_item_checkable) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("global_menu_is_item_checkable");
      this._bindings.method_global_menu_is_item_checkable = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3511468594
      );
    }
  }
  static init_method_global_menu_is_item_radio_checkable() {
    if (!this._bindings.method_global_menu_is_item_radio_checkable) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("global_menu_is_item_radio_checkable");
      this._bindings.method_global_menu_is_item_radio_checkable = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3511468594
      );
    }
  }
  static init_method_global_menu_get_item_callback() {
    if (!this._bindings.method_global_menu_get_item_callback) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("global_menu_get_item_callback");
      this._bindings.method_global_menu_get_item_callback = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        748666903
      );
    }
  }
  static init_method_global_menu_get_item_key_callback() {
    if (!this._bindings.method_global_menu_get_item_key_callback) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("global_menu_get_item_key_callback");
      this._bindings.method_global_menu_get_item_key_callback = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        748666903
      );
    }
  }
  static init_method_global_menu_get_item_tag() {
    if (!this._bindings.method_global_menu_get_item_tag) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("global_menu_get_item_tag");
      this._bindings.method_global_menu_get_item_tag = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        330672633
      );
    }
  }
  static init_method_global_menu_get_item_text() {
    if (!this._bindings.method_global_menu_get_item_text) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("global_menu_get_item_text");
      this._bindings.method_global_menu_get_item_text = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        591067909
      );
    }
  }
  static init_method_global_menu_get_item_submenu() {
    if (!this._bindings.method_global_menu_get_item_submenu) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("global_menu_get_item_submenu");
      this._bindings.method_global_menu_get_item_submenu = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        591067909
      );
    }
  }
  static init_method_global_menu_get_item_accelerator() {
    if (!this._bindings.method_global_menu_get_item_accelerator) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("global_menu_get_item_accelerator");
      this._bindings.method_global_menu_get_item_accelerator = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        936065394
      );
    }
  }
  static init_method_global_menu_is_item_disabled() {
    if (!this._bindings.method_global_menu_is_item_disabled) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("global_menu_is_item_disabled");
      this._bindings.method_global_menu_is_item_disabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3511468594
      );
    }
  }
  static init_method_global_menu_is_item_hidden() {
    if (!this._bindings.method_global_menu_is_item_hidden) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("global_menu_is_item_hidden");
      this._bindings.method_global_menu_is_item_hidden = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3511468594
      );
    }
  }
  static init_method_global_menu_get_item_tooltip() {
    if (!this._bindings.method_global_menu_get_item_tooltip) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("global_menu_get_item_tooltip");
      this._bindings.method_global_menu_get_item_tooltip = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        591067909
      );
    }
  }
  static init_method_global_menu_get_item_state() {
    if (!this._bindings.method_global_menu_get_item_state) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("global_menu_get_item_state");
      this._bindings.method_global_menu_get_item_state = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3422818498
      );
    }
  }
  static init_method_global_menu_get_item_max_states() {
    if (!this._bindings.method_global_menu_get_item_max_states) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("global_menu_get_item_max_states");
      this._bindings.method_global_menu_get_item_max_states = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3422818498
      );
    }
  }
  static init_method_global_menu_get_item_icon() {
    if (!this._bindings.method_global_menu_get_item_icon) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("global_menu_get_item_icon");
      this._bindings.method_global_menu_get_item_icon = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3591713183
      );
    }
  }
  static init_method_global_menu_get_item_indentation_level() {
    if (!this._bindings.method_global_menu_get_item_indentation_level) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("global_menu_get_item_indentation_level");
      this._bindings.method_global_menu_get_item_indentation_level = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3422818498
      );
    }
  }
  static init_method_global_menu_set_item_checked() {
    if (!this._bindings.method_global_menu_set_item_checked) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("global_menu_set_item_checked");
      this._bindings.method_global_menu_set_item_checked = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4108344793
      );
    }
  }
  static init_method_global_menu_set_item_checkable() {
    if (!this._bindings.method_global_menu_set_item_checkable) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("global_menu_set_item_checkable");
      this._bindings.method_global_menu_set_item_checkable = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4108344793
      );
    }
  }
  static init_method_global_menu_set_item_radio_checkable() {
    if (!this._bindings.method_global_menu_set_item_radio_checkable) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("global_menu_set_item_radio_checkable");
      this._bindings.method_global_menu_set_item_radio_checkable = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4108344793
      );
    }
  }
  static init_method_global_menu_set_item_callback() {
    if (!this._bindings.method_global_menu_set_item_callback) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("global_menu_set_item_callback");
      this._bindings.method_global_menu_set_item_callback = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3809915389
      );
    }
  }
  static init_method_global_menu_set_item_hover_callbacks() {
    if (!this._bindings.method_global_menu_set_item_hover_callbacks) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("global_menu_set_item_hover_callbacks");
      this._bindings.method_global_menu_set_item_hover_callbacks = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3809915389
      );
    }
  }
  static init_method_global_menu_set_item_key_callback() {
    if (!this._bindings.method_global_menu_set_item_key_callback) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("global_menu_set_item_key_callback");
      this._bindings.method_global_menu_set_item_key_callback = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3809915389
      );
    }
  }
  static init_method_global_menu_set_item_tag() {
    if (!this._bindings.method_global_menu_set_item_tag) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("global_menu_set_item_tag");
      this._bindings.method_global_menu_set_item_tag = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        453659863
      );
    }
  }
  static init_method_global_menu_set_item_text() {
    if (!this._bindings.method_global_menu_set_item_text) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("global_menu_set_item_text");
      this._bindings.method_global_menu_set_item_text = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        965966136
      );
    }
  }
  static init_method_global_menu_set_item_submenu() {
    if (!this._bindings.method_global_menu_set_item_submenu) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("global_menu_set_item_submenu");
      this._bindings.method_global_menu_set_item_submenu = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        965966136
      );
    }
  }
  static init_method_global_menu_set_item_accelerator() {
    if (!this._bindings.method_global_menu_set_item_accelerator) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("global_menu_set_item_accelerator");
      this._bindings.method_global_menu_set_item_accelerator = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        566943293
      );
    }
  }
  static init_method_global_menu_set_item_disabled() {
    if (!this._bindings.method_global_menu_set_item_disabled) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("global_menu_set_item_disabled");
      this._bindings.method_global_menu_set_item_disabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4108344793
      );
    }
  }
  static init_method_global_menu_set_item_hidden() {
    if (!this._bindings.method_global_menu_set_item_hidden) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("global_menu_set_item_hidden");
      this._bindings.method_global_menu_set_item_hidden = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4108344793
      );
    }
  }
  static init_method_global_menu_set_item_tooltip() {
    if (!this._bindings.method_global_menu_set_item_tooltip) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("global_menu_set_item_tooltip");
      this._bindings.method_global_menu_set_item_tooltip = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        965966136
      );
    }
  }
  static init_method_global_menu_set_item_state() {
    if (!this._bindings.method_global_menu_set_item_state) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("global_menu_set_item_state");
      this._bindings.method_global_menu_set_item_state = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3474840532
      );
    }
  }
  static init_method_global_menu_set_item_max_states() {
    if (!this._bindings.method_global_menu_set_item_max_states) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("global_menu_set_item_max_states");
      this._bindings.method_global_menu_set_item_max_states = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3474840532
      );
    }
  }
  static init_method_global_menu_set_item_icon() {
    if (!this._bindings.method_global_menu_set_item_icon) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("global_menu_set_item_icon");
      this._bindings.method_global_menu_set_item_icon = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3201338066
      );
    }
  }
  static init_method_global_menu_set_item_indentation_level() {
    if (!this._bindings.method_global_menu_set_item_indentation_level) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("global_menu_set_item_indentation_level");
      this._bindings.method_global_menu_set_item_indentation_level = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3474840532
      );
    }
  }
  static init_method_global_menu_get_item_count() {
    if (!this._bindings.method_global_menu_get_item_count) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("global_menu_get_item_count");
      this._bindings.method_global_menu_get_item_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1321353865
      );
    }
  }
  static init_method_global_menu_remove_item() {
    if (!this._bindings.method_global_menu_remove_item) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("global_menu_remove_item");
      this._bindings.method_global_menu_remove_item = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2956805083
      );
    }
  }
  static init_method_global_menu_clear() {
    if (!this._bindings.method_global_menu_clear) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("global_menu_clear");
      this._bindings.method_global_menu_clear = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }
  static init_method_global_menu_get_system_menu_roots() {
    if (!this._bindings.method_global_menu_get_system_menu_roots) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("global_menu_get_system_menu_roots");
      this._bindings.method_global_menu_get_system_menu_roots = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3102165223
      );
    }
  }
  static init_method_tts_is_speaking() {
    if (!this._bindings.method_tts_is_speaking) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("tts_is_speaking");
      this._bindings.method_tts_is_speaking = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_tts_is_paused() {
    if (!this._bindings.method_tts_is_paused) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("tts_is_paused");
      this._bindings.method_tts_is_paused = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_tts_get_voices() {
    if (!this._bindings.method_tts_get_voices) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("tts_get_voices");
      this._bindings.method_tts_get_voices = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3995934104
      );
    }
  }
  static init_method_tts_get_voices_for_language() {
    if (!this._bindings.method_tts_get_voices_for_language) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("tts_get_voices_for_language");
      this._bindings.method_tts_get_voices_for_language = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4291131558
      );
    }
  }
  static init_method_tts_speak() {
    if (!this._bindings.method_tts_speak) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("tts_speak");
      this._bindings.method_tts_speak = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        903992738
      );
    }
  }
  static init_method_tts_pause() {
    if (!this._bindings.method_tts_pause) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("tts_pause");
      this._bindings.method_tts_pause = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_tts_resume() {
    if (!this._bindings.method_tts_resume) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("tts_resume");
      this._bindings.method_tts_resume = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_tts_stop() {
    if (!this._bindings.method_tts_stop) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("tts_stop");
      this._bindings.method_tts_stop = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_tts_set_utterance_callback() {
    if (!this._bindings.method_tts_set_utterance_callback) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("tts_set_utterance_callback");
      this._bindings.method_tts_set_utterance_callback = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        109679083
      );
    }
  }
  static init_method_is_dark_mode_supported() {
    if (!this._bindings.method_is_dark_mode_supported) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("is_dark_mode_supported");
      this._bindings.method_is_dark_mode_supported = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_is_dark_mode() {
    if (!this._bindings.method_is_dark_mode) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("is_dark_mode");
      this._bindings.method_is_dark_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_get_accent_color() {
    if (!this._bindings.method_get_accent_color) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("get_accent_color");
      this._bindings.method_get_accent_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3444240500
      );
    }
  }
  static init_method_get_base_color() {
    if (!this._bindings.method_get_base_color) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("get_base_color");
      this._bindings.method_get_base_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3444240500
      );
    }
  }
  static init_method_set_system_theme_change_callback() {
    if (!this._bindings.method_set_system_theme_change_callback) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("set_system_theme_change_callback");
      this._bindings.method_set_system_theme_change_callback = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1611583062
      );
    }
  }
  static init_method_mouse_set_mode() {
    if (!this._bindings.method_mouse_set_mode) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("mouse_set_mode");
      this._bindings.method_mouse_set_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        348288463
      );
    }
  }
  static init_method_mouse_get_mode() {
    if (!this._bindings.method_mouse_get_mode) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("mouse_get_mode");
      this._bindings.method_mouse_get_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1353961651
      );
    }
  }
  static init_method_warp_mouse() {
    if (!this._bindings.method_warp_mouse) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("warp_mouse");
      this._bindings.method_warp_mouse = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1130785943
      );
    }
  }
  static init_method_mouse_get_position() {
    if (!this._bindings.method_mouse_get_position) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("mouse_get_position");
      this._bindings.method_mouse_get_position = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3690982128
      );
    }
  }
  static init_method_mouse_get_button_state() {
    if (!this._bindings.method_mouse_get_button_state) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("mouse_get_button_state");
      this._bindings.method_mouse_get_button_state = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2512161324
      );
    }
  }
  static init_method_clipboard_set() {
    if (!this._bindings.method_clipboard_set) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("clipboard_set");
      this._bindings.method_clipboard_set = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }
  static init_method_clipboard_get() {
    if (!this._bindings.method_clipboard_get) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("clipboard_get");
      this._bindings.method_clipboard_get = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_clipboard_get_image() {
    if (!this._bindings.method_clipboard_get_image) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("clipboard_get_image");
      this._bindings.method_clipboard_get_image = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4190603485
      );
    }
  }
  static init_method_clipboard_has() {
    if (!this._bindings.method_clipboard_has) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("clipboard_has");
      this._bindings.method_clipboard_has = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_clipboard_has_image() {
    if (!this._bindings.method_clipboard_has_image) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("clipboard_has_image");
      this._bindings.method_clipboard_has_image = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_clipboard_set_primary() {
    if (!this._bindings.method_clipboard_set_primary) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("clipboard_set_primary");
      this._bindings.method_clipboard_set_primary = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }
  static init_method_clipboard_get_primary() {
    if (!this._bindings.method_clipboard_get_primary) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("clipboard_get_primary");
      this._bindings.method_clipboard_get_primary = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_get_display_cutouts() {
    if (!this._bindings.method_get_display_cutouts) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("get_display_cutouts");
      this._bindings.method_get_display_cutouts = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3995934104
      );
    }
  }
  static init_method_get_display_safe_area() {
    if (!this._bindings.method_get_display_safe_area) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("get_display_safe_area");
      this._bindings.method_get_display_safe_area = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        410525958
      );
    }
  }
  static init_method_get_screen_count() {
    if (!this._bindings.method_get_screen_count) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("get_screen_count");
      this._bindings.method_get_screen_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_get_primary_screen() {
    if (!this._bindings.method_get_primary_screen) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("get_primary_screen");
      this._bindings.method_get_primary_screen = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_get_keyboard_focus_screen() {
    if (!this._bindings.method_get_keyboard_focus_screen) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("get_keyboard_focus_screen");
      this._bindings.method_get_keyboard_focus_screen = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_get_screen_from_rect() {
    if (!this._bindings.method_get_screen_from_rect) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("get_screen_from_rect");
      this._bindings.method_get_screen_from_rect = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        741354659
      );
    }
  }
  static init_method_screen_get_position() {
    if (!this._bindings.method_screen_get_position) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("screen_get_position");
      this._bindings.method_screen_get_position = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1725937825
      );
    }
  }
  static init_method_screen_get_size() {
    if (!this._bindings.method_screen_get_size) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("screen_get_size");
      this._bindings.method_screen_get_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1725937825
      );
    }
  }
  static init_method_screen_get_usable_rect() {
    if (!this._bindings.method_screen_get_usable_rect) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("screen_get_usable_rect");
      this._bindings.method_screen_get_usable_rect = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2439012528
      );
    }
  }
  static init_method_screen_get_dpi() {
    if (!this._bindings.method_screen_get_dpi) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("screen_get_dpi");
      this._bindings.method_screen_get_dpi = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        181039630
      );
    }
  }
  static init_method_screen_get_scale() {
    if (!this._bindings.method_screen_get_scale) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("screen_get_scale");
      this._bindings.method_screen_get_scale = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        909105437
      );
    }
  }
  static init_method_is_touchscreen_available() {
    if (!this._bindings.method_is_touchscreen_available) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("is_touchscreen_available");
      this._bindings.method_is_touchscreen_available = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3323674545
      );
    }
  }
  static init_method_screen_get_max_scale() {
    if (!this._bindings.method_screen_get_max_scale) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("screen_get_max_scale");
      this._bindings.method_screen_get_max_scale = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_screen_get_refresh_rate() {
    if (!this._bindings.method_screen_get_refresh_rate) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("screen_get_refresh_rate");
      this._bindings.method_screen_get_refresh_rate = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        909105437
      );
    }
  }
  static init_method_screen_get_pixel() {
    if (!this._bindings.method_screen_get_pixel) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("screen_get_pixel");
      this._bindings.method_screen_get_pixel = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1532707496
      );
    }
  }
  static init_method_screen_get_image() {
    if (!this._bindings.method_screen_get_image) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("screen_get_image");
      this._bindings.method_screen_get_image = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3813388802
      );
    }
  }
  static init_method_screen_set_orientation() {
    if (!this._bindings.method_screen_set_orientation) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("screen_set_orientation");
      this._bindings.method_screen_set_orientation = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2211511631
      );
    }
  }
  static init_method_screen_get_orientation() {
    if (!this._bindings.method_screen_get_orientation) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("screen_get_orientation");
      this._bindings.method_screen_get_orientation = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        133818562
      );
    }
  }
  static init_method_screen_set_keep_on() {
    if (!this._bindings.method_screen_set_keep_on) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("screen_set_keep_on");
      this._bindings.method_screen_set_keep_on = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_screen_is_kept_on() {
    if (!this._bindings.method_screen_is_kept_on) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("screen_is_kept_on");
      this._bindings.method_screen_is_kept_on = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_get_window_list() {
    if (!this._bindings.method_get_window_list) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("get_window_list");
      this._bindings.method_get_window_list = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1930428628
      );
    }
  }
  static init_method_get_window_at_screen_position() {
    if (!this._bindings.method_get_window_at_screen_position) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("get_window_at_screen_position");
      this._bindings.method_get_window_at_screen_position = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2485466453
      );
    }
  }
  static init_method_window_get_native_handle() {
    if (!this._bindings.method_window_get_native_handle) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("window_get_native_handle");
      this._bindings.method_window_get_native_handle = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1096425680
      );
    }
  }
  static init_method_window_get_active_popup() {
    if (!this._bindings.method_window_get_active_popup) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("window_get_active_popup");
      this._bindings.method_window_get_active_popup = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_window_set_popup_safe_rect() {
    if (!this._bindings.method_window_set_popup_safe_rect) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("window_set_popup_safe_rect");
      this._bindings.method_window_set_popup_safe_rect = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3317281434
      );
    }
  }
  static init_method_window_get_popup_safe_rect() {
    if (!this._bindings.method_window_get_popup_safe_rect) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("window_get_popup_safe_rect");
      this._bindings.method_window_get_popup_safe_rect = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2161169500
      );
    }
  }
  static init_method_window_set_title() {
    if (!this._bindings.method_window_set_title) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("window_set_title");
      this._bindings.method_window_set_title = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        441246282
      );
    }
  }
  static init_method_window_get_title_size() {
    if (!this._bindings.method_window_get_title_size) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("window_get_title_size");
      this._bindings.method_window_get_title_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2925301799
      );
    }
  }
  static init_method_window_set_mouse_passthrough() {
    if (!this._bindings.method_window_set_mouse_passthrough) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("window_set_mouse_passthrough");
      this._bindings.method_window_set_mouse_passthrough = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1993637420
      );
    }
  }
  static init_method_window_get_current_screen() {
    if (!this._bindings.method_window_get_current_screen) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("window_get_current_screen");
      this._bindings.method_window_get_current_screen = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1591665591
      );
    }
  }
  static init_method_window_set_current_screen() {
    if (!this._bindings.method_window_set_current_screen) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("window_set_current_screen");
      this._bindings.method_window_set_current_screen = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2230941749
      );
    }
  }
  static init_method_window_get_position() {
    if (!this._bindings.method_window_get_position) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("window_get_position");
      this._bindings.method_window_get_position = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        763922886
      );
    }
  }
  static init_method_window_get_position_with_decorations() {
    if (!this._bindings.method_window_get_position_with_decorations) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("window_get_position_with_decorations");
      this._bindings.method_window_get_position_with_decorations = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        763922886
      );
    }
  }
  static init_method_window_set_position() {
    if (!this._bindings.method_window_set_position) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("window_set_position");
      this._bindings.method_window_set_position = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2019273902
      );
    }
  }
  static init_method_window_get_size() {
    if (!this._bindings.method_window_get_size) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("window_get_size");
      this._bindings.method_window_get_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        763922886
      );
    }
  }
  static init_method_window_set_size() {
    if (!this._bindings.method_window_set_size) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("window_set_size");
      this._bindings.method_window_set_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2019273902
      );
    }
  }
  static init_method_window_set_rect_changed_callback() {
    if (!this._bindings.method_window_set_rect_changed_callback) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("window_set_rect_changed_callback");
      this._bindings.method_window_set_rect_changed_callback = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1091192925
      );
    }
  }
  static init_method_window_set_window_event_callback() {
    if (!this._bindings.method_window_set_window_event_callback) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("window_set_window_event_callback");
      this._bindings.method_window_set_window_event_callback = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1091192925
      );
    }
  }
  static init_method_window_set_input_event_callback() {
    if (!this._bindings.method_window_set_input_event_callback) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("window_set_input_event_callback");
      this._bindings.method_window_set_input_event_callback = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1091192925
      );
    }
  }
  static init_method_window_set_input_text_callback() {
    if (!this._bindings.method_window_set_input_text_callback) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("window_set_input_text_callback");
      this._bindings.method_window_set_input_text_callback = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1091192925
      );
    }
  }
  static init_method_window_set_drop_files_callback() {
    if (!this._bindings.method_window_set_drop_files_callback) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("window_set_drop_files_callback");
      this._bindings.method_window_set_drop_files_callback = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1091192925
      );
    }
  }
  static init_method_window_get_attached_instance_id() {
    if (!this._bindings.method_window_get_attached_instance_id) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("window_get_attached_instance_id");
      this._bindings.method_window_get_attached_instance_id = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1591665591
      );
    }
  }
  static init_method_window_get_max_size() {
    if (!this._bindings.method_window_get_max_size) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("window_get_max_size");
      this._bindings.method_window_get_max_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        763922886
      );
    }
  }
  static init_method_window_set_max_size() {
    if (!this._bindings.method_window_set_max_size) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("window_set_max_size");
      this._bindings.method_window_set_max_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2019273902
      );
    }
  }
  static init_method_window_get_min_size() {
    if (!this._bindings.method_window_get_min_size) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("window_get_min_size");
      this._bindings.method_window_get_min_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        763922886
      );
    }
  }
  static init_method_window_set_min_size() {
    if (!this._bindings.method_window_set_min_size) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("window_set_min_size");
      this._bindings.method_window_set_min_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2019273902
      );
    }
  }
  static init_method_window_get_size_with_decorations() {
    if (!this._bindings.method_window_get_size_with_decorations) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("window_get_size_with_decorations");
      this._bindings.method_window_get_size_with_decorations = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        763922886
      );
    }
  }
  static init_method_window_get_mode() {
    if (!this._bindings.method_window_get_mode) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("window_get_mode");
      this._bindings.method_window_get_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2185728461
      );
    }
  }
  static init_method_window_set_mode() {
    if (!this._bindings.method_window_set_mode) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("window_set_mode");
      this._bindings.method_window_set_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1319965401
      );
    }
  }
  static init_method_window_set_flag() {
    if (!this._bindings.method_window_set_flag) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("window_set_flag");
      this._bindings.method_window_set_flag = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        254894155
      );
    }
  }
  static init_method_window_get_flag() {
    if (!this._bindings.method_window_get_flag) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("window_get_flag");
      this._bindings.method_window_get_flag = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        802816991
      );
    }
  }
  static init_method_window_set_window_buttons_offset() {
    if (!this._bindings.method_window_set_window_buttons_offset) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("window_set_window_buttons_offset");
      this._bindings.method_window_set_window_buttons_offset = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2019273902
      );
    }
  }
  static init_method_window_get_safe_title_margins() {
    if (!this._bindings.method_window_get_safe_title_margins) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("window_get_safe_title_margins");
      this._bindings.method_window_get_safe_title_margins = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2295066620
      );
    }
  }
  static init_method_window_request_attention() {
    if (!this._bindings.method_window_request_attention) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("window_request_attention");
      this._bindings.method_window_request_attention = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1995695955
      );
    }
  }
  static init_method_window_move_to_foreground() {
    if (!this._bindings.method_window_move_to_foreground) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("window_move_to_foreground");
      this._bindings.method_window_move_to_foreground = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1995695955
      );
    }
  }
  static init_method_window_is_focused() {
    if (!this._bindings.method_window_is_focused) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("window_is_focused");
      this._bindings.method_window_is_focused = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1051549951
      );
    }
  }
  static init_method_window_can_draw() {
    if (!this._bindings.method_window_can_draw) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("window_can_draw");
      this._bindings.method_window_can_draw = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1051549951
      );
    }
  }
  static init_method_window_set_transient() {
    if (!this._bindings.method_window_set_transient) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("window_set_transient");
      this._bindings.method_window_set_transient = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3937882851
      );
    }
  }
  static init_method_window_set_exclusive() {
    if (!this._bindings.method_window_set_exclusive) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("window_set_exclusive");
      this._bindings.method_window_set_exclusive = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        300928843
      );
    }
  }
  static init_method_window_set_ime_active() {
    if (!this._bindings.method_window_set_ime_active) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("window_set_ime_active");
      this._bindings.method_window_set_ime_active = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1661950165
      );
    }
  }
  static init_method_window_set_ime_position() {
    if (!this._bindings.method_window_set_ime_position) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("window_set_ime_position");
      this._bindings.method_window_set_ime_position = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2019273902
      );
    }
  }
  static init_method_window_set_vsync_mode() {
    if (!this._bindings.method_window_set_vsync_mode) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("window_set_vsync_mode");
      this._bindings.method_window_set_vsync_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2179333492
      );
    }
  }
  static init_method_window_get_vsync_mode() {
    if (!this._bindings.method_window_get_vsync_mode) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("window_get_vsync_mode");
      this._bindings.method_window_get_vsync_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        578873795
      );
    }
  }
  static init_method_window_is_maximize_allowed() {
    if (!this._bindings.method_window_is_maximize_allowed) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("window_is_maximize_allowed");
      this._bindings.method_window_is_maximize_allowed = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1051549951
      );
    }
  }
  static init_method_window_maximize_on_title_dbl_click() {
    if (!this._bindings.method_window_maximize_on_title_dbl_click) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("window_maximize_on_title_dbl_click");
      this._bindings.method_window_maximize_on_title_dbl_click = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_window_minimize_on_title_dbl_click() {
    if (!this._bindings.method_window_minimize_on_title_dbl_click) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("window_minimize_on_title_dbl_click");
      this._bindings.method_window_minimize_on_title_dbl_click = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_ime_get_selection() {
    if (!this._bindings.method_ime_get_selection) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("ime_get_selection");
      this._bindings.method_ime_get_selection = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3690982128
      );
    }
  }
  static init_method_ime_get_text() {
    if (!this._bindings.method_ime_get_text) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("ime_get_text");
      this._bindings.method_ime_get_text = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_virtual_keyboard_show() {
    if (!this._bindings.method_virtual_keyboard_show) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("virtual_keyboard_show");
      this._bindings.method_virtual_keyboard_show = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3042891259
      );
    }
  }
  static init_method_virtual_keyboard_hide() {
    if (!this._bindings.method_virtual_keyboard_hide) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("virtual_keyboard_hide");
      this._bindings.method_virtual_keyboard_hide = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_virtual_keyboard_get_height() {
    if (!this._bindings.method_virtual_keyboard_get_height) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("virtual_keyboard_get_height");
      this._bindings.method_virtual_keyboard_get_height = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_cursor_set_shape() {
    if (!this._bindings.method_cursor_set_shape) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("cursor_set_shape");
      this._bindings.method_cursor_set_shape = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2026291549
      );
    }
  }
  static init_method_cursor_get_shape() {
    if (!this._bindings.method_cursor_get_shape) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("cursor_get_shape");
      this._bindings.method_cursor_get_shape = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1087724927
      );
    }
  }
  static init_method_cursor_set_custom_image() {
    if (!this._bindings.method_cursor_set_custom_image) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("cursor_set_custom_image");
      this._bindings.method_cursor_set_custom_image = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1816663697
      );
    }
  }
  static init_method_get_swap_cancel_ok() {
    if (!this._bindings.method_get_swap_cancel_ok) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("get_swap_cancel_ok");
      this._bindings.method_get_swap_cancel_ok = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2240911060
      );
    }
  }
  static init_method_enable_for_stealing_focus() {
    if (!this._bindings.method_enable_for_stealing_focus) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("enable_for_stealing_focus");
      this._bindings.method_enable_for_stealing_focus = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_dialog_show() {
    if (!this._bindings.method_dialog_show) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("dialog_show");
      this._bindings.method_dialog_show = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4115553226
      );
    }
  }
  static init_method_dialog_input_text() {
    if (!this._bindings.method_dialog_input_text) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("dialog_input_text");
      this._bindings.method_dialog_input_text = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3088703427
      );
    }
  }
  static init_method_file_dialog_show() {
    if (!this._bindings.method_file_dialog_show) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("file_dialog_show");
      this._bindings.method_file_dialog_show = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1531299078
      );
    }
  }
  static init_method_file_dialog_with_options_show() {
    if (!this._bindings.method_file_dialog_with_options_show) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("file_dialog_with_options_show");
      this._bindings.method_file_dialog_with_options_show = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1305318754
      );
    }
  }
  static init_method_keyboard_get_layout_count() {
    if (!this._bindings.method_keyboard_get_layout_count) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("keyboard_get_layout_count");
      this._bindings.method_keyboard_get_layout_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_keyboard_get_current_layout() {
    if (!this._bindings.method_keyboard_get_current_layout) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("keyboard_get_current_layout");
      this._bindings.method_keyboard_get_current_layout = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_keyboard_set_current_layout() {
    if (!this._bindings.method_keyboard_set_current_layout) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("keyboard_set_current_layout");
      this._bindings.method_keyboard_set_current_layout = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_keyboard_get_layout_language() {
    if (!this._bindings.method_keyboard_get_layout_language) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("keyboard_get_layout_language");
      this._bindings.method_keyboard_get_layout_language = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        844755477
      );
    }
  }
  static init_method_keyboard_get_layout_name() {
    if (!this._bindings.method_keyboard_get_layout_name) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("keyboard_get_layout_name");
      this._bindings.method_keyboard_get_layout_name = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        844755477
      );
    }
  }
  static init_method_keyboard_get_keycode_from_physical() {
    if (!this._bindings.method_keyboard_get_keycode_from_physical) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("keyboard_get_keycode_from_physical");
      this._bindings.method_keyboard_get_keycode_from_physical = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3447613187
      );
    }
  }
  static init_method_keyboard_get_label_from_physical() {
    if (!this._bindings.method_keyboard_get_label_from_physical) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("keyboard_get_label_from_physical");
      this._bindings.method_keyboard_get_label_from_physical = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3447613187
      );
    }
  }
  static init_method_process_events() {
    if (!this._bindings.method_process_events) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("process_events");
      this._bindings.method_process_events = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_force_process_and_drop_events() {
    if (!this._bindings.method_force_process_and_drop_events) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("force_process_and_drop_events");
      this._bindings.method_force_process_and_drop_events = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_set_native_icon() {
    if (!this._bindings.method_set_native_icon) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("set_native_icon");
      this._bindings.method_set_native_icon = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }
  static init_method_set_icon() {
    if (!this._bindings.method_set_icon) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("set_icon");
      this._bindings.method_set_icon = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        532598488
      );
    }
  }
  static init_method_create_status_indicator() {
    if (!this._bindings.method_create_status_indicator) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("create_status_indicator");
      this._bindings.method_create_status_indicator = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1904285171
      );
    }
  }
  static init_method_status_indicator_set_icon() {
    if (!this._bindings.method_status_indicator_set_icon) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("status_indicator_set_icon");
      this._bindings.method_status_indicator_set_icon = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        666127730
      );
    }
  }
  static init_method_status_indicator_set_tooltip() {
    if (!this._bindings.method_status_indicator_set_tooltip) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("status_indicator_set_tooltip");
      this._bindings.method_status_indicator_set_tooltip = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        501894301
      );
    }
  }
  static init_method_status_indicator_set_menu() {
    if (!this._bindings.method_status_indicator_set_menu) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("status_indicator_set_menu");
      this._bindings.method_status_indicator_set_menu = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4040184819
      );
    }
  }
  static init_method_status_indicator_set_callback() {
    if (!this._bindings.method_status_indicator_set_callback) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("status_indicator_set_callback");
      this._bindings.method_status_indicator_set_callback = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        957362965
      );
    }
  }
  static init_method_status_indicator_get_rect() {
    if (!this._bindings.method_status_indicator_get_rect) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("status_indicator_get_rect");
      this._bindings.method_status_indicator_get_rect = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3327874267
      );
    }
  }
  static init_method_delete_status_indicator() {
    if (!this._bindings.method_delete_status_indicator) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("delete_status_indicator");
      this._bindings.method_delete_status_indicator = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_tablet_get_driver_count() {
    if (!this._bindings.method_tablet_get_driver_count) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("tablet_get_driver_count");
      this._bindings.method_tablet_get_driver_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_tablet_get_driver_name() {
    if (!this._bindings.method_tablet_get_driver_name) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("tablet_get_driver_name");
      this._bindings.method_tablet_get_driver_name = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        844755477
      );
    }
  }
  static init_method_tablet_get_current_driver() {
    if (!this._bindings.method_tablet_get_current_driver) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("tablet_get_current_driver");
      this._bindings.method_tablet_get_current_driver = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }
  static init_method_tablet_set_current_driver() {
    if (!this._bindings.method_tablet_set_current_driver) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("tablet_set_current_driver");
      this._bindings.method_tablet_set_current_driver = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }
  static init_method_is_window_transparency_available() {
    if (!this._bindings.method_is_window_transparency_available) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("is_window_transparency_available");
      this._bindings.method_is_window_transparency_available = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_register_additional_output() {
    if (!this._bindings.method_register_additional_output) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("register_additional_output");
      this._bindings.method_register_additional_output = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3975164845
      );
    }
  }
  static init_method_unregister_additional_output() {
    if (!this._bindings.method_unregister_additional_output) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("unregister_additional_output");
      this._bindings.method_unregister_additional_output = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3975164845
      );
    }
  }
  static init_method_has_additional_outputs() {
    if (!this._bindings.method_has_additional_outputs) {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("has_additional_outputs");
      this._bindings.method_has_additional_outputs = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }

  
  
  has_feature(_feature) {
    DisplayServer.init_method_has_feature();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_has_feature,
      this._owner,
			Variant.Type.BOOL,
    
      _feature
    );
    
  }
  get_name() {
    DisplayServer.init_method_get_name();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_get_name,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  help_set_search_callbacks(_search_callback, _action_callback) {
    DisplayServer.init_method_help_set_search_callbacks();
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_help_set_search_callbacks,
      this._owner,
      _search_callback, _action_callback
    );
    
  }
  global_menu_set_popup_callbacks(_menu_root, _open_callback, _close_callback) {
    DisplayServer.init_method_global_menu_set_popup_callbacks();
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_global_menu_set_popup_callbacks,
      this._owner,
      _menu_root, _open_callback, _close_callback
    );
    
  }
  global_menu_add_submenu_item(_menu_root, _label, _submenu, _index) {
    DisplayServer.init_method_global_menu_add_submenu_item();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_global_menu_add_submenu_item,
      this._owner,
			Variant.Type.INT,
    
      _menu_root, _label, _submenu, _index
    );
    
  }
  global_menu_add_item(_menu_root, _label, _callback, _key_callback, _tag, _accelerator, _index) {
    DisplayServer.init_method_global_menu_add_item();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_global_menu_add_item,
      this._owner,
			Variant.Type.INT,
    
      _menu_root, _label, _callback, _key_callback, _tag, _accelerator, _index
    );
    
  }
  global_menu_add_check_item(_menu_root, _label, _callback, _key_callback, _tag, _accelerator, _index) {
    DisplayServer.init_method_global_menu_add_check_item();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_global_menu_add_check_item,
      this._owner,
			Variant.Type.INT,
    
      _menu_root, _label, _callback, _key_callback, _tag, _accelerator, _index
    );
    
  }
  global_menu_add_icon_item(_menu_root, _icon, _label, _callback, _key_callback, _tag, _accelerator, _index) {
    DisplayServer.init_method_global_menu_add_icon_item();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_global_menu_add_icon_item,
      this._owner,
			Variant.Type.INT,
    
      _menu_root, _icon, _label, _callback, _key_callback, _tag, _accelerator, _index
    );
    
  }
  global_menu_add_icon_check_item(_menu_root, _icon, _label, _callback, _key_callback, _tag, _accelerator, _index) {
    DisplayServer.init_method_global_menu_add_icon_check_item();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_global_menu_add_icon_check_item,
      this._owner,
			Variant.Type.INT,
    
      _menu_root, _icon, _label, _callback, _key_callback, _tag, _accelerator, _index
    );
    
  }
  global_menu_add_radio_check_item(_menu_root, _label, _callback, _key_callback, _tag, _accelerator, _index) {
    DisplayServer.init_method_global_menu_add_radio_check_item();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_global_menu_add_radio_check_item,
      this._owner,
			Variant.Type.INT,
    
      _menu_root, _label, _callback, _key_callback, _tag, _accelerator, _index
    );
    
  }
  global_menu_add_icon_radio_check_item(_menu_root, _icon, _label, _callback, _key_callback, _tag, _accelerator, _index) {
    DisplayServer.init_method_global_menu_add_icon_radio_check_item();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_global_menu_add_icon_radio_check_item,
      this._owner,
			Variant.Type.INT,
    
      _menu_root, _icon, _label, _callback, _key_callback, _tag, _accelerator, _index
    );
    
  }
  global_menu_add_multistate_item(_menu_root, _label, _max_states, _default_state, _callback, _key_callback, _tag, _accelerator, _index) {
    DisplayServer.init_method_global_menu_add_multistate_item();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_global_menu_add_multistate_item,
      this._owner,
			Variant.Type.INT,
    
      _menu_root, _label, _max_states, _default_state, _callback, _key_callback, _tag, _accelerator, _index
    );
    
  }
  global_menu_add_separator(_menu_root, _index) {
    DisplayServer.init_method_global_menu_add_separator();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_global_menu_add_separator,
      this._owner,
			Variant.Type.INT,
    
      _menu_root, _index
    );
    
  }
  global_menu_get_item_index_from_text(_menu_root, _text) {
    DisplayServer.init_method_global_menu_get_item_index_from_text();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_global_menu_get_item_index_from_text,
      this._owner,
			Variant.Type.INT,
    
      _menu_root, _text
    );
    
  }
  global_menu_get_item_index_from_tag(_menu_root, _tag) {
    DisplayServer.init_method_global_menu_get_item_index_from_tag();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_global_menu_get_item_index_from_tag,
      this._owner,
			Variant.Type.INT,
    
      _menu_root, _tag
    );
    
  }
  global_menu_is_item_checked(_menu_root, _idx) {
    DisplayServer.init_method_global_menu_is_item_checked();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_global_menu_is_item_checked,
      this._owner,
			Variant.Type.BOOL,
    
      _menu_root, _idx
    );
    
  }
  global_menu_is_item_checkable(_menu_root, _idx) {
    DisplayServer.init_method_global_menu_is_item_checkable();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_global_menu_is_item_checkable,
      this._owner,
			Variant.Type.BOOL,
    
      _menu_root, _idx
    );
    
  }
  global_menu_is_item_radio_checkable(_menu_root, _idx) {
    DisplayServer.init_method_global_menu_is_item_radio_checkable();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_global_menu_is_item_radio_checkable,
      this._owner,
			Variant.Type.BOOL,
    
      _menu_root, _idx
    );
    
  }
  global_menu_get_item_callback(_menu_root, _idx) {
    DisplayServer.init_method_global_menu_get_item_callback();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_global_menu_get_item_callback,
      this._owner,
			Variant.Type.CALLABLE,
    
      _menu_root, _idx
    );
    
  }
  global_menu_get_item_key_callback(_menu_root, _idx) {
    DisplayServer.init_method_global_menu_get_item_key_callback();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_global_menu_get_item_key_callback,
      this._owner,
			Variant.Type.CALLABLE,
    
      _menu_root, _idx
    );
    
  }
  global_menu_get_item_tag(_menu_root, _idx) {
    DisplayServer.init_method_global_menu_get_item_tag();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_global_menu_get_item_tag,
      this._owner,
			Variant.Type.VARIANT,
    
      _menu_root, _idx
    );
    
  }
  global_menu_get_item_text(_menu_root, _idx) {
    DisplayServer.init_method_global_menu_get_item_text();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_global_menu_get_item_text,
      this._owner,
			Variant.Type.STRING,
    
      _menu_root, _idx
    );
    
  }
  global_menu_get_item_submenu(_menu_root, _idx) {
    DisplayServer.init_method_global_menu_get_item_submenu();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_global_menu_get_item_submenu,
      this._owner,
			Variant.Type.STRING,
    
      _menu_root, _idx
    );
    
  }
  global_menu_get_item_accelerator(_menu_root, _idx) {
    DisplayServer.init_method_global_menu_get_item_accelerator();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_global_menu_get_item_accelerator,
      this._owner,
			Variant.Type.INT,
    
      _menu_root, _idx
    );
    
  }
  global_menu_is_item_disabled(_menu_root, _idx) {
    DisplayServer.init_method_global_menu_is_item_disabled();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_global_menu_is_item_disabled,
      this._owner,
			Variant.Type.BOOL,
    
      _menu_root, _idx
    );
    
  }
  global_menu_is_item_hidden(_menu_root, _idx) {
    DisplayServer.init_method_global_menu_is_item_hidden();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_global_menu_is_item_hidden,
      this._owner,
			Variant.Type.BOOL,
    
      _menu_root, _idx
    );
    
  }
  global_menu_get_item_tooltip(_menu_root, _idx) {
    DisplayServer.init_method_global_menu_get_item_tooltip();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_global_menu_get_item_tooltip,
      this._owner,
			Variant.Type.STRING,
    
      _menu_root, _idx
    );
    
  }
  global_menu_get_item_state(_menu_root, _idx) {
    DisplayServer.init_method_global_menu_get_item_state();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_global_menu_get_item_state,
      this._owner,
			Variant.Type.INT,
    
      _menu_root, _idx
    );
    
  }
  global_menu_get_item_max_states(_menu_root, _idx) {
    DisplayServer.init_method_global_menu_get_item_max_states();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_global_menu_get_item_max_states,
      this._owner,
			Variant.Type.INT,
    
      _menu_root, _idx
    );
    
  }
  global_menu_get_item_icon(_menu_root, _idx) {
    DisplayServer.init_method_global_menu_get_item_icon();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_global_menu_get_item_icon,
      this._owner,
			Variant.Type.OBJECT,
      _menu_root, _idx
    );
    
  }
  global_menu_get_item_indentation_level(_menu_root, _idx) {
    DisplayServer.init_method_global_menu_get_item_indentation_level();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_global_menu_get_item_indentation_level,
      this._owner,
			Variant.Type.INT,
    
      _menu_root, _idx
    );
    
  }
  global_menu_set_item_checked(_menu_root, _idx, _checked) {
    DisplayServer.init_method_global_menu_set_item_checked();
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_global_menu_set_item_checked,
      this._owner,
      _menu_root, _idx, _checked
    );
    
  }
  global_menu_set_item_checkable(_menu_root, _idx, _checkable) {
    DisplayServer.init_method_global_menu_set_item_checkable();
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_global_menu_set_item_checkable,
      this._owner,
      _menu_root, _idx, _checkable
    );
    
  }
  global_menu_set_item_radio_checkable(_menu_root, _idx, _checkable) {
    DisplayServer.init_method_global_menu_set_item_radio_checkable();
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_global_menu_set_item_radio_checkable,
      this._owner,
      _menu_root, _idx, _checkable
    );
    
  }
  global_menu_set_item_callback(_menu_root, _idx, _callback) {
    DisplayServer.init_method_global_menu_set_item_callback();
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_global_menu_set_item_callback,
      this._owner,
      _menu_root, _idx, _callback
    );
    
  }
  global_menu_set_item_hover_callbacks(_menu_root, _idx, _callback) {
    DisplayServer.init_method_global_menu_set_item_hover_callbacks();
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_global_menu_set_item_hover_callbacks,
      this._owner,
      _menu_root, _idx, _callback
    );
    
  }
  global_menu_set_item_key_callback(_menu_root, _idx, _key_callback) {
    DisplayServer.init_method_global_menu_set_item_key_callback();
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_global_menu_set_item_key_callback,
      this._owner,
      _menu_root, _idx, _key_callback
    );
    
  }
  global_menu_set_item_tag(_menu_root, _idx, _tag) {
    DisplayServer.init_method_global_menu_set_item_tag();
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_global_menu_set_item_tag,
      this._owner,
      _menu_root, _idx, _tag
    );
    
  }
  global_menu_set_item_text(_menu_root, _idx, _text) {
    DisplayServer.init_method_global_menu_set_item_text();
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_global_menu_set_item_text,
      this._owner,
      _menu_root, _idx, _text
    );
    
  }
  global_menu_set_item_submenu(_menu_root, _idx, _submenu) {
    DisplayServer.init_method_global_menu_set_item_submenu();
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_global_menu_set_item_submenu,
      this._owner,
      _menu_root, _idx, _submenu
    );
    
  }
  global_menu_set_item_accelerator(_menu_root, _idx, _keycode) {
    DisplayServer.init_method_global_menu_set_item_accelerator();
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_global_menu_set_item_accelerator,
      this._owner,
      _menu_root, _idx, _keycode
    );
    
  }
  global_menu_set_item_disabled(_menu_root, _idx, _disabled) {
    DisplayServer.init_method_global_menu_set_item_disabled();
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_global_menu_set_item_disabled,
      this._owner,
      _menu_root, _idx, _disabled
    );
    
  }
  global_menu_set_item_hidden(_menu_root, _idx, _hidden) {
    DisplayServer.init_method_global_menu_set_item_hidden();
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_global_menu_set_item_hidden,
      this._owner,
      _menu_root, _idx, _hidden
    );
    
  }
  global_menu_set_item_tooltip(_menu_root, _idx, _tooltip) {
    DisplayServer.init_method_global_menu_set_item_tooltip();
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_global_menu_set_item_tooltip,
      this._owner,
      _menu_root, _idx, _tooltip
    );
    
  }
  global_menu_set_item_state(_menu_root, _idx, _state) {
    DisplayServer.init_method_global_menu_set_item_state();
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_global_menu_set_item_state,
      this._owner,
      _menu_root, _idx, _state
    );
    
  }
  global_menu_set_item_max_states(_menu_root, _idx, _max_states) {
    DisplayServer.init_method_global_menu_set_item_max_states();
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_global_menu_set_item_max_states,
      this._owner,
      _menu_root, _idx, _max_states
    );
    
  }
  global_menu_set_item_icon(_menu_root, _idx, _icon) {
    DisplayServer.init_method_global_menu_set_item_icon();
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_global_menu_set_item_icon,
      this._owner,
      _menu_root, _idx, _icon
    );
    
  }
  global_menu_set_item_indentation_level(_menu_root, _idx, _level) {
    DisplayServer.init_method_global_menu_set_item_indentation_level();
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_global_menu_set_item_indentation_level,
      this._owner,
      _menu_root, _idx, _level
    );
    
  }
  global_menu_get_item_count(_menu_root) {
    DisplayServer.init_method_global_menu_get_item_count();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_global_menu_get_item_count,
      this._owner,
			Variant.Type.INT,
    
      _menu_root
    );
    
  }
  global_menu_remove_item(_menu_root, _idx) {
    DisplayServer.init_method_global_menu_remove_item();
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_global_menu_remove_item,
      this._owner,
      _menu_root, _idx
    );
    
  }
  global_menu_clear(_menu_root) {
    DisplayServer.init_method_global_menu_clear();
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_global_menu_clear,
      this._owner,
      _menu_root
    );
    
  }
  global_menu_get_system_menu_roots() {
    DisplayServer.init_method_global_menu_get_system_menu_roots();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_global_menu_get_system_menu_roots,
      this._owner,
			Variant.Type.DICTIONARY,
    
      
    );
    
  }
  tts_is_speaking() {
    DisplayServer.init_method_tts_is_speaking();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_tts_is_speaking,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  tts_is_paused() {
    DisplayServer.init_method_tts_is_paused();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_tts_is_paused,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  tts_get_voices() {
    DisplayServer.init_method_tts_get_voices();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_tts_get_voices,
      this._owner,
			Variant.Type.ARRAY,
      
    );
    
  }
  tts_get_voices_for_language(_language) {
    DisplayServer.init_method_tts_get_voices_for_language();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_tts_get_voices_for_language,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY,
    
      _language
    );
    
  }
  tts_speak(_text, _voice, _volume, _pitch, _rate, _utterance_id, _interrupt) {
    DisplayServer.init_method_tts_speak();
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_tts_speak,
      this._owner,
      _text, _voice, _volume, _pitch, _rate, _utterance_id, _interrupt
    );
    
  }
  tts_pause() {
    DisplayServer.init_method_tts_pause();
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_tts_pause,
      this._owner,
      
    );
    
  }
  tts_resume() {
    DisplayServer.init_method_tts_resume();
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_tts_resume,
      this._owner,
      
    );
    
  }
  tts_stop() {
    DisplayServer.init_method_tts_stop();
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_tts_stop,
      this._owner,
      
    );
    
  }
  tts_set_utterance_callback(_event, _callable) {
    DisplayServer.init_method_tts_set_utterance_callback();
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_tts_set_utterance_callback,
      this._owner,
      _event, _callable
    );
    
  }
  is_dark_mode_supported() {
    DisplayServer.init_method_is_dark_mode_supported();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_is_dark_mode_supported,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  is_dark_mode() {
    DisplayServer.init_method_is_dark_mode();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_is_dark_mode,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  get_accent_color() {
    DisplayServer.init_method_get_accent_color();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_get_accent_color,
      this._owner,
			Variant.Type.COLOR,
    
      
    );
    
  }
  get_base_color() {
    DisplayServer.init_method_get_base_color();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_get_base_color,
      this._owner,
			Variant.Type.COLOR,
    
      
    );
    
  }
  set_system_theme_change_callback(_callable) {
    DisplayServer.init_method_set_system_theme_change_callback();
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_set_system_theme_change_callback,
      this._owner,
      _callable
    );
    
  }
  mouse_set_mode(_mouse_mode) {
    DisplayServer.init_method_mouse_set_mode();
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_mouse_set_mode,
      this._owner,
      _mouse_mode
    );
    
  }
  mouse_get_mode() {
    DisplayServer.init_method_mouse_get_mode();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_mouse_get_mode,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  warp_mouse(_position) {
    DisplayServer.init_method_warp_mouse();
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_warp_mouse,
      this._owner,
      _position
    );
    
  }
  mouse_get_position() {
    DisplayServer.init_method_mouse_get_position();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_mouse_get_position,
      this._owner,
			Variant.Type.VECTOR2I,
    
      
    );
    
  }
  mouse_get_button_state() {
    DisplayServer.init_method_mouse_get_button_state();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_mouse_get_button_state,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  clipboard_set(_clipboard) {
    DisplayServer.init_method_clipboard_set();
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_clipboard_set,
      this._owner,
      _clipboard
    );
    
  }
  clipboard_get() {
    DisplayServer.init_method_clipboard_get();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_clipboard_get,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  clipboard_get_image() {
    DisplayServer.init_method_clipboard_get_image();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_clipboard_get_image,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  clipboard_has() {
    DisplayServer.init_method_clipboard_has();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_clipboard_has,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  clipboard_has_image() {
    DisplayServer.init_method_clipboard_has_image();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_clipboard_has_image,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  clipboard_set_primary(_clipboard_primary) {
    DisplayServer.init_method_clipboard_set_primary();
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_clipboard_set_primary,
      this._owner,
      _clipboard_primary
    );
    
  }
  clipboard_get_primary() {
    DisplayServer.init_method_clipboard_get_primary();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_clipboard_get_primary,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  get_display_cutouts() {
    DisplayServer.init_method_get_display_cutouts();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_get_display_cutouts,
      this._owner,
			Variant.Type.ARRAY,
      
    );
    
  }
  get_display_safe_area() {
    DisplayServer.init_method_get_display_safe_area();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_get_display_safe_area,
      this._owner,
			Variant.Type.RECT2I,
    
      
    );
    
  }
  get_screen_count() {
    DisplayServer.init_method_get_screen_count();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_get_screen_count,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_primary_screen() {
    DisplayServer.init_method_get_primary_screen();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_get_primary_screen,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_keyboard_focus_screen() {
    DisplayServer.init_method_get_keyboard_focus_screen();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_get_keyboard_focus_screen,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_screen_from_rect(_rect) {
    DisplayServer.init_method_get_screen_from_rect();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_get_screen_from_rect,
      this._owner,
			Variant.Type.INT,
    
      _rect
    );
    
  }
  screen_get_position(_screen) {
    DisplayServer.init_method_screen_get_position();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_screen_get_position,
      this._owner,
			Variant.Type.VECTOR2I,
    
      _screen
    );
    
  }
  screen_get_size(_screen) {
    DisplayServer.init_method_screen_get_size();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_screen_get_size,
      this._owner,
			Variant.Type.VECTOR2I,
    
      _screen
    );
    
  }
  screen_get_usable_rect(_screen) {
    DisplayServer.init_method_screen_get_usable_rect();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_screen_get_usable_rect,
      this._owner,
			Variant.Type.RECT2I,
    
      _screen
    );
    
  }
  screen_get_dpi(_screen) {
    DisplayServer.init_method_screen_get_dpi();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_screen_get_dpi,
      this._owner,
			Variant.Type.INT,
    
      _screen
    );
    
  }
  screen_get_scale(_screen) {
    DisplayServer.init_method_screen_get_scale();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_screen_get_scale,
      this._owner,
			Variant.Type.FLOAT,
    
      _screen
    );
    
  }
  is_touchscreen_available() {
    DisplayServer.init_method_is_touchscreen_available();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_is_touchscreen_available,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  screen_get_max_scale() {
    DisplayServer.init_method_screen_get_max_scale();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_screen_get_max_scale,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  screen_get_refresh_rate(_screen) {
    DisplayServer.init_method_screen_get_refresh_rate();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_screen_get_refresh_rate,
      this._owner,
			Variant.Type.FLOAT,
    
      _screen
    );
    
  }
  screen_get_pixel(_position) {
    DisplayServer.init_method_screen_get_pixel();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_screen_get_pixel,
      this._owner,
			Variant.Type.COLOR,
    
      _position
    );
    
  }
  screen_get_image(_screen) {
    DisplayServer.init_method_screen_get_image();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_screen_get_image,
      this._owner,
			Variant.Type.OBJECT,
      _screen
    );
    
  }
  screen_set_orientation(_orientation, _screen) {
    DisplayServer.init_method_screen_set_orientation();
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_screen_set_orientation,
      this._owner,
      _orientation, _screen
    );
    
  }
  screen_get_orientation(_screen) {
    DisplayServer.init_method_screen_get_orientation();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_screen_get_orientation,
      this._owner,
			Variant.Type.INT,
    
      _screen
    );
    
  }
  screen_set_keep_on(_enable) {
    DisplayServer.init_method_screen_set_keep_on();
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_screen_set_keep_on,
      this._owner,
      _enable
    );
    
  }
  screen_is_kept_on() {
    DisplayServer.init_method_screen_is_kept_on();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_screen_is_kept_on,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  get_window_list() {
    DisplayServer.init_method_get_window_list();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_get_window_list,
      this._owner,
			Variant.Type.PACKED_INT32_ARRAY,
    
      
    );
    
  }
  get_window_at_screen_position(_position) {
    DisplayServer.init_method_get_window_at_screen_position();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_get_window_at_screen_position,
      this._owner,
			Variant.Type.INT,
    
      _position
    );
    
  }
  window_get_native_handle(_handle_type, _window_id) {
    DisplayServer.init_method_window_get_native_handle();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_window_get_native_handle,
      this._owner,
			Variant.Type.INT,
    
      _handle_type, _window_id
    );
    
  }
  window_get_active_popup() {
    DisplayServer.init_method_window_get_active_popup();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_window_get_active_popup,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  window_set_popup_safe_rect(_window, _rect) {
    DisplayServer.init_method_window_set_popup_safe_rect();
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_window_set_popup_safe_rect,
      this._owner,
      _window, _rect
    );
    
  }
  window_get_popup_safe_rect(_window) {
    DisplayServer.init_method_window_get_popup_safe_rect();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_window_get_popup_safe_rect,
      this._owner,
			Variant.Type.RECT2I,
    
      _window
    );
    
  }
  window_set_title(_title, _window_id) {
    DisplayServer.init_method_window_set_title();
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_window_set_title,
      this._owner,
      _title, _window_id
    );
    
  }
  window_get_title_size(_title, _window_id) {
    DisplayServer.init_method_window_get_title_size();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_window_get_title_size,
      this._owner,
			Variant.Type.VECTOR2I,
    
      _title, _window_id
    );
    
  }
  window_set_mouse_passthrough(_region, _window_id) {
    DisplayServer.init_method_window_set_mouse_passthrough();
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_window_set_mouse_passthrough,
      this._owner,
      _region, _window_id
    );
    
  }
  window_get_current_screen(_window_id) {
    DisplayServer.init_method_window_get_current_screen();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_window_get_current_screen,
      this._owner,
			Variant.Type.INT,
    
      _window_id
    );
    
  }
  window_set_current_screen(_screen, _window_id) {
    DisplayServer.init_method_window_set_current_screen();
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_window_set_current_screen,
      this._owner,
      _screen, _window_id
    );
    
  }
  window_get_position(_window_id) {
    DisplayServer.init_method_window_get_position();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_window_get_position,
      this._owner,
			Variant.Type.VECTOR2I,
    
      _window_id
    );
    
  }
  window_get_position_with_decorations(_window_id) {
    DisplayServer.init_method_window_get_position_with_decorations();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_window_get_position_with_decorations,
      this._owner,
			Variant.Type.VECTOR2I,
    
      _window_id
    );
    
  }
  window_set_position(_position, _window_id) {
    DisplayServer.init_method_window_set_position();
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_window_set_position,
      this._owner,
      _position, _window_id
    );
    
  }
  window_get_size(_window_id) {
    DisplayServer.init_method_window_get_size();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_window_get_size,
      this._owner,
			Variant.Type.VECTOR2I,
    
      _window_id
    );
    
  }
  window_set_size(_size, _window_id) {
    DisplayServer.init_method_window_set_size();
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_window_set_size,
      this._owner,
      _size, _window_id
    );
    
  }
  window_set_rect_changed_callback(_callback, _window_id) {
    DisplayServer.init_method_window_set_rect_changed_callback();
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_window_set_rect_changed_callback,
      this._owner,
      _callback, _window_id
    );
    
  }
  window_set_window_event_callback(_callback, _window_id) {
    DisplayServer.init_method_window_set_window_event_callback();
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_window_set_window_event_callback,
      this._owner,
      _callback, _window_id
    );
    
  }
  window_set_input_event_callback(_callback, _window_id) {
    DisplayServer.init_method_window_set_input_event_callback();
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_window_set_input_event_callback,
      this._owner,
      _callback, _window_id
    );
    
  }
  window_set_input_text_callback(_callback, _window_id) {
    DisplayServer.init_method_window_set_input_text_callback();
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_window_set_input_text_callback,
      this._owner,
      _callback, _window_id
    );
    
  }
  window_set_drop_files_callback(_callback, _window_id) {
    DisplayServer.init_method_window_set_drop_files_callback();
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_window_set_drop_files_callback,
      this._owner,
      _callback, _window_id
    );
    
  }
  window_get_attached_instance_id(_window_id) {
    DisplayServer.init_method_window_get_attached_instance_id();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_window_get_attached_instance_id,
      this._owner,
			Variant.Type.INT,
    
      _window_id
    );
    
  }
  window_get_max_size(_window_id) {
    DisplayServer.init_method_window_get_max_size();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_window_get_max_size,
      this._owner,
			Variant.Type.VECTOR2I,
    
      _window_id
    );
    
  }
  window_set_max_size(_max_size, _window_id) {
    DisplayServer.init_method_window_set_max_size();
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_window_set_max_size,
      this._owner,
      _max_size, _window_id
    );
    
  }
  window_get_min_size(_window_id) {
    DisplayServer.init_method_window_get_min_size();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_window_get_min_size,
      this._owner,
			Variant.Type.VECTOR2I,
    
      _window_id
    );
    
  }
  window_set_min_size(_min_size, _window_id) {
    DisplayServer.init_method_window_set_min_size();
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_window_set_min_size,
      this._owner,
      _min_size, _window_id
    );
    
  }
  window_get_size_with_decorations(_window_id) {
    DisplayServer.init_method_window_get_size_with_decorations();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_window_get_size_with_decorations,
      this._owner,
			Variant.Type.VECTOR2I,
    
      _window_id
    );
    
  }
  window_get_mode(_window_id) {
    DisplayServer.init_method_window_get_mode();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_window_get_mode,
      this._owner,
			Variant.Type.INT,
    
      _window_id
    );
    
  }
  window_set_mode(_mode, _window_id) {
    DisplayServer.init_method_window_set_mode();
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_window_set_mode,
      this._owner,
      _mode, _window_id
    );
    
  }
  window_set_flag(_flag, _enabled, _window_id) {
    DisplayServer.init_method_window_set_flag();
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_window_set_flag,
      this._owner,
      _flag, _enabled, _window_id
    );
    
  }
  window_get_flag(_flag, _window_id) {
    DisplayServer.init_method_window_get_flag();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_window_get_flag,
      this._owner,
			Variant.Type.BOOL,
    
      _flag, _window_id
    );
    
  }
  window_set_window_buttons_offset(_offset, _window_id) {
    DisplayServer.init_method_window_set_window_buttons_offset();
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_window_set_window_buttons_offset,
      this._owner,
      _offset, _window_id
    );
    
  }
  window_get_safe_title_margins(_window_id) {
    DisplayServer.init_method_window_get_safe_title_margins();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_window_get_safe_title_margins,
      this._owner,
			Variant.Type.VECTOR3I,
    
      _window_id
    );
    
  }
  window_request_attention(_window_id) {
    DisplayServer.init_method_window_request_attention();
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_window_request_attention,
      this._owner,
      _window_id
    );
    
  }
  window_move_to_foreground(_window_id) {
    DisplayServer.init_method_window_move_to_foreground();
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_window_move_to_foreground,
      this._owner,
      _window_id
    );
    
  }
  window_is_focused(_window_id) {
    DisplayServer.init_method_window_is_focused();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_window_is_focused,
      this._owner,
			Variant.Type.BOOL,
    
      _window_id
    );
    
  }
  window_can_draw(_window_id) {
    DisplayServer.init_method_window_can_draw();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_window_can_draw,
      this._owner,
			Variant.Type.BOOL,
    
      _window_id
    );
    
  }
  window_set_transient(_window_id, _parent_window_id) {
    DisplayServer.init_method_window_set_transient();
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_window_set_transient,
      this._owner,
      _window_id, _parent_window_id
    );
    
  }
  window_set_exclusive(_window_id, _exclusive) {
    DisplayServer.init_method_window_set_exclusive();
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_window_set_exclusive,
      this._owner,
      _window_id, _exclusive
    );
    
  }
  window_set_ime_active(_active, _window_id) {
    DisplayServer.init_method_window_set_ime_active();
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_window_set_ime_active,
      this._owner,
      _active, _window_id
    );
    
  }
  window_set_ime_position(_position, _window_id) {
    DisplayServer.init_method_window_set_ime_position();
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_window_set_ime_position,
      this._owner,
      _position, _window_id
    );
    
  }
  window_set_vsync_mode(_vsync_mode, _window_id) {
    DisplayServer.init_method_window_set_vsync_mode();
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_window_set_vsync_mode,
      this._owner,
      _vsync_mode, _window_id
    );
    
  }
  window_get_vsync_mode(_window_id) {
    DisplayServer.init_method_window_get_vsync_mode();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_window_get_vsync_mode,
      this._owner,
			Variant.Type.INT,
    
      _window_id
    );
    
  }
  window_is_maximize_allowed(_window_id) {
    DisplayServer.init_method_window_is_maximize_allowed();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_window_is_maximize_allowed,
      this._owner,
			Variant.Type.BOOL,
    
      _window_id
    );
    
  }
  window_maximize_on_title_dbl_click() {
    DisplayServer.init_method_window_maximize_on_title_dbl_click();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_window_maximize_on_title_dbl_click,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  window_minimize_on_title_dbl_click() {
    DisplayServer.init_method_window_minimize_on_title_dbl_click();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_window_minimize_on_title_dbl_click,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  ime_get_selection() {
    DisplayServer.init_method_ime_get_selection();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_ime_get_selection,
      this._owner,
			Variant.Type.VECTOR2I,
    
      
    );
    
  }
  ime_get_text() {
    DisplayServer.init_method_ime_get_text();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_ime_get_text,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  virtual_keyboard_show(_existing_text, _position, _type, _max_length, _cursor_start, _cursor_end) {
    DisplayServer.init_method_virtual_keyboard_show();
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_virtual_keyboard_show,
      this._owner,
      _existing_text, _position, _type, _max_length, _cursor_start, _cursor_end
    );
    
  }
  virtual_keyboard_hide() {
    DisplayServer.init_method_virtual_keyboard_hide();
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_virtual_keyboard_hide,
      this._owner,
      
    );
    
  }
  virtual_keyboard_get_height() {
    DisplayServer.init_method_virtual_keyboard_get_height();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_virtual_keyboard_get_height,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  cursor_set_shape(_shape) {
    DisplayServer.init_method_cursor_set_shape();
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_cursor_set_shape,
      this._owner,
      _shape
    );
    
  }
  cursor_get_shape() {
    DisplayServer.init_method_cursor_get_shape();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_cursor_get_shape,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  cursor_set_custom_image(_cursor, _shape, _hotspot) {
    DisplayServer.init_method_cursor_set_custom_image();
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_cursor_set_custom_image,
      this._owner,
      _cursor, _shape, _hotspot
    );
    
  }
  get_swap_cancel_ok() {
    DisplayServer.init_method_get_swap_cancel_ok();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_get_swap_cancel_ok,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  enable_for_stealing_focus(_process_id) {
    DisplayServer.init_method_enable_for_stealing_focus();
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_enable_for_stealing_focus,
      this._owner,
      _process_id
    );
    
  }
  dialog_show(_title, _description, _buttons, _callback) {
    DisplayServer.init_method_dialog_show();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_dialog_show,
      this._owner,
			Variant.Type.INT,
    
      _title, _description, _buttons, _callback
    );
    
  }
  dialog_input_text(_title, _description, _existing_text, _callback) {
    DisplayServer.init_method_dialog_input_text();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_dialog_input_text,
      this._owner,
			Variant.Type.INT,
    
      _title, _description, _existing_text, _callback
    );
    
  }
  file_dialog_show(_title, _current_directory, _filename, _show_hidden, _mode, _filters, _callback) {
    DisplayServer.init_method_file_dialog_show();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_file_dialog_show,
      this._owner,
			Variant.Type.INT,
    
      _title, _current_directory, _filename, _show_hidden, _mode, _filters, _callback
    );
    
  }
  file_dialog_with_options_show(_title, _current_directory, _root, _filename, _show_hidden, _mode, _filters, _options, _callback) {
    DisplayServer.init_method_file_dialog_with_options_show();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_file_dialog_with_options_show,
      this._owner,
			Variant.Type.INT,
    
      _title, _current_directory, _root, _filename, _show_hidden, _mode, _filters, _options, _callback
    );
    
  }
  keyboard_get_layout_count() {
    DisplayServer.init_method_keyboard_get_layout_count();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_keyboard_get_layout_count,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  keyboard_get_current_layout() {
    DisplayServer.init_method_keyboard_get_current_layout();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_keyboard_get_current_layout,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  keyboard_set_current_layout(_index) {
    DisplayServer.init_method_keyboard_set_current_layout();
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_keyboard_set_current_layout,
      this._owner,
      _index
    );
    
  }
  keyboard_get_layout_language(_index) {
    DisplayServer.init_method_keyboard_get_layout_language();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_keyboard_get_layout_language,
      this._owner,
			Variant.Type.STRING,
    
      _index
    );
    
  }
  keyboard_get_layout_name(_index) {
    DisplayServer.init_method_keyboard_get_layout_name();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_keyboard_get_layout_name,
      this._owner,
			Variant.Type.STRING,
    
      _index
    );
    
  }
  keyboard_get_keycode_from_physical(_keycode) {
    DisplayServer.init_method_keyboard_get_keycode_from_physical();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_keyboard_get_keycode_from_physical,
      this._owner,
			Variant.Type.INT,
    
      _keycode
    );
    
  }
  keyboard_get_label_from_physical(_keycode) {
    DisplayServer.init_method_keyboard_get_label_from_physical();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_keyboard_get_label_from_physical,
      this._owner,
			Variant.Type.INT,
    
      _keycode
    );
    
  }
  process_events() {
    DisplayServer.init_method_process_events();
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_process_events,
      this._owner,
      
    );
    
  }
  force_process_and_drop_events() {
    DisplayServer.init_method_force_process_and_drop_events();
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_force_process_and_drop_events,
      this._owner,
      
    );
    
  }
  set_native_icon(_filename) {
    DisplayServer.init_method_set_native_icon();
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_set_native_icon,
      this._owner,
      _filename
    );
    
  }
  set_icon(_image) {
    DisplayServer.init_method_set_icon();
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_set_icon,
      this._owner,
      _image
    );
    
  }
  create_status_indicator(_icon, _tooltip, _callback) {
    DisplayServer.init_method_create_status_indicator();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_create_status_indicator,
      this._owner,
			Variant.Type.INT,
    
      _icon, _tooltip, _callback
    );
    
  }
  status_indicator_set_icon(_id, _icon) {
    DisplayServer.init_method_status_indicator_set_icon();
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_status_indicator_set_icon,
      this._owner,
      _id, _icon
    );
    
  }
  status_indicator_set_tooltip(_id, _tooltip) {
    DisplayServer.init_method_status_indicator_set_tooltip();
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_status_indicator_set_tooltip,
      this._owner,
      _id, _tooltip
    );
    
  }
  status_indicator_set_menu(_id, _menu_rid) {
    DisplayServer.init_method_status_indicator_set_menu();
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_status_indicator_set_menu,
      this._owner,
      _id, _menu_rid
    );
    
  }
  status_indicator_set_callback(_id, _callback) {
    DisplayServer.init_method_status_indicator_set_callback();
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_status_indicator_set_callback,
      this._owner,
      _id, _callback
    );
    
  }
  status_indicator_get_rect(_id) {
    DisplayServer.init_method_status_indicator_get_rect();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_status_indicator_get_rect,
      this._owner,
			Variant.Type.RECT2,
    
      _id
    );
    
  }
  delete_status_indicator(_id) {
    DisplayServer.init_method_delete_status_indicator();
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_delete_status_indicator,
      this._owner,
      _id
    );
    
  }
  tablet_get_driver_count() {
    DisplayServer.init_method_tablet_get_driver_count();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_tablet_get_driver_count,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  tablet_get_driver_name(_idx) {
    DisplayServer.init_method_tablet_get_driver_name();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_tablet_get_driver_name,
      this._owner,
			Variant.Type.STRING,
    
      _idx
    );
    
  }
  tablet_get_current_driver() {
    DisplayServer.init_method_tablet_get_current_driver();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_tablet_get_current_driver,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  tablet_set_current_driver(_name) {
    DisplayServer.init_method_tablet_set_current_driver();
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_tablet_set_current_driver,
      this._owner,
      _name
    );
    
  }
  is_window_transparency_available() {
    DisplayServer.init_method_is_window_transparency_available();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_is_window_transparency_available,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  register_additional_output(_object) {
    DisplayServer.init_method_register_additional_output();
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_register_additional_output,
      this._owner,
      _object
    );
    
  }
  unregister_additional_output(_object) {
    DisplayServer.init_method_unregister_additional_output();
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_unregister_additional_output,
      this._owner,
      _object
    );
    
  }
  has_additional_outputs() {
    DisplayServer.init_method_has_additional_outputs();
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_has_additional_outputs,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  

  static Feature = {
    FEATURE_GLOBAL_MENU: 0,
    FEATURE_SUBWINDOWS: 1,
    FEATURE_TOUCHSCREEN: 2,
    FEATURE_MOUSE: 3,
    FEATURE_MOUSE_WARP: 4,
    FEATURE_CLIPBOARD: 5,
    FEATURE_VIRTUAL_KEYBOARD: 6,
    FEATURE_CURSOR_SHAPE: 7,
    FEATURE_CUSTOM_CURSOR_SHAPE: 8,
    FEATURE_NATIVE_DIALOG: 9,
    FEATURE_IME: 10,
    FEATURE_WINDOW_TRANSPARENCY: 11,
    FEATURE_HIDPI: 12,
    FEATURE_ICON: 13,
    FEATURE_NATIVE_ICON: 14,
    FEATURE_ORIENTATION: 15,
    FEATURE_SWAP_BUFFERS: 16,
    FEATURE_CLIPBOARD_PRIMARY: 18,
    FEATURE_TEXT_TO_SPEECH: 19,
    FEATURE_EXTEND_TO_TITLE: 20,
    FEATURE_SCREEN_CAPTURE: 21,
    FEATURE_STATUS_INDICATOR: 22,
    FEATURE_NATIVE_HELP: 23,
    FEATURE_NATIVE_DIALOG_INPUT: 24,
    FEATURE_NATIVE_DIALOG_FILE: 25,
  }
  static MouseMode = {
    MOUSE_MODE_VISIBLE: 0,
    MOUSE_MODE_HIDDEN: 1,
    MOUSE_MODE_CAPTURED: 2,
    MOUSE_MODE_CONFINED: 3,
    MOUSE_MODE_CONFINED_HIDDEN: 4,
  }
  static ScreenOrientation = {
    SCREEN_LANDSCAPE: 0,
    SCREEN_PORTRAIT: 1,
    SCREEN_REVERSE_LANDSCAPE: 2,
    SCREEN_REVERSE_PORTRAIT: 3,
    SCREEN_SENSOR_LANDSCAPE: 4,
    SCREEN_SENSOR_PORTRAIT: 5,
    SCREEN_SENSOR: 6,
  }
  static VirtualKeyboardType = {
    KEYBOARD_TYPE_DEFAULT: 0,
    KEYBOARD_TYPE_MULTILINE: 1,
    KEYBOARD_TYPE_NUMBER: 2,
    KEYBOARD_TYPE_NUMBER_DECIMAL: 3,
    KEYBOARD_TYPE_PHONE: 4,
    KEYBOARD_TYPE_EMAIL_ADDRESS: 5,
    KEYBOARD_TYPE_PASSWORD: 6,
    KEYBOARD_TYPE_URL: 7,
  }
  static CursorShape = {
    CURSOR_ARROW: 0,
    CURSOR_IBEAM: 1,
    CURSOR_POINTING_HAND: 2,
    CURSOR_CROSS: 3,
    CURSOR_WAIT: 4,
    CURSOR_BUSY: 5,
    CURSOR_DRAG: 6,
    CURSOR_CAN_DROP: 7,
    CURSOR_FORBIDDEN: 8,
    CURSOR_VSIZE: 9,
    CURSOR_HSIZE: 10,
    CURSOR_BDIAGSIZE: 11,
    CURSOR_FDIAGSIZE: 12,
    CURSOR_MOVE: 13,
    CURSOR_VSPLIT: 14,
    CURSOR_HSPLIT: 15,
    CURSOR_HELP: 16,
    CURSOR_MAX: 17,
  }
  static FileDialogMode = {
    FILE_DIALOG_MODE_OPEN_FILE: 0,
    FILE_DIALOG_MODE_OPEN_FILES: 1,
    FILE_DIALOG_MODE_OPEN_DIR: 2,
    FILE_DIALOG_MODE_OPEN_ANY: 3,
    FILE_DIALOG_MODE_SAVE_FILE: 4,
  }
  static WindowMode = {
    WINDOW_MODE_WINDOWED: 0,
    WINDOW_MODE_MINIMIZED: 1,
    WINDOW_MODE_MAXIMIZED: 2,
    WINDOW_MODE_FULLSCREEN: 3,
    WINDOW_MODE_EXCLUSIVE_FULLSCREEN: 4,
  }
  static WindowFlags = {
    WINDOW_FLAG_RESIZE_DISABLED: 0,
    WINDOW_FLAG_BORDERLESS: 1,
    WINDOW_FLAG_ALWAYS_ON_TOP: 2,
    WINDOW_FLAG_TRANSPARENT: 3,
    WINDOW_FLAG_NO_FOCUS: 4,
    WINDOW_FLAG_POPUP: 5,
    WINDOW_FLAG_EXTEND_TO_TITLE: 6,
    WINDOW_FLAG_MOUSE_PASSTHROUGH: 7,
    WINDOW_FLAG_MAX: 8,
  }
  static WindowEvent = {
    WINDOW_EVENT_MOUSE_ENTER: 0,
    WINDOW_EVENT_MOUSE_EXIT: 1,
    WINDOW_EVENT_FOCUS_IN: 2,
    WINDOW_EVENT_FOCUS_OUT: 3,
    WINDOW_EVENT_CLOSE_REQUEST: 4,
    WINDOW_EVENT_GO_BACK_REQUEST: 5,
    WINDOW_EVENT_DPI_CHANGE: 6,
    WINDOW_EVENT_TITLEBAR_CHANGE: 7,
  }
  static VSyncMode = {
    VSYNC_DISABLED: 0,
    VSYNC_ENABLED: 1,
    VSYNC_ADAPTIVE: 2,
    VSYNC_MAILBOX: 3,
  }
  static HandleType = {
    DISPLAY_HANDLE: 0,
    WINDOW_HANDLE: 1,
    WINDOW_VIEW: 2,
    OPENGL_CONTEXT: 3,
  }
  static TTSUtteranceEvent = {
    TTS_UTTERANCE_STARTED: 0,
    TTS_UTTERANCE_ENDED: 1,
    TTS_UTTERANCE_CANCELED: 2,
    TTS_UTTERANCE_BOUNDARY: 3,
  }
}
export const DisplayServer = (function () {
  let _instance;
  function create_instance() {
    return new _DisplayServer();
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