import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { BaseMaterial3D } from '@js_godot/classes/base_material3d'
import { StringName } from '@js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
}
export class StandardMaterial3D extends BaseMaterial3D{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("StandardMaterial3D");
    } else {
      super(godot_object);
    }
  }

  
  
  

}