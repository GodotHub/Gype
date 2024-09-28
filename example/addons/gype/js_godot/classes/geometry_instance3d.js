import * as internal from '__internal__';
import { VisualInstance3D } from '@js_godot/classes/visual_instance3d'
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
  method_set_material_override;
  method_get_material_override;
  method_set_material_overlay;
  method_get_material_overlay;
  method_set_cast_shadows_setting;
  method_get_cast_shadows_setting;
  method_set_lod_bias;
  method_get_lod_bias;
  method_set_transparency;
  method_get_transparency;
  method_set_visibility_range_end_margin;
  method_get_visibility_range_end_margin;
  method_set_visibility_range_end;
  method_get_visibility_range_end;
  method_set_visibility_range_begin_margin;
  method_get_visibility_range_begin_margin;
  method_set_visibility_range_begin;
  method_get_visibility_range_begin;
  method_set_visibility_range_fade_mode;
  method_get_visibility_range_fade_mode;
  method_set_instance_shader_parameter;
  method_get_instance_shader_parameter;
  method_set_extra_cull_margin;
  method_get_extra_cull_margin;
  method_set_lightmap_scale;
  method_get_lightmap_scale;
  method_set_gi_mode;
  method_get_gi_mode;
  method_set_ignore_occlusion_culling;
  method_is_ignoring_occlusion_culling;
  method_set_custom_aabb;
  method_get_custom_aabb;
}
@GodotClass
export class GeometryInstance3D extends VisualInstance3D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("GeometryInstance3D");
    } else {
      super(godot_object);
    }
  }
  static init_method_set_material_override() {
    if (!this._bindings.method_set_material_override) {
      let classname = new StringName("GeometryInstance3D");
      let methodname = new StringName("set_material_override");
      this._bindings.method_set_material_override = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2757459619
      );
    }
  }
  static init_method_get_material_override() {
    if (!this._bindings.method_get_material_override) {
      let classname = new StringName("GeometryInstance3D");
      let methodname = new StringName("get_material_override");
      this._bindings.method_get_material_override = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        5934680
      );
    }
  }
  static init_method_set_material_overlay() {
    if (!this._bindings.method_set_material_overlay) {
      let classname = new StringName("GeometryInstance3D");
      let methodname = new StringName("set_material_overlay");
      this._bindings.method_set_material_overlay = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2757459619
      );
    }
  }
  static init_method_get_material_overlay() {
    if (!this._bindings.method_get_material_overlay) {
      let classname = new StringName("GeometryInstance3D");
      let methodname = new StringName("get_material_overlay");
      this._bindings.method_get_material_overlay = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        5934680
      );
    }
  }
  static init_method_set_cast_shadows_setting() {
    if (!this._bindings.method_set_cast_shadows_setting) {
      let classname = new StringName("GeometryInstance3D");
      let methodname = new StringName("set_cast_shadows_setting");
      this._bindings.method_set_cast_shadows_setting = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        856677339
      );
    }
  }
  static init_method_get_cast_shadows_setting() {
    if (!this._bindings.method_get_cast_shadows_setting) {
      let classname = new StringName("GeometryInstance3D");
      let methodname = new StringName("get_cast_shadows_setting");
      this._bindings.method_get_cast_shadows_setting = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3383019359
      );
    }
  }
  static init_method_set_lod_bias() {
    if (!this._bindings.method_set_lod_bias) {
      let classname = new StringName("GeometryInstance3D");
      let methodname = new StringName("set_lod_bias");
      this._bindings.method_set_lod_bias = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_lod_bias() {
    if (!this._bindings.method_get_lod_bias) {
      let classname = new StringName("GeometryInstance3D");
      let methodname = new StringName("get_lod_bias");
      this._bindings.method_get_lod_bias = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_transparency() {
    if (!this._bindings.method_set_transparency) {
      let classname = new StringName("GeometryInstance3D");
      let methodname = new StringName("set_transparency");
      this._bindings.method_set_transparency = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_transparency() {
    if (!this._bindings.method_get_transparency) {
      let classname = new StringName("GeometryInstance3D");
      let methodname = new StringName("get_transparency");
      this._bindings.method_get_transparency = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_visibility_range_end_margin() {
    if (!this._bindings.method_set_visibility_range_end_margin) {
      let classname = new StringName("GeometryInstance3D");
      let methodname = new StringName("set_visibility_range_end_margin");
      this._bindings.method_set_visibility_range_end_margin = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_visibility_range_end_margin() {
    if (!this._bindings.method_get_visibility_range_end_margin) {
      let classname = new StringName("GeometryInstance3D");
      let methodname = new StringName("get_visibility_range_end_margin");
      this._bindings.method_get_visibility_range_end_margin = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_visibility_range_end() {
    if (!this._bindings.method_set_visibility_range_end) {
      let classname = new StringName("GeometryInstance3D");
      let methodname = new StringName("set_visibility_range_end");
      this._bindings.method_set_visibility_range_end = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_visibility_range_end() {
    if (!this._bindings.method_get_visibility_range_end) {
      let classname = new StringName("GeometryInstance3D");
      let methodname = new StringName("get_visibility_range_end");
      this._bindings.method_get_visibility_range_end = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_visibility_range_begin_margin() {
    if (!this._bindings.method_set_visibility_range_begin_margin) {
      let classname = new StringName("GeometryInstance3D");
      let methodname = new StringName("set_visibility_range_begin_margin");
      this._bindings.method_set_visibility_range_begin_margin = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_visibility_range_begin_margin() {
    if (!this._bindings.method_get_visibility_range_begin_margin) {
      let classname = new StringName("GeometryInstance3D");
      let methodname = new StringName("get_visibility_range_begin_margin");
      this._bindings.method_get_visibility_range_begin_margin = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_visibility_range_begin() {
    if (!this._bindings.method_set_visibility_range_begin) {
      let classname = new StringName("GeometryInstance3D");
      let methodname = new StringName("set_visibility_range_begin");
      this._bindings.method_set_visibility_range_begin = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_visibility_range_begin() {
    if (!this._bindings.method_get_visibility_range_begin) {
      let classname = new StringName("GeometryInstance3D");
      let methodname = new StringName("get_visibility_range_begin");
      this._bindings.method_get_visibility_range_begin = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_visibility_range_fade_mode() {
    if (!this._bindings.method_set_visibility_range_fade_mode) {
      let classname = new StringName("GeometryInstance3D");
      let methodname = new StringName("set_visibility_range_fade_mode");
      this._bindings.method_set_visibility_range_fade_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1440117808
      );
    }
  }
  static init_method_get_visibility_range_fade_mode() {
    if (!this._bindings.method_get_visibility_range_fade_mode) {
      let classname = new StringName("GeometryInstance3D");
      let methodname = new StringName("get_visibility_range_fade_mode");
      this._bindings.method_get_visibility_range_fade_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2067221882
      );
    }
  }
  static init_method_set_instance_shader_parameter() {
    if (!this._bindings.method_set_instance_shader_parameter) {
      let classname = new StringName("GeometryInstance3D");
      let methodname = new StringName("set_instance_shader_parameter");
      this._bindings.method_set_instance_shader_parameter = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3776071444
      );
    }
  }
  static init_method_get_instance_shader_parameter() {
    if (!this._bindings.method_get_instance_shader_parameter) {
      let classname = new StringName("GeometryInstance3D");
      let methodname = new StringName("get_instance_shader_parameter");
      this._bindings.method_get_instance_shader_parameter = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2760726917
      );
    }
  }
  static init_method_set_extra_cull_margin() {
    if (!this._bindings.method_set_extra_cull_margin) {
      let classname = new StringName("GeometryInstance3D");
      let methodname = new StringName("set_extra_cull_margin");
      this._bindings.method_set_extra_cull_margin = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        373806689
      );
    }
  }
  static init_method_get_extra_cull_margin() {
    if (!this._bindings.method_get_extra_cull_margin) {
      let classname = new StringName("GeometryInstance3D");
      let methodname = new StringName("get_extra_cull_margin");
      this._bindings.method_get_extra_cull_margin = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1740695150
      );
    }
  }
  static init_method_set_lightmap_scale() {
    if (!this._bindings.method_set_lightmap_scale) {
      let classname = new StringName("GeometryInstance3D");
      let methodname = new StringName("set_lightmap_scale");
      this._bindings.method_set_lightmap_scale = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2462696582
      );
    }
  }
  static init_method_get_lightmap_scale() {
    if (!this._bindings.method_get_lightmap_scale) {
      let classname = new StringName("GeometryInstance3D");
      let methodname = new StringName("get_lightmap_scale");
      this._bindings.method_get_lightmap_scale = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        798767852
      );
    }
  }
  static init_method_set_gi_mode() {
    if (!this._bindings.method_set_gi_mode) {
      let classname = new StringName("GeometryInstance3D");
      let methodname = new StringName("set_gi_mode");
      this._bindings.method_set_gi_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2548557163
      );
    }
  }
  static init_method_get_gi_mode() {
    if (!this._bindings.method_get_gi_mode) {
      let classname = new StringName("GeometryInstance3D");
      let methodname = new StringName("get_gi_mode");
      this._bindings.method_get_gi_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2188566509
      );
    }
  }
  static init_method_set_ignore_occlusion_culling() {
    if (!this._bindings.method_set_ignore_occlusion_culling) {
      let classname = new StringName("GeometryInstance3D");
      let methodname = new StringName("set_ignore_occlusion_culling");
      this._bindings.method_set_ignore_occlusion_culling = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_ignoring_occlusion_culling() {
    if (!this._bindings.method_is_ignoring_occlusion_culling) {
      let classname = new StringName("GeometryInstance3D");
      let methodname = new StringName("is_ignoring_occlusion_culling");
      this._bindings.method_is_ignoring_occlusion_culling = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2240911060
      );
    }
  }
  static init_method_set_custom_aabb() {
    if (!this._bindings.method_set_custom_aabb) {
      let classname = new StringName("GeometryInstance3D");
      let methodname = new StringName("set_custom_aabb");
      this._bindings.method_set_custom_aabb = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        259215842
      );
    }
  }
  static init_method_get_custom_aabb() {
    if (!this._bindings.method_get_custom_aabb) {
      let classname = new StringName("GeometryInstance3D");
      let methodname = new StringName("get_custom_aabb");
      this._bindings.method_get_custom_aabb = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1068685055
      );
    }
  }

  
  
  set_material_override(_material) {
    GeometryInstance3D.init_method_set_material_override();
    return _call_native_mb_no_ret(
      GeometryInstance3D._bindings.method_set_material_override,
      this._owner,
      _material
    );
    
  }
  get_material_override() {
    GeometryInstance3D.init_method_get_material_override();
    return _call_native_mb_ret(
      GeometryInstance3D._bindings.method_get_material_override,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_material_overlay(_material) {
    GeometryInstance3D.init_method_set_material_overlay();
    return _call_native_mb_no_ret(
      GeometryInstance3D._bindings.method_set_material_overlay,
      this._owner,
      _material
    );
    
  }
  get_material_overlay() {
    GeometryInstance3D.init_method_get_material_overlay();
    return _call_native_mb_ret(
      GeometryInstance3D._bindings.method_get_material_overlay,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  set_cast_shadows_setting(_shadow_casting_setting) {
    GeometryInstance3D.init_method_set_cast_shadows_setting();
    return _call_native_mb_no_ret(
      GeometryInstance3D._bindings.method_set_cast_shadows_setting,
      this._owner,
      _shadow_casting_setting
    );
    
  }
  get_cast_shadows_setting() {
    GeometryInstance3D.init_method_get_cast_shadows_setting();
    return _call_native_mb_ret(
      GeometryInstance3D._bindings.method_get_cast_shadows_setting,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_lod_bias(_bias) {
    GeometryInstance3D.init_method_set_lod_bias();
    return _call_native_mb_no_ret(
      GeometryInstance3D._bindings.method_set_lod_bias,
      this._owner,
      _bias
    );
    
  }
  get_lod_bias() {
    GeometryInstance3D.init_method_get_lod_bias();
    return _call_native_mb_ret(
      GeometryInstance3D._bindings.method_get_lod_bias,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_transparency(_transparency) {
    GeometryInstance3D.init_method_set_transparency();
    return _call_native_mb_no_ret(
      GeometryInstance3D._bindings.method_set_transparency,
      this._owner,
      _transparency
    );
    
  }
  get_transparency() {
    GeometryInstance3D.init_method_get_transparency();
    return _call_native_mb_ret(
      GeometryInstance3D._bindings.method_get_transparency,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_visibility_range_end_margin(_distance) {
    GeometryInstance3D.init_method_set_visibility_range_end_margin();
    return _call_native_mb_no_ret(
      GeometryInstance3D._bindings.method_set_visibility_range_end_margin,
      this._owner,
      _distance
    );
    
  }
  get_visibility_range_end_margin() {
    GeometryInstance3D.init_method_get_visibility_range_end_margin();
    return _call_native_mb_ret(
      GeometryInstance3D._bindings.method_get_visibility_range_end_margin,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_visibility_range_end(_distance) {
    GeometryInstance3D.init_method_set_visibility_range_end();
    return _call_native_mb_no_ret(
      GeometryInstance3D._bindings.method_set_visibility_range_end,
      this._owner,
      _distance
    );
    
  }
  get_visibility_range_end() {
    GeometryInstance3D.init_method_get_visibility_range_end();
    return _call_native_mb_ret(
      GeometryInstance3D._bindings.method_get_visibility_range_end,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_visibility_range_begin_margin(_distance) {
    GeometryInstance3D.init_method_set_visibility_range_begin_margin();
    return _call_native_mb_no_ret(
      GeometryInstance3D._bindings.method_set_visibility_range_begin_margin,
      this._owner,
      _distance
    );
    
  }
  get_visibility_range_begin_margin() {
    GeometryInstance3D.init_method_get_visibility_range_begin_margin();
    return _call_native_mb_ret(
      GeometryInstance3D._bindings.method_get_visibility_range_begin_margin,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_visibility_range_begin(_distance) {
    GeometryInstance3D.init_method_set_visibility_range_begin();
    return _call_native_mb_no_ret(
      GeometryInstance3D._bindings.method_set_visibility_range_begin,
      this._owner,
      _distance
    );
    
  }
  get_visibility_range_begin() {
    GeometryInstance3D.init_method_get_visibility_range_begin();
    return _call_native_mb_ret(
      GeometryInstance3D._bindings.method_get_visibility_range_begin,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_visibility_range_fade_mode(_mode) {
    GeometryInstance3D.init_method_set_visibility_range_fade_mode();
    return _call_native_mb_no_ret(
      GeometryInstance3D._bindings.method_set_visibility_range_fade_mode,
      this._owner,
      _mode
    );
    
  }
  get_visibility_range_fade_mode() {
    GeometryInstance3D.init_method_get_visibility_range_fade_mode();
    return _call_native_mb_ret(
      GeometryInstance3D._bindings.method_get_visibility_range_fade_mode,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_instance_shader_parameter(_name, _value) {
    GeometryInstance3D.init_method_set_instance_shader_parameter();
    return _call_native_mb_no_ret(
      GeometryInstance3D._bindings.method_set_instance_shader_parameter,
      this._owner,
      _name, _value
    );
    
  }
  get_instance_shader_parameter(_name) {
    GeometryInstance3D.init_method_get_instance_shader_parameter();
    return _call_native_mb_ret(
      GeometryInstance3D._bindings.method_get_instance_shader_parameter,
      this._owner,
			Variant.Type.VARIANT,
    
      _name
    );
    
  }
  set_extra_cull_margin(_margin) {
    GeometryInstance3D.init_method_set_extra_cull_margin();
    return _call_native_mb_no_ret(
      GeometryInstance3D._bindings.method_set_extra_cull_margin,
      this._owner,
      _margin
    );
    
  }
  get_extra_cull_margin() {
    GeometryInstance3D.init_method_get_extra_cull_margin();
    return _call_native_mb_ret(
      GeometryInstance3D._bindings.method_get_extra_cull_margin,
      this._owner,
			Variant.Type.FLOAT,
    
      
    );
    
  }
  set_lightmap_scale(_scale) {
    GeometryInstance3D.init_method_set_lightmap_scale();
    return _call_native_mb_no_ret(
      GeometryInstance3D._bindings.method_set_lightmap_scale,
      this._owner,
      _scale
    );
    
  }
  get_lightmap_scale() {
    GeometryInstance3D.init_method_get_lightmap_scale();
    return _call_native_mb_ret(
      GeometryInstance3D._bindings.method_get_lightmap_scale,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_gi_mode(_mode) {
    GeometryInstance3D.init_method_set_gi_mode();
    return _call_native_mb_no_ret(
      GeometryInstance3D._bindings.method_set_gi_mode,
      this._owner,
      _mode
    );
    
  }
  get_gi_mode() {
    GeometryInstance3D.init_method_get_gi_mode();
    return _call_native_mb_ret(
      GeometryInstance3D._bindings.method_get_gi_mode,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_ignore_occlusion_culling(_ignore_culling) {
    GeometryInstance3D.init_method_set_ignore_occlusion_culling();
    return _call_native_mb_no_ret(
      GeometryInstance3D._bindings.method_set_ignore_occlusion_culling,
      this._owner,
      _ignore_culling
    );
    
  }
  is_ignoring_occlusion_culling() {
    GeometryInstance3D.init_method_is_ignoring_occlusion_culling();
    return _call_native_mb_ret(
      GeometryInstance3D._bindings.method_is_ignoring_occlusion_culling,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_custom_aabb(_aabb) {
    GeometryInstance3D.init_method_set_custom_aabb();
    return _call_native_mb_no_ret(
      GeometryInstance3D._bindings.method_set_custom_aabb,
      this._owner,
      _aabb
    );
    
  }
  get_custom_aabb() {
    GeometryInstance3D.init_method_get_custom_aabb();
    return _call_native_mb_ret(
      GeometryInstance3D._bindings.method_get_custom_aabb,
      this._owner,
			Variant.Type.AABB,
    
      
    );
    
  }
  
get material_override () {
  return this.get_material_override();
}
set material_override (new_value) {
  this.set_material_override(new_value);
}
get material_overlay () {
  return this.get_material_overlay();
}
set material_overlay (new_value) {
  this.set_material_overlay(new_value);
}
get transparency () {
  return this.get_transparency();
}
set transparency (new_value) {
  this.set_transparency(new_value);
}
get cast_shadow () {
  return this.get_cast_shadows_setting();
}
set cast_shadow (new_value) {
  this.set_cast_shadows_setting(new_value);
}
get extra_cull_margin () {
  return this.get_extra_cull_margin();
}
set extra_cull_margin (new_value) {
  this.set_extra_cull_margin(new_value);
}
get custom_aabb () {
  return this.get_custom_aabb();
}
set custom_aabb (new_value) {
  this.set_custom_aabb(new_value);
}
get lod_bias () {
  return this.get_lod_bias();
}
set lod_bias (new_value) {
  this.set_lod_bias(new_value);
}
get ignore_occlusion_culling () {
  return this.is_ignoring_occlusion_culling();
}
set ignore_occlusion_culling (new_value) {
  this.set_ignore_occlusion_culling(new_value);
}
get gi_mode () {
  return this.get_gi_mode();
}
set gi_mode (new_value) {
  this.set_gi_mode(new_value);
}
get gi_lightmap_scale () {
  return this.get_lightmap_scale();
}
set gi_lightmap_scale (new_value) {
  this.set_lightmap_scale(new_value);
}
get visibility_range_begin () {
  return this.get_visibility_range_begin();
}
set visibility_range_begin (new_value) {
  this.set_visibility_range_begin(new_value);
}
get visibility_range_begin_margin () {
  return this.get_visibility_range_begin_margin();
}
set visibility_range_begin_margin (new_value) {
  this.set_visibility_range_begin_margin(new_value);
}
get visibility_range_end () {
  return this.get_visibility_range_end();
}
set visibility_range_end (new_value) {
  this.set_visibility_range_end(new_value);
}
get visibility_range_end_margin () {
  return this.get_visibility_range_end_margin();
}
set visibility_range_end_margin (new_value) {
  this.set_visibility_range_end_margin(new_value);
}
get visibility_range_fade_mode () {
  return this.get_visibility_range_fade_mode();
}
set visibility_range_fade_mode (new_value) {
  this.set_visibility_range_fade_mode(new_value);
}

  static ShadowCastingSetting = {
    SHADOW_CASTING_SETTING_OFF: 0,
    SHADOW_CASTING_SETTING_ON: 1,
    SHADOW_CASTING_SETTING_DOUBLE_SIDED: 2,
    SHADOW_CASTING_SETTING_SHADOWS_ONLY: 3,
  }
  static GIMode = {
    GI_MODE_DISABLED: 0,
    GI_MODE_STATIC: 1,
    GI_MODE_DYNAMIC: 2,
  }
  static LightmapScale = {
    LIGHTMAP_SCALE_1X: 0,
    LIGHTMAP_SCALE_2X: 1,
    LIGHTMAP_SCALE_4X: 2,
    LIGHTMAP_SCALE_8X: 3,
    LIGHTMAP_SCALE_MAX: 4,
  }
  static VisibilityRangeFadeMode = {
    VISIBILITY_RANGE_FADE_DISABLED: 0,
    VISIBILITY_RANGE_FADE_SELF: 1,
    VISIBILITY_RANGE_FADE_DEPENDENCIES: 2,
  }
}