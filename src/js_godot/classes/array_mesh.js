import * as internal from '__internal__';
import { GDString } from 'src/js_godot/variant/gd_string'
import { PackedByteArray } from 'src/js_godot/variant/packed_byte_array'
import { GDArray } from 'src/js_godot/variant/gd_array'
import { StringName } from 'src/js_godot/variant/string_name'
import { Transform3D } from 'src/js_godot/variant/transform3d'
import { AABB } from 'src/js_godot/variant/aabb'
import { Dictionary } from 'src/js_godot/variant/dictionary'
import { Mesh } from 'src/js_godot/classesmesh'
class _MethodBindings {
    method_add_blend_shape;
    method_get_blend_shape_count;
    method_get_blend_shape_name;
    method_set_blend_shape_name;
    method_clear_blend_shapes;
    method_set_blend_shape_mode;
    method_get_blend_shape_mode;
    method_add_surface_from_arrays;
    method_clear_surfaces;
    method_surface_update_vertex_region;
    method_surface_update_attribute_region;
    method_surface_update_skin_region;
    method_surface_get_array_len;
    method_surface_get_array_index_len;
    method_surface_get_format;
    method_surface_get_primitive_type;
    method_surface_find_by_name;
    method_surface_set_name;
    method_surface_get_name;
    method_regen_normal_maps;
    method_lightmap_unwrap;
    method_set_custom_aabb;
    method_get_custom_aabb;
    method_set_shadow_mesh;
    method_get_shadow_mesh;
}


