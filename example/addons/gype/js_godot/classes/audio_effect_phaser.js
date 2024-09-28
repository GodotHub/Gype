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
  method_set_range_min_hz;
  method_get_range_min_hz;
  method_set_range_max_hz;
  method_get_range_max_hz;
  method_set_rate_hz;
  method_get_rate_hz;
  method_set_feedback;
  method_get_feedback;
  method_set_depth;
  method_get_depth;
}
@GodotClass
export class AudioEffectPhaser extends AudioEffect{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("AudioEffectPhaser");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_range_min_hz() {
    if (!this._bindings.method_set_range_min_hz) {
      let classname = new StringName("AudioEffectPhaser");
      let methodname = new StringName("set_range_min_hz");
      this._bindings.method_set_range_min_hz = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_range_min_hz() {
    if (!this._bindings.method_get_range_min_hz) {
      let classname = new StringName("AudioEffectPhaser");
      let methodname = new StringName("get_range_min_hz");
      this._bindings.method_get_range_min_hz = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_range_max_hz() {
    if (!this._bindings.method_set_range_max_hz) {
      let classname = new StringName("AudioEffectPhaser");
      let methodname = new StringName("set_range_max_hz");
      this._bindings.method_set_range_max_hz = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_range_max_hz() {
    if (!this._bindings.method_get_range_max_hz) {
      let classname = new StringName("AudioEffectPhaser");
      let methodname = new StringName("get_range_max_hz");
      this._bindings.method_get_range_max_hz = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_rate_hz() {
    if (!this._bindings.method_set_rate_hz) {
      let classname = new StringName("AudioEffectPhaser");
      let methodname = new StringName("set_rate_hz");
      this._bindings.method_set_rate_hz = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_rate_hz() {
    if (!this._bindings.method_get_rate_hz) {
      let classname = new StringName("AudioEffectPhaser");
      let methodname = new StringName("get_rate_hz");
      this._bindings.method_get_rate_hz = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_feedback() {
    if (!this._bindings.method_set_feedback) {
      let classname = new StringName("AudioEffectPhaser");
      let methodname = new StringName("set_feedback");
      this._bindings.method_set_feedback = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_feedback() {
    if (!this._bindings.method_get_feedback) {
      let classname = new StringName("AudioEffectPhaser");
      let methodname = new StringName("get_feedback");
      this._bindings.method_get_feedback = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_depth() {
    if (!this._bindings.method_set_depth) {
      let classname = new StringName("AudioEffectPhaser");
      let methodname = new StringName("set_depth");
      this._bindings.method_set_depth = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_depth() {
    if (!this._bindings.method_get_depth) {
      let classname = new StringName("AudioEffectPhaser");
      let methodname = new StringName("get_depth");
      this._bindings.method_get_depth = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }

  
  
  set_range_min_hz(_hz) {
    AudioEffectPhaser.init_method_set_range_min_hz();
    return _call_native_mb_no_ret(
      AudioEffectPhaser._bindings.method_set_range_min_hz,
      this._owner,
      _hz
    );
    
  }
  get_range_min_hz() {
    AudioEffectPhaser.init_method_get_range_min_hz();
    return _call_native_mb_ret(
      AudioEffectPhaser._bindings.method_get_range_min_hz,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_range_max_hz(_hz) {
    AudioEffectPhaser.init_method_set_range_max_hz();
    return _call_native_mb_no_ret(
      AudioEffectPhaser._bindings.method_set_range_max_hz,
      this._owner,
      _hz
    );
    
  }
  get_range_max_hz() {
    AudioEffectPhaser.init_method_get_range_max_hz();
    return _call_native_mb_ret(
      AudioEffectPhaser._bindings.method_get_range_max_hz,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_rate_hz(_hz) {
    AudioEffectPhaser.init_method_set_rate_hz();
    return _call_native_mb_no_ret(
      AudioEffectPhaser._bindings.method_set_rate_hz,
      this._owner,
      _hz
    );
    
  }
  get_rate_hz() {
    AudioEffectPhaser.init_method_get_rate_hz();
    return _call_native_mb_ret(
      AudioEffectPhaser._bindings.method_get_rate_hz,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_feedback(_fbk) {
    AudioEffectPhaser.init_method_set_feedback();
    return _call_native_mb_no_ret(
      AudioEffectPhaser._bindings.method_set_feedback,
      this._owner,
      _fbk
    );
    
  }
  get_feedback() {
    AudioEffectPhaser.init_method_get_feedback();
    return _call_native_mb_ret(
      AudioEffectPhaser._bindings.method_get_feedback,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_depth(_depth) {
    AudioEffectPhaser.init_method_set_depth();
    return _call_native_mb_no_ret(
      AudioEffectPhaser._bindings.method_set_depth,
      this._owner,
      _depth
    );
    
  }
  get_depth() {
    AudioEffectPhaser.init_method_get_depth();
    return _call_native_mb_ret(
      AudioEffectPhaser._bindings.method_get_depth,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  
get range_min_hz () {
  return this.get_range_min_hz();
}
set range_min_hz (new_value) {
  this.set_range_min_hz(new_value);
}
get range_max_hz () {
  return this.get_range_max_hz();
}
set range_max_hz (new_value) {
  this.set_range_max_hz(new_value);
}
get rate_hz () {
  return this.get_rate_hz();
}
set rate_hz (new_value) {
  this.set_rate_hz(new_value);
}
get feedback () {
  return this.get_feedback();
}
set feedback (new_value) {
  this.set_feedback(new_value);
}
get depth () {
  return this.get_depth();
}
set depth (new_value) {
  this.set_depth(new_value);
}

}