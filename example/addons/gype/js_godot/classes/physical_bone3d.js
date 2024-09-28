import * as internal from '__internal__';
import { StringName } from '@js_godot/variant/string_name'
import { PhysicsBody3D } from '@js_godot/classes/physics_body3d'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
  method_apply_central_impulse;
  method_apply_impulse;
  method_set_joint_type;
  method_get_joint_type;
  method_set_joint_offset;
  method_get_joint_offset;
  method_set_joint_rotation;
  method_get_joint_rotation;
  method_set_body_offset;
  method_get_body_offset;
  method_get_simulate_physics;
  method_is_simulating_physics;
  method_get_bone_id;
  method_set_mass;
  method_get_mass;
  method_set_friction;
  method_get_friction;
  method_set_bounce;
  method_get_bounce;
  method_set_gravity_scale;
  method_get_gravity_scale;
  method_set_linear_damp_mode;
  method_get_linear_damp_mode;
  method_set_angular_damp_mode;
  method_get_angular_damp_mode;
  method_set_linear_damp;
  method_get_linear_damp;
  method_set_angular_damp;
  method_get_angular_damp;
  method_set_linear_velocity;
  method_get_linear_velocity;
  method_set_angular_velocity;
  method_get_angular_velocity;
  method_set_use_custom_integrator;
  method_is_using_custom_integrator;
  method_set_can_sleep;
  method_is_able_to_sleep;
}
@GodotClass
export class PhysicalBone3D extends PhysicsBody3D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("PhysicalBone3D");
    } else {
      super(godot_object);
    }
  }
  static init_method_apply_central_impulse() {
    if (!this._bindings.method_apply_central_impulse) {
      let classname = new StringName("PhysicalBone3D");
      let methodname = new StringName("apply_central_impulse");
      this._bindings.method_apply_central_impulse = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3460891852
      );
    }
  }
  static init_method_apply_impulse() {
    if (!this._bindings.method_apply_impulse) {
      let classname = new StringName("PhysicalBone3D");
      let methodname = new StringName("apply_impulse");
      this._bindings.method_apply_impulse = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2754756483
      );
    }
  }
  static init_method_set_joint_type() {
    if (!this._bindings.method_set_joint_type) {
      let classname = new StringName("PhysicalBone3D");
      let methodname = new StringName("set_joint_type");
      this._bindings.method_set_joint_type = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2289552604
      );
    }
  }
  static init_method_get_joint_type() {
    if (!this._bindings.method_get_joint_type) {
      let classname = new StringName("PhysicalBone3D");
      let methodname = new StringName("get_joint_type");
      this._bindings.method_get_joint_type = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        931347320
      );
    }
  }
  static init_method_set_joint_offset() {
    if (!this._bindings.method_set_joint_offset) {
      let classname = new StringName("PhysicalBone3D");
      let methodname = new StringName("set_joint_offset");
      this._bindings.method_set_joint_offset = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2952846383
      );
    }
  }
  static init_method_get_joint_offset() {
    if (!this._bindings.method_get_joint_offset) {
      let classname = new StringName("PhysicalBone3D");
      let methodname = new StringName("get_joint_offset");
      this._bindings.method_get_joint_offset = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3229777777
      );
    }
  }
  static init_method_set_joint_rotation() {
    if (!this._bindings.method_set_joint_rotation) {
      let classname = new StringName("PhysicalBone3D");
      let methodname = new StringName("set_joint_rotation");
      this._bindings.method_set_joint_rotation = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3460891852
      );
    }
  }
  static init_method_get_joint_rotation() {
    if (!this._bindings.method_get_joint_rotation) {
      let classname = new StringName("PhysicalBone3D");
      let methodname = new StringName("get_joint_rotation");
      this._bindings.method_get_joint_rotation = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3360562783
      );
    }
  }
  static init_method_set_body_offset() {
    if (!this._bindings.method_set_body_offset) {
      let classname = new StringName("PhysicalBone3D");
      let methodname = new StringName("set_body_offset");
      this._bindings.method_set_body_offset = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2952846383
      );
    }
  }
  static init_method_get_body_offset() {
    if (!this._bindings.method_get_body_offset) {
      let classname = new StringName("PhysicalBone3D");
      let methodname = new StringName("get_body_offset");
      this._bindings.method_get_body_offset = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3229777777
      );
    }
  }
  static init_method_get_simulate_physics() {
    if (!this._bindings.method_get_simulate_physics) {
      let classname = new StringName("PhysicalBone3D");
      let methodname = new StringName("get_simulate_physics");
      this._bindings.method_get_simulate_physics = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2240911060
      );
    }
  }
  static init_method_is_simulating_physics() {
    if (!this._bindings.method_is_simulating_physics) {
      let classname = new StringName("PhysicalBone3D");
      let methodname = new StringName("is_simulating_physics");
      this._bindings.method_is_simulating_physics = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2240911060
      );
    }
  }
  static init_method_get_bone_id() {
    if (!this._bindings.method_get_bone_id) {
      let classname = new StringName("PhysicalBone3D");
      let methodname = new StringName("get_bone_id");
      this._bindings.method_get_bone_id = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_mass() {
    if (!this._bindings.method_set_mass) {
      let classname = new StringName("PhysicalBone3D");
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
      let classname = new StringName("PhysicalBone3D");
      let methodname = new StringName("get_mass");
      this._bindings.method_get_mass = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_friction() {
    if (!this._bindings.method_set_friction) {
      let classname = new StringName("PhysicalBone3D");
      let methodname = new StringName("set_friction");
      this._bindings.method_set_friction = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_friction() {
    if (!this._bindings.method_get_friction) {
      let classname = new StringName("PhysicalBone3D");
      let methodname = new StringName("get_friction");
      this._bindings.method_get_friction = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_bounce() {
    if (!this._bindings.method_set_bounce) {
      let classname = new StringName("PhysicalBone3D");
      let methodname = new StringName("set_bounce");
      this._bindings.method_set_bounce = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_bounce() {
    if (!this._bindings.method_get_bounce) {
      let classname = new StringName("PhysicalBone3D");
      let methodname = new StringName("get_bounce");
      this._bindings.method_get_bounce = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_gravity_scale() {
    if (!this._bindings.method_set_gravity_scale) {
      let classname = new StringName("PhysicalBone3D");
      let methodname = new StringName("set_gravity_scale");
      this._bindings.method_set_gravity_scale = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_gravity_scale() {
    if (!this._bindings.method_get_gravity_scale) {
      let classname = new StringName("PhysicalBone3D");
      let methodname = new StringName("get_gravity_scale");
      this._bindings.method_get_gravity_scale = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_linear_damp_mode() {
    if (!this._bindings.method_set_linear_damp_mode) {
      let classname = new StringName("PhysicalBone3D");
      let methodname = new StringName("set_linear_damp_mode");
      this._bindings.method_set_linear_damp_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1244972221
      );
    }
  }
  static init_method_get_linear_damp_mode() {
    if (!this._bindings.method_get_linear_damp_mode) {
      let classname = new StringName("PhysicalBone3D");
      let methodname = new StringName("get_linear_damp_mode");
      this._bindings.method_get_linear_damp_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        205884699
      );
    }
  }
  static init_method_set_angular_damp_mode() {
    if (!this._bindings.method_set_angular_damp_mode) {
      let classname = new StringName("PhysicalBone3D");
      let methodname = new StringName("set_angular_damp_mode");
      this._bindings.method_set_angular_damp_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1244972221
      );
    }
  }
  static init_method_get_angular_damp_mode() {
    if (!this._bindings.method_get_angular_damp_mode) {
      let classname = new StringName("PhysicalBone3D");
      let methodname = new StringName("get_angular_damp_mode");
      this._bindings.method_get_angular_damp_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        205884699
      );
    }
  }
  static init_method_set_linear_damp() {
    if (!this._bindings.method_set_linear_damp) {
      let classname = new StringName("PhysicalBone3D");
      let methodname = new StringName("set_linear_damp");
      this._bindings.method_set_linear_damp = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_linear_damp() {
    if (!this._bindings.method_get_linear_damp) {
      let classname = new StringName("PhysicalBone3D");
      let methodname = new StringName("get_linear_damp");
      this._bindings.method_get_linear_damp = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_angular_damp() {
    if (!this._bindings.method_set_angular_damp) {
      let classname = new StringName("PhysicalBone3D");
      let methodname = new StringName("set_angular_damp");
      this._bindings.method_set_angular_damp = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_angular_damp() {
    if (!this._bindings.method_get_angular_damp) {
      let classname = new StringName("PhysicalBone3D");
      let methodname = new StringName("get_angular_damp");
      this._bindings.method_get_angular_damp = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_linear_velocity() {
    if (!this._bindings.method_set_linear_velocity) {
      let classname = new StringName("PhysicalBone3D");
      let methodname = new StringName("set_linear_velocity");
      this._bindings.method_set_linear_velocity = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3460891852
      );
    }
  }
  static init_method_get_linear_velocity() {
    if (!this._bindings.method_get_linear_velocity) {
      let classname = new StringName("PhysicalBone3D");
      let methodname = new StringName("get_linear_velocity");
      this._bindings.method_get_linear_velocity = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3360562783
      );
    }
  }
  static init_method_set_angular_velocity() {
    if (!this._bindings.method_set_angular_velocity) {
      let classname = new StringName("PhysicalBone3D");
      let methodname = new StringName("set_angular_velocity");
      this._bindings.method_set_angular_velocity = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3460891852
      );
    }
  }
  static init_method_get_angular_velocity() {
    if (!this._bindings.method_get_angular_velocity) {
      let classname = new StringName("PhysicalBone3D");
      let methodname = new StringName("get_angular_velocity");
      this._bindings.method_get_angular_velocity = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3360562783
      );
    }
  }
  static init_method_set_use_custom_integrator() {
    if (!this._bindings.method_set_use_custom_integrator) {
      let classname = new StringName("PhysicalBone3D");
      let methodname = new StringName("set_use_custom_integrator");
      this._bindings.method_set_use_custom_integrator = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_using_custom_integrator() {
    if (!this._bindings.method_is_using_custom_integrator) {
      let classname = new StringName("PhysicalBone3D");
      let methodname = new StringName("is_using_custom_integrator");
      this._bindings.method_is_using_custom_integrator = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2240911060
      );
    }
  }
  static init_method_set_can_sleep() {
    if (!this._bindings.method_set_can_sleep) {
      let classname = new StringName("PhysicalBone3D");
      let methodname = new StringName("set_can_sleep");
      this._bindings.method_set_can_sleep = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_able_to_sleep() {
    if (!this._bindings.method_is_able_to_sleep) {
      let classname = new StringName("PhysicalBone3D");
      let methodname = new StringName("is_able_to_sleep");
      this._bindings.method_is_able_to_sleep = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }

  
  
  _integrate_forces(_state) {
  }
  apply_central_impulse(_impulse) {
    PhysicalBone3D.init_method_apply_central_impulse();
    return _call_native_mb_no_ret(
      PhysicalBone3D._bindings.method_apply_central_impulse,
      this._owner,
      _impulse
    );
    
  }
  apply_impulse(_impulse, _position) {
    PhysicalBone3D.init_method_apply_impulse();
    return _call_native_mb_no_ret(
      PhysicalBone3D._bindings.method_apply_impulse,
      this._owner,
      _impulse, _position
    );
    
  }
  set_joint_type(_joint_type) {
    PhysicalBone3D.init_method_set_joint_type();
    return _call_native_mb_no_ret(
      PhysicalBone3D._bindings.method_set_joint_type,
      this._owner,
      _joint_type
    );
    
  }
  get_joint_type() {
    PhysicalBone3D.init_method_get_joint_type();
    return _call_native_mb_ret(
      PhysicalBone3D._bindings.method_get_joint_type,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_joint_offset(_offset) {
    PhysicalBone3D.init_method_set_joint_offset();
    return _call_native_mb_no_ret(
      PhysicalBone3D._bindings.method_set_joint_offset,
      this._owner,
      _offset
    );
    
  }
  get_joint_offset() {
    PhysicalBone3D.init_method_get_joint_offset();
    return _call_native_mb_ret(
      PhysicalBone3D._bindings.method_get_joint_offset,
      this._owner,
			Variant.Type.TRANSFORM3D,
    
      
    );
    
  }
  set_joint_rotation(_euler) {
    PhysicalBone3D.init_method_set_joint_rotation();
    return _call_native_mb_no_ret(
      PhysicalBone3D._bindings.method_set_joint_rotation,
      this._owner,
      _euler
    );
    
  }
  get_joint_rotation() {
    PhysicalBone3D.init_method_get_joint_rotation();
    return _call_native_mb_ret(
      PhysicalBone3D._bindings.method_get_joint_rotation,
      this._owner,
			Variant.Type.VECTOR3,
    
      
    );
    
  }
  set_body_offset(_offset) {
    PhysicalBone3D.init_method_set_body_offset();
    return _call_native_mb_no_ret(
      PhysicalBone3D._bindings.method_set_body_offset,
      this._owner,
      _offset
    );
    
  }
  get_body_offset() {
    PhysicalBone3D.init_method_get_body_offset();
    return _call_native_mb_ret(
      PhysicalBone3D._bindings.method_get_body_offset,
      this._owner,
			Variant.Type.TRANSFORM3D,
    
      
    );
    
  }
  get_simulate_physics() {
    PhysicalBone3D.init_method_get_simulate_physics();
    return _call_native_mb_ret(
      PhysicalBone3D._bindings.method_get_simulate_physics,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  is_simulating_physics() {
    PhysicalBone3D.init_method_is_simulating_physics();
    return _call_native_mb_ret(
      PhysicalBone3D._bindings.method_is_simulating_physics,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  get_bone_id() {
    PhysicalBone3D.init_method_get_bone_id();
    return _call_native_mb_ret(
      PhysicalBone3D._bindings.method_get_bone_id,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_mass(_mass) {
    PhysicalBone3D.init_method_set_mass();
    return _call_native_mb_no_ret(
      PhysicalBone3D._bindings.method_set_mass,
      this._owner,
      _mass
    );
    
  }
  get_mass() {
    PhysicalBone3D.init_method_get_mass();
    return _call_native_mb_ret(
      PhysicalBone3D._bindings.method_get_mass,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_friction(_friction) {
    PhysicalBone3D.init_method_set_friction();
    return _call_native_mb_no_ret(
      PhysicalBone3D._bindings.method_set_friction,
      this._owner,
      _friction
    );
    
  }
  get_friction() {
    PhysicalBone3D.init_method_get_friction();
    return _call_native_mb_ret(
      PhysicalBone3D._bindings.method_get_friction,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_bounce(_bounce) {
    PhysicalBone3D.init_method_set_bounce();
    return _call_native_mb_no_ret(
      PhysicalBone3D._bindings.method_set_bounce,
      this._owner,
      _bounce
    );
    
  }
  get_bounce() {
    PhysicalBone3D.init_method_get_bounce();
    return _call_native_mb_ret(
      PhysicalBone3D._bindings.method_get_bounce,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_gravity_scale(_gravity_scale) {
    PhysicalBone3D.init_method_set_gravity_scale();
    return _call_native_mb_no_ret(
      PhysicalBone3D._bindings.method_set_gravity_scale,
      this._owner,
      _gravity_scale
    );
    
  }
  get_gravity_scale() {
    PhysicalBone3D.init_method_get_gravity_scale();
    return _call_native_mb_ret(
      PhysicalBone3D._bindings.method_get_gravity_scale,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_linear_damp_mode(_linear_damp_mode) {
    PhysicalBone3D.init_method_set_linear_damp_mode();
    return _call_native_mb_no_ret(
      PhysicalBone3D._bindings.method_set_linear_damp_mode,
      this._owner,
      _linear_damp_mode
    );
    
  }
  get_linear_damp_mode() {
    PhysicalBone3D.init_method_get_linear_damp_mode();
    return _call_native_mb_ret(
      PhysicalBone3D._bindings.method_get_linear_damp_mode,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_angular_damp_mode(_angular_damp_mode) {
    PhysicalBone3D.init_method_set_angular_damp_mode();
    return _call_native_mb_no_ret(
      PhysicalBone3D._bindings.method_set_angular_damp_mode,
      this._owner,
      _angular_damp_mode
    );
    
  }
  get_angular_damp_mode() {
    PhysicalBone3D.init_method_get_angular_damp_mode();
    return _call_native_mb_ret(
      PhysicalBone3D._bindings.method_get_angular_damp_mode,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_linear_damp(_linear_damp) {
    PhysicalBone3D.init_method_set_linear_damp();
    return _call_native_mb_no_ret(
      PhysicalBone3D._bindings.method_set_linear_damp,
      this._owner,
      _linear_damp
    );
    
  }
  get_linear_damp() {
    PhysicalBone3D.init_method_get_linear_damp();
    return _call_native_mb_ret(
      PhysicalBone3D._bindings.method_get_linear_damp,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_angular_damp(_angular_damp) {
    PhysicalBone3D.init_method_set_angular_damp();
    return _call_native_mb_no_ret(
      PhysicalBone3D._bindings.method_set_angular_damp,
      this._owner,
      _angular_damp
    );
    
  }
  get_angular_damp() {
    PhysicalBone3D.init_method_get_angular_damp();
    return _call_native_mb_ret(
      PhysicalBone3D._bindings.method_get_angular_damp,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_linear_velocity(_linear_velocity) {
    PhysicalBone3D.init_method_set_linear_velocity();
    return _call_native_mb_no_ret(
      PhysicalBone3D._bindings.method_set_linear_velocity,
      this._owner,
      _linear_velocity
    );
    
  }
  get_linear_velocity() {
    PhysicalBone3D.init_method_get_linear_velocity();
    return _call_native_mb_ret(
      PhysicalBone3D._bindings.method_get_linear_velocity,
      this._owner,
			Variant.Type.VECTOR3,
    
      
    );
    
  }
  set_angular_velocity(_angular_velocity) {
    PhysicalBone3D.init_method_set_angular_velocity();
    return _call_native_mb_no_ret(
      PhysicalBone3D._bindings.method_set_angular_velocity,
      this._owner,
      _angular_velocity
    );
    
  }
  get_angular_velocity() {
    PhysicalBone3D.init_method_get_angular_velocity();
    return _call_native_mb_ret(
      PhysicalBone3D._bindings.method_get_angular_velocity,
      this._owner,
			Variant.Type.VECTOR3,
    
      
    );
    
  }
  set_use_custom_integrator(_enable) {
    PhysicalBone3D.init_method_set_use_custom_integrator();
    return _call_native_mb_no_ret(
      PhysicalBone3D._bindings.method_set_use_custom_integrator,
      this._owner,
      _enable
    );
    
  }
  is_using_custom_integrator() {
    PhysicalBone3D.init_method_is_using_custom_integrator();
    return _call_native_mb_ret(
      PhysicalBone3D._bindings.method_is_using_custom_integrator,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_can_sleep(_able_to_sleep) {
    PhysicalBone3D.init_method_set_can_sleep();
    return _call_native_mb_no_ret(
      PhysicalBone3D._bindings.method_set_can_sleep,
      this._owner,
      _able_to_sleep
    );
    
  }
  is_able_to_sleep() {
    PhysicalBone3D.init_method_is_able_to_sleep();
    return _call_native_mb_ret(
      PhysicalBone3D._bindings.method_is_able_to_sleep,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  
get joint_type () {
  return this.get_joint_type();
}
set joint_type (new_value) {
  this.set_joint_type(new_value);
}
get joint_offset () {
  return this.get_joint_offset();
}
set joint_offset (new_value) {
  this.set_joint_offset(new_value);
}
get joint_rotation () {
  return this.get_joint_rotation();
}
set joint_rotation (new_value) {
  this.set_joint_rotation(new_value);
}
get body_offset () {
  return this.get_body_offset();
}
set body_offset (new_value) {
  this.set_body_offset(new_value);
}
get mass () {
  return this.get_mass();
}
set mass (new_value) {
  this.set_mass(new_value);
}
get friction () {
  return this.get_friction();
}
set friction (new_value) {
  this.set_friction(new_value);
}
get bounce () {
  return this.get_bounce();
}
set bounce (new_value) {
  this.set_bounce(new_value);
}
get gravity_scale () {
  return this.get_gravity_scale();
}
set gravity_scale (new_value) {
  this.set_gravity_scale(new_value);
}
get custom_integrator () {
  return this.is_using_custom_integrator();
}
set custom_integrator (new_value) {
  this.set_use_custom_integrator(new_value);
}
get linear_damp_mode () {
  return this.get_linear_damp_mode();
}
set linear_damp_mode (new_value) {
  this.set_linear_damp_mode(new_value);
}
get linear_damp () {
  return this.get_linear_damp();
}
set linear_damp (new_value) {
  this.set_linear_damp(new_value);
}
get angular_damp_mode () {
  return this.get_angular_damp_mode();
}
set angular_damp_mode (new_value) {
  this.set_angular_damp_mode(new_value);
}
get angular_damp () {
  return this.get_angular_damp();
}
set angular_damp (new_value) {
  this.set_angular_damp(new_value);
}
get linear_velocity () {
  return this.get_linear_velocity();
}
set linear_velocity (new_value) {
  this.set_linear_velocity(new_value);
}
get angular_velocity () {
  return this.get_angular_velocity();
}
set angular_velocity (new_value) {
  this.set_angular_velocity(new_value);
}
get can_sleep () {
  return this.is_able_to_sleep();
}
set can_sleep (new_value) {
  this.set_can_sleep(new_value);
}

  static DampMode = {
    DAMP_MODE_COMBINE: 0,
    DAMP_MODE_REPLACE: 1,
  }
  static JointType = {
    JOINT_TYPE_NONE: 0,
    JOINT_TYPE_PIN: 1,
    JOINT_TYPE_CONE: 2,
    JOINT_TYPE_HINGE: 3,
    JOINT_TYPE_SLIDER: 4,
    JOINT_TYPE_6DOF: 5,
  }
}