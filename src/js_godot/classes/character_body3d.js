import * as internal from '__internal__';
import { Vector3 } from 'src/js_godot/variant/vector3'
import { PhysicsBody3D } from 'src/js_godot/classes/physics_body3d'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_move_and_slide;
    method_apply_floor_snap;
    method_set_velocity;
    method_get_velocity;
    method_set_safe_margin;
    method_get_safe_margin;
    method_is_floor_stop_on_slope_enabled;
    method_set_floor_stop_on_slope_enabled;
    method_set_floor_constant_speed_enabled;
    method_is_floor_constant_speed_enabled;
    method_set_floor_block_on_wall_enabled;
    method_is_floor_block_on_wall_enabled;
    method_set_slide_on_ceiling_enabled;
    method_is_slide_on_ceiling_enabled;
    method_set_platform_floor_layers;
    method_get_platform_floor_layers;
    method_set_platform_wall_layers;
    method_get_platform_wall_layers;
    method_get_max_slides;
    method_set_max_slides;
    method_get_floor_max_angle;
    method_set_floor_max_angle;
    method_get_floor_snap_length;
    method_set_floor_snap_length;
    method_get_wall_min_slide_angle;
    method_set_wall_min_slide_angle;
    method_get_up_direction;
    method_set_up_direction;
    method_set_motion_mode;
    method_get_motion_mode;
    method_set_platform_on_leave;
    method_get_platform_on_leave;
    method_is_on_floor;
    method_is_on_floor_only;
    method_is_on_ceiling;
    method_is_on_ceiling_only;
    method_is_on_wall;
    method_is_on_wall_only;
    method_get_floor_normal;
    method_get_wall_normal;
    method_get_last_motion;
    method_get_position_delta;
    method_get_real_velocity;
    method_get_floor_angle;
    method_get_platform_velocity;
    method_get_platform_angular_velocity;
    method_get_slide_collision_count;
    method_get_slide_collision;
    method_get_last_slide_collision;
}


