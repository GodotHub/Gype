import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { SkeletonModifier3D } from '@js_godot/classes/skeleton_modifier3d'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_body_tracker;
  method_get_body_tracker;
  method_set_body_update;
  method_get_body_update;
  method_set_bone_update;
  method_get_bone_update;
}
export class XRBodyModifier3D extends SkeletonModifier3D{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("XRBodyModifier3D");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_body_tracker() {
    if (!this.#_bindings.method_set_body_tracker) {
      let classname = new StringName("XRBodyModifier3D");
      let methodname = new StringName("set_body_tracker");
      this.#_bindings.method_set_body_tracker = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3304788590
      );
    }
  }
  static init_method_get_body_tracker() {
    if (!this.#_bindings.method_get_body_tracker) {
      let classname = new StringName("XRBodyModifier3D");
      let methodname = new StringName("get_body_tracker");
      this.#_bindings.method_get_body_tracker = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2002593661
      );
    }
  }
  static init_method_set_body_update() {
    if (!this.#_bindings.method_set_body_update) {
      let classname = new StringName("XRBodyModifier3D");
      let methodname = new StringName("set_body_update");
      this.#_bindings.method_set_body_update = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2211199417
      );
    }
  }
  static init_method_get_body_update() {
    if (!this.#_bindings.method_get_body_update) {
      let classname = new StringName("XRBodyModifier3D");
      let methodname = new StringName("get_body_update");
      this.#_bindings.method_get_body_update = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2642335328
      );
    }
  }
  static init_method_set_bone_update() {
    if (!this.#_bindings.method_set_bone_update) {
      let classname = new StringName("XRBodyModifier3D");
      let methodname = new StringName("set_bone_update");
      this.#_bindings.method_set_bone_update = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3356796943
      );
    }
  }
  static init_method_get_bone_update() {
    if (!this.#_bindings.method_get_bone_update) {
      let classname = new StringName("XRBodyModifier3D");
      let methodname = new StringName("get_bone_update");
      this.#_bindings.method_get_bone_update = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1309305964
      );
    }
  }

  
  
  set_body_tracker(_tracker_name) {
    XRBodyModifier3D.init_method_set_body_tracker();
    return _call_native_mb_no_ret(
      XRBodyModifier3D.#_bindings.method_set_body_tracker,
      this._owner,
      _tracker_name
    );
    
  }
  get_body_tracker() {
    XRBodyModifier3D.init_method_get_body_tracker();
    return _call_native_mb_ret(
      XRBodyModifier3D.#_bindings.method_get_body_tracker,
      this._owner,
			Variant.Type.STRING_NAME,
    
      
    );
    
  }
  set_body_update(_body_update) {
    XRBodyModifier3D.init_method_set_body_update();
    return _call_native_mb_no_ret(
      XRBodyModifier3D.#_bindings.method_set_body_update,
      this._owner,
      _body_update
    );
    
  }
  get_body_update() {
    XRBodyModifier3D.init_method_get_body_update();
    return _call_native_mb_ret(
      XRBodyModifier3D.#_bindings.method_get_body_update,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_bone_update(_bone_update) {
    XRBodyModifier3D.init_method_set_bone_update();
    return _call_native_mb_no_ret(
      XRBodyModifier3D.#_bindings.method_set_bone_update,
      this._owner,
      _bone_update
    );
    
  }
  get_bone_update() {
    XRBodyModifier3D.init_method_get_bone_update();
    return _call_native_mb_ret(
      XRBodyModifier3D.#_bindings.method_get_bone_update,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  
get body_tracker () {
  return this.get_body_tracker();
}
set body_tracker (new_value) {
  this.set_body_tracker(new_value);
}
get body_update () {
  return this.get_body_update();
}
set body_update (new_value) {
  this.set_body_update(new_value);
}
get bone_update () {
  return this.get_bone_update();
}
set bone_update (new_value) {
  this.set_bone_update(new_value);
}

  static BodyUpdate = {
    BODY_UPDATE_UPPER_BODY: 1,
    BODY_UPDATE_LOWER_BODY: 2,
    BODY_UPDATE_HANDS: 4,
  }
  static BoneUpdate = {
    BONE_UPDATE_FULL: 0,
    BONE_UPDATE_ROTATION_ONLY: 1,
    BONE_UPDATE_MAX: 2,
  }
}