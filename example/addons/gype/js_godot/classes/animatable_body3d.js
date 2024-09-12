import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { StaticBody3D } from '@js_godot/classes/static_body3d'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_sync_to_physics;
  method_is_sync_to_physics_enabled;
}
export class AnimatableBody3D extends StaticBody3D{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("AnimatableBody3D");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_sync_to_physics() {
    if (!this.#_bindings.method_set_sync_to_physics) {
      let classname = new StringName("AnimatableBody3D");
      let methodname = new StringName("set_sync_to_physics");
      this.#_bindings.method_set_sync_to_physics = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_sync_to_physics_enabled() {
    if (!this.#_bindings.method_is_sync_to_physics_enabled) {
      let classname = new StringName("AnimatableBody3D");
      let methodname = new StringName("is_sync_to_physics_enabled");
      this.#_bindings.method_is_sync_to_physics_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }

  
  
  set_sync_to_physics(_enable) {
    AnimatableBody3D.init_method_set_sync_to_physics();
    return _call_native_mb_no_ret(
      AnimatableBody3D.#_bindings.method_set_sync_to_physics,
      this._owner,
      _enable
    );
    
  }
  is_sync_to_physics_enabled() {
    AnimatableBody3D.init_method_is_sync_to_physics_enabled();
    return _call_native_mb_ret(
      AnimatableBody3D.#_bindings.method_is_sync_to_physics_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  
get sync_to_physics () {
  return this.is_sync_to_physics_enabled();
}
set sync_to_physics (new_value) {
  this.set_sync_to_physics(new_value);
}

}