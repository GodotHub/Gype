import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { GDArray } from '@js_godot/variant/gd_array'
import { Mesh } from '@js_godot/classes/mesh'
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

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("ArrayMesh");
    } else {
      super(godot_object);
    }
  }
  static init_method_add_blend_shape() {
    if (!this.#_bindings.method_add_blend_shape) {
      let classname = new StringName("ArrayMesh");
      let methodname = new StringName("add_blend_shape");
      this.#_bindings.method_add_blend_shape = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3304788590
      );
    }
  }
  static init_method_get_blend_shape_count() {
    if (!this.#_bindings.method_get_blend_shape_count) {
      let classname = new StringName("ArrayMesh");
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
      let classname = new StringName("ArrayMesh");
      let methodname = new StringName("get_blend_shape_name");
      this.#_bindings.method_get_blend_shape_name = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        659327637
      );
    }
  }
  static init_method_set_blend_shape_name() {
    if (!this.#_bindings.method_set_blend_shape_name) {
      let classname = new StringName("ArrayMesh");
      let methodname = new StringName("set_blend_shape_name");
      this.#_bindings.method_set_blend_shape_name = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3780747571
      );
    }
  }
  static init_method_clear_blend_shapes() {
    if (!this.#_bindings.method_clear_blend_shapes) {
      let classname = new StringName("ArrayMesh");
      let methodname = new StringName("clear_blend_shapes");
      this.#_bindings.method_clear_blend_shapes = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_set_blend_shape_mode() {
    if (!this.#_bindings.method_set_blend_shape_mode) {
      let classname = new StringName("ArrayMesh");
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
      let classname = new StringName("ArrayMesh");
      let methodname = new StringName("get_blend_shape_mode");
      this.#_bindings.method_get_blend_shape_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        836485024
      );
    }
  }
  static init_method_add_surface_from_arrays() {
    if (!this.#_bindings.method_add_surface_from_arrays) {
      let classname = new StringName("ArrayMesh");
      let methodname = new StringName("add_surface_from_arrays");
      this.#_bindings.method_add_surface_from_arrays = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1796411378
      );
    }
  }
  static init_method_clear_surfaces() {
    if (!this.#_bindings.method_clear_surfaces) {
      let classname = new StringName("ArrayMesh");
      let methodname = new StringName("clear_surfaces");
      this.#_bindings.method_clear_surfaces = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_surface_update_vertex_region() {
    if (!this.#_bindings.method_surface_update_vertex_region) {
      let classname = new StringName("ArrayMesh");
      let methodname = new StringName("surface_update_vertex_region");
      this.#_bindings.method_surface_update_vertex_region = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3837166854
      );
    }
  }
  static init_method_surface_update_attribute_region() {
    if (!this.#_bindings.method_surface_update_attribute_region) {
      let classname = new StringName("ArrayMesh");
      let methodname = new StringName("surface_update_attribute_region");
      this.#_bindings.method_surface_update_attribute_region = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3837166854
      );
    }
  }
  static init_method_surface_update_skin_region() {
    if (!this.#_bindings.method_surface_update_skin_region) {
      let classname = new StringName("ArrayMesh");
      let methodname = new StringName("surface_update_skin_region");
      this.#_bindings.method_surface_update_skin_region = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3837166854
      );
    }
  }
  static init_method_surface_get_array_len() {
    if (!this.#_bindings.method_surface_get_array_len) {
      let classname = new StringName("ArrayMesh");
      let methodname = new StringName("surface_get_array_len");
      this.#_bindings.method_surface_get_array_len = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        923996154
      );
    }
  }
  static init_method_surface_get_array_index_len() {
    if (!this.#_bindings.method_surface_get_array_index_len) {
      let classname = new StringName("ArrayMesh");
      let methodname = new StringName("surface_get_array_index_len");
      this.#_bindings.method_surface_get_array_index_len = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        923996154
      );
    }
  }
  static init_method_surface_get_format() {
    if (!this.#_bindings.method_surface_get_format) {
      let classname = new StringName("ArrayMesh");
      let methodname = new StringName("surface_get_format");
      this.#_bindings.method_surface_get_format = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3718287884
      );
    }
  }
  static init_method_surface_get_primitive_type() {
    if (!this.#_bindings.method_surface_get_primitive_type) {
      let classname = new StringName("ArrayMesh");
      let methodname = new StringName("surface_get_primitive_type");
      this.#_bindings.method_surface_get_primitive_type = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4141943888
      );
    }
  }
  static init_method_surface_find_by_name() {
    if (!this.#_bindings.method_surface_find_by_name) {
      let classname = new StringName("ArrayMesh");
      let methodname = new StringName("surface_find_by_name");
      this.#_bindings.method_surface_find_by_name = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1321353865
      );
    }
  }
  static init_method_surface_set_name() {
    if (!this.#_bindings.method_surface_set_name) {
      let classname = new StringName("ArrayMesh");
      let methodname = new StringName("surface_set_name");
      this.#_bindings.method_surface_set_name = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        501894301
      );
    }
  }
  static init_method_surface_get_name() {
    if (!this.#_bindings.method_surface_get_name) {
      let classname = new StringName("ArrayMesh");
      let methodname = new StringName("surface_get_name");
      this.#_bindings.method_surface_get_name = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        844755477
      );
    }
  }
  static init_method_regen_normal_maps() {
    if (!this.#_bindings.method_regen_normal_maps) {
      let classname = new StringName("ArrayMesh");
      let methodname = new StringName("regen_normal_maps");
      this.#_bindings.method_regen_normal_maps = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_lightmap_unwrap() {
    if (!this.#_bindings.method_lightmap_unwrap) {
      let classname = new StringName("ArrayMesh");
      let methodname = new StringName("lightmap_unwrap");
      this.#_bindings.method_lightmap_unwrap = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1476641071
      );
    }
  }
  static init_method_set_custom_aabb() {
    if (!this.#_bindings.method_set_custom_aabb) {
      let classname = new StringName("ArrayMesh");
      let methodname = new StringName("set_custom_aabb");
      this.#_bindings.method_set_custom_aabb = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        259215842
      );
    }
  }
  static init_method_get_custom_aabb() {
    if (!this.#_bindings.method_get_custom_aabb) {
      let classname = new StringName("ArrayMesh");
      let methodname = new StringName("get_custom_aabb");
      this.#_bindings.method_get_custom_aabb = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1068685055
      );
    }
  }
  static init_method_set_shadow_mesh() {
    if (!this.#_bindings.method_set_shadow_mesh) {
      let classname = new StringName("ArrayMesh");
      let methodname = new StringName("set_shadow_mesh");
      this.#_bindings.method_set_shadow_mesh = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3377897901
      );
    }
  }
  static init_method_get_shadow_mesh() {
    if (!this.#_bindings.method_get_shadow_mesh) {
      let classname = new StringName("ArrayMesh");
      let methodname = new StringName("get_shadow_mesh");
      this.#_bindings.method_get_shadow_mesh = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3206942465
      );
    }
  }

  
  
  add_blend_shape(_name) {
    ArrayMesh.init_method_add_blend_shape();
    return _call_native_mb_no_ret(
      ArrayMesh.#_bindings.method_add_blend_shape,
      this._owner,
      _name
    );
    
  }
  get_blend_shape_count() {
    ArrayMesh.init_method_get_blend_shape_count();
    return _call_native_mb_ret(
      ArrayMesh.#_bindings.method_get_blend_shape_count,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_blend_shape_name(_index) {
    ArrayMesh.init_method_get_blend_shape_name();
    return _call_native_mb_ret(
      ArrayMesh.#_bindings.method_get_blend_shape_name,
      this._owner,
			Variant.Type.STRING_NAME,
    
      _index
    );
    
  }
  set_blend_shape_name(_index, _name) {
    ArrayMesh.init_method_set_blend_shape_name();
    return _call_native_mb_no_ret(
      ArrayMesh.#_bindings.method_set_blend_shape_name,
      this._owner,
      _index, _name
    );
    
  }
  clear_blend_shapes() {
    ArrayMesh.init_method_clear_blend_shapes();
    return _call_native_mb_no_ret(
      ArrayMesh.#_bindings.method_clear_blend_shapes,
      this._owner,
      
    );
    
  }
  set_blend_shape_mode(_mode) {
    ArrayMesh.init_method_set_blend_shape_mode();
    return _call_native_mb_no_ret(
      ArrayMesh.#_bindings.method_set_blend_shape_mode,
      this._owner,
      _mode
    );
    
  }
  get_blend_shape_mode() {
    ArrayMesh.init_method_get_blend_shape_mode();
    return _call_native_mb_ret(
      ArrayMesh.#_bindings.method_get_blend_shape_mode,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  add_surface_from_arrays(_primitive, _arrays, _blend_shapes, _lods, _flags) {
    ArrayMesh.init_method_add_surface_from_arrays();
    return _call_native_mb_no_ret(
      ArrayMesh.#_bindings.method_add_surface_from_arrays,
      this._owner,
      _primitive, _arrays, _blend_shapes, _lods, _flags
    );
    
  }
  clear_surfaces() {
    ArrayMesh.init_method_clear_surfaces();
    return _call_native_mb_no_ret(
      ArrayMesh.#_bindings.method_clear_surfaces,
      this._owner,
      
    );
    
  }
  surface_update_vertex_region(_surf_idx, _offset, _data) {
    ArrayMesh.init_method_surface_update_vertex_region();
    return _call_native_mb_no_ret(
      ArrayMesh.#_bindings.method_surface_update_vertex_region,
      this._owner,
      _surf_idx, _offset, _data
    );
    
  }
  surface_update_attribute_region(_surf_idx, _offset, _data) {
    ArrayMesh.init_method_surface_update_attribute_region();
    return _call_native_mb_no_ret(
      ArrayMesh.#_bindings.method_surface_update_attribute_region,
      this._owner,
      _surf_idx, _offset, _data
    );
    
  }
  surface_update_skin_region(_surf_idx, _offset, _data) {
    ArrayMesh.init_method_surface_update_skin_region();
    return _call_native_mb_no_ret(
      ArrayMesh.#_bindings.method_surface_update_skin_region,
      this._owner,
      _surf_idx, _offset, _data
    );
    
  }
  surface_get_array_len(_surf_idx) {
    ArrayMesh.init_method_surface_get_array_len();
    return _call_native_mb_ret(
      ArrayMesh.#_bindings.method_surface_get_array_len,
      this._owner,
			Variant.Type.INT,
    
      _surf_idx
    );
    
  }
  surface_get_array_index_len(_surf_idx) {
    ArrayMesh.init_method_surface_get_array_index_len();
    return _call_native_mb_ret(
      ArrayMesh.#_bindings.method_surface_get_array_index_len,
      this._owner,
			Variant.Type.INT,
    
      _surf_idx
    );
    
  }
  surface_get_format(_surf_idx) {
    ArrayMesh.init_method_surface_get_format();
    return _call_native_mb_ret(
      ArrayMesh.#_bindings.method_surface_get_format,
      this._owner,
			Variant.Type.OBJECT,
      _surf_idx
    );
    
  }
  surface_get_primitive_type(_surf_idx) {
    ArrayMesh.init_method_surface_get_primitive_type();
    return _call_native_mb_ret(
      ArrayMesh.#_bindings.method_surface_get_primitive_type,
      this._owner,
			Variant.Type.INT,
    
      _surf_idx
    );
    
  }
  surface_find_by_name(_name) {
    ArrayMesh.init_method_surface_find_by_name();
    return _call_native_mb_ret(
      ArrayMesh.#_bindings.method_surface_find_by_name,
      this._owner,
			Variant.Type.INT,
    
      _name
    );
    
  }
  surface_set_name(_surf_idx, _name) {
    ArrayMesh.init_method_surface_set_name();
    return _call_native_mb_no_ret(
      ArrayMesh.#_bindings.method_surface_set_name,
      this._owner,
      _surf_idx, _name
    );
    
  }
  surface_get_name(_surf_idx) {
    ArrayMesh.init_method_surface_get_name();
    return _call_native_mb_ret(
      ArrayMesh.#_bindings.method_surface_get_name,
      this._owner,
			Variant.Type.STRING,
    
      _surf_idx
    );
    
  }
  regen_normal_maps() {
    ArrayMesh.init_method_regen_normal_maps();
    return _call_native_mb_no_ret(
      ArrayMesh.#_bindings.method_regen_normal_maps,
      this._owner,
      
    );
    
  }
  lightmap_unwrap(_transform, _texel_size) {
    ArrayMesh.init_method_lightmap_unwrap();
    return _call_native_mb_ret(
      ArrayMesh.#_bindings.method_lightmap_unwrap,
      this._owner,
			Variant.Type.INT,
    
      _transform, _texel_size
    );
    
  }
  set_custom_aabb(_aabb) {
    ArrayMesh.init_method_set_custom_aabb();
    return _call_native_mb_no_ret(
      ArrayMesh.#_bindings.method_set_custom_aabb,
      this._owner,
      _aabb
    );
    
  }
  get_custom_aabb() {
    ArrayMesh.init_method_get_custom_aabb();
    return _call_native_mb_ret(
      ArrayMesh.#_bindings.method_get_custom_aabb,
      this._owner,
			Variant.Type.AABB,
    
      
    );
    
  }
  set_shadow_mesh(_mesh) {
    ArrayMesh.init_method_set_shadow_mesh();
    return _call_native_mb_no_ret(
      ArrayMesh.#_bindings.method_set_shadow_mesh,
      this._owner,
      _mesh
    );
    
  }
  get_shadow_mesh() {
    ArrayMesh.init_method_get_shadow_mesh();
    return _call_native_mb_ret(
      ArrayMesh.#_bindings.method_get_shadow_mesh,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  
get blend_shape_mode () {
  return this.get_blend_shape_mode();
}
set blend_shape_mode (new_value) {
  this.set_blend_shape_mode(new_value);
}
get custom_aabb () {
  return this.get_custom_aabb();
}
set custom_aabb (new_value) {
  this.set_custom_aabb(new_value);
}
get shadow_mesh () {
  return this.get_shadow_mesh();
}
set shadow_mesh (new_value) {
  this.set_shadow_mesh(new_value);
}

}