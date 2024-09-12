import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { GDArray } from '@js_godot/variant/gd_array'
import { RefCounted } from '@js_godot/classes/ref_counted'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_skin_weight_count;
  method_get_skin_weight_count;
  method_set_custom_format;
  method_get_custom_format;
  method_begin;
  method_add_vertex;
  method_set_color;
  method_set_normal;
  method_set_tangent;
  method_set_uv;
  method_set_uv2;
  method_set_bones;
  method_set_weights;
  method_set_custom;
  method_set_smooth_group;
  method_add_triangle_fan;
  method_add_index;
  method_index;
  method_deindex;
  method_generate_normals;
  method_generate_tangents;
  method_optimize_indices_for_cache;
  method_get_aabb;
  method_generate_lod;
  method_set_material;
  method_get_primitive_type;
  method_clear;
  method_create_from;
  method_create_from_arrays;
  method_create_from_blend_shape;
  method_append_from;
  method_commit;
  method_commit_to_arrays;
}
export class SurfaceTool extends RefCounted{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("SurfaceTool");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_skin_weight_count() {
    if (!this.#_bindings.method_set_skin_weight_count) {
      let classname = new StringName("SurfaceTool");
      let methodname = new StringName("set_skin_weight_count");
      this.#_bindings.method_set_skin_weight_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        618679515
      );
    }
  }
  static init_method_get_skin_weight_count() {
    if (!this.#_bindings.method_get_skin_weight_count) {
      let classname = new StringName("SurfaceTool");
      let methodname = new StringName("get_skin_weight_count");
      this.#_bindings.method_get_skin_weight_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1072401130
      );
    }
  }
  static init_method_set_custom_format() {
    if (!this.#_bindings.method_set_custom_format) {
      let classname = new StringName("SurfaceTool");
      let methodname = new StringName("set_custom_format");
      this.#_bindings.method_set_custom_format = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4087759856
      );
    }
  }
  static init_method_get_custom_format() {
    if (!this.#_bindings.method_get_custom_format) {
      let classname = new StringName("SurfaceTool");
      let methodname = new StringName("get_custom_format");
      this.#_bindings.method_get_custom_format = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        839863283
      );
    }
  }
  static init_method_begin() {
    if (!this.#_bindings.method_begin) {
      let classname = new StringName("SurfaceTool");
      let methodname = new StringName("begin");
      this.#_bindings.method_begin = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2230304113
      );
    }
  }
  static init_method_add_vertex() {
    if (!this.#_bindings.method_add_vertex) {
      let classname = new StringName("SurfaceTool");
      let methodname = new StringName("add_vertex");
      this.#_bindings.method_add_vertex = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3460891852
      );
    }
  }
  static init_method_set_color() {
    if (!this.#_bindings.method_set_color) {
      let classname = new StringName("SurfaceTool");
      let methodname = new StringName("set_color");
      this.#_bindings.method_set_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2920490490
      );
    }
  }
  static init_method_set_normal() {
    if (!this.#_bindings.method_set_normal) {
      let classname = new StringName("SurfaceTool");
      let methodname = new StringName("set_normal");
      this.#_bindings.method_set_normal = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3460891852
      );
    }
  }
  static init_method_set_tangent() {
    if (!this.#_bindings.method_set_tangent) {
      let classname = new StringName("SurfaceTool");
      let methodname = new StringName("set_tangent");
      this.#_bindings.method_set_tangent = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3505987427
      );
    }
  }
  static init_method_set_uv() {
    if (!this.#_bindings.method_set_uv) {
      let classname = new StringName("SurfaceTool");
      let methodname = new StringName("set_uv");
      this.#_bindings.method_set_uv = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        743155724
      );
    }
  }
  static init_method_set_uv2() {
    if (!this.#_bindings.method_set_uv2) {
      let classname = new StringName("SurfaceTool");
      let methodname = new StringName("set_uv2");
      this.#_bindings.method_set_uv2 = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        743155724
      );
    }
  }
  static init_method_set_bones() {
    if (!this.#_bindings.method_set_bones) {
      let classname = new StringName("SurfaceTool");
      let methodname = new StringName("set_bones");
      this.#_bindings.method_set_bones = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3614634198
      );
    }
  }
  static init_method_set_weights() {
    if (!this.#_bindings.method_set_weights) {
      let classname = new StringName("SurfaceTool");
      let methodname = new StringName("set_weights");
      this.#_bindings.method_set_weights = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2899603908
      );
    }
  }
  static init_method_set_custom() {
    if (!this.#_bindings.method_set_custom) {
      let classname = new StringName("SurfaceTool");
      let methodname = new StringName("set_custom");
      this.#_bindings.method_set_custom = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2878471219
      );
    }
  }
  static init_method_set_smooth_group() {
    if (!this.#_bindings.method_set_smooth_group) {
      let classname = new StringName("SurfaceTool");
      let methodname = new StringName("set_smooth_group");
      this.#_bindings.method_set_smooth_group = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_add_triangle_fan() {
    if (!this.#_bindings.method_add_triangle_fan) {
      let classname = new StringName("SurfaceTool");
      let methodname = new StringName("add_triangle_fan");
      this.#_bindings.method_add_triangle_fan = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2235017613
      );
    }
  }
  static init_method_add_index() {
    if (!this.#_bindings.method_add_index) {
      let classname = new StringName("SurfaceTool");
      let methodname = new StringName("add_index");
      this.#_bindings.method_add_index = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1286410249
      );
    }
  }
  static init_method_index() {
    if (!this.#_bindings.method_index) {
      let classname = new StringName("SurfaceTool");
      let methodname = new StringName("index");
      this.#_bindings.method_index = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_deindex() {
    if (!this.#_bindings.method_deindex) {
      let classname = new StringName("SurfaceTool");
      let methodname = new StringName("deindex");
      this.#_bindings.method_deindex = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_generate_normals() {
    if (!this.#_bindings.method_generate_normals) {
      let classname = new StringName("SurfaceTool");
      let methodname = new StringName("generate_normals");
      this.#_bindings.method_generate_normals = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        107499316
      );
    }
  }
  static init_method_generate_tangents() {
    if (!this.#_bindings.method_generate_tangents) {
      let classname = new StringName("SurfaceTool");
      let methodname = new StringName("generate_tangents");
      this.#_bindings.method_generate_tangents = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_optimize_indices_for_cache() {
    if (!this.#_bindings.method_optimize_indices_for_cache) {
      let classname = new StringName("SurfaceTool");
      let methodname = new StringName("optimize_indices_for_cache");
      this.#_bindings.method_optimize_indices_for_cache = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_get_aabb() {
    if (!this.#_bindings.method_get_aabb) {
      let classname = new StringName("SurfaceTool");
      let methodname = new StringName("get_aabb");
      this.#_bindings.method_get_aabb = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1068685055
      );
    }
  }
  static init_method_generate_lod() {
    if (!this.#_bindings.method_generate_lod) {
      let classname = new StringName("SurfaceTool");
      let methodname = new StringName("generate_lod");
      this.#_bindings.method_generate_lod = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1938056459
      );
    }
  }
  static init_method_set_material() {
    if (!this.#_bindings.method_set_material) {
      let classname = new StringName("SurfaceTool");
      let methodname = new StringName("set_material");
      this.#_bindings.method_set_material = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2757459619
      );
    }
  }
  static init_method_get_primitive_type() {
    if (!this.#_bindings.method_get_primitive_type) {
      let classname = new StringName("SurfaceTool");
      let methodname = new StringName("get_primitive_type");
      this.#_bindings.method_get_primitive_type = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        768822145
      );
    }
  }
  static init_method_clear() {
    if (!this.#_bindings.method_clear) {
      let classname = new StringName("SurfaceTool");
      let methodname = new StringName("clear");
      this.#_bindings.method_clear = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_create_from() {
    if (!this.#_bindings.method_create_from) {
      let classname = new StringName("SurfaceTool");
      let methodname = new StringName("create_from");
      this.#_bindings.method_create_from = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1767024570
      );
    }
  }
  static init_method_create_from_arrays() {
    if (!this.#_bindings.method_create_from_arrays) {
      let classname = new StringName("SurfaceTool");
      let methodname = new StringName("create_from_arrays");
      this.#_bindings.method_create_from_arrays = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1894639680
      );
    }
  }
  static init_method_create_from_blend_shape() {
    if (!this.#_bindings.method_create_from_blend_shape) {
      let classname = new StringName("SurfaceTool");
      let methodname = new StringName("create_from_blend_shape");
      this.#_bindings.method_create_from_blend_shape = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1306185582
      );
    }
  }
  static init_method_append_from() {
    if (!this.#_bindings.method_append_from) {
      let classname = new StringName("SurfaceTool");
      let methodname = new StringName("append_from");
      this.#_bindings.method_append_from = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2217967155
      );
    }
  }
  static init_method_commit() {
    if (!this.#_bindings.method_commit) {
      let classname = new StringName("SurfaceTool");
      let methodname = new StringName("commit");
      this.#_bindings.method_commit = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4107864055
      );
    }
  }
  static init_method_commit_to_arrays() {
    if (!this.#_bindings.method_commit_to_arrays) {
      let classname = new StringName("SurfaceTool");
      let methodname = new StringName("commit_to_arrays");
      this.#_bindings.method_commit_to_arrays = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2915620761
      );
    }
  }

  
  
  set_skin_weight_count(_count) {
    SurfaceTool.init_method_set_skin_weight_count();
    return _call_native_mb_no_ret(
      SurfaceTool.#_bindings.method_set_skin_weight_count,
      this._owner,
      _count
    );
    
  }
  get_skin_weight_count() {
    SurfaceTool.init_method_get_skin_weight_count();
    return _call_native_mb_ret(
      SurfaceTool.#_bindings.method_get_skin_weight_count,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_custom_format(_channel_index, _format) {
    SurfaceTool.init_method_set_custom_format();
    return _call_native_mb_no_ret(
      SurfaceTool.#_bindings.method_set_custom_format,
      this._owner,
      _channel_index, _format
    );
    
  }
  get_custom_format(_channel_index) {
    SurfaceTool.init_method_get_custom_format();
    return _call_native_mb_ret(
      SurfaceTool.#_bindings.method_get_custom_format,
      this._owner,
			Variant.Type.INT,
    
      _channel_index
    );
    
  }
  begin(_primitive) {
    SurfaceTool.init_method_begin();
    return _call_native_mb_no_ret(
      SurfaceTool.#_bindings.method_begin,
      this._owner,
      _primitive
    );
    
  }
  add_vertex(_vertex) {
    SurfaceTool.init_method_add_vertex();
    return _call_native_mb_no_ret(
      SurfaceTool.#_bindings.method_add_vertex,
      this._owner,
      _vertex
    );
    
  }
  set_color(_color) {
    SurfaceTool.init_method_set_color();
    return _call_native_mb_no_ret(
      SurfaceTool.#_bindings.method_set_color,
      this._owner,
      _color
    );
    
  }
  set_normal(_normal) {
    SurfaceTool.init_method_set_normal();
    return _call_native_mb_no_ret(
      SurfaceTool.#_bindings.method_set_normal,
      this._owner,
      _normal
    );
    
  }
  set_tangent(_tangent) {
    SurfaceTool.init_method_set_tangent();
    return _call_native_mb_no_ret(
      SurfaceTool.#_bindings.method_set_tangent,
      this._owner,
      _tangent
    );
    
  }
  set_uv(_uv) {
    SurfaceTool.init_method_set_uv();
    return _call_native_mb_no_ret(
      SurfaceTool.#_bindings.method_set_uv,
      this._owner,
      _uv
    );
    
  }
  set_uv2(_uv2) {
    SurfaceTool.init_method_set_uv2();
    return _call_native_mb_no_ret(
      SurfaceTool.#_bindings.method_set_uv2,
      this._owner,
      _uv2
    );
    
  }
  set_bones(_bones) {
    SurfaceTool.init_method_set_bones();
    return _call_native_mb_no_ret(
      SurfaceTool.#_bindings.method_set_bones,
      this._owner,
      _bones
    );
    
  }
  set_weights(_weights) {
    SurfaceTool.init_method_set_weights();
    return _call_native_mb_no_ret(
      SurfaceTool.#_bindings.method_set_weights,
      this._owner,
      _weights
    );
    
  }
  set_custom(_channel_index, _custom_color) {
    SurfaceTool.init_method_set_custom();
    return _call_native_mb_no_ret(
      SurfaceTool.#_bindings.method_set_custom,
      this._owner,
      _channel_index, _custom_color
    );
    
  }
  set_smooth_group(_index) {
    SurfaceTool.init_method_set_smooth_group();
    return _call_native_mb_no_ret(
      SurfaceTool.#_bindings.method_set_smooth_group,
      this._owner,
      _index
    );
    
  }
  add_triangle_fan(_vertices, _uvs, _colors, _uv2s, _normals, _tangents) {
    SurfaceTool.init_method_add_triangle_fan();
    return _call_native_mb_no_ret(
      SurfaceTool.#_bindings.method_add_triangle_fan,
      this._owner,
      _vertices, _uvs, _colors, _uv2s, _normals, _tangents
    );
    
  }
  add_index(_index) {
    SurfaceTool.init_method_add_index();
    return _call_native_mb_no_ret(
      SurfaceTool.#_bindings.method_add_index,
      this._owner,
      _index
    );
    
  }
  index() {
    SurfaceTool.init_method_index();
    return _call_native_mb_no_ret(
      SurfaceTool.#_bindings.method_index,
      this._owner,
      
    );
    
  }
  deindex() {
    SurfaceTool.init_method_deindex();
    return _call_native_mb_no_ret(
      SurfaceTool.#_bindings.method_deindex,
      this._owner,
      
    );
    
  }
  generate_normals(_flip) {
    SurfaceTool.init_method_generate_normals();
    return _call_native_mb_no_ret(
      SurfaceTool.#_bindings.method_generate_normals,
      this._owner,
      _flip
    );
    
  }
  generate_tangents() {
    SurfaceTool.init_method_generate_tangents();
    return _call_native_mb_no_ret(
      SurfaceTool.#_bindings.method_generate_tangents,
      this._owner,
      
    );
    
  }
  optimize_indices_for_cache() {
    SurfaceTool.init_method_optimize_indices_for_cache();
    return _call_native_mb_no_ret(
      SurfaceTool.#_bindings.method_optimize_indices_for_cache,
      this._owner,
      
    );
    
  }
  get_aabb() {
    SurfaceTool.init_method_get_aabb();
    return _call_native_mb_ret(
      SurfaceTool.#_bindings.method_get_aabb,
      this._owner,
			Variant.Type.AABB,
    
      
    );
    
  }
  generate_lod(_nd_threshold, _target_index_count) {
    SurfaceTool.init_method_generate_lod();
    return _call_native_mb_ret(
      SurfaceTool.#_bindings.method_generate_lod,
      this._owner,
			Variant.Type.PACKED_INT32_ARRAY,
    
      _nd_threshold, _target_index_count
    );
    
  }
  set_material(_material) {
    SurfaceTool.init_method_set_material();
    return _call_native_mb_no_ret(
      SurfaceTool.#_bindings.method_set_material,
      this._owner,
      _material
    );
    
  }
  get_primitive_type() {
    SurfaceTool.init_method_get_primitive_type();
    return _call_native_mb_ret(
      SurfaceTool.#_bindings.method_get_primitive_type,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  clear() {
    SurfaceTool.init_method_clear();
    return _call_native_mb_no_ret(
      SurfaceTool.#_bindings.method_clear,
      this._owner,
      
    );
    
  }
  create_from(_existing, _surface) {
    SurfaceTool.init_method_create_from();
    return _call_native_mb_no_ret(
      SurfaceTool.#_bindings.method_create_from,
      this._owner,
      _existing, _surface
    );
    
  }
  create_from_arrays(_arrays, _primitive_type) {
    SurfaceTool.init_method_create_from_arrays();
    return _call_native_mb_no_ret(
      SurfaceTool.#_bindings.method_create_from_arrays,
      this._owner,
      _arrays, _primitive_type
    );
    
  }
  create_from_blend_shape(_existing, _surface, _blend_shape) {
    SurfaceTool.init_method_create_from_blend_shape();
    return _call_native_mb_no_ret(
      SurfaceTool.#_bindings.method_create_from_blend_shape,
      this._owner,
      _existing, _surface, _blend_shape
    );
    
  }
  append_from(_existing, _surface, _transform) {
    SurfaceTool.init_method_append_from();
    return _call_native_mb_no_ret(
      SurfaceTool.#_bindings.method_append_from,
      this._owner,
      _existing, _surface, _transform
    );
    
  }
  commit(_existing, _flags) {
    SurfaceTool.init_method_commit();
    return _call_native_mb_ret(
      SurfaceTool.#_bindings.method_commit,
      this._owner,
			Variant.Type.OBJECT,
      _existing, _flags
    );
    
  }
  commit_to_arrays() {
    SurfaceTool.init_method_commit_to_arrays();
    return _call_native_mb_ret(
      SurfaceTool.#_bindings.method_commit_to_arrays,
      this._owner,
			Variant.Type.ARRAY,
    
      
    );
    
  }
  

  static CustomFormat = {
    CUSTOM_RGBA8_UNORM: 0,
    CUSTOM_RGBA8_SNORM: 1,
    CUSTOM_RG_HALF: 2,
    CUSTOM_RGBA_HALF: 3,
    CUSTOM_R_FLOAT: 4,
    CUSTOM_RG_FLOAT: 5,
    CUSTOM_RGB_FLOAT: 6,
    CUSTOM_RGBA_FLOAT: 7,
    CUSTOM_MAX: 8,
  }
  static SkinWeightCount = {
    SKIN_4_WEIGHTS: 0,
    SKIN_8_WEIGHTS: 1,
  }
}