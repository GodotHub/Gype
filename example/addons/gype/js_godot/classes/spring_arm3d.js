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
  method_get_hit_length;
  method_set_length;
  method_get_length;
  method_set_shape;
  method_get_shape;
  method_add_excluded_object;
  method_remove_excluded_object;
  method_clear_excluded_objects;
  method_set_collision_mask;
  method_get_collision_mask;
  method_set_margin;
  method_get_margin;
}
@GodotClass
export class SpringArm3D extends Node3D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("SpringArm3D");
    } else {
      super(godot_object);
    }
  }
  static init_method_get_hit_length() {
    if (!this._bindings.method_get_hit_length) {
      let classname = new StringName("SpringArm3D");
      let methodname = new StringName("get_hit_length");
      this._bindings.method_get_hit_length = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        191475506
      );
    }
  }
  static init_method_set_length() {
    if (!this._bindings.method_set_length) {
      let classname = new StringName("SpringArm3D");
      let methodname = new StringName("set_length");
      this._bindings.method_set_length = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_length() {
    if (!this._bindings.method_get_length) {
      let classname = new StringName("SpringArm3D");
      let methodname = new StringName("get_length");
      this._bindings.method_get_length = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_shape() {
    if (!this._bindings.method_set_shape) {
      let classname = new StringName("SpringArm3D");
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
      let classname = new StringName("SpringArm3D");
      let methodname = new StringName("get_shape");
      this._bindings.method_get_shape = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3214262478
      );
    }
  }
  static init_method_add_excluded_object() {
    if (!this._bindings.method_add_excluded_object) {
      let classname = new StringName("SpringArm3D");
      let methodname = new StringName("add_excluded_object");
      this._bindings.method_add_excluded_object = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2722037293
      );
    }
  }
  static init_method_remove_excluded_object() {
    if (!this._bindings.method_remove_excluded_object) {
      let classname = new StringName("SpringArm3D");
      let methodname = new StringName("remove_excluded_object");
      this._bindings.method_remove_excluded_object = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3521089500
      );
    }
  }
  static init_method_clear_excluded_objects() {
    if (!this._bindings.method_clear_excluded_objects) {
      let classname = new StringName("SpringArm3D");
      let methodname = new StringName("clear_excluded_objects");
      this._bindings.method_clear_excluded_objects = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_set_collision_mask() {
    if (!this._bindings.method_set_collision_mask) {
      let classname = new StringName("SpringArm3D");
      let methodname = new StringName("set_collision_mask");
      this._bindings.method_set_collision_mask = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_collision_mask() {
    if (!this._bindings.method_get_collision_mask) {
      let classname = new StringName("SpringArm3D");
      let methodname = new StringName("get_collision_mask");
      this._bindings.method_get_collision_mask = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2455072627
      );
    }
  }
  static init_method_set_margin() {
    if (!this._bindings.method_set_margin) {
      let classname = new StringName("SpringArm3D");
      let methodname = new StringName("set_margin");
      this._bindings.method_set_margin = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_margin() {
    if (!this._bindings.method_get_margin) {
      let classname = new StringName("SpringArm3D");
      let methodname = new StringName("get_margin");
      this._bindings.method_get_margin = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        191475506
      );
    }
  }

  
  
  get_hit_length() {
    SpringArm3D.init_method_get_hit_length();
    return _call_native_mb_ret(
      SpringArm3D._bindings.method_get_hit_length,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_length(_length) {
    SpringArm3D.init_method_set_length();
    return _call_native_mb_no_ret(
      SpringArm3D._bindings.method_set_length,
      this._owner,
      _length
    );
    
  }
  get_length() {
    SpringArm3D.init_method_get_length();
    return _call_native_mb_ret(
      SpringArm3D._bindings.method_get_length,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_shape(_shape) {
    SpringArm3D.init_method_set_shape();
    return _call_native_mb_no_ret(
      SpringArm3D._bindings.method_set_shape,
      this._owner,
      _shape
    );
    
  }
  get_shape() {
    SpringArm3D.init_method_get_shape();
    return _call_native_mb_ret(
      SpringArm3D._bindings.method_get_shape,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  add_excluded_object(_RID) {
    SpringArm3D.init_method_add_excluded_object();
    return _call_native_mb_no_ret(
      SpringArm3D._bindings.method_add_excluded_object,
      this._owner,
      _RID
    );
    
  }
  remove_excluded_object(_RID) {
    SpringArm3D.init_method_remove_excluded_object();
    return _call_native_mb_ret(
      SpringArm3D._bindings.method_remove_excluded_object,
      this._owner,
			Variant.Type.BOOL,
    
      _RID
    );
    
  }
  clear_excluded_objects() {
    SpringArm3D.init_method_clear_excluded_objects();
    return _call_native_mb_no_ret(
      SpringArm3D._bindings.method_clear_excluded_objects,
      this._owner,
      
    );
    
  }
  set_collision_mask(_mask) {
    SpringArm3D.init_method_set_collision_mask();
    return _call_native_mb_no_ret(
      SpringArm3D._bindings.method_set_collision_mask,
      this._owner,
      _mask
    );
    
  }
  get_collision_mask() {
    SpringArm3D.init_method_get_collision_mask();
    return _call_native_mb_ret(
      SpringArm3D._bindings.method_get_collision_mask,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_margin(_margin) {
    SpringArm3D.init_method_set_margin();
    return _call_native_mb_no_ret(
      SpringArm3D._bindings.method_set_margin,
      this._owner,
      _margin
    );
    
  }
  get_margin() {
    SpringArm3D.init_method_get_margin();
    return _call_native_mb_ret(
      SpringArm3D._bindings.method_get_margin,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  
get collision_mask () {
  return this.get_collision_mask();
}
set collision_mask (new_value) {
  this.set_collision_mask(new_value);
}
get shape () {
  return this.get_shape();
}
set shape (new_value) {
  this.set_shape(new_value);
}
get spring_length () {
  return this.get_length();
}
set spring_length (new_value) {
  this.set_length(new_value);
}
get margin () {
  return this.get_margin();
}
set margin (new_value) {
  this.set_margin(new_value);
}

}