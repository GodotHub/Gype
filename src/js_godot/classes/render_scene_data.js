import * as internal from '__internal__';
import { Vector3 } from 'src/js_godot/variant/vector3'
import { GodotObject } from 'src/js_godot/classesgodot_object'
import { Transform3D } from 'src/js_godot/variant/transform3d'
import { RID } from 'src/js_godot/variant/rid'
import { Projection } from 'src/js_godot/variant/projection'
class _MethodBindings {
    method_get_cam_transform;
    method_get_cam_projection;
    method_get_view_count;
    method_get_view_eye_offset;
    method_get_view_projection;
    method_get_uniform_buffer;
}


export class RenderSceneData extends GodotObject{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("RenderSceneData");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("RenderSceneData");
      let methodname = new StringName("get_cam_transform");
      this._bindings.method_get_cam_transform = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3229777777
      );
    }
    {
      let classname = new StringName("RenderSceneData");
      let methodname = new StringName("get_cam_projection");
      this._bindings.method_get_cam_projection = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2910717950
      );
    }
    {
      let classname = new StringName("RenderSceneData");
      let methodname = new StringName("get_view_count");
      this._bindings.method_get_view_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("RenderSceneData");
      let methodname = new StringName("get_view_eye_offset");
      this._bindings.method_get_view_eye_offset = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        711720468
      );
    }
    {
      let classname = new StringName("RenderSceneData");
      let methodname = new StringName("get_view_projection");
      this._bindings.method_get_view_projection = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3179846605
      );
    }
    {
      let classname = new StringName("RenderSceneData");
      let methodname = new StringName("get_uniform_buffer");
      this._bindings.method_get_uniform_buffer = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2944877500
      );
    }
  }
  get_cam_transform() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_cam_transform,
      this._owner,
			Variant.Type.TRANSFORM3D
    ,
      
    );
  }
  get_cam_projection() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_cam_projection,
      this._owner,
			Variant.Type.PROJECTION
    ,
      
    );
  }
  get_view_count() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_view_count,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  get_view_eye_offset(_view) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_view_eye_offset,
      this._owner,
			Variant.Type.VECTOR3
    ,
      _view
    );
  }
  get_view_projection(_view) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_view_projection,
      this._owner,
			Variant.Type.PROJECTION
    ,
      _view
    );
  }
  get_uniform_buffer() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_uniform_buffer,
      this._owner,
			Variant.Type.RID
    ,
      
    );
  }
}