import * as internal from '__internal__';
import { Resource } from 'src/js_godot/classesresource'
class _MethodBindings {
    method_set_compositor_effects;
    method_get_compositor_effects;
}


export class Compositor extends Resource{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("Compositor");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("Compositor");
      let methodname = new StringName("set_compositor_effects");
      this._bindings.method_set_compositor_effects = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        381264803
      );
    }
    {
      let classname = new StringName("Compositor");
      let methodname = new StringName("get_compositor_effects");
      this._bindings.method_get_compositor_effects = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3995934104
      );
    }
  }
  set_compositor_effects(_compositor_effects) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_compositor_effects,
      this._owner,
      _compositor_effects
    );
  }
  get_compositor_effects() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_compositor_effects,
      this._owner,
			Variant.INT,
      
    );
  }
}