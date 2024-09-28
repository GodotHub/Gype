import * as internal from '__internal__';
import { RenderSceneBuffers } from '@js_godot/classes/render_scene_buffers'
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
  method_has_texture;
  method_create_texture;
  method_create_texture_from_format;
  method_create_texture_view;
  method_get_texture;
  method_get_texture_format;
  method_get_texture_slice;
  method_get_texture_slice_view;
  method_get_texture_slice_size;
  method_clear_context;
  method_get_color_texture;
  method_get_color_layer;
  method_get_depth_texture;
  method_get_depth_layer;
  method_get_velocity_texture;
  method_get_velocity_layer;
  method_get_render_target;
  method_get_view_count;
  method_get_internal_size;
  method_get_target_size;
  method_get_scaling_3d_mode;
  method_get_fsr_sharpness;
  method_get_msaa_3d;
  method_get_texture_samples;
  method_get_screen_space_aa;
  method_get_use_taa;
  method_get_use_debanding;
}
@GodotClass
export class RenderSceneBuffersRD extends RenderSceneBuffers{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("RenderSceneBuffersRD");
    } else {
      super(godot_object);
    }
  }
  static init_method_has_texture() {
    if (!this._bindings.method_has_texture) {
      let classname = new StringName("RenderSceneBuffersRD");
      let methodname = new StringName("has_texture");
      this._bindings.method_has_texture = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        471820014
      );
    }
  }
  static init_method_create_texture() {
    if (!this._bindings.method_create_texture) {
      let classname = new StringName("RenderSceneBuffersRD");
      let methodname = new StringName("create_texture");
      this._bindings.method_create_texture = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3559915770
      );
    }
  }
  static init_method_create_texture_from_format() {
    if (!this._bindings.method_create_texture_from_format) {
      let classname = new StringName("RenderSceneBuffersRD");
      let methodname = new StringName("create_texture_from_format");
      this._bindings.method_create_texture_from_format = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3344669382
      );
    }
  }
  static init_method_create_texture_view() {
    if (!this._bindings.method_create_texture_view) {
      let classname = new StringName("RenderSceneBuffersRD");
      let methodname = new StringName("create_texture_view");
      this._bindings.method_create_texture_view = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        283055834
      );
    }
  }
  static init_method_get_texture() {
    if (!this._bindings.method_get_texture) {
      let classname = new StringName("RenderSceneBuffersRD");
      let methodname = new StringName("get_texture");
      this._bindings.method_get_texture = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        750006389
      );
    }
  }
  static init_method_get_texture_format() {
    if (!this._bindings.method_get_texture_format) {
      let classname = new StringName("RenderSceneBuffersRD");
      let methodname = new StringName("get_texture_format");
      this._bindings.method_get_texture_format = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        371461758
      );
    }
  }
  static init_method_get_texture_slice() {
    if (!this._bindings.method_get_texture_slice) {
      let classname = new StringName("RenderSceneBuffersRD");
      let methodname = new StringName("get_texture_slice");
      this._bindings.method_get_texture_slice = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        588440706
      );
    }
  }
  static init_method_get_texture_slice_view() {
    if (!this._bindings.method_get_texture_slice_view) {
      let classname = new StringName("RenderSceneBuffersRD");
      let methodname = new StringName("get_texture_slice_view");
      this._bindings.method_get_texture_slice_view = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        682451778
      );
    }
  }
  static init_method_get_texture_slice_size() {
    if (!this._bindings.method_get_texture_slice_size) {
      let classname = new StringName("RenderSceneBuffersRD");
      let methodname = new StringName("get_texture_slice_size");
      this._bindings.method_get_texture_slice_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2617625368
      );
    }
  }
  static init_method_clear_context() {
    if (!this._bindings.method_clear_context) {
      let classname = new StringName("RenderSceneBuffersRD");
      let methodname = new StringName("clear_context");
      this._bindings.method_clear_context = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3304788590
      );
    }
  }
  static init_method_get_color_texture() {
    if (!this._bindings.method_get_color_texture) {
      let classname = new StringName("RenderSceneBuffersRD");
      let methodname = new StringName("get_color_texture");
      this._bindings.method_get_color_texture = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3050822880
      );
    }
  }
  static init_method_get_color_layer() {
    if (!this._bindings.method_get_color_layer) {
      let classname = new StringName("RenderSceneBuffersRD");
      let methodname = new StringName("get_color_layer");
      this._bindings.method_get_color_layer = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3087988589
      );
    }
  }
  static init_method_get_depth_texture() {
    if (!this._bindings.method_get_depth_texture) {
      let classname = new StringName("RenderSceneBuffersRD");
      let methodname = new StringName("get_depth_texture");
      this._bindings.method_get_depth_texture = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3050822880
      );
    }
  }
  static init_method_get_depth_layer() {
    if (!this._bindings.method_get_depth_layer) {
      let classname = new StringName("RenderSceneBuffersRD");
      let methodname = new StringName("get_depth_layer");
      this._bindings.method_get_depth_layer = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3087988589
      );
    }
  }
  static init_method_get_velocity_texture() {
    if (!this._bindings.method_get_velocity_texture) {
      let classname = new StringName("RenderSceneBuffersRD");
      let methodname = new StringName("get_velocity_texture");
      this._bindings.method_get_velocity_texture = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3050822880
      );
    }
  }
  static init_method_get_velocity_layer() {
    if (!this._bindings.method_get_velocity_layer) {
      let classname = new StringName("RenderSceneBuffersRD");
      let methodname = new StringName("get_velocity_layer");
      this._bindings.method_get_velocity_layer = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3087988589
      );
    }
  }
  static init_method_get_render_target() {
    if (!this._bindings.method_get_render_target) {
      let classname = new StringName("RenderSceneBuffersRD");
      let methodname = new StringName("get_render_target");
      this._bindings.method_get_render_target = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2944877500
      );
    }
  }
  static init_method_get_view_count() {
    if (!this._bindings.method_get_view_count) {
      let classname = new StringName("RenderSceneBuffersRD");
      let methodname = new StringName("get_view_count");
      this._bindings.method_get_view_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_get_internal_size() {
    if (!this._bindings.method_get_internal_size) {
      let classname = new StringName("RenderSceneBuffersRD");
      let methodname = new StringName("get_internal_size");
      this._bindings.method_get_internal_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3690982128
      );
    }
  }
  static init_method_get_target_size() {
    if (!this._bindings.method_get_target_size) {
      let classname = new StringName("RenderSceneBuffersRD");
      let methodname = new StringName("get_target_size");
      this._bindings.method_get_target_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3690982128
      );
    }
  }
  static init_method_get_scaling_3d_mode() {
    if (!this._bindings.method_get_scaling_3d_mode) {
      let classname = new StringName("RenderSceneBuffersRD");
      let methodname = new StringName("get_scaling_3d_mode");
      this._bindings.method_get_scaling_3d_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        976778074
      );
    }
  }
  static init_method_get_fsr_sharpness() {
    if (!this._bindings.method_get_fsr_sharpness) {
      let classname = new StringName("RenderSceneBuffersRD");
      let methodname = new StringName("get_fsr_sharpness");
      this._bindings.method_get_fsr_sharpness = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_get_msaa_3d() {
    if (!this._bindings.method_get_msaa_3d) {
      let classname = new StringName("RenderSceneBuffersRD");
      let methodname = new StringName("get_msaa_3d");
      this._bindings.method_get_msaa_3d = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3109158617
      );
    }
  }
  static init_method_get_texture_samples() {
    if (!this._bindings.method_get_texture_samples) {
      let classname = new StringName("RenderSceneBuffersRD");
      let methodname = new StringName("get_texture_samples");
      this._bindings.method_get_texture_samples = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        407791724
      );
    }
  }
  static init_method_get_screen_space_aa() {
    if (!this._bindings.method_get_screen_space_aa) {
      let classname = new StringName("RenderSceneBuffersRD");
      let methodname = new StringName("get_screen_space_aa");
      this._bindings.method_get_screen_space_aa = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        641513172
      );
    }
  }
  static init_method_get_use_taa() {
    if (!this._bindings.method_get_use_taa) {
      let classname = new StringName("RenderSceneBuffersRD");
      let methodname = new StringName("get_use_taa");
      this._bindings.method_get_use_taa = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_get_use_debanding() {
    if (!this._bindings.method_get_use_debanding) {
      let classname = new StringName("RenderSceneBuffersRD");
      let methodname = new StringName("get_use_debanding");
      this._bindings.method_get_use_debanding = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }

  
  
  has_texture(_context, _name) {
    RenderSceneBuffersRD.init_method_has_texture();
    return _call_native_mb_ret(
      RenderSceneBuffersRD._bindings.method_has_texture,
      this._owner,
			Variant.Type.BOOL,
    
      _context, _name
    );
    
  }
  create_texture(_context, _name, _data_format, _usage_bits, _texture_samples, _size, _layers, _mipmaps, _unique) {
    RenderSceneBuffersRD.init_method_create_texture();
    return _call_native_mb_ret(
      RenderSceneBuffersRD._bindings.method_create_texture,
      this._owner,
			Variant.Type.RID,
    
      _context, _name, _data_format, _usage_bits, _texture_samples, _size, _layers, _mipmaps, _unique
    );
    
  }
  create_texture_from_format(_context, _name, _format, _view, _unique) {
    RenderSceneBuffersRD.init_method_create_texture_from_format();
    return _call_native_mb_ret(
      RenderSceneBuffersRD._bindings.method_create_texture_from_format,
      this._owner,
			Variant.Type.RID,
    
      _context, _name, _format, _view, _unique
    );
    
  }
  create_texture_view(_context, _name, _view_name, _view) {
    RenderSceneBuffersRD.init_method_create_texture_view();
    return _call_native_mb_ret(
      RenderSceneBuffersRD._bindings.method_create_texture_view,
      this._owner,
			Variant.Type.RID,
    
      _context, _name, _view_name, _view
    );
    
  }
  get_texture(_context, _name) {
    RenderSceneBuffersRD.init_method_get_texture();
    return _call_native_mb_ret(
      RenderSceneBuffersRD._bindings.method_get_texture,
      this._owner,
			Variant.Type.RID,
    
      _context, _name
    );
    
  }
  get_texture_format(_context, _name) {
    RenderSceneBuffersRD.init_method_get_texture_format();
    return _call_native_mb_ret(
      RenderSceneBuffersRD._bindings.method_get_texture_format,
      this._owner,
			Variant.Type.OBJECT,
      _context, _name
    );
    
  }
  get_texture_slice(_context, _name, _layer, _mipmap, _layers, _mipmaps) {
    RenderSceneBuffersRD.init_method_get_texture_slice();
    return _call_native_mb_ret(
      RenderSceneBuffersRD._bindings.method_get_texture_slice,
      this._owner,
			Variant.Type.RID,
    
      _context, _name, _layer, _mipmap, _layers, _mipmaps
    );
    
  }
  get_texture_slice_view(_context, _name, _layer, _mipmap, _layers, _mipmaps, _view) {
    RenderSceneBuffersRD.init_method_get_texture_slice_view();
    return _call_native_mb_ret(
      RenderSceneBuffersRD._bindings.method_get_texture_slice_view,
      this._owner,
			Variant.Type.RID,
    
      _context, _name, _layer, _mipmap, _layers, _mipmaps, _view
    );
    
  }
  get_texture_slice_size(_context, _name, _mipmap) {
    RenderSceneBuffersRD.init_method_get_texture_slice_size();
    return _call_native_mb_ret(
      RenderSceneBuffersRD._bindings.method_get_texture_slice_size,
      this._owner,
			Variant.Type.VECTOR2I,
    
      _context, _name, _mipmap
    );
    
  }
  clear_context(_context) {
    RenderSceneBuffersRD.init_method_clear_context();
    return _call_native_mb_no_ret(
      RenderSceneBuffersRD._bindings.method_clear_context,
      this._owner,
      _context
    );
    
  }
  get_color_texture(_msaa) {
    RenderSceneBuffersRD.init_method_get_color_texture();
    return _call_native_mb_ret(
      RenderSceneBuffersRD._bindings.method_get_color_texture,
      this._owner,
			Variant.Type.RID,
    
      _msaa
    );
    
  }
  get_color_layer(_layer, _msaa) {
    RenderSceneBuffersRD.init_method_get_color_layer();
    return _call_native_mb_ret(
      RenderSceneBuffersRD._bindings.method_get_color_layer,
      this._owner,
			Variant.Type.RID,
    
      _layer, _msaa
    );
    
  }
  get_depth_texture(_msaa) {
    RenderSceneBuffersRD.init_method_get_depth_texture();
    return _call_native_mb_ret(
      RenderSceneBuffersRD._bindings.method_get_depth_texture,
      this._owner,
			Variant.Type.RID,
    
      _msaa
    );
    
  }
  get_depth_layer(_layer, _msaa) {
    RenderSceneBuffersRD.init_method_get_depth_layer();
    return _call_native_mb_ret(
      RenderSceneBuffersRD._bindings.method_get_depth_layer,
      this._owner,
			Variant.Type.RID,
    
      _layer, _msaa
    );
    
  }
  get_velocity_texture(_msaa) {
    RenderSceneBuffersRD.init_method_get_velocity_texture();
    return _call_native_mb_ret(
      RenderSceneBuffersRD._bindings.method_get_velocity_texture,
      this._owner,
			Variant.Type.RID,
    
      _msaa
    );
    
  }
  get_velocity_layer(_layer, _msaa) {
    RenderSceneBuffersRD.init_method_get_velocity_layer();
    return _call_native_mb_ret(
      RenderSceneBuffersRD._bindings.method_get_velocity_layer,
      this._owner,
			Variant.Type.RID,
    
      _layer, _msaa
    );
    
  }
  get_render_target() {
    RenderSceneBuffersRD.init_method_get_render_target();
    return _call_native_mb_ret(
      RenderSceneBuffersRD._bindings.method_get_render_target,
      this._owner,
			Variant.Type.RID,
    
      
    );
    
  }
  get_view_count() {
    RenderSceneBuffersRD.init_method_get_view_count();
    return _call_native_mb_ret(
      RenderSceneBuffersRD._bindings.method_get_view_count,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_internal_size() {
    RenderSceneBuffersRD.init_method_get_internal_size();
    return _call_native_mb_ret(
      RenderSceneBuffersRD._bindings.method_get_internal_size,
      this._owner,
			Variant.Type.VECTOR2I,
    
      
    );
    
  }
  get_target_size() {
    RenderSceneBuffersRD.init_method_get_target_size();
    return _call_native_mb_ret(
      RenderSceneBuffersRD._bindings.method_get_target_size,
      this._owner,
			Variant.Type.VECTOR2I,
    
      
    );
    
  }
  get_scaling_3d_mode() {
    RenderSceneBuffersRD.init_method_get_scaling_3d_mode();
    return _call_native_mb_ret(
      RenderSceneBuffersRD._bindings.method_get_scaling_3d_mode,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_fsr_sharpness() {
    RenderSceneBuffersRD.init_method_get_fsr_sharpness();
    return _call_native_mb_ret(
      RenderSceneBuffersRD._bindings.method_get_fsr_sharpness,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  get_msaa_3d() {
    RenderSceneBuffersRD.init_method_get_msaa_3d();
    return _call_native_mb_ret(
      RenderSceneBuffersRD._bindings.method_get_msaa_3d,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_texture_samples() {
    RenderSceneBuffersRD.init_method_get_texture_samples();
    return _call_native_mb_ret(
      RenderSceneBuffersRD._bindings.method_get_texture_samples,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_screen_space_aa() {
    RenderSceneBuffersRD.init_method_get_screen_space_aa();
    return _call_native_mb_ret(
      RenderSceneBuffersRD._bindings.method_get_screen_space_aa,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_use_taa() {
    RenderSceneBuffersRD.init_method_get_use_taa();
    return _call_native_mb_ret(
      RenderSceneBuffersRD._bindings.method_get_use_taa,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  get_use_debanding() {
    RenderSceneBuffersRD.init_method_get_use_debanding();
    return _call_native_mb_ret(
      RenderSceneBuffersRD._bindings.method_get_use_debanding,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  

}