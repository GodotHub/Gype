import * as internal from '__internal__';
import { PackedVector3Array } from '@js_godot/variant/packed_vector3_array'
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { Shape3D } from '@js_godot/classes/shape3d'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_points;
  method_get_points;
}
export class ConvexPolygonShape3D extends Shape3D{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("ConvexPolygonShape3D");
    } else {
      super(godot_object);
    }
  }
  
  static async _init_bindings() {
    if (this.#initialized) {
      return;
    }
    this.#initialized = true;
    {
      let classname = new StringName("ConvexPolygonShape3D");
      let methodname = new StringName("set_points");
      this._bindings.method_set_points = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        334873810
      );
    }
    {
      let classname = new StringName("ConvexPolygonShape3D");
      let methodname = new StringName("get_points");
      this._bindings.method_get_points = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        497664490
      );
    }
  }
  
  set_points(_points) {
    return _call_native_mb_no_ret(
      ConvexPolygonShape3D._bindings.method_set_points,
      this._owner,
      _points
    );
    
  }
  get_points() {
    return _call_native_mb_ret(
      ConvexPolygonShape3D._bindings.method_get_points,
      this._owner,
			Variant.Type.PACKED_VECTOR3_ARRAY,
    
      
    );
    
  }
  
get points () {
  return this.get_points();
}
set points (new_value) {
  this.set_points(new_value);
}


  static {
    this._init_bindings();
  }
}