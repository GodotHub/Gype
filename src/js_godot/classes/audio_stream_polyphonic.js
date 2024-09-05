import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { AudioStream } from '@js_godot/classes/audio_stream'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_polyphony;
  method_get_polyphony;
}
export class AudioStreamPolyphonic extends AudioStream{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("AudioStreamPolyphonic");
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
      AudioStreamPolyphonic._bindings.method_set_polyphony,
      this._owner,
      _voices
    );
    
  }
  get_polyphony() {
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


  static {
    this._init_bindings();
  }
}