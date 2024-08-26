import * as internal from '__internal__';
import { Color } from 'src/js_godot/variant/color'
import { Vector2 } from 'src/js_godot/variant/vector2'
import { PackedInt32Array } from 'src/js_godot/variant/packed_int32_array'
import { PackedVector3Array } from 'src/js_godot/variant/packed_vector3_array'
import { GDString } from 'src/js_godot/variant/gd_string'
import { GDArray } from 'src/js_godot/variant/gd_array'
import { Vector3 } from 'src/js_godot/variant/vector3'
import { PackedVector2Array } from 'src/js_godot/variant/packed_vector2_array'
import { Transform3D } from 'src/js_godot/variant/transform3d'
import { AABB } from 'src/js_godot/variant/aabb'
import { PackedColorArray } from 'src/js_godot/variant/packed_color_array'
import { Plane } from 'src/js_godot/variant/plane'
import { RefCounted } from 'src/js_godot/classesref_counted'
import { PackedFloat32Array } from 'src/js_godot/variant/packed_float32_array'
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

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("SurfaceTool");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("SurfaceTool");
      let methodname = new StringName("set_skin_weight_count");
      this._bindings.method_set_skin_weight_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        618679515
      );
    }
    {
      let classname = new StringName("SurfaceTool");
      let methodname = new StringName("get_skin_weight_count");
      this._bindings.method_get_skin_weight_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1072401130
      );
    }
    {
      let classname = new StringName("SurfaceTool");
      let methodname = new StringName("set_custom_format");
      this._bindings.method_set_custom_format = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4087759856
      );
    }
    {
      let classname = new StringName("SurfaceTool");
      let methodname = new StringName("get_custom_format");
      this._bindings.method_get_custom_format = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        839863283
      );
    }
    {
      let classname = new StringName("SurfaceTool");
      let methodname = new StringName("begin");
      this._bindings.method_begin = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2230304113
      );
    }
    {
      let classname = new StringName("SurfaceTool");
      let methodname = new StringName("add_vertex");
      this._bindings.method_add_vertex = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3460891852
      );
    }
    {
      let classname = new StringName("SurfaceTool");
      let methodname = new StringName("set_color");
      this._bindings.method_set_color = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2920490490
      );
    }
    {
      let classname = new StringName("SurfaceTool");
      let methodname = new StringName("set_normal");
      this._bindings.method_set_normal = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3460891852
      );
    }
    {
      let classname = new StringName("SurfaceTool");
      let methodname = new StringName("set_tangent");
      this._bindings.method_set_tangent = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3505987427
      );
    }
    {
      let classname = new StringName("SurfaceTool");
      let methodname = new StringName("set_uv");
      this._bindings.method_set_uv = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        743155724
      );
    }
    {
      let classname = new StringName("SurfaceTool");
      let methodname = new StringName("set_uv2");
      this._bindings.method_set_uv2 = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        743155724
      );
    }
    {
      let classname = new StringName("SurfaceTool");
      let methodname = new StringName("set_bones");
      this._bindings.method_set_bones = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3614634198
      );
    }
    {
      let classname = new StringName("SurfaceTool");
      let methodname = new StringName("set_weights");
      this._bindings.method_set_weights = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2899603908
      );
    }
    {
      let classname = new StringName("SurfaceTool");
      let methodname = new StringName("set_custom");
      this._bindings.method_set_custom = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2878471219
      );
    }
    {
      let classname = new StringName("SurfaceTool");
      let methodname = new StringName("set_smooth_group");
      this._bindings.method_set_smooth_group = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("SurfaceTool");
      let methodname = new StringName("add_triangle_fan");
      this._bindings.method_add_triangle_fan = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2235017613
      );
    }
    {
      let classname = new StringName("SurfaceTool");
      let methodname = new StringName("add_index");
      this._bindings.method_add_index = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("SurfaceTool");
      let methodname = new StringName("index");
      this._bindings.method_index = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("SurfaceTool");
      let methodname = new StringName("deindex");
      this._bindings.method_deindex = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("SurfaceTool");
      let methodname = new StringName("generate_normals");
      this._bindings.method_generate_normals = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        107499316
      );
    }
    {
      let classname = new StringName("SurfaceTool");
      let methodname = new StringName("generate_tangents");
      this._bindings.method_generate_tangents = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("SurfaceTool");
      let methodname = new StringName("optimize_indices_for_cache");
      this._bindings.method_optimize_indices_for_cache = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("SurfaceTool");
      let methodname = new StringName("get_aabb");
      this._bindings.method_get_aabb = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1068685055
      );
    }
    {
      let classname = new StringName("SurfaceTool");
      let methodname = new StringName("generate_lod");
      this._bindings.method_generate_lod = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1938056459
      );
    }
    {
      let classname = new StringName("SurfaceTool");
      let methodname = new StringName("set_material");
      this._bindings.method_set_material = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2757459619
      );
    }
    {
      let classname = new StringName("SurfaceTool");
      let methodname = new StringName("get_primitive_type");
      this._bindings.method_get_primitive_type = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        768822145
      );
    }
    {
      let classname = new StringName("SurfaceTool");
      let methodname = new StringName("clear");
      this._bindings.method_clear = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("SurfaceTool");
      let methodname = new StringName("create_from");
      this._bindings.method_create_from = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1767024570
      );
    }
    {
      let classname = new StringName("SurfaceTool");
      let methodname = new StringName("create_from_arrays");
      this._bindings.method_create_from_arrays = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1894639680
      );
    }
    {
      let classname = new StringName("SurfaceTool");
      let methodname = new StringName("create_from_blend_shape");
      this._bindings.method_create_from_blend_shape = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1306185582
      );
    }
    {
      let classname = new StringName("SurfaceTool");
      let methodname = new StringName("append_from");
      this._bindings.method_append_from = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2217967155
      );
    }
    {
      let classname = new StringName("SurfaceTool");
      let methodname = new StringName("commit");
      this._bindings.method_commit = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4107864055
      );
    }
    {
      let classname = new StringName("SurfaceTool");
      let methodname = new StringName("commit_to_arrays");
      this._bindings.method_commit_to_arrays = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2915620761
      );
    }
  }
  set_skin_weight_count(_count) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_skin_weight_count,
      this._owner,
      _count
    );
  }
  get_skin_weight_count() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_skin_weight_count,
      this._owner,
			Variant.INT,
      
    );
  }
  set_custom_format(_channel_index, _format) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_custom_format,
      this._owner,
      _channel_index, _format
    );
  }
  get_custom_format(_channel_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_custom_format,
      this._owner,
			Variant.INT,
      _channel_index
    );
  }
  begin(_primitive) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_begin,
      this._owner,
      _primitive
    );
  }
  add_vertex(_vertex) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_vertex,
      this._owner,
      _vertex
    );
  }
  set_color(_color) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_color,
      this._owner,
      _color
    );
  }
  set_normal(_normal) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_normal,
      this._owner,
      _normal
    );
  }
  set_tangent(_tangent) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_tangent,
      this._owner,
      _tangent
    );
  }
  set_uv(_uv) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_uv,
      this._owner,
      _uv
    );
  }
  set_uv2(_uv2) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_uv2,
      this._owner,
      _uv2
    );
  }
  set_bones(_bones) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_bones,
      this._owner,
      _bones
    );
  }
  set_weights(_weights) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_weights,
      this._owner,
      _weights
    );
  }
  set_custom(_channel_index, _custom_color) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_custom,
      this._owner,
      _channel_index, _custom_color
    );
  }
  set_smooth_group(_index) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_smooth_group,
      this._owner,
      _index
    );
  }
  add_triangle_fan(_vertices, _uvs, _colors, _uv2s, _normals, _tangents) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_triangle_fan,
      this._owner,
      _vertices, _uvs, _colors, _uv2s, _normals, _tangents
    );
  }
  add_index(_index) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_index,
      this._owner,
      _index
    );
  }
  index() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_index,
      this._owner,
      
    );
  }
  deindex() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_deindex,
      this._owner,
      
    );
  }
  generate_normals(_flip) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_generate_normals,
      this._owner,
      _flip
    );
  }
  generate_tangents() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_generate_tangents,
      this._owner,
      
    );
  }
  optimize_indices_for_cache() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_optimize_indices_for_cache,
      this._owner,
      
    );
  }
  get_aabb() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_aabb,
      this._owner,
			Variant.Type.AABB
    ,
      
    );
  }
  generate_lod(_nd_threshold, _target_index_count) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_generate_lod,
      this._owner,
			Variant.Type.PACKED_INT32_ARRAY
    ,
      _nd_threshold, _target_index_count
    );
  }
  set_material(_material) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_material,
      this._owner,
      _material
    );
  }
  get_primitive_type() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_primitive_type,
      this._owner,
			Variant.INT,
      
    );
  }
  clear() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_clear,
      this._owner,
      
    );
  }
  create_from(_existing, _surface) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_create_from,
      this._owner,
      _existing, _surface
    );
  }
  create_from_arrays(_arrays, _primitive_type) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_create_from_arrays,
      this._owner,
      _arrays, _primitive_type
    );
  }
  create_from_blend_shape(_existing, _surface, _blend_shape) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_create_from_blend_shape,
      this._owner,
      _existing, _surface, _blend_shape
    );
  }
  append_from(_existing, _surface, _transform) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_append_from,
      this._owner,
      _existing, _surface, _transform
    );
  }
  commit(_existing, _flags) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_commit,
      this._owner,
			Variant.INT,
      _existing, _flags
    );
  }
  commit_to_arrays() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_commit_to_arrays,
      this._owner,
			Variant.Type.ARRAY
    ,
      
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