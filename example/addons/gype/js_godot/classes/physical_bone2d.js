import * as internal from '__internal__';
import { RigidBody2D } from '@js_godot/classes/rigid_body2d'
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
  method_get_joint;
  method_get_auto_configure_joint;
  method_set_auto_configure_joint;
  method_set_simulate_physics;
  method_get_simulate_physics;
  method_is_simulating_physics;
  method_set_bone2d_nodepath;
  method_get_bone2d_nodepath;
  method_set_bone2d_index;
  method_get_bone2d_index;
  method_set_follow_bone_when_simulating;
  method_get_follow_bone_when_simulating;
}
@GodotClass
export class PhysicalBone2D extends RigidBody2D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("PhysicalBone2D");
    } else {
      super(godot_object);
    }
  }
  static init_method_get_joint() {
    if (!this._bindings.method_get_joint) {
      let classname = new StringName("PhysicalBone2D");
      let methodname = new StringName("get_joint");
      this._bindings.method_get_joint = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3582132112
      );
    }
  }
  static init_method_get_auto_configure_joint() {
    if (!this._bindings.method_get_auto_configure_joint) {
      let classname = new StringName("PhysicalBone2D");
      let methodname = new StringName("get_auto_configure_joint");
      this._bindings.method_get_auto_configure_joint = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_auto_configure_joint() {
    if (!this._bindings.method_set_auto_configure_joint) {
      let classname = new StringName("PhysicalBone2D");
      let methodname = new StringName("set_auto_configure_joint");
      this._bindings.method_set_auto_configure_joint = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_set_simulate_physics() {
    if (!this._bindings.method_set_simulate_physics) {
      let classname = new StringName("PhysicalBone2D");
      let methodname = new StringName("set_simulate_physics");
      this._bindings.method_set_simulate_physics = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_simulate_physics() {
    if (!this._bindings.method_get_simulate_physics) {
      let classname = new StringName("PhysicalBone2D");
      let methodname = new StringName("get_simulate_physics");
      this._bindings.method_get_simulate_physics = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_is_simulating_physics() {
    if (!this._bindings.method_is_simulating_physics) {
      let classname = new StringName("PhysicalBone2D");
      let methodname = new StringName("is_simulating_physics");
      this._bindings.method_is_simulating_physics = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_bone2d_nodepath() {
    if (!this._bindings.method_set_bone2d_nodepath) {
      let classname = new StringName("PhysicalBone2D");
      let methodname = new StringName("set_bone2d_nodepath");
      this._bindings.method_set_bone2d_nodepath = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1348162250
      );
    }
  }
  static init_method_get_bone2d_nodepath() {
    if (!this._bindings.method_get_bone2d_nodepath) {
      let classname = new StringName("PhysicalBone2D");
      let methodname = new StringName("get_bone2d_nodepath");
      this._bindings.method_get_bone2d_nodepath = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4075236667
      );
    }
  }
  static init_method_set_bone2d_index() {
    if (!this._bindings.method_set_bone2d_index) {
      let classname = new StringName("PhysicalBone2D");
      let methodname = new StringName("set_bone2d_index");
      this._bindings.method_set_bone2d_index = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_bone2d_index() {
    if (!this._bindings.method_get_bone2d_index) {
      let classname = new StringName("PhysicalBone2D");
      let methodname = new StringName("get_bone2d_index");
      this._bindings.method_get_bone2d_index = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_follow_bone_when_simulating() {
    if (!this._bindings.method_set_follow_bone_when_simulating) {
      let classname = new StringName("PhysicalBone2D");
      let methodname = new StringName("set_follow_bone_when_simulating");
      this._bindings.method_set_follow_bone_when_simulating = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_follow_bone_when_simulating() {
    if (!this._bindings.method_get_follow_bone_when_simulating) {
      let classname = new StringName("PhysicalBone2D");
      let methodname = new StringName("get_follow_bone_when_simulating");
      this._bindings.method_get_follow_bone_when_simulating = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }

  
  
  get_joint() {
    PhysicalBone2D.init_method_get_joint();
    return _call_native_mb_ret(
      PhysicalBone2D._bindings.method_get_joint,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  get_auto_configure_joint() {
    PhysicalBone2D.init_method_get_auto_configure_joint();
    return _call_native_mb_ret(
      PhysicalBone2D._bindings.method_get_auto_configure_joint,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_auto_configure_joint(_auto_configure_joint) {
    PhysicalBone2D.init_method_set_auto_configure_joint();
    return _call_native_mb_no_ret(
      PhysicalBone2D._bindings.method_set_auto_configure_joint,
      this._owner,
      _auto_configure_joint
    );
    
  }
  set_simulate_physics(_simulate_physics) {
    PhysicalBone2D.init_method_set_simulate_physics();
    return _call_native_mb_no_ret(
      PhysicalBone2D._bindings.method_set_simulate_physics,
      this._owner,
      _simulate_physics
    );
    
  }
  get_simulate_physics() {
    PhysicalBone2D.init_method_get_simulate_physics();
    return _call_native_mb_ret(
      PhysicalBone2D._bindings.method_get_simulate_physics,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  is_simulating_physics() {
    PhysicalBone2D.init_method_is_simulating_physics();
    return _call_native_mb_ret(
      PhysicalBone2D._bindings.method_is_simulating_physics,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_bone2d_nodepath(_nodepath) {
    PhysicalBone2D.init_method_set_bone2d_nodepath();
    return _call_native_mb_no_ret(
      PhysicalBone2D._bindings.method_set_bone2d_nodepath,
      this._owner,
      _nodepath
    );
    
  }
  get_bone2d_nodepath() {
    PhysicalBone2D.init_method_get_bone2d_nodepath();
    return _call_native_mb_ret(
      PhysicalBone2D._bindings.method_get_bone2d_nodepath,
      this._owner,
			Variant.Type.NODE_PATH,
    
      
    );
    
  }
  set_bone2d_index(_bone_index) {
    PhysicalBone2D.init_method_set_bone2d_index();
    return _call_native_mb_no_ret(
      PhysicalBone2D._bindings.method_set_bone2d_index,
      this._owner,
      _bone_index
    );
    
  }
  get_bone2d_index() {
    PhysicalBone2D.init_method_get_bone2d_index();
    return _call_native_mb_ret(
      PhysicalBone2D._bindings.method_get_bone2d_index,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_follow_bone_when_simulating(_follow_bone) {
    PhysicalBone2D.init_method_set_follow_bone_when_simulating();
    return _call_native_mb_no_ret(
      PhysicalBone2D._bindings.method_set_follow_bone_when_simulating,
      this._owner,
      _follow_bone
    );
    
  }
  get_follow_bone_when_simulating() {
    PhysicalBone2D.init_method_get_follow_bone_when_simulating();
    return _call_native_mb_ret(
      PhysicalBone2D._bindings.method_get_follow_bone_when_simulating,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  
get bone2d_nodepath () {
  return this.get_bone2d_nodepath();
}
set bone2d_nodepath (new_value) {
  this.set_bone2d_nodepath(new_value);
}
get bone2d_index () {
  return this.get_bone2d_index();
}
set bone2d_index (new_value) {
  this.set_bone2d_index(new_value);
}
get auto_configure_joint () {
  return this.get_auto_configure_joint();
}
set auto_configure_joint (new_value) {
  this.set_auto_configure_joint(new_value);
}
get simulate_physics () {
  return this.get_simulate_physics();
}
set simulate_physics (new_value) {
  this.set_simulate_physics(new_value);
}
get follow_bone_when_simulating () {
  return this.get_follow_bone_when_simulating();
}
set follow_bone_when_simulating (new_value) {
  this.set_follow_bone_when_simulating(new_value);
}

}