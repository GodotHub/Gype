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
@GodotClass
export class CharacterBody3D extends PhysicsBody3D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("CharacterBody3D");
    } else {
      super(godot_object);
    }
  }
  static init_method_move_and_slide() {
    if (!this._bindings.method_move_and_slide) {
      let classname = new StringName("CharacterBody3D");
      let methodname = new StringName("move_and_slide");
      this._bindings.method_move_and_slide = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2240911060
      );
    }
  }
  static init_method_apply_floor_snap() {
    if (!this._bindings.method_apply_floor_snap) {
      let classname = new StringName("CharacterBody3D");
      let methodname = new StringName("apply_floor_snap");
      this._bindings.method_apply_floor_snap = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_set_velocity() {
    if (!this._bindings.method_set_velocity) {
      let classname = new StringName("CharacterBody3D");
      let methodname = new StringName("set_velocity");
      this._bindings.method_set_velocity = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3460891852
      );
    }
  }
  static init_method_get_velocity() {
    if (!this._bindings.method_get_velocity) {
      let classname = new StringName("CharacterBody3D");
      let methodname = new StringName("get_velocity");
      this._bindings.method_get_velocity = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3360562783
      );
    }
  }
  static init_method_set_safe_margin() {
    if (!this._bindings.method_set_safe_margin) {
      let classname = new StringName("CharacterBody3D");
      let methodname = new StringName("set_safe_margin");
      this._bindings.method_set_safe_margin = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_safe_margin() {
    if (!this._bindings.method_get_safe_margin) {
      let classname = new StringName("CharacterBody3D");
      let methodname = new StringName("get_safe_margin");
      this._bindings.method_get_safe_margin = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_is_floor_stop_on_slope_enabled() {
    if (!this._bindings.method_is_floor_stop_on_slope_enabled) {
      let classname = new StringName("CharacterBody3D");
      let methodname = new StringName("is_floor_stop_on_slope_enabled");
      this._bindings.method_is_floor_stop_on_slope_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_floor_stop_on_slope_enabled() {
    if (!this._bindings.method_set_floor_stop_on_slope_enabled) {
      let classname = new StringName("CharacterBody3D");
      let methodname = new StringName("set_floor_stop_on_slope_enabled");
      this._bindings.method_set_floor_stop_on_slope_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_set_floor_constant_speed_enabled() {
    if (!this._bindings.method_set_floor_constant_speed_enabled) {
      let classname = new StringName("CharacterBody3D");
      let methodname = new StringName("set_floor_constant_speed_enabled");
      this._bindings.method_set_floor_constant_speed_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_floor_constant_speed_enabled() {
    if (!this._bindings.method_is_floor_constant_speed_enabled) {
      let classname = new StringName("CharacterBody3D");
      let methodname = new StringName("is_floor_constant_speed_enabled");
      this._bindings.method_is_floor_constant_speed_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_floor_block_on_wall_enabled() {
    if (!this._bindings.method_set_floor_block_on_wall_enabled) {
      let classname = new StringName("CharacterBody3D");
      let methodname = new StringName("set_floor_block_on_wall_enabled");
      this._bindings.method_set_floor_block_on_wall_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_floor_block_on_wall_enabled() {
    if (!this._bindings.method_is_floor_block_on_wall_enabled) {
      let classname = new StringName("CharacterBody3D");
      let methodname = new StringName("is_floor_block_on_wall_enabled");
      this._bindings.method_is_floor_block_on_wall_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_slide_on_ceiling_enabled() {
    if (!this._bindings.method_set_slide_on_ceiling_enabled) {
      let classname = new StringName("CharacterBody3D");
      let methodname = new StringName("set_slide_on_ceiling_enabled");
      this._bindings.method_set_slide_on_ceiling_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_slide_on_ceiling_enabled() {
    if (!this._bindings.method_is_slide_on_ceiling_enabled) {
      let classname = new StringName("CharacterBody3D");
      let methodname = new StringName("is_slide_on_ceiling_enabled");
      this._bindings.method_is_slide_on_ceiling_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_platform_floor_layers() {
    if (!this._bindings.method_set_platform_floor_layers) {
      let classname = new StringName("CharacterBody3D");
      let methodname = new StringName("set_platform_floor_layers");
      this._bindings.method_set_platform_floor_layers = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_platform_floor_layers() {
    if (!this._bindings.method_get_platform_floor_layers) {
      let classname = new StringName("CharacterBody3D");
      let methodname = new StringName("get_platform_floor_layers");
      this._bindings.method_get_platform_floor_layers = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_platform_wall_layers() {
    if (!this._bindings.method_set_platform_wall_layers) {
      let classname = new StringName("CharacterBody3D");
      let methodname = new StringName("set_platform_wall_layers");
      this._bindings.method_set_platform_wall_layers = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_platform_wall_layers() {
    if (!this._bindings.method_get_platform_wall_layers) {
      let classname = new StringName("CharacterBody3D");
      let methodname = new StringName("get_platform_wall_layers");
      this._bindings.method_get_platform_wall_layers = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_get_max_slides() {
    if (!this._bindings.method_get_max_slides) {
      let classname = new StringName("CharacterBody3D");
      let methodname = new StringName("get_max_slides");
      this._bindings.method_get_max_slides = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_max_slides() {
    if (!this._bindings.method_set_max_slides) {
      let classname = new StringName("CharacterBody3D");
      let methodname = new StringName("set_max_slides");
      this._bindings.method_set_max_slides = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_floor_max_angle() {
    if (!this._bindings.method_get_floor_max_angle) {
      let classname = new StringName("CharacterBody3D");
      let methodname = new StringName("get_floor_max_angle");
      this._bindings.method_get_floor_max_angle = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_floor_max_angle() {
    if (!this._bindings.method_set_floor_max_angle) {
      let classname = new StringName("CharacterBody3D");
      let methodname = new StringName("set_floor_max_angle");
      this._bindings.method_set_floor_max_angle = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_floor_snap_length() {
    if (!this._bindings.method_get_floor_snap_length) {
      let classname = new StringName("CharacterBody3D");
      let methodname = new StringName("get_floor_snap_length");
      this._bindings.method_get_floor_snap_length = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        191475506
      );
    }
  }
  static init_method_set_floor_snap_length() {
    if (!this._bindings.method_set_floor_snap_length) {
      let classname = new StringName("CharacterBody3D");
      let methodname = new StringName("set_floor_snap_length");
      this._bindings.method_set_floor_snap_length = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_wall_min_slide_angle() {
    if (!this._bindings.method_get_wall_min_slide_angle) {
      let classname = new StringName("CharacterBody3D");
      let methodname = new StringName("get_wall_min_slide_angle");
      this._bindings.method_get_wall_min_slide_angle = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_wall_min_slide_angle() {
    if (!this._bindings.method_set_wall_min_slide_angle) {
      let classname = new StringName("CharacterBody3D");
      let methodname = new StringName("set_wall_min_slide_angle");
      this._bindings.method_set_wall_min_slide_angle = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_up_direction() {
    if (!this._bindings.method_get_up_direction) {
      let classname = new StringName("CharacterBody3D");
      let methodname = new StringName("get_up_direction");
      this._bindings.method_get_up_direction = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3360562783
      );
    }
  }
  static init_method_set_up_direction() {
    if (!this._bindings.method_set_up_direction) {
      let classname = new StringName("CharacterBody3D");
      let methodname = new StringName("set_up_direction");
      this._bindings.method_set_up_direction = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3460891852
      );
    }
  }
  static init_method_set_motion_mode() {
    if (!this._bindings.method_set_motion_mode) {
      let classname = new StringName("CharacterBody3D");
      let methodname = new StringName("set_motion_mode");
      this._bindings.method_set_motion_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2690739026
      );
    }
  }
  static init_method_get_motion_mode() {
    if (!this._bindings.method_get_motion_mode) {
      let classname = new StringName("CharacterBody3D");
      let methodname = new StringName("get_motion_mode");
      this._bindings.method_get_motion_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3529553604
      );
    }
  }
  static init_method_set_platform_on_leave() {
    if (!this._bindings.method_set_platform_on_leave) {
      let classname = new StringName("CharacterBody3D");
      let methodname = new StringName("set_platform_on_leave");
      this._bindings.method_set_platform_on_leave = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1459986142
      );
    }
  }
  static init_method_get_platform_on_leave() {
    if (!this._bindings.method_get_platform_on_leave) {
      let classname = new StringName("CharacterBody3D");
      let methodname = new StringName("get_platform_on_leave");
      this._bindings.method_get_platform_on_leave = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        996491171
      );
    }
  }
  static init_method_is_on_floor() {
    if (!this._bindings.method_is_on_floor) {
      let classname = new StringName("CharacterBody3D");
      let methodname = new StringName("is_on_floor");
      this._bindings.method_is_on_floor = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_is_on_floor_only() {
    if (!this._bindings.method_is_on_floor_only) {
      let classname = new StringName("CharacterBody3D");
      let methodname = new StringName("is_on_floor_only");
      this._bindings.method_is_on_floor_only = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_is_on_ceiling() {
    if (!this._bindings.method_is_on_ceiling) {
      let classname = new StringName("CharacterBody3D");
      let methodname = new StringName("is_on_ceiling");
      this._bindings.method_is_on_ceiling = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_is_on_ceiling_only() {
    if (!this._bindings.method_is_on_ceiling_only) {
      let classname = new StringName("CharacterBody3D");
      let methodname = new StringName("is_on_ceiling_only");
      this._bindings.method_is_on_ceiling_only = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_is_on_wall() {
    if (!this._bindings.method_is_on_wall) {
      let classname = new StringName("CharacterBody3D");
      let methodname = new StringName("is_on_wall");
      this._bindings.method_is_on_wall = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_is_on_wall_only() {
    if (!this._bindings.method_is_on_wall_only) {
      let classname = new StringName("CharacterBody3D");
      let methodname = new StringName("is_on_wall_only");
      this._bindings.method_is_on_wall_only = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_get_floor_normal() {
    if (!this._bindings.method_get_floor_normal) {
      let classname = new StringName("CharacterBody3D");
      let methodname = new StringName("get_floor_normal");
      this._bindings.method_get_floor_normal = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3360562783
      );
    }
  }
  static init_method_get_wall_normal() {
    if (!this._bindings.method_get_wall_normal) {
      let classname = new StringName("CharacterBody3D");
      let methodname = new StringName("get_wall_normal");
      this._bindings.method_get_wall_normal = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3360562783
      );
    }
  }
  static init_method_get_last_motion() {
    if (!this._bindings.method_get_last_motion) {
      let classname = new StringName("CharacterBody3D");
      let methodname = new StringName("get_last_motion");
      this._bindings.method_get_last_motion = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3360562783
      );
    }
  }
  static init_method_get_position_delta() {
    if (!this._bindings.method_get_position_delta) {
      let classname = new StringName("CharacterBody3D");
      let methodname = new StringName("get_position_delta");
      this._bindings.method_get_position_delta = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3360562783
      );
    }
  }
  static init_method_get_real_velocity() {
    if (!this._bindings.method_get_real_velocity) {
      let classname = new StringName("CharacterBody3D");
      let methodname = new StringName("get_real_velocity");
      this._bindings.method_get_real_velocity = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3360562783
      );
    }
  }
  static init_method_get_floor_angle() {
    if (!this._bindings.method_get_floor_angle) {
      let classname = new StringName("CharacterBody3D");
      let methodname = new StringName("get_floor_angle");
      this._bindings.method_get_floor_angle = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2906300789
      );
    }
  }
  static init_method_get_platform_velocity() {
    if (!this._bindings.method_get_platform_velocity) {
      let classname = new StringName("CharacterBody3D");
      let methodname = new StringName("get_platform_velocity");
      this._bindings.method_get_platform_velocity = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3360562783
      );
    }
  }
  static init_method_get_platform_angular_velocity() {
    if (!this._bindings.method_get_platform_angular_velocity) {
      let classname = new StringName("CharacterBody3D");
      let methodname = new StringName("get_platform_angular_velocity");
      this._bindings.method_get_platform_angular_velocity = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3360562783
      );
    }
  }
  static init_method_get_slide_collision_count() {
    if (!this._bindings.method_get_slide_collision_count) {
      let classname = new StringName("CharacterBody3D");
      let methodname = new StringName("get_slide_collision_count");
      this._bindings.method_get_slide_collision_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_get_slide_collision() {
    if (!this._bindings.method_get_slide_collision) {
      let classname = new StringName("CharacterBody3D");
      let methodname = new StringName("get_slide_collision");
      this._bindings.method_get_slide_collision = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        107003663
      );
    }
  }
  static init_method_get_last_slide_collision() {
    if (!this._bindings.method_get_last_slide_collision) {
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
    CharacterBody3D.init_method_move_and_slide();
    return _call_native_mb_ret(
      CharacterBody3D._bindings.method_move_and_slide,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  apply_floor_snap() {
    CharacterBody3D.init_method_apply_floor_snap();
    return _call_native_mb_no_ret(
      CharacterBody3D._bindings.method_apply_floor_snap,
      this._owner,
      
    );
    
  }
  set_velocity(_velocity) {
    CharacterBody3D.init_method_set_velocity();
    return _call_native_mb_no_ret(
      CharacterBody3D._bindings.method_set_velocity,
      this._owner,
      _velocity
    );
    
  }
  get_velocity() {
    CharacterBody3D.init_method_get_velocity();
    return _call_native_mb_ret(
      CharacterBody3D._bindings.method_get_velocity,
      this._owner,
			Variant.Type.VECTOR3,
    
      
    );
    
  }
  set_safe_margin(_margin) {
    CharacterBody3D.init_method_set_safe_margin();
    return _call_native_mb_no_ret(
      CharacterBody3D._bindings.method_set_safe_margin,
      this._owner,
      _margin
    );
    
  }
  get_safe_margin() {
    CharacterBody3D.init_method_get_safe_margin();
    return _call_native_mb_ret(
      CharacterBody3D._bindings.method_get_safe_margin,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  is_floor_stop_on_slope_enabled() {
    CharacterBody3D.init_method_is_floor_stop_on_slope_enabled();
    return _call_native_mb_ret(
      CharacterBody3D._bindings.method_is_floor_stop_on_slope_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_floor_stop_on_slope_enabled(_enabled) {
    CharacterBody3D.init_method_set_floor_stop_on_slope_enabled();
    return _call_native_mb_no_ret(
      CharacterBody3D._bindings.method_set_floor_stop_on_slope_enabled,
      this._owner,
      _enabled
    );
    
  }
  set_floor_constant_speed_enabled(_enabled) {
    CharacterBody3D.init_method_set_floor_constant_speed_enabled();
    return _call_native_mb_no_ret(
      CharacterBody3D._bindings.method_set_floor_constant_speed_enabled,
      this._owner,
      _enabled
    );
    
  }
  is_floor_constant_speed_enabled() {
    CharacterBody3D.init_method_is_floor_constant_speed_enabled();
    return _call_native_mb_ret(
      CharacterBody3D._bindings.method_is_floor_constant_speed_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_floor_block_on_wall_enabled(_enabled) {
    CharacterBody3D.init_method_set_floor_block_on_wall_enabled();
    return _call_native_mb_no_ret(
      CharacterBody3D._bindings.method_set_floor_block_on_wall_enabled,
      this._owner,
      _enabled
    );
    
  }
  is_floor_block_on_wall_enabled() {
    CharacterBody3D.init_method_is_floor_block_on_wall_enabled();
    return _call_native_mb_ret(
      CharacterBody3D._bindings.method_is_floor_block_on_wall_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_slide_on_ceiling_enabled(_enabled) {
    CharacterBody3D.init_method_set_slide_on_ceiling_enabled();
    return _call_native_mb_no_ret(
      CharacterBody3D._bindings.method_set_slide_on_ceiling_enabled,
      this._owner,
      _enabled
    );
    
  }
  is_slide_on_ceiling_enabled() {
    CharacterBody3D.init_method_is_slide_on_ceiling_enabled();
    return _call_native_mb_ret(
      CharacterBody3D._bindings.method_is_slide_on_ceiling_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_platform_floor_layers(_exclude_layer) {
    CharacterBody3D.init_method_set_platform_floor_layers();
    return _call_native_mb_no_ret(
      CharacterBody3D._bindings.method_set_platform_floor_layers,
      this._owner,
      _exclude_layer
    );
    
  }
  get_platform_floor_layers() {
    CharacterBody3D.init_method_get_platform_floor_layers();
    return _call_native_mb_ret(
      CharacterBody3D._bindings.method_get_platform_floor_layers,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_platform_wall_layers(_exclude_layer) {
    CharacterBody3D.init_method_set_platform_wall_layers();
    return _call_native_mb_no_ret(
      CharacterBody3D._bindings.method_set_platform_wall_layers,
      this._owner,
      _exclude_layer
    );
    
  }
  get_platform_wall_layers() {
    CharacterBody3D.init_method_get_platform_wall_layers();
    return _call_native_mb_ret(
      CharacterBody3D._bindings.method_get_platform_wall_layers,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_max_slides() {
    CharacterBody3D.init_method_get_max_slides();
    return _call_native_mb_ret(
      CharacterBody3D._bindings.method_get_max_slides,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_max_slides(_max_slides) {
    CharacterBody3D.init_method_set_max_slides();
    return _call_native_mb_no_ret(
      CharacterBody3D._bindings.method_set_max_slides,
      this._owner,
      _max_slides
    );
    
  }
  get_floor_max_angle() {
    CharacterBody3D.init_method_get_floor_max_angle();
    return _call_native_mb_ret(
      CharacterBody3D._bindings.method_get_floor_max_angle,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_floor_max_angle(_radians) {
    CharacterBody3D.init_method_set_floor_max_angle();
    return _call_native_mb_no_ret(
      CharacterBody3D._bindings.method_set_floor_max_angle,
      this._owner,
      _radians
    );
    
  }
  get_floor_snap_length() {
    CharacterBody3D.init_method_get_floor_snap_length();
    return _call_native_mb_ret(
      CharacterBody3D._bindings.method_get_floor_snap_length,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_floor_snap_length(_floor_snap_length) {
    CharacterBody3D.init_method_set_floor_snap_length();
    return _call_native_mb_no_ret(
      CharacterBody3D._bindings.method_set_floor_snap_length,
      this._owner,
      _floor_snap_length
    );
    
  }
  get_wall_min_slide_angle() {
    CharacterBody3D.init_method_get_wall_min_slide_angle();
    return _call_native_mb_ret(
      CharacterBody3D._bindings.method_get_wall_min_slide_angle,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_wall_min_slide_angle(_radians) {
    CharacterBody3D.init_method_set_wall_min_slide_angle();
    return _call_native_mb_no_ret(
      CharacterBody3D._bindings.method_set_wall_min_slide_angle,
      this._owner,
      _radians
    );
    
  }
  get_up_direction() {
    CharacterBody3D.init_method_get_up_direction();
    return _call_native_mb_ret(
      CharacterBody3D._bindings.method_get_up_direction,
      this._owner,
			Variant.Type.VECTOR3,
    
      
    );
    
  }
  set_up_direction(_up_direction) {
    CharacterBody3D.init_method_set_up_direction();
    return _call_native_mb_no_ret(
      CharacterBody3D._bindings.method_set_up_direction,
      this._owner,
      _up_direction
    );
    
  }
  set_motion_mode(_mode) {
    CharacterBody3D.init_method_set_motion_mode();
    return _call_native_mb_no_ret(
      CharacterBody3D._bindings.method_set_motion_mode,
      this._owner,
      _mode
    );
    
  }
  get_motion_mode() {
    CharacterBody3D.init_method_get_motion_mode();
    return _call_native_mb_ret(
      CharacterBody3D._bindings.method_get_motion_mode,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_platform_on_leave(_on_leave_apply_velocity) {
    CharacterBody3D.init_method_set_platform_on_leave();
    return _call_native_mb_no_ret(
      CharacterBody3D._bindings.method_set_platform_on_leave,
      this._owner,
      _on_leave_apply_velocity
    );
    
  }
  get_platform_on_leave() {
    CharacterBody3D.init_method_get_platform_on_leave();
    return _call_native_mb_ret(
      CharacterBody3D._bindings.method_get_platform_on_leave,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  is_on_floor() {
    CharacterBody3D.init_method_is_on_floor();
    return _call_native_mb_ret(
      CharacterBody3D._bindings.method_is_on_floor,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  is_on_floor_only() {
    CharacterBody3D.init_method_is_on_floor_only();
    return _call_native_mb_ret(
      CharacterBody3D._bindings.method_is_on_floor_only,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  is_on_ceiling() {
    CharacterBody3D.init_method_is_on_ceiling();
    return _call_native_mb_ret(
      CharacterBody3D._bindings.method_is_on_ceiling,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  is_on_ceiling_only() {
    CharacterBody3D.init_method_is_on_ceiling_only();
    return _call_native_mb_ret(
      CharacterBody3D._bindings.method_is_on_ceiling_only,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  is_on_wall() {
    CharacterBody3D.init_method_is_on_wall();
    return _call_native_mb_ret(
      CharacterBody3D._bindings.method_is_on_wall,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  is_on_wall_only() {
    CharacterBody3D.init_method_is_on_wall_only();
    return _call_native_mb_ret(
      CharacterBody3D._bindings.method_is_on_wall_only,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  get_floor_normal() {
    CharacterBody3D.init_method_get_floor_normal();
    return _call_native_mb_ret(
      CharacterBody3D._bindings.method_get_floor_normal,
      this._owner,
			Variant.Type.VECTOR3,
    
      
    );
    
  }
  get_wall_normal() {
    CharacterBody3D.init_method_get_wall_normal();
    return _call_native_mb_ret(
      CharacterBody3D._bindings.method_get_wall_normal,
      this._owner,
			Variant.Type.VECTOR3,
    
      
    );
    
  }
  get_last_motion() {
    CharacterBody3D.init_method_get_last_motion();
    return _call_native_mb_ret(
      CharacterBody3D._bindings.method_get_last_motion,
      this._owner,
			Variant.Type.VECTOR3,
    
      
    );
    
  }
  get_position_delta() {
    CharacterBody3D.init_method_get_position_delta();
    return _call_native_mb_ret(
      CharacterBody3D._bindings.method_get_position_delta,
      this._owner,
			Variant.Type.VECTOR3,
    
      
    );
    
  }
  get_real_velocity() {
    CharacterBody3D.init_method_get_real_velocity();
    return _call_native_mb_ret(
      CharacterBody3D._bindings.method_get_real_velocity,
      this._owner,
			Variant.Type.VECTOR3,
    
      
    );
    
  }
  get_floor_angle(_up_direction) {
    CharacterBody3D.init_method_get_floor_angle();
    return _call_native_mb_ret(
      CharacterBody3D._bindings.method_get_floor_angle,
      this._owner,
			Variant.Type.FLOAT,
    
      _up_direction
    );
    
  }
  get_platform_velocity() {
    CharacterBody3D.init_method_get_platform_velocity();
    return _call_native_mb_ret(
      CharacterBody3D._bindings.method_get_platform_velocity,
      this._owner,
			Variant.Type.VECTOR3,
    
      
    );
    
  }
  get_platform_angular_velocity() {
    CharacterBody3D.init_method_get_platform_angular_velocity();
    return _call_native_mb_ret(
      CharacterBody3D._bindings.method_get_platform_angular_velocity,
      this._owner,
			Variant.Type.VECTOR3,
    
      
    );
    
  }
  get_slide_collision_count() {
    CharacterBody3D.init_method_get_slide_collision_count();
    return _call_native_mb_ret(
      CharacterBody3D._bindings.method_get_slide_collision_count,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_slide_collision(_slide_idx) {
    CharacterBody3D.init_method_get_slide_collision();
    return _call_native_mb_ret(
      CharacterBody3D._bindings.method_get_slide_collision,
      this._owner,
			Variant.Type.OBJECT,
      _slide_idx
    );
    
  }
  get_last_slide_collision() {
    CharacterBody3D.init_method_get_last_slide_collision();
    return _call_native_mb_ret(
      CharacterBody3D._bindings.method_get_last_slide_collision,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  
get motion_mode () {
  return this.get_motion_mode();
}
set motion_mode (new_value) {
  this.set_motion_mode(new_value);
}
get up_direction () {
  return this.get_up_direction();
}
set up_direction (new_value) {
  this.set_up_direction(new_value);
}
get slide_on_ceiling () {
  return this.is_slide_on_ceiling_enabled();
}
set slide_on_ceiling (new_value) {
  this.set_slide_on_ceiling_enabled(new_value);
}
get velocity () {
  return this.get_velocity();
}
set velocity (new_value) {
  this.set_velocity(new_value);
}
get max_slides () {
  return this.get_max_slides();
}
set max_slides (new_value) {
  this.set_max_slides(new_value);
}
get wall_min_slide_angle () {
  return this.get_wall_min_slide_angle();
}
set wall_min_slide_angle (new_value) {
  this.set_wall_min_slide_angle(new_value);
}
get floor_stop_on_slope () {
  return this.is_floor_stop_on_slope_enabled();
}
set floor_stop_on_slope (new_value) {
  this.set_floor_stop_on_slope_enabled(new_value);
}
get floor_constant_speed () {
  return this.is_floor_constant_speed_enabled();
}
set floor_constant_speed (new_value) {
  this.set_floor_constant_speed_enabled(new_value);
}
get floor_block_on_wall () {
  return this.is_floor_block_on_wall_enabled();
}
set floor_block_on_wall (new_value) {
  this.set_floor_block_on_wall_enabled(new_value);
}
get floor_max_angle () {
  return this.get_floor_max_angle();
}
set floor_max_angle (new_value) {
  this.set_floor_max_angle(new_value);
}
get floor_snap_length () {
  return this.get_floor_snap_length();
}
set floor_snap_length (new_value) {
  this.set_floor_snap_length(new_value);
}
get platform_on_leave () {
  return this.get_platform_on_leave();
}
set platform_on_leave (new_value) {
  this.set_platform_on_leave(new_value);
}
get platform_floor_layers () {
  return this.get_platform_floor_layers();
}
set platform_floor_layers (new_value) {
  this.set_platform_floor_layers(new_value);
}
get platform_wall_layers () {
  return this.get_platform_wall_layers();
}
set platform_wall_layers (new_value) {
  this.set_platform_wall_layers(new_value);
}
get safe_margin () {
  return this.get_safe_margin();
}
set safe_margin (new_value) {
  this.set_safe_margin(new_value);
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