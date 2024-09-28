import * as internal from '__internal__';
import { Light3D } from '@js_godot/classes/light3d'
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
}
@GodotClass
export class SpotLight3D extends Light3D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("SpotLight3D");
    } else {
      super(godot_object);
    }
  }

  
  
  
get spot_range () {
  return this.get_param();
}
set spot_range (new_value) {
  this.set_param(new_value);
}
get spot_attenuation () {
  return this.get_param();
}
set spot_attenuation (new_value) {
  this.set_param(new_value);
}
get spot_angle () {
  return this.get_param();
}
set spot_angle (new_value) {
  this.set_param(new_value);
}
get spot_angle_attenuation () {
  return this.get_param();
}
set spot_angle_attenuation (new_value) {
  this.set_param(new_value);
}

}