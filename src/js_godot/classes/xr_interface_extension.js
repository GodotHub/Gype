import * as internal from '__internal__';
import { Vector2 } from 'src/js_godot/variant/vector2'
import { PackedVector3Array } from 'src/js_godot/variant/packed_vector3_array'
import { GDString } from 'src/js_godot/variant/gd_string'
import { Rect2 } from 'src/js_godot/variant/rect2'
import { StringName } from 'src/js_godot/variant/string_name'
import { Transform3D } from 'src/js_godot/variant/transform3d'
import { PackedFloat64Array } from 'src/js_godot/variant/packed_float64_array'
import { RID } from 'src/js_godot/variant/rid'
import { Rect2i } from 'src/js_godot/variant/rect2i'
import { XRInterface } from 'src/js_godot/classesxr_interface'
import { PackedStringArray } from 'src/js_godot/variant/packed_string_array'
import { Dictionary } from 'src/js_godot/variant/dictionary'
class _MethodBindings {
    method__get_name;
    method__get_capabilities;
    method__is_initialized;
    method__initialize;
    method__uninitialize;
    method__get_system_info;
    method__supports_play_area_mode;
    method__get_play_area_mode;
    method__set_play_area_mode;
    method__get_play_area;
    method__get_render_target_size;
    method__get_view_count;
    method__get_camera_transform;
    method__get_transform_for_view;
    method__get_projection_for_view;
    method__get_vrs_texture;
    method__process;
    method__pre_render;
    method__pre_draw_viewport;
    method__post_draw_viewport;
    method__end_frame;
    method__get_suggested_tracker_names;
    method__get_suggested_pose_names;
    method__get_tracking_status;
    method__trigger_haptic_pulse;
    method__get_anchor_detection_is_enabled;
    method__set_anchor_detection_is_enabled;
    method__get_camera_feed_id;
    method__get_color_texture;
    method__get_depth_texture;
    method__get_velocity_texture;
    method_get_color_texture;
    method_get_depth_texture;
    method_get_velocity_texture;
    method_add_blit;
    method_get_render_target_texture;
}


