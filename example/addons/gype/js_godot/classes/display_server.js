import * as internal from '__internal__';
import { Vector2 } from '@js_godot/variant/vector2'
import { Dictionary } from '@js_godot/variant/dictionary'
import { RID } from '@js_godot/variant/rid'
import { PackedStringArray } from '@js_godot/variant/packed_string_array'
import { StringName } from '@js_godot/variant/string_name'
import { GodotObject } from '@js_godot/classes/godot_object'
import { Rect2i } from '@js_godot/variant/rect2i'
import { PackedInt32Array } from '@js_godot/variant/packed_int32_array'
import { PackedVector2Array } from '@js_godot/variant/packed_vector2_array'
import { Vector3i } from '@js_godot/variant/vector3i'
import { Color } from '@js_godot/variant/color'
import { Callable } from '@js_godot/variant/callable'
import { Variant } from '@js_godot/variant/variant'
import { GDString } from '@js_godot/variant/gd_string'
import { Vector2i } from '@js_godot/variant/vector2i'
import { Rect2 } from '@js_godot/variant/rect2'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

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
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("DisplayServer");
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
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("has_feature");
      this._bindings.method_has_feature = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        334065950
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("get_name");
      this._bindings.method_get_name = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        201670096
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("help_set_search_callbacks");
      this._bindings.method_help_set_search_callbacks = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1687350599
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("global_menu_set_popup_callbacks");
      this._bindings.method_global_menu_set_popup_callbacks = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3893727526
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("global_menu_add_submenu_item");
      this._bindings.method_global_menu_add_submenu_item = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2828985934
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("global_menu_add_item");
      this._bindings.method_global_menu_add_item = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3401266716
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("global_menu_add_check_item");
      this._bindings.method_global_menu_add_check_item = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3401266716
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("global_menu_add_icon_item");
      this._bindings.method_global_menu_add_icon_item = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4245856523
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("global_menu_add_icon_check_item");
      this._bindings.method_global_menu_add_icon_check_item = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4245856523
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("global_menu_add_radio_check_item");
      this._bindings.method_global_menu_add_radio_check_item = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3401266716
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("global_menu_add_icon_radio_check_item");
      this._bindings.method_global_menu_add_icon_radio_check_item = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4245856523
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("global_menu_add_multistate_item");
      this._bindings.method_global_menu_add_multistate_item = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3431222859
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("global_menu_add_separator");
      this._bindings.method_global_menu_add_separator = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3214812433
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("global_menu_get_item_index_from_text");
      this._bindings.method_global_menu_get_item_index_from_text = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2878152881
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("global_menu_get_item_index_from_tag");
      this._bindings.method_global_menu_get_item_index_from_tag = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2941063483
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("global_menu_is_item_checked");
      this._bindings.method_global_menu_is_item_checked = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3511468594
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("global_menu_is_item_checkable");
      this._bindings.method_global_menu_is_item_checkable = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3511468594
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("global_menu_is_item_radio_checkable");
      this._bindings.method_global_menu_is_item_radio_checkable = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3511468594
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("global_menu_get_item_callback");
      this._bindings.method_global_menu_get_item_callback = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        748666903
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("global_menu_get_item_key_callback");
      this._bindings.method_global_menu_get_item_key_callback = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        748666903
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("global_menu_get_item_tag");
      this._bindings.method_global_menu_get_item_tag = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        330672633
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("global_menu_get_item_text");
      this._bindings.method_global_menu_get_item_text = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        591067909
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("global_menu_get_item_submenu");
      this._bindings.method_global_menu_get_item_submenu = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        591067909
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("global_menu_get_item_accelerator");
      this._bindings.method_global_menu_get_item_accelerator = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        936065394
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("global_menu_is_item_disabled");
      this._bindings.method_global_menu_is_item_disabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3511468594
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("global_menu_is_item_hidden");
      this._bindings.method_global_menu_is_item_hidden = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3511468594
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("global_menu_get_item_tooltip");
      this._bindings.method_global_menu_get_item_tooltip = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        591067909
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("global_menu_get_item_state");
      this._bindings.method_global_menu_get_item_state = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3422818498
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("global_menu_get_item_max_states");
      this._bindings.method_global_menu_get_item_max_states = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3422818498
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("global_menu_get_item_icon");
      this._bindings.method_global_menu_get_item_icon = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3591713183
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("global_menu_get_item_indentation_level");
      this._bindings.method_global_menu_get_item_indentation_level = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3422818498
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("global_menu_set_item_checked");
      this._bindings.method_global_menu_set_item_checked = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4108344793
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("global_menu_set_item_checkable");
      this._bindings.method_global_menu_set_item_checkable = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4108344793
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("global_menu_set_item_radio_checkable");
      this._bindings.method_global_menu_set_item_radio_checkable = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4108344793
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("global_menu_set_item_callback");
      this._bindings.method_global_menu_set_item_callback = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3809915389
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("global_menu_set_item_hover_callbacks");
      this._bindings.method_global_menu_set_item_hover_callbacks = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3809915389
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("global_menu_set_item_key_callback");
      this._bindings.method_global_menu_set_item_key_callback = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3809915389
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("global_menu_set_item_tag");
      this._bindings.method_global_menu_set_item_tag = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        453659863
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("global_menu_set_item_text");
      this._bindings.method_global_menu_set_item_text = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        965966136
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("global_menu_set_item_submenu");
      this._bindings.method_global_menu_set_item_submenu = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        965966136
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("global_menu_set_item_accelerator");
      this._bindings.method_global_menu_set_item_accelerator = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        566943293
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("global_menu_set_item_disabled");
      this._bindings.method_global_menu_set_item_disabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4108344793
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("global_menu_set_item_hidden");
      this._bindings.method_global_menu_set_item_hidden = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4108344793
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("global_menu_set_item_tooltip");
      this._bindings.method_global_menu_set_item_tooltip = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        965966136
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("global_menu_set_item_state");
      this._bindings.method_global_menu_set_item_state = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3474840532
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("global_menu_set_item_max_states");
      this._bindings.method_global_menu_set_item_max_states = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3474840532
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("global_menu_set_item_icon");
      this._bindings.method_global_menu_set_item_icon = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3201338066
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("global_menu_set_item_indentation_level");
      this._bindings.method_global_menu_set_item_indentation_level = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3474840532
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("global_menu_get_item_count");
      this._bindings.method_global_menu_get_item_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1321353865
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("global_menu_remove_item");
      this._bindings.method_global_menu_remove_item = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2956805083
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("global_menu_clear");
      this._bindings.method_global_menu_clear = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        83702148
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("global_menu_get_system_menu_roots");
      this._bindings.method_global_menu_get_system_menu_roots = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3102165223
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("tts_is_speaking");
      this._bindings.method_tts_is_speaking = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("tts_is_paused");
      this._bindings.method_tts_is_paused = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("tts_get_voices");
      this._bindings.method_tts_get_voices = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3995934104
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("tts_get_voices_for_language");
      this._bindings.method_tts_get_voices_for_language = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4291131558
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("tts_speak");
      this._bindings.method_tts_speak = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        903992738
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("tts_pause");
      this._bindings.method_tts_pause = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("tts_resume");
      this._bindings.method_tts_resume = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("tts_stop");
      this._bindings.method_tts_stop = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("tts_set_utterance_callback");
      this._bindings.method_tts_set_utterance_callback = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        109679083
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("is_dark_mode_supported");
      this._bindings.method_is_dark_mode_supported = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("is_dark_mode");
      this._bindings.method_is_dark_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("get_accent_color");
      this._bindings.method_get_accent_color = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3444240500
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("get_base_color");
      this._bindings.method_get_base_color = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3444240500
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("set_system_theme_change_callback");
      this._bindings.method_set_system_theme_change_callback = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1611583062
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("mouse_set_mode");
      this._bindings.method_mouse_set_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        348288463
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("mouse_get_mode");
      this._bindings.method_mouse_get_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1353961651
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("warp_mouse");
      this._bindings.method_warp_mouse = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1130785943
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("mouse_get_position");
      this._bindings.method_mouse_get_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3690982128
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("mouse_get_button_state");
      this._bindings.method_mouse_get_button_state = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2512161324
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("clipboard_set");
      this._bindings.method_clipboard_set = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        83702148
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("clipboard_get");
      this._bindings.method_clipboard_get = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        201670096
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("clipboard_get_image");
      this._bindings.method_clipboard_get_image = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4190603485
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("clipboard_has");
      this._bindings.method_clipboard_has = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("clipboard_has_image");
      this._bindings.method_clipboard_has_image = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("clipboard_set_primary");
      this._bindings.method_clipboard_set_primary = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        83702148
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("clipboard_get_primary");
      this._bindings.method_clipboard_get_primary = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        201670096
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("get_display_cutouts");
      this._bindings.method_get_display_cutouts = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3995934104
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("get_display_safe_area");
      this._bindings.method_get_display_safe_area = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        410525958
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("get_screen_count");
      this._bindings.method_get_screen_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("get_primary_screen");
      this._bindings.method_get_primary_screen = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("get_keyboard_focus_screen");
      this._bindings.method_get_keyboard_focus_screen = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("get_screen_from_rect");
      this._bindings.method_get_screen_from_rect = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        741354659
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("screen_get_position");
      this._bindings.method_screen_get_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1725937825
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("screen_get_size");
      this._bindings.method_screen_get_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1725937825
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("screen_get_usable_rect");
      this._bindings.method_screen_get_usable_rect = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2439012528
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("screen_get_dpi");
      this._bindings.method_screen_get_dpi = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        181039630
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("screen_get_scale");
      this._bindings.method_screen_get_scale = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        909105437
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("is_touchscreen_available");
      this._bindings.method_is_touchscreen_available = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3323674545
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("screen_get_max_scale");
      this._bindings.method_screen_get_max_scale = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("screen_get_refresh_rate");
      this._bindings.method_screen_get_refresh_rate = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        909105437
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("screen_get_pixel");
      this._bindings.method_screen_get_pixel = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1532707496
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("screen_get_image");
      this._bindings.method_screen_get_image = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3813388802
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("screen_set_orientation");
      this._bindings.method_screen_set_orientation = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2211511631
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("screen_get_orientation");
      this._bindings.method_screen_get_orientation = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        133818562
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("screen_set_keep_on");
      this._bindings.method_screen_set_keep_on = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("screen_is_kept_on");
      this._bindings.method_screen_is_kept_on = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("get_window_list");
      this._bindings.method_get_window_list = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1930428628
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("get_window_at_screen_position");
      this._bindings.method_get_window_at_screen_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2485466453
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("window_get_native_handle");
      this._bindings.method_window_get_native_handle = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1096425680
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("window_get_active_popup");
      this._bindings.method_window_get_active_popup = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("window_set_popup_safe_rect");
      this._bindings.method_window_set_popup_safe_rect = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3317281434
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("window_get_popup_safe_rect");
      this._bindings.method_window_get_popup_safe_rect = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2161169500
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("window_set_title");
      this._bindings.method_window_set_title = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        441246282
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("window_get_title_size");
      this._bindings.method_window_get_title_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2925301799
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("window_set_mouse_passthrough");
      this._bindings.method_window_set_mouse_passthrough = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1993637420
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("window_get_current_screen");
      this._bindings.method_window_get_current_screen = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1591665591
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("window_set_current_screen");
      this._bindings.method_window_set_current_screen = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2230941749
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("window_get_position");
      this._bindings.method_window_get_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        763922886
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("window_get_position_with_decorations");
      this._bindings.method_window_get_position_with_decorations = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        763922886
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("window_set_position");
      this._bindings.method_window_set_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2019273902
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("window_get_size");
      this._bindings.method_window_get_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        763922886
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("window_set_size");
      this._bindings.method_window_set_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2019273902
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("window_set_rect_changed_callback");
      this._bindings.method_window_set_rect_changed_callback = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1091192925
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("window_set_window_event_callback");
      this._bindings.method_window_set_window_event_callback = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1091192925
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("window_set_input_event_callback");
      this._bindings.method_window_set_input_event_callback = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1091192925
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("window_set_input_text_callback");
      this._bindings.method_window_set_input_text_callback = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1091192925
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("window_set_drop_files_callback");
      this._bindings.method_window_set_drop_files_callback = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1091192925
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("window_get_attached_instance_id");
      this._bindings.method_window_get_attached_instance_id = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1591665591
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("window_get_max_size");
      this._bindings.method_window_get_max_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        763922886
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("window_set_max_size");
      this._bindings.method_window_set_max_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2019273902
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("window_get_min_size");
      this._bindings.method_window_get_min_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        763922886
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("window_set_min_size");
      this._bindings.method_window_set_min_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2019273902
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("window_get_size_with_decorations");
      this._bindings.method_window_get_size_with_decorations = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        763922886
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("window_get_mode");
      this._bindings.method_window_get_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2185728461
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("window_set_mode");
      this._bindings.method_window_set_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1319965401
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("window_set_flag");
      this._bindings.method_window_set_flag = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        254894155
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("window_get_flag");
      this._bindings.method_window_get_flag = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        802816991
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("window_set_window_buttons_offset");
      this._bindings.method_window_set_window_buttons_offset = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2019273902
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("window_get_safe_title_margins");
      this._bindings.method_window_get_safe_title_margins = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2295066620
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("window_request_attention");
      this._bindings.method_window_request_attention = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1995695955
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("window_move_to_foreground");
      this._bindings.method_window_move_to_foreground = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1995695955
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("window_is_focused");
      this._bindings.method_window_is_focused = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1051549951
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("window_can_draw");
      this._bindings.method_window_can_draw = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1051549951
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("window_set_transient");
      this._bindings.method_window_set_transient = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3937882851
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("window_set_exclusive");
      this._bindings.method_window_set_exclusive = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        300928843
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("window_set_ime_active");
      this._bindings.method_window_set_ime_active = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1661950165
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("window_set_ime_position");
      this._bindings.method_window_set_ime_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2019273902
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("window_set_vsync_mode");
      this._bindings.method_window_set_vsync_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2179333492
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("window_get_vsync_mode");
      this._bindings.method_window_get_vsync_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        578873795
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("window_is_maximize_allowed");
      this._bindings.method_window_is_maximize_allowed = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1051549951
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("window_maximize_on_title_dbl_click");
      this._bindings.method_window_maximize_on_title_dbl_click = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("window_minimize_on_title_dbl_click");
      this._bindings.method_window_minimize_on_title_dbl_click = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("ime_get_selection");
      this._bindings.method_ime_get_selection = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3690982128
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("ime_get_text");
      this._bindings.method_ime_get_text = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        201670096
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("virtual_keyboard_show");
      this._bindings.method_virtual_keyboard_show = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3042891259
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("virtual_keyboard_hide");
      this._bindings.method_virtual_keyboard_hide = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("virtual_keyboard_get_height");
      this._bindings.method_virtual_keyboard_get_height = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("cursor_set_shape");
      this._bindings.method_cursor_set_shape = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2026291549
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("cursor_get_shape");
      this._bindings.method_cursor_get_shape = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1087724927
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("cursor_set_custom_image");
      this._bindings.method_cursor_set_custom_image = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1816663697
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("get_swap_cancel_ok");
      this._bindings.method_get_swap_cancel_ok = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2240911060
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("enable_for_stealing_focus");
      this._bindings.method_enable_for_stealing_focus = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("dialog_show");
      this._bindings.method_dialog_show = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4115553226
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("dialog_input_text");
      this._bindings.method_dialog_input_text = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3088703427
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("file_dialog_show");
      this._bindings.method_file_dialog_show = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1531299078
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("file_dialog_with_options_show");
      this._bindings.method_file_dialog_with_options_show = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1305318754
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("keyboard_get_layout_count");
      this._bindings.method_keyboard_get_layout_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("keyboard_get_current_layout");
      this._bindings.method_keyboard_get_current_layout = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("keyboard_set_current_layout");
      this._bindings.method_keyboard_set_current_layout = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("keyboard_get_layout_language");
      this._bindings.method_keyboard_get_layout_language = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        844755477
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("keyboard_get_layout_name");
      this._bindings.method_keyboard_get_layout_name = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        844755477
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("keyboard_get_keycode_from_physical");
      this._bindings.method_keyboard_get_keycode_from_physical = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3447613187
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("keyboard_get_label_from_physical");
      this._bindings.method_keyboard_get_label_from_physical = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3447613187
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("process_events");
      this._bindings.method_process_events = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("force_process_and_drop_events");
      this._bindings.method_force_process_and_drop_events = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("set_native_icon");
      this._bindings.method_set_native_icon = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        83702148
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("set_icon");
      this._bindings.method_set_icon = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        532598488
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("create_status_indicator");
      this._bindings.method_create_status_indicator = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1904285171
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("status_indicator_set_icon");
      this._bindings.method_status_indicator_set_icon = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        666127730
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("status_indicator_set_tooltip");
      this._bindings.method_status_indicator_set_tooltip = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        501894301
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("status_indicator_set_menu");
      this._bindings.method_status_indicator_set_menu = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4040184819
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("status_indicator_set_callback");
      this._bindings.method_status_indicator_set_callback = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        957362965
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("status_indicator_get_rect");
      this._bindings.method_status_indicator_get_rect = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3327874267
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("delete_status_indicator");
      this._bindings.method_delete_status_indicator = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("tablet_get_driver_count");
      this._bindings.method_tablet_get_driver_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("tablet_get_driver_name");
      this._bindings.method_tablet_get_driver_name = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        844755477
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("tablet_get_current_driver");
      this._bindings.method_tablet_get_current_driver = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        201670096
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("tablet_set_current_driver");
      this._bindings.method_tablet_set_current_driver = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        83702148
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("is_window_transparency_available");
      this._bindings.method_is_window_transparency_available = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("register_additional_output");
      this._bindings.method_register_additional_output = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3975164845
      );
    }
    {
      let classname = new StringName("DisplayServer");
      let methodname = new StringName("unregister_additional_output");
      this._bindings.method_unregister_additional_output = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3975164845
      );
    }
    {
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
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_has_feature,
      this._owner,
			Variant.Type.BOOL,
      _feature
    );
    
  }
  get_name() {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_get_name,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  help_set_search_callbacks(_search_callback, _action_callback) {
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_help_set_search_callbacks,
      this._owner,
      _search_callback, _action_callback
    );
    
  }
  global_menu_set_popup_callbacks(_menu_root, _open_callback, _close_callback) {
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_global_menu_set_popup_callbacks,
      this._owner,
      _menu_root, _open_callback, _close_callback
    );
    
  }
  global_menu_add_submenu_item(_menu_root, _label, _submenu, _index) {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_global_menu_add_submenu_item,
      this._owner,
			Variant.Type.INT,
      _menu_root, _label, _submenu, _index
    );
    
  }
  global_menu_add_item(_menu_root, _label, _callback, _key_callback, _tag, _accelerator, _index) {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_global_menu_add_item,
      this._owner,
			Variant.Type.INT,
      _menu_root, _label, _callback, _key_callback, _tag, _accelerator, _index
    );
    
  }
  global_menu_add_check_item(_menu_root, _label, _callback, _key_callback, _tag, _accelerator, _index) {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_global_menu_add_check_item,
      this._owner,
			Variant.Type.INT,
      _menu_root, _label, _callback, _key_callback, _tag, _accelerator, _index
    );
    
  }
  global_menu_add_icon_item(_menu_root, _icon, _label, _callback, _key_callback, _tag, _accelerator, _index) {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_global_menu_add_icon_item,
      this._owner,
			Variant.Type.INT,
      _menu_root, _icon, _label, _callback, _key_callback, _tag, _accelerator, _index
    );
    
  }
  global_menu_add_icon_check_item(_menu_root, _icon, _label, _callback, _key_callback, _tag, _accelerator, _index) {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_global_menu_add_icon_check_item,
      this._owner,
			Variant.Type.INT,
      _menu_root, _icon, _label, _callback, _key_callback, _tag, _accelerator, _index
    );
    
  }
  global_menu_add_radio_check_item(_menu_root, _label, _callback, _key_callback, _tag, _accelerator, _index) {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_global_menu_add_radio_check_item,
      this._owner,
			Variant.Type.INT,
      _menu_root, _label, _callback, _key_callback, _tag, _accelerator, _index
    );
    
  }
  global_menu_add_icon_radio_check_item(_menu_root, _icon, _label, _callback, _key_callback, _tag, _accelerator, _index) {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_global_menu_add_icon_radio_check_item,
      this._owner,
			Variant.Type.INT,
      _menu_root, _icon, _label, _callback, _key_callback, _tag, _accelerator, _index
    );
    
  }
  global_menu_add_multistate_item(_menu_root, _label, _max_states, _default_state, _callback, _key_callback, _tag, _accelerator, _index) {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_global_menu_add_multistate_item,
      this._owner,
			Variant.Type.INT,
      _menu_root, _label, _max_states, _default_state, _callback, _key_callback, _tag, _accelerator, _index
    );
    
  }
  global_menu_add_separator(_menu_root, _index) {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_global_menu_add_separator,
      this._owner,
			Variant.Type.INT,
      _menu_root, _index
    );
    
  }
  global_menu_get_item_index_from_text(_menu_root, _text) {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_global_menu_get_item_index_from_text,
      this._owner,
			Variant.Type.INT,
      _menu_root, _text
    );
    
  }
  global_menu_get_item_index_from_tag(_menu_root, _tag) {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_global_menu_get_item_index_from_tag,
      this._owner,
			Variant.Type.INT,
      _menu_root, _tag
    );
    
  }
  global_menu_is_item_checked(_menu_root, _idx) {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_global_menu_is_item_checked,
      this._owner,
			Variant.Type.BOOL,
      _menu_root, _idx
    );
    
  }
  global_menu_is_item_checkable(_menu_root, _idx) {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_global_menu_is_item_checkable,
      this._owner,
			Variant.Type.BOOL,
      _menu_root, _idx
    );
    
  }
  global_menu_is_item_radio_checkable(_menu_root, _idx) {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_global_menu_is_item_radio_checkable,
      this._owner,
			Variant.Type.BOOL,
      _menu_root, _idx
    );
    
  }
  global_menu_get_item_callback(_menu_root, _idx) {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_global_menu_get_item_callback,
      this._owner,
			Variant.Type.CALLABLE,
    
      _menu_root, _idx
    );
    
  }
  global_menu_get_item_key_callback(_menu_root, _idx) {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_global_menu_get_item_key_callback,
      this._owner,
			Variant.Type.CALLABLE,
    
      _menu_root, _idx
    );
    
  }
  global_menu_get_item_tag(_menu_root, _idx) {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_global_menu_get_item_tag,
      this._owner,
			Variant.Type.VARIANT,
    
      _menu_root, _idx
    );
    
  }
  global_menu_get_item_text(_menu_root, _idx) {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_global_menu_get_item_text,
      this._owner,
			Variant.Type.STRING,
    
      _menu_root, _idx
    );
    
  }
  global_menu_get_item_submenu(_menu_root, _idx) {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_global_menu_get_item_submenu,
      this._owner,
			Variant.Type.STRING,
    
      _menu_root, _idx
    );
    
  }
  global_menu_get_item_accelerator(_menu_root, _idx) {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_global_menu_get_item_accelerator,
      this._owner,
			Variant.INT,
      _menu_root, _idx
    );
    
  }
  global_menu_is_item_disabled(_menu_root, _idx) {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_global_menu_is_item_disabled,
      this._owner,
			Variant.Type.BOOL,
      _menu_root, _idx
    );
    
  }
  global_menu_is_item_hidden(_menu_root, _idx) {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_global_menu_is_item_hidden,
      this._owner,
			Variant.Type.BOOL,
      _menu_root, _idx
    );
    
  }
  global_menu_get_item_tooltip(_menu_root, _idx) {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_global_menu_get_item_tooltip,
      this._owner,
			Variant.Type.STRING,
    
      _menu_root, _idx
    );
    
  }
  global_menu_get_item_state(_menu_root, _idx) {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_global_menu_get_item_state,
      this._owner,
			Variant.Type.INT,
      _menu_root, _idx
    );
    
  }
  global_menu_get_item_max_states(_menu_root, _idx) {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_global_menu_get_item_max_states,
      this._owner,
			Variant.Type.INT,
      _menu_root, _idx
    );
    
  }
  global_menu_get_item_icon(_menu_root, _idx) {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_global_menu_get_item_icon,
      this._owner,
			Variant.INT,
      _menu_root, _idx
    );
    
  }
  global_menu_get_item_indentation_level(_menu_root, _idx) {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_global_menu_get_item_indentation_level,
      this._owner,
			Variant.Type.INT,
      _menu_root, _idx
    );
    
  }
  global_menu_set_item_checked(_menu_root, _idx, _checked) {
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_global_menu_set_item_checked,
      this._owner,
      _menu_root, _idx, _checked
    );
    
  }
  global_menu_set_item_checkable(_menu_root, _idx, _checkable) {
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_global_menu_set_item_checkable,
      this._owner,
      _menu_root, _idx, _checkable
    );
    
  }
  global_menu_set_item_radio_checkable(_menu_root, _idx, _checkable) {
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_global_menu_set_item_radio_checkable,
      this._owner,
      _menu_root, _idx, _checkable
    );
    
  }
  global_menu_set_item_callback(_menu_root, _idx, _callback) {
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_global_menu_set_item_callback,
      this._owner,
      _menu_root, _idx, _callback
    );
    
  }
  global_menu_set_item_hover_callbacks(_menu_root, _idx, _callback) {
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_global_menu_set_item_hover_callbacks,
      this._owner,
      _menu_root, _idx, _callback
    );
    
  }
  global_menu_set_item_key_callback(_menu_root, _idx, _key_callback) {
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_global_menu_set_item_key_callback,
      this._owner,
      _menu_root, _idx, _key_callback
    );
    
  }
  global_menu_set_item_tag(_menu_root, _idx, _tag) {
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_global_menu_set_item_tag,
      this._owner,
      _menu_root, _idx, _tag
    );
    
  }
  global_menu_set_item_text(_menu_root, _idx, _text) {
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_global_menu_set_item_text,
      this._owner,
      _menu_root, _idx, _text
    );
    
  }
  global_menu_set_item_submenu(_menu_root, _idx, _submenu) {
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_global_menu_set_item_submenu,
      this._owner,
      _menu_root, _idx, _submenu
    );
    
  }
  global_menu_set_item_accelerator(_menu_root, _idx, _keycode) {
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_global_menu_set_item_accelerator,
      this._owner,
      _menu_root, _idx, _keycode
    );
    
  }
  global_menu_set_item_disabled(_menu_root, _idx, _disabled) {
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_global_menu_set_item_disabled,
      this._owner,
      _menu_root, _idx, _disabled
    );
    
  }
  global_menu_set_item_hidden(_menu_root, _idx, _hidden) {
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_global_menu_set_item_hidden,
      this._owner,
      _menu_root, _idx, _hidden
    );
    
  }
  global_menu_set_item_tooltip(_menu_root, _idx, _tooltip) {
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_global_menu_set_item_tooltip,
      this._owner,
      _menu_root, _idx, _tooltip
    );
    
  }
  global_menu_set_item_state(_menu_root, _idx, _state) {
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_global_menu_set_item_state,
      this._owner,
      _menu_root, _idx, _state
    );
    
  }
  global_menu_set_item_max_states(_menu_root, _idx, _max_states) {
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_global_menu_set_item_max_states,
      this._owner,
      _menu_root, _idx, _max_states
    );
    
  }
  global_menu_set_item_icon(_menu_root, _idx, _icon) {
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_global_menu_set_item_icon,
      this._owner,
      _menu_root, _idx, _icon
    );
    
  }
  global_menu_set_item_indentation_level(_menu_root, _idx, _level) {
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_global_menu_set_item_indentation_level,
      this._owner,
      _menu_root, _idx, _level
    );
    
  }
  global_menu_get_item_count(_menu_root) {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_global_menu_get_item_count,
      this._owner,
			Variant.Type.INT,
      _menu_root
    );
    
  }
  global_menu_remove_item(_menu_root, _idx) {
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_global_menu_remove_item,
      this._owner,
      _menu_root, _idx
    );
    
  }
  global_menu_clear(_menu_root) {
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_global_menu_clear,
      this._owner,
      _menu_root
    );
    
  }
  global_menu_get_system_menu_roots() {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_global_menu_get_system_menu_roots,
      this._owner,
			Variant.Type.DICTIONARY,
    
      
    );
    
  }
  tts_is_speaking() {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_tts_is_speaking,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  tts_is_paused() {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_tts_is_paused,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  tts_get_voices() {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_tts_get_voices,
      this._owner,
			Variant.INT,
      
    );
    
  }
  tts_get_voices_for_language(_language) {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_tts_get_voices_for_language,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY,
    
      _language
    );
    
  }
  tts_speak(_text, _voice, _volume, _pitch, _rate, _utterance_id, _interrupt) {
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_tts_speak,
      this._owner,
      _text, _voice, _volume, _pitch, _rate, _utterance_id, _interrupt
    );
    
  }
  tts_pause() {
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_tts_pause,
      this._owner,
      
    );
    
  }
  tts_resume() {
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_tts_resume,
      this._owner,
      
    );
    
  }
  tts_stop() {
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_tts_stop,
      this._owner,
      
    );
    
  }
  tts_set_utterance_callback(_event, _callable) {
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_tts_set_utterance_callback,
      this._owner,
      _event, _callable
    );
    
  }
  is_dark_mode_supported() {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_is_dark_mode_supported,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  is_dark_mode() {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_is_dark_mode,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  get_accent_color() {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_get_accent_color,
      this._owner,
			Variant.Type.COLOR,
    
      
    );
    
  }
  get_base_color() {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_get_base_color,
      this._owner,
			Variant.Type.COLOR,
    
      
    );
    
  }
  set_system_theme_change_callback(_callable) {
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_set_system_theme_change_callback,
      this._owner,
      _callable
    );
    
  }
  mouse_set_mode(_mouse_mode) {
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_mouse_set_mode,
      this._owner,
      _mouse_mode
    );
    
  }
  mouse_get_mode() {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_mouse_get_mode,
      this._owner,
			Variant.INT,
      
    );
    
  }
  warp_mouse(_position) {
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_warp_mouse,
      this._owner,
      _position
    );
    
  }
  mouse_get_position() {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_mouse_get_position,
      this._owner,
			Variant.Type.VECTOR2I,
    
      
    );
    
  }
  mouse_get_button_state() {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_mouse_get_button_state,
      this._owner,
			Variant.INT,
      
    );
    
  }
  clipboard_set(_clipboard) {
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_clipboard_set,
      this._owner,
      _clipboard
    );
    
  }
  clipboard_get() {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_clipboard_get,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  clipboard_get_image() {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_clipboard_get_image,
      this._owner,
			Variant.INT,
      
    );
    
  }
  clipboard_has() {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_clipboard_has,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  clipboard_has_image() {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_clipboard_has_image,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  clipboard_set_primary(_clipboard_primary) {
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_clipboard_set_primary,
      this._owner,
      _clipboard_primary
    );
    
  }
  clipboard_get_primary() {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_clipboard_get_primary,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  get_display_cutouts() {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_get_display_cutouts,
      this._owner,
			Variant.INT,
      
    );
    
  }
  get_display_safe_area() {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_get_display_safe_area,
      this._owner,
			Variant.Type.RECT2I,
    
      
    );
    
  }
  get_screen_count() {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_get_screen_count,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  get_primary_screen() {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_get_primary_screen,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  get_keyboard_focus_screen() {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_get_keyboard_focus_screen,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  get_screen_from_rect(_rect) {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_get_screen_from_rect,
      this._owner,
			Variant.Type.INT,
      _rect
    );
    
  }
  screen_get_position(_screen) {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_screen_get_position,
      this._owner,
			Variant.Type.VECTOR2I,
    
      _screen
    );
    
  }
  screen_get_size(_screen) {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_screen_get_size,
      this._owner,
			Variant.Type.VECTOR2I,
    
      _screen
    );
    
  }
  screen_get_usable_rect(_screen) {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_screen_get_usable_rect,
      this._owner,
			Variant.Type.RECT2I,
    
      _screen
    );
    
  }
  screen_get_dpi(_screen) {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_screen_get_dpi,
      this._owner,
			Variant.Type.INT,
      _screen
    );
    
  }
  screen_get_scale(_screen) {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_screen_get_scale,
      this._owner,
			Variant.Type.FLOAT,
      _screen
    );
    
  }
  is_touchscreen_available() {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_is_touchscreen_available,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  screen_get_max_scale() {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_screen_get_max_scale,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  screen_get_refresh_rate(_screen) {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_screen_get_refresh_rate,
      this._owner,
			Variant.Type.FLOAT,
      _screen
    );
    
  }
  screen_get_pixel(_position) {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_screen_get_pixel,
      this._owner,
			Variant.Type.COLOR,
    
      _position
    );
    
  }
  screen_get_image(_screen) {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_screen_get_image,
      this._owner,
			Variant.INT,
      _screen
    );
    
  }
  screen_set_orientation(_orientation, _screen) {
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_screen_set_orientation,
      this._owner,
      _orientation, _screen
    );
    
  }
  screen_get_orientation(_screen) {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_screen_get_orientation,
      this._owner,
			Variant.INT,
      _screen
    );
    
  }
  screen_set_keep_on(_enable) {
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_screen_set_keep_on,
      this._owner,
      _enable
    );
    
  }
  screen_is_kept_on() {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_screen_is_kept_on,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  get_window_list() {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_get_window_list,
      this._owner,
			Variant.Type.PACKED_INT32_ARRAY,
    
      
    );
    
  }
  get_window_at_screen_position(_position) {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_get_window_at_screen_position,
      this._owner,
			Variant.Type.INT,
      _position
    );
    
  }
  window_get_native_handle(_handle_type, _window_id) {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_window_get_native_handle,
      this._owner,
			Variant.Type.INT,
      _handle_type, _window_id
    );
    
  }
  window_get_active_popup() {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_window_get_active_popup,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  window_set_popup_safe_rect(_window, _rect) {
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_window_set_popup_safe_rect,
      this._owner,
      _window, _rect
    );
    
  }
  window_get_popup_safe_rect(_window) {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_window_get_popup_safe_rect,
      this._owner,
			Variant.Type.RECT2I,
    
      _window
    );
    
  }
  window_set_title(_title, _window_id) {
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_window_set_title,
      this._owner,
      _title, _window_id
    );
    
  }
  window_get_title_size(_title, _window_id) {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_window_get_title_size,
      this._owner,
			Variant.Type.VECTOR2I,
    
      _title, _window_id
    );
    
  }
  window_set_mouse_passthrough(_region, _window_id) {
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_window_set_mouse_passthrough,
      this._owner,
      _region, _window_id
    );
    
  }
  window_get_current_screen(_window_id) {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_window_get_current_screen,
      this._owner,
			Variant.Type.INT,
      _window_id
    );
    
  }
  window_set_current_screen(_screen, _window_id) {
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_window_set_current_screen,
      this._owner,
      _screen, _window_id
    );
    
  }
  window_get_position(_window_id) {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_window_get_position,
      this._owner,
			Variant.Type.VECTOR2I,
    
      _window_id
    );
    
  }
  window_get_position_with_decorations(_window_id) {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_window_get_position_with_decorations,
      this._owner,
			Variant.Type.VECTOR2I,
    
      _window_id
    );
    
  }
  window_set_position(_position, _window_id) {
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_window_set_position,
      this._owner,
      _position, _window_id
    );
    
  }
  window_get_size(_window_id) {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_window_get_size,
      this._owner,
			Variant.Type.VECTOR2I,
    
      _window_id
    );
    
  }
  window_set_size(_size, _window_id) {
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_window_set_size,
      this._owner,
      _size, _window_id
    );
    
  }
  window_set_rect_changed_callback(_callback, _window_id) {
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_window_set_rect_changed_callback,
      this._owner,
      _callback, _window_id
    );
    
  }
  window_set_window_event_callback(_callback, _window_id) {
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_window_set_window_event_callback,
      this._owner,
      _callback, _window_id
    );
    
  }
  window_set_input_event_callback(_callback, _window_id) {
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_window_set_input_event_callback,
      this._owner,
      _callback, _window_id
    );
    
  }
  window_set_input_text_callback(_callback, _window_id) {
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_window_set_input_text_callback,
      this._owner,
      _callback, _window_id
    );
    
  }
  window_set_drop_files_callback(_callback, _window_id) {
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_window_set_drop_files_callback,
      this._owner,
      _callback, _window_id
    );
    
  }
  window_get_attached_instance_id(_window_id) {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_window_get_attached_instance_id,
      this._owner,
			Variant.Type.INT,
      _window_id
    );
    
  }
  window_get_max_size(_window_id) {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_window_get_max_size,
      this._owner,
			Variant.Type.VECTOR2I,
    
      _window_id
    );
    
  }
  window_set_max_size(_max_size, _window_id) {
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_window_set_max_size,
      this._owner,
      _max_size, _window_id
    );
    
  }
  window_get_min_size(_window_id) {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_window_get_min_size,
      this._owner,
			Variant.Type.VECTOR2I,
    
      _window_id
    );
    
  }
  window_set_min_size(_min_size, _window_id) {
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_window_set_min_size,
      this._owner,
      _min_size, _window_id
    );
    
  }
  window_get_size_with_decorations(_window_id) {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_window_get_size_with_decorations,
      this._owner,
			Variant.Type.VECTOR2I,
    
      _window_id
    );
    
  }
  window_get_mode(_window_id) {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_window_get_mode,
      this._owner,
			Variant.INT,
      _window_id
    );
    
  }
  window_set_mode(_mode, _window_id) {
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_window_set_mode,
      this._owner,
      _mode, _window_id
    );
    
  }
  window_set_flag(_flag, _enabled, _window_id) {
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_window_set_flag,
      this._owner,
      _flag, _enabled, _window_id
    );
    
  }
  window_get_flag(_flag, _window_id) {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_window_get_flag,
      this._owner,
			Variant.Type.BOOL,
      _flag, _window_id
    );
    
  }
  window_set_window_buttons_offset(_offset, _window_id) {
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_window_set_window_buttons_offset,
      this._owner,
      _offset, _window_id
    );
    
  }
  window_get_safe_title_margins(_window_id) {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_window_get_safe_title_margins,
      this._owner,
			Variant.Type.VECTOR3I,
    
      _window_id
    );
    
  }
  window_request_attention(_window_id) {
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_window_request_attention,
      this._owner,
      _window_id
    );
    
  }
  window_move_to_foreground(_window_id) {
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_window_move_to_foreground,
      this._owner,
      _window_id
    );
    
  }
  window_is_focused(_window_id) {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_window_is_focused,
      this._owner,
			Variant.Type.BOOL,
      _window_id
    );
    
  }
  window_can_draw(_window_id) {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_window_can_draw,
      this._owner,
			Variant.Type.BOOL,
      _window_id
    );
    
  }
  window_set_transient(_window_id, _parent_window_id) {
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_window_set_transient,
      this._owner,
      _window_id, _parent_window_id
    );
    
  }
  window_set_exclusive(_window_id, _exclusive) {
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_window_set_exclusive,
      this._owner,
      _window_id, _exclusive
    );
    
  }
  window_set_ime_active(_active, _window_id) {
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_window_set_ime_active,
      this._owner,
      _active, _window_id
    );
    
  }
  window_set_ime_position(_position, _window_id) {
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_window_set_ime_position,
      this._owner,
      _position, _window_id
    );
    
  }
  window_set_vsync_mode(_vsync_mode, _window_id) {
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_window_set_vsync_mode,
      this._owner,
      _vsync_mode, _window_id
    );
    
  }
  window_get_vsync_mode(_window_id) {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_window_get_vsync_mode,
      this._owner,
			Variant.INT,
      _window_id
    );
    
  }
  window_is_maximize_allowed(_window_id) {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_window_is_maximize_allowed,
      this._owner,
			Variant.Type.BOOL,
      _window_id
    );
    
  }
  window_maximize_on_title_dbl_click() {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_window_maximize_on_title_dbl_click,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  window_minimize_on_title_dbl_click() {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_window_minimize_on_title_dbl_click,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  ime_get_selection() {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_ime_get_selection,
      this._owner,
			Variant.Type.VECTOR2I,
    
      
    );
    
  }
  ime_get_text() {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_ime_get_text,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  virtual_keyboard_show(_existing_text, _position, _type, _max_length, _cursor_start, _cursor_end) {
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_virtual_keyboard_show,
      this._owner,
      _existing_text, _position, _type, _max_length, _cursor_start, _cursor_end
    );
    
  }
  virtual_keyboard_hide() {
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_virtual_keyboard_hide,
      this._owner,
      
    );
    
  }
  virtual_keyboard_get_height() {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_virtual_keyboard_get_height,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  cursor_set_shape(_shape) {
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_cursor_set_shape,
      this._owner,
      _shape
    );
    
  }
  cursor_get_shape() {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_cursor_get_shape,
      this._owner,
			Variant.INT,
      
    );
    
  }
  cursor_set_custom_image(_cursor, _shape, _hotspot) {
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_cursor_set_custom_image,
      this._owner,
      _cursor, _shape, _hotspot
    );
    
  }
  get_swap_cancel_ok() {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_get_swap_cancel_ok,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  enable_for_stealing_focus(_process_id) {
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_enable_for_stealing_focus,
      this._owner,
      _process_id
    );
    
  }
  dialog_show(_title, _description, _buttons, _callback) {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_dialog_show,
      this._owner,
			Variant.INT,
      _title, _description, _buttons, _callback
    );
    
  }
  dialog_input_text(_title, _description, _existing_text, _callback) {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_dialog_input_text,
      this._owner,
			Variant.INT,
      _title, _description, _existing_text, _callback
    );
    
  }
  file_dialog_show(_title, _current_directory, _filename, _show_hidden, _mode, _filters, _callback) {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_file_dialog_show,
      this._owner,
			Variant.INT,
      _title, _current_directory, _filename, _show_hidden, _mode, _filters, _callback
    );
    
  }
  file_dialog_with_options_show(_title, _current_directory, _root, _filename, _show_hidden, _mode, _filters, _options, _callback) {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_file_dialog_with_options_show,
      this._owner,
			Variant.INT,
      _title, _current_directory, _root, _filename, _show_hidden, _mode, _filters, _options, _callback
    );
    
  }
  keyboard_get_layout_count() {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_keyboard_get_layout_count,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  keyboard_get_current_layout() {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_keyboard_get_current_layout,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  keyboard_set_current_layout(_index) {
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_keyboard_set_current_layout,
      this._owner,
      _index
    );
    
  }
  keyboard_get_layout_language(_index) {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_keyboard_get_layout_language,
      this._owner,
			Variant.Type.STRING,
    
      _index
    );
    
  }
  keyboard_get_layout_name(_index) {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_keyboard_get_layout_name,
      this._owner,
			Variant.Type.STRING,
    
      _index
    );
    
  }
  keyboard_get_keycode_from_physical(_keycode) {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_keyboard_get_keycode_from_physical,
      this._owner,
			Variant.INT,
      _keycode
    );
    
  }
  keyboard_get_label_from_physical(_keycode) {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_keyboard_get_label_from_physical,
      this._owner,
			Variant.INT,
      _keycode
    );
    
  }
  process_events() {
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_process_events,
      this._owner,
      
    );
    
  }
  force_process_and_drop_events() {
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_force_process_and_drop_events,
      this._owner,
      
    );
    
  }
  set_native_icon(_filename) {
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_set_native_icon,
      this._owner,
      _filename
    );
    
  }
  set_icon(_image) {
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_set_icon,
      this._owner,
      _image
    );
    
  }
  create_status_indicator(_icon, _tooltip, _callback) {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_create_status_indicator,
      this._owner,
			Variant.Type.INT,
      _icon, _tooltip, _callback
    );
    
  }
  status_indicator_set_icon(_id, _icon) {
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_status_indicator_set_icon,
      this._owner,
      _id, _icon
    );
    
  }
  status_indicator_set_tooltip(_id, _tooltip) {
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_status_indicator_set_tooltip,
      this._owner,
      _id, _tooltip
    );
    
  }
  status_indicator_set_menu(_id, _menu_rid) {
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_status_indicator_set_menu,
      this._owner,
      _id, _menu_rid
    );
    
  }
  status_indicator_set_callback(_id, _callback) {
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_status_indicator_set_callback,
      this._owner,
      _id, _callback
    );
    
  }
  status_indicator_get_rect(_id) {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_status_indicator_get_rect,
      this._owner,
			Variant.Type.RECT2,
    
      _id
    );
    
  }
  delete_status_indicator(_id) {
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_delete_status_indicator,
      this._owner,
      _id
    );
    
  }
  tablet_get_driver_count() {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_tablet_get_driver_count,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  tablet_get_driver_name(_idx) {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_tablet_get_driver_name,
      this._owner,
			Variant.Type.STRING,
    
      _idx
    );
    
  }
  tablet_get_current_driver() {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_tablet_get_current_driver,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  tablet_set_current_driver(_name) {
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_tablet_set_current_driver,
      this._owner,
      _name
    );
    
  }
  is_window_transparency_available() {
    return _call_native_mb_ret(
      _DisplayServer._bindings.method_is_window_transparency_available,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  register_additional_output(_object) {
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_register_additional_output,
      this._owner,
      _object
    );
    
  }
  unregister_additional_output(_object) {
    return _call_native_mb_no_ret(
      _DisplayServer._bindings.method_unregister_additional_output,
      this._owner,
      _object
    );
    
  }
  has_additional_outputs() {
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

  static {
    this._init_bindings();
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