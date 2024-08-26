import * as internal from '__internal__';
import { GodotObject } from 'src/js_godot/classesgodot_object'
import { GDString } from 'src/js_godot/variant/gd_string'
class _MethodBindings {
    method_wrap;
}

export const JavaClassWrapper = new _JavaClassWrapper();

class _JavaClassWrapper extends GodotObject{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("JavaClassWrapper");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("JavaClassWrapper");
      let methodname = new StringName("wrap");
      this._bindings.method_wrap = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1124367868
      );
    }
  }
  wrap(_name) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_wrap,
      this._owner,
			Variant.INT,
      _name
    );
  }
}