import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { Resource } from '@js_godot/classes/resource'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
  method_set_switch_mode;
  method_get_switch_mode;
  method_set_advance_mode;
  method_get_advance_mode;
  method_set_advance_condition;
  method_get_advance_condition;
  method_set_xfade_time;
  method_get_xfade_time;
  method_set_xfade_curve;
  method_get_xfade_curve;
  method_set_break_loop_at_end;
  method_is_loop_broken_at_end;
  method_set_reset;
  method_is_reset;
  method_set_priority;
  method_get_priority;
  method_set_advance_expression;
  method_get_advance_expression;
}
@GodotClass
export class AnimationNodeStateMachineTransition extends Resource{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("AnimationNodeStateMachineTransition");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_switch_mode() {
    if (!this._bindings.method_set_switch_mode) {
      let classname = new StringName("AnimationNodeStateMachineTransition");
      let methodname = new StringName("set_switch_mode");
      this._bindings.method_set_switch_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2074906633
      );
    }
  }
  static init_method_get_switch_mode() {
    if (!this._bindings.method_get_switch_mode) {
      let classname = new StringName("AnimationNodeStateMachineTransition");
      let methodname = new StringName("get_switch_mode");
      this._bindings.method_get_switch_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2138562085
      );
    }
  }
  static init_method_set_advance_mode() {
    if (!this._bindings.method_set_advance_mode) {
      let classname = new StringName("AnimationNodeStateMachineTransition");
      let methodname = new StringName("set_advance_mode");
      this._bindings.method_set_advance_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1210869868
      );
    }
  }
  static init_method_get_advance_mode() {
    if (!this._bindings.method_get_advance_mode) {
      let classname = new StringName("AnimationNodeStateMachineTransition");
      let methodname = new StringName("get_advance_mode");
      this._bindings.method_get_advance_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        61101689
      );
    }
  }
  static init_method_set_advance_condition() {
    if (!this._bindings.method_set_advance_condition) {
      let classname = new StringName("AnimationNodeStateMachineTransition");
      let methodname = new StringName("set_advance_condition");
      this._bindings.method_set_advance_condition = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3304788590
      );
    }
  }
  static init_method_get_advance_condition() {
    if (!this._bindings.method_get_advance_condition) {
      let classname = new StringName("AnimationNodeStateMachineTransition");
      let methodname = new StringName("get_advance_condition");
      this._bindings.method_get_advance_condition = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2002593661
      );
    }
  }
  static init_method_set_xfade_time() {
    if (!this._bindings.method_set_xfade_time) {
      let classname = new StringName("AnimationNodeStateMachineTransition");
      let methodname = new StringName("set_xfade_time");
      this._bindings.method_set_xfade_time = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_xfade_time() {
    if (!this._bindings.method_get_xfade_time) {
      let classname = new StringName("AnimationNodeStateMachineTransition");
      let methodname = new StringName("get_xfade_time");
      this._bindings.method_get_xfade_time = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_xfade_curve() {
    if (!this._bindings.method_set_xfade_curve) {
      let classname = new StringName("AnimationNodeStateMachineTransition");
      let methodname = new StringName("set_xfade_curve");
      this._bindings.method_set_xfade_curve = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        270443179
      );
    }
  }
  static init_method_get_xfade_curve() {
    if (!this._bindings.method_get_xfade_curve) {
      let classname = new StringName("AnimationNodeStateMachineTransition");
      let methodname = new StringName("get_xfade_curve");
      this._bindings.method_get_xfade_curve = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2460114913
      );
    }
  }
  static init_method_set_break_loop_at_end() {
    if (!this._bindings.method_set_break_loop_at_end) {
      let classname = new StringName("AnimationNodeStateMachineTransition");
      let methodname = new StringName("set_break_loop_at_end");
      this._bindings.method_set_break_loop_at_end = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_loop_broken_at_end() {
    if (!this._bindings.method_is_loop_broken_at_end) {
      let classname = new StringName("AnimationNodeStateMachineTransition");
      let methodname = new StringName("is_loop_broken_at_end");
      this._bindings.method_is_loop_broken_at_end = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_reset() {
    if (!this._bindings.method_set_reset) {
      let classname = new StringName("AnimationNodeStateMachineTransition");
      let methodname = new StringName("set_reset");
      this._bindings.method_set_reset = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_reset() {
    if (!this._bindings.method_is_reset) {
      let classname = new StringName("AnimationNodeStateMachineTransition");
      let methodname = new StringName("is_reset");
      this._bindings.method_is_reset = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_priority() {
    if (!this._bindings.method_set_priority) {
      let classname = new StringName("AnimationNodeStateMachineTransition");
      let methodname = new StringName("set_priority");
      this._bindings.method_set_priority = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_priority() {
    if (!this._bindings.method_get_priority) {
      let classname = new StringName("AnimationNodeStateMachineTransition");
      let methodname = new StringName("get_priority");
      this._bindings.method_get_priority = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_advance_expression() {
    if (!this._bindings.method_set_advance_expression) {
      let classname = new StringName("AnimationNodeStateMachineTransition");
      let methodname = new StringName("set_advance_expression");
      this._bindings.method_set_advance_expression = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }
  static init_method_get_advance_expression() {
    if (!this._bindings.method_get_advance_expression) {
      let classname = new StringName("AnimationNodeStateMachineTransition");
      let methodname = new StringName("get_advance_expression");
      this._bindings.method_get_advance_expression = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        201670096
      );
    }
  }

  
  
  set_switch_mode(_mode) {
    AnimationNodeStateMachineTransition.init_method_set_switch_mode();
    return _call_native_mb_no_ret(
      AnimationNodeStateMachineTransition._bindings.method_set_switch_mode,
      this._owner,
      _mode
    );
    
  }
  get_switch_mode() {
    AnimationNodeStateMachineTransition.init_method_get_switch_mode();
    return _call_native_mb_ret(
      AnimationNodeStateMachineTransition._bindings.method_get_switch_mode,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_advance_mode(_mode) {
    AnimationNodeStateMachineTransition.init_method_set_advance_mode();
    return _call_native_mb_no_ret(
      AnimationNodeStateMachineTransition._bindings.method_set_advance_mode,
      this._owner,
      _mode
    );
    
  }
  get_advance_mode() {
    AnimationNodeStateMachineTransition.init_method_get_advance_mode();
    return _call_native_mb_ret(
      AnimationNodeStateMachineTransition._bindings.method_get_advance_mode,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_advance_condition(_name) {
    AnimationNodeStateMachineTransition.init_method_set_advance_condition();
    return _call_native_mb_no_ret(
      AnimationNodeStateMachineTransition._bindings.method_set_advance_condition,
      this._owner,
      _name
    );
    
  }
  get_advance_condition() {
    AnimationNodeStateMachineTransition.init_method_get_advance_condition();
    return _call_native_mb_ret(
      AnimationNodeStateMachineTransition._bindings.method_get_advance_condition,
      this._owner,
			Variant.Type.STRING_NAME,
    
      
    );
    
  }
  set_xfade_time(_secs) {
    AnimationNodeStateMachineTransition.init_method_set_xfade_time();
    return _call_native_mb_no_ret(
      AnimationNodeStateMachineTransition._bindings.method_set_xfade_time,
      this._owner,
      _secs
    );
    
  }
  get_xfade_time() {
    AnimationNodeStateMachineTransition.init_method_get_xfade_time();
    return _call_native_mb_ret(
      AnimationNodeStateMachineTransition._bindings.method_get_xfade_time,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_xfade_curve(_curve) {
    AnimationNodeStateMachineTransition.init_method_set_xfade_curve();
    return _call_native_mb_no_ret(
      AnimationNodeStateMachineTransition._bindings.method_set_xfade_curve,
      this._owner,
      _curve
    );
    
  }
  get_xfade_curve() {
    AnimationNodeStateMachineTransition.init_method_get_xfade_curve();
    return _call_native_mb_ret(
      AnimationNodeStateMachineTransition._bindings.method_get_xfade_curve,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_break_loop_at_end(_enable) {
    AnimationNodeStateMachineTransition.init_method_set_break_loop_at_end();
    return _call_native_mb_no_ret(
      AnimationNodeStateMachineTransition._bindings.method_set_break_loop_at_end,
      this._owner,
      _enable
    );
    
  }
  is_loop_broken_at_end() {
    AnimationNodeStateMachineTransition.init_method_is_loop_broken_at_end();
    return _call_native_mb_ret(
      AnimationNodeStateMachineTransition._bindings.method_is_loop_broken_at_end,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_reset(_reset) {
    AnimationNodeStateMachineTransition.init_method_set_reset();
    return _call_native_mb_no_ret(
      AnimationNodeStateMachineTransition._bindings.method_set_reset,
      this._owner,
      _reset
    );
    
  }
  is_reset() {
    AnimationNodeStateMachineTransition.init_method_is_reset();
    return _call_native_mb_ret(
      AnimationNodeStateMachineTransition._bindings.method_is_reset,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_priority(_priority) {
    AnimationNodeStateMachineTransition.init_method_set_priority();
    return _call_native_mb_no_ret(
      AnimationNodeStateMachineTransition._bindings.method_set_priority,
      this._owner,
      _priority
    );
    
  }
  get_priority() {
    AnimationNodeStateMachineTransition.init_method_get_priority();
    return _call_native_mb_ret(
      AnimationNodeStateMachineTransition._bindings.method_get_priority,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_advance_expression(_text) {
    AnimationNodeStateMachineTransition.init_method_set_advance_expression();
    return _call_native_mb_no_ret(
      AnimationNodeStateMachineTransition._bindings.method_set_advance_expression,
      this._owner,
      _text
    );
    
  }
  get_advance_expression() {
    AnimationNodeStateMachineTransition.init_method_get_advance_expression();
    return _call_native_mb_ret(
      AnimationNodeStateMachineTransition._bindings.method_get_advance_expression,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  
get xfade_time () {
  return this.get_xfade_time();
}
set xfade_time (new_value) {
  this.set_xfade_time(new_value);
}
get xfade_curve () {
  return this.get_xfade_curve();
}
set xfade_curve (new_value) {
  this.set_xfade_curve(new_value);
}
get break_loop_at_end () {
  return this.is_loop_broken_at_end();
}
set break_loop_at_end (new_value) {
  this.set_break_loop_at_end(new_value);
}
get reset () {
  return this.is_reset();
}
set reset (new_value) {
  this.set_reset(new_value);
}
get priority () {
  return this.get_priority();
}
set priority (new_value) {
  this.set_priority(new_value);
}
get switch_mode () {
  return this.get_switch_mode();
}
set switch_mode (new_value) {
  this.set_switch_mode(new_value);
}
get advance_mode () {
  return this.get_advance_mode();
}
set advance_mode (new_value) {
  this.set_advance_mode(new_value);
}
get advance_condition () {
  return this.get_advance_condition();
}
set advance_condition (new_value) {
  this.set_advance_condition(new_value);
}
get advance_expression () {
  return this.get_advance_expression();
}
set advance_expression (new_value) {
  this.set_advance_expression(new_value);
}

  static SwitchMode = {
    SWITCH_MODE_IMMEDIATE: 0,
    SWITCH_MODE_SYNC: 1,
    SWITCH_MODE_AT_END: 2,
  }
  static AdvanceMode = {
    ADVANCE_MODE_DISABLED: 0,
    ADVANCE_MODE_ENABLED: 1,
    ADVANCE_MODE_AUTO: 2,
  }
}