import * as internal from '__internal__';
import { GodotObject } from 'src/js_godot/classes/godot_object'
import { Callable } from 'src/js_godot/variant/callable'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_bake;
    method_clear;
    method_parse_source_geometry_data;
    method_bake_from_source_geometry_data;
}

export const NavigationMeshGenerator = new _NavigationMeshGenerator();

class _NavigationMeshGenerator extends GodotObject{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("NavigationMeshGenerator");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("NavigationMeshGenerator");
        let methodname = new StringName("bake");
        this._bindings.method_bake = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1401173477
        );
      }
      {
        let classname = new StringName("NavigationMeshGenerator");
        let methodname = new StringName("clear");
        this._bindings.method_clear = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2923361153
        );
      }
      {
        let classname = new StringName("NavigationMeshGenerator");
        let methodname = new StringName("parse_source_geometry_data");
        this._bindings.method_parse_source_geometry_data = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          685862123
        );
      }
      {
        let classname = new StringName("NavigationMeshGenerator");
        let methodname = new StringName("bake_from_source_geometry_data");
        this._bindings.method_bake_from_source_geometry_data = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2469318639
        );
      }
  }
  bake(_navigation_mesh, _root_node) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_bake,
      this._owner,
      _navigation_mesh, _root_node
    );
    
  }
  clear(_navigation_mesh) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_clear,
      this._owner,
      _navigation_mesh
    );
    
  }
  parse_source_geometry_data(_navigation_mesh, _source_geometry_data, _root_node, _callback) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_parse_source_geometry_data,
      this._owner,
      _navigation_mesh, _source_geometry_data, _root_node, _callback
    );
    
  }
  bake_from_source_geometry_data(_navigation_mesh, _source_geometry_data, _callback) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_bake_from_source_geometry_data,
      this._owner,
      _navigation_mesh, _source_geometry_data, _callback
    );
    
  }
}