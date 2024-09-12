import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { GodotObject } from '@js_godot/classes/godot_object'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_set_vertex;
  method_set_normal;
  method_set_aabb;
}
export class PhysicsServer3DRenderingServerHandler extends GodotObject{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("PhysicsServer3DRenderingServerHandler");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_vertex() {
    if (!this.#_bindings.method_set_vertex) {
      let classname = new StringName("PhysicsServer3DRenderingServerHandler");
      let methodname = new StringName("set_vertex");
      this.#_bindings.method_set_vertex = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1530502735
      );
    }
  }
  static init_method_set_normal() {
    if (!this.#_bindings.method_set_normal) {
      let classname = new StringName("PhysicsServer3DRenderingServerHandler");
      let methodname = new StringName("set_normal");
      this.#_bindings.method_set_normal = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1530502735
      );
    }
  }
  static init_method_set_aabb() {
    if (!this.#_bindings.method_set_aabb) {
      let classname = new StringName("PhysicsServer3DRenderingServerHandler");
      let methodname = new StringName("set_aabb");
      this.#_bindings.method_set_aabb = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        259215842
      );
    }
  }

  
  
  _set_vertex(_vertex_id, _vertex) {
  }
  _set_normal(_vertex_id, _normal) {
  }
  _set_aabb(_aabb) {
  }
  set_vertex(_vertex_id, _vertex) {
    PhysicsServer3DRenderingServerHandler.init_method_set_vertex();
    return _call_native_mb_no_ret(
      PhysicsServer3DRenderingServerHandler.#_bindings.method_set_vertex,
      this._owner,
      _vertex_id, _vertex
    );
    
  }
  set_normal(_vertex_id, _normal) {
    PhysicsServer3DRenderingServerHandler.init_method_set_normal();
    return _call_native_mb_no_ret(
      PhysicsServer3DRenderingServerHandler.#_bindings.method_set_normal,
      this._owner,
      _vertex_id, _normal
    );
    
  }
  set_aabb(_aabb) {
    PhysicsServer3DRenderingServerHandler.init_method_set_aabb();
    return _call_native_mb_no_ret(
      PhysicsServer3DRenderingServerHandler.#_bindings.method_set_aabb,
      this._owner,
      _aabb
    );
    
  }
  

}