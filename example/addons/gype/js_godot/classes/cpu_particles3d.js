import * as internal from '__internal__';
import { AABB } from '@js_godot/variant/aabb'
import { StringName } from '@js_godot/variant/string_name'
import { PackedVector3Array } from '@js_godot/variant/packed_vector3_array'
import { GeometryInstance3D } from '@js_godot/classes/geometry_instance3d'
import { PackedColorArray } from '@js_godot/variant/packed_color_array'
import { Color } from '@js_godot/variant/color'
import { Variant } from '@js_godot/variant/variant'
import { Vector3 } from '@js_godot/variant/vector3'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_emitting;
  method_set_amount;
  method_set_lifetime;
  method_set_one_shot;
  method_set_pre_process_time;
  method_set_explosiveness_ratio;
  method_set_randomness_ratio;
  method_set_visibility_aabb;
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
  method_get_visibility_aabb;
  method_get_lifetime_randomness;
  method_get_use_local_coordinates;
  method_get_fixed_fps;
  method_get_fractional_delta;
  method_get_speed_scale;
  method_set_draw_order;
  method_get_draw_order;
  method_set_mesh;
  method_get_mesh;
  method_restart;
  method_set_direction;
  method_get_direction;
  method_set_spread;
  method_get_spread;
  method_set_flatness;
  method_get_flatness;
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
  method_set_emission_box_extents;
  method_get_emission_box_extents;
  method_set_emission_points;
  method_get_emission_points;
  method_set_emission_normals;
  method_get_emission_normals;
  method_set_emission_colors;
  method_get_emission_colors;
  method_set_emission_ring_axis;
  method_get_emission_ring_axis;
  method_set_emission_ring_height;
  method_get_emission_ring_height;
  method_set_emission_ring_radius;
  method_get_emission_ring_radius;
  method_set_emission_ring_inner_radius;
  method_get_emission_ring_inner_radius;
  method_get_gravity;
  method_set_gravity;
  method_get_split_scale;
  method_set_split_scale;
  method_get_scale_curve_x;
  method_set_scale_curve_x;
  method_get_scale_curve_y;
  method_set_scale_curve_y;
  method_get_scale_curve_z;
  method_set_scale_curve_z;
  method_convert_from_particles;
}
export class CPUParticles3D extends GeometryInstance3D{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("CPUParticles3D");
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
      let classname = new StringName("CPUParticles3D");
      let methodname = new StringName("set_emitting");
      this._bindings.method_set_emitting = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("CPUParticles3D");
      let methodname = new StringName("set_amount");
      this._bindings.method_set_amount = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("CPUParticles3D");
      let methodname = new StringName("set_lifetime");
      this._bindings.method_set_lifetime = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("CPUParticles3D");
      let methodname = new StringName("set_one_shot");
      this._bindings.method_set_one_shot = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("CPUParticles3D");
      let methodname = new StringName("set_pre_process_time");
      this._bindings.method_set_pre_process_time = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("CPUParticles3D");
      let methodname = new StringName("set_explosiveness_ratio");
      this._bindings.method_set_explosiveness_ratio = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("CPUParticles3D");
      let methodname = new StringName("set_randomness_ratio");
      this._bindings.method_set_randomness_ratio = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("CPUParticles3D");
      let methodname = new StringName("set_visibility_aabb");
      this._bindings.method_set_visibility_aabb = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        259215842
      );
    }
    {
      let classname = new StringName("CPUParticles3D");
      let methodname = new StringName("set_lifetime_randomness");
      this._bindings.method_set_lifetime_randomness = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("CPUParticles3D");
      let methodname = new StringName("set_use_local_coordinates");
      this._bindings.method_set_use_local_coordinates = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("CPUParticles3D");
      let methodname = new StringName("set_fixed_fps");
      this._bindings.method_set_fixed_fps = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("CPUParticles3D");
      let methodname = new StringName("set_fractional_delta");
      this._bindings.method_set_fractional_delta = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("CPUParticles3D");
      let methodname = new StringName("set_speed_scale");
      this._bindings.method_set_speed_scale = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("CPUParticles3D");
      let methodname = new StringName("is_emitting");
      this._bindings.method_is_emitting = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("CPUParticles3D");
      let methodname = new StringName("get_amount");
      this._bindings.method_get_amount = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("CPUParticles3D");
      let methodname = new StringName("get_lifetime");
      this._bindings.method_get_lifetime = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("CPUParticles3D");
      let methodname = new StringName("get_one_shot");
      this._bindings.method_get_one_shot = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("CPUParticles3D");
      let methodname = new StringName("get_pre_process_time");
      this._bindings.method_get_pre_process_time = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("CPUParticles3D");
      let methodname = new StringName("get_explosiveness_ratio");
      this._bindings.method_get_explosiveness_ratio = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("CPUParticles3D");
      let methodname = new StringName("get_randomness_ratio");
      this._bindings.method_get_randomness_ratio = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("CPUParticles3D");
      let methodname = new StringName("get_visibility_aabb");
      this._bindings.method_get_visibility_aabb = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1068685055
      );
    }
    {
      let classname = new StringName("CPUParticles3D");
      let methodname = new StringName("get_lifetime_randomness");
      this._bindings.method_get_lifetime_randomness = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("CPUParticles3D");
      let methodname = new StringName("get_use_local_coordinates");
      this._bindings.method_get_use_local_coordinates = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("CPUParticles3D");
      let methodname = new StringName("get_fixed_fps");
      this._bindings.method_get_fixed_fps = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("CPUParticles3D");
      let methodname = new StringName("get_fractional_delta");
      this._bindings.method_get_fractional_delta = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("CPUParticles3D");
      let methodname = new StringName("get_speed_scale");
      this._bindings.method_get_speed_scale = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("CPUParticles3D");
      let methodname = new StringName("set_draw_order");
      this._bindings.method_set_draw_order = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1427401774
      );
    }
    {
      let classname = new StringName("CPUParticles3D");
      let methodname = new StringName("get_draw_order");
      this._bindings.method_get_draw_order = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1321900776
      );
    }
    {
      let classname = new StringName("CPUParticles3D");
      let methodname = new StringName("set_mesh");
      this._bindings.method_set_mesh = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        194775623
      );
    }
    {
      let classname = new StringName("CPUParticles3D");
      let methodname = new StringName("get_mesh");
      this._bindings.method_get_mesh = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1808005922
      );
    }
    {
      let classname = new StringName("CPUParticles3D");
      let methodname = new StringName("restart");
      this._bindings.method_restart = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("CPUParticles3D");
      let methodname = new StringName("set_direction");
      this._bindings.method_set_direction = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3460891852
      );
    }
    {
      let classname = new StringName("CPUParticles3D");
      let methodname = new StringName("get_direction");
      this._bindings.method_get_direction = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3360562783
      );
    }
    {
      let classname = new StringName("CPUParticles3D");
      let methodname = new StringName("set_spread");
      this._bindings.method_set_spread = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("CPUParticles3D");
      let methodname = new StringName("get_spread");
      this._bindings.method_get_spread = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("CPUParticles3D");
      let methodname = new StringName("set_flatness");
      this._bindings.method_set_flatness = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("CPUParticles3D");
      let methodname = new StringName("get_flatness");
      this._bindings.method_get_flatness = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("CPUParticles3D");
      let methodname = new StringName("set_param_min");
      this._bindings.method_set_param_min = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        557936109
      );
    }
    {
      let classname = new StringName("CPUParticles3D");
      let methodname = new StringName("get_param_min");
      this._bindings.method_get_param_min = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        597646162
      );
    }
    {
      let classname = new StringName("CPUParticles3D");
      let methodname = new StringName("set_param_max");
      this._bindings.method_set_param_max = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        557936109
      );
    }
    {
      let classname = new StringName("CPUParticles3D");
      let methodname = new StringName("get_param_max");
      this._bindings.method_get_param_max = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        597646162
      );
    }
    {
      let classname = new StringName("CPUParticles3D");
      let methodname = new StringName("set_param_curve");
      this._bindings.method_set_param_curve = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4044142537
      );
    }
    {
      let classname = new StringName("CPUParticles3D");
      let methodname = new StringName("get_param_curve");
      this._bindings.method_get_param_curve = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4132790277
      );
    }
    {
      let classname = new StringName("CPUParticles3D");
      let methodname = new StringName("set_color");
      this._bindings.method_set_color = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2920490490
      );
    }
    {
      let classname = new StringName("CPUParticles3D");
      let methodname = new StringName("get_color");
      this._bindings.method_get_color = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3444240500
      );
    }
    {
      let classname = new StringName("CPUParticles3D");
      let methodname = new StringName("set_color_ramp");
      this._bindings.method_set_color_ramp = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2756054477
      );
    }
    {
      let classname = new StringName("CPUParticles3D");
      let methodname = new StringName("get_color_ramp");
      this._bindings.method_get_color_ramp = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        132272999
      );
    }
    {
      let classname = new StringName("CPUParticles3D");
      let methodname = new StringName("set_color_initial_ramp");
      this._bindings.method_set_color_initial_ramp = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2756054477
      );
    }
    {
      let classname = new StringName("CPUParticles3D");
      let methodname = new StringName("get_color_initial_ramp");
      this._bindings.method_get_color_initial_ramp = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        132272999
      );
    }
    {
      let classname = new StringName("CPUParticles3D");
      let methodname = new StringName("set_particle_flag");
      this._bindings.method_set_particle_flag = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3515406498
      );
    }
    {
      let classname = new StringName("CPUParticles3D");
      let methodname = new StringName("get_particle_flag");
      this._bindings.method_get_particle_flag = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2845201987
      );
    }
    {
      let classname = new StringName("CPUParticles3D");
      let methodname = new StringName("set_emission_shape");
      this._bindings.method_set_emission_shape = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        491823814
      );
    }
    {
      let classname = new StringName("CPUParticles3D");
      let methodname = new StringName("get_emission_shape");
      this._bindings.method_get_emission_shape = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2961454842
      );
    }
    {
      let classname = new StringName("CPUParticles3D");
      let methodname = new StringName("set_emission_sphere_radius");
      this._bindings.method_set_emission_sphere_radius = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("CPUParticles3D");
      let methodname = new StringName("get_emission_sphere_radius");
      this._bindings.method_get_emission_sphere_radius = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("CPUParticles3D");
      let methodname = new StringName("set_emission_box_extents");
      this._bindings.method_set_emission_box_extents = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3460891852
      );
    }
    {
      let classname = new StringName("CPUParticles3D");
      let methodname = new StringName("get_emission_box_extents");
      this._bindings.method_get_emission_box_extents = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3360562783
      );
    }
    {
      let classname = new StringName("CPUParticles3D");
      let methodname = new StringName("set_emission_points");
      this._bindings.method_set_emission_points = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        334873810
      );
    }
    {
      let classname = new StringName("CPUParticles3D");
      let methodname = new StringName("get_emission_points");
      this._bindings.method_get_emission_points = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        497664490
      );
    }
    {
      let classname = new StringName("CPUParticles3D");
      let methodname = new StringName("set_emission_normals");
      this._bindings.method_set_emission_normals = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        334873810
      );
    }
    {
      let classname = new StringName("CPUParticles3D");
      let methodname = new StringName("get_emission_normals");
      this._bindings.method_get_emission_normals = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        497664490
      );
    }
    {
      let classname = new StringName("CPUParticles3D");
      let methodname = new StringName("set_emission_colors");
      this._bindings.method_set_emission_colors = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3546319833
      );
    }
    {
      let classname = new StringName("CPUParticles3D");
      let methodname = new StringName("get_emission_colors");
      this._bindings.method_get_emission_colors = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1392750486
      );
    }
    {
      let classname = new StringName("CPUParticles3D");
      let methodname = new StringName("set_emission_ring_axis");
      this._bindings.method_set_emission_ring_axis = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3460891852
      );
    }
    {
      let classname = new StringName("CPUParticles3D");
      let methodname = new StringName("get_emission_ring_axis");
      this._bindings.method_get_emission_ring_axis = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3360562783
      );
    }
    {
      let classname = new StringName("CPUParticles3D");
      let methodname = new StringName("set_emission_ring_height");
      this._bindings.method_set_emission_ring_height = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("CPUParticles3D");
      let methodname = new StringName("get_emission_ring_height");
      this._bindings.method_get_emission_ring_height = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("CPUParticles3D");
      let methodname = new StringName("set_emission_ring_radius");
      this._bindings.method_set_emission_ring_radius = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("CPUParticles3D");
      let methodname = new StringName("get_emission_ring_radius");
      this._bindings.method_get_emission_ring_radius = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("CPUParticles3D");
      let methodname = new StringName("set_emission_ring_inner_radius");
      this._bindings.method_set_emission_ring_inner_radius = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("CPUParticles3D");
      let methodname = new StringName("get_emission_ring_inner_radius");
      this._bindings.method_get_emission_ring_inner_radius = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("CPUParticles3D");
      let methodname = new StringName("get_gravity");
      this._bindings.method_get_gravity = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3360562783
      );
    }
    {
      let classname = new StringName("CPUParticles3D");
      let methodname = new StringName("set_gravity");
      this._bindings.method_set_gravity = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3460891852
      );
    }
    {
      let classname = new StringName("CPUParticles3D");
      let methodname = new StringName("get_split_scale");
      this._bindings.method_get_split_scale = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2240911060
      );
    }
    {
      let classname = new StringName("CPUParticles3D");
      let methodname = new StringName("set_split_scale");
      this._bindings.method_set_split_scale = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("CPUParticles3D");
      let methodname = new StringName("get_scale_curve_x");
      this._bindings.method_get_scale_curve_x = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2460114913
      );
    }
    {
      let classname = new StringName("CPUParticles3D");
      let methodname = new StringName("set_scale_curve_x");
      this._bindings.method_set_scale_curve_x = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        270443179
      );
    }
    {
      let classname = new StringName("CPUParticles3D");
      let methodname = new StringName("get_scale_curve_y");
      this._bindings.method_get_scale_curve_y = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2460114913
      );
    }
    {
      let classname = new StringName("CPUParticles3D");
      let methodname = new StringName("set_scale_curve_y");
      this._bindings.method_set_scale_curve_y = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        270443179
      );
    }
    {
      let classname = new StringName("CPUParticles3D");
      let methodname = new StringName("get_scale_curve_z");
      this._bindings.method_get_scale_curve_z = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2460114913
      );
    }
    {
      let classname = new StringName("CPUParticles3D");
      let methodname = new StringName("set_scale_curve_z");
      this._bindings.method_set_scale_curve_z = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        270443179
      );
    }
    {
      let classname = new StringName("CPUParticles3D");
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
      CPUParticles3D._bindings.method_set_emitting,
      this._owner,
      _emitting
    );
    
  }
  set_amount(_amount) {
    return _call_native_mb_no_ret(
      CPUParticles3D._bindings.method_set_amount,
      this._owner,
      _amount
    );
    
  }
  set_lifetime(_secs) {
    return _call_native_mb_no_ret(
      CPUParticles3D._bindings.method_set_lifetime,
      this._owner,
      _secs
    );
    
  }
  set_one_shot(_enable) {
    return _call_native_mb_no_ret(
      CPUParticles3D._bindings.method_set_one_shot,
      this._owner,
      _enable
    );
    
  }
  set_pre_process_time(_secs) {
    return _call_native_mb_no_ret(
      CPUParticles3D._bindings.method_set_pre_process_time,
      this._owner,
      _secs
    );
    
  }
  set_explosiveness_ratio(_ratio) {
    return _call_native_mb_no_ret(
      CPUParticles3D._bindings.method_set_explosiveness_ratio,
      this._owner,
      _ratio
    );
    
  }
  set_randomness_ratio(_ratio) {
    return _call_native_mb_no_ret(
      CPUParticles3D._bindings.method_set_randomness_ratio,
      this._owner,
      _ratio
    );
    
  }
  set_visibility_aabb(_aabb) {
    return _call_native_mb_no_ret(
      CPUParticles3D._bindings.method_set_visibility_aabb,
      this._owner,
      _aabb
    );
    
  }
  set_lifetime_randomness(_random) {
    return _call_native_mb_no_ret(
      CPUParticles3D._bindings.method_set_lifetime_randomness,
      this._owner,
      _random
    );
    
  }
  set_use_local_coordinates(_enable) {
    return _call_native_mb_no_ret(
      CPUParticles3D._bindings.method_set_use_local_coordinates,
      this._owner,
      _enable
    );
    
  }
  set_fixed_fps(_fps) {
    return _call_native_mb_no_ret(
      CPUParticles3D._bindings.method_set_fixed_fps,
      this._owner,
      _fps
    );
    
  }
  set_fractional_delta(_enable) {
    return _call_native_mb_no_ret(
      CPUParticles3D._bindings.method_set_fractional_delta,
      this._owner,
      _enable
    );
    
  }
  set_speed_scale(_scale) {
    return _call_native_mb_no_ret(
      CPUParticles3D._bindings.method_set_speed_scale,
      this._owner,
      _scale
    );
    
  }
  is_emitting() {
    return _call_native_mb_ret(
      CPUParticles3D._bindings.method_is_emitting,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  get_amount() {
    return _call_native_mb_ret(
      CPUParticles3D._bindings.method_get_amount,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  get_lifetime() {
    return _call_native_mb_ret(
      CPUParticles3D._bindings.method_get_lifetime,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  get_one_shot() {
    return _call_native_mb_ret(
      CPUParticles3D._bindings.method_get_one_shot,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  get_pre_process_time() {
    return _call_native_mb_ret(
      CPUParticles3D._bindings.method_get_pre_process_time,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  get_explosiveness_ratio() {
    return _call_native_mb_ret(
      CPUParticles3D._bindings.method_get_explosiveness_ratio,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  get_randomness_ratio() {
    return _call_native_mb_ret(
      CPUParticles3D._bindings.method_get_randomness_ratio,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  get_visibility_aabb() {
    return _call_native_mb_ret(
      CPUParticles3D._bindings.method_get_visibility_aabb,
      this._owner,
			Variant.Type.AABB,
    
      
    );
    
  }
  get_lifetime_randomness() {
    return _call_native_mb_ret(
      CPUParticles3D._bindings.method_get_lifetime_randomness,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  get_use_local_coordinates() {
    return _call_native_mb_ret(
      CPUParticles3D._bindings.method_get_use_local_coordinates,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  get_fixed_fps() {
    return _call_native_mb_ret(
      CPUParticles3D._bindings.method_get_fixed_fps,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  get_fractional_delta() {
    return _call_native_mb_ret(
      CPUParticles3D._bindings.method_get_fractional_delta,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  get_speed_scale() {
    return _call_native_mb_ret(
      CPUParticles3D._bindings.method_get_speed_scale,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_draw_order(_order) {
    return _call_native_mb_no_ret(
      CPUParticles3D._bindings.method_set_draw_order,
      this._owner,
      _order
    );
    
  }
  get_draw_order() {
    return _call_native_mb_ret(
      CPUParticles3D._bindings.method_get_draw_order,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_mesh(_mesh) {
    return _call_native_mb_no_ret(
      CPUParticles3D._bindings.method_set_mesh,
      this._owner,
      _mesh
    );
    
  }
  get_mesh() {
    return _call_native_mb_ret(
      CPUParticles3D._bindings.method_get_mesh,
      this._owner,
			Variant.INT,
      
    );
    
  }
  restart() {
    return _call_native_mb_no_ret(
      CPUParticles3D._bindings.method_restart,
      this._owner,
      
    );
    
  }
  set_direction(_direction) {
    return _call_native_mb_no_ret(
      CPUParticles3D._bindings.method_set_direction,
      this._owner,
      _direction
    );
    
  }
  get_direction() {
    return _call_native_mb_ret(
      CPUParticles3D._bindings.method_get_direction,
      this._owner,
			Variant.Type.VECTOR3,
    
      
    );
    
  }
  set_spread(_degrees) {
    return _call_native_mb_no_ret(
      CPUParticles3D._bindings.method_set_spread,
      this._owner,
      _degrees
    );
    
  }
  get_spread() {
    return _call_native_mb_ret(
      CPUParticles3D._bindings.method_get_spread,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_flatness(_amount) {
    return _call_native_mb_no_ret(
      CPUParticles3D._bindings.method_set_flatness,
      this._owner,
      _amount
    );
    
  }
  get_flatness() {
    return _call_native_mb_ret(
      CPUParticles3D._bindings.method_get_flatness,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_param_min(_param, _value) {
    return _call_native_mb_no_ret(
      CPUParticles3D._bindings.method_set_param_min,
      this._owner,
      _param, _value
    );
    
  }
  get_param_min(_param) {
    return _call_native_mb_ret(
      CPUParticles3D._bindings.method_get_param_min,
      this._owner,
			Variant.Type.FLOAT,
      _param
    );
    
  }
  set_param_max(_param, _value) {
    return _call_native_mb_no_ret(
      CPUParticles3D._bindings.method_set_param_max,
      this._owner,
      _param, _value
    );
    
  }
  get_param_max(_param) {
    return _call_native_mb_ret(
      CPUParticles3D._bindings.method_get_param_max,
      this._owner,
			Variant.Type.FLOAT,
      _param
    );
    
  }
  set_param_curve(_param, _curve) {
    return _call_native_mb_no_ret(
      CPUParticles3D._bindings.method_set_param_curve,
      this._owner,
      _param, _curve
    );
    
  }
  get_param_curve(_param) {
    return _call_native_mb_ret(
      CPUParticles3D._bindings.method_get_param_curve,
      this._owner,
			Variant.INT,
      _param
    );
    
  }
  set_color(_color) {
    return _call_native_mb_no_ret(
      CPUParticles3D._bindings.method_set_color,
      this._owner,
      _color
    );
    
  }
  get_color() {
    return _call_native_mb_ret(
      CPUParticles3D._bindings.method_get_color,
      this._owner,
			Variant.Type.COLOR,
    
      
    );
    
  }
  set_color_ramp(_ramp) {
    return _call_native_mb_no_ret(
      CPUParticles3D._bindings.method_set_color_ramp,
      this._owner,
      _ramp
    );
    
  }
  get_color_ramp() {
    return _call_native_mb_ret(
      CPUParticles3D._bindings.method_get_color_ramp,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_color_initial_ramp(_ramp) {
    return _call_native_mb_no_ret(
      CPUParticles3D._bindings.method_set_color_initial_ramp,
      this._owner,
      _ramp
    );
    
  }
  get_color_initial_ramp() {
    return _call_native_mb_ret(
      CPUParticles3D._bindings.method_get_color_initial_ramp,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_particle_flag(_particle_flag, _enable) {
    return _call_native_mb_no_ret(
      CPUParticles3D._bindings.method_set_particle_flag,
      this._owner,
      _particle_flag, _enable
    );
    
  }
  get_particle_flag(_particle_flag) {
    return _call_native_mb_ret(
      CPUParticles3D._bindings.method_get_particle_flag,
      this._owner,
			Variant.Type.BOOL,
      _particle_flag
    );
    
  }
  set_emission_shape(_shape) {
    return _call_native_mb_no_ret(
      CPUParticles3D._bindings.method_set_emission_shape,
      this._owner,
      _shape
    );
    
  }
  get_emission_shape() {
    return _call_native_mb_ret(
      CPUParticles3D._bindings.method_get_emission_shape,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_emission_sphere_radius(_radius) {
    return _call_native_mb_no_ret(
      CPUParticles3D._bindings.method_set_emission_sphere_radius,
      this._owner,
      _radius
    );
    
  }
  get_emission_sphere_radius() {
    return _call_native_mb_ret(
      CPUParticles3D._bindings.method_get_emission_sphere_radius,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_emission_box_extents(_extents) {
    return _call_native_mb_no_ret(
      CPUParticles3D._bindings.method_set_emission_box_extents,
      this._owner,
      _extents
    );
    
  }
  get_emission_box_extents() {
    return _call_native_mb_ret(
      CPUParticles3D._bindings.method_get_emission_box_extents,
      this._owner,
			Variant.Type.VECTOR3,
    
      
    );
    
  }
  set_emission_points(_array) {
    return _call_native_mb_no_ret(
      CPUParticles3D._bindings.method_set_emission_points,
      this._owner,
      _array
    );
    
  }
  get_emission_points() {
    return _call_native_mb_ret(
      CPUParticles3D._bindings.method_get_emission_points,
      this._owner,
			Variant.Type.PACKED_VECTOR3_ARRAY,
    
      
    );
    
  }
  set_emission_normals(_array) {
    return _call_native_mb_no_ret(
      CPUParticles3D._bindings.method_set_emission_normals,
      this._owner,
      _array
    );
    
  }
  get_emission_normals() {
    return _call_native_mb_ret(
      CPUParticles3D._bindings.method_get_emission_normals,
      this._owner,
			Variant.Type.PACKED_VECTOR3_ARRAY,
    
      
    );
    
  }
  set_emission_colors(_array) {
    return _call_native_mb_no_ret(
      CPUParticles3D._bindings.method_set_emission_colors,
      this._owner,
      _array
    );
    
  }
  get_emission_colors() {
    return _call_native_mb_ret(
      CPUParticles3D._bindings.method_get_emission_colors,
      this._owner,
			Variant.Type.PACKED_COLOR_ARRAY,
    
      
    );
    
  }
  set_emission_ring_axis(_axis) {
    return _call_native_mb_no_ret(
      CPUParticles3D._bindings.method_set_emission_ring_axis,
      this._owner,
      _axis
    );
    
  }
  get_emission_ring_axis() {
    return _call_native_mb_ret(
      CPUParticles3D._bindings.method_get_emission_ring_axis,
      this._owner,
			Variant.Type.VECTOR3,
    
      
    );
    
  }
  set_emission_ring_height(_height) {
    return _call_native_mb_no_ret(
      CPUParticles3D._bindings.method_set_emission_ring_height,
      this._owner,
      _height
    );
    
  }
  get_emission_ring_height() {
    return _call_native_mb_ret(
      CPUParticles3D._bindings.method_get_emission_ring_height,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_emission_ring_radius(_radius) {
    return _call_native_mb_no_ret(
      CPUParticles3D._bindings.method_set_emission_ring_radius,
      this._owner,
      _radius
    );
    
  }
  get_emission_ring_radius() {
    return _call_native_mb_ret(
      CPUParticles3D._bindings.method_get_emission_ring_radius,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_emission_ring_inner_radius(_inner_radius) {
    return _call_native_mb_no_ret(
      CPUParticles3D._bindings.method_set_emission_ring_inner_radius,
      this._owner,
      _inner_radius
    );
    
  }
  get_emission_ring_inner_radius() {
    return _call_native_mb_ret(
      CPUParticles3D._bindings.method_get_emission_ring_inner_radius,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  get_gravity() {
    return _call_native_mb_ret(
      CPUParticles3D._bindings.method_get_gravity,
      this._owner,
			Variant.Type.VECTOR3,
    
      
    );
    
  }
  set_gravity(_accel_vec) {
    return _call_native_mb_no_ret(
      CPUParticles3D._bindings.method_set_gravity,
      this._owner,
      _accel_vec
    );
    
  }
  get_split_scale() {
    return _call_native_mb_ret(
      CPUParticles3D._bindings.method_get_split_scale,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_split_scale(_split_scale) {
    return _call_native_mb_no_ret(
      CPUParticles3D._bindings.method_set_split_scale,
      this._owner,
      _split_scale
    );
    
  }
  get_scale_curve_x() {
    return _call_native_mb_ret(
      CPUParticles3D._bindings.method_get_scale_curve_x,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_scale_curve_x(_scale_curve) {
    return _call_native_mb_no_ret(
      CPUParticles3D._bindings.method_set_scale_curve_x,
      this._owner,
      _scale_curve
    );
    
  }
  get_scale_curve_y() {
    return _call_native_mb_ret(
      CPUParticles3D._bindings.method_get_scale_curve_y,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_scale_curve_y(_scale_curve) {
    return _call_native_mb_no_ret(
      CPUParticles3D._bindings.method_set_scale_curve_y,
      this._owner,
      _scale_curve
    );
    
  }
  get_scale_curve_z() {
    return _call_native_mb_ret(
      CPUParticles3D._bindings.method_get_scale_curve_z,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_scale_curve_z(_scale_curve) {
    return _call_native_mb_no_ret(
      CPUParticles3D._bindings.method_set_scale_curve_z,
      this._owner,
      _scale_curve
    );
    
  }
  convert_from_particles(_particles) {
    return _call_native_mb_no_ret(
      CPUParticles3D._bindings.method_convert_from_particles,
      this._owner,
      _particles
    );
    
  }
  
get emitting () {
  return this.is_emitting();
}
set emitting (new_value) {
  this.set_emitting(new_value);
}
get amount () {
  return this.get_amount();
}
set amount (new_value) {
  this.set_amount(new_value);
}
get lifetime () {
  return this.get_lifetime();
}
set lifetime (new_value) {
  this.set_lifetime(new_value);
}
get one_shot () {
  return this.get_one_shot();
}
set one_shot (new_value) {
  this.set_one_shot(new_value);
}
get preprocess () {
  return this.get_pre_process_time();
}
set preprocess (new_value) {
  this.set_pre_process_time(new_value);
}
get speed_scale () {
  return this.get_speed_scale();
}
set speed_scale (new_value) {
  this.set_speed_scale(new_value);
}
get explosiveness () {
  return this.get_explosiveness_ratio();
}
set explosiveness (new_value) {
  this.set_explosiveness_ratio(new_value);
}
get randomness () {
  return this.get_randomness_ratio();
}
set randomness (new_value) {
  this.set_randomness_ratio(new_value);
}
get lifetime_randomness () {
  return this.get_lifetime_randomness();
}
set lifetime_randomness (new_value) {
  this.set_lifetime_randomness(new_value);
}
get fixed_fps () {
  return this.get_fixed_fps();
}
set fixed_fps (new_value) {
  this.set_fixed_fps(new_value);
}
get fract_delta () {
  return this.get_fractional_delta();
}
set fract_delta (new_value) {
  this.set_fractional_delta(new_value);
}
get visibility_aabb () {
  return this.get_visibility_aabb();
}
set visibility_aabb (new_value) {
  this.set_visibility_aabb(new_value);
}
get local_coords () {
  return this.get_use_local_coordinates();
}
set local_coords (new_value) {
  this.set_use_local_coordinates(new_value);
}
get draw_order () {
  return this.get_draw_order();
}
set draw_order (new_value) {
  this.set_draw_order(new_value);
}
get mesh () {
  return this.get_mesh();
}
set mesh (new_value) {
  this.set_mesh(new_value);
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
get emission_points () {
  return this.get_emission_points();
}
set emission_points (new_value) {
  this.set_emission_points(new_value);
}
get emission_normals () {
  return this.get_emission_normals();
}
set emission_normals (new_value) {
  this.set_emission_normals(new_value);
}
get emission_colors () {
  return this.get_emission_colors();
}
set emission_colors (new_value) {
  this.set_emission_colors(new_value);
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
get gravity () {
  return this.get_gravity();
}
set gravity (new_value) {
  this.set_gravity(new_value);
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
  return this.get_param_curve();
}
set angular_velocity_curve (new_value) {
  this.set_param_curve(new_value);
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
  return this.get_param_curve();
}
set orbit_velocity_curve (new_value) {
  this.set_param_curve(new_value);
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
  return this.get_param_curve();
}
set linear_accel_curve (new_value) {
  this.set_param_curve(new_value);
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
  return this.get_param_curve();
}
set radial_accel_curve (new_value) {
  this.set_param_curve(new_value);
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
  return this.get_param_curve();
}
set tangential_accel_curve (new_value) {
  this.set_param_curve(new_value);
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
  return this.get_param_curve();
}
set damping_curve (new_value) {
  this.set_param_curve(new_value);
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
  return this.get_param_curve();
}
set angle_curve (new_value) {
  this.set_param_curve(new_value);
}
get scale_amount_min () {
  return this.get_param_min();
}
set scale_amount_min (new_value) {
  this.set_param_min(new_value);
}
get scale_amount_max () {
  return this.get_param_max();
}
set scale_amount_max (new_value) {
  this.set_param_max(new_value);
}
get scale_amount_curve () {
  return this.get_param_curve();
}
set scale_amount_curve (new_value) {
  this.set_param_curve(new_value);
}
get split_scale () {
  return this.get_split_scale();
}
set split_scale (new_value) {
  this.set_split_scale(new_value);
}
get scale_curve_x () {
  return this.get_scale_curve_x();
}
set scale_curve_x (new_value) {
  this.set_scale_curve_x(new_value);
}
get scale_curve_y () {
  return this.get_scale_curve_y();
}
set scale_curve_y (new_value) {
  this.set_scale_curve_y(new_value);
}
get scale_curve_z () {
  return this.get_scale_curve_z();
}
set scale_curve_z (new_value) {
  this.set_scale_curve_z(new_value);
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
  return this.get_param_curve();
}
set hue_variation_curve (new_value) {
  this.set_param_curve(new_value);
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
  return this.get_param_curve();
}
set anim_speed_curve (new_value) {
  this.set_param_curve(new_value);
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
  return this.get_param_curve();
}
set anim_offset_curve (new_value) {
  this.set_param_curve(new_value);
}

  static DrawOrder = {
    DRAW_ORDER_INDEX: 0,
    DRAW_ORDER_LIFETIME: 1,
    DRAW_ORDER_VIEW_DEPTH: 2,
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
    EMISSION_SHAPE_BOX: 3,
    EMISSION_SHAPE_POINTS: 4,
    EMISSION_SHAPE_DIRECTED_POINTS: 5,
    EMISSION_SHAPE_RING: 6,
    EMISSION_SHAPE_MAX: 7,
  }

  static {
    this._init_bindings();
  }
}