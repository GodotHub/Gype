import * as internal from '__internal__';
import { NodePath } from '@js_godot/variant/node_path'
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { Node3D } from '@js_godot/classes/node3d'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_face_tracker;
  method_get_face_tracker;
  method_set_target;
  method_get_target;
}
export class XRFaceModifier3D extends Node3D{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("XRFaceModifier3D");
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
      let classname = new StringName("XRFaceModifier3D");
      let methodname = new StringName("set_face_tracker");
      this._bindings.method_set_face_tracker = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3304788590
      );
    }
    {
      let classname = new StringName("XRFaceModifier3D");
      let methodname = new StringName("get_face_tracker");
      this._bindings.method_get_face_tracker = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2002593661
      );
    }
    {
      let classname = new StringName("XRFaceModifier3D");
      let methodname = new StringName("set_target");
      this._bindings.method_set_target = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1348162250
      );
    }
    {
      let classname = new StringName("XRFaceModifier3D");
      let methodname = new StringName("get_target");
      this._bindings.method_get_target = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4075236667
      );
    }
  }
  
  set_face_tracker(_tracker_name) {
    return _call_native_mb_no_ret(
      XRFaceModifier3D._bindings.method_set_face_tracker,
      this._owner,
      _tracker_name
    );
    
  }
  get_face_tracker() {
    return _call_native_mb_ret(
      XRFaceModifier3D._bindings.method_get_face_tracker,
      this._owner,
			Variant.Type.STRING_NAME,
    
      
    );
    
  }
  set_target(_target) {
    return _call_native_mb_no_ret(
      XRFaceModifier3D._bindings.method_set_target,
      this._owner,
      _target
    );
    
  }
  get_target() {
    return _call_native_mb_ret(
      XRFaceModifier3D._bindings.method_get_target,
      this._owner,
			Variant.Type.NODE_PATH,
    
      
    );
    
  }
  
get face_tracker () {
  return this.get_face_tracker();
}
set face_tracker (new_value) {
  this.set_face_tracker(new_value);
}
get target () {
  return this.get_target();
}
set target (new_value) {
  this.set_target(new_value);
}


  static {
    this._init_bindings();
  }
}