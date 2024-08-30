import * as internal from '__internal__';
import { Vector2 } from 'src/js_godot/variant/vector2'
import { Vector3 } from 'src/js_godot/variant/vector3'
import { Node3D } from 'src/js_godot/classes/node3d'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_set_layer_viewport;
    method_get_layer_viewport;
    method_set_enable_hole_punch;
    method_get_enable_hole_punch;
    method_set_sort_order;
    method_get_sort_order;
    method_set_alpha_blend;
    method_get_alpha_blend;
    method_is_natively_supported;
    method_intersects_ray;
}


export class OpenXRCompositionLayer extends Node3D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("OpenXRCompositionLayer");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("OpenXRCompositionLayer");
        let methodname = new StringName("set_layer_viewport");
        this._bindings.method_set_layer_viewport = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3888077664
        );
      }
      {
        let classname = new StringName("OpenXRCompositionLayer");
        let methodname = new StringName("get_layer_viewport");
        this._bindings.method_get_layer_viewport = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3750751911
        );
      }
      {
        let classname = new StringName("OpenXRCompositionLayer");
        let methodname = new StringName("set_enable_hole_punch");
        this._bindings.method_set_enable_hole_punch = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("OpenXRCompositionLayer");
        let methodname = new StringName("get_enable_hole_punch");
        this._bindings.method_get_enable_hole_punch = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("OpenXRCompositionLayer");
        let methodname = new StringName("set_sort_order");
        this._bindings.method_set_sort_order = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("OpenXRCompositionLayer");
        let methodname = new StringName("get_sort_order");
        this._bindings.method_get_sort_order = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("OpenXRCompositionLayer");
        let methodname = new StringName("set_alpha_blend");
        this._bindings.method_set_alpha_blend = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("OpenXRCompositionLayer");
        let methodname = new StringName("get_alpha_blend");
        this._bindings.method_get_alpha_blend = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("OpenXRCompositionLayer");
        let methodname = new StringName("is_natively_supported");
        this._bindings.method_is_natively_supported = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("OpenXRCompositionLayer");
        let methodname = new StringName("intersects_ray");
        this._bindings.method_intersects_ray = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1091262597
        );
      }
  }
  set_layer_viewport(_viewport) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_layer_viewport,
      this._owner,
      _viewport
    );
    
  }
  get_layer_viewport() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_layer_viewport,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_enable_hole_punch(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_enable_hole_punch,
      this._owner,
      _enable
    );
    
  }
  get_enable_hole_punch() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_enable_hole_punch,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_sort_order(_order) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_sort_order,
      this._owner,
      _order
    );
    
  }
  get_sort_order() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_sort_order,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_alpha_blend(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_alpha_blend,
      this._owner,
      _enabled
    );
    
  }
  get_alpha_blend() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_alpha_blend,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  is_natively_supported() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_natively_supported,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  intersects_ray(_origin, _direction) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_intersects_ray,
      this._owner,
			Variant.Type.VECTOR2
    ,
      _origin, _direction
    );
    
  }
}