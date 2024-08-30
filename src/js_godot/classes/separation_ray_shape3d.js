import * as internal from '__internal__';
import { Shape3D } from 'src/js_godot/classes/shape3d'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_set_length;
    method_get_length;
    method_set_slide_on_slope;
    method_get_slide_on_slope;
}


export class SeparationRayShape3D extends Shape3D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("SeparationRayShape3D");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("SeparationRayShape3D");
        let methodname = new StringName("set_length");
        this._bindings.method_set_length = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("SeparationRayShape3D");
        let methodname = new StringName("get_length");
        this._bindings.method_get_length = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("SeparationRayShape3D");
        let methodname = new StringName("set_slide_on_slope");
        this._bindings.method_set_slide_on_slope = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("SeparationRayShape3D");
        let methodname = new StringName("get_slide_on_slope");
        this._bindings.method_get_slide_on_slope = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
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
  set_slide_on_slope(_active) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_slide_on_slope,
      this._owner,
      _active
    );
    
  }
  get_slide_on_slope() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_slide_on_slope,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
}