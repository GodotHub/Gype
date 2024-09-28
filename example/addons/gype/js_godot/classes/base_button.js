import * as internal from '__internal__';
import { Control } from '@js_godot/classes/control'
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
@GodotClass
export class BaseButton extends Control{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("BaseButton");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_pressed() {
    if (!this._bindings.method_set_pressed) {
      let classname = new StringName("BaseButton");
      let methodname = new StringName("set_pressed");
      this._bindings.method_set_pressed = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_pressed() {
    if (!this._bindings.method_is_pressed) {
      let classname = new StringName("BaseButton");
      let methodname = new StringName("is_pressed");
      this._bindings.method_is_pressed = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_pressed_no_signal() {
    if (!this._bindings.method_set_pressed_no_signal) {
      let classname = new StringName("BaseButton");
      let methodname = new StringName("set_pressed_no_signal");
      this._bindings.method_set_pressed_no_signal = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_hovered() {
    if (!this._bindings.method_is_hovered) {
      let classname = new StringName("BaseButton");
      let methodname = new StringName("is_hovered");
      this._bindings.method_is_hovered = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_toggle_mode() {
    if (!this._bindings.method_set_toggle_mode) {
      let classname = new StringName("BaseButton");
      let methodname = new StringName("set_toggle_mode");
      this._bindings.method_set_toggle_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_toggle_mode() {
    if (!this._bindings.method_is_toggle_mode) {
      let classname = new StringName("BaseButton");
      let methodname = new StringName("is_toggle_mode");
      this._bindings.method_is_toggle_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_shortcut_in_tooltip() {
    if (!this._bindings.method_set_shortcut_in_tooltip) {
      let classname = new StringName("BaseButton");
      let methodname = new StringName("set_shortcut_in_tooltip");
      this._bindings.method_set_shortcut_in_tooltip = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_shortcut_in_tooltip_enabled() {
    if (!this._bindings.method_is_shortcut_in_tooltip_enabled) {
      let classname = new StringName("BaseButton");
      let methodname = new StringName("is_shortcut_in_tooltip_enabled");
      this._bindings.method_is_shortcut_in_tooltip_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_disabled() {
    if (!this._bindings.method_set_disabled) {
      let classname = new StringName("BaseButton");
      let methodname = new StringName("set_disabled");
      this._bindings.method_set_disabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_disabled() {
    if (!this._bindings.method_is_disabled) {
      let classname = new StringName("BaseButton");
      let methodname = new StringName("is_disabled");
      this._bindings.method_is_disabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_action_mode() {
    if (!this._bindings.method_set_action_mode) {
      let classname = new StringName("BaseButton");
      let methodname = new StringName("set_action_mode");
      this._bindings.method_set_action_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1985162088
      );
    }
  }
  static init_method_get_action_mode() {
    if (!this._bindings.method_get_action_mode) {
      let classname = new StringName("BaseButton");
      let methodname = new StringName("get_action_mode");
      this._bindings.method_get_action_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2589712189
      );
    }
  }
  static init_method_set_button_mask() {
    if (!this._bindings.method_set_button_mask) {
      let classname = new StringName("BaseButton");
      let methodname = new StringName("set_button_mask");
      this._bindings.method_set_button_mask = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3950145251
      );
    }
  }
  static init_method_get_button_mask() {
    if (!this._bindings.method_get_button_mask) {
      let classname = new StringName("BaseButton");
      let methodname = new StringName("get_button_mask");
      this._bindings.method_get_button_mask = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2512161324
      );
    }
  }
  static init_method_get_draw_mode() {
    if (!this._bindings.method_get_draw_mode) {
      let classname = new StringName("BaseButton");
      let methodname = new StringName("get_draw_mode");
      this._bindings.method_get_draw_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2492721305
      );
    }
  }
  static init_method_set_keep_pressed_outside() {
    if (!this._bindings.method_set_keep_pressed_outside) {
      let classname = new StringName("BaseButton");
      let methodname = new StringName("set_keep_pressed_outside");
      this._bindings.method_set_keep_pressed_outside = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_keep_pressed_outside() {
    if (!this._bindings.method_is_keep_pressed_outside) {
      let classname = new StringName("BaseButton");
      let methodname = new StringName("is_keep_pressed_outside");
      this._bindings.method_is_keep_pressed_outside = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_shortcut_feedback() {
    if (!this._bindings.method_set_shortcut_feedback) {
      let classname = new StringName("BaseButton");
      let methodname = new StringName("set_shortcut_feedback");
      this._bindings.method_set_shortcut_feedback = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_shortcut_feedback() {
    if (!this._bindings.method_is_shortcut_feedback) {
      let classname = new StringName("BaseButton");
      let methodname = new StringName("is_shortcut_feedback");
      this._bindings.method_is_shortcut_feedback = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_shortcut() {
    if (!this._bindings.method_set_shortcut) {
      let classname = new StringName("BaseButton");
      let methodname = new StringName("set_shortcut");
      this._bindings.method_set_shortcut = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        857163497
      );
    }
  }
  static init_method_get_shortcut() {
    if (!this._bindings.method_get_shortcut) {
      let classname = new StringName("BaseButton");
      let methodname = new StringName("get_shortcut");
      this._bindings.method_get_shortcut = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3415666916
      );
    }
  }
  static init_method_set_button_group() {
    if (!this._bindings.method_set_button_group) {
      let classname = new StringName("BaseButton");
      let methodname = new StringName("set_button_group");
      this._bindings.method_set_button_group = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1794463739
      );
    }
  }
  static init_method_get_button_group() {
    if (!this._bindings.method_get_button_group) {
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
  }
  _toggled(_toggled_on) {
  }
  set_pressed(_pressed) {
    BaseButton.init_method_set_pressed();
    return _call_native_mb_no_ret(
      BaseButton._bindings.method_set_pressed,
      this._owner,
      _pressed
    );
    
  }
  is_pressed() {
    BaseButton.init_method_is_pressed();
    return _call_native_mb_ret(
      BaseButton._bindings.method_is_pressed,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_pressed_no_signal(_pressed) {
    BaseButton.init_method_set_pressed_no_signal();
    return _call_native_mb_no_ret(
      BaseButton._bindings.method_set_pressed_no_signal,
      this._owner,
      _pressed
    );
    
  }
  is_hovered() {
    BaseButton.init_method_is_hovered();
    return _call_native_mb_ret(
      BaseButton._bindings.method_is_hovered,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_toggle_mode(_enabled) {
    BaseButton.init_method_set_toggle_mode();
    return _call_native_mb_no_ret(
      BaseButton._bindings.method_set_toggle_mode,
      this._owner,
      _enabled
    );
    
  }
  is_toggle_mode() {
    BaseButton.init_method_is_toggle_mode();
    return _call_native_mb_ret(
      BaseButton._bindings.method_is_toggle_mode,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_shortcut_in_tooltip(_enabled) {
    BaseButton.init_method_set_shortcut_in_tooltip();
    return _call_native_mb_no_ret(
      BaseButton._bindings.method_set_shortcut_in_tooltip,
      this._owner,
      _enabled
    );
    
  }
  is_shortcut_in_tooltip_enabled() {
    BaseButton.init_method_is_shortcut_in_tooltip_enabled();
    return _call_native_mb_ret(
      BaseButton._bindings.method_is_shortcut_in_tooltip_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_disabled(_disabled) {
    BaseButton.init_method_set_disabled();
    return _call_native_mb_no_ret(
      BaseButton._bindings.method_set_disabled,
      this._owner,
      _disabled
    );
    
  }
  is_disabled() {
    BaseButton.init_method_is_disabled();
    return _call_native_mb_ret(
      BaseButton._bindings.method_is_disabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_action_mode(_mode) {
    BaseButton.init_method_set_action_mode();
    return _call_native_mb_no_ret(
      BaseButton._bindings.method_set_action_mode,
      this._owner,
      _mode
    );
    
  }
  get_action_mode() {
    BaseButton.init_method_get_action_mode();
    return _call_native_mb_ret(
      BaseButton._bindings.method_get_action_mode,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_button_mask(_mask) {
    BaseButton.init_method_set_button_mask();
    return _call_native_mb_no_ret(
      BaseButton._bindings.method_set_button_mask,
      this._owner,
      _mask
    );
    
  }
  get_button_mask() {
    BaseButton.init_method_get_button_mask();
    return _call_native_mb_ret(
      BaseButton._bindings.method_get_button_mask,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  get_draw_mode() {
    BaseButton.init_method_get_draw_mode();
    return _call_native_mb_ret(
      BaseButton._bindings.method_get_draw_mode,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_keep_pressed_outside(_enabled) {
    BaseButton.init_method_set_keep_pressed_outside();
    return _call_native_mb_no_ret(
      BaseButton._bindings.method_set_keep_pressed_outside,
      this._owner,
      _enabled
    );
    
  }
  is_keep_pressed_outside() {
    BaseButton.init_method_is_keep_pressed_outside();
    return _call_native_mb_ret(
      BaseButton._bindings.method_is_keep_pressed_outside,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_shortcut_feedback(_enabled) {
    BaseButton.init_method_set_shortcut_feedback();
    return _call_native_mb_no_ret(
      BaseButton._bindings.method_set_shortcut_feedback,
      this._owner,
      _enabled
    );
    
  }
  is_shortcut_feedback() {
    BaseButton.init_method_is_shortcut_feedback();
    return _call_native_mb_ret(
      BaseButton._bindings.method_is_shortcut_feedback,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_shortcut(_shortcut) {
    BaseButton.init_method_set_shortcut();
    return _call_native_mb_no_ret(
      BaseButton._bindings.method_set_shortcut,
      this._owner,
      _shortcut
    );
    
  }
  get_shortcut() {
    BaseButton.init_method_get_shortcut();
    return _call_native_mb_ret(
      BaseButton._bindings.method_get_shortcut,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_button_group(_button_group) {
    BaseButton.init_method_set_button_group();
    return _call_native_mb_no_ret(
      BaseButton._bindings.method_set_button_group,
      this._owner,
      _button_group
    );
    
  }
  get_button_group() {
    BaseButton.init_method_get_button_group();
    return _call_native_mb_ret(
      BaseButton._bindings.method_get_button_group,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  
get disabled () {
  return this.is_disabled();
}
set disabled (new_value) {
  this.set_disabled(new_value);
}
get toggle_mode () {
  return this.is_toggle_mode();
}
set toggle_mode (new_value) {
  this.set_toggle_mode(new_value);
}
get button_pressed () {
  return this.is_pressed();
}
set button_pressed (new_value) {
  this.set_pressed(new_value);
}
get action_mode () {
  return this.get_action_mode();
}
set action_mode (new_value) {
  this.set_action_mode(new_value);
}
get button_mask () {
  return this.get_button_mask();
}
set button_mask (new_value) {
  this.set_button_mask(new_value);
}
get keep_pressed_outside () {
  return this.is_keep_pressed_outside();
}
set keep_pressed_outside (new_value) {
  this.set_keep_pressed_outside(new_value);
}
get button_group () {
  return this.get_button_group();
}
set button_group (new_value) {
  this.set_button_group(new_value);
}
get shortcut () {
  return this.get_shortcut();
}
set shortcut (new_value) {
  this.set_shortcut(new_value);
}
get shortcut_feedback () {
  return this.is_shortcut_feedback();
}
set shortcut_feedback (new_value) {
  this.set_shortcut_feedback(new_value);
}
get shortcut_in_tooltip () {
  return this.is_shortcut_in_tooltip_enabled();
}
set shortcut_in_tooltip (new_value) {
  this.set_shortcut_in_tooltip(new_value);
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