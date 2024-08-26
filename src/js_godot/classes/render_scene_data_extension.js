import * as internal from '__internal__';
import { RenderSceneData } from 'src/js_godot/classesrender_scene_data'
import { Vector3 } from 'src/js_godot/variant/vector3'
import { Transform3D } from 'src/js_godot/variant/transform3d'
import { RID } from 'src/js_godot/variant/rid'
import { Projection } from 'src/js_godot/variant/projection'
class _MethodBindings {
    method__get_cam_transform;
    method__get_cam_projection;
    method__get_view_count;
    method__get_view_eye_offset;
    method__get_view_projection;
    method__get_uniform_buffer;
}


export class RenderSceneDataExtension extends RenderSceneData{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("RenderSceneDataExtension");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("RenderSceneDataExtension");
      let methodname = new StringName("_get_cam_transform");
      this._bindings.method__get_cam_transform = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("RenderSceneDataExtension");
      let methodname = new StringName("_get_cam_projection");
      this._bindings.method__get_cam_projection = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("RenderSceneDataExtension");
      let methodname = new StringName("_get_view_count");
      this._bindings.method__get_view_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("RenderSceneDataExtension");
      let methodname = new StringName("_get_view_eye_offset");
      this._bindings.method__get_view_eye_offset = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("RenderSceneDataExtension");
      let methodname = new StringName("_get_view_projection");
      this._bindings.method__get_view_projection = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("RenderSceneDataExtension");
      let methodname = new StringName("_get_uniform_buffer");
      this._bindings.method__get_uniform_buffer = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
  }
  _get_cam_transform() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_cam_transform,
      this._owner,
			Variant.Type.TRANSFORM3D
    ,
      
    );
  }
  _get_cam_projection() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_cam_projection,
      this._owner,
			Variant.Type.PROJECTION
    ,
      
    );
  }
  _get_view_count() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_view_count,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  _get_view_eye_offset(_view) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_view_eye_offset,
      this._owner,
			Variant.Type.VECTOR3
    ,
      _view
    );
  }
  _get_view_projection(_view) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_view_projection,
      this._owner,
			Variant.Type.PROJECTION
    ,
      _view
    );
  }
  _get_uniform_buffer() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_uniform_buffer,
      this._owner,
			Variant.Type.RID
    ,
      
    );
  }
}