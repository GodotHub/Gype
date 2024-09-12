import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { RefCounted } from '@js_godot/classes/ref_counted'
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

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("MeshDataTool");
    } else {
      super(godot_object);
    }
  }
  static init_method_clear() {
    if (!this.#_bindings.method_clear) {
      let classname = new StringName("MeshDataTool");
      let methodname = new StringName("clear");
      this.#_bindings.method_clear = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_create_from_surface() {
    if (!this.#_bindings.method_create_from_surface) {
      let classname = new StringName("MeshDataTool");
      let methodname = new StringName("create_from_surface");
      this.#_bindings.method_create_from_surface = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2727020678
      );
    }
  }
  static init_method_commit_to_surface() {
    if (!this.#_bindings.method_commit_to_surface) {
      let classname = new StringName("MeshDataTool");
      let methodname = new StringName("commit_to_surface");
      this.#_bindings.method_commit_to_surface = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2021686445
      );
    }
  }
  static init_method_get_format() {
    if (!this.#_bindings.method_get_format) {
      let classname = new StringName("MeshDataTool");
      let methodname = new StringName("get_format");
      this.#_bindings.method_get_format = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_get_vertex_count() {
    if (!this.#_bindings.method_get_vertex_count) {
      let classname = new StringName("MeshDataTool");
      let methodname = new StringName("get_vertex_count");
      this.#_bindings.method_get_vertex_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_get_edge_count() {
    if (!this.#_bindings.method_get_edge_count) {
      let classname = new StringName("MeshDataTool");
      let methodname = new StringName("get_edge_count");
      this.#_bindings.method_get_edge_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_get_face_count() {
    if (!this.#_bindings.method_get_face_count) {
      let classname = new StringName("MeshDataTool");
      let methodname = new StringName("get_face_count");
      this.#_bindings.method_get_face_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_set_vertex() {
    if (!this.#_bindings.method_set_vertex) {
      let classname = new StringName("MeshDataTool");
      let methodname = new StringName("set_vertex");
      this.#_bindings.method_set_vertex = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1530502735
      );
    }
  }
  static init_method_get_vertex() {
    if (!this.#_bindings.method_get_vertex) {
      let classname = new StringName("MeshDataTool");
      let methodname = new StringName("get_vertex");
      this.#_bindings.method_get_vertex = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        711720468
      );
    }
  }
  static init_method_set_vertex_normal() {
    if (!this.#_bindings.method_set_vertex_normal) {
      let classname = new StringName("MeshDataTool");
      let methodname = new StringName("set_vertex_normal");
      this.#_bindings.method_set_vertex_normal = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1530502735
      );
    }
  }
  static init_method_get_vertex_normal() {
    if (!this.#_bindings.method_get_vertex_normal) {
      let classname = new StringName("MeshDataTool");
      let methodname = new StringName("get_vertex_normal");
      this.#_bindings.method_get_vertex_normal = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        711720468
      );
    }
  }
  static init_method_set_vertex_tangent() {
    if (!this.#_bindings.method_set_vertex_tangent) {
      let classname = new StringName("MeshDataTool");
      let methodname = new StringName("set_vertex_tangent");
      this.#_bindings.method_set_vertex_tangent = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1104099133
      );
    }
  }
  static init_method_get_vertex_tangent() {
    if (!this.#_bindings.method_get_vertex_tangent) {
      let classname = new StringName("MeshDataTool");
      let methodname = new StringName("get_vertex_tangent");
      this.#_bindings.method_get_vertex_tangent = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1372055458
      );
    }
  }
  static init_method_set_vertex_uv() {
    if (!this.#_bindings.method_set_vertex_uv) {
      let classname = new StringName("MeshDataTool");
      let methodname = new StringName("set_vertex_uv");
      this.#_bindings.method_set_vertex_uv = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        163021252
      );
    }
  }
  static init_method_get_vertex_uv() {
    if (!this.#_bindings.method_get_vertex_uv) {
      let classname = new StringName("MeshDataTool");
      let methodname = new StringName("get_vertex_uv");
      this.#_bindings.method_get_vertex_uv = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2299179447
      );
    }
  }
  static init_method_set_vertex_uv2() {
    if (!this.#_bindings.method_set_vertex_uv2) {
      let classname = new StringName("MeshDataTool");
      let methodname = new StringName("set_vertex_uv2");
      this.#_bindings.method_set_vertex_uv2 = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        163021252
      );
    }
  }
  static init_method_get_vertex_uv2() {
    if (!this.#_bindings.method_get_vertex_uv2) {
      let classname = new StringName("MeshDataTool");
      let methodname = new StringName("get_vertex_uv2");
      this.#_bindings.method_get_vertex_uv2 = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2299179447
      );
    }
  }
  static init_method_set_vertex_color() {
    if (!this.#_bindings.method_set_vertex_color) {
      let classname = new StringName("MeshDataTool");
      let methodname = new StringName("set_vertex_color");
      this.#_bindings.method_set_vertex_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2878471219
      );
    }
  }
  static init_method_get_vertex_color() {
    if (!this.#_bindings.method_get_vertex_color) {
      let classname = new StringName("MeshDataTool");
      let methodname = new StringName("get_vertex_color");
      this.#_bindings.method_get_vertex_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3457211756
      );
    }
  }
  static init_method_set_vertex_bones() {
    if (!this.#_bindings.method_set_vertex_bones) {
      let classname = new StringName("MeshDataTool");
      let methodname = new StringName("set_vertex_bones");
      this.#_bindings.method_set_vertex_bones = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3500328261
      );
    }
  }
  static init_method_get_vertex_bones() {
    if (!this.#_bindings.method_get_vertex_bones) {
      let classname = new StringName("MeshDataTool");
      let methodname = new StringName("get_vertex_bones");
      this.#_bindings.method_get_vertex_bones = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1706082319
      );
    }
  }
  static init_method_set_vertex_weights() {
    if (!this.#_bindings.method_set_vertex_weights) {
      let classname = new StringName("MeshDataTool");
      let methodname = new StringName("set_vertex_weights");
      this.#_bindings.method_set_vertex_weights = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1345852415
      );
    }
  }
  static init_method_get_vertex_weights() {
    if (!this.#_bindings.method_get_vertex_weights) {
      let classname = new StringName("MeshDataTool");
      let methodname = new StringName("get_vertex_weights");
      this.#_bindings.method_get_vertex_weights = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1542882410
      );
    }
  }
  static init_method_set_vertex_meta() {
    if (!this.#_bindings.method_set_vertex_meta) {
      let classname = new StringName("MeshDataTool");
      let methodname = new StringName("set_vertex_meta");
      this.#_bindings.method_set_vertex_meta = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2152698145
      );
    }
  }
  static init_method_get_vertex_meta() {
    if (!this.#_bindings.method_get_vertex_meta) {
      let classname = new StringName("MeshDataTool");
      let methodname = new StringName("get_vertex_meta");
      this.#_bindings.method_get_vertex_meta = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4227898402
      );
    }
  }
  static init_method_get_vertex_edges() {
    if (!this.#_bindings.method_get_vertex_edges) {
      let classname = new StringName("MeshDataTool");
      let methodname = new StringName("get_vertex_edges");
      this.#_bindings.method_get_vertex_edges = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1706082319
      );
    }
  }
  static init_method_get_vertex_faces() {
    if (!this.#_bindings.method_get_vertex_faces) {
      let classname = new StringName("MeshDataTool");
      let methodname = new StringName("get_vertex_faces");
      this.#_bindings.method_get_vertex_faces = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1706082319
      );
    }
  }
  static init_method_get_edge_vertex() {
    if (!this.#_bindings.method_get_edge_vertex) {
      let classname = new StringName("MeshDataTool");
      let methodname = new StringName("get_edge_vertex");
      this.#_bindings.method_get_edge_vertex = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3175239445
      );
    }
  }
  static init_method_get_edge_faces() {
    if (!this.#_bindings.method_get_edge_faces) {
      let classname = new StringName("MeshDataTool");
      let methodname = new StringName("get_edge_faces");
      this.#_bindings.method_get_edge_faces = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1706082319
      );
    }
  }
  static init_method_set_edge_meta() {
    if (!this.#_bindings.method_set_edge_meta) {
      let classname = new StringName("MeshDataTool");
      let methodname = new StringName("set_edge_meta");
      this.#_bindings.method_set_edge_meta = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2152698145
      );
    }
  }
  static init_method_get_edge_meta() {
    if (!this.#_bindings.method_get_edge_meta) {
      let classname = new StringName("MeshDataTool");
      let methodname = new StringName("get_edge_meta");
      this.#_bindings.method_get_edge_meta = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4227898402
      );
    }
  }
  static init_method_get_face_vertex() {
    if (!this.#_bindings.method_get_face_vertex) {
      let classname = new StringName("MeshDataTool");
      let methodname = new StringName("get_face_vertex");
      this.#_bindings.method_get_face_vertex = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3175239445
      );
    }
  }
  static init_method_get_face_edge() {
    if (!this.#_bindings.method_get_face_edge) {
      let classname = new StringName("MeshDataTool");
      let methodname = new StringName("get_face_edge");
      this.#_bindings.method_get_face_edge = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3175239445
      );
    }
  }
  static init_method_set_face_meta() {
    if (!this.#_bindings.method_set_face_meta) {
      let classname = new StringName("MeshDataTool");
      let methodname = new StringName("set_face_meta");
      this.#_bindings.method_set_face_meta = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2152698145
      );
    }
  }
  static init_method_get_face_meta() {
    if (!this.#_bindings.method_get_face_meta) {
      let classname = new StringName("MeshDataTool");
      let methodname = new StringName("get_face_meta");
      this.#_bindings.method_get_face_meta = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4227898402
      );
    }
  }
  static init_method_get_face_normal() {
    if (!this.#_bindings.method_get_face_normal) {
      let classname = new StringName("MeshDataTool");
      let methodname = new StringName("get_face_normal");
      this.#_bindings.method_get_face_normal = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        711720468
      );
    }
  }
  static init_method_set_material() {
    if (!this.#_bindings.method_set_material) {
      let classname = new StringName("MeshDataTool");
      let methodname = new StringName("set_material");
      this.#_bindings.method_set_material = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2757459619
      );
    }
  }
  static init_method_get_material() {
    if (!this.#_bindings.method_get_material) {
      let classname = new StringName("MeshDataTool");
      let methodname = new StringName("get_material");
      this.#_bindings.method_get_material = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        5934680
      );
    }
  }

  
  
  clear() {
    MeshDataTool.init_method_clear();
    return _call_native_mb_no_ret(
      MeshDataTool.#_bindings.method_clear,
      this._owner,
      
    );
    
  }
  create_from_surface(_mesh, _surface) {
    MeshDataTool.init_method_create_from_surface();
    return _call_native_mb_ret(
      MeshDataTool.#_bindings.method_create_from_surface,
      this._owner,
			Variant.Type.INT,
    
      _mesh, _surface
    );
    
  }
  commit_to_surface(_mesh, _compression_flags) {
    MeshDataTool.init_method_commit_to_surface();
    return _call_native_mb_ret(
      MeshDataTool.#_bindings.method_commit_to_surface,
      this._owner,
			Variant.Type.INT,
    
      _mesh, _compression_flags
    );
    
  }
  get_format() {
    MeshDataTool.init_method_get_format();
    return _call_native_mb_ret(
      MeshDataTool.#_bindings.method_get_format,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_vertex_count() {
    MeshDataTool.init_method_get_vertex_count();
    return _call_native_mb_ret(
      MeshDataTool.#_bindings.method_get_vertex_count,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_edge_count() {
    MeshDataTool.init_method_get_edge_count();
    return _call_native_mb_ret(
      MeshDataTool.#_bindings.method_get_edge_count,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_face_count() {
    MeshDataTool.init_method_get_face_count();
    return _call_native_mb_ret(
      MeshDataTool.#_bindings.method_get_face_count,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_vertex(_idx, _vertex) {
    MeshDataTool.init_method_set_vertex();
    return _call_native_mb_no_ret(
      MeshDataTool.#_bindings.method_set_vertex,
      this._owner,
      _idx, _vertex
    );
    
  }
  get_vertex(_idx) {
    MeshDataTool.init_method_get_vertex();
    return _call_native_mb_ret(
      MeshDataTool.#_bindings.method_get_vertex,
      this._owner,
			Variant.Type.VECTOR3,
    
      _idx
    );
    
  }
  set_vertex_normal(_idx, _normal) {
    MeshDataTool.init_method_set_vertex_normal();
    return _call_native_mb_no_ret(
      MeshDataTool.#_bindings.method_set_vertex_normal,
      this._owner,
      _idx, _normal
    );
    
  }
  get_vertex_normal(_idx) {
    MeshDataTool.init_method_get_vertex_normal();
    return _call_native_mb_ret(
      MeshDataTool.#_bindings.method_get_vertex_normal,
      this._owner,
			Variant.Type.VECTOR3,
    
      _idx
    );
    
  }
  set_vertex_tangent(_idx, _tangent) {
    MeshDataTool.init_method_set_vertex_tangent();
    return _call_native_mb_no_ret(
      MeshDataTool.#_bindings.method_set_vertex_tangent,
      this._owner,
      _idx, _tangent
    );
    
  }
  get_vertex_tangent(_idx) {
    MeshDataTool.init_method_get_vertex_tangent();
    return _call_native_mb_ret(
      MeshDataTool.#_bindings.method_get_vertex_tangent,
      this._owner,
			Variant.Type.PLANE,
    
      _idx
    );
    
  }
  set_vertex_uv(_idx, _uv) {
    MeshDataTool.init_method_set_vertex_uv();
    return _call_native_mb_no_ret(
      MeshDataTool.#_bindings.method_set_vertex_uv,
      this._owner,
      _idx, _uv
    );
    
  }
  get_vertex_uv(_idx) {
    MeshDataTool.init_method_get_vertex_uv();
    return _call_native_mb_ret(
      MeshDataTool.#_bindings.method_get_vertex_uv,
      this._owner,
			Variant.Type.VECTOR2,
    
      _idx
    );
    
  }
  set_vertex_uv2(_idx, _uv2) {
    MeshDataTool.init_method_set_vertex_uv2();
    return _call_native_mb_no_ret(
      MeshDataTool.#_bindings.method_set_vertex_uv2,
      this._owner,
      _idx, _uv2
    );
    
  }
  get_vertex_uv2(_idx) {
    MeshDataTool.init_method_get_vertex_uv2();
    return _call_native_mb_ret(
      MeshDataTool.#_bindings.method_get_vertex_uv2,
      this._owner,
			Variant.Type.VECTOR2,
    
      _idx
    );
    
  }
  set_vertex_color(_idx, _color) {
    MeshDataTool.init_method_set_vertex_color();
    return _call_native_mb_no_ret(
      MeshDataTool.#_bindings.method_set_vertex_color,
      this._owner,
      _idx, _color
    );
    
  }
  get_vertex_color(_idx) {
    MeshDataTool.init_method_get_vertex_color();
    return _call_native_mb_ret(
      MeshDataTool.#_bindings.method_get_vertex_color,
      this._owner,
			Variant.Type.COLOR,
    
      _idx
    );
    
  }
  set_vertex_bones(_idx, _bones) {
    MeshDataTool.init_method_set_vertex_bones();
    return _call_native_mb_no_ret(
      MeshDataTool.#_bindings.method_set_vertex_bones,
      this._owner,
      _idx, _bones
    );
    
  }
  get_vertex_bones(_idx) {
    MeshDataTool.init_method_get_vertex_bones();
    return _call_native_mb_ret(
      MeshDataTool.#_bindings.method_get_vertex_bones,
      this._owner,
			Variant.Type.PACKED_INT32_ARRAY,
    
      _idx
    );
    
  }
  set_vertex_weights(_idx, _weights) {
    MeshDataTool.init_method_set_vertex_weights();
    return _call_native_mb_no_ret(
      MeshDataTool.#_bindings.method_set_vertex_weights,
      this._owner,
      _idx, _weights
    );
    
  }
  get_vertex_weights(_idx) {
    MeshDataTool.init_method_get_vertex_weights();
    return _call_native_mb_ret(
      MeshDataTool.#_bindings.method_get_vertex_weights,
      this._owner,
			Variant.Type.PACKED_FLOAT32_ARRAY,
    
      _idx
    );
    
  }
  set_vertex_meta(_idx, _meta) {
    MeshDataTool.init_method_set_vertex_meta();
    return _call_native_mb_no_ret(
      MeshDataTool.#_bindings.method_set_vertex_meta,
      this._owner,
      _idx, _meta
    );
    
  }
  get_vertex_meta(_idx) {
    MeshDataTool.init_method_get_vertex_meta();
    return _call_native_mb_ret(
      MeshDataTool.#_bindings.method_get_vertex_meta,
      this._owner,
			Variant.Type.VARIANT,
    
      _idx
    );
    
  }
  get_vertex_edges(_idx) {
    MeshDataTool.init_method_get_vertex_edges();
    return _call_native_mb_ret(
      MeshDataTool.#_bindings.method_get_vertex_edges,
      this._owner,
			Variant.Type.PACKED_INT32_ARRAY,
    
      _idx
    );
    
  }
  get_vertex_faces(_idx) {
    MeshDataTool.init_method_get_vertex_faces();
    return _call_native_mb_ret(
      MeshDataTool.#_bindings.method_get_vertex_faces,
      this._owner,
			Variant.Type.PACKED_INT32_ARRAY,
    
      _idx
    );
    
  }
  get_edge_vertex(_idx, _vertex) {
    MeshDataTool.init_method_get_edge_vertex();
    return _call_native_mb_ret(
      MeshDataTool.#_bindings.method_get_edge_vertex,
      this._owner,
			Variant.Type.INT,
    
      _idx, _vertex
    );
    
  }
  get_edge_faces(_idx) {
    MeshDataTool.init_method_get_edge_faces();
    return _call_native_mb_ret(
      MeshDataTool.#_bindings.method_get_edge_faces,
      this._owner,
			Variant.Type.PACKED_INT32_ARRAY,
    
      _idx
    );
    
  }
  set_edge_meta(_idx, _meta) {
    MeshDataTool.init_method_set_edge_meta();
    return _call_native_mb_no_ret(
      MeshDataTool.#_bindings.method_set_edge_meta,
      this._owner,
      _idx, _meta
    );
    
  }
  get_edge_meta(_idx) {
    MeshDataTool.init_method_get_edge_meta();
    return _call_native_mb_ret(
      MeshDataTool.#_bindings.method_get_edge_meta,
      this._owner,
			Variant.Type.VARIANT,
    
      _idx
    );
    
  }
  get_face_vertex(_idx, _vertex) {
    MeshDataTool.init_method_get_face_vertex();
    return _call_native_mb_ret(
      MeshDataTool.#_bindings.method_get_face_vertex,
      this._owner,
			Variant.Type.INT,
    
      _idx, _vertex
    );
    
  }
  get_face_edge(_idx, _edge) {
    MeshDataTool.init_method_get_face_edge();
    return _call_native_mb_ret(
      MeshDataTool.#_bindings.method_get_face_edge,
      this._owner,
			Variant.Type.INT,
    
      _idx, _edge
    );
    
  }
  set_face_meta(_idx, _meta) {
    MeshDataTool.init_method_set_face_meta();
    return _call_native_mb_no_ret(
      MeshDataTool.#_bindings.method_set_face_meta,
      this._owner,
      _idx, _meta
    );
    
  }
  get_face_meta(_idx) {
    MeshDataTool.init_method_get_face_meta();
    return _call_native_mb_ret(
      MeshDataTool.#_bindings.method_get_face_meta,
      this._owner,
			Variant.Type.VARIANT,
    
      _idx
    );
    
  }
  get_face_normal(_idx) {
    MeshDataTool.init_method_get_face_normal();
    return _call_native_mb_ret(
      MeshDataTool.#_bindings.method_get_face_normal,
      this._owner,
			Variant.Type.VECTOR3,
    
      _idx
    );
    
  }
  set_material(_material) {
    MeshDataTool.init_method_set_material();
    return _call_native_mb_no_ret(
      MeshDataTool.#_bindings.method_set_material,
      this._owner,
      _material
    );
    
  }
  get_material() {
    MeshDataTool.init_method_get_material();
    return _call_native_mb_ret(
      MeshDataTool.#_bindings.method_get_material,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  

}