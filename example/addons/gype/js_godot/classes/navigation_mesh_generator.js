import * as internal from '__internal__';
import { GodotObject } from '@js_godot/classes/godot_object'
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";
import { GodotClass } from "@js_godot/core/class_define";

class _MethodBindings {
  method_bake;
  method_clear;
  method_parse_source_geometry_data;
  method_bake_from_source_geometry_data;
}class _NavigationMeshGenerator extends GodotObject{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("NavigationMeshGenerator");
    } else {
      super(godot_object);
    }
  }
  static init_method_bake() {
    if (!this._bindings.method_bake) {
      let classname = new StringName("NavigationMeshGenerator");
      let methodname = new StringName("bake");
      this._bindings.method_bake = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1401173477
      );
    }
  }
  static init_method_clear() {
    if (!this._bindings.method_clear) {
      let classname = new StringName("NavigationMeshGenerator");
      let methodname = new StringName("clear");
      this._bindings.method_clear = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2923361153
      );
    }
  }
  static init_method_parse_source_geometry_data() {
    if (!this._bindings.method_parse_source_geometry_data) {
      let classname = new StringName("NavigationMeshGenerator");
      let methodname = new StringName("parse_source_geometry_data");
      this._bindings.method_parse_source_geometry_data = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        685862123
      );
    }
  }
  static init_method_bake_from_source_geometry_data() {
    if (!this._bindings.method_bake_from_source_geometry_data) {
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
    NavigationMeshGenerator.init_method_bake();
    return _call_native_mb_no_ret(
      _NavigationMeshGenerator._bindings.method_bake,
      this._owner,
      _navigation_mesh, _root_node
    );
    
  }
  clear(_navigation_mesh) {
    NavigationMeshGenerator.init_method_clear();
    return _call_native_mb_no_ret(
      _NavigationMeshGenerator._bindings.method_clear,
      this._owner,
      _navigation_mesh
    );
    
  }
  parse_source_geometry_data(_navigation_mesh, _source_geometry_data, _root_node, _callback) {
    NavigationMeshGenerator.init_method_parse_source_geometry_data();
    return _call_native_mb_no_ret(
      _NavigationMeshGenerator._bindings.method_parse_source_geometry_data,
      this._owner,
      _navigation_mesh, _source_geometry_data, _root_node, _callback
    );
    
  }
  bake_from_source_geometry_data(_navigation_mesh, _source_geometry_data, _callback) {
    NavigationMeshGenerator.init_method_bake_from_source_geometry_data();
    return _call_native_mb_no_ret(
      _NavigationMeshGenerator._bindings.method_bake_from_source_geometry_data,
      this._owner,
      _navigation_mesh, _source_geometry_data, _callback
    );
    
  }
  

}
export const NavigationMeshGenerator = (function () {
  let _instance;
  function create_instance() {
    return new _NavigationMeshGenerator();
  }
  return {
    instance: function () {
      if (!_instance) {
        _instance = create_instance();
      }
      return _instance;
    },
  };
})();