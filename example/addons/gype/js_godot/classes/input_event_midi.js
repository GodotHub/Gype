import * as internal from '__internal__';
import { InputEvent } from '@js_godot/classes/input_event'
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

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
@GodotClass
export class InputEventMIDI extends InputEvent{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("InputEventMIDI");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_channel() {
    if (!this._bindings.method_set_channel) {
      let classname = new StringName("InputEventMIDI");
      let methodname = new StringName("set_channel");
      this._bindings.method_set_channel = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_channel() {
    if (!this._bindings.method_get_channel) {
      let classname = new StringName("InputEventMIDI");
      let methodname = new StringName("get_channel");
      this._bindings.method_get_channel = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_message() {
    if (!this._bindings.method_set_message) {
      let classname = new StringName("InputEventMIDI");
      let methodname = new StringName("set_message");
      this._bindings.method_set_message = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1064271510
      );
    }
  }
  static init_method_get_message() {
    if (!this._bindings.method_get_message) {
      let classname = new StringName("InputEventMIDI");
      let methodname = new StringName("get_message");
      this._bindings.method_get_message = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1936512097
      );
    }
  }
  static init_method_set_pitch() {
    if (!this._bindings.method_set_pitch) {
      let classname = new StringName("InputEventMIDI");
      let methodname = new StringName("set_pitch");
      this._bindings.method_set_pitch = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_pitch() {
    if (!this._bindings.method_get_pitch) {
      let classname = new StringName("InputEventMIDI");
      let methodname = new StringName("get_pitch");
      this._bindings.method_get_pitch = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_velocity() {
    if (!this._bindings.method_set_velocity) {
      let classname = new StringName("InputEventMIDI");
      let methodname = new StringName("set_velocity");
      this._bindings.method_set_velocity = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_velocity() {
    if (!this._bindings.method_get_velocity) {
      let classname = new StringName("InputEventMIDI");
      let methodname = new StringName("get_velocity");
      this._bindings.method_get_velocity = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_instrument() {
    if (!this._bindings.method_set_instrument) {
      let classname = new StringName("InputEventMIDI");
      let methodname = new StringName("set_instrument");
      this._bindings.method_set_instrument = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_instrument() {
    if (!this._bindings.method_get_instrument) {
      let classname = new StringName("InputEventMIDI");
      let methodname = new StringName("get_instrument");
      this._bindings.method_get_instrument = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_pressure() {
    if (!this._bindings.method_set_pressure) {
      let classname = new StringName("InputEventMIDI");
      let methodname = new StringName("set_pressure");
      this._bindings.method_set_pressure = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_pressure() {
    if (!this._bindings.method_get_pressure) {
      let classname = new StringName("InputEventMIDI");
      let methodname = new StringName("get_pressure");
      this._bindings.method_get_pressure = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_controller_number() {
    if (!this._bindings.method_set_controller_number) {
      let classname = new StringName("InputEventMIDI");
      let methodname = new StringName("set_controller_number");
      this._bindings.method_set_controller_number = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_controller_number() {
    if (!this._bindings.method_get_controller_number) {
      let classname = new StringName("InputEventMIDI");
      let methodname = new StringName("get_controller_number");
      this._bindings.method_get_controller_number = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_controller_value() {
    if (!this._bindings.method_set_controller_value) {
      let classname = new StringName("InputEventMIDI");
      let methodname = new StringName("set_controller_value");
      this._bindings.method_set_controller_value = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_controller_value() {
    if (!this._bindings.method_get_controller_value) {
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
    InputEventMIDI.init_method_set_channel();
    return _call_native_mb_no_ret(
      InputEventMIDI._bindings.method_set_channel,
      this._owner,
      _channel
    );
    
  }
  get_channel() {
    InputEventMIDI.init_method_get_channel();
    return _call_native_mb_ret(
      InputEventMIDI._bindings.method_get_channel,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_message(_message) {
    InputEventMIDI.init_method_set_message();
    return _call_native_mb_no_ret(
      InputEventMIDI._bindings.method_set_message,
      this._owner,
      _message
    );
    
  }
  get_message() {
    InputEventMIDI.init_method_get_message();
    return _call_native_mb_ret(
      InputEventMIDI._bindings.method_get_message,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_pitch(_pitch) {
    InputEventMIDI.init_method_set_pitch();
    return _call_native_mb_no_ret(
      InputEventMIDI._bindings.method_set_pitch,
      this._owner,
      _pitch
    );
    
  }
  get_pitch() {
    InputEventMIDI.init_method_get_pitch();
    return _call_native_mb_ret(
      InputEventMIDI._bindings.method_get_pitch,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_velocity(_velocity) {
    InputEventMIDI.init_method_set_velocity();
    return _call_native_mb_no_ret(
      InputEventMIDI._bindings.method_set_velocity,
      this._owner,
      _velocity
    );
    
  }
  get_velocity() {
    InputEventMIDI.init_method_get_velocity();
    return _call_native_mb_ret(
      InputEventMIDI._bindings.method_get_velocity,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_instrument(_instrument) {
    InputEventMIDI.init_method_set_instrument();
    return _call_native_mb_no_ret(
      InputEventMIDI._bindings.method_set_instrument,
      this._owner,
      _instrument
    );
    
  }
  get_instrument() {
    InputEventMIDI.init_method_get_instrument();
    return _call_native_mb_ret(
      InputEventMIDI._bindings.method_get_instrument,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_pressure(_pressure) {
    InputEventMIDI.init_method_set_pressure();
    return _call_native_mb_no_ret(
      InputEventMIDI._bindings.method_set_pressure,
      this._owner,
      _pressure
    );
    
  }
  get_pressure() {
    InputEventMIDI.init_method_get_pressure();
    return _call_native_mb_ret(
      InputEventMIDI._bindings.method_get_pressure,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_controller_number(_controller_number) {
    InputEventMIDI.init_method_set_controller_number();
    return _call_native_mb_no_ret(
      InputEventMIDI._bindings.method_set_controller_number,
      this._owner,
      _controller_number
    );
    
  }
  get_controller_number() {
    InputEventMIDI.init_method_get_controller_number();
    return _call_native_mb_ret(
      InputEventMIDI._bindings.method_get_controller_number,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_controller_value(_controller_value) {
    InputEventMIDI.init_method_set_controller_value();
    return _call_native_mb_no_ret(
      InputEventMIDI._bindings.method_set_controller_value,
      this._owner,
      _controller_value
    );
    
  }
  get_controller_value() {
    InputEventMIDI.init_method_get_controller_value();
    return _call_native_mb_ret(
      InputEventMIDI._bindings.method_get_controller_value,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  
get channel () {
  return this.get_channel();
}
set channel (new_value) {
  this.set_channel(new_value);
}
get message () {
  return this.get_message();
}
set message (new_value) {
  this.set_message(new_value);
}
get pitch () {
  return this.get_pitch();
}
set pitch (new_value) {
  this.set_pitch(new_value);
}
get velocity () {
  return this.get_velocity();
}
set velocity (new_value) {
  this.set_velocity(new_value);
}
get instrument () {
  return this.get_instrument();
}
set instrument (new_value) {
  this.set_instrument(new_value);
}
get pressure () {
  return this.get_pressure();
}
set pressure (new_value) {
  this.set_pressure(new_value);
}
get controller_number () {
  return this.get_controller_number();
}
set controller_number (new_value) {
  this.set_controller_number(new_value);
}
get controller_value () {
  return this.get_controller_value();
}
set controller_value (new_value) {
  this.set_controller_value(new_value);
}

}