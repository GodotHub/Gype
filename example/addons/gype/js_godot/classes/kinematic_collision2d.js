import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { Vector2 } from '@js_godot/variant/vector2'
import { RID } from '@js_godot/variant/rid'
import { RefCounted } from '@js_godot/classes/ref_counted'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_get_position;
  method_get_normal;
  method_get_travel;
  method_get_remainder;
  method_get_angle;
  method_get_depth;
  method_get_local_shape;
  method_get_collider;
  method_get_collider_id;
  method_get_collider_rid;
  method_get_collider_shape;
  method_get_collider_shape_index;
  method_get_collider_velocity;
}
export class KinematicCollision2D extends RefCounted{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("KinematicCollision2D");
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
      let classname = new StringName("KinematicCollision2D");
      let methodname = new StringName("get_position");
      this._bindings.method_get_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3341600327
      );
    }
    {
      let classname = new StringName("KinematicCollision2D");
      let methodname = new StringName("get_normal");
      this._bindings.method_get_normal = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3341600327
      );
    }
    {
      let classname = new StringName("KinematicCollision2D");
      let methodname = new StringName("get_travel");
      this._bindings.method_get_travel = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3341600327
      );
    }
    {
      let classname = new StringName("KinematicCollision2D");
      let methodname = new StringName("get_remainder");
      this._bindings.method_get_remainder = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3341600327
      );
    }
    {
      let classname = new StringName("KinematicCollision2D");
      let methodname = new StringName("get_angle");
      this._bindings.method_get_angle = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2841063350
      );
    }
    {
      let classname = new StringName("KinematicCollision2D");
      let methodname = new StringName("get_depth");
      this._bindings.method_get_depth = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("KinematicCollision2D");
      let methodname = new StringName("get_local_shape");
      this._bindings.method_get_local_shape = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1981248198
      );
    }
    {
      let classname = new StringName("KinematicCollision2D");
      let methodname = new StringName("get_collider");
      this._bindings.method_get_collider = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1981248198
      );
    }
    {
      let classname = new StringName("KinematicCollision2D");
      let methodname = new StringName("get_collider_id");
      this._bindings.method_get_collider_id = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("KinematicCollision2D");
      let methodname = new StringName("get_collider_rid");
      this._bindings.method_get_collider_rid = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2944877500
      );
    }
    {
      let classname = new StringName("KinematicCollision2D");
      let methodname = new StringName("get_collider_shape");
      this._bindings.method_get_collider_shape = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1981248198
      );
    }
    {
      let classname = new StringName("KinematicCollision2D");
      let methodname = new StringName("get_collider_shape_index");
      this._bindings.method_get_collider_shape_index = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("KinematicCollision2D");
      let methodname = new StringName("get_collider_velocity");
      this._bindings.method_get_collider_velocity = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3341600327
      );
    }
  }
  get_position() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_position,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  get_normal() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_normal,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  get_travel() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_travel,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  get_remainder() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_remainder,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  get_angle(_up_direction) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_angle,
      this._owner,
			Variant.Type.FLOAT,
      _up_direction
    );
    
  }
  get_depth() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_depth,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  get_local_shape() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_local_shape,
      this._owner,
			Variant.INT,
      
    );
    
  }
  get_collider() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_collider,
      this._owner,
			Variant.INT,
      
    );
    
  }
  get_collider_id() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_collider_id,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  get_collider_rid() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_collider_rid,
      this._owner,
			Variant.Type.RID,
    
      
    );
    
  }
  get_collider_shape() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_collider_shape,
      this._owner,
			Variant.INT,
      
    );
    
  }
  get_collider_shape_index() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_collider_shape_index,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  get_collider_velocity() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_collider_velocity,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  


  static {
    this._init_bindings();
  }
}