import * as internal from '__internal__';
import { NodePath } from '@js_godot/variant/node_path'
import { Transform3D } from '@js_godot/variant/transform3d'
import { AABB } from '@js_godot/variant/aabb'
import { Color } from '@js_godot/variant/color'
import { Variant } from '@js_godot/variant/variant'
import { GeometryInstance3D } from '@js_godot/classes/geometry_instance3d'
import { StringName } from '@js_godot/variant/string_name'
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
  method_set_use_local_coordinates;
  method_set_fixed_fps;
  method_set_fractional_delta;
  method_set_interpolate;
  method_set_process_material;
  method_set_speed_scale;
  method_set_collision_base_size;
  method_set_interp_to_end;
  method_is_emitting;
  method_get_amount;
  method_get_lifetime;
  method_get_one_shot;
  method_get_pre_process_time;
  method_get_explosiveness_ratio;
  method_get_randomness_ratio;
  method_get_visibility_aabb;
  method_get_use_local_coordinates;
  method_get_fixed_fps;
  method_get_fractional_delta;
  method_get_interpolate;
  method_get_process_material;
  method_get_speed_scale;
  method_get_collision_base_size;
  method_get_interp_to_end;
  method_set_draw_order;
  method_get_draw_order;
  method_set_draw_passes;
  method_set_draw_pass_mesh;
  method_get_draw_passes;
  method_get_draw_pass_mesh;
  method_set_skin;
  method_get_skin;
  method_restart;
  method_capture_aabb;
  method_set_sub_emitter;
  method_get_sub_emitter;
  method_emit_particle;
  method_set_trail_enabled;
  method_set_trail_lifetime;
  method_is_trail_enabled;
  method_get_trail_lifetime;
  method_set_transform_align;
  method_get_transform_align;
  method_convert_from_particles;
  method_set_amount_ratio;
  method_get_amount_ratio;
}
export class GPUParticles3D extends GeometryInstance3D{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("GPUParticles3D");
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
      let classname = new StringName("GPUParticles3D");
      let methodname = new StringName("set_emitting");
      this._bindings.method_set_emitting = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("GPUParticles3D");
      let methodname = new StringName("set_amount");
      this._bindings.method_set_amount = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("GPUParticles3D");
      let methodname = new StringName("set_lifetime");
      this._bindings.method_set_lifetime = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("GPUParticles3D");
      let methodname = new StringName("set_one_shot");
      this._bindings.method_set_one_shot = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("GPUParticles3D");
      let methodname = new StringName("set_pre_process_time");
      this._bindings.method_set_pre_process_time = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("GPUParticles3D");
      let methodname = new StringName("set_explosiveness_ratio");
      this._bindings.method_set_explosiveness_ratio = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("GPUParticles3D");
      let methodname = new StringName("set_randomness_ratio");
      this._bindings.method_set_randomness_ratio = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("GPUParticles3D");
      let methodname = new StringName("set_visibility_aabb");
      this._bindings.method_set_visibility_aabb = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        259215842
      );
    }
    {
      let classname = new StringName("GPUParticles3D");
      let methodname = new StringName("set_use_local_coordinates");
      this._bindings.method_set_use_local_coordinates = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("GPUParticles3D");
      let methodname = new StringName("set_fixed_fps");
      this._bindings.method_set_fixed_fps = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("GPUParticles3D");
      let methodname = new StringName("set_fractional_delta");
      this._bindings.method_set_fractional_delta = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("GPUParticles3D");
      let methodname = new StringName("set_interpolate");
      this._bindings.method_set_interpolate = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("GPUParticles3D");
      let methodname = new StringName("set_process_material");
      this._bindings.method_set_process_material = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2757459619
      );
    }
    {
      let classname = new StringName("GPUParticles3D");
      let methodname = new StringName("set_speed_scale");
      this._bindings.method_set_speed_scale = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("GPUParticles3D");
      let methodname = new StringName("set_collision_base_size");
      this._bindings.method_set_collision_base_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("GPUParticles3D");
      let methodname = new StringName("set_interp_to_end");
      this._bindings.method_set_interp_to_end = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("GPUParticles3D");
      let methodname = new StringName("is_emitting");
      this._bindings.method_is_emitting = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("GPUParticles3D");
      let methodname = new StringName("get_amount");
      this._bindings.method_get_amount = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("GPUParticles3D");
      let methodname = new StringName("get_lifetime");
      this._bindings.method_get_lifetime = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("GPUParticles3D");
      let methodname = new StringName("get_one_shot");
      this._bindings.method_get_one_shot = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("GPUParticles3D");
      let methodname = new StringName("get_pre_process_time");
      this._bindings.method_get_pre_process_time = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("GPUParticles3D");
      let methodname = new StringName("get_explosiveness_ratio");
      this._bindings.method_get_explosiveness_ratio = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("GPUParticles3D");
      let methodname = new StringName("get_randomness_ratio");
      this._bindings.method_get_randomness_ratio = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("GPUParticles3D");
      let methodname = new StringName("get_visibility_aabb");
      this._bindings.method_get_visibility_aabb = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1068685055
      );
    }
    {
      let classname = new StringName("GPUParticles3D");
      let methodname = new StringName("get_use_local_coordinates");
      this._bindings.method_get_use_local_coordinates = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("GPUParticles3D");
      let methodname = new StringName("get_fixed_fps");
      this._bindings.method_get_fixed_fps = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("GPUParticles3D");
      let methodname = new StringName("get_fractional_delta");
      this._bindings.method_get_fractional_delta = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("GPUParticles3D");
      let methodname = new StringName("get_interpolate");
      this._bindings.method_get_interpolate = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("GPUParticles3D");
      let methodname = new StringName("get_process_material");
      this._bindings.method_get_process_material = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        5934680
      );
    }
    {
      let classname = new StringName("GPUParticles3D");
      let methodname = new StringName("get_speed_scale");
      this._bindings.method_get_speed_scale = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("GPUParticles3D");
      let methodname = new StringName("get_collision_base_size");
      this._bindings.method_get_collision_base_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("GPUParticles3D");
      let methodname = new StringName("get_interp_to_end");
      this._bindings.method_get_interp_to_end = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("GPUParticles3D");
      let methodname = new StringName("set_draw_order");
      this._bindings.method_set_draw_order = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1208074815
      );
    }
    {
      let classname = new StringName("GPUParticles3D");
      let methodname = new StringName("get_draw_order");
      this._bindings.method_get_draw_order = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3770381780
      );
    }
    {
      let classname = new StringName("GPUParticles3D");
      let methodname = new StringName("set_draw_passes");
      this._bindings.method_set_draw_passes = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("GPUParticles3D");
      let methodname = new StringName("set_draw_pass_mesh");
      this._bindings.method_set_draw_pass_mesh = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        969122797
      );
    }
    {
      let classname = new StringName("GPUParticles3D");
      let methodname = new StringName("get_draw_passes");
      this._bindings.method_get_draw_passes = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("GPUParticles3D");
      let methodname = new StringName("get_draw_pass_mesh");
      this._bindings.method_get_draw_pass_mesh = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1576363275
      );
    }
    {
      let classname = new StringName("GPUParticles3D");
      let methodname = new StringName("set_skin");
      this._bindings.method_set_skin = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3971435618
      );
    }
    {
      let classname = new StringName("GPUParticles3D");
      let methodname = new StringName("get_skin");
      this._bindings.method_get_skin = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2074563878
      );
    }
    {
      let classname = new StringName("GPUParticles3D");
      let methodname = new StringName("restart");
      this._bindings.method_restart = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("GPUParticles3D");
      let methodname = new StringName("capture_aabb");
      this._bindings.method_capture_aabb = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1068685055
      );
    }
    {
      let classname = new StringName("GPUParticles3D");
      let methodname = new StringName("set_sub_emitter");
      this._bindings.method_set_sub_emitter = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1348162250
      );
    }
    {
      let classname = new StringName("GPUParticles3D");
      let methodname = new StringName("get_sub_emitter");
      this._bindings.method_get_sub_emitter = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4075236667
      );
    }
    {
      let classname = new StringName("GPUParticles3D");
      let methodname = new StringName("emit_particle");
      this._bindings.method_emit_particle = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        992173727
      );
    }
    {
      let classname = new StringName("GPUParticles3D");
      let methodname = new StringName("set_trail_enabled");
      this._bindings.method_set_trail_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("GPUParticles3D");
      let methodname = new StringName("set_trail_lifetime");
      this._bindings.method_set_trail_lifetime = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("GPUParticles3D");
      let methodname = new StringName("is_trail_enabled");
      this._bindings.method_is_trail_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("GPUParticles3D");
      let methodname = new StringName("get_trail_lifetime");
      this._bindings.method_get_trail_lifetime = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("GPUParticles3D");
      let methodname = new StringName("set_transform_align");
      this._bindings.method_set_transform_align = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3892425954
      );
    }
    {
      let classname = new StringName("GPUParticles3D");
      let methodname = new StringName("get_transform_align");
      this._bindings.method_get_transform_align = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2100992166
      );
    }
    {
      let classname = new StringName("GPUParticles3D");
      let methodname = new StringName("convert_from_particles");
      this._bindings.method_convert_from_particles = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1078189570
      );
    }
    {
      let classname = new StringName("GPUParticles3D");
      let methodname = new StringName("set_amount_ratio");
      this._bindings.method_set_amount_ratio = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("GPUParticles3D");
      let methodname = new StringName("get_amount_ratio");
      this._bindings.method_get_amount_ratio = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
  }
  
  set_emitting(_emitting) {
    return _call_native_mb_no_ret(
      GPUParticles3D._bindings.method_set_emitting,
      this._owner,
      _emitting
    );
    
  }
  set_amount(_amount) {
    return _call_native_mb_no_ret(
      GPUParticles3D._bindings.method_set_amount,
      this._owner,
      _amount
    );
    
  }
  set_lifetime(_secs) {
    return _call_native_mb_no_ret(
      GPUParticles3D._bindings.method_set_lifetime,
      this._owner,
      _secs
    );
    
  }
  set_one_shot(_enable) {
    return _call_native_mb_no_ret(
      GPUParticles3D._bindings.method_set_one_shot,
      this._owner,
      _enable
    );
    
  }
  set_pre_process_time(_secs) {
    return _call_native_mb_no_ret(
      GPUParticles3D._bindings.method_set_pre_process_time,
      this._owner,
      _secs
    );
    
  }
  set_explosiveness_ratio(_ratio) {
    return _call_native_mb_no_ret(
      GPUParticles3D._bindings.method_set_explosiveness_ratio,
      this._owner,
      _ratio
    );
    
  }
  set_randomness_ratio(_ratio) {
    return _call_native_mb_no_ret(
      GPUParticles3D._bindings.method_set_randomness_ratio,
      this._owner,
      _ratio
    );
    
  }
  set_visibility_aabb(_aabb) {
    return _call_native_mb_no_ret(
      GPUParticles3D._bindings.method_set_visibility_aabb,
      this._owner,
      _aabb
    );
    
  }
  set_use_local_coordinates(_enable) {
    return _call_native_mb_no_ret(
      GPUParticles3D._bindings.method_set_use_local_coordinates,
      this._owner,
      _enable
    );
    
  }
  set_fixed_fps(_fps) {
    return _call_native_mb_no_ret(
      GPUParticles3D._bindings.method_set_fixed_fps,
      this._owner,
      _fps
    );
    
  }
  set_fractional_delta(_enable) {
    return _call_native_mb_no_ret(
      GPUParticles3D._bindings.method_set_fractional_delta,
      this._owner,
      _enable
    );
    
  }
  set_interpolate(_enable) {
    return _call_native_mb_no_ret(
      GPUParticles3D._bindings.method_set_interpolate,
      this._owner,
      _enable
    );
    
  }
  set_process_material(_material) {
    return _call_native_mb_no_ret(
      GPUParticles3D._bindings.method_set_process_material,
      this._owner,
      _material
    );
    
  }
  set_speed_scale(_scale) {
    return _call_native_mb_no_ret(
      GPUParticles3D._bindings.method_set_speed_scale,
      this._owner,
      _scale
    );
    
  }
  set_collision_base_size(_size) {
    return _call_native_mb_no_ret(
      GPUParticles3D._bindings.method_set_collision_base_size,
      this._owner,
      _size
    );
    
  }
  set_interp_to_end(_interp) {
    return _call_native_mb_no_ret(
      GPUParticles3D._bindings.method_set_interp_to_end,
      this._owner,
      _interp
    );
    
  }
  is_emitting() {
    return _call_native_mb_ret(
      GPUParticles3D._bindings.method_is_emitting,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  get_amount() {
    return _call_native_mb_ret(
      GPUParticles3D._bindings.method_get_amount,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  get_lifetime() {
    return _call_native_mb_ret(
      GPUParticles3D._bindings.method_get_lifetime,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  get_one_shot() {
    return _call_native_mb_ret(
      GPUParticles3D._bindings.method_get_one_shot,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  get_pre_process_time() {
    return _call_native_mb_ret(
      GPUParticles3D._bindings.method_get_pre_process_time,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  get_explosiveness_ratio() {
    return _call_native_mb_ret(
      GPUParticles3D._bindings.method_get_explosiveness_ratio,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  get_randomness_ratio() {
    return _call_native_mb_ret(
      GPUParticles3D._bindings.method_get_randomness_ratio,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  get_visibility_aabb() {
    return _call_native_mb_ret(
      GPUParticles3D._bindings.method_get_visibility_aabb,
      this._owner,
			Variant.Type.AABB,
    
      
    );
    
  }
  get_use_local_coordinates() {
    return _call_native_mb_ret(
      GPUParticles3D._bindings.method_get_use_local_coordinates,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  get_fixed_fps() {
    return _call_native_mb_ret(
      GPUParticles3D._bindings.method_get_fixed_fps,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  get_fractional_delta() {
    return _call_native_mb_ret(
      GPUParticles3D._bindings.method_get_fractional_delta,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  get_interpolate() {
    return _call_native_mb_ret(
      GPUParticles3D._bindings.method_get_interpolate,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  get_process_material() {
    return _call_native_mb_ret(
      GPUParticles3D._bindings.method_get_process_material,
      this._owner,
			Variant.INT,
      
    );
    
  }
  get_speed_scale() {
    return _call_native_mb_ret(
      GPUParticles3D._bindings.method_get_speed_scale,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  get_collision_base_size() {
    return _call_native_mb_ret(
      GPUParticles3D._bindings.method_get_collision_base_size,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  get_interp_to_end() {
    return _call_native_mb_ret(
      GPUParticles3D._bindings.method_get_interp_to_end,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_draw_order(_order) {
    return _call_native_mb_no_ret(
      GPUParticles3D._bindings.method_set_draw_order,
      this._owner,
      _order
    );
    
  }
  get_draw_order() {
    return _call_native_mb_ret(
      GPUParticles3D._bindings.method_get_draw_order,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_draw_passes(_passes) {
    return _call_native_mb_no_ret(
      GPUParticles3D._bindings.method_set_draw_passes,
      this._owner,
      _passes
    );
    
  }
  set_draw_pass_mesh(_pass, _mesh) {
    return _call_native_mb_no_ret(
      GPUParticles3D._bindings.method_set_draw_pass_mesh,
      this._owner,
      _pass, _mesh
    );
    
  }
  get_draw_passes() {
    return _call_native_mb_ret(
      GPUParticles3D._bindings.method_get_draw_passes,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  get_draw_pass_mesh(_pass) {
    return _call_native_mb_ret(
      GPUParticles3D._bindings.method_get_draw_pass_mesh,
      this._owner,
			Variant.INT,
      _pass
    );
    
  }
  set_skin(_skin) {
    return _call_native_mb_no_ret(
      GPUParticles3D._bindings.method_set_skin,
      this._owner,
      _skin
    );
    
  }
  get_skin() {
    return _call_native_mb_ret(
      GPUParticles3D._bindings.method_get_skin,
      this._owner,
			Variant.INT,
      
    );
    
  }
  restart() {
    return _call_native_mb_no_ret(
      GPUParticles3D._bindings.method_restart,
      this._owner,
      
    );
    
  }
  capture_aabb() {
    return _call_native_mb_ret(
      GPUParticles3D._bindings.method_capture_aabb,
      this._owner,
			Variant.Type.AABB,
    
      
    );
    
  }
  set_sub_emitter(_path) {
    return _call_native_mb_no_ret(
      GPUParticles3D._bindings.method_set_sub_emitter,
      this._owner,
      _path
    );
    
  }
  get_sub_emitter() {
    return _call_native_mb_ret(
      GPUParticles3D._bindings.method_get_sub_emitter,
      this._owner,
			Variant.Type.NODE_PATH,
    
      
    );
    
  }
  emit_particle(_xform, _velocity, _color, _custom, _flags) {
    return _call_native_mb_no_ret(
      GPUParticles3D._bindings.method_emit_particle,
      this._owner,
      _xform, _velocity, _color, _custom, _flags
    );
    
  }
  set_trail_enabled(_enabled) {
    return _call_native_mb_no_ret(
      GPUParticles3D._bindings.method_set_trail_enabled,
      this._owner,
      _enabled
    );
    
  }
  set_trail_lifetime(_secs) {
    return _call_native_mb_no_ret(
      GPUParticles3D._bindings.method_set_trail_lifetime,
      this._owner,
      _secs
    );
    
  }
  is_trail_enabled() {
    return _call_native_mb_ret(
      GPUParticles3D._bindings.method_is_trail_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  get_trail_lifetime() {
    return _call_native_mb_ret(
      GPUParticles3D._bindings.method_get_trail_lifetime,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_transform_align(_align) {
    return _call_native_mb_no_ret(
      GPUParticles3D._bindings.method_set_transform_align,
      this._owner,
      _align
    );
    
  }
  get_transform_align() {
    return _call_native_mb_ret(
      GPUParticles3D._bindings.method_get_transform_align,
      this._owner,
			Variant.INT,
      
    );
    
  }
  convert_from_particles(_particles) {
    return _call_native_mb_no_ret(
      GPUParticles3D._bindings.method_convert_from_particles,
      this._owner,
      _particles
    );
    
  }
  set_amount_ratio(_ratio) {
    return _call_native_mb_no_ret(
      GPUParticles3D._bindings.method_set_amount_ratio,
      this._owner,
      _ratio
    );
    
  }
  get_amount_ratio() {
    return _call_native_mb_ret(
      GPUParticles3D._bindings.method_get_amount_ratio,
      this._owner,
			Variant.Type.FLOAT,
      
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
get amount_ratio () {
  return this.get_amount_ratio();
}
set amount_ratio (new_value) {
  this.set_amount_ratio(new_value);
}
get sub_emitter () {
  return this.get_sub_emitter();
}
set sub_emitter (new_value) {
  this.set_sub_emitter(new_value);
}
get lifetime () {
  return this.get_lifetime();
}
set lifetime (new_value) {
  this.set_lifetime(new_value);
}
get interp_to_end () {
  return this.get_interp_to_end();
}
set interp_to_end (new_value) {
  this.set_interp_to_end(new_value);
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
get fixed_fps () {
  return this.get_fixed_fps();
}
set fixed_fps (new_value) {
  this.set_fixed_fps(new_value);
}
get interpolate () {
  return this.get_interpolate();
}
set interpolate (new_value) {
  this.set_interpolate(new_value);
}
get fract_delta () {
  return this.get_fractional_delta();
}
set fract_delta (new_value) {
  this.set_fractional_delta(new_value);
}
get collision_base_size () {
  return this.get_collision_base_size();
}
set collision_base_size (new_value) {
  this.set_collision_base_size(new_value);
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
get transform_align () {
  return this.get_transform_align();
}
set transform_align (new_value) {
  this.set_transform_align(new_value);
}
get trail_enabled () {
  return this.is_trail_enabled();
}
set trail_enabled (new_value) {
  this.set_trail_enabled(new_value);
}
get trail_lifetime () {
  return this.get_trail_lifetime();
}
set trail_lifetime (new_value) {
  this.set_trail_lifetime(new_value);
}
get process_material () {
  return this.get_process_material();
}
set process_material (new_value) {
  this.set_process_material(new_value);
}
get draw_passes () {
  return this.get_draw_passes();
}
set draw_passes (new_value) {
  this.set_draw_passes(new_value);
}
get draw_pass_1 () {
  return this.get_draw_pass_mesh();
}
set draw_pass_1 (new_value) {
  this.set_draw_pass_mesh(new_value);
}
get draw_pass_2 () {
  return this.get_draw_pass_mesh();
}
set draw_pass_2 (new_value) {
  this.set_draw_pass_mesh(new_value);
}
get draw_pass_3 () {
  return this.get_draw_pass_mesh();
}
set draw_pass_3 (new_value) {
  this.set_draw_pass_mesh(new_value);
}
get draw_pass_4 () {
  return this.get_draw_pass_mesh();
}
set draw_pass_4 (new_value) {
  this.set_draw_pass_mesh(new_value);
}
get draw_skin () {
  return this.get_skin();
}
set draw_skin (new_value) {
  this.set_skin(new_value);
}

  static DrawOrder = {
    DRAW_ORDER_INDEX: 0,
    DRAW_ORDER_LIFETIME: 1,
    DRAW_ORDER_REVERSE_LIFETIME: 2,
    DRAW_ORDER_VIEW_DEPTH: 3,
  }
  static EmitFlags = {
    EMIT_FLAG_POSITION: 1,
    EMIT_FLAG_ROTATION_SCALE: 2,
    EMIT_FLAG_VELOCITY: 4,
    EMIT_FLAG_COLOR: 8,
    EMIT_FLAG_CUSTOM: 16,
  }
  static TransformAlign = {
    TRANSFORM_ALIGN_DISABLED: 0,
    TRANSFORM_ALIGN_Z_BILLBOARD: 1,
    TRANSFORM_ALIGN_Y_TO_VELOCITY: 2,
    TRANSFORM_ALIGN_Z_BILLBOARD_Y_TO_VELOCITY: 3,
  }

  static {
    this._init_bindings();
  }
}