import * as internal from '__internal__';
import { Color } from 'src/js_godot/variant/color'
import { Vector2 } from 'src/js_godot/variant/vector2'
import { PackedVector2Array } from 'src/js_godot/variant/packed_vector2_array'
import { PackedColorArray } from 'src/js_godot/variant/packed_color_array'
import { Node2D } from 'src/js_godot/classesnode2d'
class _MethodBindings {
    method_set_emitting;
    method_set_amount;
    method_set_lifetime;
    method_set_one_shot;
    method_set_pre_process_time;
    method_set_explosiveness_ratio;
    method_set_randomness_ratio;
    method_set_lifetime_randomness;
    method_set_use_local_coordinates;
    method_set_fixed_fps;
    method_set_fractional_delta;
    method_set_speed_scale;
    method_is_emitting;
    method_get_amount;
    method_get_lifetime;
    method_get_one_shot;
    method_get_pre_process_time;
    method_get_explosiveness_ratio;
    method_get_randomness_ratio;
    method_get_lifetime_randomness;
    method_get_use_local_coordinates;
    method_get_fixed_fps;
    method_get_fractional_delta;
    method_get_speed_scale;
    method_set_draw_order;
    method_get_draw_order;
    method_set_texture;
    method_get_texture;
    method_restart;
    method_set_direction;
    method_get_direction;
    method_set_spread;
    method_get_spread;
    method_set_param_min;
    method_get_param_min;
    method_set_param_max;
    method_get_param_max;
    method_set_param_curve;
    method_get_param_curve;
    method_set_color;
    method_get_color;
    method_set_color_ramp;
    method_get_color_ramp;
    method_set_color_initial_ramp;
    method_get_color_initial_ramp;
    method_set_particle_flag;
    method_get_particle_flag;
    method_set_emission_shape;
    method_get_emission_shape;
    method_set_emission_sphere_radius;
    method_get_emission_sphere_radius;
    method_set_emission_rect_extents;
    method_get_emission_rect_extents;
    method_set_emission_points;
    method_get_emission_points;
    method_set_emission_normals;
    method_get_emission_normals;
    method_set_emission_colors;
    method_get_emission_colors;
    method_get_gravity;
    method_set_gravity;
    method_get_split_scale;
    method_set_split_scale;
    method_get_scale_curve_x;
    method_set_scale_curve_x;
    method_get_scale_curve_y;
    method_set_scale_curve_y;
    method_convert_from_particles;
}


