import * as internal from '__internal__';
import { GPUParticlesCollision3D } from 'src/js_godot/classesgpu_particles_collision3d'
import { Vector3 } from 'src/js_godot/variant/vector3'
class _MethodBindings {
    method_set_size;
    method_get_size;
    method_set_resolution;
    method_get_resolution;
    method_set_update_mode;
    method_get_update_mode;
    method_set_follow_camera_enabled;
    method_is_follow_camera_enabled;
}


export class GPUParticlesCollisionHeightField3D extends GPUParticlesCollision3D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("GPUParticlesCollisionHeightField3D");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("GPUParticlesCollisionHeightField3D");
      let methodname = new StringName("set_size");
      this._bindings.method_set_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3460891852
      );
    }
    {
      let classname = new StringName("GPUParticlesCollisionHeightField3D");
      let methodname = new StringName("get_size");
      this._bindings.method_get_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3360562783
      );
    }
    {
      let classname = new StringName("GPUParticlesCollisionHeightField3D");
      let methodname = new StringName("set_resolution");
      this._bindings.method_set_resolution = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1009996517
      );
    }
    {
      let classname = new StringName("GPUParticlesCollisionHeightField3D");
      let methodname = new StringName("get_resolution");
      this._bindings.method_get_resolution = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1156065644
      );
    }
    {
      let classname = new StringName("GPUParticlesCollisionHeightField3D");
      let methodname = new StringName("set_update_mode");
      this._bindings.method_set_update_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        673680859
      );
    }
    {
      let classname = new StringName("GPUParticlesCollisionHeightField3D");
      let methodname = new StringName("get_update_mode");
      this._bindings.method_get_update_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1998141380
      );
    }
    {
      let classname = new StringName("GPUParticlesCollisionHeightField3D");
      let methodname = new StringName("set_follow_camera_enabled");
      this._bindings.method_set_follow_camera_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("GPUParticlesCollisionHeightField3D");
      let methodname = new StringName("is_follow_camera_enabled");
      this._bindings.method_is_follow_camera_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
  }
  set_size(_size) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_size,
      this._owner,
      _size
    );
  }
  get_size() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_size,
      this._owner,
			Variant.Type.VECTOR3
    ,
      
    );
  }
  set_resolution(_resolution) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_resolution,
      this._owner,
      _resolution
    );
  }
  get_resolution() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_resolution,
      this._owner,
			Variant.INT,
      
    );
  }
  set_update_mode(_update_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_update_mode,
      this._owner,
      _update_mode
    );
  }
  get_update_mode() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_update_mode,
      this._owner,
			Variant.INT,
      
    );
  }
  set_follow_camera_enabled(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_follow_camera_enabled,
      this._owner,
      _enabled
    );
  }
  is_follow_camera_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_follow_camera_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  static Resolution = {
    RESOLUTION_256: 0,
    RESOLUTION_512: 1,
    RESOLUTION_1024: 2,
    RESOLUTION_2048: 3,
    RESOLUTION_4096: 4,
    RESOLUTION_8192: 5,
    RESOLUTION_MAX: 6,
  }
  static UpdateMode = {
    UPDATE_MODE_WHEN_MOVED: 0,
    UPDATE_MODE_ALWAYS: 1,
  }
}