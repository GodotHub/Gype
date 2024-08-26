import * as internal from '__internal__';
import { Control } from 'src/js_godot/classescontrol'
class _MethodBindings {
    method__pressed;
    method__toggled;
    method_set_pressed;
    method_is_pressed;
    method_set_pressed_no_signal;
    method_is_hovered;
    method_set_toggle_mode;
    method_is_toggle_mode;
    method_set_shortcut_in_tooltip;
    method_is_shortcut_in_tooltip_enabled;
    method_set_disabled;
    method_is_disabled;
    method_set_action_mode;
    method_get_action_mode;
    method_set_button_mask;
    method_get_button_mask;
    method_get_draw_mode;
    method_set_keep_pressed_outside;
    method_is_keep_pressed_outside;
    method_set_shortcut_feedback;
    method_is_shortcut_feedback;
    method_set_shortcut;
    method_get_shortcut;
    method_set_button_group;
    method_get_button_group;
}


export class BaseButton extends Control{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("BaseButton");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("BaseButton");
      let methodname = new StringName("_pressed");
      this._bindings.method__pressed = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("BaseButton");
      let methodname = new StringName("_toggled");
      this._bindings.method__toggled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("BaseButton");
      let methodname = new StringName("set_pressed");
      this._bindings.method_set_pressed = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("BaseButton");
      let methodname = new StringName("is_pressed");
      this._bindings.method_is_pressed = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("BaseButton");
      let methodname = new StringName("set_pressed_no_signal");
      this._bindings.method_set_pressed_no_signal = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("BaseButton");
      let methodname = new StringName("is_hovered");
      this._bindings.method_is_hovered = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("BaseButton");
      let methodname = new StringName("set_toggle_mode");
      this._bindings.method_set_toggle_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("BaseButton");
      let methodname = new StringName("is_toggle_mode");
      this._bindings.method_is_toggle_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("BaseButton");
      let methodname = new StringName("set_shortcut_in_tooltip");
      this._bindings.method_set_shortcut_in_tooltip = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("BaseButton");
      let methodname = new StringName("is_shortcut_in_tooltip_enabled");
      this._bindings.method_is_shortcut_in_tooltip_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("BaseButton");
      let methodname = new StringName("set_disabled");
      this._bindings.method_set_disabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("BaseButton");
      let methodname = new StringName("is_disabled");
      this._bindings.method_is_disabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("BaseButton");
      let methodname = new StringName("set_action_mode");
      this._bindings.method_set_action_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1985162088
      );
    }
    {
      let classname = new StringName("BaseButton");
      let methodname = new StringName("get_action_mode");
      this._bindings.method_get_action_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2589712189
      );
    }
    {
      let classname = new StringName("BaseButton");
      let methodname = new StringName("set_button_mask");
      this._bindings.method_set_button_mask = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3950145251
      );
    }
    {
      let classname = new StringName("BaseButton");
      let methodname = new StringName("get_button_mask");
      this._bindings.method_get_button_mask = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2512161324
      );
    }
    {
      let classname = new StringName("BaseButton");
      let methodname = new StringName("get_draw_mode");
      this._bindings.method_get_draw_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2492721305
      );
    }
    {
      let classname = new StringName("BaseButton");
      let methodname = new StringName("set_keep_pressed_outside");
      this._bindings.method_set_keep_pressed_outside = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("BaseButton");
      let methodname = new StringName("is_keep_pressed_outside");
      this._bindings.method_is_keep_pressed_outside = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("BaseButton");
      let methodname = new StringName("set_shortcut_feedback");
      this._bindings.method_set_shortcut_feedback = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("BaseButton");
      let methodname = new StringName("is_shortcut_feedback");
      this._bindings.method_is_shortcut_feedback = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("BaseButton");
      let methodname = new StringName("set_shortcut");
      this._bindings.method_set_shortcut = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        857163497
      );
    }
    {
      let classname = new StringName("BaseButton");
      let methodname = new StringName("get_shortcut");
      this._bindings.method_get_shortcut = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3415666916
      );
    }
    {
      let classname = new StringName("BaseButton");
      let methodname = new StringName("set_button_group");
      this._bindings.method_set_button_group = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1794463739
      );
    }
    {
      let classname = new StringName("BaseButton");
      let methodname = new StringName("get_button_group");
      this._bindings.method_get_button_group = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        281644053
      );
    }
  }
  _pressed() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__pressed,
      this._owner,
      
    );
  }
  _toggled(_toggled_on) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__toggled,
      this._owner,
      _toggled_on
    );
  }
  set_pressed(_pressed) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_pressed,
      this._owner,
      _pressed
    );
  }
  is_pressed() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_pressed,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_pressed_no_signal(_pressed) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_pressed_no_signal,
      this._owner,
      _pressed
    );
  }
  is_hovered() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_hovered,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_toggle_mode(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_toggle_mode,
      this._owner,
      _enabled
    );
  }
  is_toggle_mode() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_toggle_mode,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_shortcut_in_tooltip(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_shortcut_in_tooltip,
      this._owner,
      _enabled
    );
  }
  is_shortcut_in_tooltip_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_shortcut_in_tooltip_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_disabled(_disabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_disabled,
      this._owner,
      _disabled
    );
  }
  is_disabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_disabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_action_mode(_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_action_mode,
      this._owner,
      _mode
    );
  }
  get_action_mode() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_action_mode,
      this._owner,
			Variant.INT,
      
    );
  }
  set_button_mask(_mask) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_button_mask,
      this._owner,
      _mask
    );
  }
  get_button_mask() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_button_mask,
      this._owner,
			Variant.INT,
      
    );
  }
  get_draw_mode() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_draw_mode,
      this._owner,
			Variant.INT,
      
    );
  }
  set_keep_pressed_outside(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_keep_pressed_outside,
      this._owner,
      _enabled
    );
  }
  is_keep_pressed_outside() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_keep_pressed_outside,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_shortcut_feedback(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_shortcut_feedback,
      this._owner,
      _enabled
    );
  }
  is_shortcut_feedback() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_shortcut_feedback,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_shortcut(_shortcut) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_shortcut,
      this._owner,
      _shortcut
    );
  }
  get_shortcut() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_shortcut,
      this._owner,
			Variant.INT,
      
    );
  }
  set_button_group(_button_group) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_button_group,
      this._owner,
      _button_group
    );
  }
  get_button_group() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_button_group,
      this._owner,
			Variant.INT,
      
    );
  }
  static DrawMode = {
    DRAW_NORMAL: 0,
    DRAW_PRESSED: 1,
    DRAW_HOVER: 2,
    DRAW_DISABLED: 3,
    DRAW_HOVER_PRESSED: 4,
  }
  static ActionMode = {
    ACTION_MODE_BUTTON_PRESS: 0,
    ACTION_MODE_BUTTON_RELEASE: 1,
  }
}