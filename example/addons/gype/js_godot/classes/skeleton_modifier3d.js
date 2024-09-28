import * as internal from '__internal__';
import { Node3D } from '@js_godot/classes/node3d'
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
  method_get_skeleton;
  method_set_active;
  method_is_active;
  method_set_influence;
  method_get_influence;
}
@GodotClass
export class SkeletonModifier3D extends Node3D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("SkeletonModifier3D");
    } else {
      super(godot_object);
    }
  }
  static init_method_get_skeleton() {
    if (!this._bindings.method_get_skeleton) {
      let classname = new StringName("SkeletonModifier3D");
      let methodname = new StringName("get_skeleton");
      this._bindings.method_get_skeleton = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1488626673
      );
    }
  }
  static init_method_set_active() {
    if (!this._bindings.method_set_active) {
      let classname = new StringName("SkeletonModifier3D");
      let methodname = new StringName("set_active");
      this._bindings.method_set_active = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_active() {
    if (!this._bindings.method_is_active) {
      let classname = new StringName("SkeletonModifier3D");
      let methodname = new StringName("is_active");
      this._bindings.method_is_active = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_influence() {
    if (!this._bindings.method_set_influence) {
      let classname = new StringName("SkeletonModifier3D");
      let methodname = new StringName("set_influence");
      this._bindings.method_set_influence = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_influence() {
    if (!this._bindings.method_get_influence) {
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
  }
  get_skeleton() {
    SkeletonModifier3D.init_method_get_skeleton();
    return _call_native_mb_ret(
      SkeletonModifier3D._bindings.method_get_skeleton,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_active(_active) {
    SkeletonModifier3D.init_method_set_active();
    return _call_native_mb_no_ret(
      SkeletonModifier3D._bindings.method_set_active,
      this._owner,
      _active
    );
    
  }
  is_active() {
    SkeletonModifier3D.init_method_is_active();
    return _call_native_mb_ret(
      SkeletonModifier3D._bindings.method_is_active,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_influence(_influence) {
    SkeletonModifier3D.init_method_set_influence();
    return _call_native_mb_no_ret(
      SkeletonModifier3D._bindings.method_set_influence,
      this._owner,
      _influence
    );
    
  }
  get_influence() {
    SkeletonModifier3D.init_method_get_influence();
    return _call_native_mb_ret(
      SkeletonModifier3D._bindings.method_get_influence,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  
get active () {
  return this.is_active();
}
set active (new_value) {
  this.set_active(new_value);
}
get influence () {
  return this.get_influence();
}
set influence (new_value) {
  this.set_influence(new_value);
}

}