import * as internal from '__internal__';
import { Node3D } from 'src/js_godot/classesnode3d'
class _MethodBindings {
    method__process_modification;
    method_get_skeleton;
    method_set_active;
    method_is_active;
    method_set_influence;
    method_get_influence;
}


export class SkeletonModifier3D extends Node3D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("SkeletonModifier3D");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("SkeletonModifier3D");
      let methodname = new StringName("_process_modification");
      this._bindings.method__process_modification = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("SkeletonModifier3D");
      let methodname = new StringName("get_skeleton");
      this._bindings.method_get_skeleton = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1488626673
      );
    }
    {
      let classname = new StringName("SkeletonModifier3D");
      let methodname = new StringName("set_active");
      this._bindings.method_set_active = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("SkeletonModifier3D");
      let methodname = new StringName("is_active");
      this._bindings.method_is_active = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("SkeletonModifier3D");
      let methodname = new StringName("set_influence");
      this._bindings.method_set_influence = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("SkeletonModifier3D");
      let methodname = new StringName("get_influence");
      this._bindings.method_get_influence = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
  }
  _process_modification() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__process_modification,
      this._owner,
      
    );
  }
  get_skeleton() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_skeleton,
      this._owner,
			Variant.INT,
      
    );
  }
  set_active(_active) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_active,
      this._owner,
      _active
    );
  }
  is_active() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_active,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_influence(_influence) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_influence,
      this._owner,
      _influence
    );
  }
  get_influence() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_influence,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
}