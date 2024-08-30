import * as internal from '__internal__';
import { Container } from 'src/js_godot/classes/container'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_set_stretch;
    method_is_stretch_enabled;
    method_set_stretch_shrink;
    method_get_stretch_shrink;
}


export class SubViewportContainer extends Container{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("SubViewportContainer");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("SubViewportContainer");
        let methodname = new StringName("set_stretch");
        this._bindings.method_set_stretch = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("SubViewportContainer");
        let methodname = new StringName("is_stretch_enabled");
        this._bindings.method_is_stretch_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("SubViewportContainer");
        let methodname = new StringName("set_stretch_shrink");
        this._bindings.method_set_stretch_shrink = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("SubViewportContainer");
        let methodname = new StringName("get_stretch_shrink");
        this._bindings.method_get_stretch_shrink = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
  }
  _propagate_input_event(_event) {
  }
  set_stretch(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_stretch,
      this._owner,
      _enable
    );
    
  }
  is_stretch_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_stretch_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_stretch_shrink(_amount) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_stretch_shrink,
      this._owner,
      _amount
    );
    
  }
  get_stretch_shrink() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_stretch_shrink,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
}