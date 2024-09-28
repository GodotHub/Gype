import * as internal from '__internal__';
import { Mesh } from '@js_godot/classes/mesh'
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
  method_set_aabb;
}
@GodotClass
export class PlaceholderMesh extends Mesh{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("PlaceholderMesh");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_aabb() {
    if (!this._bindings.method_set_aabb) {
      let classname = new StringName("PlaceholderMesh");
      let methodname = new StringName("set_aabb");
      this._bindings.method_set_aabb = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        259215842
      );
    }
  }

  
  
  set_aabb(_aabb) {
    PlaceholderMesh.init_method_set_aabb();
    return _call_native_mb_no_ret(
      PlaceholderMesh._bindings.method_set_aabb,
      this._owner,
      _aabb
    );
    
  }
  
get aabb () {
  return this.get_aabb();
}
set aabb (new_value) {
  this.set_aabb(new_value);
}

}