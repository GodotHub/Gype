import * as internal from '__internal__';
import { Shape3D } from 'src/js_godot/classesshape3d'
class _MethodBindings {
    method_set_radius;
    method_get_radius;
}


export class SphereShape3D extends Shape3D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("SphereShape3D");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("SphereShape3D");
      let methodname = new StringName("set_radius");
      this._bindings.method_set_radius = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("SphereShape3D");
      let methodname = new StringName("get_radius");
      this._bindings.method_get_radius = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
  }
  set_radius(_radius) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_radius,
      this._owner,
      _radius
    );
  }
  get_radius() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_radius,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
}