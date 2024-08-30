import * as internal from '__internal__';
import { Resource } from 'src/js_godot/classes/resource'
import { GDString } from 'src/js_godot/variant/gd_string'
import { StringName } from 'src/js_godot/variant/string_name'
import { Transform3D } from 'src/js_godot/variant/transform3d'
import { PackedInt32Array } from 'src/js_godot/variant/packed_int32_array'
import { GDArray } from 'src/js_godot/variant/gd_array'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_create_item;
    method_set_item_name;
    method_set_item_mesh;
    method_set_item_mesh_transform;
    method_set_item_navigation_mesh;
    method_set_item_navigation_mesh_transform;
    method_set_item_navigation_layers;
    method_set_item_shapes;
    method_set_item_preview;
    method_get_item_name;
    method_get_item_mesh;
    method_get_item_mesh_transform;
    method_get_item_navigation_mesh;
    method_get_item_navigation_mesh_transform;
    method_get_item_navigation_layers;
    method_get_item_shapes;
    method_get_item_preview;
    method_remove_item;
    method_find_item_by_name;
    method_clear;
    method_get_item_list;
    method_get_last_unused_item_id;
}


export class MeshLibrary extends Resource{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("MeshLibrary");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("MeshLibrary");
        let methodname = new StringName("create_item");
        this._bindings.method_create_item = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("MeshLibrary");
        let methodname = new StringName("set_item_name");
        this._bindings.method_set_item_name = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          501894301
        );
      }
      {
        let classname = new StringName("MeshLibrary");
        let methodname = new StringName("set_item_mesh");
        this._bindings.method_set_item_mesh = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          969122797
        );
      }
      {
        let classname = new StringName("MeshLibrary");
        let methodname = new StringName("set_item_mesh_transform");
        this._bindings.method_set_item_mesh_transform = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3616898986
        );
      }
      {
        let classname = new StringName("MeshLibrary");
        let methodname = new StringName("set_item_navigation_mesh");
        this._bindings.method_set_item_navigation_mesh = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3483353960
        );
      }
      {
        let classname = new StringName("MeshLibrary");
        let methodname = new StringName("set_item_navigation_mesh_transform");
        this._bindings.method_set_item_navigation_mesh_transform = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3616898986
        );
      }
      {
        let classname = new StringName("MeshLibrary");
        let methodname = new StringName("set_item_navigation_layers");
        this._bindings.method_set_item_navigation_layers = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3937882851
        );
      }
      {
        let classname = new StringName("MeshLibrary");
        let methodname = new StringName("set_item_shapes");
        this._bindings.method_set_item_shapes = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          537221740
        );
      }
      {
        let classname = new StringName("MeshLibrary");
        let methodname = new StringName("set_item_preview");
        this._bindings.method_set_item_preview = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          666127730
        );
      }
      {
        let classname = new StringName("MeshLibrary");
        let methodname = new StringName("get_item_name");
        this._bindings.method_get_item_name = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          844755477
        );
      }
      {
        let classname = new StringName("MeshLibrary");
        let methodname = new StringName("get_item_mesh");
        this._bindings.method_get_item_mesh = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1576363275
        );
      }
      {
        let classname = new StringName("MeshLibrary");
        let methodname = new StringName("get_item_mesh_transform");
        this._bindings.method_get_item_mesh_transform = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1965739696
        );
      }
      {
        let classname = new StringName("MeshLibrary");
        let methodname = new StringName("get_item_navigation_mesh");
        this._bindings.method_get_item_navigation_mesh = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2729647406
        );
      }
      {
        let classname = new StringName("MeshLibrary");
        let methodname = new StringName("get_item_navigation_mesh_transform");
        this._bindings.method_get_item_navigation_mesh_transform = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1965739696
        );
      }
      {
        let classname = new StringName("MeshLibrary");
        let methodname = new StringName("get_item_navigation_layers");
        this._bindings.method_get_item_navigation_layers = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          923996154
        );
      }
      {
        let classname = new StringName("MeshLibrary");
        let methodname = new StringName("get_item_shapes");
        this._bindings.method_get_item_shapes = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          663333327
        );
      }
      {
        let classname = new StringName("MeshLibrary");
        let methodname = new StringName("get_item_preview");
        this._bindings.method_get_item_preview = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3536238170
        );
      }
      {
        let classname = new StringName("MeshLibrary");
        let methodname = new StringName("remove_item");
        this._bindings.method_remove_item = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1286410249
        );
      }
      {
        let classname = new StringName("MeshLibrary");
        let methodname = new StringName("find_item_by_name");
        this._bindings.method_find_item_by_name = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1321353865
        );
      }
      {
        let classname = new StringName("MeshLibrary");
        let methodname = new StringName("clear");
        this._bindings.method_clear = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3218959716
        );
      }
      {
        let classname = new StringName("MeshLibrary");
        let methodname = new StringName("get_item_list");
        this._bindings.method_get_item_list = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1930428628
        );
      }
      {
        let classname = new StringName("MeshLibrary");
        let methodname = new StringName("get_last_unused_item_id");
        this._bindings.method_get_last_unused_item_id = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3905245786
        );
      }
  }
  create_item(_id) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_create_item,
      this._owner,
      _id
    );
    
  }
  set_item_name(_id, _name) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_item_name,
      this._owner,
      _id, _name
    );
    
  }
  set_item_mesh(_id, _mesh) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_item_mesh,
      this._owner,
      _id, _mesh
    );
    
  }
  set_item_mesh_transform(_id, _mesh_transform) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_item_mesh_transform,
      this._owner,
      _id, _mesh_transform
    );
    
  }
  set_item_navigation_mesh(_id, _navigation_mesh) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_item_navigation_mesh,
      this._owner,
      _id, _navigation_mesh
    );
    
  }
  set_item_navigation_mesh_transform(_id, _navigation_mesh) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_item_navigation_mesh_transform,
      this._owner,
      _id, _navigation_mesh
    );
    
  }
  set_item_navigation_layers(_id, _navigation_layers) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_item_navigation_layers,
      this._owner,
      _id, _navigation_layers
    );
    
  }
  set_item_shapes(_id, _shapes) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_item_shapes,
      this._owner,
      _id, _shapes
    );
    
  }
  set_item_preview(_id, _texture) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_item_preview,
      this._owner,
      _id, _texture
    );
    
  }
  get_item_name(_id) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_item_name,
      this._owner,
			Variant.Type.STRING
    ,
      _id
    );
    
  }
  get_item_mesh(_id) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_item_mesh,
      this._owner,
			Variant.INT,
      _id
    );
    
  }
  get_item_mesh_transform(_id) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_item_mesh_transform,
      this._owner,
			Variant.Type.TRANSFORM3D
    ,
      _id
    );
    
  }
  get_item_navigation_mesh(_id) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_item_navigation_mesh,
      this._owner,
			Variant.INT,
      _id
    );
    
  }
  get_item_navigation_mesh_transform(_id) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_item_navigation_mesh_transform,
      this._owner,
			Variant.Type.TRANSFORM3D
    ,
      _id
    );
    
  }
  get_item_navigation_layers(_id) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_item_navigation_layers,
      this._owner,
			Variant.Type.INT,
      _id
    );
    
  }
  get_item_shapes(_id) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_item_shapes,
      this._owner,
			Variant.Type.ARRAY
    ,
      _id
    );
    
  }
  get_item_preview(_id) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_item_preview,
      this._owner,
			Variant.INT,
      _id
    );
    
  }
  remove_item(_id) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_remove_item,
      this._owner,
      _id
    );
    
  }
  find_item_by_name(_name) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_find_item_by_name,
      this._owner,
			Variant.Type.INT,
      _name
    );
    
  }
  clear() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_clear,
      this._owner,
      
    );
    
  }
  get_item_list() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_item_list,
      this._owner,
			Variant.Type.PACKED_INT32_ARRAY
    ,
      
    );
    
  }
  get_last_unused_item_id() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_last_unused_item_id,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
}