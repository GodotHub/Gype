import * as internal from '__internal__';
import { SkeletonProfile } from 'src/js_godot/classesskeleton_profile'
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