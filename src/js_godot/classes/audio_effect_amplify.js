import * as internal from '__internal__';
import { AudioEffect } from 'src/js_godot/classesaudio_effect'
class _MethodBindings {
    method_set_volume_db;
    method_get_volume_db;
}


export class AudioEffectAmplify extends AudioEffect{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("AudioEffectAmplify");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("AudioEffectAmplify");
      let methodname = new StringName("set_volume_db");
      this._bindings.method_set_volume_db = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("AudioEffectAmplify");
      let methodname = new StringName("get_volume_db");
      this._bindings.method_get_volume_db = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
  }
  set_volume_db(_volume) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_volume_db,
      this._owner,
      _volume
    );
  }
  get_volume_db() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_volume_db,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
}