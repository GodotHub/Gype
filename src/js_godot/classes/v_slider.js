import * as internal from '__internal__';
import { Slider } from 'src/js_godot/classesslider'
class _MethodBindings {
}


export class VSlider extends Slider{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("VSlider");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
  }
}