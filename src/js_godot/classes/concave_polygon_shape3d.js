import * as internal from '__internal__';
import { Shape3D } from 'src/js_godot/classesshape3d'
import { PackedVector3Array } from 'src/js_godot/variant/packed_vector3_array'
class _MethodBindings {
    method_set_faces;
    method_get_faces;
    method_set_backface_collision_enabled;
    method_is_backface_collision_enabled;
}


export class ConcavePolygonShape3D extends Shape3D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("ConcavePolygonShape3D");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("ConcavePolygonShape3D");
      let methodname = new StringName("set_faces");
      this._bindings.method_set_faces = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        334873810
      );
    }
    {
      let classname = new StringName("ConcavePolygonShape3D");
      let methodname = new StringName("get_faces");
      this._bindings.method_get_faces = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        497664490
      );
    }
    {
      let classname = new StringName("ConcavePolygonShape3D");
      let methodname = new StringName("set_backface_collision_enabled");
      this._bindings.method_set_backface_collision_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
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
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_faces,
      this._owner,
      _faces
    );
  }
  get_faces() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_faces,
      this._owner,
			Variant.Type.PACKED_VECTOR3_ARRAY
    ,
      
    );
  }
  set_backface_collision_enabled(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_backface_collision_enabled,
      this._owner,
      _enabled
    );
  }
  is_backface_collision_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_backface_collision_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
}