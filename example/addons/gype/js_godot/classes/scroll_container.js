import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { Container } from '@js_godot/classes/container'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_h_scroll;
  method_get_h_scroll;
  method_set_v_scroll;
  method_get_v_scroll;
  method_set_horizontal_custom_step;
  method_get_horizontal_custom_step;
  method_set_vertical_custom_step;
  method_get_vertical_custom_step;
  method_set_horizontal_scroll_mode;
  method_get_horizontal_scroll_mode;
  method_set_vertical_scroll_mode;
  method_get_vertical_scroll_mode;
  method_set_deadzone;
  method_get_deadzone;
  method_set_follow_focus;
  method_is_following_focus;
  method_get_h_scroll_bar;
  method_get_v_scroll_bar;
  method_ensure_control_visible;
}
export class ScrollContainer extends Container{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("ScrollContainer");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_h_scroll() {
    if (!this.#_bindings.method_set_h_scroll) {
      let classname = new StringName("ScrollContainer");
      let methodname = new StringName("set_h_scroll");
      this.#_bindings.method_set_h_scroll = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_h_scroll() {
    if (!this.#_bindings.method_get_h_scroll) {
      let classname = new StringName("ScrollContainer");
      let methodname = new StringName("get_h_scroll");
      this.#_bindings.method_get_h_scroll = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_v_scroll() {
    if (!this.#_bindings.method_set_v_scroll) {
      let classname = new StringName("ScrollContainer");
      let methodname = new StringName("set_v_scroll");
      this.#_bindings.method_set_v_scroll = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_v_scroll() {
    if (!this.#_bindings.method_get_v_scroll) {
      let classname = new StringName("ScrollContainer");
      let methodname = new StringName("get_v_scroll");
      this.#_bindings.method_get_v_scroll = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_horizontal_custom_step() {
    if (!this.#_bindings.method_set_horizontal_custom_step) {
      let classname = new StringName("ScrollContainer");
      let methodname = new StringName("set_horizontal_custom_step");
      this.#_bindings.method_set_horizontal_custom_step = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_horizontal_custom_step() {
    if (!this.#_bindings.method_get_horizontal_custom_step) {
      let classname = new StringName("ScrollContainer");
      let methodname = new StringName("get_horizontal_custom_step");
      this.#_bindings.method_get_horizontal_custom_step = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_vertical_custom_step() {
    if (!this.#_bindings.method_set_vertical_custom_step) {
      let classname = new StringName("ScrollContainer");
      let methodname = new StringName("set_vertical_custom_step");
      this.#_bindings.method_set_vertical_custom_step = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_vertical_custom_step() {
    if (!this.#_bindings.method_get_vertical_custom_step) {
      let classname = new StringName("ScrollContainer");
      let methodname = new StringName("get_vertical_custom_step");
      this.#_bindings.method_get_vertical_custom_step = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_horizontal_scroll_mode() {
    if (!this.#_bindings.method_set_horizontal_scroll_mode) {
      let classname = new StringName("ScrollContainer");
      let methodname = new StringName("set_horizontal_scroll_mode");
      this.#_bindings.method_set_horizontal_scroll_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2750506364
      );
    }
  }
  static init_method_get_horizontal_scroll_mode() {
    if (!this.#_bindings.method_get_horizontal_scroll_mode) {
      let classname = new StringName("ScrollContainer");
      let methodname = new StringName("get_horizontal_scroll_mode");
      this.#_bindings.method_get_horizontal_scroll_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3987985145
      );
    }
  }
  static init_method_set_vertical_scroll_mode() {
    if (!this.#_bindings.method_set_vertical_scroll_mode) {
      let classname = new StringName("ScrollContainer");
      let methodname = new StringName("set_vertical_scroll_mode");
      this.#_bindings.method_set_vertical_scroll_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2750506364
      );
    }
  }
  static init_method_get_vertical_scroll_mode() {
    if (!this.#_bindings.method_get_vertical_scroll_mode) {
      let classname = new StringName("ScrollContainer");
      let methodname = new StringName("get_vertical_scroll_mode");
      this.#_bindings.method_get_vertical_scroll_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3987985145
      );
    }
  }
  static init_method_set_deadzone() {
    if (!this.#_bindings.method_set_deadzone) {
      let classname = new StringName("ScrollContainer");
      let methodname = new StringName("set_deadzone");
      this.#_bindings.method_set_deadzone = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_deadzone() {
    if (!this.#_bindings.method_get_deadzone) {
      let classname = new StringName("ScrollContainer");
      let methodname = new StringName("get_deadzone");
      this.#_bindings.method_get_deadzone = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_follow_focus() {
    if (!this.#_bindings.method_set_follow_focus) {
      let classname = new StringName("ScrollContainer");
      let methodname = new StringName("set_follow_focus");
      this.#_bindings.method_set_follow_focus = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_following_focus() {
    if (!this.#_bindings.method_is_following_focus) {
      let classname = new StringName("ScrollContainer");
      let methodname = new StringName("is_following_focus");
      this.#_bindings.method_is_following_focus = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_get_h_scroll_bar() {
    if (!this.#_bindings.method_get_h_scroll_bar) {
      let classname = new StringName("ScrollContainer");
      let methodname = new StringName("get_h_scroll_bar");
      this.#_bindings.method_get_h_scroll_bar = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4004517983
      );
    }
  }
  static init_method_get_v_scroll_bar() {
    if (!this.#_bindings.method_get_v_scroll_bar) {
      let classname = new StringName("ScrollContainer");
      let methodname = new StringName("get_v_scroll_bar");
      this.#_bindings.method_get_v_scroll_bar = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2630340773
      );
    }
  }
  static init_method_ensure_control_visible() {
    if (!this.#_bindings.method_ensure_control_visible) {
      let classname = new StringName("ScrollContainer");
      let methodname = new StringName("ensure_control_visible");
      this.#_bindings.method_ensure_control_visible = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1496901182
      );
    }
  }

  
  
  set_h_scroll(_value) {
    ScrollContainer.init_method_set_h_scroll();
    return _call_native_mb_no_ret(
      ScrollContainer.#_bindings.method_set_h_scroll,
      this._owner,
      _value
    );
    
  }
  get_h_scroll() {
    ScrollContainer.init_method_get_h_scroll();
    return _call_native_mb_ret(
      ScrollContainer.#_bindings.method_get_h_scroll,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_v_scroll(_value) {
    ScrollContainer.init_method_set_v_scroll();
    return _call_native_mb_no_ret(
      ScrollContainer.#_bindings.method_set_v_scroll,
      this._owner,
      _value
    );
    
  }
  get_v_scroll() {
    ScrollContainer.init_method_get_v_scroll();
    return _call_native_mb_ret(
      ScrollContainer.#_bindings.method_get_v_scroll,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_horizontal_custom_step(_value) {
    ScrollContainer.init_method_set_horizontal_custom_step();
    return _call_native_mb_no_ret(
      ScrollContainer.#_bindings.method_set_horizontal_custom_step,
      this._owner,
      _value
    );
    
  }
  get_horizontal_custom_step() {
    ScrollContainer.init_method_get_horizontal_custom_step();
    return _call_native_mb_ret(
      ScrollContainer.#_bindings.method_get_horizontal_custom_step,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_vertical_custom_step(_value) {
    ScrollContainer.init_method_set_vertical_custom_step();
    return _call_native_mb_no_ret(
      ScrollContainer.#_bindings.method_set_vertical_custom_step,
      this._owner,
      _value
    );
    
  }
  get_vertical_custom_step() {
    ScrollContainer.init_method_get_vertical_custom_step();
    return _call_native_mb_ret(
      ScrollContainer.#_bindings.method_get_vertical_custom_step,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_horizontal_scroll_mode(_enable) {
    ScrollContainer.init_method_set_horizontal_scroll_mode();
    return _call_native_mb_no_ret(
      ScrollContainer.#_bindings.method_set_horizontal_scroll_mode,
      this._owner,
      _enable
    );
    
  }
  get_horizontal_scroll_mode() {
    ScrollContainer.init_method_get_horizontal_scroll_mode();
    return _call_native_mb_ret(
      ScrollContainer.#_bindings.method_get_horizontal_scroll_mode,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_vertical_scroll_mode(_enable) {
    ScrollContainer.init_method_set_vertical_scroll_mode();
    return _call_native_mb_no_ret(
      ScrollContainer.#_bindings.method_set_vertical_scroll_mode,
      this._owner,
      _enable
    );
    
  }
  get_vertical_scroll_mode() {
    ScrollContainer.init_method_get_vertical_scroll_mode();
    return _call_native_mb_ret(
      ScrollContainer.#_bindings.method_get_vertical_scroll_mode,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_deadzone(_deadzone) {
    ScrollContainer.init_method_set_deadzone();
    return _call_native_mb_no_ret(
      ScrollContainer.#_bindings.method_set_deadzone,
      this._owner,
      _deadzone
    );
    
  }
  get_deadzone() {
    ScrollContainer.init_method_get_deadzone();
    return _call_native_mb_ret(
      ScrollContainer.#_bindings.method_get_deadzone,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_follow_focus(_enabled) {
    ScrollContainer.init_method_set_follow_focus();
    return _call_native_mb_no_ret(
      ScrollContainer.#_bindings.method_set_follow_focus,
      this._owner,
      _enabled
    );
    
  }
  is_following_focus() {
    ScrollContainer.init_method_is_following_focus();
    return _call_native_mb_ret(
      ScrollContainer.#_bindings.method_is_following_focus,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  get_h_scroll_bar() {
    ScrollContainer.init_method_get_h_scroll_bar();
    return _call_native_mb_ret(
      ScrollContainer.#_bindings.method_get_h_scroll_bar,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  get_v_scroll_bar() {
    ScrollContainer.init_method_get_v_scroll_bar();
    return _call_native_mb_ret(
      ScrollContainer.#_bindings.method_get_v_scroll_bar,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  ensure_control_visible(_control) {
    ScrollContainer.init_method_ensure_control_visible();
    return _call_native_mb_no_ret(
      ScrollContainer.#_bindings.method_ensure_control_visible,
      this._owner,
      _control
    );
    
  }
  
get follow_focus () {
  return this.is_following_focus();
}
set follow_focus (new_value) {
  this.set_follow_focus(new_value);
}
get scroll_horizontal () {
  return this.get_h_scroll();
}
set scroll_horizontal (new_value) {
  this.set_h_scroll(new_value);
}
get scroll_vertical () {
  return this.get_v_scroll();
}
set scroll_vertical (new_value) {
  this.set_v_scroll(new_value);
}
get scroll_horizontal_custom_step () {
  return this.get_horizontal_custom_step();
}
set scroll_horizontal_custom_step (new_value) {
  this.set_horizontal_custom_step(new_value);
}
get scroll_vertical_custom_step () {
  return this.get_vertical_custom_step();
}
set scroll_vertical_custom_step (new_value) {
  this.set_vertical_custom_step(new_value);
}
get horizontal_scroll_mode () {
  return this.get_horizontal_scroll_mode();
}
set horizontal_scroll_mode (new_value) {
  this.set_horizontal_scroll_mode(new_value);
}
get vertical_scroll_mode () {
  return this.get_vertical_scroll_mode();
}
set vertical_scroll_mode (new_value) {
  this.set_vertical_scroll_mode(new_value);
}
get scroll_deadzone () {
  return this.get_deadzone();
}
set scroll_deadzone (new_value) {
  this.set_deadzone(new_value);
}

  static ScrollMode = {
    SCROLL_MODE_DISABLED: 0,
    SCROLL_MODE_AUTO: 1,
    SCROLL_MODE_SHOW_ALWAYS: 2,
    SCROLL_MODE_SHOW_NEVER: 3,
  }
}