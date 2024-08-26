import * as internal from '__internal__';
import { Range } from 'src/js_godot/classesrange'
class _MethodBindings {
    method_set_custom_step;
    method_get_custom_step;
}


export class ScrollBar extends Range{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("ScrollBar");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("ScrollBar");
      let methodname = new StringName("set_custom_step");
      this._bindings.method_set_custom_step = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("ScrollBar");
      let methodname = new StringName("get_custom_step");
      this._bindings.method_get_custom_step = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
  }
  set_custom_step(_step) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_custom_step,
      this._owner,
      _step
    );
  }
  get_custom_step() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_custom_step,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
}