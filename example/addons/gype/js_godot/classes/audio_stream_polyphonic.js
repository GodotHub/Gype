import * as internal from '__internal__';
import { AudioStream } from '@js_godot/classes/audio_stream'
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
  method_set_polyphony;
  method_get_polyphony;
}
@GodotClass
export class AudioStreamPolyphonic extends AudioStream{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("AudioStreamPolyphonic");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_polyphony() {
    if (!this._bindings.method_set_polyphony) {
      let classname = new StringName("AudioStreamPolyphonic");
      let methodname = new StringName("set_polyphony");
      this._bindings.method_set_polyphony = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_polyphony() {
    if (!this._bindings.method_get_polyphony) {
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
    AudioStreamPolyphonic.init_method_set_polyphony();
    return _call_native_mb_no_ret(
      AudioStreamPolyphonic._bindings.method_set_polyphony,
      this._owner,
      _voices
    );
    
  }
  get_polyphony() {
    AudioStreamPolyphonic.init_method_get_polyphony();
    return _call_native_mb_ret(
      AudioStreamPolyphonic._bindings.method_get_polyphony,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  
get polyphony () {
  return this.get_polyphony();
}
set polyphony (new_value) {
  this.set_polyphony(new_value);
}

}