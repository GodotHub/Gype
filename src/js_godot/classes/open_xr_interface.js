import * as internal from '__internal__';
import { GDString } from 'src/js_godot/variant/gd_string'
import { GDArray } from 'src/js_godot/variant/gd_array'
import { Vector3 } from 'src/js_godot/variant/vector3'
import { XRInterface } from 'src/js_godot/classesxr_interface'
import { Quaternion } from 'src/js_godot/variant/quaternion'
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


export class OpenXRInterface extends XRInterface{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("OpenXRInterface");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("OpenXRInterface");
      let methodname = new StringName("get_display_refresh_rate");
      this._bindings.method_get_display_refresh_rate = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("OpenXRInterface");
      let methodname = new StringName("set_display_refresh_rate");
      this._bindings.method_set_display_refresh_rate = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("OpenXRInterface");
      let methodname = new StringName("get_render_target_size_multiplier");
      this._bindings.method_get_render_target_size_multiplier = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("OpenXRInterface");
      let methodname = new StringName("set_render_target_size_multiplier");
      this._bindings.method_set_render_target_size_multiplier = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("OpenXRInterface");
      let methodname = new StringName("is_foveation_supported");
      this._bindings.method_is_foveation_supported = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("OpenXRInterface");
      let methodname = new StringName("get_foveation_level");
      this._bindings.method_get_foveation_level = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("OpenXRInterface");
      let methodname = new StringName("set_foveation_level");
      this._bindings.method_set_foveation_level = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("OpenXRInterface");
      let methodname = new StringName("get_foveation_dynamic");
      this._bindings.method_get_foveation_dynamic = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("OpenXRInterface");
      let methodname = new StringName("set_foveation_dynamic");
      this._bindings.method_set_foveation_dynamic = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("OpenXRInterface");
      let methodname = new StringName("is_action_set_active");
      this._bindings.method_is_action_set_active = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3927539163
      );
    }
    {
      let classname = new StringName("OpenXRInterface");
      let methodname = new StringName("set_action_set_active");
      this._bindings.method_set_action_set_active = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2678287736
      );
    }
    {
      let classname = new StringName("OpenXRInterface");
      let methodname = new StringName("get_action_sets");
      this._bindings.method_get_action_sets = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3995934104
      );
    }
    {
      let classname = new StringName("OpenXRInterface");
      let methodname = new StringName("get_available_display_refresh_rates");
      this._bindings.method_get_available_display_refresh_rates = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3995934104
      );
    }
    {
      let classname = new StringName("OpenXRInterface");
      let methodname = new StringName("set_motion_range");
      this._bindings.method_set_motion_range = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        855158159
      );
    }
    {
      let classname = new StringName("OpenXRInterface");
      let methodname = new StringName("get_motion_range");
      this._bindings.method_get_motion_range = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3955838114
      );
    }
    {
      let classname = new StringName("OpenXRInterface");
      let methodname = new StringName("get_hand_tracking_source");
      this._bindings.method_get_hand_tracking_source = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4092421202
      );
    }
    {
      let classname = new StringName("OpenXRInterface");
      let methodname = new StringName("get_hand_joint_flags");
      this._bindings.method_get_hand_joint_flags = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        720567706
      );
    }
    {
      let classname = new StringName("OpenXRInterface");
      let methodname = new StringName("get_hand_joint_rotation");
      this._bindings.method_get_hand_joint_rotation = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1974618321
      );
    }
    {
      let classname = new StringName("OpenXRInterface");
      let methodname = new StringName("get_hand_joint_position");
      this._bindings.method_get_hand_joint_position = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3529194242
      );
    }
    {
      let classname = new StringName("OpenXRInterface");
      let methodname = new StringName("get_hand_joint_radius");
      this._bindings.method_get_hand_joint_radius = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        901522724
      );
    }
    {
      let classname = new StringName("OpenXRInterface");
      let methodname = new StringName("get_hand_joint_linear_velocity");
      this._bindings.method_get_hand_joint_linear_velocity = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3529194242
      );
    }
    {
      let classname = new StringName("OpenXRInterface");
      let methodname = new StringName("get_hand_joint_angular_velocity");
      this._bindings.method_get_hand_joint_angular_velocity = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3529194242
      );
    }
    {
      let classname = new StringName("OpenXRInterface");
      let methodname = new StringName("is_hand_tracking_supported");
      this._bindings.method_is_hand_tracking_supported = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2240911060
      );
    }
    {
      let classname = new StringName("OpenXRInterface");
      let methodname = new StringName("is_hand_interaction_supported");
      this._bindings.method_is_hand_interaction_supported = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("OpenXRInterface");
      let methodname = new StringName("is_eye_gaze_interaction_supported");
      this._bindings.method_is_eye_gaze_interaction_supported = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2240911060
      );
    }
    {
      let classname = new StringName("OpenXRInterface");
      let methodname = new StringName("get_vrs_min_radius");
      this._bindings.method_get_vrs_min_radius = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("OpenXRInterface");
      let methodname = new StringName("set_vrs_min_radius");
      this._bindings.method_set_vrs_min_radius = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("OpenXRInterface");
      let methodname = new StringName("get_vrs_strength");
      this._bindings.method_get_vrs_strength = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
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
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_display_refresh_rate,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_display_refresh_rate(_refresh_rate) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_display_refresh_rate,
      this._owner,
      _refresh_rate
    );
  }
  get_render_target_size_multiplier() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_render_target_size_multiplier,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_render_target_size_multiplier(_multiplier) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_render_target_size_multiplier,
      this._owner,
      _multiplier
    );
  }
  is_foveation_supported() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_foveation_supported,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  get_foveation_level() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_foveation_level,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  set_foveation_level(_foveation_level) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_foveation_level,
      this._owner,
      _foveation_level
    );
  }
  get_foveation_dynamic() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_foveation_dynamic,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_foveation_dynamic(_foveation_dynamic) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_foveation_dynamic,
      this._owner,
      _foveation_dynamic
    );
  }
  is_action_set_active(_name) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_action_set_active,
      this._owner,
			Variant.Type.BOOL,
      _name
    );
  }
  set_action_set_active(_name, _active) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_action_set_active,
      this._owner,
      _name, _active
    );
  }
  get_action_sets() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_action_sets,
      this._owner,
			Variant.Type.ARRAY
    ,
      
    );
  }
  get_available_display_refresh_rates() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_available_display_refresh_rates,
      this._owner,
			Variant.Type.ARRAY
    ,
      
    );
  }
  set_motion_range(_hand, _motion_range) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_motion_range,
      this._owner,
      _hand, _motion_range
    );
  }
  get_motion_range(_hand) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_motion_range,
      this._owner,
			Variant.INT,
      _hand
    );
  }
  get_hand_tracking_source(_hand) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_hand_tracking_source,
      this._owner,
			Variant.INT,
      _hand
    );
  }
  get_hand_joint_flags(_hand, _joint) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_hand_joint_flags,
      this._owner,
			Variant.INT,
      _hand, _joint
    );
  }
  get_hand_joint_rotation(_hand, _joint) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_hand_joint_rotation,
      this._owner,
			Variant.Type.QUATERNION
    ,
      _hand, _joint
    );
  }
  get_hand_joint_position(_hand, _joint) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_hand_joint_position,
      this._owner,
			Variant.Type.VECTOR3
    ,
      _hand, _joint
    );
  }
  get_hand_joint_radius(_hand, _joint) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_hand_joint_radius,
      this._owner,
			Variant.Type.FLOAT,
      _hand, _joint
    );
  }
  get_hand_joint_linear_velocity(_hand, _joint) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_hand_joint_linear_velocity,
      this._owner,
			Variant.Type.VECTOR3
    ,
      _hand, _joint
    );
  }
  get_hand_joint_angular_velocity(_hand, _joint) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_hand_joint_angular_velocity,
      this._owner,
			Variant.Type.VECTOR3
    ,
      _hand, _joint
    );
  }
  is_hand_tracking_supported() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_hand_tracking_supported,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  is_hand_interaction_supported() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_hand_interaction_supported,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  is_eye_gaze_interaction_supported() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_eye_gaze_interaction_supported,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  get_vrs_min_radius() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_vrs_min_radius,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_vrs_min_radius(_radius) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_vrs_min_radius,
      this._owner,
      _radius
    );
  }
  get_vrs_strength() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_vrs_strength,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_vrs_strength(_strength) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_vrs_strength,
      this._owner,
      _strength
    );
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