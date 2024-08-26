import * as internal from '__internal__';
import { RID } from 'src/js_godot/variant/rid'
import { RenderData } from 'src/js_godot/classesrender_data'
class _MethodBindings {
    method__get_render_scene_buffers;
    method__get_render_scene_data;
    method__get_environment;
    method__get_camera_attributes;
}


export class RenderDataExtension extends RenderData{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("RenderDataExtension");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("RenderDataExtension");
      let methodname = new StringName("_get_render_scene_buffers");
      this._bindings.method__get_render_scene_buffers = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("RenderDataExtension");
      let methodname = new StringName("_get_render_scene_data");
      this._bindings.method__get_render_scene_data = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("RenderDataExtension");
      let methodname = new StringName("_get_environment");
      this._bindings.method__get_environment = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("RenderDataExtension");
      let methodname = new StringName("_get_camera_attributes");
      this._bindings.method__get_camera_attributes = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
  }
  _get_render_scene_buffers() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_render_scene_buffers,
      this._owner,
			Variant.INT,
      
    );
  }
  _get_render_scene_data() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_render_scene_data,
      this._owner,
			Variant.INT,
      
    );
  }
  _get_environment() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_environment,
      this._owner,
			Variant.Type.RID
    ,
      
    );
  }
  _get_camera_attributes() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_camera_attributes,
      this._owner,
			Variant.Type.RID
    ,
      
    );
  }
}