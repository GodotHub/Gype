import * as internal from '__internal__';
import { InputEventWithModifiers } from 'src/js_godot/classesinput_event_with_modifiers'
import { Vector2 } from 'src/js_godot/variant/vector2'
class _MethodBindings {
    method_set_button_mask;
    method_get_button_mask;
    method_set_position;
    method_get_position;
    method_set_global_position;
    method_get_global_position;
}


export class InputEventMouse extends InputEventWithModifiers{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("InputEventMouse");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("InputEventMouse");
      let methodname = new StringName("set_button_mask");
      this._bindings.method_set_button_mask = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3950145251
      );
    }
    {
      let classname = new StringName("InputEventMouse");
      let methodname = new StringName("get_button_mask");
      this._bindings.method_get_button_mask = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2512161324
      );
    }
    {
      let classname = new StringName("InputEventMouse");
      let methodname = new StringName("set_position");
      this._bindings.method_set_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        743155724
      );
    }
    {
      let classname = new StringName("InputEventMouse");
      let methodname = new StringName("get_position");
      this._bindings.method_get_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3341600327
      );
    }
    {
      let classname = new StringName("InputEventMouse");
      let methodname = new StringName("set_global_position");
      this._bindings.method_set_global_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        743155724
      );
    }
    {
      let classname = new StringName("InputEventMouse");
      let methodname = new StringName("get_global_position");
      this._bindings.method_get_global_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3341600327
      );
    }
  }
  set_button_mask(_button_mask) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_button_mask,
      this._owner,
      _button_mask
    );
  }
  get_button_mask() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_button_mask,
      this._owner,
			Variant.INT,
      
    );
  }
  set_position(_position) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_position,
      this._owner,
      _position
    );
  }
  get_position() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_position,
      this._owner,
			Variant.Type.VECTOR2
    ,
      
    );
  }
  set_global_position(_global_position) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_global_position,
      this._owner,
      _global_position
    );
  }
  get_global_position() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_global_position,
      this._owner,
			Variant.Type.VECTOR2
    ,
      
    );
  }
}