import * as internal from '__internal__';
import { VisualInstance3D } from '@js_godot/classes/visual_instance3d'
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_intensity;
  method_get_intensity;
  method_set_ambient_mode;
  method_get_ambient_mode;
  method_set_ambient_color;
  method_get_ambient_color;
  method_set_ambient_color_energy;
  method_get_ambient_color_energy;
  method_set_max_distance;
  method_get_max_distance;
  method_set_mesh_lod_threshold;
  method_get_mesh_lod_threshold;
  method_set_size;
  method_get_size;
  method_set_origin_offset;
  method_get_origin_offset;
  method_set_as_interior;
  method_is_set_as_interior;
  method_set_enable_box_projection;
  method_is_box_projection_enabled;
  method_set_enable_shadows;
  method_are_shadows_enabled;
  method_set_cull_mask;
  method_get_cull_mask;
  method_set_reflection_mask;
  method_get_reflection_mask;
  method_set_update_mode;
  method_get_update_mode;
}
export class ReflectionProbe extends VisualInstance3D{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("ReflectionProbe");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_intensity() {
    if (!this.#_bindings.method_set_intensity) {
      let classname = new StringName("ReflectionProbe");
      let methodname = new StringName("set_intensity");
      this.#_bindings.method_set_intensity = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_intensity() {
    if (!this.#_bindings.method_get_intensity) {
      let classname = new StringName("ReflectionProbe");
      let methodname = new StringName("get_intensity");
      this.#_bindings.method_get_intensity = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_ambient_mode() {
    if (!this.#_bindings.method_set_ambient_mode) {
      let classname = new StringName("ReflectionProbe");
      let methodname = new StringName("set_ambient_mode");
      this.#_bindings.method_set_ambient_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1748981278
      );
    }
  }
  static init_method_get_ambient_mode() {
    if (!this.#_bindings.method_get_ambient_mode) {
      let classname = new StringName("ReflectionProbe");
      let methodname = new StringName("get_ambient_mode");
      this.#_bindings.method_get_ambient_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1014607621
      );
    }
  }
  static init_method_set_ambient_color() {
    if (!this.#_bindings.method_set_ambient_color) {
      let classname = new StringName("ReflectionProbe");
      let methodname = new StringName("set_ambient_color");
      this.#_bindings.method_set_ambient_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2920490490
      );
    }
  }
  static init_method_get_ambient_color() {
    if (!this.#_bindings.method_get_ambient_color) {
      let classname = new StringName("ReflectionProbe");
      let methodname = new StringName("get_ambient_color");
      this.#_bindings.method_get_ambient_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3444240500
      );
    }
  }
  static init_method_set_ambient_color_energy() {
    if (!this.#_bindings.method_set_ambient_color_energy) {
      let classname = new StringName("ReflectionProbe");
      let methodname = new StringName("set_ambient_color_energy");
      this.#_bindings.method_set_ambient_color_energy = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_ambient_color_energy() {
    if (!this.#_bindings.method_get_ambient_color_energy) {
      let classname = new StringName("ReflectionProbe");
      let methodname = new StringName("get_ambient_color_energy");
      this.#_bindings.method_get_ambient_color_energy = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_max_distance() {
    if (!this.#_bindings.method_set_max_distance) {
      let classname = new StringName("ReflectionProbe");
      let methodname = new StringName("set_max_distance");
      this.#_bindings.method_set_max_distance = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_max_distance() {
    if (!this.#_bindings.method_get_max_distance) {
      let classname = new StringName("ReflectionProbe");
      let methodname = new StringName("get_max_distance");
      this.#_bindings.method_get_max_distance = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_mesh_lod_threshold() {
    if (!this.#_bindings.method_set_mesh_lod_threshold) {
      let classname = new StringName("ReflectionProbe");
      let methodname = new StringName("set_mesh_lod_threshold");
      this.#_bindings.method_set_mesh_lod_threshold = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_mesh_lod_threshold() {
    if (!this.#_bindings.method_get_mesh_lod_threshold) {
      let classname = new StringName("ReflectionProbe");
      let methodname = new StringName("get_mesh_lod_threshold");
      this.#_bindings.method_get_mesh_lod_threshold = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_size() {
    if (!this.#_bindings.method_set_size) {
      let classname = new StringName("ReflectionProbe");
      let methodname = new StringName("set_size");
      this.#_bindings.method_set_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3460891852
      );
    }
  }
  static init_method_get_size() {
    if (!this.#_bindings.method_get_size) {
      let classname = new StringName("ReflectionProbe");
      let methodname = new StringName("get_size");
      this.#_bindings.method_get_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3360562783
      );
    }
  }
  static init_method_set_origin_offset() {
    if (!this.#_bindings.method_set_origin_offset) {
      let classname = new StringName("ReflectionProbe");
      let methodname = new StringName("set_origin_offset");
      this.#_bindings.method_set_origin_offset = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3460891852
      );
    }
  }
  static init_method_get_origin_offset() {
    if (!this.#_bindings.method_get_origin_offset) {
      let classname = new StringName("ReflectionProbe");
      let methodname = new StringName("get_origin_offset");
      this.#_bindings.method_get_origin_offset = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3360562783
      );
    }
  }
  static init_method_set_as_interior() {
    if (!this.#_bindings.method_set_as_interior) {
      let classname = new StringName("ReflectionProbe");
      let methodname = new StringName("set_as_interior");
      this.#_bindings.method_set_as_interior = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_set_as_interior() {
    if (!this.#_bindings.method_is_set_as_interior) {
      let classname = new StringName("ReflectionProbe");
      let methodname = new StringName("is_set_as_interior");
      this.#_bindings.method_is_set_as_interior = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_enable_box_projection() {
    if (!this.#_bindings.method_set_enable_box_projection) {
      let classname = new StringName("ReflectionProbe");
      let methodname = new StringName("set_enable_box_projection");
      this.#_bindings.method_set_enable_box_projection = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_box_projection_enabled() {
    if (!this.#_bindings.method_is_box_projection_enabled) {
      let classname = new StringName("ReflectionProbe");
      let methodname = new StringName("is_box_projection_enabled");
      this.#_bindings.method_is_box_projection_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_enable_shadows() {
    if (!this.#_bindings.method_set_enable_shadows) {
      let classname = new StringName("ReflectionProbe");
      let methodname = new StringName("set_enable_shadows");
      this.#_bindings.method_set_enable_shadows = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_are_shadows_enabled() {
    if (!this.#_bindings.method_are_shadows_enabled) {
      let classname = new StringName("ReflectionProbe");
      let methodname = new StringName("are_shadows_enabled");
      this.#_bindings.method_are_shadows_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_cull_mask() {
    if (!this.#_bindings.method_set_cull_mask) {
      let classname = new StringName("ReflectionProbe");
      let methodname = new StringName("set_cull_mask");
      this.#_bindings.method_set_cull_mask = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_cull_mask() {
    if (!this.#_bindings.method_get_cull_mask) {
      let classname = new StringName("ReflectionProbe");
      let methodname = new StringName("get_cull_mask");
      this.#_bindings.method_get_cull_mask = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_reflection_mask() {
    if (!this.#_bindings.method_set_reflection_mask) {
      let classname = new StringName("ReflectionProbe");
      let methodname = new StringName("set_reflection_mask");
      this.#_bindings.method_set_reflection_mask = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_get_reflection_mask() {
    if (!this.#_bindings.method_get_reflection_mask) {
      let classname = new StringName("ReflectionProbe");
      let methodname = new StringName("get_reflection_mask");
      this.#_bindings.method_get_reflection_mask = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_update_mode() {
    if (!this.#_bindings.method_set_update_mode) {
      let classname = new StringName("ReflectionProbe");
      let methodname = new StringName("set_update_mode");
      this.#_bindings.method_set_update_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4090221187
      );
    }
  }
  static init_method_get_update_mode() {
    if (!this.#_bindings.method_get_update_mode) {
      let classname = new StringName("ReflectionProbe");
      let methodname = new StringName("get_update_mode");
      this.#_bindings.method_get_update_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2367550552
      );
    }
  }

  
  
  set_intensity(_intensity) {
    ReflectionProbe.init_method_set_intensity();
    return _call_native_mb_no_ret(
      ReflectionProbe.#_bindings.method_set_intensity,
      this._owner,
      _intensity
    );
    
  }
  get_intensity() {
    ReflectionProbe.init_method_get_intensity();
    return _call_native_mb_ret(
      ReflectionProbe.#_bindings.method_get_intensity,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_ambient_mode(_ambient) {
    ReflectionProbe.init_method_set_ambient_mode();
    return _call_native_mb_no_ret(
      ReflectionProbe.#_bindings.method_set_ambient_mode,
      this._owner,
      _ambient
    );
    
  }
  get_ambient_mode() {
    ReflectionProbe.init_method_get_ambient_mode();
    return _call_native_mb_ret(
      ReflectionProbe.#_bindings.method_get_ambient_mode,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_ambient_color(_ambient) {
    ReflectionProbe.init_method_set_ambient_color();
    return _call_native_mb_no_ret(
      ReflectionProbe.#_bindings.method_set_ambient_color,
      this._owner,
      _ambient
    );
    
  }
  get_ambient_color() {
    ReflectionProbe.init_method_get_ambient_color();
    return _call_native_mb_ret(
      ReflectionProbe.#_bindings.method_get_ambient_color,
      this._owner,
			Variant.Type.COLOR,
    
      
    );
    
  }
  set_ambient_color_energy(_ambient_energy) {
    ReflectionProbe.init_method_set_ambient_color_energy();
    return _call_native_mb_no_ret(
      ReflectionProbe.#_bindings.method_set_ambient_color_energy,
      this._owner,
      _ambient_energy
    );
    
  }
  get_ambient_color_energy() {
    ReflectionProbe.init_method_get_ambient_color_energy();
    return _call_native_mb_ret(
      ReflectionProbe.#_bindings.method_get_ambient_color_energy,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_max_distance(_max_distance) {
    ReflectionProbe.init_method_set_max_distance();
    return _call_native_mb_no_ret(
      ReflectionProbe.#_bindings.method_set_max_distance,
      this._owner,
      _max_distance
    );
    
  }
  get_max_distance() {
    ReflectionProbe.init_method_get_max_distance();
    return _call_native_mb_ret(
      ReflectionProbe.#_bindings.method_get_max_distance,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_mesh_lod_threshold(_ratio) {
    ReflectionProbe.init_method_set_mesh_lod_threshold();
    return _call_native_mb_no_ret(
      ReflectionProbe.#_bindings.method_set_mesh_lod_threshold,
      this._owner,
      _ratio
    );
    
  }
  get_mesh_lod_threshold() {
    ReflectionProbe.init_method_get_mesh_lod_threshold();
    return _call_native_mb_ret(
      ReflectionProbe.#_bindings.method_get_mesh_lod_threshold,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_size(_size) {
    ReflectionProbe.init_method_set_size();
    return _call_native_mb_no_ret(
      ReflectionProbe.#_bindings.method_set_size,
      this._owner,
      _size
    );
    
  }
  get_size() {
    ReflectionProbe.init_method_get_size();
    return _call_native_mb_ret(
      ReflectionProbe.#_bindings.method_get_size,
      this._owner,
			Variant.Type.VECTOR3,
    
      
    );
    
  }
  set_origin_offset(_origin_offset) {
    ReflectionProbe.init_method_set_origin_offset();
    return _call_native_mb_no_ret(
      ReflectionProbe.#_bindings.method_set_origin_offset,
      this._owner,
      _origin_offset
    );
    
  }
  get_origin_offset() {
    ReflectionProbe.init_method_get_origin_offset();
    return _call_native_mb_ret(
      ReflectionProbe.#_bindings.method_get_origin_offset,
      this._owner,
			Variant.Type.VECTOR3,
    
      
    );
    
  }
  set_as_interior(_enable) {
    ReflectionProbe.init_method_set_as_interior();
    return _call_native_mb_no_ret(
      ReflectionProbe.#_bindings.method_set_as_interior,
      this._owner,
      _enable
    );
    
  }
  is_set_as_interior() {
    ReflectionProbe.init_method_is_set_as_interior();
    return _call_native_mb_ret(
      ReflectionProbe.#_bindings.method_is_set_as_interior,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_enable_box_projection(_enable) {
    ReflectionProbe.init_method_set_enable_box_projection();
    return _call_native_mb_no_ret(
      ReflectionProbe.#_bindings.method_set_enable_box_projection,
      this._owner,
      _enable
    );
    
  }
  is_box_projection_enabled() {
    ReflectionProbe.init_method_is_box_projection_enabled();
    return _call_native_mb_ret(
      ReflectionProbe.#_bindings.method_is_box_projection_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_enable_shadows(_enable) {
    ReflectionProbe.init_method_set_enable_shadows();
    return _call_native_mb_no_ret(
      ReflectionProbe.#_bindings.method_set_enable_shadows,
      this._owner,
      _enable
    );
    
  }
  are_shadows_enabled() {
    ReflectionProbe.init_method_are_shadows_enabled();
    return _call_native_mb_ret(
      ReflectionProbe.#_bindings.method_are_shadows_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_cull_mask(_layers) {
    ReflectionProbe.init_method_set_cull_mask();
    return _call_native_mb_no_ret(
      ReflectionProbe.#_bindings.method_set_cull_mask,
      this._owner,
      _layers
    );
    
  }
  get_cull_mask() {
    ReflectionProbe.init_method_get_cull_mask();
    return _call_native_mb_ret(
      ReflectionProbe.#_bindings.method_get_cull_mask,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_reflection_mask(_layers) {
    ReflectionProbe.init_method_set_reflection_mask();
    return _call_native_mb_no_ret(
      ReflectionProbe.#_bindings.method_set_reflection_mask,
      this._owner,
      _layers
    );
    
  }
  get_reflection_mask() {
    ReflectionProbe.init_method_get_reflection_mask();
    return _call_native_mb_ret(
      ReflectionProbe.#_bindings.method_get_reflection_mask,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_update_mode(_mode) {
    ReflectionProbe.init_method_set_update_mode();
    return _call_native_mb_no_ret(
      ReflectionProbe.#_bindings.method_set_update_mode,
      this._owner,
      _mode
    );
    
  }
  get_update_mode() {
    ReflectionProbe.init_method_get_update_mode();
    return _call_native_mb_ret(
      ReflectionProbe.#_bindings.method_get_update_mode,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  
get update_mode () {
  return this.get_update_mode();
}
set update_mode (new_value) {
  this.set_update_mode(new_value);
}
get intensity () {
  return this.get_intensity();
}
set intensity (new_value) {
  this.set_intensity(new_value);
}
get max_distance () {
  return this.get_max_distance();
}
set max_distance (new_value) {
  this.set_max_distance(new_value);
}
get size () {
  return this.get_size();
}
set size (new_value) {
  this.set_size(new_value);
}
get origin_offset () {
  return this.get_origin_offset();
}
set origin_offset (new_value) {
  this.set_origin_offset(new_value);
}
get box_projection () {
  return this.is_box_projection_enabled();
}
set box_projection (new_value) {
  this.set_enable_box_projection(new_value);
}
get interior () {
  return this.is_set_as_interior();
}
set interior (new_value) {
  this.set_as_interior(new_value);
}
get enable_shadows () {
  return this.are_shadows_enabled();
}
set enable_shadows (new_value) {
  this.set_enable_shadows(new_value);
}
get cull_mask () {
  return this.get_cull_mask();
}
set cull_mask (new_value) {
  this.set_cull_mask(new_value);
}
get reflection_mask () {
  return this.get_reflection_mask();
}
set reflection_mask (new_value) {
  this.set_reflection_mask(new_value);
}
get mesh_lod_threshold () {
  return this.get_mesh_lod_threshold();
}
set mesh_lod_threshold (new_value) {
  this.set_mesh_lod_threshold(new_value);
}
get ambient_mode () {
  return this.get_ambient_mode();
}
set ambient_mode (new_value) {
  this.set_ambient_mode(new_value);
}
get ambient_color () {
  return this.get_ambient_color();
}
set ambient_color (new_value) {
  this.set_ambient_color(new_value);
}
get ambient_color_energy () {
  return this.get_ambient_color_energy();
}
set ambient_color_energy (new_value) {
  this.set_ambient_color_energy(new_value);
}

  static UpdateMode = {
    UPDATE_ONCE: 0,
    UPDATE_ALWAYS: 1,
  }
  static AmbientMode = {
    AMBIENT_DISABLED: 0,
    AMBIENT_ENVIRONMENT: 1,
    AMBIENT_COLOR: 2,
  }
}