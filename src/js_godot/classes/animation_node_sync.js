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
    method_set_use_sync;
    method_is_using_sync;
}


export class AnimationNodeSync extends AnimationNode{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("AnimationNodeSync");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("AnimationNodeSync");
        let methodname = new StringName("set_use_sync");
        this._bindings.method_set_use_sync = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("AnimationNodeSync");
        let methodname = new StringName("is_using_sync");
        this._bindings.method_is_using_sync = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
  }
  set_use_sync(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_use_sync,
      this._owner,
      _enable
    );
    
  }
  is_using_sync() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_using_sync,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
}