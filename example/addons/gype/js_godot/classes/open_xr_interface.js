import * as internal from '__internal__';
import { XRInterface } from '@js_godot/classes/xr_interface'
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
  method_get_display_refresh_rate;
  method_set_display_refresh_rate;
  method_get_render_target_size_multiplier;
  method_set_render_target_size_multiplier;
  method_is_foveation_supported;
  method_get_foveation_level;
  method_set_foveation_level;
  method_get_foveation_dynamic;
  method_set_foveation_dynamic;
  method_is_action_set_active;
  method_set_action_set_active;
  method_get_action_sets;
  method_get_available_display_refresh_rates;
  method_set_motion_range;
  method_get_motion_range;
  method_get_hand_tracking_source;
  method_get_hand_joint_flags;
  method_get_hand_joint_rotation;
  method_get_hand_joint_position;
  method_get_hand_joint_radius;
  method_get_hand_joint_linear_velocity;
  method_get_hand_joint_angular_velocity;
  method_is_hand_tracking_supported;
  method_is_hand_interaction_supported;
  method_is_eye_gaze_interaction_supported;
  method_get_vrs_min_radius;
  method_set_vrs_min_radius;
  method_get_vrs_strength;
  method_set_vrs_strength;
}
@GodotClass
export class OpenXRInterface extends XRInterface{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("OpenXRInterface");
    } else {
      super(godot_object);
    }
  }
  static init_method_get_display_refresh_rate() {
    if (!this._bindings.method_get_display_refresh_rate) {
      let classname = new StringName("OpenXRInterface");
      let methodname = new StringName("get_display_refresh_rate");
      this._bindings.method_get_display_refresh_rate = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_display_refresh_rate() {
    if (!this._bindings.method_set_display_refresh_rate) {
      let classname = new StringName("OpenXRInterface");
      let methodname = new StringName("set_display_refresh_rate");
      this._bindings.method_set_display_refresh_rate = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_render_target_size_multiplier() {
    if (!this._bindings.method_get_render_target_size_multiplier) {
      let classname = new StringName("OpenXRInterface");
      let methodname = new StringName("get_render_target_size_multiplier");
      this._bindings.method_get_render_target_size_multiplier = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_render_target_size_multiplier() {
    if (!this._bindings.method_set_render_target_size_multiplier) {
      let classname = new StringName("OpenXRInterface");
      let methodname = new StringName("set_render_target_size_multiplier");
      this._bindings.method_set_render_target_size_multiplier = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_is_foveation_supported() {
    if (!this._bindings.method_is_foveation_supported) {
      let classname = new StringName("OpenXRInterface");
      let methodname = new StringName("is_foveation_supported");
      this._bindings.method_is_foveation_supported = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_get_foveation_level() {
    if (!this._bindings.method_get_foveation_level) {
      let classname = new StringName("OpenXRInterface");
      let methodname = new StringName("get_foveation_level");
      this._bindings.method_get_foveation_level = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_foveation_level() {
    if (!this._bindings.method_set_foveation_level) {
      let classname = new StringName("OpenXRInterface");
      let methodname = new StringName("set_foveation_level");
      this._bindings.method_set_foveation_level = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_foveation_dynamic() {
    if (!this._bindings.method_get_foveation_dynamic) {
      let classname = new StringName("OpenXRInterface");
      let methodname = new StringName("get_foveation_dynamic");
      this._bindings.method_get_foveation_dynamic = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_foveation_dynamic() {
    if (!this._bindings.method_set_foveation_dynamic) {
      let classname = new StringName("OpenXRInterface");
      let methodname = new StringName("set_foveation_dynamic");
      this._bindings.method_set_foveation_dynamic = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_action_set_active() {
    if (!this._bindings.method_is_action_set_active) {
      let classname = new StringName("OpenXRInterface");
      let methodname = new StringName("is_action_set_active");
      this._bindings.method_is_action_set_active = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3927539163
      );
    }
  }
  static init_method_set_action_set_active() {
    if (!this._bindings.method_set_action_set_active) {
      let classname = new StringName("OpenXRInterface");
      let methodname = new StringName("set_action_set_active");
      this._bindings.method_set_action_set_active = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2678287736
      );
    }
  }
  static init_method_get_action_sets() {
    if (!this._bindings.method_get_action_sets) {
      let classname = new StringName("OpenXRInterface");
      let methodname = new StringName("get_action_sets");
      this._bindings.method_get_action_sets = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3995934104
      );
    }
  }
  static init_method_get_available_display_refresh_rates() {
    if (!this._bindings.method_get_available_display_refresh_rates) {
      let classname = new StringName("OpenXRInterface");
      let methodname = new StringName("get_available_display_refresh_rates");
      this._bindings.method_get_available_display_refresh_rates = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3995934104
      );
    }
  }
  static init_method_set_motion_range() {
    if (!this._bindings.method_set_motion_range) {
      let classname = new StringName("OpenXRInterface");
      let methodname = new StringName("set_motion_range");
      this._bindings.method_set_motion_range = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        855158159
      );
    }
  }
  static init_method_get_motion_range() {
    if (!this._bindings.method_get_motion_range) {
      let classname = new StringName("OpenXRInterface");
      let methodname = new StringName("get_motion_range");
      this._bindings.method_get_motion_range = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3955838114
      );
    }
  }
  static init_method_get_hand_tracking_source() {
    if (!this._bindings.method_get_hand_tracking_source) {
      let classname = new StringName("OpenXRInterface");
      let methodname = new StringName("get_hand_tracking_source");
      this._bindings.method_get_hand_tracking_source = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4092421202
      );
    }
  }
  static init_method_get_hand_joint_flags() {
    if (!this._bindings.method_get_hand_joint_flags) {
      let classname = new StringName("OpenXRInterface");
      let methodname = new StringName("get_hand_joint_flags");
      this._bindings.method_get_hand_joint_flags = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        720567706
      );
    }
  }
  static init_method_get_hand_joint_rotation() {
    if (!this._bindings.method_get_hand_joint_rotation) {
      let classname = new StringName("OpenXRInterface");
      let methodname = new StringName("get_hand_joint_rotation");
      this._bindings.method_get_hand_joint_rotation = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1974618321
      );
    }
  }
  static init_method_get_hand_joint_position() {
    if (!this._bindings.method_get_hand_joint_position) {
      let classname = new StringName("OpenXRInterface");
      let methodname = new StringName("get_hand_joint_position");
      this._bindings.method_get_hand_joint_position = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3529194242
      );
    }
  }
  static init_method_get_hand_joint_radius() {
    if (!this._bindings.method_get_hand_joint_radius) {
      let classname = new StringName("OpenXRInterface");
      let methodname = new StringName("get_hand_joint_radius");
      this._bindings.method_get_hand_joint_radius = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        901522724
      );
    }
  }
  static init_method_get_hand_joint_linear_velocity() {
    if (!this._bindings.method_get_hand_joint_linear_velocity) {
      let classname = new StringName("OpenXRInterface");
      let methodname = new StringName("get_hand_joint_linear_velocity");
      this._bindings.method_get_hand_joint_linear_velocity = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3529194242
      );
    }
  }
  static init_method_get_hand_joint_angular_velocity() {
    if (!this._bindings.method_get_hand_joint_angular_velocity) {
      let classname = new StringName("OpenXRInterface");
      let methodname = new StringName("get_hand_joint_angular_velocity");
      this._bindings.method_get_hand_joint_angular_velocity = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3529194242
      );
    }
  }
  static init_method_is_hand_tracking_supported() {
    if (!this._bindings.method_is_hand_tracking_supported) {
      let classname = new StringName("OpenXRInterface");
      let methodname = new StringName("is_hand_tracking_supported");
      this._bindings.method_is_hand_tracking_supported = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2240911060
      );
    }
  }
  static init_method_is_hand_interaction_supported() {
    if (!this._bindings.method_is_hand_interaction_supported) {
      let classname = new StringName("OpenXRInterface");
      let methodname = new StringName("is_hand_interaction_supported");
      this._bindings.method_is_hand_interaction_supported = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_is_eye_gaze_interaction_supported() {
    if (!this._bindings.method_is_eye_gaze_interaction_supported) {
      let classname = new StringName("OpenXRInterface");
      let methodname = new StringName("is_eye_gaze_interaction_supported");
      this._bindings.method_is_eye_gaze_interaction_supported = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2240911060
      );
    }
  }
  static init_method_get_vrs_min_radius() {
    if (!this._bindings.method_get_vrs_min_radius) {
      let classname = new StringName("OpenXRInterface");
      let methodname = new StringName("get_vrs_min_radius");
      this._bindings.method_get_vrs_min_radius = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_vrs_min_radius() {
    if (!this._bindings.method_set_vrs_min_radius) {
      let classname = new StringName("OpenXRInterface");
      let methodname = new StringName("set_vrs_min_radius");
      this._bindings.method_set_vrs_min_radius = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_vrs_strength() {
    if (!this._bindings.method_get_vrs_strength) {
      let classname = new StringName("OpenXRInterface");
      let methodname = new StringName("get_vrs_strength");
      this._bindings.method_get_vrs_strength = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_vrs_strength() {
    if (!this._bindings.method_set_vrs_strength) {
      let classname = new StringName("OpenXRInterface");
      let methodname = new StringName("set_vrs_strength");
      this._bindings.method_set_vrs_strength = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }

  
  
  get_display_refresh_rate() {
    OpenXRInterface.init_method_get_display_refresh_rate();
    return _call_native_mb_ret(
      OpenXRInterface._bindings.method_get_display_refresh_rate,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_display_refresh_rate(_refresh_rate) {
    OpenXRInterface.init_method_set_display_refresh_rate();
    return _call_native_mb_no_ret(
      OpenXRInterface._bindings.method_set_display_refresh_rate,
      this._owner,
      _refresh_rate
    );
    
  }
  get_render_target_size_multiplier() {
    OpenXRInterface.init_method_get_render_target_size_multiplier();
    return _call_native_mb_ret(
      OpenXRInterface._bindings.method_get_render_target_size_multiplier,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_render_target_size_multiplier(_multiplier) {
    OpenXRInterface.init_method_set_render_target_size_multiplier();
    return _call_native_mb_no_ret(
      OpenXRInterface._bindings.method_set_render_target_size_multiplier,
      this._owner,
      _multiplier
    );
    
  }
  is_foveation_supported() {
    OpenXRInterface.init_method_is_foveation_supported();
    return _call_native_mb_ret(
      OpenXRInterface._bindings.method_is_foveation_supported,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  get_foveation_level() {
    OpenXRInterface.init_method_get_foveation_level();
    return _call_native_mb_ret(
      OpenXRInterface._bindings.method_get_foveation_level,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_foveation_level(_foveation_level) {
    OpenXRInterface.init_method_set_foveation_level();
    return _call_native_mb_no_ret(
      OpenXRInterface._bindings.method_set_foveation_level,
      this._owner,
      _foveation_level
    );
    
  }
  get_foveation_dynamic() {
    OpenXRInterface.init_method_get_foveation_dynamic();
    return _call_native_mb_ret(
      OpenXRInterface._bindings.method_get_foveation_dynamic,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_foveation_dynamic(_foveation_dynamic) {
    OpenXRInterface.init_method_set_foveation_dynamic();
    return _call_native_mb_no_ret(
      OpenXRInterface._bindings.method_set_foveation_dynamic,
      this._owner,
      _foveation_dynamic
    );
    
  }
  is_action_set_active(_name) {
    OpenXRInterface.init_method_is_action_set_active();
    return _call_native_mb_ret(
      OpenXRInterface._bindings.method_is_action_set_active,
      this._owner,
			Variant.Type.BOOL,
    
      _name
    );
    
  }
  set_action_set_active(_name, _active) {
    OpenXRInterface.init_method_set_action_set_active();
    return _call_native_mb_no_ret(
      OpenXRInterface._bindings.method_set_action_set_active,
      this._owner,
      _name, _active
    );
    
  }
  get_action_sets() {
    OpenXRInterface.init_method_get_action_sets();
    return _call_native_mb_ret(
      OpenXRInterface._bindings.method_get_action_sets,
      this._owner,
			Variant.Type.ARRAY,
    
      
    );
    
  }
  get_available_display_refresh_rates() {
    OpenXRInterface.init_method_get_available_display_refresh_rates();
    return _call_native_mb_ret(
      OpenXRInterface._bindings.method_get_available_display_refresh_rates,
      this._owner,
			Variant.Type.ARRAY,
    
      
    );
    
  }
  set_motion_range(_hand, _motion_range) {
    OpenXRInterface.init_method_set_motion_range();
    return _call_native_mb_no_ret(
      OpenXRInterface._bindings.method_set_motion_range,
      this._owner,
      _hand, _motion_range
    );
    
  }
  get_motion_range(_hand) {
    OpenXRInterface.init_method_get_motion_range();
    return _call_native_mb_ret(
      OpenXRInterface._bindings.method_get_motion_range,
      this._owner,
			Variant.Type.INT,
    
      _hand
    );
    
  }
  get_hand_tracking_source(_hand) {
    OpenXRInterface.init_method_get_hand_tracking_source();
    return _call_native_mb_ret(
      OpenXRInterface._bindings.method_get_hand_tracking_source,
      this._owner,
			Variant.Type.INT,
    
      _hand
    );
    
  }
  get_hand_joint_flags(_hand, _joint) {
    OpenXRInterface.init_method_get_hand_joint_flags();
    return _call_native_mb_ret(
      OpenXRInterface._bindings.method_get_hand_joint_flags,
      this._owner,
			Variant.Type.OBJECT,
      _hand, _joint
    );
    
  }
  get_hand_joint_rotation(_hand, _joint) {
    OpenXRInterface.init_method_get_hand_joint_rotation();
    return _call_native_mb_ret(
      OpenXRInterface._bindings.method_get_hand_joint_rotation,
      this._owner,
			Variant.Type.QUATERNION,
    
      _hand, _joint
    );
    
  }
  get_hand_joint_position(_hand, _joint) {
    OpenXRInterface.init_method_get_hand_joint_position();
    return _call_native_mb_ret(
      OpenXRInterface._bindings.method_get_hand_joint_position,
      this._owner,
			Variant.Type.VECTOR3,
    
      _hand, _joint
    );
    
  }
  get_hand_joint_radius(_hand, _joint) {
    OpenXRInterface.init_method_get_hand_joint_radius();
    return _call_native_mb_ret(
      OpenXRInterface._bindings.method_get_hand_joint_radius,
      this._owner,
			Variant.Type.FLOAT,
    
      _hand, _joint
    );
    
  }
  get_hand_joint_linear_velocity(_hand, _joint) {
    OpenXRInterface.init_method_get_hand_joint_linear_velocity();
    return _call_native_mb_ret(
      OpenXRInterface._bindings.method_get_hand_joint_linear_velocity,
      this._owner,
			Variant.Type.VECTOR3,
    
      _hand, _joint
    );
    
  }
  get_hand_joint_angular_velocity(_hand, _joint) {
    OpenXRInterface.init_method_get_hand_joint_angular_velocity();
    return _call_native_mb_ret(
      OpenXRInterface._bindings.method_get_hand_joint_angular_velocity,
      this._owner,
			Variant.Type.VECTOR3,
    
      _hand, _joint
    );
    
  }
  is_hand_tracking_supported() {
    OpenXRInterface.init_method_is_hand_tracking_supported();
    return _call_native_mb_ret(
      OpenXRInterface._bindings.method_is_hand_tracking_supported,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  is_hand_interaction_supported() {
    OpenXRInterface.init_method_is_hand_interaction_supported();
    return _call_native_mb_ret(
      OpenXRInterface._bindings.method_is_hand_interaction_supported,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  is_eye_gaze_interaction_supported() {
    OpenXRInterface.init_method_is_eye_gaze_interaction_supported();
    return _call_native_mb_ret(
      OpenXRInterface._bindings.method_is_eye_gaze_interaction_supported,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  get_vrs_min_radius() {
    OpenXRInterface.init_method_get_vrs_min_radius();
    return _call_native_mb_ret(
      OpenXRInterface._bindings.method_get_vrs_min_radius,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_vrs_min_radius(_radius) {
    OpenXRInterface.init_method_set_vrs_min_radius();
    return _call_native_mb_no_ret(
      OpenXRInterface._bindings.method_set_vrs_min_radius,
      this._owner,
      _radius
    );
    
  }
  get_vrs_strength() {
    OpenXRInterface.init_method_get_vrs_strength();
    return _call_native_mb_ret(
      OpenXRInterface._bindings.method_get_vrs_strength,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_vrs_strength(_strength) {
    OpenXRInterface.init_method_set_vrs_strength();
    return _call_native_mb_no_ret(
      OpenXRInterface._bindings.method_set_vrs_strength,
      this._owner,
      _strength
    );
    
  }
  
get display_refresh_rate () {
  return this.get_display_refresh_rate();
}
set display_refresh_rate (new_value) {
  this.set_display_refresh_rate(new_value);
}
get render_target_size_multiplier () {
  return this.get_render_target_size_multiplier();
}
set render_target_size_multiplier (new_value) {
  this.set_render_target_size_multiplier(new_value);
}
get foveation_level () {
  return this.get_foveation_level();
}
set foveation_level (new_value) {
  this.set_foveation_level(new_value);
}
get foveation_dynamic () {
  return this.get_foveation_dynamic();
}
set foveation_dynamic (new_value) {
  this.set_foveation_dynamic(new_value);
}
get vrs_min_radius () {
  return this.get_vrs_min_radius();
}
set vrs_min_radius (new_value) {
  this.set_vrs_min_radius(new_value);
}
get vrs_strength () {
  return this.get_vrs_strength();
}
set vrs_strength (new_value) {
  this.set_vrs_strength(new_value);
}

  static Hand = {
    HAND_LEFT: 0,
    HAND_RIGHT: 1,
    HAND_MAX: 2,
  }
  static HandMotionRange = {
    HAND_MOTION_RANGE_UNOBSTRUCTED: 0,
    HAND_MOTION_RANGE_CONFORM_TO_CONTROLLER: 1,
    HAND_MOTION_RANGE_MAX: 2,
  }
  static HandTrackedSource = {
    HAND_TRACKED_SOURCE_UNKNOWN: 0,
    HAND_TRACKED_SOURCE_UNOBSTRUCTED: 1,
    HAND_TRACKED_SOURCE_CONTROLLER: 2,
    HAND_TRACKED_SOURCE_MAX: 3,
  }
  static HandJoints = {
    HAND_JOINT_PALM: 0,
    HAND_JOINT_WRIST: 1,
    HAND_JOINT_THUMB_METACARPAL: 2,
    HAND_JOINT_THUMB_PROXIMAL: 3,
    HAND_JOINT_THUMB_DISTAL: 4,
    HAND_JOINT_THUMB_TIP: 5,
    HAND_JOINT_INDEX_METACARPAL: 6,
    HAND_JOINT_INDEX_PROXIMAL: 7,
    HAND_JOINT_INDEX_INTERMEDIATE: 8,
    HAND_JOINT_INDEX_DISTAL: 9,
    HAND_JOINT_INDEX_TIP: 10,
    HAND_JOINT_MIDDLE_METACARPAL: 11,
    HAND_JOINT_MIDDLE_PROXIMAL: 12,
    HAND_JOINT_MIDDLE_INTERMEDIATE: 13,
    HAND_JOINT_MIDDLE_DISTAL: 14,
    HAND_JOINT_MIDDLE_TIP: 15,
    HAND_JOINT_RING_METACARPAL: 16,
    HAND_JOINT_RING_PROXIMAL: 17,
    HAND_JOINT_RING_INTERMEDIATE: 18,
    HAND_JOINT_RING_DISTAL: 19,
    HAND_JOINT_RING_TIP: 20,
    HAND_JOINT_LITTLE_METACARPAL: 21,
    HAND_JOINT_LITTLE_PROXIMAL: 22,
    HAND_JOINT_LITTLE_INTERMEDIATE: 23,
    HAND_JOINT_LITTLE_DISTAL: 24,
    HAND_JOINT_LITTLE_TIP: 25,
    HAND_JOINT_MAX: 26,
  }
  static HandJointFlags = {
    HAND_JOINT_NONE: 0,
    HAND_JOINT_ORIENTATION_VALID: 1,
    HAND_JOINT_ORIENTATION_TRACKED: 2,
    HAND_JOINT_POSITION_VALID: 4,
    HAND_JOINT_POSITION_TRACKED: 8,
    HAND_JOINT_LINEAR_VELOCITY_VALID: 16,
    HAND_JOINT_ANGULAR_VELOCITY_VALID: 32,
  }
}