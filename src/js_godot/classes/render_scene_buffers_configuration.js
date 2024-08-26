import * as internal from '__internal__';
import { Vector2i } from 'src/js_godot/variant/vector2i'
import { RefCounted } from 'src/js_godot/classesref_counted'
import { RID } from 'src/js_godot/variant/rid'
class _MethodBindings {
    method_get_render_target;
    method_set_render_target;
    method_get_internal_size;
    method_set_internal_size;
    method_get_target_size;
    method_set_target_size;
    method_get_view_count;
    method_set_view_count;
    method_get_scaling_3d_mode;
    method_set_scaling_3d_mode;
    method_get_msaa_3d;
    method_set_msaa_3d;
    method_get_screen_space_aa;
    method_set_screen_space_aa;
    method_get_fsr_sharpness;
    method_set_fsr_sharpness;
    method_get_texture_mipmap_bias;
    method_set_texture_mipmap_bias;
}


export class RenderSceneBuffersConfiguration extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("RenderSceneBuffersConfiguration");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("RenderSceneBuffersConfiguration");
      let methodname = new StringName("get_render_target");
      this._bindings.method_get_render_target = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2944877500
      );
    }
    {
      let classname = new StringName("RenderSceneBuffersConfiguration");
      let methodname = new StringName("set_render_target");
      this._bindings.method_set_render_target = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2722037293
      );
    }
    {
      let classname = new StringName("RenderSceneBuffersConfiguration");
      let methodname = new StringName("get_internal_size");
      this._bindings.method_get_internal_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3690982128
      );
    }
    {
      let classname = new StringName("RenderSceneBuffersConfiguration");
      let methodname = new StringName("set_internal_size");
      this._bindings.method_set_internal_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1130785943
      );
    }
    {
      let classname = new StringName("RenderSceneBuffersConfiguration");
      let methodname = new StringName("get_target_size");
      this._bindings.method_get_target_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3690982128
      );
    }
    {
      let classname = new StringName("RenderSceneBuffersConfiguration");
      let methodname = new StringName("set_target_size");
      this._bindings.method_set_target_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1130785943
      );
    }
    {
      let classname = new StringName("RenderSceneBuffersConfiguration");
      let methodname = new StringName("get_view_count");
      this._bindings.method_get_view_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("RenderSceneBuffersConfiguration");
      let methodname = new StringName("set_view_count");
      this._bindings.method_set_view_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1286410249
      );
    }
    {
      let classname = new StringName("RenderSceneBuffersConfiguration");
      let methodname = new StringName("get_scaling_3d_mode");
      this._bindings.method_get_scaling_3d_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        976778074
      );
    }
    {
      let classname = new StringName("RenderSceneBuffersConfiguration");
      let methodname = new StringName("set_scaling_3d_mode");
      this._bindings.method_set_scaling_3d_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        447477857
      );
    }
    {
      let classname = new StringName("RenderSceneBuffersConfiguration");
      let methodname = new StringName("get_msaa_3d");
      this._bindings.method_get_msaa_3d = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3109158617
      );
    }
    {
      let classname = new StringName("RenderSceneBuffersConfiguration");
      let methodname = new StringName("set_msaa_3d");
      this._bindings.method_set_msaa_3d = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3952630748
      );
    }
    {
      let classname = new StringName("RenderSceneBuffersConfiguration");
      let methodname = new StringName("get_screen_space_aa");
      this._bindings.method_get_screen_space_aa = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        641513172
      );
    }
    {
      let classname = new StringName("RenderSceneBuffersConfiguration");
      let methodname = new StringName("set_screen_space_aa");
      this._bindings.method_set_screen_space_aa = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        139543108
      );
    }
    {
      let classname = new StringName("RenderSceneBuffersConfiguration");
      let methodname = new StringName("get_fsr_sharpness");
      this._bindings.method_get_fsr_sharpness = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("RenderSceneBuffersConfiguration");
      let methodname = new StringName("set_fsr_sharpness");
      this._bindings.method_set_fsr_sharpness = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("RenderSceneBuffersConfiguration");
      let methodname = new StringName("get_texture_mipmap_bias");
      this._bindings.method_get_texture_mipmap_bias = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("RenderSceneBuffersConfiguration");
      let methodname = new StringName("set_texture_mipmap_bias");
      this._bindings.method_set_texture_mipmap_bias = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
  }
  get_render_target() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_render_target,
      this._owner,
			Variant.Type.RID
    ,
      
    );
  }
  set_render_target(_render_target) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_render_target,
      this._owner,
      _render_target
    );
  }
  get_internal_size() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_internal_size,
      this._owner,
			Variant.Type.VECTOR2I
    ,
      
    );
  }
  set_internal_size(_internal_size) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_internal_size,
      this._owner,
      _internal_size
    );
  }
  get_target_size() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_target_size,
      this._owner,
			Variant.Type.VECTOR2I
    ,
      
    );
  }
  set_target_size(_target_size) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_target_size,
      this._owner,
      _target_size
    );
  }
  get_view_count() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_view_count,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  set_view_count(_view_count) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_view_count,
      this._owner,
      _view_count
    );
  }
  get_scaling_3d_mode() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_scaling_3d_mode,
      this._owner,
			Variant.INT,
      
    );
  }
  set_scaling_3d_mode(_scaling_3d_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_scaling_3d_mode,
      this._owner,
      _scaling_3d_mode
    );
  }
  get_msaa_3d() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_msaa_3d,
      this._owner,
			Variant.INT,
      
    );
  }
  set_msaa_3d(_msaa_3d) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_msaa_3d,
      this._owner,
      _msaa_3d
    );
  }
  get_screen_space_aa() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_screen_space_aa,
      this._owner,
			Variant.INT,
      
    );
  }
  set_screen_space_aa(_screen_space_aa) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_screen_space_aa,
      this._owner,
      _screen_space_aa
    );
  }
  get_fsr_sharpness() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_fsr_sharpness,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_fsr_sharpness(_fsr_sharpness) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_fsr_sharpness,
      this._owner,
      _fsr_sharpness
    );
  }
  get_texture_mipmap_bias() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_texture_mipmap_bias,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_texture_mipmap_bias(_texture_mipmap_bias) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_texture_mipmap_bias,
      this._owner,
      _texture_mipmap_bias
    );
  }
}