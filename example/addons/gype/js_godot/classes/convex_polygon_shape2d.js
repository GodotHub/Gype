import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { PackedVector2Array } from '@js_godot/variant/packed_vector2_array'
import { Shape2D } from '@js_godot/classes/shape2d'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_point_cloud;
  method_set_points;
  method_get_points;
}
export class ConvexPolygonShape2D extends Shape2D{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("ConvexPolygonShape2D");
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
      let classname = new StringName("ConvexPolygonShape2D");
      let methodname = new StringName("set_point_cloud");
      this._bindings.method_set_point_cloud = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1509147220
      );
    }
    {
      let classname = new StringName("ConvexPolygonShape2D");
      let methodname = new StringName("set_points");
      this._bindings.method_set_points = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1509147220
      );
    }
    {
      let classname = new StringName("ConvexPolygonShape2D");
      let methodname = new StringName("get_points");
      this._bindings.method_get_points = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2961356807
      );
    }
  }
  set_point_cloud(_point_cloud) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_point_cloud,
      this._owner,
      _point_cloud
    );
    
  }
  set_points(_points) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_points,
      this._owner,
      _points
    );
    
  }
  get_points() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_points,
      this._owner,
			Variant.Type.PACKED_VECTOR2_ARRAY,
    
      
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