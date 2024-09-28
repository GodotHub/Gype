import * as internal from '__internal__';
import { VisualInstance3D } from '@js_godot/classes/visual_instance3d'
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
  method_set_aabb;
  method_is_on_screen;
}
@GodotClass
export class VisibleOnScreenNotifier3D extends VisualInstance3D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("VisibleOnScreenNotifier3D");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_aabb() {
    if (!this._bindings.method_set_aabb) {
      let classname = new StringName("VisibleOnScreenNotifier3D");
      let methodname = new StringName("set_aabb");
      this._bindings.method_set_aabb = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        259215842
      );
    }
  }
  static init_method_is_on_screen() {
    if (!this._bindings.method_is_on_screen) {
      let classname = new StringName("VisibleOnScreenNotifier3D");
      let methodname = new StringName("is_on_screen");
      this._bindings.method_is_on_screen = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }

  
  
  set_aabb(_rect) {
    VisibleOnScreenNotifier3D.init_method_set_aabb();
    return _call_native_mb_no_ret(
      VisibleOnScreenNotifier3D._bindings.method_set_aabb,
      this._owner,
      _rect
    );
    
  }
  is_on_screen() {
    VisibleOnScreenNotifier3D.init_method_is_on_screen();
    return _call_native_mb_ret(
      VisibleOnScreenNotifier3D._bindings.method_is_on_screen,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  
get aabb () {
  return this.get_aabb();
}
set aabb (new_value) {
  this.set_aabb(new_value);
}

}