import * as internal from '__internal__';
import { Shape3D } from '@js_godot/classes/shape3d'
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
  method_set_faces;
  method_get_faces;
  method_set_backface_collision_enabled;
  method_is_backface_collision_enabled;
}
@GodotClass
export class ConcavePolygonShape3D extends Shape3D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("ConcavePolygonShape3D");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_faces() {
    if (!this._bindings.method_set_faces) {
      let classname = new StringName("ConcavePolygonShape3D");
      let methodname = new StringName("set_faces");
      this._bindings.method_set_faces = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        334873810
      );
    }
  }
  static init_method_get_faces() {
    if (!this._bindings.method_get_faces) {
      let classname = new StringName("ConcavePolygonShape3D");
      let methodname = new StringName("get_faces");
      this._bindings.method_get_faces = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        497664490
      );
    }
  }
  static init_method_set_backface_collision_enabled() {
    if (!this._bindings.method_set_backface_collision_enabled) {
      let classname = new StringName("ConcavePolygonShape3D");
      let methodname = new StringName("set_backface_collision_enabled");
      this._bindings.method_set_backface_collision_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_backface_collision_enabled() {
    if (!this._bindings.method_is_backface_collision_enabled) {
      let classname = new StringName("ConcavePolygonShape3D");
      let methodname = new StringName("is_backface_collision_enabled");
      this._bindings.method_is_backface_collision_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }

  
  
  set_faces(_faces) {
    ConcavePolygonShape3D.init_method_set_faces();
    return _call_native_mb_no_ret(
      ConcavePolygonShape3D._bindings.method_set_faces,
      this._owner,
      _faces
    );
    
  }
  get_faces() {
    ConcavePolygonShape3D.init_method_get_faces();
    return _call_native_mb_ret(
      ConcavePolygonShape3D._bindings.method_get_faces,
      this._owner,
			Variant.Type.PACKED_VECTOR3_ARRAY,
    
      
    );
    
  }
  set_backface_collision_enabled(_enabled) {
    ConcavePolygonShape3D.init_method_set_backface_collision_enabled();
    return _call_native_mb_no_ret(
      ConcavePolygonShape3D._bindings.method_set_backface_collision_enabled,
      this._owner,
      _enabled
    );
    
  }
  is_backface_collision_enabled() {
    ConcavePolygonShape3D.init_method_is_backface_collision_enabled();
    return _call_native_mb_ret(
      ConcavePolygonShape3D._bindings.method_is_backface_collision_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  
get data () {
  return this.get_faces();
}
set data (new_value) {
  this.set_faces(new_value);
}
get backface_collision () {
  return this.is_backface_collision_enabled();
}
set backface_collision (new_value) {
  this.set_backface_collision_enabled(new_value);
}

}