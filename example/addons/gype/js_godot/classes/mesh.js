import * as internal from '__internal__';
import { GDArray } from '@js_godot/variant/gd_array'
import { StringName } from '@js_godot/variant/string_name'
import { Resource } from '@js_godot/classes/resource'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
  method_set_lightmap_size_hint;
  method_get_lightmap_size_hint;
  method_get_aabb;
  method_get_faces;
  method_get_surface_count;
  method_surface_get_arrays;
  method_surface_get_blend_shape_arrays;
  method_surface_set_material;
  method_surface_get_material;
  method_create_placeholder;
  method_create_trimesh_shape;
  method_create_convex_shape;
  method_create_outline;
  method_generate_triangle_mesh;
}
@GodotClass
export class Mesh extends Resource{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("Mesh");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_lightmap_size_hint() {
    if (!this._bindings.method_set_lightmap_size_hint) {
      let classname = new StringName("Mesh");
      let methodname = new StringName("set_lightmap_size_hint");
      this._bindings.method_set_lightmap_size_hint = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1130785943
      );
    }
  }
  static init_method_get_lightmap_size_hint() {
    if (!this._bindings.method_get_lightmap_size_hint) {
      let classname = new StringName("Mesh");
      let methodname = new StringName("get_lightmap_size_hint");
      this._bindings.method_get_lightmap_size_hint = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3690982128
      );
    }
  }
  static init_method_get_aabb() {
    if (!this._bindings.method_get_aabb) {
      let classname = new StringName("Mesh");
      let methodname = new StringName("get_aabb");
      this._bindings.method_get_aabb = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1068685055
      );
    }
  }
  static init_method_get_faces() {
    if (!this._bindings.method_get_faces) {
      let classname = new StringName("Mesh");
      let methodname = new StringName("get_faces");
      this._bindings.method_get_faces = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        497664490
      );
    }
  }
  static init_method_get_surface_count() {
    if (!this._bindings.method_get_surface_count) {
      let classname = new StringName("Mesh");
      let methodname = new StringName("get_surface_count");
      this._bindings.method_get_surface_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_surface_get_arrays() {
    if (!this._bindings.method_surface_get_arrays) {
      let classname = new StringName("Mesh");
      let methodname = new StringName("surface_get_arrays");
      this._bindings.method_surface_get_arrays = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        663333327
      );
    }
  }
  static init_method_surface_get_blend_shape_arrays() {
    if (!this._bindings.method_surface_get_blend_shape_arrays) {
      let classname = new StringName("Mesh");
      let methodname = new StringName("surface_get_blend_shape_arrays");
      this._bindings.method_surface_get_blend_shape_arrays = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        663333327
      );
    }
  }
  static init_method_surface_set_material() {
    if (!this._bindings.method_surface_set_material) {
      let classname = new StringName("Mesh");
      let methodname = new StringName("surface_set_material");
      this._bindings.method_surface_set_material = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3671737478
      );
    }
  }
  static init_method_surface_get_material() {
    if (!this._bindings.method_surface_get_material) {
      let classname = new StringName("Mesh");
      let methodname = new StringName("surface_get_material");
      this._bindings.method_surface_get_material = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2897466400
      );
    }
  }
  static init_method_create_placeholder() {
    if (!this._bindings.method_create_placeholder) {
      let classname = new StringName("Mesh");
      let methodname = new StringName("create_placeholder");
      this._bindings.method_create_placeholder = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        121922552
      );
    }
  }
  static init_method_create_trimesh_shape() {
    if (!this._bindings.method_create_trimesh_shape) {
      let classname = new StringName("Mesh");
      let methodname = new StringName("create_trimesh_shape");
      this._bindings.method_create_trimesh_shape = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4160111210
      );
    }
  }
  static init_method_create_convex_shape() {
    if (!this._bindings.method_create_convex_shape) {
      let classname = new StringName("Mesh");
      let methodname = new StringName("create_convex_shape");
      this._bindings.method_create_convex_shape = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2529984628
      );
    }
  }
  static init_method_create_outline() {
    if (!this._bindings.method_create_outline) {
      let classname = new StringName("Mesh");
      let methodname = new StringName("create_outline");
      this._bindings.method_create_outline = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1208642001
      );
    }
  }
  static init_method_generate_triangle_mesh() {
    if (!this._bindings.method_generate_triangle_mesh) {
      let classname = new StringName("Mesh");
      let methodname = new StringName("generate_triangle_mesh");
      this._bindings.method_generate_triangle_mesh = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3476533166
      );
    }
  }

  
  
  _get_surface_count() {
  }
  _surface_get_array_len(_index) {
  }
  _surface_get_array_index_len(_index) {
  }
  _surface_get_arrays(_index) {
  }
  _surface_get_blend_shape_arrays(_index) {
  }
  _surface_get_lods(_index) {
  }
  _surface_get_format(_index) {
  }
  _surface_get_primitive_type(_index) {
  }
  _surface_set_material(_index, _material) {
  }
  _surface_get_material(_index) {
  }
  _get_blend_shape_count() {
  }
  _get_blend_shape_name(_index) {
  }
  _set_blend_shape_name(_index, _name) {
  }
  _get_aabb() {
  }
  set_lightmap_size_hint(_size) {
    Mesh.init_method_set_lightmap_size_hint();
    return _call_native_mb_no_ret(
      Mesh._bindings.method_set_lightmap_size_hint,
      this._owner,
      _size
    );
    
  }
  get_lightmap_size_hint() {
    Mesh.init_method_get_lightmap_size_hint();
    return _call_native_mb_ret(
      Mesh._bindings.method_get_lightmap_size_hint,
      this._owner,
			Variant.Type.VECTOR2I,
    
      
    );
    
  }
  get_aabb() {
    Mesh.init_method_get_aabb();
    return _call_native_mb_ret(
      Mesh._bindings.method_get_aabb,
      this._owner,
			Variant.Type.AABB,
    
      
    );
    
  }
  get_faces() {
    Mesh.init_method_get_faces();
    return _call_native_mb_ret(
      Mesh._bindings.method_get_faces,
      this._owner,
			Variant.Type.PACKED_VECTOR3_ARRAY,
    
      
    );
    
  }
  get_surface_count() {
    Mesh.init_method_get_surface_count();
    return _call_native_mb_ret(
      Mesh._bindings.method_get_surface_count,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  surface_get_arrays(_surf_idx) {
    Mesh.init_method_surface_get_arrays();
    return _call_native_mb_ret(
      Mesh._bindings.method_surface_get_arrays,
      this._owner,
			Variant.Type.ARRAY,
    
      _surf_idx
    );
    
  }
  surface_get_blend_shape_arrays(_surf_idx) {
    Mesh.init_method_surface_get_blend_shape_arrays();
    return _call_native_mb_ret(
      Mesh._bindings.method_surface_get_blend_shape_arrays,
      this._owner,
			Variant.Type.ARRAY,
      _surf_idx
    );
    
  }
  surface_set_material(_surf_idx, _material) {
    Mesh.init_method_surface_set_material();
    return _call_native_mb_no_ret(
      Mesh._bindings.method_surface_set_material,
      this._owner,
      _surf_idx, _material
    );
    
  }
  surface_get_material(_surf_idx) {
    Mesh.init_method_surface_get_material();
    return _call_native_mb_ret(
      Mesh._bindings.method_surface_get_material,
      this._owner,
			Variant.Type.OBJECT,
      _surf_idx
    );
    
  }
  create_placeholder() {
    Mesh.init_method_create_placeholder();
    return _call_native_mb_ret(
      Mesh._bindings.method_create_placeholder,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  create_trimesh_shape() {
    Mesh.init_method_create_trimesh_shape();
    return _call_native_mb_ret(
      Mesh._bindings.method_create_trimesh_shape,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  create_convex_shape(_clean, _simplify) {
    Mesh.init_method_create_convex_shape();
    return _call_native_mb_ret(
      Mesh._bindings.method_create_convex_shape,
      this._owner,
			Variant.Type.OBJECT,
      _clean, _simplify
    );
    
  }
  create_outline(_margin) {
    Mesh.init_method_create_outline();
    return _call_native_mb_ret(
      Mesh._bindings.method_create_outline,
      this._owner,
			Variant.Type.OBJECT,
      _margin
    );
    
  }
  generate_triangle_mesh() {
    Mesh.init_method_generate_triangle_mesh();
    return _call_native_mb_ret(
      Mesh._bindings.method_generate_triangle_mesh,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  
get lightmap_size_hint () {
  return this.get_lightmap_size_hint();
}
set lightmap_size_hint (new_value) {
  this.set_lightmap_size_hint(new_value);
}

  static PrimitiveType = {
    PRIMITIVE_POINTS: 0,
    PRIMITIVE_LINES: 1,
    PRIMITIVE_LINE_STRIP: 2,
    PRIMITIVE_TRIANGLES: 3,
    PRIMITIVE_TRIANGLE_STRIP: 4,
  }
  static ArrayType = {
    ARRAY_VERTEX: 0,
    ARRAY_NORMAL: 1,
    ARRAY_TANGENT: 2,
    ARRAY_COLOR: 3,
    ARRAY_TEX_UV: 4,
    ARRAY_TEX_UV2: 5,
    ARRAY_CUSTOM0: 6,
    ARRAY_CUSTOM1: 7,
    ARRAY_CUSTOM2: 8,
    ARRAY_CUSTOM3: 9,
    ARRAY_BONES: 10,
    ARRAY_WEIGHTS: 11,
    ARRAY_INDEX: 12,
    ARRAY_MAX: 13,
  }
  static ArrayCustomFormat = {
    ARRAY_CUSTOM_RGBA8_UNORM: 0,
    ARRAY_CUSTOM_RGBA8_SNORM: 1,
    ARRAY_CUSTOM_RG_HALF: 2,
    ARRAY_CUSTOM_RGBA_HALF: 3,
    ARRAY_CUSTOM_R_FLOAT: 4,
    ARRAY_CUSTOM_RG_FLOAT: 5,
    ARRAY_CUSTOM_RGB_FLOAT: 6,
    ARRAY_CUSTOM_RGBA_FLOAT: 7,
    ARRAY_CUSTOM_MAX: 8,
  }
  static ArrayFormat = {
    ARRAY_FORMAT_VERTEX: 1,
    ARRAY_FORMAT_NORMAL: 2,
    ARRAY_FORMAT_TANGENT: 4,
    ARRAY_FORMAT_COLOR: 8,
    ARRAY_FORMAT_TEX_UV: 16,
    ARRAY_FORMAT_TEX_UV2: 32,
    ARRAY_FORMAT_CUSTOM0: 64,
    ARRAY_FORMAT_CUSTOM1: 128,
    ARRAY_FORMAT_CUSTOM2: 256,
    ARRAY_FORMAT_CUSTOM3: 512,
    ARRAY_FORMAT_BONES: 1024,
    ARRAY_FORMAT_WEIGHTS: 2048,
    ARRAY_FORMAT_INDEX: 4096,
    ARRAY_FORMAT_BLEND_SHAPE_MASK: 7,
    ARRAY_FORMAT_CUSTOM_BASE: 13,
    ARRAY_FORMAT_CUSTOM_BITS: 3,
    ARRAY_FORMAT_CUSTOM0_SHIFT: 13,
    ARRAY_FORMAT_CUSTOM1_SHIFT: 16,
    ARRAY_FORMAT_CUSTOM2_SHIFT: 19,
    ARRAY_FORMAT_CUSTOM3_SHIFT: 22,
    ARRAY_FORMAT_CUSTOM_MASK: 7,
    ARRAY_COMPRESS_FLAGS_BASE: 25,
    ARRAY_FLAG_USE_2D_VERTICES: 33554432,
    ARRAY_FLAG_USE_DYNAMIC_UPDATE: 67108864,
    ARRAY_FLAG_USE_8_BONE_WEIGHTS: 134217728,
    ARRAY_FLAG_USES_EMPTY_VERTEX_ARRAY: 268435456,
    ARRAY_FLAG_COMPRESS_ATTRIBUTES: 536870912,
  }
  static BlendShapeMode = {
    BLEND_SHAPE_MODE_NORMALIZED: 0,
    BLEND_SHAPE_MODE_RELATIVE: 1,
  }
}