import * as internal from '__internal__';
import { AudioEffectFilter } from 'src/js_godot/classesaudio_effect_filter'
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