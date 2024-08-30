import * as internal from '__internal__';
import { PackedFloat32Array } from 'src/js_godot/variant/packed_float32_array'
import { Resource } from 'src/js_godot/classes/resource'
import { StringName } from 'src/js_godot/variant/string_name'
import { Transform3D } from 'src/js_godot/variant/transform3d'
import { PackedInt32Array } from 'src/js_godot/variant/packed_int32_array'
import { PackedVector3Array } from 'src/js_godot/variant/packed_vector3_array'
import { GDArray } from 'src/js_godot/variant/gd_array'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_set_vertices;
    method_get_vertices;
    method_set_indices;
    method_get_indices;
    method_append_arrays;
    method_clear;
    method_has_data;
    method_add_mesh;
    method_add_mesh_array;
    method_add_faces;
    method_merge;
    method_add_projected_obstruction;
    method_clear_projected_obstructions;
    method_set_projected_obstructions;
    method_get_projected_obstructions;
}


export class NavigationMeshSourceGeometryData3D extends Resource{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("NavigationMeshSourceGeometryData3D");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("NavigationMeshSourceGeometryData3D");
        let methodname = new StringName("set_vertices");
        this._bindings.method_set_vertices = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2899603908
        );
      }
      {
        let classname = new StringName("NavigationMeshSourceGeometryData3D");
        let methodname = new StringName("get_vertices");
        this._bindings.method_get_vertices = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          675695659
        );
      }
      {
        let classname = new StringName("NavigationMeshSourceGeometryData3D");
        let methodname = new StringName("set_indices");
        this._bindings.method_set_indices = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3614634198
        );
      }
      {
        let classname = new StringName("NavigationMeshSourceGeometryData3D");
        let methodname = new StringName("get_indices");
        this._bindings.method_get_indices = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1930428628
        );
      }
      {
        let classname = new StringName("NavigationMeshSourceGeometryData3D");
        let methodname = new StringName("append_arrays");
        this._bindings.method_append_arrays = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3117535015
        );
      }
      {
        let classname = new StringName("NavigationMeshSourceGeometryData3D");
        let methodname = new StringName("clear");
        this._bindings.method_clear = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3218959716
        );
      }
      {
        let classname = new StringName("NavigationMeshSourceGeometryData3D");
        let methodname = new StringName("has_data");
        this._bindings.method_has_data = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2240911060
        );
      }
      {
        let classname = new StringName("NavigationMeshSourceGeometryData3D");
        let methodname = new StringName("add_mesh");
        this._bindings.method_add_mesh = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          975462459
        );
      }
      {
        let classname = new StringName("NavigationMeshSourceGeometryData3D");
        let methodname = new StringName("add_mesh_array");
        this._bindings.method_add_mesh_array = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          4235710913
        );
      }
      {
        let classname = new StringName("NavigationMeshSourceGeometryData3D");
        let methodname = new StringName("add_faces");
        this._bindings.method_add_faces = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1440358797
        );
      }
      {
        let classname = new StringName("NavigationMeshSourceGeometryData3D");
        let methodname = new StringName("merge");
        this._bindings.method_merge = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          655828145
        );
      }
      {
        let classname = new StringName("NavigationMeshSourceGeometryData3D");
        let methodname = new StringName("add_projected_obstruction");
        this._bindings.method_add_projected_obstruction = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3351846707
        );
      }
      {
        let classname = new StringName("NavigationMeshSourceGeometryData3D");
        let methodname = new StringName("clear_projected_obstructions");
        this._bindings.method_clear_projected_obstructions = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3218959716
        );
      }
      {
        let classname = new StringName("NavigationMeshSourceGeometryData3D");
        let methodname = new StringName("set_projected_obstructions");
        this._bindings.method_set_projected_obstructions = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          381264803
        );
      }
      {
        let classname = new StringName("NavigationMeshSourceGeometryData3D");
        let methodname = new StringName("get_projected_obstructions");
        this._bindings.method_get_projected_obstructions = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3995934104
        );
      }
  }
  set_vertices(_vertices) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_vertices,
      this._owner,
      _vertices
    );
    
  }
  get_vertices() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_vertices,
      this._owner,
			Variant.Type.PACKED_FLOAT32_ARRAY
    ,
      
    );
    
  }
  set_indices(_indices) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_indices,
      this._owner,
      _indices
    );
    
  }
  get_indices() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_indices,
      this._owner,
			Variant.Type.PACKED_INT32_ARRAY
    ,
      
    );
    
  }
  append_arrays(_vertices, _indices) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_append_arrays,
      this._owner,
      _vertices, _indices
    );
    
  }
  clear() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_clear,
      this._owner,
      
    );
    
  }
  has_data() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_has_data,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  add_mesh(_mesh, _xform) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_mesh,
      this._owner,
      _mesh, _xform
    );
    
  }
  add_mesh_array(_mesh_array, _xform) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_mesh_array,
      this._owner,
      _mesh_array, _xform
    );
    
  }
  add_faces(_faces, _xform) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_faces,
      this._owner,
      _faces, _xform
    );
    
  }
  merge(_other_geometry) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_merge,
      this._owner,
      _other_geometry
    );
    
  }
  add_projected_obstruction(_vertices, _elevation, _height, _carve) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_projected_obstruction,
      this._owner,
      _vertices, _elevation, _height, _carve
    );
    
  }
  clear_projected_obstructions() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_clear_projected_obstructions,
      this._owner,
      
    );
    
  }
  set_projected_obstructions(_projected_obstructions) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_projected_obstructions,
      this._owner,
      _projected_obstructions
    );
    
  }
  get_projected_obstructions() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_projected_obstructions,
      this._owner,
			Variant.Type.ARRAY
    ,
      
    );
    
  }
}