import * as internal from '__internal__';
import { Light3D } from 'src/js_godot/classeslight3d'
class _MethodBindings {
    method_set_shadow_mode;
    method_get_shadow_mode;
}


export class OmniLight3D extends Light3D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("OmniLight3D");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("OmniLight3D");
      let methodname = new StringName("set_shadow_mode");
      this._bindings.method_set_shadow_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        121862228
      );
    }
    {
      let classname = new StringName("OmniLight3D");
      let methodname = new StringName("get_shadow_mode");
      this._bindings.method_get_shadow_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4181586331
      );
    }
  }
  set_shadow_mode(_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_shadow_mode,
      this._owner,
      _mode
    );
  }
  get_shadow_mode() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_shadow_mode,
      this._owner,
			Variant.INT,
      
    );
  }
  static ShadowMode = {
    SHADOW_DUAL_PARABOLOID: 0,
    SHADOW_CUBE: 1,
  }
}