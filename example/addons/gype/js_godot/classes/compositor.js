import * as internal from '__internal__';
import { GDArray } from '@js_godot/variant/gd_array'
import { StringName } from '@js_godot/variant/string_name'
import { Resource } from '@js_godot/classes/resource'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
  method_set_compositor_effects;
  method_get_compositor_effects;
}
@GodotClass
export class Compositor extends Resource{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("Compositor");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_compositor_effects() {
    if (!this._bindings.method_set_compositor_effects) {
      let classname = new StringName("Compositor");
      let methodname = new StringName("set_compositor_effects");
      this._bindings.method_set_compositor_effects = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        381264803
      );
    }
  }
  static init_method_get_compositor_effects() {
    if (!this._bindings.method_get_compositor_effects) {
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
    Compositor.init_method_set_compositor_effects();
    return _call_native_mb_no_ret(
      Compositor._bindings.method_set_compositor_effects,
      this._owner,
      _compositor_effects
    );
    
  }
  get_compositor_effects() {
    Compositor.init_method_get_compositor_effects();
    return _call_native_mb_ret(
      Compositor._bindings.method_get_compositor_effects,
      this._owner,
			Variant.Type.ARRAY,
      
    );
    
  }
  
get compositor_effects () {
  return this.get_compositor_effects();
}
set compositor_effects (new_value) {
  this.set_compositor_effects(new_value);
}

}