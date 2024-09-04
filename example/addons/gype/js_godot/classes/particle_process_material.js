import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { Vector3 } from '@js_godot/variant/vector3'
import { StringName } from '@js_godot/variant/string_name'
import { Material } from '@js_godot/classes/material'
import { Color } from '@js_godot/variant/color'
import { Vector2 } from '@js_godot/variant/vector2'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_direction;
  method_get_direction;
  method_set_inherit_velocity_ratio;
  method_get_inherit_velocity_ratio;
  method_set_spread;
  method_get_spread;
  method_set_flatness;
  method_get_flatness;
  method_set_param;
  method_get_param;
  method_set_param_min;
  method_get_param_min;
  method_set_param_max;
  method_get_param_max;
  method_set_param_texture;
  method_get_param_texture;
  method_set_color;
  method_get_color;
  method_set_color_ramp;
  method_get_color_ramp;
  method_set_alpha_curve;
  method_get_alpha_curve;
  method_set_emission_curve;
  method_get_emission_curve;
  method_set_color_initial_ramp;
  method_get_color_initial_ramp;
  method_set_velocity_limit_curve;
  method_get_velocity_limit_curve;
  method_set_particle_flag;
  method_get_particle_flag;
  method_set_velocity_pivot;
  method_get_velocity_pivot;
  method_set_emission_shape;
  method_get_emission_shape;
  method_set_emission_sphere_radius;
  method_get_emission_sphere_radius;
  method_set_emission_box_extents;
  method_get_emission_box_extents;
  method_set_emission_point_texture;
  method_get_emission_point_texture;
  method_set_emission_normal_texture;
  method_get_emission_normal_texture;
  method_set_emission_color_texture;
  method_get_emission_color_texture;
  method_set_emission_point_count;
  method_get_emission_point_count;
  method_set_emission_ring_axis;
  method_get_emission_ring_axis;
  method_set_emission_ring_height;
  method_get_emission_ring_height;
  method_set_emission_ring_radius;
  method_get_emission_ring_radius;
  method_set_emission_ring_inner_radius;
  method_get_emission_ring_inner_radius;
  method_set_emission_shape_offset;
  method_get_emission_shape_offset;
  method_set_emission_shape_scale;
  method_get_emission_shape_scale;
  method_get_turbulence_enabled;
  method_set_turbulence_enabled;
  method_get_turbulence_noise_strength;
  method_set_turbulence_noise_strength;
  method_get_turbulence_noise_scale;
  method_set_turbulence_noise_scale;
  method_get_turbulence_noise_speed_random;
  method_set_turbulence_noise_speed_random;
  method_get_turbulence_noise_speed;
  method_set_turbulence_noise_speed;
  method_get_gravity;
  method_set_gravity;
  method_set_lifetime_randomness;
  method_get_lifetime_randomness;
  method_get_sub_emitter_mode;
  method_set_sub_emitter_mode;
  method_get_sub_emitter_frequency;
  method_set_sub_emitter_frequency;
  method_get_sub_emitter_amount_at_end;
  method_set_sub_emitter_amount_at_end;
  method_get_sub_emitter_amount_at_collision;
  method_set_sub_emitter_amount_at_collision;
  method_get_sub_emitter_keep_velocity;
  method_set_sub_emitter_keep_velocity;
  method_set_attractor_interaction_enabled;
  method_is_attractor_interaction_enabled;
  method_set_collision_mode;
  method_get_collision_mode;
  method_set_collision_use_scale;
  method_is_collision_using_scale;
  method_set_collision_friction;
  method_get_collision_friction;
  method_set_collision_bounce;
  method_get_collision_bounce;
}
export class ParticleProcessMaterial extends Material{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("ParticleProcessMaterial");
    } else {
      super(godot_object);
    }
  }
  
  static async _init_bindings() {
    if (this.#initialized) {
      return;
    }
    this.#initialized = true;
    {
      let classname = new StringName("ParticleProcessMaterial");
      let methodname = new StringName("set_direction");
      this._bindings.method_set_direction = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3460891852
      );
    }
    {
      let classname = new StringName("ParticleProcessMaterial");
      let methodname = new StringName("get_direction");
      this._bindings.method_get_direction = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3360562783
      );
    }
    {
      let classname = new StringName("ParticleProcessMaterial");
      let methodname = new StringName("set_inherit_velocity_ratio");
      this._bindings.method_set_inherit_velocity_ratio = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("ParticleProcessMaterial");
      let methodname = new StringName("get_inherit_velocity_ratio");
      this._bindings.method_get_inherit_velocity_ratio = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        191475506
      );
    }
    {
      let classname = new StringName("ParticleProcessMaterial");
      let methodname = new StringName("set_spread");
      this._bindings.method_set_spread = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("ParticleProcessMaterial");
      let methodname = new StringName("get_spread");
      this._bindings.method_get_spread = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("ParticleProcessMaterial");
      let methodname = new StringName("set_flatness");
      this._bindings.method_set_flatness = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("ParticleProcessMaterial");
      let methodname = new StringName("get_flatness");
      this._bindings.method_get_flatness = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("ParticleProcessMaterial");
      let methodname = new StringName("set_param");
      this._bindings.method_set_param = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        676779352
      );
    }
    {
      let classname = new StringName("ParticleProcessMaterial");
      let methodname = new StringName("get_param");
      this._bindings.method_get_param = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2623708480
      );
    }
    {
      let classname = new StringName("ParticleProcessMaterial");
      let methodname = new StringName("set_param_min");
      this._bindings.method_set_param_min = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2295964248
      );
    }
    {
      let classname = new StringName("ParticleProcessMaterial");
      let methodname = new StringName("get_param_min");
      this._bindings.method_get_param_min = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3903786503
      );
    }
    {
      let classname = new StringName("ParticleProcessMaterial");
      let methodname = new StringName("set_param_max");
      this._bindings.method_set_param_max = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2295964248
      );
    }
    {
      let classname = new StringName("ParticleProcessMaterial");
      let methodname = new StringName("get_param_max");
      this._bindings.method_get_param_max = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3903786503
      );
    }
    {
      let classname = new StringName("ParticleProcessMaterial");
      let methodname = new StringName("set_param_texture");
      this._bindings.method_set_param_texture = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        526976089
      );
    }
    {
      let classname = new StringName("ParticleProcessMaterial");
      let methodname = new StringName("get_param_texture");
      this._bindings.method_get_param_texture = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3489372978
      );
    }
    {
      let classname = new StringName("ParticleProcessMaterial");
      let methodname = new StringName("set_color");
      this._bindings.method_set_color = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2920490490
      );
    }
    {
      let classname = new StringName("ParticleProcessMaterial");
      let methodname = new StringName("get_color");
      this._bindings.method_get_color = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3444240500
      );
    }
    {
      let classname = new StringName("ParticleProcessMaterial");
      let methodname = new StringName("set_color_ramp");
      this._bindings.method_set_color_ramp = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4051416890
      );
    }
    {
      let classname = new StringName("ParticleProcessMaterial");
      let methodname = new StringName("get_color_ramp");
      this._bindings.method_get_color_ramp = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3635182373
      );
    }
    {
      let classname = new StringName("ParticleProcessMaterial");
      let methodname = new StringName("set_alpha_curve");
      this._bindings.method_set_alpha_curve = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4051416890
      );
    }
    {
      let classname = new StringName("ParticleProcessMaterial");
      let methodname = new StringName("get_alpha_curve");
      this._bindings.method_get_alpha_curve = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3635182373
      );
    }
    {
      let classname = new StringName("ParticleProcessMaterial");
      let methodname = new StringName("set_emission_curve");
      this._bindings.method_set_emission_curve = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4051416890
      );
    }
    {
      let classname = new StringName("ParticleProcessMaterial");
      let methodname = new StringName("get_emission_curve");
      this._bindings.method_get_emission_curve = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3635182373
      );
    }
    {
      let classname = new StringName("ParticleProcessMaterial");
      let methodname = new StringName("set_color_initial_ramp");
      this._bindings.method_set_color_initial_ramp = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4051416890
      );
    }
    {
      let classname = new StringName("ParticleProcessMaterial");
      let methodname = new StringName("get_color_initial_ramp");
      this._bindings.method_get_color_initial_ramp = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3635182373
      );
    }
    {
      let classname = new StringName("ParticleProcessMaterial");
      let methodname = new StringName("set_velocity_limit_curve");
      this._bindings.method_set_velocity_limit_curve = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4051416890
      );
    }
    {
      let classname = new StringName("ParticleProcessMaterial");
      let methodname = new StringName("get_velocity_limit_curve");
      this._bindings.method_get_velocity_limit_curve = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3635182373
      );
    }
    {
      let classname = new StringName("ParticleProcessMaterial");
      let methodname = new StringName("set_particle_flag");
      this._bindings.method_set_particle_flag = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1711815571
      );
    }
    {
      let classname = new StringName("ParticleProcessMaterial");
      let methodname = new StringName("get_particle_flag");
      this._bindings.method_get_particle_flag = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3895316907
      );
    }
    {
      let classname = new StringName("ParticleProcessMaterial");
      let methodname = new StringName("set_velocity_pivot");
      this._bindings.method_set_velocity_pivot = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3460891852
      );
    }
    {
      let classname = new StringName("ParticleProcessMaterial");
      let methodname = new StringName("get_velocity_pivot");
      this._bindings.method_get_velocity_pivot = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3783033775
      );
    }
    {
      let classname = new StringName("ParticleProcessMaterial");
      let methodname = new StringName("set_emission_shape");
      this._bindings.method_set_emission_shape = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        461501442
      );
    }
    {
      let classname = new StringName("ParticleProcessMaterial");
      let methodname = new StringName("get_emission_shape");
      this._bindings.method_get_emission_shape = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3719733018
      );
    }
    {
      let classname = new StringName("ParticleProcessMaterial");
      let methodname = new StringName("set_emission_sphere_radius");
      this._bindings.method_set_emission_sphere_radius = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("ParticleProcessMaterial");
      let methodname = new StringName("get_emission_sphere_radius");
      this._bindings.method_get_emission_sphere_radius = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("ParticleProcessMaterial");
      let methodname = new StringName("set_emission_box_extents");
      this._bindings.method_set_emission_box_extents = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3460891852
      );
    }
    {
      let classname = new StringName("ParticleProcessMaterial");
      let methodname = new StringName("get_emission_box_extents");
      this._bindings.method_get_emission_box_extents = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3360562783
      );
    }
    {
      let classname = new StringName("ParticleProcessMaterial");
      let methodname = new StringName("set_emission_point_texture");
      this._bindings.method_set_emission_point_texture = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4051416890
      );
    }
    {
      let classname = new StringName("ParticleProcessMaterial");
      let methodname = new StringName("get_emission_point_texture");
      this._bindings.method_get_emission_point_texture = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3635182373
      );
    }
    {
      let classname = new StringName("ParticleProcessMaterial");
      let methodname = new StringName("set_emission_normal_texture");
      this._bindings.method_set_emission_normal_texture = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4051416890
      );
    }
    {
      let classname = new StringName("ParticleProcessMaterial");
      let methodname = new StringName("get_emission_normal_texture");
      this._bindings.method_get_emission_normal_texture = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3635182373
      );
    }
    {
      let classname = new StringName("ParticleProcessMaterial");
      let methodname = new StringName("set_emission_color_texture");
      this._bindings.method_set_emission_color_texture = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4051416890
      );
    }
    {
      let classname = new StringName("ParticleProcessMaterial");
      let methodname = new StringName("get_emission_color_texture");
      this._bindings.method_get_emission_color_texture = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3635182373
      );
    }
    {
      let classname = new StringName("ParticleProcessMaterial");
      let methodname = new StringName("set_emission_point_count");
      this._bindings.method_set_emission_point_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("ParticleProcessMaterial");
      let methodname = new StringName("get_emission_point_count");
      this._bindings.method_get_emission_point_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("ParticleProcessMaterial");
      let methodname = new StringName("set_emission_ring_axis");
      this._bindings.method_set_emission_ring_axis = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3460891852
      );
    }
    {
      let classname = new StringName("ParticleProcessMaterial");
      let methodname = new StringName("get_emission_ring_axis");
      this._bindings.method_get_emission_ring_axis = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3360562783
      );
    }
    {
      let classname = new StringName("ParticleProcessMaterial");
      let methodname = new StringName("set_emission_ring_height");
      this._bindings.method_set_emission_ring_height = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("ParticleProcessMaterial");
      let methodname = new StringName("get_emission_ring_height");
      this._bindings.method_get_emission_ring_height = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("ParticleProcessMaterial");
      let methodname = new StringName("set_emission_ring_radius");
      this._bindings.method_set_emission_ring_radius = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("ParticleProcessMaterial");
      let methodname = new StringName("get_emission_ring_radius");
      this._bindings.method_get_emission_ring_radius = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("ParticleProcessMaterial");
      let methodname = new StringName("set_emission_ring_inner_radius");
      this._bindings.method_set_emission_ring_inner_radius = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("ParticleProcessMaterial");
      let methodname = new StringName("get_emission_ring_inner_radius");
      this._bindings.method_get_emission_ring_inner_radius = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("ParticleProcessMaterial");
      let methodname = new StringName("set_emission_shape_offset");
      this._bindings.method_set_emission_shape_offset = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3460891852
      );
    }
    {
      let classname = new StringName("ParticleProcessMaterial");
      let methodname = new StringName("get_emission_shape_offset");
      this._bindings.method_get_emission_shape_offset = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3360562783
      );
    }
    {
      let classname = new StringName("ParticleProcessMaterial");
      let methodname = new StringName("set_emission_shape_scale");
      this._bindings.method_set_emission_shape_scale = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3460891852
      );
    }
    {
      let classname = new StringName("ParticleProcessMaterial");
      let methodname = new StringName("get_emission_shape_scale");
      this._bindings.method_get_emission_shape_scale = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3360562783
      );
    }
    {
      let classname = new StringName("ParticleProcessMaterial");
      let methodname = new StringName("get_turbulence_enabled");
      this._bindings.method_get_turbulence_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("ParticleProcessMaterial");
      let methodname = new StringName("set_turbulence_enabled");
      this._bindings.method_set_turbulence_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("ParticleProcessMaterial");
      let methodname = new StringName("get_turbulence_noise_strength");
      this._bindings.method_get_turbulence_noise_strength = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("ParticleProcessMaterial");
      let methodname = new StringName("set_turbulence_noise_strength");
      this._bindings.method_set_turbulence_noise_strength = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("ParticleProcessMaterial");
      let methodname = new StringName("get_turbulence_noise_scale");
      this._bindings.method_get_turbulence_noise_scale = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("ParticleProcessMaterial");
      let methodname = new StringName("set_turbulence_noise_scale");
      this._bindings.method_set_turbulence_noise_scale = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("ParticleProcessMaterial");
      let methodname = new StringName("get_turbulence_noise_speed_random");
      this._bindings.method_get_turbulence_noise_speed_random = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("ParticleProcessMaterial");
      let methodname = new StringName("set_turbulence_noise_speed_random");
      this._bindings.method_set_turbulence_noise_speed_random = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("ParticleProcessMaterial");
      let methodname = new StringName("get_turbulence_noise_speed");
      this._bindings.method_get_turbulence_noise_speed = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3360562783
      );
    }
    {
      let classname = new StringName("ParticleProcessMaterial");
      let methodname = new StringName("set_turbulence_noise_speed");
      this._bindings.method_set_turbulence_noise_speed = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3460891852
      );
    }
    {
      let classname = new StringName("ParticleProcessMaterial");
      let methodname = new StringName("get_gravity");
      this._bindings.method_get_gravity = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3360562783
      );
    }
    {
      let classname = new StringName("ParticleProcessMaterial");
      let methodname = new StringName("set_gravity");
      this._bindings.method_set_gravity = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3460891852
      );
    }
    {
      let classname = new StringName("ParticleProcessMaterial");
      let methodname = new StringName("set_lifetime_randomness");
      this._bindings.method_set_lifetime_randomness = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("ParticleProcessMaterial");
      let methodname = new StringName("get_lifetime_randomness");
      this._bindings.method_get_lifetime_randomness = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("ParticleProcessMaterial");
      let methodname = new StringName("get_sub_emitter_mode");
      this._bindings.method_get_sub_emitter_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2399052877
      );
    }
    {
      let classname = new StringName("ParticleProcessMaterial");
      let methodname = new StringName("set_sub_emitter_mode");
      this._bindings.method_set_sub_emitter_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2161806672
      );
    }
    {
      let classname = new StringName("ParticleProcessMaterial");
      let methodname = new StringName("get_sub_emitter_frequency");
      this._bindings.method_get_sub_emitter_frequency = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("ParticleProcessMaterial");
      let methodname = new StringName("set_sub_emitter_frequency");
      this._bindings.method_set_sub_emitter_frequency = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("ParticleProcessMaterial");
      let methodname = new StringName("get_sub_emitter_amount_at_end");
      this._bindings.method_get_sub_emitter_amount_at_end = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("ParticleProcessMaterial");
      let methodname = new StringName("set_sub_emitter_amount_at_end");
      this._bindings.method_set_sub_emitter_amount_at_end = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("ParticleProcessMaterial");
      let methodname = new StringName("get_sub_emitter_amount_at_collision");
      this._bindings.method_get_sub_emitter_amount_at_collision = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("ParticleProcessMaterial");
      let methodname = new StringName("set_sub_emitter_amount_at_collision");
      this._bindings.method_set_sub_emitter_amount_at_collision = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("ParticleProcessMaterial");
      let methodname = new StringName("get_sub_emitter_keep_velocity");
      this._bindings.method_get_sub_emitter_keep_velocity = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("ParticleProcessMaterial");
      let methodname = new StringName("set_sub_emitter_keep_velocity");
      this._bindings.method_set_sub_emitter_keep_velocity = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("ParticleProcessMaterial");
      let methodname = new StringName("set_attractor_interaction_enabled");
      this._bindings.method_set_attractor_interaction_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("ParticleProcessMaterial");
      let methodname = new StringName("is_attractor_interaction_enabled");
      this._bindings.method_is_attractor_interaction_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("ParticleProcessMaterial");
      let methodname = new StringName("set_collision_mode");
      this._bindings.method_set_collision_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        653804659
      );
    }
    {
      let classname = new StringName("ParticleProcessMaterial");
      let methodname = new StringName("get_collision_mode");
      this._bindings.method_get_collision_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        139371864
      );
    }
    {
      let classname = new StringName("ParticleProcessMaterial");
      let methodname = new StringName("set_collision_use_scale");
      this._bindings.method_set_collision_use_scale = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("ParticleProcessMaterial");
      let methodname = new StringName("is_collision_using_scale");
      this._bindings.method_is_collision_using_scale = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("ParticleProcessMaterial");
      let methodname = new StringName("set_collision_friction");
      this._bindings.method_set_collision_friction = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("ParticleProcessMaterial");
      let methodname = new StringName("get_collision_friction");
      this._bindings.method_get_collision_friction = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("ParticleProcessMaterial");
      let methodname = new StringName("set_collision_bounce");
      this._bindings.method_set_collision_bounce = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("ParticleProcessMaterial");
      let methodname = new StringName("get_collision_bounce");
      this._bindings.method_get_collision_bounce = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
  }
  set_direction(_degrees) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_direction,
      this._owner,
      _degrees
    );
    
  }
  get_direction() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_direction,
      this._owner,
			Variant.Type.VECTOR3,
    
      
    );
    
  }
  set_inherit_velocity_ratio(_ratio) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_inherit_velocity_ratio,
      this._owner,
      _ratio
    );
    
  }
  get_inherit_velocity_ratio() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_inherit_velocity_ratio,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_spread(_degrees) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_spread,
      this._owner,
      _degrees
    );
    
  }
  get_spread() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_spread,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_flatness(_amount) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_flatness,
      this._owner,
      _amount
    );
    
  }
  get_flatness() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_flatness,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_param(_param, _value) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_param,
      this._owner,
      _param, _value
    );
    
  }
  get_param(_param) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_param,
      this._owner,
			Variant.Type.VECTOR2,
    
      _param
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
  set_param_texture(_param, _texture) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_param_texture,
      this._owner,
      _param, _texture
    );
    
  }
  get_param_texture(_param) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_param_texture,
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
			Variant.Type.COLOR,
    
      
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
  set_alpha_curve(_curve) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_alpha_curve,
      this._owner,
      _curve
    );
    
  }
  get_alpha_curve() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_alpha_curve,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_emission_curve(_curve) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_emission_curve,
      this._owner,
      _curve
    );
    
  }
  get_emission_curve() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_emission_curve,
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
  set_velocity_limit_curve(_curve) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_velocity_limit_curve,
      this._owner,
      _curve
    );
    
  }
  get_velocity_limit_curve() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_velocity_limit_curve,
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
  set_velocity_pivot(_pivot) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_velocity_pivot,
      this._owner,
      _pivot
    );
    
  }
  get_velocity_pivot() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_velocity_pivot,
      this._owner,
			Variant.Type.VECTOR3,
    
      
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
  set_emission_box_extents(_extents) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_emission_box_extents,
      this._owner,
      _extents
    );
    
  }
  get_emission_box_extents() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_emission_box_extents,
      this._owner,
			Variant.Type.VECTOR3,
    
      
    );
    
  }
  set_emission_point_texture(_texture) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_emission_point_texture,
      this._owner,
      _texture
    );
    
  }
  get_emission_point_texture() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_emission_point_texture,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_emission_normal_texture(_texture) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_emission_normal_texture,
      this._owner,
      _texture
    );
    
  }
  get_emission_normal_texture() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_emission_normal_texture,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_emission_color_texture(_texture) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_emission_color_texture,
      this._owner,
      _texture
    );
    
  }
  get_emission_color_texture() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_emission_color_texture,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_emission_point_count(_point_count) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_emission_point_count,
      this._owner,
      _point_count
    );
    
  }
  get_emission_point_count() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_emission_point_count,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_emission_ring_axis(_axis) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_emission_ring_axis,
      this._owner,
      _axis
    );
    
  }
  get_emission_ring_axis() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_emission_ring_axis,
      this._owner,
			Variant.Type.VECTOR3,
    
      
    );
    
  }
  set_emission_ring_height(_height) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_emission_ring_height,
      this._owner,
      _height
    );
    
  }
  get_emission_ring_height() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_emission_ring_height,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_emission_ring_radius(_radius) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_emission_ring_radius,
      this._owner,
      _radius
    );
    
  }
  get_emission_ring_radius() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_emission_ring_radius,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_emission_ring_inner_radius(_inner_radius) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_emission_ring_inner_radius,
      this._owner,
      _inner_radius
    );
    
  }
  get_emission_ring_inner_radius() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_emission_ring_inner_radius,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_emission_shape_offset(_emission_shape_offset) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_emission_shape_offset,
      this._owner,
      _emission_shape_offset
    );
    
  }
  get_emission_shape_offset() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_emission_shape_offset,
      this._owner,
			Variant.Type.VECTOR3,
    
      
    );
    
  }
  set_emission_shape_scale(_emission_shape_scale) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_emission_shape_scale,
      this._owner,
      _emission_shape_scale
    );
    
  }
  get_emission_shape_scale() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_emission_shape_scale,
      this._owner,
			Variant.Type.VECTOR3,
    
      
    );
    
  }
  get_turbulence_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_turbulence_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_turbulence_enabled(_turbulence_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_turbulence_enabled,
      this._owner,
      _turbulence_enabled
    );
    
  }
  get_turbulence_noise_strength() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_turbulence_noise_strength,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_turbulence_noise_strength(_turbulence_noise_strength) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_turbulence_noise_strength,
      this._owner,
      _turbulence_noise_strength
    );
    
  }
  get_turbulence_noise_scale() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_turbulence_noise_scale,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_turbulence_noise_scale(_turbulence_noise_scale) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_turbulence_noise_scale,
      this._owner,
      _turbulence_noise_scale
    );
    
  }
  get_turbulence_noise_speed_random() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_turbulence_noise_speed_random,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_turbulence_noise_speed_random(_turbulence_noise_speed_random) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_turbulence_noise_speed_random,
      this._owner,
      _turbulence_noise_speed_random
    );
    
  }
  get_turbulence_noise_speed() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_turbulence_noise_speed,
      this._owner,
			Variant.Type.VECTOR3,
    
      
    );
    
  }
  set_turbulence_noise_speed(_turbulence_noise_speed) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_turbulence_noise_speed,
      this._owner,
      _turbulence_noise_speed
    );
    
  }
  get_gravity() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_gravity,
      this._owner,
			Variant.Type.VECTOR3,
    
      
    );
    
  }
  set_gravity(_accel_vec) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_gravity,
      this._owner,
      _accel_vec
    );
    
  }
  set_lifetime_randomness(_randomness) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_lifetime_randomness,
      this._owner,
      _randomness
    );
    
  }
  get_lifetime_randomness() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_lifetime_randomness,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  get_sub_emitter_mode() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_sub_emitter_mode,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_sub_emitter_mode(_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_sub_emitter_mode,
      this._owner,
      _mode
    );
    
  }
  get_sub_emitter_frequency() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_sub_emitter_frequency,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_sub_emitter_frequency(_hz) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_sub_emitter_frequency,
      this._owner,
      _hz
    );
    
  }
  get_sub_emitter_amount_at_end() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_sub_emitter_amount_at_end,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_sub_emitter_amount_at_end(_amount) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_sub_emitter_amount_at_end,
      this._owner,
      _amount
    );
    
  }
  get_sub_emitter_amount_at_collision() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_sub_emitter_amount_at_collision,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_sub_emitter_amount_at_collision(_amount) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_sub_emitter_amount_at_collision,
      this._owner,
      _amount
    );
    
  }
  get_sub_emitter_keep_velocity() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_sub_emitter_keep_velocity,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_sub_emitter_keep_velocity(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_sub_emitter_keep_velocity,
      this._owner,
      _enable
    );
    
  }
  set_attractor_interaction_enabled(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_attractor_interaction_enabled,
      this._owner,
      _enabled
    );
    
  }
  is_attractor_interaction_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_attractor_interaction_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_collision_mode(_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_collision_mode,
      this._owner,
      _mode
    );
    
  }
  get_collision_mode() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_collision_mode,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_collision_use_scale(_radius) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_collision_use_scale,
      this._owner,
      _radius
    );
    
  }
  is_collision_using_scale() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_collision_using_scale,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_collision_friction(_friction) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_collision_friction,
      this._owner,
      _friction
    );
    
  }
  get_collision_friction() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_collision_friction,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_collision_bounce(_bounce) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_collision_bounce,
      this._owner,
      _bounce
    );
    
  }
  get_collision_bounce() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_collision_bounce,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  
