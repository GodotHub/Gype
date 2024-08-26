import * as internal from '__internal__';
import { VisualInstance3D } from 'src/js_godot/classesvisual_instance3d'
import { Variant } from 'src/js_godot/variant/variant'
import { AABB } from 'src/js_godot/variant/aabb'
import { StringName } from 'src/js_godot/variant/string_name'
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


export class GeometryInstance3D extends VisualInstance3D{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("GeometryInstance3D");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("GeometryInstance3D");
      let methodname = new StringName("set_material_override");
      this._bindings.method_set_material_override = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2757459619
      );
    }
    {
      let classname = new StringName("GeometryInstance3D");
      let methodname = new StringName("get_material_override");
      this._bindings.method_get_material_override = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        5934680
      );
    }
    {
      let classname = new StringName("GeometryInstance3D");
      let methodname = new StringName("set_material_overlay");
      this._bindings.method_set_material_overlay = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2757459619
      );
    }
    {
      let classname = new StringName("GeometryInstance3D");
      let methodname = new StringName("get_material_overlay");
      this._bindings.method_get_material_overlay = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        5934680
      );
    }
    {
      let classname = new StringName("GeometryInstance3D");
      let methodname = new StringName("set_cast_shadows_setting");
      this._bindings.method_set_cast_shadows_setting = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        856677339
      );
    }
    {
      let classname = new StringName("GeometryInstance3D");
      let methodname = new StringName("get_cast_shadows_setting");
      this._bindings.method_get_cast_shadows_setting = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3383019359
      );
    }
    {
      let classname = new StringName("GeometryInstance3D");
      let methodname = new StringName("set_lod_bias");
      this._bindings.method_set_lod_bias = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("GeometryInstance3D");
      let methodname = new StringName("get_lod_bias");
      this._bindings.method_get_lod_bias = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("GeometryInstance3D");
      let methodname = new StringName("set_transparency");
      this._bindings.method_set_transparency = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("GeometryInstance3D");
      let methodname = new StringName("get_transparency");
      this._bindings.method_get_transparency = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("GeometryInstance3D");
      let methodname = new StringName("set_visibility_range_end_margin");
      this._bindings.method_set_visibility_range_end_margin = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("GeometryInstance3D");
      let methodname = new StringName("get_visibility_range_end_margin");
      this._bindings.method_get_visibility_range_end_margin = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("GeometryInstance3D");
      let methodname = new StringName("set_visibility_range_end");
      this._bindings.method_set_visibility_range_end = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("GeometryInstance3D");
      let methodname = new StringName("get_visibility_range_end");
      this._bindings.method_get_visibility_range_end = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("GeometryInstance3D");
      let methodname = new StringName("set_visibility_range_begin_margin");
      this._bindings.method_set_visibility_range_begin_margin = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("GeometryInstance3D");
      let methodname = new StringName("get_visibility_range_begin_margin");
      this._bindings.method_get_visibility_range_begin_margin = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("GeometryInstance3D");
      let methodname = new StringName("set_visibility_range_begin");
      this._bindings.method_set_visibility_range_begin = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("GeometryInstance3D");
      let methodname = new StringName("get_visibility_range_begin");
      this._bindings.method_get_visibility_range_begin = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("GeometryInstance3D");
      let methodname = new StringName("set_visibility_range_fade_mode");
      this._bindings.method_set_visibility_range_fade_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1440117808
      );
    }
    {
      let classname = new StringName("GeometryInstance3D");
      let methodname = new StringName("get_visibility_range_fade_mode");
      this._bindings.method_get_visibility_range_fade_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2067221882
      );
    }
    {
      let classname = new StringName("GeometryInstance3D");
      let methodname = new StringName("set_instance_shader_parameter");
      this._bindings.method_set_instance_shader_parameter = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3776071444
      );
    }
    {
      let classname = new StringName("GeometryInstance3D");
      let methodname = new StringName("get_instance_shader_parameter");
      this._bindings.method_get_instance_shader_parameter = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2760726917
      );
    }
    {
      let classname = new StringName("GeometryInstance3D");
      let methodname = new StringName("set_extra_cull_margin");
      this._bindings.method_set_extra_cull_margin = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("GeometryInstance3D");
      let methodname = new StringName("get_extra_cull_margin");
      this._bindings.method_get_extra_cull_margin = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("GeometryInstance3D");
      let methodname = new StringName("set_lightmap_scale");
      this._bindings.method_set_lightmap_scale = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2462696582
      );
    }
    {
      let classname = new StringName("GeometryInstance3D");
      let methodname = new StringName("get_lightmap_scale");
      this._bindings.method_get_lightmap_scale = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        798767852
      );
    }
    {
      let classname = new StringName("GeometryInstance3D");
      let methodname = new StringName("set_gi_mode");
      this._bindings.method_set_gi_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2548557163
      );
    }
    {
      let classname = new StringName("GeometryInstance3D");
      let methodname = new StringName("get_gi_mode");
      this._bindings.method_get_gi_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2188566509
      );
    }
    {
      let classname = new StringName("GeometryInstance3D");
      let methodname = new StringName("set_ignore_occlusion_culling");
      this._bindings.method_set_ignore_occlusion_culling = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("GeometryInstance3D");
      let methodname = new StringName("is_ignoring_occlusion_culling");
      this._bindings.method_is_ignoring_occlusion_culling = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2240911060
      );
    }
    {
      let classname = new StringName("GeometryInstance3D");
      let methodname = new StringName("set_custom_aabb");
      this._bindings.method_set_custom_aabb = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        259215842
      );
    }
    {
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
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_material_override,
      this._owner,
      _material
    );
  }
  get_material_override() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_material_override,
      this._owner,
			Variant.INT,
      
    );
  }
  set_material_overlay(_material) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_material_overlay,
      this._owner,
      _material
    );
  }
  get_material_overlay() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_material_overlay,
      this._owner,
			Variant.INT,
      
    );
  }
  set_cast_shadows_setting(_shadow_casting_setting) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_cast_shadows_setting,
      this._owner,
      _shadow_casting_setting
    );
  }
  get_cast_shadows_setting() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_cast_shadows_setting,
      this._owner,
			Variant.INT,
      
    );
  }
  set_lod_bias(_bias) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_lod_bias,
      this._owner,
      _bias
    );
  }
  get_lod_bias() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_lod_bias,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_transparency(_transparency) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_transparency,
      this._owner,
      _transparency
    );
  }
  get_transparency() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_transparency,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_visibility_range_end_margin(_distance) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_visibility_range_end_margin,
      this._owner,
      _distance
    );
  }
  get_visibility_range_end_margin() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_visibility_range_end_margin,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_visibility_range_end(_distance) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_visibility_range_end,
      this._owner,
      _distance
    );
  }
  get_visibility_range_end() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_visibility_range_end,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_visibility_range_begin_margin(_distance) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_visibility_range_begin_margin,
      this._owner,
      _distance
    );
  }
  get_visibility_range_begin_margin() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_visibility_range_begin_margin,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_visibility_range_begin(_distance) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_visibility_range_begin,
      this._owner,
      _distance
    );
  }
  get_visibility_range_begin() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_visibility_range_begin,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_visibility_range_fade_mode(_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_visibility_range_fade_mode,
      this._owner,
      _mode
    );
  }
  get_visibility_range_fade_mode() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_visibility_range_fade_mode,
      this._owner,
			Variant.INT,
      
    );
  }
  set_instance_shader_parameter(_name, _value) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_instance_shader_parameter,
      this._owner,
      _name, _value
    );
  }
  get_instance_shader_parameter(_name) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_instance_shader_parameter,
      this._owner,
			Variant.Type.VARIANT
    ,
      _name
    );
  }
  set_extra_cull_margin(_margin) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_extra_cull_margin,
      this._owner,
      _margin
    );
  }
  get_extra_cull_margin() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_extra_cull_margin,
      this._owner,
			Variant.Type.FLOAT,
      
    );
  }
  set_lightmap_scale(_scale) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_lightmap_scale,
      this._owner,
      _scale
    );
  }
  get_lightmap_scale() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_lightmap_scale,
      this._owner,
			Variant.INT,
      
    );
  }
  set_gi_mode(_mode) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_gi_mode,
      this._owner,
      _mode
    );
  }
  get_gi_mode() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_gi_mode,
      this._owner,
			Variant.INT,
      
    );
  }
  set_ignore_occlusion_culling(_ignore_culling) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_ignore_occlusion_culling,
      this._owner,
      _ignore_culling
    );
  }
  is_ignoring_occlusion_culling() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_ignoring_occlusion_culling,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  set_custom_aabb(_aabb) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_custom_aabb,
      this._owner,
      _aabb
    );
  }
  get_custom_aabb() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_custom_aabb,
      this._owner,
			Variant.Type.AABB
    ,
      
    );
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