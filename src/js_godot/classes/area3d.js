import * as internal from '__internal__';
import { CollisionObject3D } from 'src/js_godot/classes/collision_object3d'
import { StringName } from 'src/js_godot/variant/string_name'
import { Vector3 } from 'src/js_godot/variant/vector3'
import { NodePath } from 'src/js_godot/variant/node_path'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_set_gravity_space_override_mode;
    method_get_gravity_space_override_mode;
    method_set_gravity_is_point;
    method_is_gravity_a_point;
    method_set_gravity_point_unit_distance;
    method_get_gravity_point_unit_distance;
    method_set_gravity_point_center;
    method_get_gravity_point_center;
    method_set_gravity_direction;
    method_get_gravity_direction;
    method_set_gravity;
    method_get_gravity;
    method_set_linear_damp_space_override_mode;
    method_get_linear_damp_space_override_mode;
    method_set_angular_damp_space_override_mode;
    method_get_angular_damp_space_override_mode;
    method_set_angular_damp;
    method_get_angular_damp;
    method_set_linear_damp;
    method_get_linear_damp;
    method_set_priority;
    method_get_priority;
    method_set_wind_force_magnitude;
    method_get_wind_force_magnitude;
    method_set_wind_attenuation_factor;
    method_get_wind_attenuation_factor;
    method_set_wind_source_path;
    method_get_wind_source_path;
    method_set_monitorable;
    method_is_monitorable;
    method_set_monitoring;
    method_is_monitoring;
    method_get_overlapping_bodies;
    method_get_overlapping_areas;
    method_has_overlapping_bodies;
    method_has_overlapping_areas;
    method_overlaps_body;
    method_overlaps_area;
    method_set_audio_bus_override;
    method_is_overriding_audio_bus;
    method_set_audio_bus_name;
    method_get_audio_bus_name;
    method_set_use_reverb_bus;
    method_is_using_reverb_bus;
    method_set_reverb_bus_name;
    method_get_reverb_bus_name;
    method_set_reverb_amount;
    method_get_reverb_amount;
    method_set_reverb_uniformity;
    method_get_reverb_uniformity;
}


