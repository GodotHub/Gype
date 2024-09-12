import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { AnimationNodeSync } from '@js_godot/classes/animation_node_sync'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_input_count;
  method_set_input_as_auto_advance;
  method_is_input_set_as_auto_advance;
  method_set_input_break_loop_at_end;
  method_is_input_loop_broken_at_end;
  method_set_input_reset;
  method_is_input_reset;
  method_set_xfade_time;
  method_get_xfade_time;
  method_set_xfade_curve;
  method_get_xfade_curve;
  method_set_allow_transition_to_self;
  method_is_allow_transition_to_self;
}
export class AnimationNodeTransition extends AnimationNodeSync{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("AnimationNodeTransition");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_input_count() {
    if (!this.#_bindings.method_set_input_count) {
      let classname = new StringName("AnimationNodeTransition");
      let methodname = new StringName("set_input_count");
      this.#_bindings.method_set_input_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_set_input_as_auto_advance() {
    if (!this.#_bindings.method_set_input_as_auto_advance) {
      let classname = new StringName("AnimationNodeTransition");
      let methodname = new StringName("set_input_as_auto_advance");
      this.#_bindings.method_set_input_as_auto_advance = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        300928843
      );
    }
  }
  static init_method_is_input_set_as_auto_advance() {
    if (!this.#_bindings.method_is_input_set_as_auto_advance) {
      let classname = new StringName("AnimationNodeTransition");
      let methodname = new StringName("is_input_set_as_auto_advance");
      this.#_bindings.method_is_input_set_as_auto_advance = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1116898809
      );
    }
  }
  static init_method_set_input_break_loop_at_end() {
    if (!this.#_bindings.method_set_input_break_loop_at_end) {
      let classname = new StringName("AnimationNodeTransition");
      let methodname = new StringName("set_input_break_loop_at_end");
      this.#_bindings.method_set_input_break_loop_at_end = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        300928843
      );
    }
  }
  static init_method_is_input_loop_broken_at_end() {
    if (!this.#_bindings.method_is_input_loop_broken_at_end) {
      let classname = new StringName("AnimationNodeTransition");
      let methodname = new StringName("is_input_loop_broken_at_end");
      this.#_bindings.method_is_input_loop_broken_at_end = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1116898809
      );
    }
  }
  static init_method_set_input_reset() {
    if (!this.#_bindings.method_set_input_reset) {
      let classname = new StringName("AnimationNodeTransition");
      let methodname = new StringName("set_input_reset");
      this.#_bindings.method_set_input_reset = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        300928843
      );
    }
  }
  static init_method_is_input_reset() {
    if (!this.#_bindings.method_is_input_reset) {
      let classname = new StringName("AnimationNodeTransition");
      let methodname = new StringName("is_input_reset");
      this.#_bindings.method_is_input_reset = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1116898809
      );
    }
  }
  static init_method_set_xfade_time() {
    if (!this.#_bindings.method_set_xfade_time) {
      let classname = new StringName("AnimationNodeTransition");
      let methodname = new StringName("set_xfade_time");
      this.#_bindings.method_set_xfade_time = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_xfade_time() {
    if (!this.#_bindings.method_get_xfade_time) {
      let classname = new StringName("AnimationNodeTransition");
      let methodname = new StringName("get_xfade_time");
      this.#_bindings.method_get_xfade_time = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_xfade_curve() {
    if (!this.#_bindings.method_set_xfade_curve) {
      let classname = new StringName("AnimationNodeTransition");
      let methodname = new StringName("set_xfade_curve");
      this.#_bindings.method_set_xfade_curve = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        270443179
      );
    }
  }
  static init_method_get_xfade_curve() {
    if (!this.#_bindings.method_get_xfade_curve) {
      let classname = new StringName("AnimationNodeTransition");
      let methodname = new StringName("get_xfade_curve");
      this.#_bindings.method_get_xfade_curve = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2460114913
      );
    }
  }
  static init_method_set_allow_transition_to_self() {
    if (!this.#_bindings.method_set_allow_transition_to_self) {
      let classname = new StringName("AnimationNodeTransition");
      let methodname = new StringName("set_allow_transition_to_self");
      this.#_bindings.method_set_allow_transition_to_self = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_allow_transition_to_self() {
    if (!this.#_bindings.method_is_allow_transition_to_self) {
      let classname = new StringName("AnimationNodeTransition");
      let methodname = new StringName("is_allow_transition_to_self");
      this.#_bindings.method_is_allow_transition_to_self = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }

  
  
  set_input_count(_input_count) {
    AnimationNodeTransition.init_method_set_input_count();
    return _call_native_mb_no_ret(
      AnimationNodeTransition.#_bindings.method_set_input_count,
      this._owner,
      _input_count
    );
    
  }
  set_input_as_auto_advance(_input, _enable) {
    AnimationNodeTransition.init_method_set_input_as_auto_advance();
    return _call_native_mb_no_ret(
      AnimationNodeTransition.#_bindings.method_set_input_as_auto_advance,
      this._owner,
      _input, _enable
    );
    
  }
  is_input_set_as_auto_advance(_input) {
    AnimationNodeTransition.init_method_is_input_set_as_auto_advance();
    return _call_native_mb_ret(
      AnimationNodeTransition.#_bindings.method_is_input_set_as_auto_advance,
      this._owner,
			Variant.Type.BOOL,
    
      _input
    );
    
  }
  set_input_break_loop_at_end(_input, _enable) {
    AnimationNodeTransition.init_method_set_input_break_loop_at_end();
    return _call_native_mb_no_ret(
      AnimationNodeTransition.#_bindings.method_set_input_break_loop_at_end,
      this._owner,
      _input, _enable
    );
    
  }
  is_input_loop_broken_at_end(_input) {
    AnimationNodeTransition.init_method_is_input_loop_broken_at_end();
    return _call_native_mb_ret(
      AnimationNodeTransition.#_bindings.method_is_input_loop_broken_at_end,
      this._owner,
			Variant.Type.BOOL,
    
      _input
    );
    
  }
  set_input_reset(_input, _enable) {
    AnimationNodeTransition.init_method_set_input_reset();
    return _call_native_mb_no_ret(
      AnimationNodeTransition.#_bindings.method_set_input_reset,
      this._owner,
      _input, _enable
    );
    
  }
  is_input_reset(_input) {
    AnimationNodeTransition.init_method_is_input_reset();
    return _call_native_mb_ret(
      AnimationNodeTransition.#_bindings.method_is_input_reset,
      this._owner,
			Variant.Type.BOOL,
    
      _input
    );
    
  }
  set_xfade_time(_time) {
    AnimationNodeTransition.init_method_set_xfade_time();
    return _call_native_mb_no_ret(
      AnimationNodeTransition.#_bindings.method_set_xfade_time,
      this._owner,
      _time
    );
    
  }
  get_xfade_time() {
    AnimationNodeTransition.init_method_get_xfade_time();
    return _call_native_mb_ret(
      AnimationNodeTransition.#_bindings.method_get_xfade_time,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_xfade_curve(_curve) {
    AnimationNodeTransition.init_method_set_xfade_curve();
    return _call_native_mb_no_ret(
      AnimationNodeTransition.#_bindings.method_set_xfade_curve,
      this._owner,
      _curve
    );
    
  }
  get_xfade_curve() {
    AnimationNodeTransition.init_method_get_xfade_curve();
    return _call_native_mb_ret(
      AnimationNodeTransition.#_bindings.method_get_xfade_curve,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_allow_transition_to_self(_enable) {
    AnimationNodeTransition.init_method_set_allow_transition_to_self();
    return _call_native_mb_no_ret(
      AnimationNodeTransition.#_bindings.method_set_allow_transition_to_self,
      this._owner,
      _enable
    );
    
  }
  is_allow_transition_to_self() {
    AnimationNodeTransition.init_method_is_allow_transition_to_self();
    return _call_native_mb_ret(
      AnimationNodeTransition.#_bindings.method_is_allow_transition_to_self,
      this._owner,
			Variant.Type.BOOL,
    
      
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
get allow_transition_to_self () {
  return this.is_allow_transition_to_self();
}
set allow_transition_to_self (new_value) {
  this.set_allow_transition_to_self(new_value);
}
get input_count () {
  return this.get_input_count();
}
set input_count (new_value) {
  this.set_input_count(new_value);
}

}