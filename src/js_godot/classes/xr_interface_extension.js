import * as internal from '__internal__';
import { XRInterface } from 'src/js_godot/classes/xr_interface'
import { Vector2 } from 'src/js_godot/variant/vector2'
import { GDString } from 'src/js_godot/variant/gd_string'
import { StringName } from 'src/js_godot/variant/string_name'
import { Transform3D } from 'src/js_godot/variant/transform3d'
import { PackedStringArray } from 'src/js_godot/variant/packed_string_array'
import { PackedVector3Array } from 'src/js_godot/variant/packed_vector3_array'
import { PackedFloat64Array } from 'src/js_godot/variant/packed_float64_array'
import { Rect2i } from 'src/js_godot/variant/rect2i'
import { Dictionary } from 'src/js_godot/variant/dictionary'
import { RID } from 'src/js_godot/variant/rid'
import { Rect2 } from 'src/js_godot/variant/rect2'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
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
  }
  _get_capabilities() {
  }
  _is_initialized() {
  }
  _initialize() {
  }
  _uninitialize() {
  }
  _get_system_info() {
  }
  _supports_play_area_mode(_mode) {
  }
  _get_play_area_mode() {
  }
  _set_play_area_mode(_mode) {
  }
  _get_play_area() {
  }
  _get_render_target_size() {
  }
  _get_view_count() {
  }
  _get_camera_transform() {
  }
  _get_transform_for_view(_view, _cam_transform) {
  }
  _get_projection_for_view(_view, _aspect, _z_near, _z_far) {
  }
  _get_vrs_texture() {
  }
  _process() {
  }
  _pre_render() {
  }
  _pre_draw_viewport(_render_target) {
  }
  _post_draw_viewport(_render_target, _screen_rect) {
  }
  _end_frame() {
  }
  _get_suggested_tracker_names() {
  }
  _get_suggested_pose_names(_tracker_name) {
  }
  _get_tracking_status() {
  }
  _trigger_haptic_pulse(_action_name, _tracker_name, _frequency, _amplitude, _duration_sec, _delay_sec) {
  }
  _get_anchor_detection_is_enabled() {
  }
  _set_anchor_detection_is_enabled(_enabled) {
  }
  _get_camera_feed_id() {
  }
  _get_color_texture() {
  }
  _get_depth_texture() {
  }
  _get_velocity_texture() {
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