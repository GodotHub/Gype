import * as internal from '__internal__';
import { Control } from 'src/js_godot/classescontrol'
import { GDArray } from 'src/js_godot/variant/gd_array'
import { GDString } from 'src/js_godot/variant/gd_string'
class _MethodBindings {
    method_set_horizontal_alignment;
    method_get_horizontal_alignment;
    method_clear;
    method_select;
    method_select_all;
    method_deselect;
    method_has_selection;
    method_get_selected_text;
    method_get_selection_from_column;
    method_get_selection_to_column;
    method_set_text;
    method_get_text;
    method_get_draw_control_chars;
    method_set_draw_control_chars;
    method_set_text_direction;
    method_get_text_direction;
    method_set_language;
    method_get_language;
    method_set_structured_text_bidi_override;
    method_get_structured_text_bidi_override;
    method_set_structured_text_bidi_override_options;
    method_get_structured_text_bidi_override_options;
    method_set_placeholder;
    method_get_placeholder;
    method_set_caret_column;
    method_get_caret_column;
    method_get_scroll_offset;
    method_set_expand_to_text_length_enabled;
    method_is_expand_to_text_length_enabled;
    method_set_caret_blink_enabled;
    method_is_caret_blink_enabled;
    method_set_caret_mid_grapheme_enabled;
    method_is_caret_mid_grapheme_enabled;
    method_set_caret_force_displayed;
    method_is_caret_force_displayed;
    method_set_caret_blink_interval;
    method_get_caret_blink_interval;
    method_set_max_length;
    method_get_max_length;
    method_insert_text_at_caret;
    method_delete_char_at_caret;
    method_delete_text;
    method_set_editable;
    method_is_editable;
    method_set_secret;
    method_is_secret;
    method_set_secret_character;
    method_get_secret_character;
    method_menu_option;
    method_get_menu;
    method_is_menu_visible;
    method_set_context_menu_enabled;
    method_is_context_menu_enabled;
    method_set_virtual_keyboard_enabled;
    method_is_virtual_keyboard_enabled;
    method_set_virtual_keyboard_type;
    method_get_virtual_keyboard_type;
    method_set_clear_button_enabled;
    method_is_clear_button_enabled;
    method_set_shortcut_keys_enabled;
    method_is_shortcut_keys_enabled;
    method_set_middle_mouse_paste_enabled;
    method_is_middle_mouse_paste_enabled;
    method_set_selecting_enabled;
    method_is_selecting_enabled;
    method_set_deselect_on_focus_loss_enabled;
    method_is_deselect_on_focus_loss_enabled;
    method_set_drag_and_drop_selection_enabled;
    method_is_drag_and_drop_selection_enabled;
    method_set_right_icon;
    method_get_right_icon;
    method_set_flat;
    method_is_flat;
    method_set_select_all_on_focus;
    method_is_select_all_on_focus;
}