export class Area3D extends CollisionObject3D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("Area3D");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("Area3D");
        let methodname = new StringName("set_gravity_space_override_mode");
        this._bindings.method_set_gravity_space_override_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2311433571
        );
      }
      {
        let classname = new StringName("Area3D");
        let methodname = new StringName("get_gravity_space_override_mode");
        this._bindings.method_get_gravity_space_override_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          958191869
        );
      }
      {
        let classname = new StringName("Area3D");
        let methodname = new StringName("set_gravity_is_point");
        this._bindings.method_set_gravity_is_point = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("Area3D");
        let methodname = new StringName("is_gravity_a_point");
        this._bindings.method_is_gravity_a_point = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("Area3D");
        let methodname = new StringName("set_gravity_point_unit_distance");
        this._bindings.method_set_gravity_point_unit_distance = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("Area3D");
        let methodname = new StringName("get_gravity_point_unit_distance");
        this._bindings.method_get_gravity_point_unit_distance = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("Area3D");
        let methodname = new StringName("set_gravity_point_center");
        this._bindings.method_set_gravity_point_center = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3460891852
        );
      }
      {
        let classname = new StringName("Area3D");
        let methodname = new StringName("get_gravity_point_center");
        this._bindings.method_get_gravity_point_center = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3360562783
        );
      }
      {
        let classname = new StringName("Area3D");
        let methodname = new StringName("set_gravity_direction");
        this._bindings.method_set_gravity_direction = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3460891852
        );
      }
      {
        let classname = new StringName("Area3D");
        let methodname = new StringName("get_gravity_direction");
        this._bindings.method_get_gravity_direction = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3360562783
        );
      }
      {
        let classname = new StringName("Area3D");
        let methodname = new StringName("set_gravity");
        this._bindings.method_set_gravity = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("Area3D");
        let methodname = new StringName("get_gravity");
        this._bindings.method_get_gravity = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("Area3D");
        let methodname = new StringName("set_linear_damp_space_override_mode");
        this._bindings.method_set_linear_damp_space_override_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2311433571
        );
      }
      {
        let classname = new StringName("Area3D");
        let methodname = new StringName("get_linear_damp_space_override_mode");
        this._bindings.method_get_linear_damp_space_override_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          958191869
        );
      }
      {
        let classname = new StringName("Area3D");
        let methodname = new StringName("set_angular_damp_space_override_mode");
        this._bindings.method_set_angular_damp_space_override_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2311433571
        );
      }
      {
        let classname = new StringName("Area3D");
        let methodname = new StringName("get_angular_damp_space_override_mode");
        this._bindings.method_get_angular_damp_space_override_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          958191869
        );
      }
      {
        let classname = new StringName("Area3D");
        let methodname = new StringName("set_angular_damp");
        this._bindings.method_set_angular_damp = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("Area3D");
        let methodname = new StringName("get_angular_damp");
        this._bindings.method_get_angular_damp = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("Area3D");
        let methodname = new StringName("set_linear_damp");
        this._bindings.method_set_linear_damp = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("Area3D");
        let methodname = new StringName("get_linear_damp");
        this._bindings.method_get_linear_damp = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("Area3D");
        let methodname = new StringName("set_priority");
        this._bindings.method_set_priority = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("Area3D");
        let methodname = new StringName("get_priority");
        this._bindings.method_get_priority = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("Area3D");
        let methodname = new StringName("set_wind_force_magnitude");
        this._bindings.method_set_wind_force_magnitude = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("Area3D");
        let methodname = new StringName("get_wind_force_magnitude");
        this._bindings.method_get_wind_force_magnitude = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("Area3D");
        let methodname = new StringName("set_wind_attenuation_factor");
        this._bindings.method_set_wind_attenuation_factor = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("Area3D");
        let methodname = new StringName("get_wind_attenuation_factor");
        this._bindings.method_get_wind_attenuation_factor = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("Area3D");
        let methodname = new StringName("set_wind_source_path");
        this._bindings.method_set_wind_source_path = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1348162250
        );
      }
      {
        let classname = new StringName("Area3D");
        let methodname = new StringName("get_wind_source_path");
        this._bindings.method_get_wind_source_path = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          4075236667
        );
      }
      {
        let classname = new StringName("Area3D");
        let methodname = new StringName("set_monitorable");
        this._bindings.method_set_monitorable = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("Area3D");
        let methodname = new StringName("is_monitorable");
        this._bindings.method_is_monitorable = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("Area3D");
        let methodname = new StringName("set_monitoring");
        this._bindings.method_set_monitoring = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("Area3D");
        let methodname = new StringName("is_monitoring");
        this._bindings.method_is_monitoring = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("Area3D");
        let methodname = new StringName("get_overlapping_bodies");
        this._bindings.method_get_overlapping_bodies = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3995934104
        );
      }
      {
        let classname = new StringName("Area3D");
        let methodname = new StringName("get_overlapping_areas");
        this._bindings.method_get_overlapping_areas = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3995934104
        );
      }
      {
        let classname = new StringName("Area3D");
        let methodname = new StringName("has_overlapping_bodies");
        this._bindings.method_has_overlapping_bodies = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("Area3D");
        let methodname = new StringName("has_overlapping_areas");
        this._bindings.method_has_overlapping_areas = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("Area3D");
        let methodname = new StringName("overlaps_body");
        this._bindings.method_overlaps_body = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3093956946
        );
      }
      {
        let classname = new StringName("Area3D");
        let methodname = new StringName("overlaps_area");
        this._bindings.method_overlaps_area = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3093956946
        );
      }
      {
        let classname = new StringName("Area3D");
        let methodname = new StringName("set_audio_bus_override");
        this._bindings.method_set_audio_bus_override = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("Area3D");
        let methodname = new StringName("is_overriding_audio_bus");
        this._bindings.method_is_overriding_audio_bus = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("Area3D");
        let methodname = new StringName("set_audio_bus_name");
        this._bindings.method_set_audio_bus_name = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3304788590
        );
      }
      {
        let classname = new StringName("Area3D");
        let methodname = new StringName("get_audio_bus_name");
        this._bindings.method_get_audio_bus_name = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2002593661
        );
      }
      {
        let classname = new StringName("Area3D");
        let methodname = new StringName("set_use_reverb_bus");
        this._bindings.method_set_use_reverb_bus = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("Area3D");
        let methodname = new StringName("is_using_reverb_bus");
        this._bindings.method_is_using_reverb_bus = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("Area3D");
        let methodname = new StringName("set_reverb_bus_name");
        this._bindings.method_set_reverb_bus_name = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3304788590
        );
      }
      {
        let classname = new StringName("Area3D");
        let methodname = new StringName("get_reverb_bus_name");
        this._bindings.method_get_reverb_bus_name = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2002593661
        );
      }
      {
        let classname = new StringName("Area3D");
        let methodname = new StringName("set_reverb_amount");
        this._bindings.method_set_reverb_amount = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("Area3D");
        let methodname = new StringName("get_reverb_amount");
        this._bindings.method_get_reverb_amount = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("Area3D");
        let methodname = new StringName("set_reverb_uniformity");
        this._bindings.method_set_reverb_uniformity = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("Area3D");
        let methodname = new StringName("get_reverb_uniformity");
        this._bindings.method_get_reverb_uniformity = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
  }
  set_gravity_space_override_mode(_space_override_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_gravity_space_override_mode,
      this._owner,
      _space_override_mode
    );
    
  }
  get_gravity_space_override_mode() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_gravity_space_override_mode,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_gravity_is_point(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_gravity_is_point,
      this._owner,
      _enable
    );
    
  }
  is_gravity_a_point() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_gravity_a_point,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_gravity_point_unit_distance(_distance_scale) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_gravity_point_unit_distance,
      this._owner,
      _distance_scale
    );
    
  }
  get_gravity_point_unit_distance() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_gravity_point_unit_distance,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_gravity_point_center(_center) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_gravity_point_center,
      this._owner,
      _center
    );
    
  }
  get_gravity_point_center() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_gravity_point_center,
      this._owner,
			Variant.Type.VECTOR3
    ,
      
    );
    
  }
  set_gravity_direction(_direction) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_gravity_direction,
      this._owner,
      _direction
    );
    
  }
  get_gravity_direction() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_gravity_direction,
      this._owner,
			Variant.Type.VECTOR3
    ,
      
    );
    
  }
  set_gravity(_gravity) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_gravity,
      this._owner,
      _gravity
    );
    
  }
  get_gravity() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_gravity,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_linear_damp_space_override_mode(_space_override_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_linear_damp_space_override_mode,
      this._owner,
      _space_override_mode
    );
    
  }
  get_linear_damp_space_override_mode() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_linear_damp_space_override_mode,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_angular_damp_space_override_mode(_space_override_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_angular_damp_space_override_mode,
      this._owner,
      _space_override_mode
    );
    
  }
  get_angular_damp_space_override_mode() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_angular_damp_space_override_mode,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_angular_damp(_angular_damp) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_angular_damp,
      this._owner,
      _angular_damp
    );
    
  }
  get_angular_damp() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_angular_damp,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_linear_damp(_linear_damp) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_linear_damp,
      this._owner,
      _linear_damp
    );
    
  }
  get_linear_damp() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_linear_damp,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_priority(_priority) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_priority,
      this._owner,
      _priority
    );
    
  }
  get_priority() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_priority,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_wind_force_magnitude(_wind_force_magnitude) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_wind_force_magnitude,
      this._owner,
      _wind_force_magnitude
    );
    
  }
  get_wind_force_magnitude() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_wind_force_magnitude,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_wind_attenuation_factor(_wind_attenuation_factor) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_wind_attenuation_factor,
      this._owner,
      _wind_attenuation_factor
    );
    
  }
  get_wind_attenuation_factor() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_wind_attenuation_factor,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_wind_source_path(_wind_source_path) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_wind_source_path,
      this._owner,
      _wind_source_path
    );
    
  }
  get_wind_source_path() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_wind_source_path,
      this._owner,
			Variant.Type.NODE_PATH
    ,
      
    );
    
  }
  set_monitorable(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_monitorable,
      this._owner,
      _enable
    );
    
  }
  is_monitorable() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_monitorable,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_monitoring(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_monitoring,
      this._owner,
      _enable
    );
    
  }
  is_monitoring() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_monitoring,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  get_overlapping_bodies() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_overlapping_bodies,
      this._owner,
			Variant.INT,
      
    );
    
  }
  get_overlapping_areas() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_overlapping_areas,
      this._owner,
			Variant.INT,
      
    );
    
  }
  has_overlapping_bodies() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_has_overlapping_bodies,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  has_overlapping_areas() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_has_overlapping_areas,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  overlaps_body(_body) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_overlaps_body,
      this._owner,
			Variant.Type.BOOL,
      _body
    );
    
  }
  overlaps_area(_area) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_overlaps_area,
      this._owner,
			Variant.Type.BOOL,
      _area
    );
    
  }
  set_audio_bus_override(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_audio_bus_override,
      this._owner,
      _enable
    );
    
  }
  is_overriding_audio_bus() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_overriding_audio_bus,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_audio_bus_name(_name) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_audio_bus_name,
      this._owner,
      _name
    );
    
  }
  get_audio_bus_name() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_audio_bus_name,
      this._owner,
			Variant.Type.STRING_NAME
    ,
      
    );
    
  }
  set_use_reverb_bus(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_use_reverb_bus,
      this._owner,
      _enable
    );
    
  }
  is_using_reverb_bus() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_using_reverb_bus,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_reverb_bus_name(_name) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_reverb_bus_name,
      this._owner,
      _name
    );
    
  }
  get_reverb_bus_name() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_reverb_bus_name,
      this._owner,
			Variant.Type.STRING_NAME
    ,
      
    );
    
  }
  set_reverb_amount(_amount) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_reverb_amount,
      this._owner,
      _amount
    );
    
  }
  get_reverb_amount() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_reverb_amount,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_reverb_uniformity(_amount) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_reverb_uniformity,
      this._owner,
      _amount
    );
    
  }
  get_reverb_uniformity() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_reverb_uniformity,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  static SpaceOverride = {
    SPACE_OVERRIDE_DISABLED: 0,
    SPACE_OVERRIDE_COMBINE: 1,
    SPACE_OVERRIDE_COMBINE_REPLACE: 2,
    SPACE_OVERRIDE_REPLACE: 3,
    SPACE_OVERRIDE_REPLACE_COMBINE: 4,
  }
}