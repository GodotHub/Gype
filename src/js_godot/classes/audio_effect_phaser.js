import * as internal from '__internal__';
import { AudioEffect } from 'src/js_godot/classesaudio_effect'
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


export class AudioEffectPhaser extends AudioEffect{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("AudioEffectPhaser");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("AudioEffectPhaser");
      let methodname = new StringName("set_range_min_hz");
      this._bindings.method_set_range_min_hz = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("AudioEffectPhaser");
      let methodname = new StringName("get_range_min_hz");
      this._bindings.method_get_range_min_hz = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("AudioEffectPhaser");
      let methodname = new StringName("set_range_max_hz");
      this._bindings.method_set_range_max_hz = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("AudioEffectPhaser");
      let methodname = new StringName("get_range_max_hz");
      this._bindings.method_get_range_max_hz = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("AudioEffectPhaser");
      let methodname = new StringName("set_rate_hz");
      this._bindings.method_set_rate_hz = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("AudioEffectPhaser");
      let methodname = new StringName("get_rate_hz");
      this._bindings.method_get_rate_hz = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("AudioEffectPhaser");
      let methodname = new StringName("set_feedback");
      this._bindings.method_set_feedback = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("AudioEffectPhaser");
      let methodname = new StringName("get_feedback");
      this._bindings.method_get_feedback = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("AudioEffectPhaser");
      let methodname = new StringName("set_depth");
      this._bindings.method_set_depth = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
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
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_range_min_hz,
      this._owner,
      _hz
    );
  }
  get_range_min_hz() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_range_min_hz,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_range_max_hz(_hz) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_range_max_hz,
      this._owner,
      _hz
    );
  }
  get_range_max_hz() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_range_max_hz,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_rate_hz(_hz) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_rate_hz,
      this._owner,
      _hz
    );
  }
  get_rate_hz() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_rate_hz,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_feedback(_fbk) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_feedback,
      this._owner,
      _fbk
    );
  }
  get_feedback() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_feedback,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_depth(_depth) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_depth,
      this._owner,
      _depth
    );
  }
  get_depth() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_depth,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
}