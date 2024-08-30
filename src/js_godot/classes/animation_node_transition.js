import * as internal from '__internal__';
import { StringName } from 'src/js_godot/variant/string_name'
import { AnimationNodeSync } from 'src/js_godot/classes/animation_node_sync'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

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

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("AnimationNodeTransition");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("AnimationNodeTransition");
        let methodname = new StringName("set_input_count");
        this._bindings.method_set_input_count = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("AnimationNodeTransition");
        let methodname = new StringName("set_input_as_auto_advance");
        this._bindings.method_set_input_as_auto_advance = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          300928843
        );
      }
      {
        let classname = new StringName("AnimationNodeTransition");
        let methodname = new StringName("is_input_set_as_auto_advance");
        this._bindings.method_is_input_set_as_auto_advance = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1116898809
        );
      }
      {
        let classname = new StringName("AnimationNodeTransition");
        let methodname = new StringName("set_input_break_loop_at_end");
        this._bindings.method_set_input_break_loop_at_end = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          300928843
        );
      }
      {
        let classname = new StringName("AnimationNodeTransition");
        let methodname = new StringName("is_input_loop_broken_at_end");
        this._bindings.method_is_input_loop_broken_at_end = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1116898809
        );
      }
      {
        let classname = new StringName("AnimationNodeTransition");
        let methodname = new StringName("set_input_reset");
        this._bindings.method_set_input_reset = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          300928843
        );
      }
      {
        let classname = new StringName("AnimationNodeTransition");
        let methodname = new StringName("is_input_reset");
        this._bindings.method_is_input_reset = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1116898809
        );
      }
      {
        let classname = new StringName("AnimationNodeTransition");
        let methodname = new StringName("set_xfade_time");
        this._bindings.method_set_xfade_time = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("AnimationNodeTransition");
        let methodname = new StringName("get_xfade_time");
        this._bindings.method_get_xfade_time = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("AnimationNodeTransition");
        let methodname = new StringName("set_xfade_curve");
        this._bindings.method_set_xfade_curve = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          270443179
        );
      }
      {
        let classname = new StringName("AnimationNodeTransition");
        let methodname = new StringName("get_xfade_curve");
        this._bindings.method_get_xfade_curve = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2460114913
        );
      }
      {
        let classname = new StringName("AnimationNodeTransition");
        let methodname = new StringName("set_allow_transition_to_self");
        this._bindings.method_set_allow_transition_to_self = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("AnimationNodeTransition");
        let methodname = new StringName("is_allow_transition_to_self");
        this._bindings.method_is_allow_transition_to_self = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
  }
  set_input_count(_input_count) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_input_count,
      this._owner,
      _input_count
    );
    
  }
  set_input_as_auto_advance(_input, _enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_input_as_auto_advance,
      this._owner,
      _input, _enable
    );
    
  }
  is_input_set_as_auto_advance(_input) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_input_set_as_auto_advance,
      this._owner,
			Variant.Type.BOOL,
      _input
    );
    
  }
  set_input_break_loop_at_end(_input, _enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_input_break_loop_at_end,
      this._owner,
      _input, _enable
    );
    
  }
  is_input_loop_broken_at_end(_input) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_input_loop_broken_at_end,
      this._owner,
			Variant.Type.BOOL,
      _input
    );
    
  }
  set_input_reset(_input, _enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_input_reset,
      this._owner,
      _input, _enable
    );
    
  }
  is_input_reset(_input) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_input_reset,
      this._owner,
			Variant.Type.BOOL,
      _input
    );
    
  }
  set_xfade_time(_time) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_xfade_time,
      this._owner,
      _time
    );
    
  }
  get_xfade_time() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_xfade_time,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_xfade_curve(_curve) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_xfade_curve,
      this._owner,
      _curve
    );
    
  }
  get_xfade_curve() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_xfade_curve,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_allow_transition_to_self(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_allow_transition_to_self,
      this._owner,
      _enable
    );
    
  }
  is_allow_transition_to_self() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_allow_transition_to_self,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
}