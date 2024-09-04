import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { Vector3 } from '@js_godot/variant/vector3'
import { StringName } from '@js_godot/variant/string_name'
import { PackedInt32Array } from '@js_godot/variant/packed_int32_array'
import { Color } from '@js_godot/variant/color'
import { Vector2 } from '@js_godot/variant/vector2'
import { PackedFloat32Array } from '@js_godot/variant/packed_float32_array'
import { RefCounted } from '@js_godot/classes/ref_counted'
import { Plane } from '@js_godot/variant/plane'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_clear;
  method_create_from_surface;
  method_commit_to_surface;
  method_get_format;
  method_get_vertex_count;
  method_get_edge_count;
  method_get_face_count;
  method_set_vertex;
  method_get_vertex;
  method_set_vertex_normal;
  method_get_vertex_normal;
  method_set_vertex_tangent;
  method_get_vertex_tangent;
  method_set_vertex_uv;
  method_get_vertex_uv;
  method_set_vertex_uv2;
  method_get_vertex_uv2;
  method_set_vertex_color;
  method_get_vertex_color;
  method_set_vertex_bones;
  method_get_vertex_bones;
  method_set_vertex_weights;
  method_get_vertex_weights;
  method_set_vertex_meta;
  method_get_vertex_meta;
  method_get_vertex_edges;
  method_get_vertex_faces;
  method_get_edge_vertex;
  method_get_edge_faces;
  method_set_edge_meta;
  method_get_edge_meta;
  method_get_face_vertex;
  method_get_face_edge;
  method_set_face_meta;
  method_get_face_meta;
  method_get_face_normal;
  method_set_material;
  method_get_material;
}
export class MeshDataTool extends RefCounted{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("MeshDataTool");
    } else {
      super(godot_object);
    }
  }
  
  static async _init_bindings() {
    if (this.#initialized) {
      return;
    }
    this.#initialized = true;
    {
      let classname = new StringName("MeshDataTool");
      let methodname = new StringName("clear");
      this._bindings.method_clear = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("MeshDataTool");
      let methodname = new StringName("create_from_surface");
      this._bindings.method_create_from_surface = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2727020678
      );
    }
    {
      let classname = new StringName("MeshDataTool");
      let methodname = new StringName("commit_to_surface");
      this._bindings.method_commit_to_surface = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2021686445
      );
    }
    {
      let classname = new StringName("MeshDataTool");
      let methodname = new StringName("get_format");
      this._bindings.method_get_format = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("MeshDataTool");
      let methodname = new StringName("get_vertex_count");
      this._bindings.method_get_vertex_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("MeshDataTool");
      let methodname = new StringName("get_edge_count");
      this._bindings.method_get_edge_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("MeshDataTool");
      let methodname = new StringName("get_face_count");
      this._bindings.method_get_face_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("MeshDataTool");
      let methodname = new StringName("set_vertex");
      this._bindings.method_set_vertex = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1530502735
      );
    }
    {
      let classname = new StringName("MeshDataTool");
      let methodname = new StringName("get_vertex");
      this._bindings.method_get_vertex = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        711720468
      );
    }
    {
      let classname = new StringName("MeshDataTool");
      let methodname = new StringName("set_vertex_normal");
      this._bindings.method_set_vertex_normal = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1530502735
      );
    }
    {
      let classname = new StringName("MeshDataTool");
      let methodname = new StringName("get_vertex_normal");
      this._bindings.method_get_vertex_normal = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        711720468
      );
    }
    {
      let classname = new StringName("MeshDataTool");
      let methodname = new StringName("set_vertex_tangent");
      this._bindings.method_set_vertex_tangent = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1104099133
      );
    }
    {
      let classname = new StringName("MeshDataTool");
      let methodname = new StringName("get_vertex_tangent");
      this._bindings.method_get_vertex_tangent = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1372055458
      );
    }
    {
      let classname = new StringName("MeshDataTool");
      let methodname = new StringName("set_vertex_uv");
      this._bindings.method_set_vertex_uv = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        163021252
      );
    }
    {
      let classname = new StringName("MeshDataTool");
      let methodname = new StringName("get_vertex_uv");
      this._bindings.method_get_vertex_uv = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2299179447
      );
    }
    {
      let classname = new StringName("MeshDataTool");
      let methodname = new StringName("set_vertex_uv2");
      this._bindings.method_set_vertex_uv2 = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        163021252
      );
    }
    {
      let classname = new StringName("MeshDataTool");
      let methodname = new StringName("get_vertex_uv2");
      this._bindings.method_get_vertex_uv2 = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2299179447
      );
    }
    {
      let classname = new StringName("MeshDataTool");
      let methodname = new StringName("set_vertex_color");
      this._bindings.method_set_vertex_color = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2878471219
      );
    }
    {
      let classname = new StringName("MeshDataTool");
      let methodname = new StringName("get_vertex_color");
      this._bindings.method_get_vertex_color = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3457211756
      );
    }
    {
      let classname = new StringName("MeshDataTool");
      let methodname = new StringName("set_vertex_bones");
      this._bindings.method_set_vertex_bones = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3500328261
      );
    }
    {
      let classname = new StringName("MeshDataTool");
      let methodname = new StringName("get_vertex_bones");
      this._bindings.method_get_vertex_bones = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1706082319
      );
    }
    {
      let classname = new StringName("MeshDataTool");
      let methodname = new StringName("set_vertex_weights");
      this._bindings.method_set_vertex_weights = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1345852415
      );
    }
    {
      let classname = new StringName("MeshDataTool");
      let methodname = new StringName("get_vertex_weights");
      this._bindings.method_get_vertex_weights = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1542882410
      );
    }
    {
      let classname = new StringName("MeshDataTool");
      let methodname = new StringName("set_vertex_meta");
      this._bindings.method_set_vertex_meta = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2152698145
      );
    }
    {
      let classname = new StringName("MeshDataTool");
      let methodname = new StringName("get_vertex_meta");
      this._bindings.method_get_vertex_meta = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4227898402
      );
    }
    {
      let classname = new StringName("MeshDataTool");
      let methodname = new StringName("get_vertex_edges");
      this._bindings.method_get_vertex_edges = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1706082319
      );
    }
    {
      let classname = new StringName("MeshDataTool");
      let methodname = new StringName("get_vertex_faces");
      this._bindings.method_get_vertex_faces = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1706082319
      );
    }
    {
      let classname = new StringName("MeshDataTool");
      let methodname = new StringName("get_edge_vertex");
      this._bindings.method_get_edge_vertex = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3175239445
      );
    }
    {
      let classname = new StringName("MeshDataTool");
      let methodname = new StringName("get_edge_faces");
      this._bindings.method_get_edge_faces = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1706082319
      );
    }
    {
      let classname = new StringName("MeshDataTool");
      let methodname = new StringName("set_edge_meta");
      this._bindings.method_set_edge_meta = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2152698145
      );
    }
    {
      let classname = new StringName("MeshDataTool");
      let methodname = new StringName("get_edge_meta");
      this._bindings.method_get_edge_meta = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4227898402
      );
    }
    {
      let classname = new StringName("MeshDataTool");
      let methodname = new StringName("get_face_vertex");
      this._bindings.method_get_face_vertex = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3175239445
      );
    }
    {
      let classname = new StringName("MeshDataTool");
      let methodname = new StringName("get_face_edge");
      this._bindings.method_get_face_edge = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3175239445
      );
    }
    {
      let classname = new StringName("MeshDataTool");
      let methodname = new StringName("set_face_meta");
      this._bindings.method_set_face_meta = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2152698145
      );
    }
    {
      let classname = new StringName("MeshDataTool");
      let methodname = new StringName("get_face_meta");
      this._bindings.method_get_face_meta = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        4227898402
      );
    }
    {
      let classname = new StringName("MeshDataTool");
      let methodname = new StringName("get_face_normal");
      this._bindings.method_get_face_normal = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        711720468
      );
    }
    {
      let classname = new StringName("MeshDataTool");
      let methodname = new StringName("set_material");
      this._bindings.method_set_material = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2757459619
      );
    }
    {
      let classname = new StringName("MeshDataTool");
      let methodname = new StringName("get_material");
      this._bindings.method_get_material = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        5934680
      );
    }
  }
  clear() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_clear,
      this._owner,
      
    );
    
  }
  create_from_surface(_mesh, _surface) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_create_from_surface,
      this._owner,
			Variant.INT,
      _mesh, _surface
    );
    
  }
  commit_to_surface(_mesh, _compression_flags) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_commit_to_surface,
      this._owner,
			Variant.INT,
      _mesh, _compression_flags
    );
    
  }
  get_format() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_format,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  get_vertex_count() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_vertex_count,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  get_edge_count() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_edge_count,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  get_face_count() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_face_count,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  set_vertex(_idx, _vertex) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_vertex,
      this._owner,
      _idx, _vertex
    );
    
  }
  get_vertex(_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_vertex,
      this._owner,
			Variant.Type.VECTOR3,
    
      _idx
    );
    
  }
  set_vertex_normal(_idx, _normal) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_vertex_normal,
      this._owner,
      _idx, _normal
    );
    
  }
  get_vertex_normal(_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_vertex_normal,
      this._owner,
			Variant.Type.VECTOR3,
    
      _idx
    );
    
  }
  set_vertex_tangent(_idx, _tangent) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_vertex_tangent,
      this._owner,
      _idx, _tangent
    );
    
  }
  get_vertex_tangent(_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_vertex_tangent,
      this._owner,
			Variant.Type.PLANE,
    
      _idx
    );
    
  }
  set_vertex_uv(_idx, _uv) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_vertex_uv,
      this._owner,
      _idx, _uv
    );
    
  }
  get_vertex_uv(_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_vertex_uv,
      this._owner,
			Variant.Type.VECTOR2,
    
      _idx
    );
    
  }
  set_vertex_uv2(_idx, _uv2) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_vertex_uv2,
      this._owner,
      _idx, _uv2
    );
    
  }
  get_vertex_uv2(_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_vertex_uv2,
      this._owner,
			Variant.Type.VECTOR2,
    
      _idx
    );
    
  }
  set_vertex_color(_idx, _color) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_vertex_color,
      this._owner,
      _idx, _color
    );
    
  }
  get_vertex_color(_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_vertex_color,
      this._owner,
			Variant.Type.COLOR,
    
      _idx
    );
    
  }
  set_vertex_bones(_idx, _bones) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_vertex_bones,
      this._owner,
      _idx, _bones
    );
    
  }
  get_vertex_bones(_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_vertex_bones,
      this._owner,
			Variant.Type.PACKED_INT32_ARRAY,
    
      _idx
    );
    
  }
  set_vertex_weights(_idx, _weights) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_vertex_weights,
      this._owner,
      _idx, _weights
    );
    
  }
  get_vertex_weights(_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_vertex_weights,
      this._owner,
			Variant.Type.PACKED_FLOAT32_ARRAY,
    
      _idx
    );
    
  }
  set_vertex_meta(_idx, _meta) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_vertex_meta,
      this._owner,
      _idx, _meta
    );
    
  }
  get_vertex_meta(_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_vertex_meta,
      this._owner,
			Variant.Type.VARIANT,
    
      _idx
    );
    
  }
  get_vertex_edges(_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_vertex_edges,
      this._owner,
			Variant.Type.PACKED_INT32_ARRAY,
    
      _idx
    );
    
  }
  get_vertex_faces(_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_vertex_faces,
      this._owner,
			Variant.Type.PACKED_INT32_ARRAY,
    
      _idx
    );
    
  }
  get_edge_vertex(_idx, _vertex) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_edge_vertex,
      this._owner,
			Variant.Type.INT,
      _idx, _vertex
    );
    
  }
  get_edge_faces(_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_edge_faces,
      this._owner,
			Variant.Type.PACKED_INT32_ARRAY,
    
      _idx
    );
    
  }
  set_edge_meta(_idx, _meta) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_edge_meta,
      this._owner,
      _idx, _meta
    );
    
  }
  get_edge_meta(_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_edge_meta,
      this._owner,
			Variant.Type.VARIANT,
    
      _idx
    );
    
  }
  get_face_vertex(_idx, _vertex) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_face_vertex,
      this._owner,
			Variant.Type.INT,
      _idx, _vertex
    );
    
  }
  get_face_edge(_idx, _edge) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_face_edge,
      this._owner,
			Variant.Type.INT,
      _idx, _edge
    );
    
  }
  set_face_meta(_idx, _meta) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_face_meta,
      this._owner,
      _idx, _meta
    );
    
  }
  get_face_meta(_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_face_meta,
      this._owner,
			Variant.Type.VARIANT,
    
      _idx
    );
    
  }
  get_face_normal(_idx) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_face_normal,
      this._owner,
			Variant.Type.VECTOR3,
    
      _idx
    );
    
  }
  set_material(_material) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_material,
      this._owner,
      _material
    );
    
  }
  get_material() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_material,
      this._owner,
			Variant.INT,
      
    );
    
  }
  


  static {
    this._init_bindings();
  }
}