export class LineEdit extends Control{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("LineEdit");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("LineEdit");
      let methodname = new StringName("set_horizontal_alignment");
      this._bindings.method_set_horizontal_alignment = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2312603777
      );
    }
    {
      let classname = new StringName("LineEdit");
      let methodname = new StringName("get_horizontal_alignment");
      this._bindings.method_get_horizontal_alignment = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        341400642
      );
    }
    {
      let classname = new StringName("LineEdit");
      let methodname = new StringName("clear");
      this._bindings.method_clear = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("LineEdit");
      let methodname = new StringName("select");
      this._bindings.method_select = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1328111411
      );
    }
    {
      let classname = new StringName("LineEdit");
      let methodname = new StringName("select_all");
      this._bindings.method_select_all = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("LineEdit");
      let methodname = new StringName("deselect");
      this._bindings.method_deselect = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("LineEdit");
      let methodname = new StringName("has_selection");
      this._bindings.method_has_selection = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("LineEdit");
      let methodname = new StringName("get_selected_text");
      this._bindings.method_get_selected_text = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2841200299
      );
    }
    {
      let classname = new StringName("LineEdit");
      let methodname = new StringName("get_selection_from_column");
      this._bindings.method_get_selection_from_column = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("LineEdit");
      let methodname = new StringName("get_selection_to_column");
      this._bindings.method_get_selection_to_column = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("LineEdit");
      let methodname = new StringName("set_text");
      this._bindings.method_set_text = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        83702148
      );
    }
    {
      let classname = new StringName("LineEdit");
      let methodname = new StringName("get_text");
      this._bindings.method_get_text = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        201670096
      );
    }
    {
      let classname = new StringName("LineEdit");
      let methodname = new StringName("get_draw_control_chars");
      this._bindings.method_get_draw_control_chars = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("LineEdit");
      let methodname = new StringName("set_draw_control_chars");
      this._bindings.method_set_draw_control_chars = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("LineEdit");
      let methodname = new StringName("set_text_direction");
      this._bindings.method_set_text_direction = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        119160795
      );
    }
    {
      let classname = new StringName("LineEdit");
      let methodname = new StringName("get_text_direction");
      this._bindings.method_get_text_direction = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        797257663
      );
    }
    {
      let classname = new StringName("LineEdit");
      let methodname = new StringName("set_language");
      this._bindings.method_set_language = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        83702148
      );
    }
    {
      let classname = new StringName("LineEdit");
      let methodname = new StringName("get_language");
      this._bindings.method_get_language = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        201670096
      );
    }
    {
      let classname = new StringName("LineEdit");
      let methodname = new StringName("set_structured_text_bidi_override");
      this._bindings.method_set_structured_text_bidi_override = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        55961453
      );
    }
    {
      let classname = new StringName("LineEdit");
      let methodname = new StringName("get_structured_text_bidi_override");
      this._bindings.method_get_structured_text_bidi_override = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3385126229
      );
    }
    {
      let classname = new StringName("LineEdit");
      let methodname = new StringName("set_structured_text_bidi_override_options");
      this._bindings.method_set_structured_text_bidi_override_options = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        381264803
      );
    }
    {
      let classname = new StringName("LineEdit");
      let methodname = new StringName("get_structured_text_bidi_override_options");
      this._bindings.method_get_structured_text_bidi_override_options = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3995934104
      );
    }
    {
      let classname = new StringName("LineEdit");
      let methodname = new StringName("set_placeholder");
      this._bindings.method_set_placeholder = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        83702148
      );
    }
    {
      let classname = new StringName("LineEdit");
      let methodname = new StringName("get_placeholder");
      this._bindings.method_get_placeholder = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        201670096
      );
    }
    {
      let classname = new StringName("LineEdit");
      let methodname = new StringName("set_caret_column");
      this._bindings.method_set_caret_column = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("LineEdit");
      let methodname = new StringName("get_caret_column");
      this._bindings.method_get_caret_column = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("LineEdit");
      let methodname = new StringName("get_scroll_offset");
      this._bindings.method_get_scroll_offset = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("LineEdit");
      let methodname = new StringName("set_expand_to_text_length_enabled");
      this._bindings.method_set_expand_to_text_length_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("LineEdit");
      let methodname = new StringName("is_expand_to_text_length_enabled");
      this._bindings.method_is_expand_to_text_length_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("LineEdit");
      let methodname = new StringName("set_caret_blink_enabled");
      this._bindings.method_set_caret_blink_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("LineEdit");
      let methodname = new StringName("is_caret_blink_enabled");
      this._bindings.method_is_caret_blink_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("LineEdit");
      let methodname = new StringName("set_caret_mid_grapheme_enabled");
      this._bindings.method_set_caret_mid_grapheme_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("LineEdit");
      let methodname = new StringName("is_caret_mid_grapheme_enabled");
      this._bindings.method_is_caret_mid_grapheme_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("LineEdit");
      let methodname = new StringName("set_caret_force_displayed");
      this._bindings.method_set_caret_force_displayed = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("LineEdit");
      let methodname = new StringName("is_caret_force_displayed");
      this._bindings.method_is_caret_force_displayed = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("LineEdit");
      let methodname = new StringName("set_caret_blink_interval");
      this._bindings.method_set_caret_blink_interval = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("LineEdit");
      let methodname = new StringName("get_caret_blink_interval");
      this._bindings.method_get_caret_blink_interval = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("LineEdit");
      let methodname = new StringName("set_max_length");
      this._bindings.method_set_max_length = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("LineEdit");
      let methodname = new StringName("get_max_length");
      this._bindings.method_get_max_length = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("LineEdit");
      let methodname = new StringName("insert_text_at_caret");
      this._bindings.method_insert_text_at_caret = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        83702148
      );
    }
    {
      let classname = new StringName("LineEdit");
      let methodname = new StringName("delete_char_at_caret");
      this._bindings.method_delete_char_at_caret = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("LineEdit");
      let methodname = new StringName("delete_text");
      this._bindings.method_delete_text = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3937882851
      );
    }
    {
      let classname = new StringName("LineEdit");
      let methodname = new StringName("set_editable");
      this._bindings.method_set_editable = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("LineEdit");
      let methodname = new StringName("is_editable");
      this._bindings.method_is_editable = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("LineEdit");
      let methodname = new StringName("set_secret");
      this._bindings.method_set_secret = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("LineEdit");
      let methodname = new StringName("is_secret");
      this._bindings.method_is_secret = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("LineEdit");
      let methodname = new StringName("set_secret_character");
      this._bindings.method_set_secret_character = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        83702148
      );
    }
    {
      let classname = new StringName("LineEdit");
      let methodname = new StringName("get_secret_character");
      this._bindings.method_get_secret_character = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        201670096
      );
    }
    {
      let classname = new StringName("LineEdit");
      let methodname = new StringName("menu_option");
      this._bindings.method_menu_option = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("LineEdit");
      let methodname = new StringName("get_menu");
      this._bindings.method_get_menu = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        229722558
      );
    }
    {
      let classname = new StringName("LineEdit");
      let methodname = new StringName("is_menu_visible");
      this._bindings.method_is_menu_visible = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("LineEdit");
      let methodname = new StringName("set_context_menu_enabled");
      this._bindings.method_set_context_menu_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("LineEdit");
      let methodname = new StringName("is_context_menu_enabled");
      this._bindings.method_is_context_menu_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2240911060
      );
    }
    {
      let classname = new StringName("LineEdit");
      let methodname = new StringName("set_virtual_keyboard_enabled");
      this._bindings.method_set_virtual_keyboard_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("LineEdit");
      let methodname = new StringName("is_virtual_keyboard_enabled");
      this._bindings.method_is_virtual_keyboard_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("LineEdit");
      let methodname = new StringName("set_virtual_keyboard_type");
      this._bindings.method_set_virtual_keyboard_type = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2696893573
      );
    }
    {
      let classname = new StringName("LineEdit");
      let methodname = new StringName("get_virtual_keyboard_type");
      this._bindings.method_get_virtual_keyboard_type = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1928699316
      );
    }
    {
      let classname = new StringName("LineEdit");
      let methodname = new StringName("set_clear_button_enabled");
      this._bindings.method_set_clear_button_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("LineEdit");
      let methodname = new StringName("is_clear_button_enabled");
      this._bindings.method_is_clear_button_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("LineEdit");
      let methodname = new StringName("set_shortcut_keys_enabled");
      this._bindings.method_set_shortcut_keys_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("LineEdit");
      let methodname = new StringName("is_shortcut_keys_enabled");
      this._bindings.method_is_shortcut_keys_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("LineEdit");
      let methodname = new StringName("set_middle_mouse_paste_enabled");
      this._bindings.method_set_middle_mouse_paste_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("LineEdit");
      let methodname = new StringName("is_middle_mouse_paste_enabled");
      this._bindings.method_is_middle_mouse_paste_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("LineEdit");
      let methodname = new StringName("set_selecting_enabled");
      this._bindings.method_set_selecting_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("LineEdit");
      let methodname = new StringName("is_selecting_enabled");
      this._bindings.method_is_selecting_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("LineEdit");
      let methodname = new StringName("set_deselect_on_focus_loss_enabled");
      this._bindings.method_set_deselect_on_focus_loss_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("LineEdit");
      let methodname = new StringName("is_deselect_on_focus_loss_enabled");
      this._bindings.method_is_deselect_on_focus_loss_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("LineEdit");
      let methodname = new StringName("set_drag_and_drop_selection_enabled");
      this._bindings.method_set_drag_and_drop_selection_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("LineEdit");
      let methodname = new StringName("is_drag_and_drop_selection_enabled");
      this._bindings.method_is_drag_and_drop_selection_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("LineEdit");
      let methodname = new StringName("set_right_icon");
      this._bindings.method_set_right_icon = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4051416890
      );
    }
    {
      let classname = new StringName("LineEdit");
      let methodname = new StringName("get_right_icon");
      this._bindings.method_get_right_icon = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        255860311
      );
    }
    {
      let classname = new StringName("LineEdit");
      let methodname = new StringName("set_flat");
      this._bindings.method_set_flat = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("LineEdit");
      let methodname = new StringName("is_flat");
      this._bindings.method_is_flat = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("LineEdit");
      let methodname = new StringName("set_select_all_on_focus");
      this._bindings.method_set_select_all_on_focus = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("LineEdit");
      let methodname = new StringName("is_select_all_on_focus");
      this._bindings.method_is_select_all_on_focus = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
  }
  set_horizontal_alignment(_alignment) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_horizontal_alignment,
      this._owner,
      _alignment
    );
  }
  get_horizontal_alignment() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_horizontal_alignment,
      this._owner,
			Variant.INT,
      
    );
  }
  clear() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_clear,
      this._owner,
      
    );
  }
  select(_from, _to) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_select,
      this._owner,
      _from, _to
    );
  }
  select_all() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_select_all,
      this._owner,
      
    );
  }
  deselect() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_deselect,
      this._owner,
      
    );
  }
  has_selection() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_has_selection,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  get_selected_text() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_selected_text,
      this._owner,
			Variant.Type.STRING
    ,
      
    );
  }
  get_selection_from_column() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_selection_from_column,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  get_selection_to_column() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_selection_to_column,
      this._owner,
			Variant.Type.INT,
      
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
  get_draw_control_chars() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_draw_control_chars,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_draw_control_chars(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_draw_control_chars,
      this._owner,
      _enable
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
  set_caret_column(_position) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_caret_column,
      this._owner,
      _position
    );
  }
  get_caret_column() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_caret_column,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  get_scroll_offset() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_scroll_offset,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_expand_to_text_length_enabled(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_expand_to_text_length_enabled,
      this._owner,
      _enabled
    );
  }
  is_expand_to_text_length_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_expand_to_text_length_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_caret_blink_enabled(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_caret_blink_enabled,
      this._owner,
      _enabled
    );
  }
  is_caret_blink_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_caret_blink_enabled,
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
  set_caret_force_displayed(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_caret_force_displayed,
      this._owner,
      _enabled
    );
  }
  is_caret_force_displayed() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_caret_force_displayed,
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
  set_max_length(_chars) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_max_length,
      this._owner,
      _chars
    );
  }
  get_max_length() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_max_length,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  insert_text_at_caret(_text) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_insert_text_at_caret,
      this._owner,
      _text
    );
  }
  delete_char_at_caret() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_delete_char_at_caret,
      this._owner,
      
    );
  }
  delete_text(_from_column, _to_column) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_delete_text,
      this._owner,
      _from_column, _to_column
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
  set_secret(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_secret,
      this._owner,
      _enabled
    );
  }
  is_secret() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_secret,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_secret_character(_character) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_secret_character,
      this._owner,
      _character
    );
  }
  get_secret_character() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_secret_character,
      this._owner,
			Variant.Type.STRING
    ,
      
    );
  }
  menu_option(_option) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_menu_option,
      this._owner,
      _option
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
  set_context_menu_enabled(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_context_menu_enabled,
      this._owner,
      _enable
    );
  }
  is_context_menu_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_context_menu_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_virtual_keyboard_enabled(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_virtual_keyboard_enabled,
      this._owner,
      _enable
    );
  }
  is_virtual_keyboard_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_virtual_keyboard_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_virtual_keyboard_type(_type) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_virtual_keyboard_type,
      this._owner,
      _type
    );
  }
  get_virtual_keyboard_type() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_virtual_keyboard_type,
      this._owner,
			Variant.INT,
      
    );
  }
  set_clear_button_enabled(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_clear_button_enabled,
      this._owner,
      _enable
    );
  }
  is_clear_button_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_clear_button_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_shortcut_keys_enabled(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_shortcut_keys_enabled,
      this._owner,
      _enable
    );
  }
  is_shortcut_keys_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_shortcut_keys_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_middle_mouse_paste_enabled(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_middle_mouse_paste_enabled,
      this._owner,
      _enable
    );
  }
  is_middle_mouse_paste_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_middle_mouse_paste_enabled,
      this._owner,
			Variant.Type.BOOL,
      
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
  set_right_icon(_icon) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_right_icon,
      this._owner,
      _icon
    );
  }
  get_right_icon() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_right_icon,
      this._owner,
			Variant.INT,
      
    );
  }
  set_flat(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_flat,
      this._owner,
      _enabled
    );
  }
  is_flat() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_flat,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_select_all_on_focus(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_select_all_on_focus,
      this._owner,
      _enabled
    );
  }
  is_select_all_on_focus() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_select_all_on_focus,
      this._owner,
			Variant.Type.BOOL,
      
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
}