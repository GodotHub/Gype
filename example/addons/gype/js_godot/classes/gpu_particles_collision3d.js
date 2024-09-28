import * as internal from '__internal__';
import { VisualInstance3D } from '@js_godot/classes/visual_instance3d'
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
  method_set_cull_mask;
  method_get_cull_mask;
}
@GodotClass
export class GPUParticlesCollision3D extends VisualInstance3D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("GPUParticlesCollision3D");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_cull_mask() {
    if (!this._bindings.method_set_cull_mask) {
      let classname = new StringName("GPUParticlesCollision3D");
      let methodname = new StringName("set_cull_mask");
      this._bindings.method_set_cull_mask = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_cull_mask() {
    if (!this._bindings.method_get_cull_mask) {
      let classname = new StringName("GPUParticlesCollision3D");
      let methodname = new StringName("get_cull_mask");
      this._bindings.method_get_cull_mask = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }

  
  
  set_cull_mask(_mask) {
    GPUParticlesCollision3D.init_method_set_cull_mask();
    return _call_native_mb_no_ret(
      GPUParticlesCollision3D._bindings.method_set_cull_mask,
      this._owner,
      _mask
    );
    
  }
  get_cull_mask() {
    GPUParticlesCollision3D.init_method_get_cull_mask();
    return _call_native_mb_ret(
      GPUParticlesCollision3D._bindings.method_get_cull_mask,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  
get cull_mask () {
  return this.get_cull_mask();
}
set cull_mask (new_value) {
  this.set_cull_mask(new_value);
}

}