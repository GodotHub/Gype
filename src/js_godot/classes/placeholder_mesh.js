import * as internal from '__internal__';
import { AABB } from 'src/js_godot/variant/aabb'
import { Mesh } from 'src/js_godot/classesmesh'
class _MethodBindings {
    method_set_aabb;
}


export class PlaceholderMesh extends Mesh{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("PlaceholderMesh");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
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
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_aabb,
      this._owner,
      _aabb
    );
  }
}