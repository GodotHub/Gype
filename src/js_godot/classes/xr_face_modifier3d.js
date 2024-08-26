import * as internal from '__internal__';
import { NodePath } from 'src/js_godot/variant/node_path'
import { Node3D } from 'src/js_godot/classesnode3d'
import { StringName } from 'src/js_godot/variant/string_name'
class _MethodBindings {
    method_set_face_tracker;
    method_get_face_tracker;
    method_set_target;
    method_get_target;
}


export class XRFaceModifier3D extends Node3D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("XRFaceModifier3D");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
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
      ClassDB._bindings.method_set_face_tracker,
      this._owner,
      _tracker_name
    );
  }
  get_face_tracker() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_face_tracker,
      this._owner,
			Variant.Type.STRING_NAME
    ,
      
    );
  }
  set_target(_target) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_target,
      this._owner,
      _target
    );
  }
  get_target() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_target,
      this._owner,
			Variant.Type.NODE_PATH
    ,
      
    );
  }
}