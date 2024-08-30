import * as internal from '__internal__';
import { InputEvent } from 'src/js_godot/classes/input_event'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_set_action;
    method_get_action;
    method_set_pressed;
    method_set_strength;
    method_get_strength;
    method_set_event_index;
    method_get_event_index;
}


export class InputEventAction extends InputEvent{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("InputEventAction");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("InputEventAction");
        let methodname = new StringName("set_action");
        this._bindings.method_set_action = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3304788590
        );
      }
      {
        let classname = new StringName("InputEventAction");
        let methodname = new StringName("get_action");
        this._bindings.method_get_action = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2002593661
        );
      }
      {
        let classname = new StringName("InputEventAction");
        let methodname = new StringName("set_pressed");
        this._bindings.method_set_pressed = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("InputEventAction");
        let methodname = new StringName("set_strength");
        this._bindings.method_set_strength = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("InputEventAction");
        let methodname = new StringName("get_strength");
        this._bindings.method_get_strength = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("InputEventAction");
        let methodname = new StringName("set_event_index");
        this._bindings.method_set_event_index = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("InputEventAction");
        let methodname = new StringName("get_event_index");
        this._bindings.method_get_event_index = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
  }
  set_action(_action) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_action,
      this._owner,
      _action
    );
    
  }
  get_action() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_action,
      this._owner,
			Variant.Type.STRING_NAME
    ,
      
    );
    
  }
  set_pressed(_pressed) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_pressed,
      this._owner,
      _pressed
    );
    
  }
  set_strength(_strength) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_strength,
      this._owner,
      _strength
    );
    
  }
  get_strength() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_strength,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_event_index(_index) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_event_index,
      this._owner,
      _index
    );
    
  }
  get_event_index() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_event_index,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
}