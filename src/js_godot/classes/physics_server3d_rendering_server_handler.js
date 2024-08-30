import * as internal from '__internal__';
import { GodotObject } from 'src/js_godot/classes/godot_object'
import { AABB } from 'src/js_godot/variant/aabb'
import { Vector3 } from 'src/js_godot/variant/vector3'
import { StringName } from 'src/js_godot/variant/string_name'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_set_vertex;
    method_set_normal;
    method_set_aabb;
}


export class PhysicsServer3DRenderingServerHandler extends GodotObject{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("PhysicsServer3DRenderingServerHandler");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("PhysicsServer3DRenderingServerHandler");
        let methodname = new StringName("set_vertex");
        this._bindings.method_set_vertex = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1530502735
        );
      }
      {
        let classname = new StringName("PhysicsServer3DRenderingServerHandler");
        let methodname = new StringName("set_normal");
        this._bindings.method_set_normal = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1530502735
        );
      }
      {
        let classname = new StringName("PhysicsServer3DRenderingServerHandler");
        let methodname = new StringName("set_aabb");
        this._bindings.method_set_aabb = internal.classdb_get_method_bind(
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
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_vertex,
      this._owner,
      _vertex_id, _vertex
    );
    
  }
  set_normal(_vertex_id, _normal) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_normal,
      this._owner,
      _vertex_id, _normal
    );
    
  }
  set_aabb(_aabb) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_aabb,
      this._owner,
      _aabb
    );
    
  }
}