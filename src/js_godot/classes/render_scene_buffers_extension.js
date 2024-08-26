import * as internal from '__internal__';
import { RenderSceneBuffers } from 'src/js_godot/classesrender_scene_buffers'
class _MethodBindings {
    method__configure;
    method__set_fsr_sharpness;
    method__set_texture_mipmap_bias;
    method__set_use_debanding;
}


export class RenderSceneBuffersExtension extends RenderSceneBuffers{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("RenderSceneBuffersExtension");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("RenderSceneBuffersExtension");
      let methodname = new StringName("_configure");
      this._bindings.method__configure = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("RenderSceneBuffersExtension");
      let methodname = new StringName("_set_fsr_sharpness");
      this._bindings.method__set_fsr_sharpness = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("RenderSceneBuffersExtension");
      let methodname = new StringName("_set_texture_mipmap_bias");
      this._bindings.method__set_texture_mipmap_bias = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("RenderSceneBuffersExtension");
      let methodname = new StringName("_set_use_debanding");
      this._bindings.method__set_use_debanding = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
  }
  _configure(_config) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__configure,
      this._owner,
      _config
    );
  }
  _set_fsr_sharpness(_fsr_sharpness) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__set_fsr_sharpness,
      this._owner,
      _fsr_sharpness
    );
  }
  _set_texture_mipmap_bias(_texture_mipmap_bias) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__set_texture_mipmap_bias,
      this._owner,
      _texture_mipmap_bias
    );
  }
  _set_use_debanding(_use_debanding) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__set_use_debanding,
      this._owner,
      _use_debanding
    );
  }
}