import * as internal from '__internal__';
import { Texture2D } from 'src/js_godot/classes/texture2d'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_set_width;
    method_set_curve_x;
    method_get_curve_x;
    method_set_curve_y;
    method_get_curve_y;
    method_set_curve_z;
    method_get_curve_z;
}


export class CurveXYZTexture extends Texture2D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("CurveXYZTexture");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("CurveXYZTexture");
        let methodname = new StringName("set_width");
        this._bindings.method_set_width = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("CurveXYZTexture");
        let methodname = new StringName("set_curve_x");
        this._bindings.method_set_curve_x = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          270443179
        );
      }
      {
        let classname = new StringName("CurveXYZTexture");
        let methodname = new StringName("get_curve_x");
        this._bindings.method_get_curve_x = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2460114913
        );
      }
      {
        let classname = new StringName("CurveXYZTexture");
        let methodname = new StringName("set_curve_y");
        this._bindings.method_set_curve_y = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          270443179
        );
      }
      {
        let classname = new StringName("CurveXYZTexture");
        let methodname = new StringName("get_curve_y");
        this._bindings.method_get_curve_y = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2460114913
        );
      }
      {
        let classname = new StringName("CurveXYZTexture");
        let methodname = new StringName("set_curve_z");
        this._bindings.method_set_curve_z = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          270443179
        );
      }
      {
        let classname = new StringName("CurveXYZTexture");
        let methodname = new StringName("get_curve_z");
        this._bindings.method_get_curve_z = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2460114913
        );
      }
  }
  set_width(_width) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_width,
      this._owner,
      _width
    );
    
  }
  set_curve_x(_curve) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_curve_x,
      this._owner,
      _curve
    );
    
  }
  get_curve_x() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_curve_x,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_curve_y(_curve) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_curve_y,
      this._owner,
      _curve
    );
    
  }
  get_curve_y() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_curve_y,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_curve_z(_curve) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_curve_z,
      this._owner,
      _curve
    );
    
  }
  get_curve_z() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_curve_z,
      this._owner,
			Variant.INT,
      
    );
    
  }
}