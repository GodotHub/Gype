import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import { Shape2D } from '@js_godot/classes/shape2d'
import { Vector2 } from '@js_godot/variant/vector2'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_normal;
  method_get_normal;
  method_set_distance;
  method_get_distance;
}
export class WorldBoundaryShape2D extends Shape2D{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("WorldBoundaryShape2D");
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
      let classname = new StringName("WorldBoundaryShape2D");
      let methodname = new StringName("set_normal");
      this._bindings.method_set_normal = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        743155724
      );
    }
    {
      let classname = new StringName("WorldBoundaryShape2D");
      let methodname = new StringName("get_normal");
      this._bindings.method_get_normal = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3341600327
      );
    }
    {
      let classname = new StringName("WorldBoundaryShape2D");
      let methodname = new StringName("set_distance");
      this._bindings.method_set_distance = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("WorldBoundaryShape2D");
      let methodname = new StringName("get_distance");
      this._bindings.method_get_distance = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
  }
  set_normal(_normal) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_normal,
      this._owner,
      _normal
    );
    
  }
  get_normal() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_normal,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  set_distance(_distance) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_distance,
      this._owner,
      _distance
    );
    
  }
  get_distance() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_distance,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  
get normal () {
  return this.get_normal();
}
set normal (new_value) {
  this.set_normal(new_value);
}
get distance () {
  return this.get_distance();
}
set distance (new_value) {
  this.set_distance(new_value);
}


  static {
    this._init_bindings();
  }
}