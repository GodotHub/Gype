import * as internal from '__internal__';
import { VisualInstance3D } from 'src/js_godot/classesvisual_instance3d'
import { Color } from 'src/js_godot/variant/color'
import { Vector3 } from 'src/js_godot/variant/vector3'
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

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("ReflectionProbe");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("ReflectionProbe");
      let methodname = new StringName("set_intensity");
      this._bindings.method_set_intensity = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("ReflectionProbe");
      let methodname = new StringName("get_intensity");
      this._bindings.method_get_intensity = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("ReflectionProbe");
      let methodname = new StringName("set_ambient_mode");
      this._bindings.method_set_ambient_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1748981278
      );
    }
    {
      let classname = new StringName("ReflectionProbe");
      let methodname = new StringName("get_ambient_mode");
      this._bindings.method_get_ambient_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1014607621
      );
    }
    {
      let classname = new StringName("ReflectionProbe");
      let methodname = new StringName("set_ambient_color");
      this._bindings.method_set_ambient_color = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2920490490
      );
    }
    {
      let classname = new StringName("ReflectionProbe");
      let methodname = new StringName("get_ambient_color");
      this._bindings.method_get_ambient_color = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3444240500
      );
    }
    {
      let classname = new StringName("ReflectionProbe");
      let methodname = new StringName("set_ambient_color_energy");
      this._bindings.method_set_ambient_color_energy = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("ReflectionProbe");
      let methodname = new StringName("get_ambient_color_energy");
      this._bindings.method_get_ambient_color_energy = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("ReflectionProbe");
      let methodname = new StringName("set_max_distance");
      this._bindings.method_set_max_distance = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("ReflectionProbe");
      let methodname = new StringName("get_max_distance");
      this._bindings.method_get_max_distance = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("ReflectionProbe");
      let methodname = new StringName("set_mesh_lod_threshold");
      this._bindings.method_set_mesh_lod_threshold = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("ReflectionProbe");
      let methodname = new StringName("get_mesh_lod_threshold");
      this._bindings.method_get_mesh_lod_threshold = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("ReflectionProbe");
      let methodname = new StringName("set_size");
      this._bindings.method_set_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3460891852
      );
    }
    {
      let classname = new StringName("ReflectionProbe");
      let methodname = new StringName("get_size");
      this._bindings.method_get_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3360562783
      );
    }
    {
      let classname = new StringName("ReflectionProbe");
      let methodname = new StringName("set_origin_offset");
      this._bindings.method_set_origin_offset = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3460891852
      );
    }
    {
      let classname = new StringName("ReflectionProbe");
      let methodname = new StringName("get_origin_offset");
      this._bindings.method_get_origin_offset = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3360562783
      );
    }
    {
      let classname = new StringName("ReflectionProbe");
      let methodname = new StringName("set_as_interior");
      this._bindings.method_set_as_interior = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("ReflectionProbe");
      let methodname = new StringName("is_set_as_interior");
      this._bindings.method_is_set_as_interior = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("ReflectionProbe");
      let methodname = new StringName("set_enable_box_projection");
      this._bindings.method_set_enable_box_projection = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("ReflectionProbe");
      let methodname = new StringName("is_box_projection_enabled");
      this._bindings.method_is_box_projection_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("ReflectionProbe");
      let methodname = new StringName("set_enable_shadows");
      this._bindings.method_set_enable_shadows = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("ReflectionProbe");
      let methodname = new StringName("are_shadows_enabled");
      this._bindings.method_are_shadows_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("ReflectionProbe");
      let methodname = new StringName("set_cull_mask");
      this._bindings.method_set_cull_mask = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("ReflectionProbe");
      let methodname = new StringName("get_cull_mask");
      this._bindings.method_get_cull_mask = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("ReflectionProbe");
      let methodname = new StringName("set_reflection_mask");
      this._bindings.method_set_reflection_mask = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("ReflectionProbe");
      let methodname = new StringName("get_reflection_mask");
      this._bindings.method_get_reflection_mask = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("ReflectionProbe");
      let methodname = new StringName("set_update_mode");
      this._bindings.method_set_update_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4090221187
      );
    }
    {
      let classname = new StringName("ReflectionProbe");
      let methodname = new StringName("get_update_mode");
      this._bindings.method_get_update_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2367550552
      );
    }
  }
  set_intensity(_intensity) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_intensity,
      this._owner,
      _intensity
    );
  }
  get_intensity() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_intensity,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_ambient_mode(_ambient) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_ambient_mode,
      this._owner,
      _ambient
    );
  }
  get_ambient_mode() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_ambient_mode,
      this._owner,
			Variant.INT,
      
    );
  }
  set_ambient_color(_ambient) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_ambient_color,
      this._owner,
      _ambient
    );
  }
  get_ambient_color() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_ambient_color,
      this._owner,
			Variant.Type.COLOR
    ,
      
    );
  }
  set_ambient_color_energy(_ambient_energy) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_ambient_color_energy,
      this._owner,
      _ambient_energy
    );
  }
  get_ambient_color_energy() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_ambient_color_energy,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_max_distance(_max_distance) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_max_distance,
      this._owner,
      _max_distance
    );
  }
  get_max_distance() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_max_distance,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_mesh_lod_threshold(_ratio) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_mesh_lod_threshold,
      this._owner,
      _ratio
    );
  }
  get_mesh_lod_threshold() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_mesh_lod_threshold,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_size(_size) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_size,
      this._owner,
      _size
    );
  }
  get_size() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_size,
      this._owner,
			Variant.Type.VECTOR3
    ,
      
    );
  }
  set_origin_offset(_origin_offset) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_origin_offset,
      this._owner,
      _origin_offset
    );
  }
  get_origin_offset() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_origin_offset,
      this._owner,
			Variant.Type.VECTOR3
    ,
      
    );
  }
  set_as_interior(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_as_interior,
      this._owner,
      _enable
    );
  }
  is_set_as_interior() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_set_as_interior,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_enable_box_projection(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_enable_box_projection,
      this._owner,
      _enable
    );
  }
  is_box_projection_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_box_projection_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_enable_shadows(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_enable_shadows,
      this._owner,
      _enable
    );
  }
  are_shadows_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_are_shadows_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_cull_mask(_layers) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_cull_mask,
      this._owner,
      _layers
    );
  }
  get_cull_mask() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_cull_mask,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  set_reflection_mask(_layers) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_reflection_mask,
      this._owner,
      _layers
    );
  }
  get_reflection_mask() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_reflection_mask,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  set_update_mode(_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_update_mode,
      this._owner,
      _mode
    );
  }
  get_update_mode() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_update_mode,
      this._owner,
			Variant.INT,
      
    );
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