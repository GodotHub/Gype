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
  method_resource_changed;
  method_set_shape;
  method_get_shape;
  method_set_disabled;
  method_is_disabled;
  method_make_convex_from_siblings;
}
@GodotClass
export class CollisionShape3D extends Node3D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("CollisionShape3D");
    } else {
      super(godot_object);
    }
  }
  static init_method_resource_changed() {
    if (!this._bindings.method_resource_changed) {
      let classname = new StringName("CollisionShape3D");
      let methodname = new StringName("resource_changed");
      this._bindings.method_resource_changed = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        968641751
      );
    }
  }
  static init_method_set_shape() {
    if (!this._bindings.method_set_shape) {
      let classname = new StringName("CollisionShape3D");
      let methodname = new StringName("set_shape");
      this._bindings.method_set_shape = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1549710052
      );
    }
  }
  static init_method_get_shape() {
    if (!this._bindings.method_get_shape) {
      let classname = new StringName("CollisionShape3D");
      let methodname = new StringName("get_shape");
      this._bindings.method_get_shape = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3214262478
      );
    }
  }
  static init_method_set_disabled() {
    if (!this._bindings.method_set_disabled) {
      let classname = new StringName("CollisionShape3D");
      let methodname = new StringName("set_disabled");
      this._bindings.method_set_disabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_disabled() {
    if (!this._bindings.method_is_disabled) {
      let classname = new StringName("CollisionShape3D");
      let methodname = new StringName("is_disabled");
      this._bindings.method_is_disabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_make_convex_from_siblings() {
    if (!this._bindings.method_make_convex_from_siblings) {
      let classname = new StringName("CollisionShape3D");
      let methodname = new StringName("make_convex_from_siblings");
      this._bindings.method_make_convex_from_siblings = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }

  
  
  resource_changed(_resource) {
    CollisionShape3D.init_method_resource_changed();
    return _call_native_mb_no_ret(
      CollisionShape3D._bindings.method_resource_changed,
      this._owner,
      _resource
    );
    
  }
  set_shape(_shape) {
    CollisionShape3D.init_method_set_shape();
    return _call_native_mb_no_ret(
      CollisionShape3D._bindings.method_set_shape,
      this._owner,
      _shape
    );
    
  }
  get_shape() {
    CollisionShape3D.init_method_get_shape();
    return _call_native_mb_ret(
      CollisionShape3D._bindings.method_get_shape,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_disabled(_enable) {
    CollisionShape3D.init_method_set_disabled();
    return _call_native_mb_no_ret(
      CollisionShape3D._bindings.method_set_disabled,
      this._owner,
      _enable
    );
    
  }
  is_disabled() {
    CollisionShape3D.init_method_is_disabled();
    return _call_native_mb_ret(
      CollisionShape3D._bindings.method_is_disabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  make_convex_from_siblings() {
    CollisionShape3D.init_method_make_convex_from_siblings();
    return _call_native_mb_no_ret(
      CollisionShape3D._bindings.method_make_convex_from_siblings,
      this._owner,
      
    );
    
  }
  
get shape () {
  return this.get_shape();
}
set shape (new_value) {
  this.set_shape(new_value);
}
get disabled () {
  return this.is_disabled();
}
set disabled (new_value) {
  this.set_disabled(new_value);
}

}