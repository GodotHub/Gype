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
  method_get_cam_transform;
  method_get_cam_projection;
  method_get_view_count;
  method_get_view_eye_offset;
  method_get_view_projection;
  method_get_uniform_buffer;
}
export class RenderSceneData extends GodotObject{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("RenderSceneData");
    } else {
      super(godot_object);
    }
  }
  static init_method_get_cam_transform() {
    if (!this.#_bindings.method_get_cam_transform) {
      let classname = new StringName("RenderSceneData");
      let methodname = new StringName("get_cam_transform");
      this.#_bindings.method_get_cam_transform = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3229777777
      );
    }
  }
  static init_method_get_cam_projection() {
    if (!this.#_bindings.method_get_cam_projection) {
      let classname = new StringName("RenderSceneData");
      let methodname = new StringName("get_cam_projection");
      this.#_bindings.method_get_cam_projection = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2910717950
      );
    }
  }
  static init_method_get_view_count() {
    if (!this.#_bindings.method_get_view_count) {
      let classname = new StringName("RenderSceneData");
      let methodname = new StringName("get_view_count");
      this.#_bindings.method_get_view_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_get_view_eye_offset() {
    if (!this.#_bindings.method_get_view_eye_offset) {
      let classname = new StringName("RenderSceneData");
      let methodname = new StringName("get_view_eye_offset");
      this.#_bindings.method_get_view_eye_offset = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        711720468
      );
    }
  }
  static init_method_get_view_projection() {
    if (!this.#_bindings.method_get_view_projection) {
      let classname = new StringName("RenderSceneData");
      let methodname = new StringName("get_view_projection");
      this.#_bindings.method_get_view_projection = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3179846605
      );
    }
  }
  static init_method_get_uniform_buffer() {
    if (!this.#_bindings.method_get_uniform_buffer) {
      let classname = new StringName("RenderSceneData");
      let methodname = new StringName("get_uniform_buffer");
      this.#_bindings.method_get_uniform_buffer = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2944877500
      );
    }
  }

  
  
  get_cam_transform() {
    RenderSceneData.init_method_get_cam_transform();
    return _call_native_mb_ret(
      RenderSceneData.#_bindings.method_get_cam_transform,
      this._owner,
			Variant.Type.TRANSFORM3D,
    
      
    );
    
  }
  get_cam_projection() {
    RenderSceneData.init_method_get_cam_projection();
    return _call_native_mb_ret(
      RenderSceneData.#_bindings.method_get_cam_projection,
      this._owner,
			Variant.Type.PROJECTION,
    
      
    );
    
  }
  get_view_count() {
    RenderSceneData.init_method_get_view_count();
    return _call_native_mb_ret(
      RenderSceneData.#_bindings.method_get_view_count,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_view_eye_offset(_view) {
    RenderSceneData.init_method_get_view_eye_offset();
    return _call_native_mb_ret(
      RenderSceneData.#_bindings.method_get_view_eye_offset,
      this._owner,
			Variant.Type.VECTOR3,
    
      _view
    );
    
  }
  get_view_projection(_view) {
    RenderSceneData.init_method_get_view_projection();
    return _call_native_mb_ret(
      RenderSceneData.#_bindings.method_get_view_projection,
      this._owner,
			Variant.Type.PROJECTION,
    
      _view
    );
    
  }
  get_uniform_buffer() {
    RenderSceneData.init_method_get_uniform_buffer();
    return _call_native_mb_ret(
      RenderSceneData.#_bindings.method_get_uniform_buffer,
      this._owner,
			Variant.Type.RID,
    
      
    );
    
  }
  

}