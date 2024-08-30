import * as internal from '__internal__';
import { Vector2 } from 'src/js_godot/variant/vector2'
import { Node2D } from 'src/js_godot/classes/node2d'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_set_motion_scale;
    method_get_motion_scale;
    method_set_motion_offset;
    method_get_motion_offset;
    method_set_mirroring;
    method_get_mirroring;
}


export class ParallaxLayer extends Node2D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("ParallaxLayer");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("ParallaxLayer");
        let methodname = new StringName("set_motion_scale");
        this._bindings.method_set_motion_scale = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          743155724
        );
      }
      {
        let classname = new StringName("ParallaxLayer");
        let methodname = new StringName("get_motion_scale");
        this._bindings.method_get_motion_scale = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3341600327
        );
      }
      {
        let classname = new StringName("ParallaxLayer");
        let methodname = new StringName("set_motion_offset");
        this._bindings.method_set_motion_offset = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          743155724
        );
      }
      {
        let classname = new StringName("ParallaxLayer");
        let methodname = new StringName("get_motion_offset");
        this._bindings.method_get_motion_offset = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3341600327
        );
      }
      {
        let classname = new StringName("ParallaxLayer");
        let methodname = new StringName("set_mirroring");
        this._bindings.method_set_mirroring = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          743155724
        );
      }
      {
        let classname = new StringName("ParallaxLayer");
        let methodname = new StringName("get_mirroring");
        this._bindings.method_get_mirroring = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3341600327
        );
      }
  }
  set_motion_scale(_scale) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_motion_scale,
      this._owner,
      _scale
    );
    
  }
  get_motion_scale() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_motion_scale,
      this._owner,
			Variant.Type.VECTOR2
    ,
      
    );
    
  }
  set_motion_offset(_offset) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_motion_offset,
      this._owner,
      _offset
    );
    
  }
  get_motion_offset() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_motion_offset,
      this._owner,
			Variant.Type.VECTOR2
    ,
      
    );
    
  }
  set_mirroring(_mirror) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_mirroring,
      this._owner,
      _mirror
    );
    
  }
  get_mirroring() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_mirroring,
      this._owner,
			Variant.Type.VECTOR2
    ,
      
    );
    
  }
}