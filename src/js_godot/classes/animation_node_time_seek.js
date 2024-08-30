import * as internal from '__internal__';
import { AnimationNode } from 'src/js_godot/classes/animation_node'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
}


export class AnimationNodeTimeSeek extends AnimationNode{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("AnimationNodeTimeSeek");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
  }
}