get lifetime_randomness () {
  return this.get_lifetime_randomness();
}
set lifetime_randomness (new_value) {
  this.set_lifetime_randomness(new_value);
}
get particle_flag_align_y () {
  return this.get_particle_flag();
}
set particle_flag_align_y (new_value) {
  this.set_particle_flag(new_value);
}
get particle_flag_rotate_y () {
  return this.get_particle_flag();
}
set particle_flag_rotate_y (new_value) {
  this.set_particle_flag(new_value);
}
get particle_flag_disable_z () {
  return this.get_particle_flag();
}
set particle_flag_disable_z (new_value) {
  this.set_particle_flag(new_value);
}
get particle_flag_damping_as_friction () {
  return this.get_particle_flag();
}
set particle_flag_damping_as_friction (new_value) {
  this.set_particle_flag(new_value);
}
get emission_shape_offset () {
  return this.get_emission_shape_offset();
}
set emission_shape_offset (new_value) {
  this.set_emission_shape_offset(new_value);
}
get emission_shape_scale () {
  return this.get_emission_shape_scale();
}
set emission_shape_scale (new_value) {
  this.set_emission_shape_scale(new_value);
}
get emission_shape () {
  return this.get_emission_shape();
}
set emission_shape (new_value) {
  this.set_emission_shape(new_value);
}
get emission_sphere_radius () {
  return this.get_emission_sphere_radius();
}
set emission_sphere_radius (new_value) {
  this.set_emission_sphere_radius(new_value);
}
get emission_box_extents () {
  return this.get_emission_box_extents();
}
set emission_box_extents (new_value) {
  this.set_emission_box_extents(new_value);
}
get emission_point_texture () {
  return this.get_emission_point_texture();
}
set emission_point_texture (new_value) {
  this.set_emission_point_texture(new_value);
}
get emission_normal_texture () {
  return this.get_emission_normal_texture();
}
set emission_normal_texture (new_value) {
  this.set_emission_normal_texture(new_value);
}
get emission_color_texture () {
  return this.get_emission_color_texture();
}
set emission_color_texture (new_value) {
  this.set_emission_color_texture(new_value);
}
get emission_point_count () {
  return this.get_emission_point_count();
}
set emission_point_count (new_value) {
  this.set_emission_point_count(new_value);
}
get emission_ring_axis () {
  return this.get_emission_ring_axis();
}
set emission_ring_axis (new_value) {
  this.set_emission_ring_axis(new_value);
}
get emission_ring_height () {
  return this.get_emission_ring_height();
}
set emission_ring_height (new_value) {
  this.set_emission_ring_height(new_value);
}
get emission_ring_radius () {
  return this.get_emission_ring_radius();
}
set emission_ring_radius (new_value) {
  this.set_emission_ring_radius(new_value);
}
get emission_ring_inner_radius () {
  return this.get_emission_ring_inner_radius();
}
set emission_ring_inner_radius (new_value) {
  this.set_emission_ring_inner_radius(new_value);
}
get angle () {
  return this.get_param();
}
set angle (new_value) {
  this.set_param(new_value);
}
get angle_min () {
  return this.get_param_min();
}
set angle_min (new_value) {
  this.set_param_min(new_value);
}
get angle_max () {
  return this.get_param_max();
}
set angle_max (new_value) {
  this.set_param_max(new_value);
}
get angle_curve () {
  return this.get_param_texture();
}
set angle_curve (new_value) {
  this.set_param_texture(new_value);
}
get inherit_velocity_ratio () {
  return this.get_inherit_velocity_ratio();
}
set inherit_velocity_ratio (new_value) {
  this.set_inherit_velocity_ratio(new_value);
}
get velocity_pivot () {
  return this.get_velocity_pivot();
}
set velocity_pivot (new_value) {
  this.set_velocity_pivot(new_value);
}
get direction () {
  return this.get_direction();
}
set direction (new_value) {
  this.set_direction(new_value);
}
get spread () {
  return this.get_spread();
}
set spread (new_value) {
  this.set_spread(new_value);
}
get flatness () {
  return this.get_flatness();
}
set flatness (new_value) {
  this.set_flatness(new_value);
}
get initial_velocity () {
  return this.get_param();
}
set initial_velocity (new_value) {
  this.set_param(new_value);
}
get initial_velocity_min () {
  return this.get_param_min();
}
set initial_velocity_min (new_value) {
  this.set_param_min(new_value);
}
get initial_velocity_max () {
  return this.get_param_max();
}
set initial_velocity_max (new_value) {
  this.set_param_max(new_value);
}
get angular_velocity () {
  return this.get_param();
}
set angular_velocity (new_value) {
  this.set_param(new_value);
}
get angular_velocity_min () {
  return this.get_param_min();
}
set angular_velocity_min (new_value) {
  this.set_param_min(new_value);
}
get angular_velocity_max () {
  return this.get_param_max();
}
set angular_velocity_max (new_value) {
  this.set_param_max(new_value);
}
get angular_velocity_curve () {
  return this.get_param_texture();
}
set angular_velocity_curve (new_value) {
  this.set_param_texture(new_value);
}
get directional_velocity () {
  return this.get_param();
}
set directional_velocity (new_value) {
  this.set_param(new_value);
}
get directional_velocity_min () {
  return this.get_param_min();
}
set directional_velocity_min (new_value) {
  this.set_param_min(new_value);
}
get directional_velocity_max () {
  return this.get_param_max();
}
set directional_velocity_max (new_value) {
  this.set_param_max(new_value);
}
get directional_velocity_curve () {
  return this.get_param_texture();
}
set directional_velocity_curve (new_value) {
  this.set_param_texture(new_value);
}
get orbit_velocity () {
  return this.get_param();
}
set orbit_velocity (new_value) {
  this.set_param(new_value);
}
get orbit_velocity_min () {
  return this.get_param_min();
}
set orbit_velocity_min (new_value) {
  this.set_param_min(new_value);
}
get orbit_velocity_max () {
  return this.get_param_max();
}
set orbit_velocity_max (new_value) {
  this.set_param_max(new_value);
}
get orbit_velocity_curve () {
  return this.get_param_texture();
}
set orbit_velocity_curve (new_value) {
  this.set_param_texture(new_value);
}
get radial_velocity () {
  return this.get_param();
}
set radial_velocity (new_value) {
  this.set_param(new_value);
}
get radial_velocity_min () {
  return this.get_param_min();
}
set radial_velocity_min (new_value) {
  this.set_param_min(new_value);
}
get radial_velocity_max () {
  return this.get_param_max();
}
set radial_velocity_max (new_value) {
  this.set_param_max(new_value);
}
get radial_velocity_curve () {
  return this.get_param_texture();
}
set radial_velocity_curve (new_value) {
  this.set_param_texture(new_value);
}
get velocity_limit_curve () {
  return this.get_velocity_limit_curve();
}
set velocity_limit_curve (new_value) {
  this.set_velocity_limit_curve(new_value);
}
get gravity () {
  return this.get_gravity();
}
set gravity (new_value) {
  this.set_gravity(new_value);
}
get linear_accel () {
  return this.get_param();
}
set linear_accel (new_value) {
  this.set_param(new_value);
}
get linear_accel_min () {
  return this.get_param_min();
}
set linear_accel_min (new_value) {
  this.set_param_min(new_value);
}
get linear_accel_max () {
  return this.get_param_max();
}
set linear_accel_max (new_value) {
  this.set_param_max(new_value);
}
get linear_accel_curve () {
  return this.get_param_texture();
}
set linear_accel_curve (new_value) {
  this.set_param_texture(new_value);
}
get radial_accel () {
  return this.get_param();
}
set radial_accel (new_value) {
  this.set_param(new_value);
}
get radial_accel_min () {
  return this.get_param_min();
}
set radial_accel_min (new_value) {
  this.set_param_min(new_value);
}
get radial_accel_max () {
  return this.get_param_max();
}
set radial_accel_max (new_value) {
  this.set_param_max(new_value);
}
get radial_accel_curve () {
  return this.get_param_texture();
}
set radial_accel_curve (new_value) {
  this.set_param_texture(new_value);
}
get tangential_accel () {
  return this.get_param();
}
set tangential_accel (new_value) {
  this.set_param(new_value);
}
get tangential_accel_min () {
  return this.get_param_min();
}
set tangential_accel_min (new_value) {
  this.set_param_min(new_value);
}
get tangential_accel_max () {
  return this.get_param_max();
}
set tangential_accel_max (new_value) {
  this.set_param_max(new_value);
}
get tangential_accel_curve () {
  return this.get_param_texture();
}
set tangential_accel_curve (new_value) {
  this.set_param_texture(new_value);
}
get damping () {
  return this.get_param();
}
set damping (new_value) {
  this.set_param(new_value);
}
get damping_min () {
  return this.get_param_min();
}
set damping_min (new_value) {
  this.set_param_min(new_value);
}
get damping_max () {
  return this.get_param_max();
}
set damping_max (new_value) {
  this.set_param_max(new_value);
}
get damping_curve () {
  return this.get_param_texture();
}
set damping_curve (new_value) {
  this.set_param_texture(new_value);
}
get attractor_interaction_enabled () {
  return this.is_attractor_interaction_enabled();
}
set attractor_interaction_enabled (new_value) {
  this.set_attractor_interaction_enabled(new_value);
}
get scale () {
  return this.get_param();
}
set scale (new_value) {
  this.set_param(new_value);
}
get scale_min () {
  return this.get_param_min();
}
set scale_min (new_value) {
  this.set_param_min(new_value);
}
get scale_max () {
  return this.get_param_max();
}
set scale_max (new_value) {
  this.set_param_max(new_value);
}
get scale_curve () {
  return this.get_param_texture();
}
set scale_curve (new_value) {
  this.set_param_texture(new_value);
}
get scale_over_velocity () {
  return this.get_param();
}
set scale_over_velocity (new_value) {
  this.set_param(new_value);
}
get scale_over_velocity_min () {
  return this.get_param_min();
}
set scale_over_velocity_min (new_value) {
  this.set_param_min(new_value);
}
get scale_over_velocity_max () {
  return this.get_param_max();
}
set scale_over_velocity_max (new_value) {
  this.set_param_max(new_value);
}
get scale_over_velocity_curve () {
  return this.get_param_texture();
}
set scale_over_velocity_curve (new_value) {
  this.set_param_texture(new_value);
}
get color () {
  return this.get_color();
}
set color (new_value) {
  this.set_color(new_value);
}
get color_ramp () {
  return this.get_color_ramp();
}
set color_ramp (new_value) {
  this.set_color_ramp(new_value);
}
get color_initial_ramp () {
  return this.get_color_initial_ramp();
}
set color_initial_ramp (new_value) {
  this.set_color_initial_ramp(new_value);
}
get alpha_curve () {
  return this.get_alpha_curve();
}
set alpha_curve (new_value) {
  this.set_alpha_curve(new_value);
}
get emission_curve () {
  return this.get_emission_curve();
}
set emission_curve (new_value) {
  this.set_emission_curve(new_value);
}
get hue_variation () {
  return this.get_param();
}
set hue_variation (new_value) {
  this.set_param(new_value);
}
get hue_variation_min () {
  return this.get_param_min();
}
set hue_variation_min (new_value) {
  this.set_param_min(new_value);
}
get hue_variation_max () {
  return this.get_param_max();
}
set hue_variation_max (new_value) {
  this.set_param_max(new_value);
}
get hue_variation_curve () {
  return this.get_param_texture();
}
set hue_variation_curve (new_value) {
  this.set_param_texture(new_value);
}
get anim_speed () {
  return this.get_param();
}
set anim_speed (new_value) {
  this.set_param(new_value);
}
get anim_speed_min () {
  return this.get_param_min();
}
set anim_speed_min (new_value) {
  this.set_param_min(new_value);
}
get anim_speed_max () {
  return this.get_param_max();
}
set anim_speed_max (new_value) {
  this.set_param_max(new_value);
}
get anim_speed_curve () {
  return this.get_param_texture();
}
set anim_speed_curve (new_value) {
  this.set_param_texture(new_value);
}
get anim_offset () {
  return this.get_param();
}
set anim_offset (new_value) {
  this.set_param(new_value);
}
get anim_offset_min () {
  return this.get_param_min();
}
set anim_offset_min (new_value) {
  this.set_param_min(new_value);
}
get anim_offset_max () {
  return this.get_param_max();
}
set anim_offset_max (new_value) {
  this.set_param_max(new_value);
}
get anim_offset_curve () {
  return this.get_param_texture();
}
set anim_offset_curve (new_value) {
  this.set_param_texture(new_value);
}
get turbulence_enabled () {
  return this.get_turbulence_enabled();
}
set turbulence_enabled (new_value) {
  this.set_turbulence_enabled(new_value);
}
get turbulence_noise_strength () {
  return this.get_turbulence_noise_strength();
}
set turbulence_noise_strength (new_value) {
  this.set_turbulence_noise_strength(new_value);
}
get turbulence_noise_scale () {
  return this.get_turbulence_noise_scale();
}
set turbulence_noise_scale (new_value) {
  this.set_turbulence_noise_scale(new_value);
}
get turbulence_noise_speed () {
  return this.get_turbulence_noise_speed();
}
set turbulence_noise_speed (new_value) {
  this.set_turbulence_noise_speed(new_value);
}
get turbulence_noise_speed_random () {
  return this.get_turbulence_noise_speed_random();
}
set turbulence_noise_speed_random (new_value) {
  this.set_turbulence_noise_speed_random(new_value);
}
get turbulence_influence () {
  return this.get_param();
}
set turbulence_influence (new_value) {
  this.set_param(new_value);
}
get turbulence_influence_min () {
  return this.get_param_min();
}
set turbulence_influence_min (new_value) {
  this.set_param_min(new_value);
}
get turbulence_influence_max () {
  return this.get_param_max();
}
set turbulence_influence_max (new_value) {
  this.set_param_max(new_value);
}
get turbulence_initial_displacement () {
  return this.get_param();
}
set turbulence_initial_displacement (new_value) {
  this.set_param(new_value);
}
get turbulence_initial_displacement_min () {
  return this.get_param_min();
}
set turbulence_initial_displacement_min (new_value) {
  this.set_param_min(new_value);
}
get turbulence_initial_displacement_max () {
  return this.get_param_max();
}
set turbulence_initial_displacement_max (new_value) {
  this.set_param_max(new_value);
}
get turbulence_influence_over_life () {
  return this.get_param_texture();
}
set turbulence_influence_over_life (new_value) {
  this.set_param_texture(new_value);
}
get collision_mode () {
  return this.get_collision_mode();
}
set collision_mode (new_value) {
  this.set_collision_mode(new_value);
}
get collision_friction () {
  return this.get_collision_friction();
}
set collision_friction (new_value) {
  this.set_collision_friction(new_value);
}
get collision_bounce () {
  return this.get_collision_bounce();
}
set collision_bounce (new_value) {
  this.set_collision_bounce(new_value);
}
get collision_use_scale () {
  return this.is_collision_using_scale();
}
set collision_use_scale (new_value) {
  this.set_collision_use_scale(new_value);
}
get sub_emitter_mode () {
  return this.get_sub_emitter_mode();
}
set sub_emitter_mode (new_value) {
  this.set_sub_emitter_mode(new_value);
}
get sub_emitter_frequency () {
  return this.get_sub_emitter_frequency();
}
set sub_emitter_frequency (new_value) {
  this.set_sub_emitter_frequency(new_value);
}
get sub_emitter_amount_at_end () {
  return this.get_sub_emitter_amount_at_end();
}
set sub_emitter_amount_at_end (new_value) {
  this.set_sub_emitter_amount_at_end(new_value);
}
get sub_emitter_amount_at_collision () {
  return this.get_sub_emitter_amount_at_collision();
}
set sub_emitter_amount_at_collision (new_value) {
  this.set_sub_emitter_amount_at_collision(new_value);
}
get sub_emitter_keep_velocity () {
  return this.get_sub_emitter_keep_velocity();
}
set sub_emitter_keep_velocity (new_value) {
  this.set_sub_emitter_keep_velocity(new_value);
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
    PARAM_RADIAL_VELOCITY: 15,
    PARAM_DIRECTIONAL_VELOCITY: 16,
    PARAM_SCALE_OVER_VELOCITY: 17,
    PARAM_MAX: 18,
    PARAM_TURB_VEL_INFLUENCE: 13,
    PARAM_TURB_INIT_DISPLACEMENT: 14,
    PARAM_TURB_INFLUENCE_OVER_LIFE: 12,
  }
  static ParticleFlags = {
    PARTICLE_FLAG_ALIGN_Y_TO_VELOCITY: 0,
    PARTICLE_FLAG_ROTATE_Y: 1,
    PARTICLE_FLAG_DISABLE_Z: 2,
    PARTICLE_FLAG_DAMPING_AS_FRICTION: 3,
    PARTICLE_FLAG_MAX: 4,
  }
  static EmissionShape = {
    EMISSION_SHAPE_POINT: 0,
    EMISSION_SHAPE_SPHERE: 1,
    EMISSION_SHAPE_SPHERE_SURFACE: 2,
    EMISSION_SHAPE_BOX: 3,
    EMISSION_SHAPE_POINTS: 4,
    EMISSION_SHAPE_DIRECTED_POINTS: 5,
    EMISSION_SHAPE_RING: 6,
    EMISSION_SHAPE_MAX: 7,
  }
  static SubEmitterMode = {
    SUB_EMITTER_DISABLED: 0,
    SUB_EMITTER_CONSTANT: 1,
    SUB_EMITTER_AT_END: 2,
    SUB_EMITTER_AT_COLLISION: 3,
    SUB_EMITTER_MAX: 4,
  }
  static CollisionMode = {
    COLLISION_DISABLED: 0,
    COLLISION_RIGID: 1,
    COLLISION_HIDE_ON_CONTACT: 2,
    COLLISION_MAX: 3,
  }

  static {
    this._init_bindings();
  }
}