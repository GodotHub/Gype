import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { Resource } from '@js_godot/classes/resource'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
  method_set_custom_solver_bias;
  method_get_custom_solver_bias;
  method_set_margin;
  method_get_margin;
  method_get_debug_mesh;
}
@GodotClass
export class Shape3D extends Resource{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("Shape3D");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_custom_solver_bias() {
    if (!this._bindings.method_set_custom_solver_bias) {
      let classname = new StringName("Shape3D");
      let methodname = new StringName("set_custom_solver_bias");
      this._bindings.method_set_custom_solver_bias = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_custom_solver_bias() {
    if (!this._bindings.method_get_custom_solver_bias) {
      let classname = new StringName("Shape3D");
      let methodname = new StringName("get_custom_solver_bias");
      this._bindings.method_get_custom_solver_bias = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_margin() {
    if (!this._bindings.method_set_margin) {
      let classname = new StringName("Shape3D");
      let methodname = new StringName("set_margin");
      this._bindings.method_set_margin = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_margin() {
    if (!this._bindings.method_get_margin) {
      let classname = new StringName("Shape3D");
      let methodname = new StringName("get_margin");
      this._bindings.method_get_margin = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_get_debug_mesh() {
    if (!this._bindings.method_get_debug_mesh) {
      let classname = new StringName("Shape3D");
      let methodname = new StringName("get_debug_mesh");
      this._bindings.method_get_debug_mesh = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1605880883
      );
    }
  }

  
  
  set_custom_solver_bias(_bias) {
    Shape3D.init_method_set_custom_solver_bias();
    return _call_native_mb_no_ret(
      Shape3D._bindings.method_set_custom_solver_bias,
      this._owner,
      _bias
    );
    
  }
  get_custom_solver_bias() {
    Shape3D.init_method_get_custom_solver_bias();
    return _call_native_mb_ret(
      Shape3D._bindings.method_get_custom_solver_bias,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_margin(_margin) {
    Shape3D.init_method_set_margin();
    return _call_native_mb_no_ret(
      Shape3D._bindings.method_set_margin,
      this._owner,
      _margin
    );
    
  }
  get_margin() {
    Shape3D.init_method_get_margin();
    return _call_native_mb_ret(
      Shape3D._bindings.method_get_margin,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  get_debug_mesh() {
    Shape3D.init_method_get_debug_mesh();
    return _call_native_mb_ret(
      Shape3D._bindings.method_get_debug_mesh,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  
get custom_solver_bias () {
  return this.get_custom_solver_bias();
}
set custom_solver_bias (new_value) {
  this.set_custom_solver_bias(new_value);
}
get margin () {
  return this.get_margin();
}
set margin (new_value) {
  this.set_margin(new_value);
}

}