export class CPUParticles2D extends Node2D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("CPUParticles2D");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("CPUParticles2D");
      let methodname = new StringName("set_emitting");
      this._bindings.method_set_emitting = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("CPUParticles2D");
      let methodname = new StringName("set_amount");
      this._bindings.method_set_amount = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("CPUParticles2D");
      let methodname = new StringName("set_lifetime");
      this._bindings.method_set_lifetime = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("CPUParticles2D");
      let methodname = new StringName("set_one_shot");
      this._bindings.method_set_one_shot = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("CPUParticles2D");
      let methodname = new StringName("set_pre_process_time");
      this._bindings.method_set_pre_process_time = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("CPUParticles2D");
      let methodname = new StringName("set_explosiveness_ratio");
      this._bindings.method_set_explosiveness_ratio = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("CPUParticles2D");
      let methodname = new StringName("set_randomness_ratio");
      this._bindings.method_set_randomness_ratio = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("CPUParticles2D");
      let methodname = new StringName("set_lifetime_randomness");
      this._bindings.method_set_lifetime_randomness = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("CPUParticles2D");
      let methodname = new StringName("set_use_local_coordinates");
      this._bindings.method_set_use_local_coordinates = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("CPUParticles2D");
      let methodname = new StringName("set_fixed_fps");
      this._bindings.method_set_fixed_fps = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("CPUParticles2D");
      let methodname = new StringName("set_fractional_delta");
      this._bindings.method_set_fractional_delta = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("CPUParticles2D");
      let methodname = new StringName("set_speed_scale");
      this._bindings.method_set_speed_scale = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("CPUParticles2D");
      let methodname = new StringName("is_emitting");
      this._bindings.method_is_emitting = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("CPUParticles2D");
      let methodname = new StringName("get_amount");
      this._bindings.method_get_amount = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("CPUParticles2D");
      let methodname = new StringName("get_lifetime");
      this._bindings.method_get_lifetime = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("CPUParticles2D");
      let methodname = new StringName("get_one_shot");
      this._bindings.method_get_one_shot = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("CPUParticles2D");
      let methodname = new StringName("get_pre_process_time");
      this._bindings.method_get_pre_process_time = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("CPUParticles2D");
      let methodname = new StringName("get_explosiveness_ratio");
      this._bindings.method_get_explosiveness_ratio = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("CPUParticles2D");
      let methodname = new StringName("get_randomness_ratio");
      this._bindings.method_get_randomness_ratio = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("CPUParticles2D");
      let methodname = new StringName("get_lifetime_randomness");
      this._bindings.method_get_lifetime_randomness = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("CPUParticles2D");
      let methodname = new StringName("get_use_local_coordinates");
      this._bindings.method_get_use_local_coordinates = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("CPUParticles2D");
      let methodname = new StringName("get_fixed_fps");
      this._bindings.method_get_fixed_fps = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("CPUParticles2D");
      let methodname = new StringName("get_fractional_delta");
      this._bindings.method_get_fractional_delta = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("CPUParticles2D");
      let methodname = new StringName("get_speed_scale");
      this._bindings.method_get_speed_scale = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("CPUParticles2D");
      let methodname = new StringName("set_draw_order");
      this._bindings.method_set_draw_order = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4183193490
      );
    }
    {
      let classname = new StringName("CPUParticles2D");
      let methodname = new StringName("get_draw_order");
      this._bindings.method_get_draw_order = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1668655735
      );
    }
    {
      let classname = new StringName("CPUParticles2D");
      let methodname = new StringName("set_texture");
      this._bindings.method_set_texture = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4051416890
      );
    }
    {
      let classname = new StringName("CPUParticles2D");
      let methodname = new StringName("get_texture");
      this._bindings.method_get_texture = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3635182373
      );
    }
    {
      let classname = new StringName("CPUParticles2D");
      let methodname = new StringName("restart");
      this._bindings.method_restart = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("CPUParticles2D");
      let methodname = new StringName("set_direction");
      this._bindings.method_set_direction = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        743155724
      );
    }
    {
      let classname = new StringName("CPUParticles2D");
      let methodname = new StringName("get_direction");
      this._bindings.method_get_direction = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3341600327
      );
    }
    {
      let classname = new StringName("CPUParticles2D");
      let methodname = new StringName("set_spread");
      this._bindings.method_set_spread = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("CPUParticles2D");
      let methodname = new StringName("get_spread");
      this._bindings.method_get_spread = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("CPUParticles2D");
      let methodname = new StringName("set_param_min");
      this._bindings.method_set_param_min = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3320615296
      );
    }
    {
      let classname = new StringName("CPUParticles2D");
      let methodname = new StringName("get_param_min");
      this._bindings.method_get_param_min = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2038050600
      );
    }
    {
      let classname = new StringName("CPUParticles2D");
      let methodname = new StringName("set_param_max");
      this._bindings.method_set_param_max = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3320615296
      );
    }
    {
      let classname = new StringName("CPUParticles2D");
      let methodname = new StringName("get_param_max");
      this._bindings.method_get_param_max = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2038050600
      );
    }
    {
      let classname = new StringName("CPUParticles2D");
      let methodname = new StringName("set_param_curve");
      this._bindings.method_set_param_curve = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2959350143
      );
    }
    {
      let classname = new StringName("CPUParticles2D");
      let methodname = new StringName("get_param_curve");
      this._bindings.method_get_param_curve = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2603158474
      );
    }
    {
      let classname = new StringName("CPUParticles2D");
      let methodname = new StringName("set_color");
      this._bindings.method_set_color = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2920490490
      );
    }
    {
      let classname = new StringName("CPUParticles2D");
      let methodname = new StringName("get_color");
      this._bindings.method_get_color = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3444240500
      );
    }
    {
      let classname = new StringName("CPUParticles2D");
      let methodname = new StringName("set_color_ramp");
      this._bindings.method_set_color_ramp = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2756054477
      );
    }
    {
      let classname = new StringName("CPUParticles2D");
      let methodname = new StringName("get_color_ramp");
      this._bindings.method_get_color_ramp = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        132272999
      );
    }
    {
      let classname = new StringName("CPUParticles2D");
      let methodname = new StringName("set_color_initial_ramp");
      this._bindings.method_set_color_initial_ramp = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2756054477
      );
    }
    {
      let classname = new StringName("CPUParticles2D");
      let methodname = new StringName("get_color_initial_ramp");
      this._bindings.method_get_color_initial_ramp = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        132272999
      );
    }
    {
      let classname = new StringName("CPUParticles2D");
      let methodname = new StringName("set_particle_flag");
      this._bindings.method_set_particle_flag = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4178137949
      );
    }
    {
      let classname = new StringName("CPUParticles2D");
      let methodname = new StringName("get_particle_flag");
      this._bindings.method_get_particle_flag = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2829976507
      );
    }
    {
      let classname = new StringName("CPUParticles2D");
      let methodname = new StringName("set_emission_shape");
      this._bindings.method_set_emission_shape = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        393763892
      );
    }
    {
      let classname = new StringName("CPUParticles2D");
      let methodname = new StringName("get_emission_shape");
      this._bindings.method_get_emission_shape = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740246024
      );
    }
    {
      let classname = new StringName("CPUParticles2D");
      let methodname = new StringName("set_emission_sphere_radius");
      this._bindings.method_set_emission_sphere_radius = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("CPUParticles2D");
      let methodname = new StringName("get_emission_sphere_radius");
      this._bindings.method_get_emission_sphere_radius = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("CPUParticles2D");
      let methodname = new StringName("set_emission_rect_extents");
      this._bindings.method_set_emission_rect_extents = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        743155724
      );
    }
    {
      let classname = new StringName("CPUParticles2D");
      let methodname = new StringName("get_emission_rect_extents");
      this._bindings.method_get_emission_rect_extents = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3341600327
      );
    }
    {
      let classname = new StringName("CPUParticles2D");
      let methodname = new StringName("set_emission_points");
      this._bindings.method_set_emission_points = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1509147220
      );
    }
    {
      let classname = new StringName("CPUParticles2D");
      let methodname = new StringName("get_emission_points");
      this._bindings.method_get_emission_points = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2961356807
      );
    }
    {
      let classname = new StringName("CPUParticles2D");
      let methodname = new StringName("set_emission_normals");
      this._bindings.method_set_emission_normals = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1509147220
      );
    }
    {
      let classname = new StringName("CPUParticles2D");
      let methodname = new StringName("get_emission_normals");
      this._bindings.method_get_emission_normals = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2961356807
      );
    }
    {
      let classname = new StringName("CPUParticles2D");
      let methodname = new StringName("set_emission_colors");
      this._bindings.method_set_emission_colors = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3546319833
      );
    }
    {
      let classname = new StringName("CPUParticles2D");
      let methodname = new StringName("get_emission_colors");
      this._bindings.method_get_emission_colors = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1392750486
      );
    }
    {
      let classname = new StringName("CPUParticles2D");
      let methodname = new StringName("get_gravity");
      this._bindings.method_get_gravity = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3341600327
      );
    }
    {
      let classname = new StringName("CPUParticles2D");
      let methodname = new StringName("set_gravity");
      this._bindings.method_set_gravity = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        743155724
      );
    }
    {
      let classname = new StringName("CPUParticles2D");
      let methodname = new StringName("get_split_scale");
      this._bindings.method_get_split_scale = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2240911060
      );
    }
    {
      let classname = new StringName("CPUParticles2D");
      let methodname = new StringName("set_split_scale");
      this._bindings.method_set_split_scale = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("CPUParticles2D");
      let methodname = new StringName("get_scale_curve_x");
      this._bindings.method_get_scale_curve_x = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2460114913
      );
    }
    {
      let classname = new StringName("CPUParticles2D");
      let methodname = new StringName("set_scale_curve_x");
      this._bindings.method_set_scale_curve_x = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        270443179
      );
    }
    {
      let classname = new StringName("CPUParticles2D");
      let methodname = new StringName("get_scale_curve_y");
      this._bindings.method_get_scale_curve_y = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2460114913
      );
    }
    {
      let classname = new StringName("CPUParticles2D");
      let methodname = new StringName("set_scale_curve_y");
      this._bindings.method_set_scale_curve_y = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        270443179
      );
    }
    {
      let classname = new StringName("CPUParticles2D");
      let methodname = new StringName("convert_from_particles");
      this._bindings.method_convert_from_particles = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1078189570
      );
    }
  }
  set_emitting(_emitting) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_emitting,
      this._owner,
      _emitting
    );
  }
  set_amount(_amount) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_amount,
      this._owner,
      _amount
    );
  }
  set_lifetime(_secs) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_lifetime,
      this._owner,
      _secs
    );
  }
  set_one_shot(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_one_shot,
      this._owner,
      _enable
    );
  }
  set_pre_process_time(_secs) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_pre_process_time,
      this._owner,
      _secs
    );
  }
  set_explosiveness_ratio(_ratio) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_explosiveness_ratio,
      this._owner,
      _ratio
    );
  }
  set_randomness_ratio(_ratio) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_randomness_ratio,
      this._owner,
      _ratio
    );
  }
  set_lifetime_randomness(_random) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_lifetime_randomness,
      this._owner,
      _random
    );
  }
  set_use_local_coordinates(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_use_local_coordinates,
      this._owner,
      _enable
    );
  }
  set_fixed_fps(_fps) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_fixed_fps,
      this._owner,
      _fps
    );
  }
  set_fractional_delta(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_fractional_delta,
      this._owner,
      _enable
    );
  }
  set_speed_scale(_scale) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_speed_scale,
      this._owner,
      _scale
    );
  }
  is_emitting() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_emitting,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  get_amount() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_amount,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  get_lifetime() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_lifetime,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  get_one_shot() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_one_shot,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  get_pre_process_time() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_pre_process_time,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  get_explosiveness_ratio() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_explosiveness_ratio,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  get_randomness_ratio() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_randomness_ratio,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  get_lifetime_randomness() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_lifetime_randomness,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  get_use_local_coordinates() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_use_local_coordinates,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  get_fixed_fps() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_fixed_fps,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  get_fractional_delta() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_fractional_delta,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  get_speed_scale() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_speed_scale,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_draw_order(_order) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_draw_order,
      this._owner,
      _order
    );
  }
  get_draw_order() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_draw_order,
      this._owner,
			Variant.INT,
      
    );
  }
  set_texture(_texture) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_texture,
      this._owner,
      _texture
    );
  }
  get_texture() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_texture,
      this._owner,
			Variant.INT,
      
    );
  }
  restart() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_restart,
      this._owner,
      
    );
  }
  set_direction(_direction) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_direction,
      this._owner,
      _direction
    );
  }
  get_direction() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_direction,
      this._owner,
			Variant.Type.VECTOR2
    ,
      
    );
  }
  set_spread(_spread) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_spread,
      this._owner,
      _spread
    );
  }
  get_spread() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_spread,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_param_min(_param, _value) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_param_min,
      this._owner,
      _param, _value
    );
  }
  get_param_min(_param) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_param_min,
      this._owner,
			Variant.Type.FLOAT,
      _param
    );
  }
  set_param_max(_param, _value) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_param_max,
      this._owner,
      _param, _value
    );
  }
  get_param_max(_param) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_param_max,
      this._owner,
			Variant.Type.FLOAT,
      _param
    );
  }
  set_param_curve(_param, _curve) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_param_curve,
      this._owner,
      _param, _curve
    );
  }
  get_param_curve(_param) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_param_curve,
      this._owner,
			Variant.INT,
      _param
    );
  }
  set_color(_color) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_color,
      this._owner,
      _color
    );
  }
  get_color() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_color,
      this._owner,
			Variant.Type.COLOR
    ,
      
    );
  }
  set_color_ramp(_ramp) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_color_ramp,
      this._owner,
      _ramp
    );
  }
  get_color_ramp() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_color_ramp,
      this._owner,
			Variant.INT,
      
    );
  }
  set_color_initial_ramp(_ramp) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_color_initial_ramp,
      this._owner,
      _ramp
    );
  }
  get_color_initial_ramp() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_color_initial_ramp,
      this._owner,
			Variant.INT,
      
    );
  }
  set_particle_flag(_particle_flag, _enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_particle_flag,
      this._owner,
      _particle_flag, _enable
    );
  }
  get_particle_flag(_particle_flag) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_particle_flag,
      this._owner,
			Variant.Type.BOOL,
      _particle_flag
    );
  }
  set_emission_shape(_shape) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_emission_shape,
      this._owner,
      _shape
    );
  }
  get_emission_shape() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_emission_shape,
      this._owner,
			Variant.INT,
      
    );
  }
  set_emission_sphere_radius(_radius) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_emission_sphere_radius,
      this._owner,
      _radius
    );
  }
  get_emission_sphere_radius() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_emission_sphere_radius,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_emission_rect_extents(_extents) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_emission_rect_extents,
      this._owner,
      _extents
    );
  }
  get_emission_rect_extents() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_emission_rect_extents,
      this._owner,
			Variant.Type.VECTOR2
    ,
      
    );
  }
  set_emission_points(_array) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_emission_points,
      this._owner,
      _array
    );
  }
  get_emission_points() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_emission_points,
      this._owner,
			Variant.Type.PACKED_VECTOR2_ARRAY
    ,
      
    );
  }
  set_emission_normals(_array) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_emission_normals,
      this._owner,
      _array
    );
  }
  get_emission_normals() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_emission_normals,
      this._owner,
			Variant.Type.PACKED_VECTOR2_ARRAY
    ,
      
    );
  }
  set_emission_colors(_array) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_emission_colors,
      this._owner,
      _array
    );
  }
  get_emission_colors() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_emission_colors,
      this._owner,
			Variant.Type.PACKED_COLOR_ARRAY
    ,
      
    );
  }
  get_gravity() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_gravity,
      this._owner,
			Variant.Type.VECTOR2
    ,
      
    );
  }
  set_gravity(_accel_vec) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_gravity,
      this._owner,
      _accel_vec
    );
  }
  get_split_scale() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_split_scale,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_split_scale(_split_scale) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_split_scale,
      this._owner,
      _split_scale
    );
  }
  get_scale_curve_x() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_scale_curve_x,
      this._owner,
			Variant.INT,
      
    );
  }
  set_scale_curve_x(_scale_curve) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_scale_curve_x,
      this._owner,
      _scale_curve
    );
  }
  get_scale_curve_y() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_scale_curve_y,
      this._owner,
			Variant.INT,
      
    );
  }
  set_scale_curve_y(_scale_curve) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_scale_curve_y,
      this._owner,
      _scale_curve
    );
  }
  convert_from_particles(_particles) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_convert_from_particles,
      this._owner,
      _particles
    );
  }
  static DrawOrder = {
    DRAW_ORDER_INDEX: 0,
    DRAW_ORDER_LIFETIME: 1,
  }
  static Parameter = {
    PARAM_INITIAL_LINEAR_VELOCITY: 0,
    PARAM_ANGULAR_VELOCITY: 1,
    PARAM_ORBIT_VELOCITY: 2,
    PARAM_LINEAR_ACCEL: 3,
    PARAM_RADIAL_ACCEL: 4,
    PARAM_TANGENTIAL_ACCEL: 5,
    PARAM_DAMPING: 6,
    PARAM_ANGLE: 7,
    PARAM_SCALE: 8,
    PARAM_HUE_VARIATION: 9,
    PARAM_ANIM_SPEED: 10,
    PARAM_ANIM_OFFSET: 11,
    PARAM_MAX: 12,
  }
  static ParticleFlags = {
    PARTICLE_FLAG_ALIGN_Y_TO_VELOCITY: 0,
    PARTICLE_FLAG_ROTATE_Y: 1,
    PARTICLE_FLAG_DISABLE_Z: 2,
    PARTICLE_FLAG_MAX: 3,
  }
  static EmissionShape = {
    EMISSION_SHAPE_POINT: 0,
    EMISSION_SHAPE_SPHERE: 1,
    EMISSION_SHAPE_SPHERE_SURFACE: 2,
    EMISSION_SHAPE_RECTANGLE: 3,
    EMISSION_SHAPE_POINTS: 4,
    EMISSION_SHAPE_DIRECTED_POINTS: 5,
    EMISSION_SHAPE_MAX: 6,
  }
}