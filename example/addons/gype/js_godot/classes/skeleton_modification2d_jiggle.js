import * as internal from '__internal__';
import { SkeletonModification2D } from '@js_godot/classes/skeleton_modification2d'
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
  method_set_target_node;
  method_get_target_node;
  method_set_jiggle_data_chain_length;
  method_get_jiggle_data_chain_length;
  method_set_stiffness;
  method_get_stiffness;
  method_set_mass;
  method_get_mass;
  method_set_damping;
  method_get_damping;
  method_set_use_gravity;
  method_get_use_gravity;
  method_set_gravity;
  method_get_gravity;
  method_set_use_colliders;
  method_get_use_colliders;
  method_set_collision_mask;
  method_get_collision_mask;
  method_set_jiggle_joint_bone2d_node;
  method_get_jiggle_joint_bone2d_node;
  method_set_jiggle_joint_bone_index;
  method_get_jiggle_joint_bone_index;
  method_set_jiggle_joint_override;
  method_get_jiggle_joint_override;
  method_set_jiggle_joint_stiffness;
  method_get_jiggle_joint_stiffness;
  method_set_jiggle_joint_mass;
  method_get_jiggle_joint_mass;
  method_set_jiggle_joint_damping;
  method_get_jiggle_joint_damping;
  method_set_jiggle_joint_use_gravity;
  method_get_jiggle_joint_use_gravity;
  method_set_jiggle_joint_gravity;
  method_get_jiggle_joint_gravity;
}
@GodotClass
export class SkeletonModification2DJiggle extends SkeletonModification2D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("SkeletonModification2DJiggle");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_target_node() {
    if (!this._bindings.method_set_target_node) {
      let classname = new StringName("SkeletonModification2DJiggle");
      let methodname = new StringName("set_target_node");
      this._bindings.method_set_target_node = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1348162250
      );
    }
  }
  static init_method_get_target_node() {
    if (!this._bindings.method_get_target_node) {
      let classname = new StringName("SkeletonModification2DJiggle");
      let methodname = new StringName("get_target_node");
      this._bindings.method_get_target_node = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4075236667
      );
    }
  }
  static init_method_set_jiggle_data_chain_length() {
    if (!this._bindings.method_set_jiggle_data_chain_length) {
      let classname = new StringName("SkeletonModification2DJiggle");
      let methodname = new StringName("set_jiggle_data_chain_length");
      this._bindings.method_set_jiggle_data_chain_length = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_jiggle_data_chain_length() {
    if (!this._bindings.method_get_jiggle_data_chain_length) {
      let classname = new StringName("SkeletonModification2DJiggle");
      let methodname = new StringName("get_jiggle_data_chain_length");
      this._bindings.method_get_jiggle_data_chain_length = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2455072627
      );
    }
  }
  static init_method_set_stiffness() {
    if (!this._bindings.method_set_stiffness) {
      let classname = new StringName("SkeletonModification2DJiggle");
      let methodname = new StringName("set_stiffness");
      this._bindings.method_set_stiffness = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_stiffness() {
    if (!this._bindings.method_get_stiffness) {
      let classname = new StringName("SkeletonModification2DJiggle");
      let methodname = new StringName("get_stiffness");
      this._bindings.method_get_stiffness = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_mass() {
    if (!this._bindings.method_set_mass) {
      let classname = new StringName("SkeletonModification2DJiggle");
      let methodname = new StringName("set_mass");
      this._bindings.method_set_mass = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_mass() {
    if (!this._bindings.method_get_mass) {
      let classname = new StringName("SkeletonModification2DJiggle");
      let methodname = new StringName("get_mass");
      this._bindings.method_get_mass = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_damping() {
    if (!this._bindings.method_set_damping) {
      let classname = new StringName("SkeletonModification2DJiggle");
      let methodname = new StringName("set_damping");
      this._bindings.method_set_damping = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_damping() {
    if (!this._bindings.method_get_damping) {
      let classname = new StringName("SkeletonModification2DJiggle");
      let methodname = new StringName("get_damping");
      this._bindings.method_get_damping = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_use_gravity() {
    if (!this._bindings.method_set_use_gravity) {
      let classname = new StringName("SkeletonModification2DJiggle");
      let methodname = new StringName("set_use_gravity");
      this._bindings.method_set_use_gravity = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_use_gravity() {
    if (!this._bindings.method_get_use_gravity) {
      let classname = new StringName("SkeletonModification2DJiggle");
      let methodname = new StringName("get_use_gravity");
      this._bindings.method_get_use_gravity = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_gravity() {
    if (!this._bindings.method_set_gravity) {
      let classname = new StringName("SkeletonModification2DJiggle");
      let methodname = new StringName("set_gravity");
      this._bindings.method_set_gravity = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        743155724
      );
    }
  }
  static init_method_get_gravity() {
    if (!this._bindings.method_get_gravity) {
      let classname = new StringName("SkeletonModification2DJiggle");
      let methodname = new StringName("get_gravity");
      this._bindings.method_get_gravity = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3341600327
      );
    }
  }
  static init_method_set_use_colliders() {
    if (!this._bindings.method_set_use_colliders) {
      let classname = new StringName("SkeletonModification2DJiggle");
      let methodname = new StringName("set_use_colliders");
      this._bindings.method_set_use_colliders = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_use_colliders() {
    if (!this._bindings.method_get_use_colliders) {
      let classname = new StringName("SkeletonModification2DJiggle");
      let methodname = new StringName("get_use_colliders");
      this._bindings.method_get_use_colliders = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_collision_mask() {
    if (!this._bindings.method_set_collision_mask) {
      let classname = new StringName("SkeletonModification2DJiggle");
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
      let classname = new StringName("SkeletonModification2DJiggle");
      let methodname = new StringName("get_collision_mask");
      this._bindings.method_get_collision_mask = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_jiggle_joint_bone2d_node() {
    if (!this._bindings.method_set_jiggle_joint_bone2d_node) {
      let classname = new StringName("SkeletonModification2DJiggle");
      let methodname = new StringName("set_jiggle_joint_bone2d_node");
      this._bindings.method_set_jiggle_joint_bone2d_node = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2761262315
      );
    }
  }
  static init_method_get_jiggle_joint_bone2d_node() {
    if (!this._bindings.method_get_jiggle_joint_bone2d_node) {
      let classname = new StringName("SkeletonModification2DJiggle");
      let methodname = new StringName("get_jiggle_joint_bone2d_node");
      this._bindings.method_get_jiggle_joint_bone2d_node = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        408788394
      );
    }
  }
  static init_method_set_jiggle_joint_bone_index() {
    if (!this._bindings.method_set_jiggle_joint_bone_index) {
      let classname = new StringName("SkeletonModification2DJiggle");
      let methodname = new StringName("set_jiggle_joint_bone_index");
      this._bindings.method_set_jiggle_joint_bone_index = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3937882851
      );
    }
  }
  static init_method_get_jiggle_joint_bone_index() {
    if (!this._bindings.method_get_jiggle_joint_bone_index) {
      let classname = new StringName("SkeletonModification2DJiggle");
      let methodname = new StringName("get_jiggle_joint_bone_index");
      this._bindings.method_get_jiggle_joint_bone_index = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        923996154
      );
    }
  }
  static init_method_set_jiggle_joint_override() {
    if (!this._bindings.method_set_jiggle_joint_override) {
      let classname = new StringName("SkeletonModification2DJiggle");
      let methodname = new StringName("set_jiggle_joint_override");
      this._bindings.method_set_jiggle_joint_override = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        300928843
      );
    }
  }
  static init_method_get_jiggle_joint_override() {
    if (!this._bindings.method_get_jiggle_joint_override) {
      let classname = new StringName("SkeletonModification2DJiggle");
      let methodname = new StringName("get_jiggle_joint_override");
      this._bindings.method_get_jiggle_joint_override = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1116898809
      );
    }
  }
  static init_method_set_jiggle_joint_stiffness() {
    if (!this._bindings.method_set_jiggle_joint_stiffness) {
      let classname = new StringName("SkeletonModification2DJiggle");
      let methodname = new StringName("set_jiggle_joint_stiffness");
      this._bindings.method_set_jiggle_joint_stiffness = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1602489585
      );
    }
  }
  static init_method_get_jiggle_joint_stiffness() {
    if (!this._bindings.method_get_jiggle_joint_stiffness) {
      let classname = new StringName("SkeletonModification2DJiggle");
      let methodname = new StringName("get_jiggle_joint_stiffness");
      this._bindings.method_get_jiggle_joint_stiffness = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2339986948
      );
    }
  }
  static init_method_set_jiggle_joint_mass() {
    if (!this._bindings.method_set_jiggle_joint_mass) {
      let classname = new StringName("SkeletonModification2DJiggle");
      let methodname = new StringName("set_jiggle_joint_mass");
      this._bindings.method_set_jiggle_joint_mass = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1602489585
      );
    }
  }
  static init_method_get_jiggle_joint_mass() {
    if (!this._bindings.method_get_jiggle_joint_mass) {
      let classname = new StringName("SkeletonModification2DJiggle");
      let methodname = new StringName("get_jiggle_joint_mass");
      this._bindings.method_get_jiggle_joint_mass = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2339986948
      );
    }
  }
  static init_method_set_jiggle_joint_damping() {
    if (!this._bindings.method_set_jiggle_joint_damping) {
      let classname = new StringName("SkeletonModification2DJiggle");
      let methodname = new StringName("set_jiggle_joint_damping");
      this._bindings.method_set_jiggle_joint_damping = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1602489585
      );
    }
  }
  static init_method_get_jiggle_joint_damping() {
    if (!this._bindings.method_get_jiggle_joint_damping) {
      let classname = new StringName("SkeletonModification2DJiggle");
      let methodname = new StringName("get_jiggle_joint_damping");
      this._bindings.method_get_jiggle_joint_damping = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2339986948
      );
    }
  }
  static init_method_set_jiggle_joint_use_gravity() {
    if (!this._bindings.method_set_jiggle_joint_use_gravity) {
      let classname = new StringName("SkeletonModification2DJiggle");
      let methodname = new StringName("set_jiggle_joint_use_gravity");
      this._bindings.method_set_jiggle_joint_use_gravity = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        300928843
      );
    }
  }
  static init_method_get_jiggle_joint_use_gravity() {
    if (!this._bindings.method_get_jiggle_joint_use_gravity) {
      let classname = new StringName("SkeletonModification2DJiggle");
      let methodname = new StringName("get_jiggle_joint_use_gravity");
      this._bindings.method_get_jiggle_joint_use_gravity = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1116898809
      );
    }
  }
  static init_method_set_jiggle_joint_gravity() {
    if (!this._bindings.method_set_jiggle_joint_gravity) {
      let classname = new StringName("SkeletonModification2DJiggle");
      let methodname = new StringName("set_jiggle_joint_gravity");
      this._bindings.method_set_jiggle_joint_gravity = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        163021252
      );
    }
  }
  static init_method_get_jiggle_joint_gravity() {
    if (!this._bindings.method_get_jiggle_joint_gravity) {
      let classname = new StringName("SkeletonModification2DJiggle");
      let methodname = new StringName("get_jiggle_joint_gravity");
      this._bindings.method_get_jiggle_joint_gravity = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2299179447
      );
    }
  }

  
  
  set_target_node(_target_nodepath) {
    SkeletonModification2DJiggle.init_method_set_target_node();
    return _call_native_mb_no_ret(
      SkeletonModification2DJiggle._bindings.method_set_target_node,
      this._owner,
      _target_nodepath
    );
    
  }
  get_target_node() {
    SkeletonModification2DJiggle.init_method_get_target_node();
    return _call_native_mb_ret(
      SkeletonModification2DJiggle._bindings.method_get_target_node,
      this._owner,
			Variant.Type.NODE_PATH,
    
      
    );
    
  }
  set_jiggle_data_chain_length(_length) {
    SkeletonModification2DJiggle.init_method_set_jiggle_data_chain_length();
    return _call_native_mb_no_ret(
      SkeletonModification2DJiggle._bindings.method_set_jiggle_data_chain_length,
      this._owner,
      _length
    );
    
  }
  get_jiggle_data_chain_length() {
    SkeletonModification2DJiggle.init_method_get_jiggle_data_chain_length();
    return _call_native_mb_ret(
      SkeletonModification2DJiggle._bindings.method_get_jiggle_data_chain_length,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_stiffness(_stiffness) {
    SkeletonModification2DJiggle.init_method_set_stiffness();
    return _call_native_mb_no_ret(
      SkeletonModification2DJiggle._bindings.method_set_stiffness,
      this._owner,
      _stiffness
    );
    
  }
  get_stiffness() {
    SkeletonModification2DJiggle.init_method_get_stiffness();
    return _call_native_mb_ret(
      SkeletonModification2DJiggle._bindings.method_get_stiffness,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_mass(_mass) {
    SkeletonModification2DJiggle.init_method_set_mass();
    return _call_native_mb_no_ret(
      SkeletonModification2DJiggle._bindings.method_set_mass,
      this._owner,
      _mass
    );
    
  }
  get_mass() {
    SkeletonModification2DJiggle.init_method_get_mass();
    return _call_native_mb_ret(
      SkeletonModification2DJiggle._bindings.method_get_mass,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_damping(_damping) {
    SkeletonModification2DJiggle.init_method_set_damping();
    return _call_native_mb_no_ret(
      SkeletonModification2DJiggle._bindings.method_set_damping,
      this._owner,
      _damping
    );
    
  }
  get_damping() {
    SkeletonModification2DJiggle.init_method_get_damping();
    return _call_native_mb_ret(
      SkeletonModification2DJiggle._bindings.method_get_damping,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_use_gravity(_use_gravity) {
    SkeletonModification2DJiggle.init_method_set_use_gravity();
    return _call_native_mb_no_ret(
      SkeletonModification2DJiggle._bindings.method_set_use_gravity,
      this._owner,
      _use_gravity
    );
    
  }
  get_use_gravity() {
    SkeletonModification2DJiggle.init_method_get_use_gravity();
    return _call_native_mb_ret(
      SkeletonModification2DJiggle._bindings.method_get_use_gravity,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_gravity(_gravity) {
    SkeletonModification2DJiggle.init_method_set_gravity();
    return _call_native_mb_no_ret(
      SkeletonModification2DJiggle._bindings.method_set_gravity,
      this._owner,
      _gravity
    );
    
  }
  get_gravity() {
    SkeletonModification2DJiggle.init_method_get_gravity();
    return _call_native_mb_ret(
      SkeletonModification2DJiggle._bindings.method_get_gravity,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  set_use_colliders(_use_colliders) {
    SkeletonModification2DJiggle.init_method_set_use_colliders();
    return _call_native_mb_no_ret(
      SkeletonModification2DJiggle._bindings.method_set_use_colliders,
      this._owner,
      _use_colliders
    );
    
  }
  get_use_colliders() {
    SkeletonModification2DJiggle.init_method_get_use_colliders();
    return _call_native_mb_ret(
      SkeletonModification2DJiggle._bindings.method_get_use_colliders,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_collision_mask(_collision_mask) {
    SkeletonModification2DJiggle.init_method_set_collision_mask();
    return _call_native_mb_no_ret(
      SkeletonModification2DJiggle._bindings.method_set_collision_mask,
      this._owner,
      _collision_mask
    );
    
  }
  get_collision_mask() {
    SkeletonModification2DJiggle.init_method_get_collision_mask();
    return _call_native_mb_ret(
      SkeletonModification2DJiggle._bindings.method_get_collision_mask,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_jiggle_joint_bone2d_node(_joint_idx, _bone2d_node) {
    SkeletonModification2DJiggle.init_method_set_jiggle_joint_bone2d_node();
    return _call_native_mb_no_ret(
      SkeletonModification2DJiggle._bindings.method_set_jiggle_joint_bone2d_node,
      this._owner,
      _joint_idx, _bone2d_node
    );
    
  }
  get_jiggle_joint_bone2d_node(_joint_idx) {
    SkeletonModification2DJiggle.init_method_get_jiggle_joint_bone2d_node();
    return _call_native_mb_ret(
      SkeletonModification2DJiggle._bindings.method_get_jiggle_joint_bone2d_node,
      this._owner,
			Variant.Type.NODE_PATH,
    
      _joint_idx
    );
    
  }
  set_jiggle_joint_bone_index(_joint_idx, _bone_idx) {
    SkeletonModification2DJiggle.init_method_set_jiggle_joint_bone_index();
    return _call_native_mb_no_ret(
      SkeletonModification2DJiggle._bindings.method_set_jiggle_joint_bone_index,
      this._owner,
      _joint_idx, _bone_idx
    );
    
  }
  get_jiggle_joint_bone_index(_joint_idx) {
    SkeletonModification2DJiggle.init_method_get_jiggle_joint_bone_index();
    return _call_native_mb_ret(
      SkeletonModification2DJiggle._bindings.method_get_jiggle_joint_bone_index,
      this._owner,
			Variant.Type.INT,
    
      _joint_idx
    );
    
  }
  set_jiggle_joint_override(_joint_idx, _override) {
    SkeletonModification2DJiggle.init_method_set_jiggle_joint_override();
    return _call_native_mb_no_ret(
      SkeletonModification2DJiggle._bindings.method_set_jiggle_joint_override,
      this._owner,
      _joint_idx, _override
    );
    
  }
  get_jiggle_joint_override(_joint_idx) {
    SkeletonModification2DJiggle.init_method_get_jiggle_joint_override();
    return _call_native_mb_ret(
      SkeletonModification2DJiggle._bindings.method_get_jiggle_joint_override,
      this._owner,
			Variant.Type.BOOL,
    
      _joint_idx
    );
    
  }
  set_jiggle_joint_stiffness(_joint_idx, _stiffness) {
    SkeletonModification2DJiggle.init_method_set_jiggle_joint_stiffness();
    return _call_native_mb_no_ret(
      SkeletonModification2DJiggle._bindings.method_set_jiggle_joint_stiffness,
      this._owner,
      _joint_idx, _stiffness
    );
    
  }
  get_jiggle_joint_stiffness(_joint_idx) {
    SkeletonModification2DJiggle.init_method_get_jiggle_joint_stiffness();
    return _call_native_mb_ret(
      SkeletonModification2DJiggle._bindings.method_get_jiggle_joint_stiffness,
      this._owner,
			Variant.Type.FLOAT,
    
      _joint_idx
    );
    
  }
  set_jiggle_joint_mass(_joint_idx, _mass) {
    SkeletonModification2DJiggle.init_method_set_jiggle_joint_mass();
    return _call_native_mb_no_ret(
      SkeletonModification2DJiggle._bindings.method_set_jiggle_joint_mass,
      this._owner,
      _joint_idx, _mass
    );
    
  }
  get_jiggle_joint_mass(_joint_idx) {
    SkeletonModification2DJiggle.init_method_get_jiggle_joint_mass();
    return _call_native_mb_ret(
      SkeletonModification2DJiggle._bindings.method_get_jiggle_joint_mass,
      this._owner,
			Variant.Type.FLOAT,
    
      _joint_idx
    );
    
  }
  set_jiggle_joint_damping(_joint_idx, _damping) {
    SkeletonModification2DJiggle.init_method_set_jiggle_joint_damping();
    return _call_native_mb_no_ret(
      SkeletonModification2DJiggle._bindings.method_set_jiggle_joint_damping,
      this._owner,
      _joint_idx, _damping
    );
    
  }
  get_jiggle_joint_damping(_joint_idx) {
    SkeletonModification2DJiggle.init_method_get_jiggle_joint_damping();
    return _call_native_mb_ret(
      SkeletonModification2DJiggle._bindings.method_get_jiggle_joint_damping,
      this._owner,
			Variant.Type.FLOAT,
    
      _joint_idx
    );
    
  }
  set_jiggle_joint_use_gravity(_joint_idx, _use_gravity) {
    SkeletonModification2DJiggle.init_method_set_jiggle_joint_use_gravity();
    return _call_native_mb_no_ret(
      SkeletonModification2DJiggle._bindings.method_set_jiggle_joint_use_gravity,
      this._owner,
      _joint_idx, _use_gravity
    );
    
  }
  get_jiggle_joint_use_gravity(_joint_idx) {
    SkeletonModification2DJiggle.init_method_get_jiggle_joint_use_gravity();
    return _call_native_mb_ret(
      SkeletonModification2DJiggle._bindings.method_get_jiggle_joint_use_gravity,
      this._owner,
			Variant.Type.BOOL,
    
      _joint_idx
    );
    
  }
  set_jiggle_joint_gravity(_joint_idx, _gravity) {
    SkeletonModification2DJiggle.init_method_set_jiggle_joint_gravity();
    return _call_native_mb_no_ret(
      SkeletonModification2DJiggle._bindings.method_set_jiggle_joint_gravity,
      this._owner,
      _joint_idx, _gravity
    );
    
  }
  get_jiggle_joint_gravity(_joint_idx) {
    SkeletonModification2DJiggle.init_method_get_jiggle_joint_gravity();
    return _call_native_mb_ret(
      SkeletonModification2DJiggle._bindings.method_get_jiggle_joint_gravity,
      this._owner,
			Variant.Type.VECTOR2,
    
      _joint_idx
    );
    
  }
  
get target_nodepath () {
  return this.get_target_node();
}
set target_nodepath (new_value) {
  this.set_target_node(new_value);
}
get jiggle_data_chain_length () {
  return this.get_jiggle_data_chain_length();
}
set jiggle_data_chain_length (new_value) {
  this.set_jiggle_data_chain_length(new_value);
}
get stiffness () {
  return this.get_stiffness();
}
set stiffness (new_value) {
  this.set_stiffness(new_value);
}
get mass () {
  return this.get_mass();
}
set mass (new_value) {
  this.set_mass(new_value);
}
get damping () {
  return this.get_damping();
}
set damping (new_value) {
  this.set_damping(new_value);
}
get use_gravity () {
  return this.get_use_gravity();
}
set use_gravity (new_value) {
  this.set_use_gravity(new_value);
}
get gravity () {
  return this.get_gravity();
}
set gravity (new_value) {
  this.set_gravity(new_value);
}

}