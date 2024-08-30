import * as internal from '__internal__';
import { AABB } from 'src/js_godot/variant/aabb'
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
    method_set_base;
    method_get_base;
    method_get_instance;
    method_set_layer_mask;
    method_get_layer_mask;
    method_set_layer_mask_value;
    method_get_layer_mask_value;
    method_set_sorting_offset;
    method_get_sorting_offset;
    method_set_sorting_use_aabb_center;
    method_is_sorting_use_aabb_center;
    method_get_aabb;
}


export class VisualInstance3D extends Node3D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("VisualInstance3D");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("VisualInstance3D");
        let methodname = new StringName("set_base");
        this._bindings.method_set_base = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2722037293
        );
      }
      {
        let classname = new StringName("VisualInstance3D");
        let methodname = new StringName("get_base");
        this._bindings.method_get_base = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2944877500
        );
      }
      {
        let classname = new StringName("VisualInstance3D");
        let methodname = new StringName("get_instance");
        this._bindings.method_get_instance = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2944877500
        );
      }
      {
        let classname = new StringName("VisualInstance3D");
        let methodname = new StringName("set_layer_mask");
        this._bindings.method_set_layer_mask = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("VisualInstance3D");
        let methodname = new StringName("get_layer_mask");
        this._bindings.method_get_layer_mask = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("VisualInstance3D");
        let methodname = new StringName("set_layer_mask_value");
        this._bindings.method_set_layer_mask_value = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          300928843
        );
      }
      {
        let classname = new StringName("VisualInstance3D");
        let methodname = new StringName("get_layer_mask_value");
        this._bindings.method_get_layer_mask_value = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1116898809
        );
      }
      {
        let classname = new StringName("VisualInstance3D");
        let methodname = new StringName("set_sorting_offset");
        this._bindings.method_set_sorting_offset = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("VisualInstance3D");
        let methodname = new StringName("get_sorting_offset");
        this._bindings.method_get_sorting_offset = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("VisualInstance3D");
        let methodname = new StringName("set_sorting_use_aabb_center");
        this._bindings.method_set_sorting_use_aabb_center = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("VisualInstance3D");
        let methodname = new StringName("is_sorting_use_aabb_center");
        this._bindings.method_is_sorting_use_aabb_center = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("VisualInstance3D");
        let methodname = new StringName("get_aabb");
        this._bindings.method_get_aabb = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1068685055
        );
      }
  }
  _get_aabb() {
  }
  set_base(_base) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_base,
      this._owner,
      _base
    );
    
  }
  get_base() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_base,
      this._owner,
			Variant.Type.RID
    ,
      
    );
    
  }
  get_instance() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_instance,
      this._owner,
			Variant.Type.RID
    ,
      
    );
    
  }
  set_layer_mask(_mask) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_layer_mask,
      this._owner,
      _mask
    );
    
  }
  get_layer_mask() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_layer_mask,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_layer_mask_value(_layer_number, _value) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_layer_mask_value,
      this._owner,
      _layer_number, _value
    );
    
  }
  get_layer_mask_value(_layer_number) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_layer_mask_value,
      this._owner,
			Variant.Type.BOOL,
      _layer_number
    );
    
  }
  set_sorting_offset(_offset) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_sorting_offset,
      this._owner,
      _offset
    );
    
  }
  get_sorting_offset() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_sorting_offset,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_sorting_use_aabb_center(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_sorting_use_aabb_center,
      this._owner,
      _enabled
    );
    
  }
  is_sorting_use_aabb_center() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_sorting_use_aabb_center,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  get_aabb() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_aabb,
      this._owner,
			Variant.Type.AABB
    ,
      
    );
    
  }
}