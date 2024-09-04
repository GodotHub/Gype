import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import { AudioEffect } from '@js_godot/classes/audio_effect'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_ceiling_db;
  method_get_ceiling_db;
  method_set_threshold_db;
  method_get_threshold_db;
  method_set_soft_clip_db;
  method_get_soft_clip_db;
  method_set_soft_clip_ratio;
  method_get_soft_clip_ratio;
}
export class AudioEffectLimiter extends AudioEffect{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("AudioEffectLimiter");
    } else {
      super(godot_object);
    }
  }
  
  static async _init_bindings() {
    if (this.#initialized) {
      return;
    }
    this.#initialized = true;
    {
      let classname = new StringName("AudioEffectLimiter");
      let methodname = new StringName("set_ceiling_db");
      this._bindings.method_set_ceiling_db = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("AudioEffectLimiter");
      let methodname = new StringName("get_ceiling_db");
      this._bindings.method_get_ceiling_db = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("AudioEffectLimiter");
      let methodname = new StringName("set_threshold_db");
      this._bindings.method_set_threshold_db = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("AudioEffectLimiter");
      let methodname = new StringName("get_threshold_db");
      this._bindings.method_get_threshold_db = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("AudioEffectLimiter");
      let methodname = new StringName("set_soft_clip_db");
      this._bindings.method_set_soft_clip_db = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("AudioEffectLimiter");
      let methodname = new StringName("get_soft_clip_db");
      this._bindings.method_get_soft_clip_db = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("AudioEffectLimiter");
      let methodname = new StringName("set_soft_clip_ratio");
      this._bindings.method_set_soft_clip_ratio = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("AudioEffectLimiter");
      let methodname = new StringName("get_soft_clip_ratio");
      this._bindings.method_get_soft_clip_ratio = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
  }
  set_ceiling_db(_ceiling) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_ceiling_db,
      this._owner,
      _ceiling
    );
    
  }
  get_ceiling_db() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_ceiling_db,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_threshold_db(_threshold) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_threshold_db,
      this._owner,
      _threshold
    );
    
  }
  get_threshold_db() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_threshold_db,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_soft_clip_db(_soft_clip) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_soft_clip_db,
      this._owner,
      _soft_clip
    );
    
  }
  get_soft_clip_db() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_soft_clip_db,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_soft_clip_ratio(_soft_clip) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_soft_clip_ratio,
      this._owner,
      _soft_clip
    );
    
  }
  get_soft_clip_ratio() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_soft_clip_ratio,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  
get ceiling_db () {
  return this.get_ceiling_db();
}
set ceiling_db (new_value) {
  this.set_ceiling_db(new_value);
}
get threshold_db () {
  return this.get_threshold_db();
}
set threshold_db (new_value) {
  this.set_threshold_db(new_value);
}
get soft_clip_db () {
  return this.get_soft_clip_db();
}
set soft_clip_db (new_value) {
  this.set_soft_clip_db(new_value);
}
get soft_clip_ratio () {
  return this.get_soft_clip_ratio();
}
set soft_clip_ratio (new_value) {
  this.set_soft_clip_ratio(new_value);
}


  static {
    this._init_bindings();
  }
}