import * as internal from '__internal__';
import { SkeletonProfile } from 'src/js_godot/classes/skeleton_profile'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
}


export class SkeletonProfileHumanoid extends SkeletonProfile{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("SkeletonProfileHumanoid");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
  }
}