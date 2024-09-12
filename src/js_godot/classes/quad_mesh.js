import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { PlaneMesh } from '@js_godot/classes/plane_mesh'
import { StringName } from '@js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
}
export class QuadMesh extends PlaneMesh{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("QuadMesh");
    } else {
      super(godot_object);
    }
  }

  
  
  

}