export class XRInterfaceExtension extends XRInterface{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("XRInterfaceExtension");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("XRInterfaceExtension");
      let methodname = new StringName("_get_name");
      this._bindings.method__get_name = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("XRInterfaceExtension");
      let methodname = new StringName("_get_capabilities");
      this._bindings.method__get_capabilities = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("XRInterfaceExtension");
      let methodname = new StringName("_is_initialized");
      this._bindings.method__is_initialized = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("XRInterfaceExtension");
      let methodname = new StringName("_initialize");
      this._bindings.method__initialize = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("XRInterfaceExtension");
      let methodname = new StringName("_uninitialize");
      this._bindings.method__uninitialize = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("XRInterfaceExtension");
      let methodname = new StringName("_get_system_info");
      this._bindings.method__get_system_info = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("XRInterfaceExtension");
      let methodname = new StringName("_supports_play_area_mode");
      this._bindings.method__supports_play_area_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("XRInterfaceExtension");
      let methodname = new StringName("_get_play_area_mode");
      this._bindings.method__get_play_area_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("XRInterfaceExtension");
      let methodname = new StringName("_set_play_area_mode");
      this._bindings.method__set_play_area_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("XRInterfaceExtension");
      let methodname = new StringName("_get_play_area");
      this._bindings.method__get_play_area = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("XRInterfaceExtension");
      let methodname = new StringName("_get_render_target_size");
      this._bindings.method__get_render_target_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("XRInterfaceExtension");
      let methodname = new StringName("_get_view_count");
      this._bindings.method__get_view_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("XRInterfaceExtension");
      let methodname = new StringName("_get_camera_transform");
      this._bindings.method__get_camera_transform = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("XRInterfaceExtension");
      let methodname = new StringName("_get_transform_for_view");
      this._bindings.method__get_transform_for_view = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("XRInterfaceExtension");
      let methodname = new StringName("_get_projection_for_view");
      this._bindings.method__get_projection_for_view = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("XRInterfaceExtension");
      let methodname = new StringName("_get_vrs_texture");
      this._bindings.method__get_vrs_texture = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("XRInterfaceExtension");
      let methodname = new StringName("_process");
      this._bindings.method__process = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("XRInterfaceExtension");
      let methodname = new StringName("_pre_render");
      this._bindings.method__pre_render = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("XRInterfaceExtension");
      let methodname = new StringName("_pre_draw_viewport");
      this._bindings.method__pre_draw_viewport = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("XRInterfaceExtension");
      let methodname = new StringName("_post_draw_viewport");
      this._bindings.method__post_draw_viewport = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("XRInterfaceExtension");
      let methodname = new StringName("_end_frame");
      this._bindings.method__end_frame = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("XRInterfaceExtension");
      let methodname = new StringName("_get_suggested_tracker_names");
      this._bindings.method__get_suggested_tracker_names = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("XRInterfaceExtension");
      let methodname = new StringName("_get_suggested_pose_names");
      this._bindings.method__get_suggested_pose_names = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("XRInterfaceExtension");
      let methodname = new StringName("_get_tracking_status");
      this._bindings.method__get_tracking_status = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("XRInterfaceExtension");
      let methodname = new StringName("_trigger_haptic_pulse");
      this._bindings.method__trigger_haptic_pulse = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("XRInterfaceExtension");
      let methodname = new StringName("_get_anchor_detection_is_enabled");
      this._bindings.method__get_anchor_detection_is_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("XRInterfaceExtension");
      let methodname = new StringName("_set_anchor_detection_is_enabled");
      this._bindings.method__set_anchor_detection_is_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("XRInterfaceExtension");
      let methodname = new StringName("_get_camera_feed_id");
      this._bindings.method__get_camera_feed_id = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("XRInterfaceExtension");
      let methodname = new StringName("_get_color_texture");
      this._bindings.method__get_color_texture = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("XRInterfaceExtension");
      let methodname = new StringName("_get_depth_texture");
      this._bindings.method__get_depth_texture = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("XRInterfaceExtension");
      let methodname = new StringName("_get_velocity_texture");
      this._bindings.method__get_velocity_texture = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("XRInterfaceExtension");
      let methodname = new StringName("get_color_texture");
      this._bindings.method_get_color_texture = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        529393457
      );
    }
    {
      let classname = new StringName("XRInterfaceExtension");
      let methodname = new StringName("get_depth_texture");
      this._bindings.method_get_depth_texture = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        529393457
      );
    }
    {
      let classname = new StringName("XRInterfaceExtension");
      let methodname = new StringName("get_velocity_texture");
      this._bindings.method_get_velocity_texture = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        529393457
      );
    }
    {
      let classname = new StringName("XRInterfaceExtension");
      let methodname = new StringName("add_blit");
      this._bindings.method_add_blit = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        258596971
      );
    }
    {
      let classname = new StringName("XRInterfaceExtension");
      let methodname = new StringName("get_render_target_texture");
      this._bindings.method_get_render_target_texture = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        41030802
      );
    }
  }
  _get_name() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_name,
      this._owner,
			Variant.Type.STRING_NAME
    ,
      
    );
  }
  _get_capabilities() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_capabilities,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  _is_initialized() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__is_initialized,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  _initialize() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__initialize,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  _uninitialize() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__uninitialize,
      this._owner,
      
    );
  }
  _get_system_info() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_system_info,
      this._owner,
			Variant.Type.DICTIONARY
    ,
      
    );
  }
  _supports_play_area_mode(_mode) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__supports_play_area_mode,
      this._owner,
			Variant.Type.BOOL,
      _mode
    );
  }
  _get_play_area_mode() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_play_area_mode,
      this._owner,
			Variant.INT,
      
    );
  }
  _set_play_area_mode(_mode) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__set_play_area_mode,
      this._owner,
			Variant.Type.BOOL,
      _mode
    );
  }
  _get_play_area() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_play_area,
      this._owner,
			Variant.Type.PACKED_VECTOR3_ARRAY
    ,
      
    );
  }
  _get_render_target_size() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_render_target_size,
      this._owner,
			Variant.Type.VECTOR2
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
  _get_camera_transform() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_camera_transform,
      this._owner,
			Variant.Type.TRANSFORM3D
    ,
      
    );
  }
  _get_transform_for_view(_view, _cam_transform) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_transform_for_view,
      this._owner,
			Variant.Type.TRANSFORM3D
    ,
      _view, _cam_transform
    );
  }
  _get_projection_for_view(_view, _aspect, _z_near, _z_far) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_projection_for_view,
      this._owner,
			Variant.Type.PACKED_FLOAT64_ARRAY
    ,
      _view, _aspect, _z_near, _z_far
    );
  }
  _get_vrs_texture() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_vrs_texture,
      this._owner,
			Variant.Type.RID
    ,
      
    );
  }
  _process() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__process,
      this._owner,
      
    );
  }
  _pre_render() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__pre_render,
      this._owner,
      
    );
  }
  _pre_draw_viewport(_render_target) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__pre_draw_viewport,
      this._owner,
			Variant.Type.BOOL,
      _render_target
    );
  }
  _post_draw_viewport(_render_target, _screen_rect) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__post_draw_viewport,
      this._owner,
      _render_target, _screen_rect
    );
  }
  _end_frame() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__end_frame,
      this._owner,
      
    );
  }
  _get_suggested_tracker_names() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_suggested_tracker_names,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY
    ,
      
    );
  }
  _get_suggested_pose_names(_tracker_name) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_suggested_pose_names,
      this._owner,
			Variant.Type.PACKED_STRING_ARRAY
    ,
      _tracker_name
    );
  }
  _get_tracking_status() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_tracking_status,
      this._owner,
			Variant.INT,
      
    );
  }
  _trigger_haptic_pulse(_action_name, _tracker_name, _frequency, _amplitude, _duration_sec, _delay_sec) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__trigger_haptic_pulse,
      this._owner,
      _action_name, _tracker_name, _frequency, _amplitude, _duration_sec, _delay_sec
    );
  }
  _get_anchor_detection_is_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_anchor_detection_is_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
  }
  _set_anchor_detection_is_enabled(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__set_anchor_detection_is_enabled,
      this._owner,
      _enabled
    );
  }
  _get_camera_feed_id() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_camera_feed_id,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  _get_color_texture() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_color_texture,
      this._owner,
			Variant.Type.RID
    ,
      
    );
  }
  _get_depth_texture() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_depth_texture,
      this._owner,
			Variant.Type.RID
    ,
      
    );
  }
  _get_velocity_texture() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_velocity_texture,
      this._owner,
			Variant.Type.RID
    ,
      
    );
  }
  get_color_texture() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_color_texture,
      this._owner,
			Variant.Type.RID
    ,
      
    );
  }
  get_depth_texture() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_depth_texture,
      this._owner,
			Variant.Type.RID
    ,
      
    );
  }
  get_velocity_texture() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_velocity_texture,
      this._owner,
			Variant.Type.RID
    ,
      
    );
  }
  add_blit(_render_target, _src_rect, _dst_rect, _use_layer, _layer, _apply_lens_distortion, _eye_center, _k1, _k2, _upscale, _aspect_ratio) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_add_blit,
      this._owner,
      _render_target, _src_rect, _dst_rect, _use_layer, _layer, _apply_lens_distortion, _eye_center, _k1, _k2, _upscale, _aspect_ratio
    );
  }
  get_render_target_texture(_render_target) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_render_target_texture,
      this._owner,
			Variant.Type.RID
    ,
      _render_target
    );
  }
}