export class ArrayMesh extends Mesh{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("ArrayMesh");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("ArrayMesh");
      let methodname = new StringName("add_blend_shape");
      this._bindings.method_add_blend_shape = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3304788590
      );
    }
    {
      let classname = new StringName("ArrayMesh");
      let methodname = new StringName("get_blend_shape_count");
      this._bindings.method_get_blend_shape_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("ArrayMesh");
      let methodname = new StringName("get_blend_shape_name");
      this._bindings.method_get_blend_shape_name = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        659327637
      );
    }
    {
      let classname = new StringName("ArrayMesh");
      let methodname = new StringName("set_blend_shape_name");
      this._bindings.method_set_blend_shape_name = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3780747571
      );
    }
    {
      let classname = new StringName("ArrayMesh");
      let methodname = new StringName("clear_blend_shapes");
      this._bindings.method_clear_blend_shapes = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("ArrayMesh");
      let methodname = new StringName("set_blend_shape_mode");
      this._bindings.method_set_blend_shape_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        227983991
      );
    }
    {
      let classname = new StringName("ArrayMesh");
      let methodname = new StringName("get_blend_shape_mode");
      this._bindings.method_get_blend_shape_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        836485024
      );
    }
    {
      let classname = new StringName("ArrayMesh");
      let methodname = new StringName("add_surface_from_arrays");
      this._bindings.method_add_surface_from_arrays = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1796411378
      );
    }
    {
      let classname = new StringName("ArrayMesh");
      let methodname = new StringName("clear_surfaces");
      this._bindings.method_clear_surfaces = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("ArrayMesh");
      let methodname = new StringName("surface_update_vertex_region");
      this._bindings.method_surface_update_vertex_region = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3837166854
      );
    }
    {
      let classname = new StringName("ArrayMesh");
      let methodname = new StringName("surface_update_attribute_region");
      this._bindings.method_surface_update_attribute_region = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3837166854
      );
    }
    {
      let classname = new StringName("ArrayMesh");
      let methodname = new StringName("surface_update_skin_region");
      this._bindings.method_surface_update_skin_region = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3837166854
      );
    }
    {
      let classname = new StringName("ArrayMesh");
      let methodname = new StringName("surface_get_array_len");
      this._bindings.method_surface_get_array_len = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        923996154
      );
    }
    {
      let classname = new StringName("ArrayMesh");
      let methodname = new StringName("surface_get_array_index_len");
      this._bindings.method_surface_get_array_index_len = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        923996154
      );
    }
    {
      let classname = new StringName("ArrayMesh");
      let methodname = new StringName("surface_get_format");
      this._bindings.method_surface_get_format = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3718287884
      );
    }
    {
      let classname = new StringName("ArrayMesh");
      let methodname = new StringName("surface_get_primitive_type");
      this._bindings.method_surface_get_primitive_type = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4141943888
      );
    }
    {
      let classname = new StringName("ArrayMesh");
      let methodname = new StringName("surface_find_by_name");
      this._bindings.method_surface_find_by_name = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1321353865
      );
    }
    {
      let classname = new StringName("ArrayMesh");
      let methodname = new StringName("surface_set_name");
      this._bindings.method_surface_set_name = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        501894301
      );
    }
    {
      let classname = new StringName("ArrayMesh");
      let methodname = new StringName("surface_get_name");
      this._bindings.method_surface_get_name = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        844755477
      );
    }
    {
      let classname = new StringName("ArrayMesh");
      let methodname = new StringName("regen_normal_maps");
      this._bindings.method_regen_normal_maps = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("ArrayMesh");
      let methodname = new StringName("lightmap_unwrap");
      this._bindings.method_lightmap_unwrap = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1476641071
      );
    }
    {
      let classname = new StringName("ArrayMesh");
      let methodname = new StringName("set_custom_aabb");
      this._bindings.method_set_custom_aabb = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        259215842
      );
    }
    {
      let classname = new StringName("ArrayMesh");
      let methodname = new StringName("get_custom_aabb");
      this._bindings.method_get_custom_aabb = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1068685055
      );
    }
    {
      let classname = new StringName("ArrayMesh");
      let methodname = new StringName("set_shadow_mesh");
      this._bindings.method_set_shadow_mesh = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3377897901
      );
    }
    {
      let classname = new StringName("ArrayMesh");
      let methodname = new StringName("get_shadow_mesh");
      this._bindings.method_get_shadow_mesh = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3206942465
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
  get_blend_shape_name(_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_blend_shape_name,
      this._owner,
			Variant.Type.STRING_NAME
    ,
      _index
    );
  }
  set_blend_shape_name(_index, _name) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_blend_shape_name,
      this._owner,
      _index, _name
    );
  }
  clear_blend_shapes() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_clear_blend_shapes,
      this._owner,
      
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
  add_surface_from_arrays(_primitive, _arrays, _blend_shapes, _lods, _flags) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_surface_from_arrays,
      this._owner,
      _primitive, _arrays, _blend_shapes, _lods, _flags
    );
  }
  clear_surfaces() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_clear_surfaces,
      this._owner,
      
    );
  }
  surface_update_vertex_region(_surf_idx, _offset, _data) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_surface_update_vertex_region,
      this._owner,
      _surf_idx, _offset, _data
    );
  }
  surface_update_attribute_region(_surf_idx, _offset, _data) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_surface_update_attribute_region,
      this._owner,
      _surf_idx, _offset, _data
    );
  }
  surface_update_skin_region(_surf_idx, _offset, _data) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_surface_update_skin_region,
      this._owner,
      _surf_idx, _offset, _data
    );
  }
  surface_get_array_len(_surf_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_surface_get_array_len,
      this._owner,
			Variant.Type.INT,
      _surf_idx
    );
  }
  surface_get_array_index_len(_surf_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_surface_get_array_index_len,
      this._owner,
			Variant.Type.INT,
      _surf_idx
    );
  }
  surface_get_format(_surf_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_surface_get_format,
      this._owner,
			Variant.INT,
      _surf_idx
    );
  }
  surface_get_primitive_type(_surf_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_surface_get_primitive_type,
      this._owner,
			Variant.INT,
      _surf_idx
    );
  }
  surface_find_by_name(_name) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_surface_find_by_name,
      this._owner,
			Variant.Type.INT,
      _name
    );
  }
  surface_set_name(_surf_idx, _name) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_surface_set_name,
      this._owner,
      _surf_idx, _name
    );
  }
  surface_get_name(_surf_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_surface_get_name,
      this._owner,
			Variant.Type.STRING
    ,
      _surf_idx
    );
  }
  regen_normal_maps() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_regen_normal_maps,
      this._owner,
      
    );
  }
  lightmap_unwrap(_transform, _texel_size) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_lightmap_unwrap,
      this._owner,
			Variant.INT,
      _transform, _texel_size
    );
  }
  set_custom_aabb(_aabb) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_custom_aabb,
      this._owner,
      _aabb
    );
  }
  get_custom_aabb() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_custom_aabb,
      this._owner,
			Variant.Type.AABB
    ,
      
    );
  }
  set_shadow_mesh(_mesh) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_shadow_mesh,
      this._owner,
      _mesh
    );
  }
  get_shadow_mesh() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_shadow_mesh,
      this._owner,
			Variant.INT,
      
    );
  }
}