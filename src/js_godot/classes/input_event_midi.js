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
    method_set_channel;
    method_get_channel;
    method_set_message;
    method_get_message;
    method_set_pitch;
    method_get_pitch;
    method_set_velocity;
    method_get_velocity;
    method_set_instrument;
    method_get_instrument;
    method_set_pressure;
    method_get_pressure;
    method_set_controller_number;
    method_get_controller_number;
    method_set_controller_value;
    method_get_controller_value;
}


export class InputEventMIDI extends InputEvent{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("InputEventMIDI");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("InputEventMIDI");
        let methodname = new StringName("set_channel");
        this._bindings.method_set_channel = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("InputEventMIDI");
        let methodname = new StringName("get_channel");
        this._bindings.method_get_channel = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("InputEventMIDI");
        let methodname = new StringName("set_message");
        this._bindings.method_set_message = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1064271510
        );
      }
      {
        let classname = new StringName("InputEventMIDI");
        let methodname = new StringName("get_message");
        this._bindings.method_get_message = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1936512097
        );
      }
      {
        let classname = new StringName("InputEventMIDI");
        let methodname = new StringName("set_pitch");
        this._bindings.method_set_pitch = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("InputEventMIDI");
        let methodname = new StringName("get_pitch");
        this._bindings.method_get_pitch = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("InputEventMIDI");
        let methodname = new StringName("set_velocity");
        this._bindings.method_set_velocity = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("InputEventMIDI");
        let methodname = new StringName("get_velocity");
        this._bindings.method_get_velocity = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("InputEventMIDI");
        let methodname = new StringName("set_instrument");
        this._bindings.method_set_instrument = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("InputEventMIDI");
        let methodname = new StringName("get_instrument");
        this._bindings.method_get_instrument = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("InputEventMIDI");
        let methodname = new StringName("set_pressure");
        this._bindings.method_set_pressure = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("InputEventMIDI");
        let methodname = new StringName("get_pressure");
        this._bindings.method_get_pressure = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("InputEventMIDI");
        let methodname = new StringName("set_controller_number");
        this._bindings.method_set_controller_number = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("InputEventMIDI");
        let methodname = new StringName("get_controller_number");
        this._bindings.method_get_controller_number = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("InputEventMIDI");
        let methodname = new StringName("set_controller_value");
        this._bindings.method_set_controller_value = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("InputEventMIDI");
        let methodname = new StringName("get_controller_value");
        this._bindings.method_get_controller_value = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
  }
  set_channel(_channel) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_channel,
      this._owner,
      _channel
    );
    
  }
  get_channel() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_channel,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_message(_message) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_message,
      this._owner,
      _message
    );
    
  }
  get_message() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_message,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_pitch(_pitch) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_pitch,
      this._owner,
      _pitch
    );
    
  }
  get_pitch() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_pitch,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_velocity(_velocity) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_velocity,
      this._owner,
      _velocity
    );
    
  }
  get_velocity() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_velocity,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_instrument(_instrument) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_instrument,
      this._owner,
      _instrument
    );
    
  }
  get_instrument() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_instrument,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_pressure(_pressure) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_pressure,
      this._owner,
      _pressure
    );
    
  }
  get_pressure() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_pressure,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_controller_number(_controller_number) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_controller_number,
      this._owner,
      _controller_number
    );
    
  }
  get_controller_number() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_controller_number,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_controller_value(_controller_value) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_controller_value,
      this._owner,
      _controller_value
    );
    
  }
  get_controller_value() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_controller_value,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
}