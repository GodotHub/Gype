import * as internal from '__internal__';
import { InputEvent } from 'src/js_godot/classesinput_event'
class _MethodBindings {
    method_set_axis;
    method_get_axis;
    method_set_axis_value;
    method_get_axis_value;
}


export class InputEventJoypadMotion extends InputEvent{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("InputEventJoypadMotion");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("InputEventJoypadMotion");
      let methodname = new StringName("set_axis");
      this._bindings.method_set_axis = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1332685170
      );
    }
    {
      let classname = new StringName("InputEventJoypadMotion");
      let methodname = new StringName("get_axis");
      this._bindings.method_get_axis = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4019121683
      );
    }
    {
      let classname = new StringName("InputEventJoypadMotion");
      let methodname = new StringName("set_axis_value");
      this._bindings.method_set_axis_value = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("InputEventJoypadMotion");
      let methodname = new StringName("get_axis_value");
      this._bindings.method_get_axis_value = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
  }
  set_axis(_axis) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_axis,
      this._owner,
      _axis
    );
  }
  get_axis() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_axis,
      this._owner,
			Variant.INT,
      
    );
  }
  set_axis_value(_axis_value) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_axis_value,
      this._owner,
      _axis_value
    );
  }
  get_axis_value() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_axis_value,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
}