export class CharacterBody3D extends PhysicsBody3D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("CharacterBody3D");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("CharacterBody3D");
        let methodname = new StringName("move_and_slide");
        this._bindings.method_move_and_slide = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2240911060
        );
      }
      {
        let classname = new StringName("CharacterBody3D");
        let methodname = new StringName("apply_floor_snap");
        this._bindings.method_apply_floor_snap = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3218959716
        );
      }
      {
        let classname = new StringName("CharacterBody3D");
        let methodname = new StringName("set_velocity");
        this._bindings.method_set_velocity = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3460891852
        );
      }
      {
        let classname = new StringName("CharacterBody3D");
        let methodname = new StringName("get_velocity");
        this._bindings.method_get_velocity = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3360562783
        );
      }
      {
        let classname = new StringName("CharacterBody3D");
        let methodname = new StringName("set_safe_margin");
        this._bindings.method_set_safe_margin = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("CharacterBody3D");
        let methodname = new StringName("get_safe_margin");
        this._bindings.method_get_safe_margin = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("CharacterBody3D");
        let methodname = new StringName("is_floor_stop_on_slope_enabled");
        this._bindings.method_is_floor_stop_on_slope_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("CharacterBody3D");
        let methodname = new StringName("set_floor_stop_on_slope_enabled");
        this._bindings.method_set_floor_stop_on_slope_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("CharacterBody3D");
        let methodname = new StringName("set_floor_constant_speed_enabled");
        this._bindings.method_set_floor_constant_speed_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("CharacterBody3D");
        let methodname = new StringName("is_floor_constant_speed_enabled");
        this._bindings.method_is_floor_constant_speed_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("CharacterBody3D");
        let methodname = new StringName("set_floor_block_on_wall_enabled");
        this._bindings.method_set_floor_block_on_wall_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("CharacterBody3D");
        let methodname = new StringName("is_floor_block_on_wall_enabled");
        this._bindings.method_is_floor_block_on_wall_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("CharacterBody3D");
        let methodname = new StringName("set_slide_on_ceiling_enabled");
        this._bindings.method_set_slide_on_ceiling_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("CharacterBody3D");
        let methodname = new StringName("is_slide_on_ceiling_enabled");
        this._bindings.method_is_slide_on_ceiling_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("CharacterBody3D");
        let methodname = new StringName("set_platform_floor_layers");
        this._bindings.method_set_platform_floor_layers = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("CharacterBody3D");
        let methodname = new StringName("get_platform_floor_layers");
        this._bindings.method_get_platform_floor_layers = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("CharacterBody3D");
        let methodname = new StringName("set_platform_wall_layers");
        this._bindings.method_set_platform_wall_layers = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("CharacterBody3D");
        let methodname = new StringName("get_platform_wall_layers");
        this._bindings.method_get_platform_wall_layers = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("CharacterBody3D");
        let methodname = new StringName("get_max_slides");
        this._bindings.method_get_max_slides = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("CharacterBody3D");
        let methodname = new StringName("set_max_slides");
        this._bindings.method_set_max_slides = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("CharacterBody3D");
        let methodname = new StringName("get_floor_max_angle");
        this._bindings.method_get_floor_max_angle = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("CharacterBody3D");
        let methodname = new StringName("set_floor_max_angle");
        this._bindings.method_set_floor_max_angle = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("CharacterBody3D");
        let methodname = new StringName("get_floor_snap_length");
        this._bindings.method_get_floor_snap_length = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          191475506
        );
      }
      {
        let classname = new StringName("CharacterBody3D");
        let methodname = new StringName("set_floor_snap_length");
        this._bindings.method_set_floor_snap_length = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("CharacterBody3D");
        let methodname = new StringName("get_wall_min_slide_angle");
        this._bindings.method_get_wall_min_slide_angle = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("CharacterBody3D");
        let methodname = new StringName("set_wall_min_slide_angle");
        this._bindings.method_set_wall_min_slide_angle = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("CharacterBody3D");
        let methodname = new StringName("get_up_direction");
        this._bindings.method_get_up_direction = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3360562783
        );
      }
      {
        let classname = new StringName("CharacterBody3D");
        let methodname = new StringName("set_up_direction");
        this._bindings.method_set_up_direction = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3460891852
        );
      }
      {
        let classname = new StringName("CharacterBody3D");
        let methodname = new StringName("set_motion_mode");
        this._bindings.method_set_motion_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2690739026
        );
      }
      {
        let classname = new StringName("CharacterBody3D");
        let methodname = new StringName("get_motion_mode");
        this._bindings.method_get_motion_mode = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3529553604
        );
      }
      {
        let classname = new StringName("CharacterBody3D");
        let methodname = new StringName("set_platform_on_leave");
        this._bindings.method_set_platform_on_leave = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1459986142
        );
      }
      {
        let classname = new StringName("CharacterBody3D");
        let methodname = new StringName("get_platform_on_leave");
        this._bindings.method_get_platform_on_leave = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          996491171
        );
      }
      {
        let classname = new StringName("CharacterBody3D");
        let methodname = new StringName("is_on_floor");
        this._bindings.method_is_on_floor = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("CharacterBody3D");
        let methodname = new StringName("is_on_floor_only");
        this._bindings.method_is_on_floor_only = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("CharacterBody3D");
        let methodname = new StringName("is_on_ceiling");
        this._bindings.method_is_on_ceiling = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("CharacterBody3D");
        let methodname = new StringName("is_on_ceiling_only");
        this._bindings.method_is_on_ceiling_only = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("CharacterBody3D");
        let methodname = new StringName("is_on_wall");
        this._bindings.method_is_on_wall = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("CharacterBody3D");
        let methodname = new StringName("is_on_wall_only");
        this._bindings.method_is_on_wall_only = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("CharacterBody3D");
        let methodname = new StringName("get_floor_normal");
        this._bindings.method_get_floor_normal = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3360562783
        );
      }
      {
        let classname = new StringName("CharacterBody3D");
        let methodname = new StringName("get_wall_normal");
        this._bindings.method_get_wall_normal = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3360562783
        );
      }
      {
        let classname = new StringName("CharacterBody3D");
        let methodname = new StringName("get_last_motion");
        this._bindings.method_get_last_motion = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3360562783
        );
      }
      {
        let classname = new StringName("CharacterBody3D");
        let methodname = new StringName("get_position_delta");
        this._bindings.method_get_position_delta = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3360562783
        );
      }
      {
        let classname = new StringName("CharacterBody3D");
        let methodname = new StringName("get_real_velocity");
        this._bindings.method_get_real_velocity = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3360562783
        );
      }
      {
        let classname = new StringName("CharacterBody3D");
        let methodname = new StringName("get_floor_angle");
        this._bindings.method_get_floor_angle = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2906300789
        );
      }
      {
        let classname = new StringName("CharacterBody3D");
        let methodname = new StringName("get_platform_velocity");
        this._bindings.method_get_platform_velocity = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3360562783
        );
      }
      {
        let classname = new StringName("CharacterBody3D");
        let methodname = new StringName("get_platform_angular_velocity");
        this._bindings.method_get_platform_angular_velocity = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3360562783
        );
      }
      {
        let classname = new StringName("CharacterBody3D");
        let methodname = new StringName("get_slide_collision_count");
        this._bindings.method_get_slide_collision_count = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
      {
        let classname = new StringName("CharacterBody3D");
        let methodname = new StringName("get_slide_collision");
        this._bindings.method_get_slide_collision = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          107003663
        );
      }
      {
        let classname = new StringName("CharacterBody3D");
        let methodname = new StringName("get_last_slide_collision");
        this._bindings.method_get_last_slide_collision = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          186875014
        );
      }
  }
  move_and_slide() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_move_and_slide,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  apply_floor_snap() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_apply_floor_snap,
      this._owner,
      
    );
    
  }
  set_velocity(_velocity) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_velocity,
      this._owner,
      _velocity
    );
    
  }
  get_velocity() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_velocity,
      this._owner,
			Variant.Type.VECTOR3
    ,
      
    );
    
  }
  set_safe_margin(_margin) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_safe_margin,
      this._owner,
      _margin
    );
    
  }
  get_safe_margin() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_safe_margin,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  is_floor_stop_on_slope_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_floor_stop_on_slope_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_floor_stop_on_slope_enabled(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_floor_stop_on_slope_enabled,
      this._owner,
      _enabled
    );
    
  }
  set_floor_constant_speed_enabled(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_floor_constant_speed_enabled,
      this._owner,
      _enabled
    );
    
  }
  is_floor_constant_speed_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_floor_constant_speed_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_floor_block_on_wall_enabled(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_floor_block_on_wall_enabled,
      this._owner,
      _enabled
    );
    
  }
  is_floor_block_on_wall_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_floor_block_on_wall_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_slide_on_ceiling_enabled(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_slide_on_ceiling_enabled,
      this._owner,
      _enabled
    );
    
  }
  is_slide_on_ceiling_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_slide_on_ceiling_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_platform_floor_layers(_exclude_layer) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_platform_floor_layers,
      this._owner,
      _exclude_layer
    );
    
  }
  get_platform_floor_layers() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_platform_floor_layers,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_platform_wall_layers(_exclude_layer) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_platform_wall_layers,
      this._owner,
      _exclude_layer
    );
    
  }
  get_platform_wall_layers() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_platform_wall_layers,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  get_max_slides() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_max_slides,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_max_slides(_max_slides) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_max_slides,
      this._owner,
      _max_slides
    );
    
  }
  get_floor_max_angle() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_floor_max_angle,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_floor_max_angle(_radians) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_floor_max_angle,
      this._owner,
      _radians
    );
    
  }
  get_floor_snap_length() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_floor_snap_length,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_floor_snap_length(_floor_snap_length) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_floor_snap_length,
      this._owner,
      _floor_snap_length
    );
    
  }
  get_wall_min_slide_angle() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_wall_min_slide_angle,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_wall_min_slide_angle(_radians) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_wall_min_slide_angle,
      this._owner,
      _radians
    );
    
  }
  get_up_direction() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_up_direction,
      this._owner,
			Variant.Type.VECTOR3
    ,
      
    );
    
  }
  set_up_direction(_up_direction) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_up_direction,
      this._owner,
      _up_direction
    );
    
  }
  set_motion_mode(_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_motion_mode,
      this._owner,
      _mode
    );
    
  }
  get_motion_mode() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_motion_mode,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_platform_on_leave(_on_leave_apply_velocity) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_platform_on_leave,
      this._owner,
      _on_leave_apply_velocity
    );
    
  }
  get_platform_on_leave() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_platform_on_leave,
      this._owner,
			Variant.INT,
      
    );
    
  }
  is_on_floor() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_on_floor,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  is_on_floor_only() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_on_floor_only,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  is_on_ceiling() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_on_ceiling,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  is_on_ceiling_only() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_on_ceiling_only,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  is_on_wall() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_on_wall,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  is_on_wall_only() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_on_wall_only,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  get_floor_normal() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_floor_normal,
      this._owner,
			Variant.Type.VECTOR3
    ,
      
    );
    
  }
  get_wall_normal() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_wall_normal,
      this._owner,
			Variant.Type.VECTOR3
    ,
      
    );
    
  }
  get_last_motion() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_last_motion,
      this._owner,
			Variant.Type.VECTOR3
    ,
      
    );
    
  }
  get_position_delta() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_position_delta,
      this._owner,
			Variant.Type.VECTOR3
    ,
      
    );
    
  }
  get_real_velocity() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_real_velocity,
      this._owner,
			Variant.Type.VECTOR3
    ,
      
    );
    
  }
  get_floor_angle(_up_direction) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_floor_angle,
      this._owner,
			Variant.Type.FLOAT,
      _up_direction
    );
    
  }
  get_platform_velocity() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_platform_velocity,
      this._owner,
			Variant.Type.VECTOR3
    ,
      
    );
    
  }
  get_platform_angular_velocity() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_platform_angular_velocity,
      this._owner,
			Variant.Type.VECTOR3
    ,
      
    );
    
  }
  get_slide_collision_count() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_slide_collision_count,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  get_slide_collision(_slide_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_slide_collision,
      this._owner,
			Variant.INT,
      _slide_idx
    );
    
  }
  get_last_slide_collision() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_last_slide_collision,
      this._owner,
			Variant.INT,
      
    );
    
  }
  static MotionMode = {
    MOTION_MODE_GROUNDED: 0,
    MOTION_MODE_FLOATING: 1,
  }
  static PlatformOnLeave = {
    PLATFORM_ON_LEAVE_ADD_VELOCITY: 0,
    PLATFORM_ON_LEAVE_ADD_UPWARD_VELOCITY: 1,
    PLATFORM_ON_LEAVE_DO_NOTHING: 2,
  }
}