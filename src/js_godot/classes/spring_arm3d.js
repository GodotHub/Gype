import * as internal from '__internal__';
import { RID } from 'src/js_godot/variant/rid'
import { Node3D } from 'src/js_godot/classes/node3d'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_get_hit_length;
    method_set_length;
    method_get_length;
    method_set_shape;
    method_get_shape;
    method_add_excluded_object;
    method_remove_excluded_object;
    method_clear_excluded_objects;
    method_set_collision_mask;
    method_get_collision_mask;
    method_set_margin;
    method_get_margin;
}


export class SpringArm3D extends Node3D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("SpringArm3D");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("SpringArm3D");
        let methodname = new StringName("get_hit_length");
        this._bindings.method_get_hit_length = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          191475506
        );
      }
      {
        let classname = new StringName("SpringArm3D");
        let methodname = new StringName("set_length");
        this._bindings.method_set_length = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("SpringArm3D");
        let methodname = new StringName("get_length");
        this._bindings.method_get_length = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("SpringArm3D");
        let methodname = new StringName("set_shape");
        this._bindings.method_set_shape = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1549710052
        );
      }
      {
        let classname = new StringName("SpringArm3D");
        let methodname = new StringName("get_shape");
        this._bindings.method_get_shape = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3214262478
        );
      }
      {
        let classname = new StringName("SpringArm3D");
        let methodname = new StringName("add_excluded_object");
        this._bindings.method_add_excluded_object = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2722037293
        );
      }
      {
        let classname = new StringName("SpringArm3D");
        let methodname = new StringName("remove_excluded_object");
        this._bindings.method_remove_excluded_object = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3521089500
        );
      }
      {
        let classname = new StringName("SpringArm3D");
        let methodname = new StringName("clear_excluded_objects");
        this._bindings.method_clear_excluded_objects = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3218959716
        );
      }
      {
        let classname = new StringName("SpringArm3D");
        let methodname = new StringName("set_collision_mask");
        this._bindings.method_set_collision_mask = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("SpringArm3D");
        let methodname = new StringName("get_collision_mask");
        this._bindings.method_get_collision_mask = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2455072627
        );
      }
      {
        let classname = new StringName("SpringArm3D");
        let methodname = new StringName("set_margin");
        this._bindings.method_set_margin = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("SpringArm3D");
        let methodname = new StringName("get_margin");
        this._bindings.method_get_margin = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          191475506
        );
      }
  }
  get_hit_length() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_hit_length,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_length(_length) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_length,
      this._owner,
      _length
    );
    
  }
  get_length() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_length,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_shape(_shape) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_shape,
      this._owner,
      _shape
    );
    
  }
  get_shape() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_shape,
      this._owner,
			Variant.INT,
      
    );
    
  }
  add_excluded_object(_RID) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_excluded_object,
      this._owner,
      _RID
    );
    
  }
  remove_excluded_object(_RID) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_remove_excluded_object,
      this._owner,
			Variant.Type.BOOL,
      _RID
    );
    
  }
  clear_excluded_objects() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_clear_excluded_objects,
      this._owner,
      
    );
    
  }
  set_collision_mask(_mask) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_collision_mask,
      this._owner,
      _mask
    );
    
  }
  get_collision_mask() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_collision_mask,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_margin(_margin) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_margin,
      this._owner,
      _margin
    );
    
  }
  get_margin() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_margin,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
}