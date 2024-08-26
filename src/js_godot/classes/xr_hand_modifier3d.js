import * as internal from '__internal__';
import { SkeletonModifier3D } from 'src/js_godot/classesskeleton_modifier3d'
import { StringName } from 'src/js_godot/variant/string_name'
class _MethodBindings {
    method_set_hand_tracker;
    method_get_hand_tracker;
    method_set_bone_update;
    method_get_bone_update;
}


export class XRHandModifier3D extends SkeletonModifier3D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("XRHandModifier3D");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("XRHandModifier3D");
      let methodname = new StringName("set_hand_tracker");
      this._bindings.method_set_hand_tracker = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3304788590
      );
    }
    {
      let classname = new StringName("XRHandModifier3D");
      let methodname = new StringName("get_hand_tracker");
      this._bindings.method_get_hand_tracker = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2002593661
      );
    }
    {
      let classname = new StringName("XRHandModifier3D");
      let methodname = new StringName("set_bone_update");
      this._bindings.method_set_bone_update = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3635701455
      );
    }
    {
      let classname = new StringName("XRHandModifier3D");
      let methodname = new StringName("get_bone_update");
      this._bindings.method_get_bone_update = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2873665691
      );
    }
  }
  set_hand_tracker(_tracker_name) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_hand_tracker,
      this._owner,
      _tracker_name
    );
  }
  get_hand_tracker() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_hand_tracker,
      this._owner,
			Variant.Type.STRING_NAME
    ,
      
    );
  }
  set_bone_update(_bone_update) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_bone_update,
      this._owner,
      _bone_update
    );
  }
  get_bone_update() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_bone_update,
      this._owner,
			Variant.INT,
      
    );
  }
  static BoneUpdate = {
    BONE_UPDATE_FULL: 0,
    BONE_UPDATE_ROTATION_ONLY: 1,
    BONE_UPDATE_MAX: 2,
  }
}