import * as internal from '__internal__';
import { AudioEffectFilter } from '@js_godot/classes/audio_effect_filter'
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
}
export class AudioEffectBandLimitFilter extends AudioEffectFilter{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("AudioEffectBandLimitFilter");
    } else {
      super(godot_object);
    }
  }

  
  
  

}