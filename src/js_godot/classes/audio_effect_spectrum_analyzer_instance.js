import * as internal from '__internal__';
import { Vector2 } from 'src/js_godot/variant/vector2'
import { AudioEffectInstance } from 'src/js_godot/classes/audio_effect_instance'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_get_magnitude_for_frequency_range;
}


export class AudioEffectSpectrumAnalyzerInstance extends AudioEffectInstance{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("AudioEffectSpectrumAnalyzerInstance");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("AudioEffectSpectrumAnalyzerInstance");
        let methodname = new StringName("get_magnitude_for_frequency_range");
        this._bindings.method_get_magnitude_for_frequency_range = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          797993915
        );
      }
  }
  get_magnitude_for_frequency_range(_from_hz, _to_hz, _mode) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_magnitude_for_frequency_range,
      this._owner,
			Variant.Type.VECTOR2
    ,
      _from_hz, _to_hz, _mode
    );
    
  }
  static MagnitudeMode = {
    MAGNITUDE_AVERAGE: 0,
    MAGNITUDE_MAX: 1,
  }
}