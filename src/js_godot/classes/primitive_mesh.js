import * as internal from '__internal__';
import { AABB } from 'src/js_godot/variant/aabb'
import { GDArray } from 'src/js_godot/variant/gd_array'
import { Mesh } from 'src/js_godot/classes/mesh'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_set_material;
    method_get_material;
    method_get_mesh_arrays;
    method_set_custom_aabb;
    method_get_custom_aabb;
    method_set_flip_faces;
    method_get_flip_faces;
    method_set_add_uv2;
    method_get_add_uv2;
    method_set_uv2_padding;
    method_get_uv2_padding;
    method_request_update;
}


export class PrimitiveMesh extends Mesh{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("PrimitiveMesh");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("PrimitiveMesh");
        let methodname = new StringName("set_material");
        this._bindings.method_set_material = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2757459619
        );
      }
      {
        let classname = new StringName("PrimitiveMesh");
        let methodname = new StringName("get_material");
        this._bindings.method_get_material = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          5934680
        );
      }
      {
        let classname = new StringName("PrimitiveMesh");
        let methodname = new StringName("get_mesh_arrays");
        this._bindings.method_get_mesh_arrays = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3995934104
        );
      }
      {
        let classname = new StringName("PrimitiveMesh");
        let methodname = new StringName("set_custom_aabb");
        this._bindings.method_set_custom_aabb = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          259215842
        );
      }
      {
        let classname = new StringName("PrimitiveMesh");
        let methodname = new StringName("get_custom_aabb");
        this._bindings.method_get_custom_aabb = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1068685055
        );
      }
      {
        let classname = new StringName("PrimitiveMesh");
        let methodname = new StringName("set_flip_faces");
        this._bindings.method_set_flip_faces = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("PrimitiveMesh");
        let methodname = new StringName("get_flip_faces");
        this._bindings.method_get_flip_faces = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("PrimitiveMesh");
        let methodname = new StringName("set_add_uv2");
        this._bindings.method_set_add_uv2 = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("PrimitiveMesh");
        let methodname = new StringName("get_add_uv2");
        this._bindings.method_get_add_uv2 = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          36873697
        );
      }
      {
        let classname = new StringName("PrimitiveMesh");
        let methodname = new StringName("set_uv2_padding");
        this._bindings.method_set_uv2_padding = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          373806689
        );
      }
      {
        let classname = new StringName("PrimitiveMesh");
        let methodname = new StringName("get_uv2_padding");
        this._bindings.method_get_uv2_padding = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1740695150
        );
      }
      {
        let classname = new StringName("PrimitiveMesh");
        let methodname = new StringName("request_update");
        this._bindings.method_request_update = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3218959716
        );
      }
  }
  _create_mesh_array() {
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
  get_mesh_arrays() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_mesh_arrays,
      this._owner,
			Variant.Type.ARRAY
    ,
      
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
  set_flip_faces(_flip_faces) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_flip_faces,
      this._owner,
      _flip_faces
    );
    
  }
  get_flip_faces() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_flip_faces,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_add_uv2(_add_uv2) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_add_uv2,
      this._owner,
      _add_uv2
    );
    
  }
  get_add_uv2() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_add_uv2,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_uv2_padding(_uv2_padding) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_uv2_padding,
      this._owner,
      _uv2_padding
    );
    
  }
  get_uv2_padding() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_uv2_padding,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  request_update() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_request_update,
      this._owner,
      
    );
    
  }
}