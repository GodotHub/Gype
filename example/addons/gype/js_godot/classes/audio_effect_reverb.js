import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { AudioEffect } from '@js_godot/classes/audio_effect'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

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
@GodotClass
export class AudioEffectReverb extends AudioEffect{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("AudioEffectReverb");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_predelay_msec() {
    if (!this._bindings.method_set_predelay_msec) {
      let classname = new StringName("AudioEffectReverb");
      let methodname = new StringName("set_predelay_msec");
      this._bindings.method_set_predelay_msec = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_predelay_msec() {
    if (!this._bindings.method_get_predelay_msec) {
      let classname = new StringName("AudioEffectReverb");
      let methodname = new StringName("get_predelay_msec");
      this._bindings.method_get_predelay_msec = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_predelay_feedback() {
    if (!this._bindings.method_set_predelay_feedback) {
      let classname = new StringName("AudioEffectReverb");
      let methodname = new StringName("set_predelay_feedback");
      this._bindings.method_set_predelay_feedback = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_predelay_feedback() {
    if (!this._bindings.method_get_predelay_feedback) {
      let classname = new StringName("AudioEffectReverb");
      let methodname = new StringName("get_predelay_feedback");
      this._bindings.method_get_predelay_feedback = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_room_size() {
    if (!this._bindings.method_set_room_size) {
      let classname = new StringName("AudioEffectReverb");
      let methodname = new StringName("set_room_size");
      this._bindings.method_set_room_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_room_size() {
    if (!this._bindings.method_get_room_size) {
      let classname = new StringName("AudioEffectReverb");
      let methodname = new StringName("get_room_size");
      this._bindings.method_get_room_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_damping() {
    if (!this._bindings.method_set_damping) {
      let classname = new StringName("AudioEffectReverb");
      let methodname = new StringName("set_damping");
      this._bindings.method_set_damping = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_damping() {
    if (!this._bindings.method_get_damping) {
      let classname = new StringName("AudioEffectReverb");
      let methodname = new StringName("get_damping");
      this._bindings.method_get_damping = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_spread() {
    if (!this._bindings.method_set_spread) {
      let classname = new StringName("AudioEffectReverb");
      let methodname = new StringName("set_spread");
      this._bindings.method_set_spread = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_spread() {
    if (!this._bindings.method_get_spread) {
      let classname = new StringName("AudioEffectReverb");
      let methodname = new StringName("get_spread");
      this._bindings.method_get_spread = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_dry() {
    if (!this._bindings.method_set_dry) {
      let classname = new StringName("AudioEffectReverb");
      let methodname = new StringName("set_dry");
      this._bindings.method_set_dry = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_dry() {
    if (!this._bindings.method_get_dry) {
      let classname = new StringName("AudioEffectReverb");
      let methodname = new StringName("get_dry");
      this._bindings.method_get_dry = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_wet() {
    if (!this._bindings.method_set_wet) {
      let classname = new StringName("AudioEffectReverb");
      let methodname = new StringName("set_wet");
      this._bindings.method_set_wet = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_wet() {
    if (!this._bindings.method_get_wet) {
      let classname = new StringName("AudioEffectReverb");
      let methodname = new StringName("get_wet");
      this._bindings.method_get_wet = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_hpf() {
    if (!this._bindings.method_set_hpf) {
      let classname = new StringName("AudioEffectReverb");
      let methodname = new StringName("set_hpf");
      this._bindings.method_set_hpf = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_hpf() {
    if (!this._bindings.method_get_hpf) {
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
    AudioEffectReverb.init_method_set_predelay_msec();
    return _call_native_mb_no_ret(
      AudioEffectReverb._bindings.method_set_predelay_msec,
      this._owner,
      _msec
    );
    
  }
  get_predelay_msec() {
    AudioEffectReverb.init_method_get_predelay_msec();
    return _call_native_mb_ret(
      AudioEffectReverb._bindings.method_get_predelay_msec,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_predelay_feedback(_feedback) {
    AudioEffectReverb.init_method_set_predelay_feedback();
    return _call_native_mb_no_ret(
      AudioEffectReverb._bindings.method_set_predelay_feedback,
      this._owner,
      _feedback
    );
    
  }
  get_predelay_feedback() {
    AudioEffectReverb.init_method_get_predelay_feedback();
    return _call_native_mb_ret(
      AudioEffectReverb._bindings.method_get_predelay_feedback,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_room_size(_size) {
    AudioEffectReverb.init_method_set_room_size();
    return _call_native_mb_no_ret(
      AudioEffectReverb._bindings.method_set_room_size,
      this._owner,
      _size
    );
    
  }
  get_room_size() {
    AudioEffectReverb.init_method_get_room_size();
    return _call_native_mb_ret(
      AudioEffectReverb._bindings.method_get_room_size,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_damping(_amount) {
    AudioEffectReverb.init_method_set_damping();
    return _call_native_mb_no_ret(
      AudioEffectReverb._bindings.method_set_damping,
      this._owner,
      _amount
    );
    
  }
  get_damping() {
    AudioEffectReverb.init_method_get_damping();
    return _call_native_mb_ret(
      AudioEffectReverb._bindings.method_get_damping,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_spread(_amount) {
    AudioEffectReverb.init_method_set_spread();
    return _call_native_mb_no_ret(
      AudioEffectReverb._bindings.method_set_spread,
      this._owner,
      _amount
    );
    
  }
  get_spread() {
    AudioEffectReverb.init_method_get_spread();
    return _call_native_mb_ret(
      AudioEffectReverb._bindings.method_get_spread,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_dry(_amount) {
    AudioEffectReverb.init_method_set_dry();
    return _call_native_mb_no_ret(
      AudioEffectReverb._bindings.method_set_dry,
      this._owner,
      _amount
    );
    
  }
  get_dry() {
    AudioEffectReverb.init_method_get_dry();
    return _call_native_mb_ret(
      AudioEffectReverb._bindings.method_get_dry,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_wet(_amount) {
    AudioEffectReverb.init_method_set_wet();
    return _call_native_mb_no_ret(
      AudioEffectReverb._bindings.method_set_wet,
      this._owner,
      _amount
    );
    
  }
  get_wet() {
    AudioEffectReverb.init_method_get_wet();
    return _call_native_mb_ret(
      AudioEffectReverb._bindings.method_get_wet,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_hpf(_amount) {
    AudioEffectReverb.init_method_set_hpf();
    return _call_native_mb_no_ret(
      AudioEffectReverb._bindings.method_set_hpf,
      this._owner,
      _amount
    );
    
  }
  get_hpf() {
    AudioEffectReverb.init_method_get_hpf();
    return _call_native_mb_ret(
      AudioEffectReverb._bindings.method_get_hpf,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  
get predelay_msec () {
  return this.get_predelay_msec();
}
set predelay_msec (new_value) {
  this.set_predelay_msec(new_value);
}
get predelay_feedback () {
  return this.get_predelay_feedback();
}
set predelay_feedback (new_value) {
  this.set_predelay_feedback(new_value);
}
get room_size () {
  return this.get_room_size();
}
set room_size (new_value) {
  this.set_room_size(new_value);
}
get damping () {
  return this.get_damping();
}
set damping (new_value) {
  this.set_damping(new_value);
}
get spread () {
  return this.get_spread();
}
set spread (new_value) {
  this.set_spread(new_value);
}
get hipass () {
  return this.get_hpf();
}
set hipass (new_value) {
  this.set_hpf(new_value);
}
get dry () {
  return this.get_dry();
}
set dry (new_value) {
  this.set_dry(new_value);
}
get wet () {
  return this.get_wet();
}
set wet (new_value) {
  this.set_wet(new_value);
}

}