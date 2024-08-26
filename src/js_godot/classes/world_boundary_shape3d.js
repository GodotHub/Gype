import * as internal from '__internal__';
import { Shape3D } from 'src/js_godot/classesshape3d'
import { Plane } from 'src/js_godot/variant/plane'
class _MethodBindings {
    method_set_plane;
    method_get_plane;
}


export class WorldBoundaryShape3D extends Shape3D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("WorldBoundaryShape3D");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("WorldBoundaryShape3D");
      let methodname = new StringName("set_plane");
      this._bindings.method_set_plane = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3505987427
      );
    }
    {
      let classname = new StringName("WorldBoundaryShape3D");
      let methodname = new StringName("get_plane");
      this._bindings.method_get_plane = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2753500971
      );
    }
  }
  set_plane(_plane) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_plane,
      this._owner,
      _plane
    );
  }
  get_plane() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_plane,
      this._owner,
			Variant.Type.PLANE
    ,
      
    );
  }
}