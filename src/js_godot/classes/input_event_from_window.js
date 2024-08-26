import * as internal from '__internal__';
import { InputEvent } from 'src/js_godot/classesinput_event'
class _MethodBindings {
    method_set_window_id;
    method_get_window_id;
}


export class InputEventFromWindow extends InputEvent{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("InputEventFromWindow");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("InputEventFromWindow");
      let methodname = new StringName("set_window_id");
      this._bindings.method_set_window_id = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("InputEventFromWindow");
      let methodname = new StringName("get_window_id");
      this._bindings.method_get_window_id = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
  }
  set_window_id(_id) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_window_id,
      this._owner,
      _id
    );
  }
  get_window_id() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_window_id,
      this._owner,
			Variant.Type.INT,
      
    );
  }
}