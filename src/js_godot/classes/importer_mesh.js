import * as internal from '__internal__';
import { PackedInt32Array } from 'src/js_godot/variant/packed_int32_array'
import { GDString } from 'src/js_godot/variant/gd_string'
import { GDArray } from 'src/js_godot/variant/gd_array'
import { Vector2i } from 'src/js_godot/variant/vector2i'
import { Resource } from 'src/js_godot/classesresource'
import { Dictionary } from 'src/js_godot/variant/dictionary'
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

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("ImporterMesh");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("ImporterMesh");
      let methodname = new StringName("add_blend_shape");
      this._bindings.method_add_blend_shape = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        83702148
      );
    }
    {
      let classname = new StringName("ImporterMesh");
      let methodname = new StringName("get_blend_shape_count");
      this._bindings.method_get_blend_shape_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("ImporterMesh");
      let methodname = new StringName("get_blend_shape_name");
      this._bindings.method_get_blend_shape_name = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        844755477
      );
    }
    {
      let classname = new StringName("ImporterMesh");
      let methodname = new StringName("set_blend_shape_mode");
      this._bindings.method_set_blend_shape_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        227983991
      );
    }
    {
      let classname = new StringName("ImporterMesh");
      let methodname = new StringName("get_blend_shape_mode");
      this._bindings.method_get_blend_shape_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        836485024
      );
    }
    {
      let classname = new StringName("ImporterMesh");
      let methodname = new StringName("add_surface");
      this._bindings.method_add_surface = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740448849
      );
    }
    {
      let classname = new StringName("ImporterMesh");
      let methodname = new StringName("get_surface_count");
      this._bindings.method_get_surface_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("ImporterMesh");
      let methodname = new StringName("get_surface_primitive_type");
      this._bindings.method_get_surface_primitive_type = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3552571330
      );
    }
    {
      let classname = new StringName("ImporterMesh");
      let methodname = new StringName("get_surface_name");
      this._bindings.method_get_surface_name = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        844755477
      );
    }
    {
      let classname = new StringName("ImporterMesh");
      let methodname = new StringName("get_surface_arrays");
      this._bindings.method_get_surface_arrays = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        663333327
      );
    }
    {
      let classname = new StringName("ImporterMesh");
      let methodname = new StringName("get_surface_blend_shape_arrays");
      this._bindings.method_get_surface_blend_shape_arrays = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2345056839
      );
    }
    {
      let classname = new StringName("ImporterMesh");
      let methodname = new StringName("get_surface_lod_count");
      this._bindings.method_get_surface_lod_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        923996154
      );
    }
    {
      let classname = new StringName("ImporterMesh");
      let methodname = new StringName("get_surface_lod_size");
      this._bindings.method_get_surface_lod_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3085491603
      );
    }
    {
      let classname = new StringName("ImporterMesh");
      let methodname = new StringName("get_surface_lod_indices");
      this._bindings.method_get_surface_lod_indices = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1265128013
      );
    }
    {
      let classname = new StringName("ImporterMesh");
      let methodname = new StringName("get_surface_material");
      this._bindings.method_get_surface_material = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2897466400
      );
    }
    {
      let classname = new StringName("ImporterMesh");
      let methodname = new StringName("get_surface_format");
      this._bindings.method_get_surface_format = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        923996154
      );
    }
    {
      let classname = new StringName("ImporterMesh");
      let methodname = new StringName("set_surface_name");
      this._bindings.method_set_surface_name = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        501894301
      );
    }
    {
      let classname = new StringName("ImporterMesh");
      let methodname = new StringName("set_surface_material");
      this._bindings.method_set_surface_material = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3671737478
      );
    }
    {
      let classname = new StringName("ImporterMesh");
      let methodname = new StringName("generate_lods");
      this._bindings.method_generate_lods = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2491878677
      );
    }
    {
      let classname = new StringName("ImporterMesh");
      let methodname = new StringName("get_mesh");
      this._bindings.method_get_mesh = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1457573577
      );
    }
    {
      let classname = new StringName("ImporterMesh");
      let methodname = new StringName("clear");
      this._bindings.method_clear = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("ImporterMesh");
      let methodname = new StringName("set_lightmap_size_hint");
      this._bindings.method_set_lightmap_size_hint = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1130785943
      );
    }
    {
      let classname = new StringName("ImporterMesh");
      let methodname = new StringName("get_lightmap_size_hint");
      this._bindings.method_get_lightmap_size_hint = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3690982128
      );
    }
  }
  add_blend_shape(_name) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_blend_shape,
      this._owner,
      _name
    );
  }
  get_blend_shape_count() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_blend_shape_count,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  get_blend_shape_name(_blend_shape_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_blend_shape_name,
      this._owner,
			Variant.Type.STRING
    ,
      _blend_shape_idx
    );
  }
  set_blend_shape_mode(_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_blend_shape_mode,
      this._owner,
      _mode
    );
  }
  get_blend_shape_mode() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_blend_shape_mode,
      this._owner,
			Variant.INT,
      
    );
  }
  add_surface(_primitive, _arrays, _blend_shapes, _lods, _material, _name, _flags) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_surface,
      this._owner,
      _primitive, _arrays, _blend_shapes, _lods, _material, _name, _flags
    );
  }
  get_surface_count() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_surface_count,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  get_surface_primitive_type(_surface_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_surface_primitive_type,
      this._owner,
			Variant.INT,
      _surface_idx
    );
  }
  get_surface_name(_surface_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_surface_name,
      this._owner,
			Variant.Type.STRING
    ,
      _surface_idx
    );
  }
  get_surface_arrays(_surface_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_surface_arrays,
      this._owner,
			Variant.Type.ARRAY
    ,
      _surface_idx
    );
  }
  get_surface_blend_shape_arrays(_surface_idx, _blend_shape_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_surface_blend_shape_arrays,
      this._owner,
			Variant.Type.ARRAY
    ,
      _surface_idx, _blend_shape_idx
    );
  }
  get_surface_lod_count(_surface_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_surface_lod_count,
      this._owner,
			Variant.Type.INT,
      _surface_idx
    );
  }
  get_surface_lod_size(_surface_idx, _lod_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_surface_lod_size,
      this._owner,
			Variant.Type.FLOAT,
      _surface_idx, _lod_idx
    );
  }
  get_surface_lod_indices(_surface_idx, _lod_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_surface_lod_indices,
      this._owner,
			Variant.Type.PACKED_INT32_ARRAY
    ,
      _surface_idx, _lod_idx
    );
  }
  get_surface_material(_surface_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_surface_material,
      this._owner,
			Variant.INT,
      _surface_idx
    );
  }
  get_surface_format(_surface_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_surface_format,
      this._owner,
			Variant.Type.INT,
      _surface_idx
    );
  }
  set_surface_name(_surface_idx, _name) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_surface_name,
      this._owner,
      _surface_idx, _name
    );
  }
  set_surface_material(_surface_idx, _material) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_surface_material,
      this._owner,
      _surface_idx, _material
    );
  }
  generate_lods(_normal_merge_angle, _normal_split_angle, _bone_transform_array) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_generate_lods,
      this._owner,
      _normal_merge_angle, _normal_split_angle, _bone_transform_array
    );
  }
  get_mesh(_base_mesh) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_mesh,
      this._owner,
			Variant.INT,
      _base_mesh
    );
  }
  clear() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_clear,
      this._owner,
      
    );
  }
  set_lightmap_size_hint(_size) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_lightmap_size_hint,
      this._owner,
      _size
    );
  }
  get_lightmap_size_hint() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_lightmap_size_hint,
      this._owner,
			Variant.Type.VECTOR2I
    ,
      
    );
  }
}