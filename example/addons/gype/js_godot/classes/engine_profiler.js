import * as internal from '__internal__';
import { RefCounted } from '@js_godot/classes/ref_counted'
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
export class EngineProfiler extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("EngineProfiler");
    } else {
      super(godot_object);
    }
  }

  
  
  _toggle(_enable, _options) {
  }
  _add_frame(_data) {
  }
  _tick(_frame_time, _process_time, _physics_time, _physics_frame_time) {
  }
  

}