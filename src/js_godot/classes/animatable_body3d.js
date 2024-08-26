import * as internal from '__internal__';
import { StaticBody3D } from 'src/js_godot/classesstatic_body3d'
class _MethodBindings {
    method_set_sync_to_physics;
    method_is_sync_to_physics_enabled;
}


export class AnimatableBody3D extends StaticBody3D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("AnimatableBody3D");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("AnimatableBody3D");
      let methodname = new StringName("set_sync_to_physics");
      this._bindings.method_set_sync_to_physics = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("AnimatableBody3D");
      let methodname = new StringName("is_sync_to_physics_enabled");
      this._bindings.method_is_sync_to_physics_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
  }
  set_sync_to_physics(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_sync_to_physics,
      this._owner,
      _enable
    );
  }
  is_sync_to_physics_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_sync_to_physics_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
}