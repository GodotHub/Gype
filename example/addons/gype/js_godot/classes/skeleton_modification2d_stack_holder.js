import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { SkeletonModification2D } from '@js_godot/classes/skeleton_modification2d'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_held_modification_stack;
  method_get_held_modification_stack;
}
export class SkeletonModification2DStackHolder extends SkeletonModification2D{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("SkeletonModification2DStackHolder");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_held_modification_stack() {
    if (!this.#_bindings.method_set_held_modification_stack) {
      let classname = new StringName("SkeletonModification2DStackHolder");
      let methodname = new StringName("set_held_modification_stack");
      this.#_bindings.method_set_held_modification_stack = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3907307132
      );
    }
  }
  static init_method_get_held_modification_stack() {
    if (!this.#_bindings.method_get_held_modification_stack) {
      let classname = new StringName("SkeletonModification2DStackHolder");
      let methodname = new StringName("get_held_modification_stack");
      this.#_bindings.method_get_held_modification_stack = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2107508396
      );
    }
  }

  
  
  set_held_modification_stack(_held_modification_stack) {
    SkeletonModification2DStackHolder.init_method_set_held_modification_stack();
    return _call_native_mb_no_ret(
      SkeletonModification2DStackHolder.#_bindings.method_set_held_modification_stack,
      this._owner,
      _held_modification_stack
    );
    
  }
  get_held_modification_stack() {
    SkeletonModification2DStackHolder.init_method_get_held_modification_stack();
    return _call_native_mb_ret(
      SkeletonModification2DStackHolder.#_bindings.method_get_held_modification_stack,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  

}