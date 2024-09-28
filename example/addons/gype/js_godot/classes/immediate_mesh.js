import * as internal from '__internal__';
import { Mesh } from '@js_godot/classes/mesh'
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
@GodotClass
export class ImmediateMesh extends Mesh{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("ImmediateMesh");
    } else {
      super(godot_object);
    }
  }
  static init_method_surface_begin() {
    if (!this._bindings.method_surface_begin) {
      let classname = new StringName("ImmediateMesh");
      let methodname = new StringName("surface_begin");
      this._bindings.method_surface_begin = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2794442543
      );
    }
  }
  static init_method_surface_set_color() {
    if (!this._bindings.method_surface_set_color) {
      let classname = new StringName("ImmediateMesh");
      let methodname = new StringName("surface_set_color");
      this._bindings.method_surface_set_color = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2920490490
      );
    }
  }
  static init_method_surface_set_normal() {
    if (!this._bindings.method_surface_set_normal) {
      let classname = new StringName("ImmediateMesh");
      let methodname = new StringName("surface_set_normal");
      this._bindings.method_surface_set_normal = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3460891852
      );
    }
  }
  static init_method_surface_set_tangent() {
    if (!this._bindings.method_surface_set_tangent) {
      let classname = new StringName("ImmediateMesh");
      let methodname = new StringName("surface_set_tangent");
      this._bindings.method_surface_set_tangent = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3505987427
      );
    }
  }
  static init_method_surface_set_uv() {
    if (!this._bindings.method_surface_set_uv) {
      let classname = new StringName("ImmediateMesh");
      let methodname = new StringName("surface_set_uv");
      this._bindings.method_surface_set_uv = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        743155724
      );
    }
  }
  static init_method_surface_set_uv2() {
    if (!this._bindings.method_surface_set_uv2) {
      let classname = new StringName("ImmediateMesh");
      let methodname = new StringName("surface_set_uv2");
      this._bindings.method_surface_set_uv2 = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        743155724
      );
    }
  }
  static init_method_surface_add_vertex() {
    if (!this._bindings.method_surface_add_vertex) {
      let classname = new StringName("ImmediateMesh");
      let methodname = new StringName("surface_add_vertex");
      this._bindings.method_surface_add_vertex = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3460891852
      );
    }
  }
  static init_method_surface_add_vertex_2d() {
    if (!this._bindings.method_surface_add_vertex_2d) {
      let classname = new StringName("ImmediateMesh");
      let methodname = new StringName("surface_add_vertex_2d");
      this._bindings.method_surface_add_vertex_2d = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        743155724
      );
    }
  }
  static init_method_surface_end() {
    if (!this._bindings.method_surface_end) {
      let classname = new StringName("ImmediateMesh");
      let methodname = new StringName("surface_end");
      this._bindings.method_surface_end = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_clear_surfaces() {
    if (!this._bindings.method_clear_surfaces) {
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
    ImmediateMesh.init_method_surface_begin();
    return _call_native_mb_no_ret(
      ImmediateMesh._bindings.method_surface_begin,
      this._owner,
      _primitive, _material
    );
    
  }
  surface_set_color(_color) {
    ImmediateMesh.init_method_surface_set_color();
    return _call_native_mb_no_ret(
      ImmediateMesh._bindings.method_surface_set_color,
      this._owner,
      _color
    );
    
  }
  surface_set_normal(_normal) {
    ImmediateMesh.init_method_surface_set_normal();
    return _call_native_mb_no_ret(
      ImmediateMesh._bindings.method_surface_set_normal,
      this._owner,
      _normal
    );
    
  }
  surface_set_tangent(_tangent) {
    ImmediateMesh.init_method_surface_set_tangent();
    return _call_native_mb_no_ret(
      ImmediateMesh._bindings.method_surface_set_tangent,
      this._owner,
      _tangent
    );
    
  }
  surface_set_uv(_uv) {
    ImmediateMesh.init_method_surface_set_uv();
    return _call_native_mb_no_ret(
      ImmediateMesh._bindings.method_surface_set_uv,
      this._owner,
      _uv
    );
    
  }
  surface_set_uv2(_uv2) {
    ImmediateMesh.init_method_surface_set_uv2();
    return _call_native_mb_no_ret(
      ImmediateMesh._bindings.method_surface_set_uv2,
      this._owner,
      _uv2
    );
    
  }
  surface_add_vertex(_vertex) {
    ImmediateMesh.init_method_surface_add_vertex();
    return _call_native_mb_no_ret(
      ImmediateMesh._bindings.method_surface_add_vertex,
      this._owner,
      _vertex
    );
    
  }
  surface_add_vertex_2d(_vertex) {
    ImmediateMesh.init_method_surface_add_vertex_2d();
    return _call_native_mb_no_ret(
      ImmediateMesh._bindings.method_surface_add_vertex_2d,
      this._owner,
      _vertex
    );
    
  }
  surface_end() {
    ImmediateMesh.init_method_surface_end();
    return _call_native_mb_no_ret(
      ImmediateMesh._bindings.method_surface_end,
      this._owner,
      
    );
    
  }
  clear_surfaces() {
    ImmediateMesh.init_method_clear_surfaces();
    return _call_native_mb_no_ret(
      ImmediateMesh._bindings.method_clear_surfaces,
      this._owner,
      
    );
    
  }
  

}