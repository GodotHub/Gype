import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import { SkeletonModifier3D } from '@js_godot/classes/skeleton_modifier3d'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_hand_tracker;
  method_get_hand_tracker;
  method_set_bone_update;
  method_get_bone_update;
}
export class XRHandModifier3D extends SkeletonModifier3D{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("XRHandModifier3D");
    } else {
      super(godot_object);
    }
  }
  
  static async _init_bindings() {
    if (this.#initialized) {
      return;
    }
    this.#initialized = true;
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
			Variant.Type.STRING_NAME,
    
      
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
  
get hand_tracker () {
  return this.get_hand_tracker();
}
set hand_tracker (new_value) {
  this.set_hand_tracker(new_value);
}
get bone_update () {
  return this.get_bone_update();
}
set bone_update (new_value) {
  this.set_bone_update(new_value);
}

  static BoneUpdate = {
    BONE_UPDATE_FULL: 0,
    BONE_UPDATE_ROTATION_ONLY: 1,
    BONE_UPDATE_MAX: 2,
  }

  static {
    this._init_bindings();
  }
}