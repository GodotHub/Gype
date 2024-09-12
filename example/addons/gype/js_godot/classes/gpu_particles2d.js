import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { Node2D } from '@js_godot/classes/node2d'
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
  method_set_visibility_rect;
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
  method_get_visibility_rect;
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
  method_set_texture;
  method_get_texture;
  method_capture_rect;
  method_restart;
  method_set_sub_emitter;
  method_get_sub_emitter;
  method_emit_particle;
  method_set_trail_enabled;
  method_set_trail_lifetime;
  method_is_trail_enabled;
  method_get_trail_lifetime;
  method_set_trail_sections;
  method_get_trail_sections;
  method_set_trail_section_subdivisions;
  method_get_trail_section_subdivisions;
  method_convert_from_particles;
  method_set_amount_ratio;
  method_get_amount_ratio;
}
export class GPUParticles2D extends Node2D{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("GPUParticles2D");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_emitting() {
    if (!this.#_bindings.method_set_emitting) {
      let classname = new StringName("GPUParticles2D");
      let methodname = new StringName("set_emitting");
      this.#_bindings.method_set_emitting = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_set_amount() {
    if (!this.#_bindings.method_set_amount) {
      let classname = new StringName("GPUParticles2D");
      let methodname = new StringName("set_amount");
      this.#_bindings.method_set_amount = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_set_lifetime() {
    if (!this.#_bindings.method_set_lifetime) {
      let classname = new StringName("GPUParticles2D");
      let methodname = new StringName("set_lifetime");
      this.#_bindings.method_set_lifetime = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_set_one_shot() {
    if (!this.#_bindings.method_set_one_shot) {
      let classname = new StringName("GPUParticles2D");
      let methodname = new StringName("set_one_shot");
      this.#_bindings.method_set_one_shot = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_set_pre_process_time() {
    if (!this.#_bindings.method_set_pre_process_time) {
      let classname = new StringName("GPUParticles2D");
      let methodname = new StringName("set_pre_process_time");
      this.#_bindings.method_set_pre_process_time = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_set_explosiveness_ratio() {
    if (!this.#_bindings.method_set_explosiveness_ratio) {
      let classname = new StringName("GPUParticles2D");
      let methodname = new StringName("set_explosiveness_ratio");
      this.#_bindings.method_set_explosiveness_ratio = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_set_randomness_ratio() {
    if (!this.#_bindings.method_set_randomness_ratio) {
      let classname = new StringName("GPUParticles2D");
      let methodname = new StringName("set_randomness_ratio");
      this.#_bindings.method_set_randomness_ratio = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_set_visibility_rect() {
    if (!this.#_bindings.method_set_visibility_rect) {
      let classname = new StringName("GPUParticles2D");
      let methodname = new StringName("set_visibility_rect");
      this.#_bindings.method_set_visibility_rect = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2046264180
      );
    }
  }
  static init_method_set_use_local_coordinates() {
    if (!this.#_bindings.method_set_use_local_coordinates) {
      let classname = new StringName("GPUParticles2D");
      let methodname = new StringName("set_use_local_coordinates");
      this.#_bindings.method_set_use_local_coordinates = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_set_fixed_fps() {
    if (!this.#_bindings.method_set_fixed_fps) {
      let classname = new StringName("GPUParticles2D");
      let methodname = new StringName("set_fixed_fps");
      this.#_bindings.method_set_fixed_fps = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_set_fractional_delta() {
    if (!this.#_bindings.method_set_fractional_delta) {
      let classname = new StringName("GPUParticles2D");
      let methodname = new StringName("set_fractional_delta");
      this.#_bindings.method_set_fractional_delta = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_set_interpolate() {
    if (!this.#_bindings.method_set_interpolate) {
      let classname = new StringName("GPUParticles2D");
      let methodname = new StringName("set_interpolate");
      this.#_bindings.method_set_interpolate = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_set_process_material() {
    if (!this.#_bindings.method_set_process_material) {
      let classname = new StringName("GPUParticles2D");
      let methodname = new StringName("set_process_material");
      this.#_bindings.method_set_process_material = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2757459619
      );
    }
  }
  static init_method_set_speed_scale() {
    if (!this.#_bindings.method_set_speed_scale) {
      let classname = new StringName("GPUParticles2D");
      let methodname = new StringName("set_speed_scale");
      this.#_bindings.method_set_speed_scale = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_set_collision_base_size() {
    if (!this.#_bindings.method_set_collision_base_size) {
      let classname = new StringName("GPUParticles2D");
      let methodname = new StringName("set_collision_base_size");
      this.#_bindings.method_set_collision_base_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_set_interp_to_end() {
    if (!this.#_bindings.method_set_interp_to_end) {
      let classname = new StringName("GPUParticles2D");
      let methodname = new StringName("set_interp_to_end");
      this.#_bindings.method_set_interp_to_end = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_is_emitting() {
    if (!this.#_bindings.method_is_emitting) {
      let classname = new StringName("GPUParticles2D");
      let methodname = new StringName("is_emitting");
      this.#_bindings.method_is_emitting = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_get_amount() {
    if (!this.#_bindings.method_get_amount) {
      let classname = new StringName("GPUParticles2D");
      let methodname = new StringName("get_amount");
      this.#_bindings.method_get_amount = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_get_lifetime() {
    if (!this.#_bindings.method_get_lifetime) {
      let classname = new StringName("GPUParticles2D");
      let methodname = new StringName("get_lifetime");
      this.#_bindings.method_get_lifetime = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_get_one_shot() {
    if (!this.#_bindings.method_get_one_shot) {
      let classname = new StringName("GPUParticles2D");
      let methodname = new StringName("get_one_shot");
      this.#_bindings.method_get_one_shot = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_get_pre_process_time() {
    if (!this.#_bindings.method_get_pre_process_time) {
      let classname = new StringName("GPUParticles2D");
      let methodname = new StringName("get_pre_process_time");
      this.#_bindings.method_get_pre_process_time = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_get_explosiveness_ratio() {
    if (!this.#_bindings.method_get_explosiveness_ratio) {
      let classname = new StringName("GPUParticles2D");
      let methodname = new StringName("get_explosiveness_ratio");
      this.#_bindings.method_get_explosiveness_ratio = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_get_randomness_ratio() {
    if (!this.#_bindings.method_get_randomness_ratio) {
      let classname = new StringName("GPUParticles2D");
      let methodname = new StringName("get_randomness_ratio");
      this.#_bindings.method_get_randomness_ratio = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_get_visibility_rect() {
    if (!this.#_bindings.method_get_visibility_rect) {
      let classname = new StringName("GPUParticles2D");
      let methodname = new StringName("get_visibility_rect");
      this.#_bindings.method_get_visibility_rect = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1639390495
      );
    }
  }
  static init_method_get_use_local_coordinates() {
    if (!this.#_bindings.method_get_use_local_coordinates) {
      let classname = new StringName("GPUParticles2D");
      let methodname = new StringName("get_use_local_coordinates");
      this.#_bindings.method_get_use_local_coordinates = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_get_fixed_fps() {
    if (!this.#_bindings.method_get_fixed_fps) {
      let classname = new StringName("GPUParticles2D");
      let methodname = new StringName("get_fixed_fps");
      this.#_bindings.method_get_fixed_fps = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_get_fractional_delta() {
    if (!this.#_bindings.method_get_fractional_delta) {
      let classname = new StringName("GPUParticles2D");
      let methodname = new StringName("get_fractional_delta");
      this.#_bindings.method_get_fractional_delta = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_get_interpolate() {
    if (!this.#_bindings.method_get_interpolate) {
      let classname = new StringName("GPUParticles2D");
      let methodname = new StringName("get_interpolate");
      this.#_bindings.method_get_interpolate = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_get_process_material() {
    if (!this.#_bindings.method_get_process_material) {
      let classname = new StringName("GPUParticles2D");
      let methodname = new StringName("get_process_material");
      this.#_bindings.method_get_process_material = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        5934680
      );
    }
  }
  static init_method_get_speed_scale() {
    if (!this.#_bindings.method_get_speed_scale) {
      let classname = new StringName("GPUParticles2D");
      let methodname = new StringName("get_speed_scale");
      this.#_bindings.method_get_speed_scale = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_get_collision_base_size() {
    if (!this.#_bindings.method_get_collision_base_size) {
      let classname = new StringName("GPUParticles2D");
      let methodname = new StringName("get_collision_base_size");
      this.#_bindings.method_get_collision_base_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_get_interp_to_end() {
    if (!this.#_bindings.method_get_interp_to_end) {
      let classname = new StringName("GPUParticles2D");
      let methodname = new StringName("get_interp_to_end");
      this.#_bindings.method_get_interp_to_end = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_draw_order() {
    if (!this.#_bindings.method_set_draw_order) {
      let classname = new StringName("GPUParticles2D");
      let methodname = new StringName("set_draw_order");
      this.#_bindings.method_set_draw_order = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1939677959
      );
    }
  }
  static init_method_get_draw_order() {
    if (!this.#_bindings.method_get_draw_order) {
      let classname = new StringName("GPUParticles2D");
      let methodname = new StringName("get_draw_order");
      this.#_bindings.method_get_draw_order = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        941479095
      );
    }
  }
  static init_method_set_texture() {
    if (!this.#_bindings.method_set_texture) {
      let classname = new StringName("GPUParticles2D");
      let methodname = new StringName("set_texture");
      this.#_bindings.method_set_texture = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4051416890
      );
    }
  }
  static init_method_get_texture() {
    if (!this.#_bindings.method_get_texture) {
      let classname = new StringName("GPUParticles2D");
      let methodname = new StringName("get_texture");
      this.#_bindings.method_get_texture = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3635182373
      );
    }
  }
  static init_method_capture_rect() {
    if (!this.#_bindings.method_capture_rect) {
      let classname = new StringName("GPUParticles2D");
      let methodname = new StringName("capture_rect");
      this.#_bindings.method_capture_rect = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1639390495
      );
    }
  }
  static init_method_restart() {
    if (!this.#_bindings.method_restart) {
      let classname = new StringName("GPUParticles2D");
      let methodname = new StringName("restart");
      this.#_bindings.method_restart = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_set_sub_emitter() {
    if (!this.#_bindings.method_set_sub_emitter) {
      let classname = new StringName("GPUParticles2D");
      let methodname = new StringName("set_sub_emitter");
      this.#_bindings.method_set_sub_emitter = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1348162250
      );
    }
  }
  static init_method_get_sub_emitter() {
    if (!this.#_bindings.method_get_sub_emitter) {
      let classname = new StringName("GPUParticles2D");
      let methodname = new StringName("get_sub_emitter");
      this.#_bindings.method_get_sub_emitter = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4075236667
      );
    }
  }
  static init_method_emit_particle() {
    if (!this.#_bindings.method_emit_particle) {
      let classname = new StringName("GPUParticles2D");
      let methodname = new StringName("emit_particle");
      this.#_bindings.method_emit_particle = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2179202058
      );
    }
  }
  static init_method_set_trail_enabled() {
    if (!this.#_bindings.method_set_trail_enabled) {
      let classname = new StringName("GPUParticles2D");
      let methodname = new StringName("set_trail_enabled");
      this.#_bindings.method_set_trail_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_set_trail_lifetime() {
    if (!this.#_bindings.method_set_trail_lifetime) {
      let classname = new StringName("GPUParticles2D");
      let methodname = new StringName("set_trail_lifetime");
      this.#_bindings.method_set_trail_lifetime = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_is_trail_enabled() {
    if (!this.#_bindings.method_is_trail_enabled) {
      let classname = new StringName("GPUParticles2D");
      let methodname = new StringName("is_trail_enabled");
      this.#_bindings.method_is_trail_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_get_trail_lifetime() {
    if (!this.#_bindings.method_get_trail_lifetime) {
      let classname = new StringName("GPUParticles2D");
      let methodname = new StringName("get_trail_lifetime");
      this.#_bindings.method_get_trail_lifetime = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_trail_sections() {
    if (!this.#_bindings.method_set_trail_sections) {
      let classname = new StringName("GPUParticles2D");
      let methodname = new StringName("set_trail_sections");
      this.#_bindings.method_set_trail_sections = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_trail_sections() {
    if (!this.#_bindings.method_get_trail_sections) {
      let classname = new StringName("GPUParticles2D");
      let methodname = new StringName("get_trail_sections");
      this.#_bindings.method_get_trail_sections = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_trail_section_subdivisions() {
    if (!this.#_bindings.method_set_trail_section_subdivisions) {
      let classname = new StringName("GPUParticles2D");
      let methodname = new StringName("set_trail_section_subdivisions");
      this.#_bindings.method_set_trail_section_subdivisions = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_trail_section_subdivisions() {
    if (!this.#_bindings.method_get_trail_section_subdivisions) {
      let classname = new StringName("GPUParticles2D");
      let methodname = new StringName("get_trail_section_subdivisions");
      this.#_bindings.method_get_trail_section_subdivisions = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_convert_from_particles() {
    if (!this.#_bindings.method_convert_from_particles) {
      let classname = new StringName("GPUParticles2D");
      let methodname = new StringName("convert_from_particles");
      this.#_bindings.method_convert_from_particles = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1078189570
      );
    }
  }
  static init_method_set_amount_ratio() {
    if (!this.#_bindings.method_set_amount_ratio) {
      let classname = new StringName("GPUParticles2D");
      let methodname = new StringName("set_amount_ratio");
      this.#_bindings.method_set_amount_ratio = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_amount_ratio() {
    if (!this.#_bindings.method_get_amount_ratio) {
      let classname = new StringName("GPUParticles2D");
      let methodname = new StringName("get_amount_ratio");
      this.#_bindings.method_get_amount_ratio = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }

  
  
  set_emitting(_emitting) {
    GPUParticles2D.init_method_set_emitting();
    return _call_native_mb_no_ret(
      GPUParticles2D.#_bindings.method_set_emitting,
      this._owner,
      _emitting
    );
    
  }
  set_amount(_amount) {
    GPUParticles2D.init_method_set_amount();
    return _call_native_mb_no_ret(
      GPUParticles2D.#_bindings.method_set_amount,
      this._owner,
      _amount
    );
    
  }
  set_lifetime(_secs) {
    GPUParticles2D.init_method_set_lifetime();
    return _call_native_mb_no_ret(
      GPUParticles2D.#_bindings.method_set_lifetime,
      this._owner,
      _secs
    );
    
  }
  set_one_shot(_secs) {
    GPUParticles2D.init_method_set_one_shot();
    return _call_native_mb_no_ret(
      GPUParticles2D.#_bindings.method_set_one_shot,
      this._owner,
      _secs
    );
    
  }
  set_pre_process_time(_secs) {
    GPUParticles2D.init_method_set_pre_process_time();
    return _call_native_mb_no_ret(
      GPUParticles2D.#_bindings.method_set_pre_process_time,
      this._owner,
      _secs
    );
    
  }
  set_explosiveness_ratio(_ratio) {
    GPUParticles2D.init_method_set_explosiveness_ratio();
    return _call_native_mb_no_ret(
      GPUParticles2D.#_bindings.method_set_explosiveness_ratio,
      this._owner,
      _ratio
    );
    
  }
  set_randomness_ratio(_ratio) {
    GPUParticles2D.init_method_set_randomness_ratio();
    return _call_native_mb_no_ret(
      GPUParticles2D.#_bindings.method_set_randomness_ratio,
      this._owner,
      _ratio
    );
    
  }
  set_visibility_rect(_visibility_rect) {
    GPUParticles2D.init_method_set_visibility_rect();
    return _call_native_mb_no_ret(
      GPUParticles2D.#_bindings.method_set_visibility_rect,
      this._owner,
      _visibility_rect
    );
    
  }
  set_use_local_coordinates(_enable) {
    GPUParticles2D.init_method_set_use_local_coordinates();
    return _call_native_mb_no_ret(
      GPUParticles2D.#_bindings.method_set_use_local_coordinates,
      this._owner,
      _enable
    );
    
  }
  set_fixed_fps(_fps) {
    GPUParticles2D.init_method_set_fixed_fps();
    return _call_native_mb_no_ret(
      GPUParticles2D.#_bindings.method_set_fixed_fps,
      this._owner,
      _fps
    );
    
  }
  set_fractional_delta(_enable) {
    GPUParticles2D.init_method_set_fractional_delta();
    return _call_native_mb_no_ret(
      GPUParticles2D.#_bindings.method_set_fractional_delta,
      this._owner,
      _enable
    );
    
  }
  set_interpolate(_enable) {
    GPUParticles2D.init_method_set_interpolate();
    return _call_native_mb_no_ret(
      GPUParticles2D.#_bindings.method_set_interpolate,
      this._owner,
      _enable
    );
    
  }
  set_process_material(_material) {
    GPUParticles2D.init_method_set_process_material();
    return _call_native_mb_no_ret(
      GPUParticles2D.#_bindings.method_set_process_material,
      this._owner,
      _material
    );
    
  }
  set_speed_scale(_scale) {
    GPUParticles2D.init_method_set_speed_scale();
    return _call_native_mb_no_ret(
      GPUParticles2D.#_bindings.method_set_speed_scale,
      this._owner,
      _scale
    );
    
  }
  set_collision_base_size(_size) {
    GPUParticles2D.init_method_set_collision_base_size();
    return _call_native_mb_no_ret(
      GPUParticles2D.#_bindings.method_set_collision_base_size,
      this._owner,
      _size
    );
    
  }
  set_interp_to_end(_interp) {
    GPUParticles2D.init_method_set_interp_to_end();
    return _call_native_mb_no_ret(
      GPUParticles2D.#_bindings.method_set_interp_to_end,
      this._owner,
      _interp
    );
    
  }
  is_emitting() {
    GPUParticles2D.init_method_is_emitting();
    return _call_native_mb_ret(
      GPUParticles2D.#_bindings.method_is_emitting,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  get_amount() {
    GPUParticles2D.init_method_get_amount();
    return _call_native_mb_ret(
      GPUParticles2D.#_bindings.method_get_amount,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_lifetime() {
    GPUParticles2D.init_method_get_lifetime();
    return _call_native_mb_ret(
      GPUParticles2D.#_bindings.method_get_lifetime,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  get_one_shot() {
    GPUParticles2D.init_method_get_one_shot();
    return _call_native_mb_ret(
      GPUParticles2D.#_bindings.method_get_one_shot,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  get_pre_process_time() {
    GPUParticles2D.init_method_get_pre_process_time();
    return _call_native_mb_ret(
      GPUParticles2D.#_bindings.method_get_pre_process_time,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  get_explosiveness_ratio() {
    GPUParticles2D.init_method_get_explosiveness_ratio();
    return _call_native_mb_ret(
      GPUParticles2D.#_bindings.method_get_explosiveness_ratio,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  get_randomness_ratio() {
    GPUParticles2D.init_method_get_randomness_ratio();
    return _call_native_mb_ret(
      GPUParticles2D.#_bindings.method_get_randomness_ratio,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  get_visibility_rect() {
    GPUParticles2D.init_method_get_visibility_rect();
    return _call_native_mb_ret(
      GPUParticles2D.#_bindings.method_get_visibility_rect,
      this._owner,
			Variant.Type.RECT2,
    
      
    );
    
  }
  get_use_local_coordinates() {
    GPUParticles2D.init_method_get_use_local_coordinates();
    return _call_native_mb_ret(
      GPUParticles2D.#_bindings.method_get_use_local_coordinates,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  get_fixed_fps() {
    GPUParticles2D.init_method_get_fixed_fps();
    return _call_native_mb_ret(
      GPUParticles2D.#_bindings.method_get_fixed_fps,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_fractional_delta() {
    GPUParticles2D.init_method_get_fractional_delta();
    return _call_native_mb_ret(
      GPUParticles2D.#_bindings.method_get_fractional_delta,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  get_interpolate() {
    GPUParticles2D.init_method_get_interpolate();
    return _call_native_mb_ret(
      GPUParticles2D.#_bindings.method_get_interpolate,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  get_process_material() {
    GPUParticles2D.init_method_get_process_material();
    return _call_native_mb_ret(
      GPUParticles2D.#_bindings.method_get_process_material,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  get_speed_scale() {
    GPUParticles2D.init_method_get_speed_scale();
    return _call_native_mb_ret(
      GPUParticles2D.#_bindings.method_get_speed_scale,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  get_collision_base_size() {
    GPUParticles2D.init_method_get_collision_base_size();
    return _call_native_mb_ret(
      GPUParticles2D.#_bindings.method_get_collision_base_size,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  get_interp_to_end() {
    GPUParticles2D.init_method_get_interp_to_end();
    return _call_native_mb_ret(
      GPUParticles2D.#_bindings.method_get_interp_to_end,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_draw_order(_order) {
    GPUParticles2D.init_method_set_draw_order();
    return _call_native_mb_no_ret(
      GPUParticles2D.#_bindings.method_set_draw_order,
      this._owner,
      _order
    );
    
  }
  get_draw_order() {
    GPUParticles2D.init_method_get_draw_order();
    return _call_native_mb_ret(
      GPUParticles2D.#_bindings.method_get_draw_order,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_texture(_texture) {
    GPUParticles2D.init_method_set_texture();
    return _call_native_mb_no_ret(
      GPUParticles2D.#_bindings.method_set_texture,
      this._owner,
      _texture
    );
    
  }
  get_texture() {
    GPUParticles2D.init_method_get_texture();
    return _call_native_mb_ret(
      GPUParticles2D.#_bindings.method_get_texture,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  capture_rect() {
    GPUParticles2D.init_method_capture_rect();
    return _call_native_mb_ret(
      GPUParticles2D.#_bindings.method_capture_rect,
      this._owner,
			Variant.Type.RECT2,
    
      
    );
    
  }
  restart() {
    GPUParticles2D.init_method_restart();
    return _call_native_mb_no_ret(
      GPUParticles2D.#_bindings.method_restart,
      this._owner,
      
    );
    
  }
  set_sub_emitter(_path) {
    GPUParticles2D.init_method_set_sub_emitter();
    return _call_native_mb_no_ret(
      GPUParticles2D.#_bindings.method_set_sub_emitter,
      this._owner,
      _path
    );
    
  }
  get_sub_emitter() {
    GPUParticles2D.init_method_get_sub_emitter();
    return _call_native_mb_ret(
      GPUParticles2D.#_bindings.method_get_sub_emitter,
      this._owner,
			Variant.Type.NODE_PATH,
    
      
    );
    
  }
  emit_particle(_xform, _velocity, _color, _custom, _flags) {
    GPUParticles2D.init_method_emit_particle();
    return _call_native_mb_no_ret(
      GPUParticles2D.#_bindings.method_emit_particle,
      this._owner,
      _xform, _velocity, _color, _custom, _flags
    );
    
  }
  set_trail_enabled(_enabled) {
    GPUParticles2D.init_method_set_trail_enabled();
    return _call_native_mb_no_ret(
      GPUParticles2D.#_bindings.method_set_trail_enabled,
      this._owner,
      _enabled
    );
    
  }
  set_trail_lifetime(_secs) {
    GPUParticles2D.init_method_set_trail_lifetime();
    return _call_native_mb_no_ret(
      GPUParticles2D.#_bindings.method_set_trail_lifetime,
      this._owner,
      _secs
    );
    
  }
  is_trail_enabled() {
    GPUParticles2D.init_method_is_trail_enabled();
    return _call_native_mb_ret(
      GPUParticles2D.#_bindings.method_is_trail_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  get_trail_lifetime() {
    GPUParticles2D.init_method_get_trail_lifetime();
    return _call_native_mb_ret(
      GPUParticles2D.#_bindings.method_get_trail_lifetime,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_trail_sections(_sections) {
    GPUParticles2D.init_method_set_trail_sections();
    return _call_native_mb_no_ret(
      GPUParticles2D.#_bindings.method_set_trail_sections,
      this._owner,
      _sections
    );
    
  }
  get_trail_sections() {
    GPUParticles2D.init_method_get_trail_sections();
    return _call_native_mb_ret(
      GPUParticles2D.#_bindings.method_get_trail_sections,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_trail_section_subdivisions(_subdivisions) {
    GPUParticles2D.init_method_set_trail_section_subdivisions();
    return _call_native_mb_no_ret(
      GPUParticles2D.#_bindings.method_set_trail_section_subdivisions,
      this._owner,
      _subdivisions
    );
    
  }
  get_trail_section_subdivisions() {
    GPUParticles2D.init_method_get_trail_section_subdivisions();
    return _call_native_mb_ret(
      GPUParticles2D.#_bindings.method_get_trail_section_subdivisions,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  convert_from_particles(_particles) {
    GPUParticles2D.init_method_convert_from_particles();
    return _call_native_mb_no_ret(
      GPUParticles2D.#_bindings.method_convert_from_particles,
      this._owner,
      _particles
    );
    
  }
  set_amount_ratio(_ratio) {
    GPUParticles2D.init_method_set_amount_ratio();
    return _call_native_mb_no_ret(
      GPUParticles2D.#_bindings.method_set_amount_ratio,
      this._owner,
      _ratio
    );
    
  }
  get_amount_ratio() {
    GPUParticles2D.init_method_get_amount_ratio();
    return _call_native_mb_ret(
      GPUParticles2D.#_bindings.method_get_amount_ratio,
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
get process_material () {
  return this.get_process_material();
}
set process_material (new_value) {
  this.set_process_material(new_value);
}
get texture () {
  return this.get_texture();
}
set texture (new_value) {
  this.set_texture(new_value);
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
get interp_to_end () {
  return this.get_interp_to_end();
}
set interp_to_end (new_value) {
  this.set_interp_to_end(new_value);
}
get collision_base_size () {
  return this.get_collision_base_size();
}
set collision_base_size (new_value) {
  this.set_collision_base_size(new_value);
}
get visibility_rect () {
  return this.get_visibility_rect();
}
set visibility_rect (new_value) {
  this.set_visibility_rect(new_value);
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
get trail_sections () {
  return this.get_trail_sections();
}
set trail_sections (new_value) {
  this.set_trail_sections(new_value);
}
get trail_section_subdivisions () {
  return this.get_trail_section_subdivisions();
}
set trail_section_subdivisions (new_value) {
  this.set_trail_section_subdivisions(new_value);
}

  static DrawOrder = {
    DRAW_ORDER_INDEX: 0,
    DRAW_ORDER_LIFETIME: 1,
    DRAW_ORDER_REVERSE_LIFETIME: 2,
  }
  static EmitFlags = {
    EMIT_FLAG_POSITION: 1,
    EMIT_FLAG_ROTATION_SCALE: 2,
    EMIT_FLAG_VELOCITY: 4,
    EMIT_FLAG_COLOR: 8,
    EMIT_FLAG_CUSTOM: 16,
  }
}