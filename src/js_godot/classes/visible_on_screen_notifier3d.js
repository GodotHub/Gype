import * as internal from '__internal__';
import { VisualInstance3D } from 'src/js_godot/classesvisual_instance3d'
import { AABB } from 'src/js_godot/variant/aabb'
class _MethodBindings {
    method_set_aabb;
    method_is_on_screen;
}


export class VisibleOnScreenNotifier3D extends VisualInstance3D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("VisibleOnScreenNotifier3D");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("VisibleOnScreenNotifier3D");
      let methodname = new StringName("set_aabb");
      this._bindings.method_set_aabb = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        259215842
      );
    }
    {
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
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_aabb,
      this._owner,
      _rect
    );
  }
  is_on_screen() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_on_screen,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
}