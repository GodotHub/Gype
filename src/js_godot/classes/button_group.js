import * as internal from '__internal__';
import { Resource } from 'src/js_godot/classes/resource'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_get_pressed_button;
    method_get_buttons;
    method_set_allow_unpress;
    method_is_allow_unpress;
}


export class ButtonGroup extends Resource{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("ButtonGroup");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("ButtonGroup");
        let methodname = new StringName("get_pressed_button");
        this._bindings.method_get_pressed_button = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3886434893
        );
      }
      {
        let classname = new StringName("ButtonGroup");
        let methodname = new StringName("get_buttons");
        this._bindings.method_get_buttons = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2915620761
        );
      }
      {
        let classname = new StringName("ButtonGroup");
        let methodname = new StringName("set_allow_unpress");
        this._bindings.method_set_allow_unpress = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("ButtonGroup");
        let methodname = new StringName("is_allow_unpress");
        this._bindings.method_is_allow_unpress = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2240911060
        );
      }
  }
  get_pressed_button() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_pressed_button,
      this._owner,
			Variant.INT,
      
    );
    
  }
  get_buttons() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_buttons,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_allow_unpress(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_allow_unpress,
      this._owner,
      _enabled
    );
    
  }
  is_allow_unpress() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_allow_unpress,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
}