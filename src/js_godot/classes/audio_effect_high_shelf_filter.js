import * as internal from '__internal__';
import { AudioEffectFilter } from 'src/js_godot/classes/audio_effect_filter'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
}


export class AudioEffectHighShelfFilter extends AudioEffectFilter{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("AudioEffectHighShelfFilter");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
  }
}