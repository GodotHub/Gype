import * as internal from '__internal__';
import { Node3D } from 'src/js_godot/classes/node3d'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_resource_changed;
    method_set_shape;
    method_get_shape;
    method_set_disabled;
    method_is_disabled;
    method_make_convex_from_siblings;
}


export class CollisionShape3D extends Node3D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("CollisionShape3D");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("CollisionShape3D");
        let methodname = new StringName("resource_changed");
        this._bindings.method_resource_changed = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          968641751
        );
      }
      {
        let classname = new StringName("CollisionShape3D");
        let methodname = new StringName("set_shape");
        this._bindings.method_set_shape = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1549710052
        );
      }
      {
        let classname = new StringName("CollisionShape3D");
        let methodname = new StringName("get_shape");
        this._bindings.method_get_shape = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3214262478
        );
      }
      {
        let classname = new StringName("CollisionShape3D");
        let methodname = new StringName("set_disabled");
        this._bindings.method_set_disabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("CollisionShape3D");
        let methodname = new StringName("is_disabled");
        this._bindings.method_is_disabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("CollisionShape3D");
        let methodname = new StringName("make_convex_from_siblings");
        this._bindings.method_make_convex_from_siblings = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3218959716
        );
      }
  }
  resource_changed(_resource) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_resource_changed,
      this._owner,
      _resource
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
  set_disabled(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_disabled,
      this._owner,
      _enable
    );
    
  }
  is_disabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_disabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  make_convex_from_siblings() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_make_convex_from_siblings,
      this._owner,
      
    );
    
  }
}