import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { Vector2 } from '@js_godot/variant/vector2'
import { XRNode3D } from '@js_godot/classes/xr_node3d'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_is_button_pressed;
  method_get_input;
  method_get_float;
  method_get_vector2;
  method_get_tracker_hand;
}
export class XRController3D extends XRNode3D{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("XRController3D");
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
      let classname = new StringName("XRController3D");
      let methodname = new StringName("is_button_pressed");
      this._bindings.method_is_button_pressed = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2619796661
      );
    }
    {
      let classname = new StringName("XRController3D");
      let methodname = new StringName("get_input");
      this._bindings.method_get_input = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2760726917
      );
    }
    {
      let classname = new StringName("XRController3D");
      let methodname = new StringName("get_float");
      this._bindings.method_get_float = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2349060816
      );
    }
    {
      let classname = new StringName("XRController3D");
      let methodname = new StringName("get_vector2");
      this._bindings.method_get_vector2 = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3100822709
      );
    }
    {
      let classname = new StringName("XRController3D");
      let methodname = new StringName("get_tracker_hand");
      this._bindings.method_get_tracker_hand = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4181770860
      );
    }
  }
  
  is_button_pressed(_name) {
    return _call_native_mb_ret(
      XRController3D._bindings.method_is_button_pressed,
      this._owner,
			Variant.Type.BOOL,
      _name
    );
    
  }
  get_input(_name) {
    return _call_native_mb_ret(
      XRController3D._bindings.method_get_input,
      this._owner,
			Variant.Type.VARIANT,
    
      _name
    );
    
  }
  get_float(_name) {
    return _call_native_mb_ret(
      XRController3D._bindings.method_get_float,
      this._owner,
			Variant.Type.FLOAT,
      _name
    );
    
  }
  get_vector2(_name) {
    return _call_native_mb_ret(
      XRController3D._bindings.method_get_vector2,
      this._owner,
			Variant.Type.VECTOR2,
    
      _name
    );
    
  }
  get_tracker_hand() {
    return _call_native_mb_ret(
      XRController3D._bindings.method_get_tracker_hand,
      this._owner,
			Variant.INT,
      
    );
    
  }
  


  static {
    this._init_bindings();
  }
}