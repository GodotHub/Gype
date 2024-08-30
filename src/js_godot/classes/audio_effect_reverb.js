import * as internal from '__internal__';
import { AudioEffect } from 'src/js_godot/classes/audio_effect'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_set_predelay_msec;
    method_get_predelay_msec;
    method_set_predelay_feedback;
    method_get_predelay_feedback;
    method_set_room_size;
    method_get_room_size;
    method_set_damping;
    method_get_damping;
    method_set_spread;
    method_get_spread;
    method_set_dry;
    method_get_dry;
    method_set_wet;
    method_get_wet;
    method_set_hpf;
    method_get_hpf;
}


export class AudioEffectReverb extends AudioEffect{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("AudioEffectReverb");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("AudioEffectReverb");
        let methodname = new StringName("set_predelay_msec");
        this._bindings.method_set_predelay_msec = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("AudioEffectReverb");
        let methodname = new StringName("get_predelay_msec");
        this._bindings.method_get_predelay_msec = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("AudioEffectReverb");
        let methodname = new StringName("set_predelay_feedback");
        this._bindings.method_set_predelay_feedback = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("AudioEffectReverb");
        let methodname = new StringName("get_predelay_feedback");
        this._bindings.method_get_predelay_feedback = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("AudioEffectReverb");
        let methodname = new StringName("set_room_size");
        this._bindings.method_set_room_size = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("AudioEffectReverb");
        let methodname = new StringName("get_room_size");
        this._bindings.method_get_room_size = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("AudioEffectReverb");
        let methodname = new StringName("set_damping");
        this._bindings.method_set_damping = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("AudioEffectReverb");
        let methodname = new StringName("get_damping");
        this._bindings.method_get_damping = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("AudioEffectReverb");
        let methodname = new StringName("set_spread");
        this._bindings.method_set_spread = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("AudioEffectReverb");
        let methodname = new StringName("get_spread");
        this._bindings.method_get_spread = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("AudioEffectReverb");
        let methodname = new StringName("set_dry");
        this._bindings.method_set_dry = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("AudioEffectReverb");
        let methodname = new StringName("get_dry");
        this._bindings.method_get_dry = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("AudioEffectReverb");
        let methodname = new StringName("set_wet");
        this._bindings.method_set_wet = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("AudioEffectReverb");
        let methodname = new StringName("get_wet");
        this._bindings.method_get_wet = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("AudioEffectReverb");
        let methodname = new StringName("set_hpf");
        this._bindings.method_set_hpf = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("AudioEffectReverb");
        let methodname = new StringName("get_hpf");
        this._bindings.method_get_hpf = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
  }
  set_predelay_msec(_msec) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_predelay_msec,
      this._owner,
      _msec
    );
    
  }
  get_predelay_msec() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_predelay_msec,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_predelay_feedback(_feedback) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_predelay_feedback,
      this._owner,
      _feedback
    );
    
  }
  get_predelay_feedback() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_predelay_feedback,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_room_size(_size) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_room_size,
      this._owner,
      _size
    );
    
  }
  get_room_size() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_room_size,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_damping(_amount) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_damping,
      this._owner,
      _amount
    );
    
  }
  get_damping() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_damping,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_spread(_amount) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_spread,
      this._owner,
      _amount
    );
    
  }
  get_spread() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_spread,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_dry(_amount) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_dry,
      this._owner,
      _amount
    );
    
  }
  get_dry() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_dry,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_wet(_amount) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_wet,
      this._owner,
      _amount
    );
    
  }
  get_wet() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_wet,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_hpf(_amount) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_hpf,
      this._owner,
      _amount
    );
    
  }
  get_hpf() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_hpf,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
}