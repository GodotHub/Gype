import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { Resource } from '@js_godot/classes/resource'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

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

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("NavigationMeshSourceGeometryData3D");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_vertices() {
    if (!this.#_bindings.method_set_vertices) {
      let classname = new StringName("NavigationMeshSourceGeometryData3D");
      let methodname = new StringName("set_vertices");
      this.#_bindings.method_set_vertices = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2899603908
      );
    }
  }
  static init_method_get_vertices() {
    if (!this.#_bindings.method_get_vertices) {
      let classname = new StringName("NavigationMeshSourceGeometryData3D");
      let methodname = new StringName("get_vertices");
      this.#_bindings.method_get_vertices = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        675695659
      );
    }
  }
  static init_method_set_indices() {
    if (!this.#_bindings.method_set_indices) {
      let classname = new StringName("NavigationMeshSourceGeometryData3D");
      let methodname = new StringName("set_indices");
      this.#_bindings.method_set_indices = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3614634198
      );
    }
  }
  static init_method_get_indices() {
    if (!this.#_bindings.method_get_indices) {
      let classname = new StringName("NavigationMeshSourceGeometryData3D");
      let methodname = new StringName("get_indices");
      this.#_bindings.method_get_indices = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1930428628
      );
    }
  }
  static init_method_append_arrays() {
    if (!this.#_bindings.method_append_arrays) {
      let classname = new StringName("NavigationMeshSourceGeometryData3D");
      let methodname = new StringName("append_arrays");
      this.#_bindings.method_append_arrays = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3117535015
      );
    }
  }
  static init_method_clear() {
    if (!this.#_bindings.method_clear) {
      let classname = new StringName("NavigationMeshSourceGeometryData3D");
      let methodname = new StringName("clear");
      this.#_bindings.method_clear = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_has_data() {
    if (!this.#_bindings.method_has_data) {
      let classname = new StringName("NavigationMeshSourceGeometryData3D");
      let methodname = new StringName("has_data");
      this.#_bindings.method_has_data = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2240911060
      );
    }
  }
  static init_method_add_mesh() {
    if (!this.#_bindings.method_add_mesh) {
      let classname = new StringName("NavigationMeshSourceGeometryData3D");
      let methodname = new StringName("add_mesh");
      this.#_bindings.method_add_mesh = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        975462459
      );
    }
  }
  static init_method_add_mesh_array() {
    if (!this.#_bindings.method_add_mesh_array) {
      let classname = new StringName("NavigationMeshSourceGeometryData3D");
      let methodname = new StringName("add_mesh_array");
      this.#_bindings.method_add_mesh_array = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        4235710913
      );
    }
  }
  static init_method_add_faces() {
    if (!this.#_bindings.method_add_faces) {
      let classname = new StringName("NavigationMeshSourceGeometryData3D");
      let methodname = new StringName("add_faces");
      this.#_bindings.method_add_faces = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1440358797
      );
    }
  }
  static init_method_merge() {
    if (!this.#_bindings.method_merge) {
      let classname = new StringName("NavigationMeshSourceGeometryData3D");
      let methodname = new StringName("merge");
      this.#_bindings.method_merge = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        655828145
      );
    }
  }
  static init_method_add_projected_obstruction() {
    if (!this.#_bindings.method_add_projected_obstruction) {
      let classname = new StringName("NavigationMeshSourceGeometryData3D");
      let methodname = new StringName("add_projected_obstruction");
      this.#_bindings.method_add_projected_obstruction = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3351846707
      );
    }
  }
  static init_method_clear_projected_obstructions() {
    if (!this.#_bindings.method_clear_projected_obstructions) {
      let classname = new StringName("NavigationMeshSourceGeometryData3D");
      let methodname = new StringName("clear_projected_obstructions");
      this.#_bindings.method_clear_projected_obstructions = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_set_projected_obstructions() {
    if (!this.#_bindings.method_set_projected_obstructions) {
      let classname = new StringName("NavigationMeshSourceGeometryData3D");
      let methodname = new StringName("set_projected_obstructions");
      this.#_bindings.method_set_projected_obstructions = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        381264803
      );
    }
  }
  static init_method_get_projected_obstructions() {
    if (!this.#_bindings.method_get_projected_obstructions) {
      let classname = new StringName("NavigationMeshSourceGeometryData3D");
      let methodname = new StringName("get_projected_obstructions");
      this.#_bindings.method_get_projected_obstructions = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3995934104
      );
    }
  }

  
  
  set_vertices(_vertices) {
    NavigationMeshSourceGeometryData3D.init_method_set_vertices();
    return _call_native_mb_no_ret(
      NavigationMeshSourceGeometryData3D.#_bindings.method_set_vertices,
      this._owner,
      _vertices
    );
    
  }
  get_vertices() {
    NavigationMeshSourceGeometryData3D.init_method_get_vertices();
    return _call_native_mb_ret(
      NavigationMeshSourceGeometryData3D.#_bindings.method_get_vertices,
      this._owner,
			Variant.Type.PACKED_FLOAT32_ARRAY,
    
      
    );
    
  }
  set_indices(_indices) {
    NavigationMeshSourceGeometryData3D.init_method_set_indices();
    return _call_native_mb_no_ret(
      NavigationMeshSourceGeometryData3D.#_bindings.method_set_indices,
      this._owner,
      _indices
    );
    
  }
  get_indices() {
    NavigationMeshSourceGeometryData3D.init_method_get_indices();
    return _call_native_mb_ret(
      NavigationMeshSourceGeometryData3D.#_bindings.method_get_indices,
      this._owner,
			Variant.Type.PACKED_INT32_ARRAY,
    
      
    );
    
  }
  append_arrays(_vertices, _indices) {
    NavigationMeshSourceGeometryData3D.init_method_append_arrays();
    return _call_native_mb_no_ret(
      NavigationMeshSourceGeometryData3D.#_bindings.method_append_arrays,
      this._owner,
      _vertices, _indices
    );
    
  }
  clear() {
    NavigationMeshSourceGeometryData3D.init_method_clear();
    return _call_native_mb_no_ret(
      NavigationMeshSourceGeometryData3D.#_bindings.method_clear,
      this._owner,
      
    );
    
  }
  has_data() {
    NavigationMeshSourceGeometryData3D.init_method_has_data();
    return _call_native_mb_ret(
      NavigationMeshSourceGeometryData3D.#_bindings.method_has_data,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  add_mesh(_mesh, _xform) {
    NavigationMeshSourceGeometryData3D.init_method_add_mesh();
    return _call_native_mb_no_ret(
      NavigationMeshSourceGeometryData3D.#_bindings.method_add_mesh,
      this._owner,
      _mesh, _xform
    );
    
  }
  add_mesh_array(_mesh_array, _xform) {
    NavigationMeshSourceGeometryData3D.init_method_add_mesh_array();
    return _call_native_mb_no_ret(
      NavigationMeshSourceGeometryData3D.#_bindings.method_add_mesh_array,
      this._owner,
      _mesh_array, _xform
    );
    
  }
  add_faces(_faces, _xform) {
    NavigationMeshSourceGeometryData3D.init_method_add_faces();
    return _call_native_mb_no_ret(
      NavigationMeshSourceGeometryData3D.#_bindings.method_add_faces,
      this._owner,
      _faces, _xform
    );
    
  }
  merge(_other_geometry) {
    NavigationMeshSourceGeometryData3D.init_method_merge();
    return _call_native_mb_no_ret(
      NavigationMeshSourceGeometryData3D.#_bindings.method_merge,
      this._owner,
      _other_geometry
    );
    
  }
  add_projected_obstruction(_vertices, _elevation, _height, _carve) {
    NavigationMeshSourceGeometryData3D.init_method_add_projected_obstruction();
    return _call_native_mb_no_ret(
      NavigationMeshSourceGeometryData3D.#_bindings.method_add_projected_obstruction,
      this._owner,
      _vertices, _elevation, _height, _carve
    );
    
  }
  clear_projected_obstructions() {
    NavigationMeshSourceGeometryData3D.init_method_clear_projected_obstructions();
    return _call_native_mb_no_ret(
      NavigationMeshSourceGeometryData3D.#_bindings.method_clear_projected_obstructions,
      this._owner,
      
    );
    
  }
  set_projected_obstructions(_projected_obstructions) {
    NavigationMeshSourceGeometryData3D.init_method_set_projected_obstructions();
    return _call_native_mb_no_ret(
      NavigationMeshSourceGeometryData3D.#_bindings.method_set_projected_obstructions,
      this._owner,
      _projected_obstructions
    );
    
  }
  get_projected_obstructions() {
    NavigationMeshSourceGeometryData3D.init_method_get_projected_obstructions();
    return _call_native_mb_ret(
      NavigationMeshSourceGeometryData3D.#_bindings.method_get_projected_obstructions,
      this._owner,
			Variant.Type.ARRAY,
    
      
    );
    
  }
  
get vertices () {
  return this.get_vertices();
}
set vertices (new_value) {
  this.set_vertices(new_value);
}
get indices () {
  return this.get_indices();
}
set indices (new_value) {
  this.set_indices(new_value);
}
get projected_obstructions () {
  return this.get_projected_obstructions();
}
set projected_obstructions (new_value) {
  this.set_projected_obstructions(new_value);
}

}