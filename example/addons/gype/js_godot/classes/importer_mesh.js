import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { GDArray } from '@js_godot/variant/gd_array'
import { Resource } from '@js_godot/classes/resource'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_add_blend_shape;
  method_get_blend_shape_count;
  method_get_blend_shape_name;
  method_set_blend_shape_mode;
  method_get_blend_shape_mode;
  method_add_surface;
  method_get_surface_count;
  method_get_surface_primitive_type;
  method_get_surface_name;
  method_get_surface_arrays;
  method_get_surface_blend_shape_arrays;
  method_get_surface_lod_count;
  method_get_surface_lod_size;
  method_get_surface_lod_indices;
  method_get_surface_material;
  method_get_surface_format;
  method_set_surface_name;
  method_set_surface_material;
  method_generate_lods;
  method_get_mesh;
  method_clear;
  method_set_lightmap_size_hint;
  method_get_lightmap_size_hint;
}
export class ImporterMesh extends Resource{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("ImporterMesh");
    } else {
      super(godot_object);
    }
  }
  static init_method_add_blend_shape() {
    if (!this.#_bindings.method_add_blend_shape) {
      let classname = new StringName("ImporterMesh");
      let methodname = new StringName("add_blend_shape");
      this.#_bindings.method_add_blend_shape = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        83702148
      );
    }
  }
  static init_method_get_blend_shape_count() {
    if (!this.#_bindings.method_get_blend_shape_count) {
      let classname = new StringName("ImporterMesh");
      let methodname = new StringName("get_blend_shape_count");
      this.#_bindings.method_get_blend_shape_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_get_blend_shape_name() {
    if (!this.#_bindings.method_get_blend_shape_name) {
      let classname = new StringName("ImporterMesh");
      let methodname = new StringName("get_blend_shape_name");
      this.#_bindings.method_get_blend_shape_name = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        844755477
      );
    }
  }
  static init_method_set_blend_shape_mode() {
    if (!this.#_bindings.method_set_blend_shape_mode) {
      let classname = new StringName("ImporterMesh");
      let methodname = new StringName("set_blend_shape_mode");
      this.#_bindings.method_set_blend_shape_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        227983991
      );
    }
  }
  static init_method_get_blend_shape_mode() {
    if (!this.#_bindings.method_get_blend_shape_mode) {
      let classname = new StringName("ImporterMesh");
      let methodname = new StringName("get_blend_shape_mode");
      this.#_bindings.method_get_blend_shape_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        836485024
      );
    }
  }
  static init_method_add_surface() {
    if (!this.#_bindings.method_add_surface) {
      let classname = new StringName("ImporterMesh");
      let methodname = new StringName("add_surface");
      this.#_bindings.method_add_surface = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740448849
      );
    }
  }
  static init_method_get_surface_count() {
    if (!this.#_bindings.method_get_surface_count) {
      let classname = new StringName("ImporterMesh");
      let methodname = new StringName("get_surface_count");
      this.#_bindings.method_get_surface_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_get_surface_primitive_type() {
    if (!this.#_bindings.method_get_surface_primitive_type) {
      let classname = new StringName("ImporterMesh");
      let methodname = new StringName("get_surface_primitive_type");
      this.#_bindings.method_get_surface_primitive_type = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3552571330
      );
    }
  }
  static init_method_get_surface_name() {
    if (!this.#_bindings.method_get_surface_name) {
      let classname = new StringName("ImporterMesh");
      let methodname = new StringName("get_surface_name");
      this.#_bindings.method_get_surface_name = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        844755477
      );
    }
  }
  static init_method_get_surface_arrays() {
    if (!this.#_bindings.method_get_surface_arrays) {
      let classname = new StringName("ImporterMesh");
      let methodname = new StringName("get_surface_arrays");
      this.#_bindings.method_get_surface_arrays = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        663333327
      );
    }
  }
  static init_method_get_surface_blend_shape_arrays() {
    if (!this.#_bindings.method_get_surface_blend_shape_arrays) {
      let classname = new StringName("ImporterMesh");
      let methodname = new StringName("get_surface_blend_shape_arrays");
      this.#_bindings.method_get_surface_blend_shape_arrays = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2345056839
      );
    }
  }
  static init_method_get_surface_lod_count() {
    if (!this.#_bindings.method_get_surface_lod_count) {
      let classname = new StringName("ImporterMesh");
      let methodname = new StringName("get_surface_lod_count");
      this.#_bindings.method_get_surface_lod_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        923996154
      );
    }
  }
  static init_method_get_surface_lod_size() {
    if (!this.#_bindings.method_get_surface_lod_size) {
      let classname = new StringName("ImporterMesh");
      let methodname = new StringName("get_surface_lod_size");
      this.#_bindings.method_get_surface_lod_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3085491603
      );
    }
  }
  static init_method_get_surface_lod_indices() {
    if (!this.#_bindings.method_get_surface_lod_indices) {
      let classname = new StringName("ImporterMesh");
      let methodname = new StringName("get_surface_lod_indices");
      this.#_bindings.method_get_surface_lod_indices = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1265128013
      );
    }
  }
  static init_method_get_surface_material() {
    if (!this.#_bindings.method_get_surface_material) {
      let classname = new StringName("ImporterMesh");
      let methodname = new StringName("get_surface_material");
      this.#_bindings.method_get_surface_material = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2897466400
      );
    }
  }
  static init_method_get_surface_format() {
    if (!this.#_bindings.method_get_surface_format) {
      let classname = new StringName("ImporterMesh");
      let methodname = new StringName("get_surface_format");
      this.#_bindings.method_get_surface_format = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        923996154
      );
    }
  }
  static init_method_set_surface_name() {
    if (!this.#_bindings.method_set_surface_name) {
      let classname = new StringName("ImporterMesh");
      let methodname = new StringName("set_surface_name");
      this.#_bindings.method_set_surface_name = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        501894301
      );
    }
  }
  static init_method_set_surface_material() {
    if (!this.#_bindings.method_set_surface_material) {
      let classname = new StringName("ImporterMesh");
      let methodname = new StringName("set_surface_material");
      this.#_bindings.method_set_surface_material = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3671737478
      );
    }
  }
  static init_method_generate_lods() {
    if (!this.#_bindings.method_generate_lods) {
      let classname = new StringName("ImporterMesh");
      let methodname = new StringName("generate_lods");
      this.#_bindings.method_generate_lods = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2491878677
      );
    }
  }
  static init_method_get_mesh() {
    if (!this.#_bindings.method_get_mesh) {
      let classname = new StringName("ImporterMesh");
      let methodname = new StringName("get_mesh");
      this.#_bindings.method_get_mesh = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1457573577
      );
    }
  }
  static init_method_clear() {
    if (!this.#_bindings.method_clear) {
      let classname = new StringName("ImporterMesh");
      let methodname = new StringName("clear");
      this.#_bindings.method_clear = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_set_lightmap_size_hint() {
    if (!this.#_bindings.method_set_lightmap_size_hint) {
      let classname = new StringName("ImporterMesh");
      let methodname = new StringName("set_lightmap_size_hint");
      this.#_bindings.method_set_lightmap_size_hint = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1130785943
      );
    }
  }
  static init_method_get_lightmap_size_hint() {
    if (!this.#_bindings.method_get_lightmap_size_hint) {
      let classname = new StringName("ImporterMesh");
      let methodname = new StringName("get_lightmap_size_hint");
      this.#_bindings.method_get_lightmap_size_hint = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3690982128
      );
    }
  }

  
  
  add_blend_shape(_name) {
    ImporterMesh.init_method_add_blend_shape();
    return _call_native_mb_no_ret(
      ImporterMesh.#_bindings.method_add_blend_shape,
      this._owner,
      _name
    );
    
  }
  get_blend_shape_count() {
    ImporterMesh.init_method_get_blend_shape_count();
    return _call_native_mb_ret(
      ImporterMesh.#_bindings.method_get_blend_shape_count,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_blend_shape_name(_blend_shape_idx) {
    ImporterMesh.init_method_get_blend_shape_name();
    return _call_native_mb_ret(
      ImporterMesh.#_bindings.method_get_blend_shape_name,
      this._owner,
			Variant.Type.STRING,
    
      _blend_shape_idx
    );
    
  }
  set_blend_shape_mode(_mode) {
    ImporterMesh.init_method_set_blend_shape_mode();
    return _call_native_mb_no_ret(
      ImporterMesh.#_bindings.method_set_blend_shape_mode,
      this._owner,
      _mode
    );
    
  }
  get_blend_shape_mode() {
    ImporterMesh.init_method_get_blend_shape_mode();
    return _call_native_mb_ret(
      ImporterMesh.#_bindings.method_get_blend_shape_mode,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  add_surface(_primitive, _arrays, _blend_shapes, _lods, _material, _name, _flags) {
    ImporterMesh.init_method_add_surface();
    return _call_native_mb_no_ret(
      ImporterMesh.#_bindings.method_add_surface,
      this._owner,
      _primitive, _arrays, _blend_shapes, _lods, _material, _name, _flags
    );
    
  }
  get_surface_count() {
    ImporterMesh.init_method_get_surface_count();
    return _call_native_mb_ret(
      ImporterMesh.#_bindings.method_get_surface_count,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_surface_primitive_type(_surface_idx) {
    ImporterMesh.init_method_get_surface_primitive_type();
    return _call_native_mb_ret(
      ImporterMesh.#_bindings.method_get_surface_primitive_type,
      this._owner,
			Variant.Type.INT,
    
      _surface_idx
    );
    
  }
  get_surface_name(_surface_idx) {
    ImporterMesh.init_method_get_surface_name();
    return _call_native_mb_ret(
      ImporterMesh.#_bindings.method_get_surface_name,
      this._owner,
			Variant.Type.STRING,
    
      _surface_idx
    );
    
  }
  get_surface_arrays(_surface_idx) {
    ImporterMesh.init_method_get_surface_arrays();
    return _call_native_mb_ret(
      ImporterMesh.#_bindings.method_get_surface_arrays,
      this._owner,
			Variant.Type.ARRAY,
    
      _surface_idx
    );
    
  }
  get_surface_blend_shape_arrays(_surface_idx, _blend_shape_idx) {
    ImporterMesh.init_method_get_surface_blend_shape_arrays();
    return _call_native_mb_ret(
      ImporterMesh.#_bindings.method_get_surface_blend_shape_arrays,
      this._owner,
			Variant.Type.ARRAY,
    
      _surface_idx, _blend_shape_idx
    );
    
  }
  get_surface_lod_count(_surface_idx) {
    ImporterMesh.init_method_get_surface_lod_count();
    return _call_native_mb_ret(
      ImporterMesh.#_bindings.method_get_surface_lod_count,
      this._owner,
			Variant.Type.INT,
    
      _surface_idx
    );
    
  }
  get_surface_lod_size(_surface_idx, _lod_idx) {
    ImporterMesh.init_method_get_surface_lod_size();
    return _call_native_mb_ret(
      ImporterMesh.#_bindings.method_get_surface_lod_size,
      this._owner,
			Variant.Type.FLOAT,
    
      _surface_idx, _lod_idx
    );
    
  }
  get_surface_lod_indices(_surface_idx, _lod_idx) {
    ImporterMesh.init_method_get_surface_lod_indices();
    return _call_native_mb_ret(
      ImporterMesh.#_bindings.method_get_surface_lod_indices,
      this._owner,
			Variant.Type.PACKED_INT32_ARRAY,
    
      _surface_idx, _lod_idx
    );
    
  }
  get_surface_material(_surface_idx) {
    ImporterMesh.init_method_get_surface_material();
    return _call_native_mb_ret(
      ImporterMesh.#_bindings.method_get_surface_material,
      this._owner,
			Variant.Type.OBJECT,
      _surface_idx
    );
    
  }
  get_surface_format(_surface_idx) {
    ImporterMesh.init_method_get_surface_format();
    return _call_native_mb_ret(
      ImporterMesh.#_bindings.method_get_surface_format,
      this._owner,
			Variant.Type.INT,
    
      _surface_idx
    );
    
  }
  set_surface_name(_surface_idx, _name) {
    ImporterMesh.init_method_set_surface_name();
    return _call_native_mb_no_ret(
      ImporterMesh.#_bindings.method_set_surface_name,
      this._owner,
      _surface_idx, _name
    );
    
  }
  set_surface_material(_surface_idx, _material) {
    ImporterMesh.init_method_set_surface_material();
    return _call_native_mb_no_ret(
      ImporterMesh.#_bindings.method_set_surface_material,
      this._owner,
      _surface_idx, _material
    );
    
  }
  generate_lods(_normal_merge_angle, _normal_split_angle, _bone_transform_array) {
    ImporterMesh.init_method_generate_lods();
    return _call_native_mb_no_ret(
      ImporterMesh.#_bindings.method_generate_lods,
      this._owner,
      _normal_merge_angle, _normal_split_angle, _bone_transform_array
    );
    
  }
  get_mesh(_base_mesh) {
    ImporterMesh.init_method_get_mesh();
    return _call_native_mb_ret(
      ImporterMesh.#_bindings.method_get_mesh,
      this._owner,
			Variant.Type.OBJECT,
      _base_mesh
    );
    
  }
  clear() {
    ImporterMesh.init_method_clear();
    return _call_native_mb_no_ret(
      ImporterMesh.#_bindings.method_clear,
      this._owner,
      
    );
    
  }
  set_lightmap_size_hint(_size) {
    ImporterMesh.init_method_set_lightmap_size_hint();
    return _call_native_mb_no_ret(
      ImporterMesh.#_bindings.method_set_lightmap_size_hint,
      this._owner,
      _size
    );
    
  }
  get_lightmap_size_hint() {
    ImporterMesh.init_method_get_lightmap_size_hint();
    return _call_native_mb_ret(
      ImporterMesh.#_bindings.method_get_lightmap_size_hint,
      this._owner,
			Variant.Type.VECTOR2I,
    
      
    );
    
  }
  

}