import * as internal from '__internal__';
import { Vector2 } from 'src/js_godot/variant/vector2'
import { StringName } from 'src/js_godot/variant/string_name'
import { Vector3 } from 'src/js_godot/variant/vector3'
import { Mesh } from 'src/js_godot/classes/mesh'
import { Color } from 'src/js_godot/variant/color'
import { Plane } from 'src/js_godot/variant/plane'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_surface_begin;
    method_surface_set_color;
    method_surface_set_normal;
    method_surface_set_tangent;
    method_surface_set_uv;
    method_surface_set_uv2;
    method_surface_add_vertex;
    method_surface_add_vertex_2d;
    method_surface_end;
    method_clear_surfaces;
}


export class ImmediateMesh extends Mesh{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("ImmediateMesh");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("ImmediateMesh");
        let methodname = new StringName("surface_begin");
        this._bindings.method_surface_begin = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2794442543
        );
      }
      {
        let classname = new StringName("ImmediateMesh");
        let methodname = new StringName("surface_set_color");
        this._bindings.method_surface_set_color = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2920490490
        );
      }
      {
        let classname = new StringName("ImmediateMesh");
        let methodname = new StringName("surface_set_normal");
        this._bindings.method_surface_set_normal = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3460891852
        );
      }
      {
        let classname = new StringName("ImmediateMesh");
        let methodname = new StringName("surface_set_tangent");
        this._bindings.method_surface_set_tangent = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3505987427
        );
      }
      {
        let classname = new StringName("ImmediateMesh");
        let methodname = new StringName("surface_set_uv");
        this._bindings.method_surface_set_uv = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          743155724
        );
      }
      {
        let classname = new StringName("ImmediateMesh");
        let methodname = new StringName("surface_set_uv2");
        this._bindings.method_surface_set_uv2 = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          743155724
        );
      }
      {
        let classname = new StringName("ImmediateMesh");
        let methodname = new StringName("surface_add_vertex");
        this._bindings.method_surface_add_vertex = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3460891852
        );
      }
      {
        let classname = new StringName("ImmediateMesh");
        let methodname = new StringName("surface_add_vertex_2d");
        this._bindings.method_surface_add_vertex_2d = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          743155724
        );
      }
      {
        let classname = new StringName("ImmediateMesh");
        let methodname = new StringName("surface_end");
        this._bindings.method_surface_end = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3218959716
        );
      }
      {
        let classname = new StringName("ImmediateMesh");
        let methodname = new StringName("clear_surfaces");
        this._bindings.method_clear_surfaces = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3218959716
        );
      }
  }
  surface_begin(_primitive, _material) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_surface_begin,
      this._owner,
      _primitive, _material
    );
    
  }
  surface_set_color(_color) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_surface_set_color,
      this._owner,
      _color
    );
    
  }
  surface_set_normal(_normal) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_surface_set_normal,
      this._owner,
      _normal
    );
    
  }
  surface_set_tangent(_tangent) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_surface_set_tangent,
      this._owner,
      _tangent
    );
    
  }
  surface_set_uv(_uv) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_surface_set_uv,
      this._owner,
      _uv
    );
    
  }
  surface_set_uv2(_uv2) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_surface_set_uv2,
      this._owner,
      _uv2
    );
    
  }
  surface_add_vertex(_vertex) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_surface_add_vertex,
      this._owner,
      _vertex
    );
    
  }
  surface_add_vertex_2d(_vertex) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_surface_add_vertex_2d,
      this._owner,
      _vertex
    );
    
  }
  surface_end() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_surface_end,
      this._owner,
      
    );
    
  }
  clear_surfaces() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_clear_surfaces,
      this._owner,
      
    );
    
  }
}