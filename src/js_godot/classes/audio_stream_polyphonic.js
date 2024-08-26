import * as internal from '__internal__';
import { AudioStream } from 'src/js_godot/classesaudio_stream'
class _MethodBindings {
    method_set_polyphony;
    method_get_polyphony;
}


export class AudioStreamPolyphonic extends AudioStream{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("AudioStreamPolyphonic");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("AudioStreamPolyphonic");
      let methodname = new StringName("set_polyphony");
      this._bindings.method_set_polyphony = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("AudioStreamPolyphonic");
      let methodname = new StringName("get_polyphony");
      this._bindings.method_get_polyphony = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
  }
  set_polyphony(_voices) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_polyphony,
      this._owner,
      _voices
    );
  }
  get_polyphony() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_polyphony,
      this._owner,
			Variant.Type.INT,
      
    );
  }
}