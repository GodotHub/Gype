import * as internal from '__internal__';
import { Dictionary } from '@js_godot/variant/dictionary'
import { Transform3D } from '@js_godot/variant/transform3d'
import { Variant } from '@js_godot/variant/variant'
import { PackedVector3Array } from '@js_godot/variant/packed_vector3_array'
import { StringName } from '@js_godot/variant/string_name'
import { GDString } from '@js_godot/variant/gd_string'
import { Vector2 } from '@js_godot/variant/vector2'
import { RefCounted } from '@js_godot/classes/ref_counted'
import { Projection } from '@js_godot/variant/projection'
import { GDArray } from '@js_godot/variant/gd_array'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_get_name;
  method_get_capabilities;
  method_is_primary;
  method_set_primary;
  method_is_initialized;
  method_initialize;
  method_uninitialize;
  method_get_system_info;
  method_get_tracking_status;
  method_get_render_target_size;
  method_get_view_count;
  method_trigger_haptic_pulse;
  method_supports_play_area_mode;
  method_get_play_area_mode;
  method_set_play_area_mode;
  method_get_play_area;
  method_get_anchor_detection_is_enabled;
  method_set_anchor_detection_is_enabled;
  method_get_camera_feed_id;
  method_is_passthrough_supported;
  method_is_passthrough_enabled;
  method_start_passthrough;
  method_stop_passthrough;
  method_get_transform_for_view;
  method_get_projection_for_view;
  method_get_supported_environment_blend_modes;
  method_set_environment_blend_mode;
  method_get_environment_blend_mode;
}
export class XRInterface extends RefCounted{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("XRInterface");
    } else {
      super(godot_object);
    }
  }
  
  static async _init_bindings() {
    if (this.#initialized) {
      return;
    }
    this.#initialized = true;
    {
      let classname = new StringName("XRInterface");
      let methodname = new StringName("get_name");
      this._bindings.method_get_name = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2002593661
      );
    }
    {
      let classname = new StringName("XRInterface");
      let methodname = new StringName("get_capabilities");
      this._bindings.method_get_capabilities = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3905245786
      );
    }
    {
      let classname = new StringName("XRInterface");
      let methodname = new StringName("is_primary");
      this._bindings.method_is_primary = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2240911060
      );
    }
    {
      let classname = new StringName("XRInterface");
      let methodname = new StringName("set_primary");
      this._bindings.method_set_primary = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("XRInterface");
      let methodname = new StringName("is_initialized");
      this._bindings.method_is_initialized = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("XRInterface");
      let methodname = new StringName("initialize");
      this._bindings.method_initialize = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2240911060
      );
    }
    {
      let classname = new StringName("XRInterface");
      let methodname = new StringName("uninitialize");
      this._bindings.method_uninitialize = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("XRInterface");
      let methodname = new StringName("get_system_info");
      this._bindings.method_get_system_info = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2382534195
      );
    }
    {
      let classname = new StringName("XRInterface");
      let methodname = new StringName("get_tracking_status");
      this._bindings.method_get_tracking_status = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        167423259
      );
    }
    {
      let classname = new StringName("XRInterface");
      let methodname = new StringName("get_render_target_size");
      this._bindings.method_get_render_target_size = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1497962370
      );
    }
    {
      let classname = new StringName("XRInterface");
      let methodname = new StringName("get_view_count");
      this._bindings.method_get_view_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2455072627
      );
    }
    {
      let classname = new StringName("XRInterface");
      let methodname = new StringName("trigger_haptic_pulse");
      this._bindings.method_trigger_haptic_pulse = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3752640163
      );
    }
    {
      let classname = new StringName("XRInterface");
      let methodname = new StringName("supports_play_area_mode");
      this._bindings.method_supports_play_area_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3429955281
      );
    }
    {
      let classname = new StringName("XRInterface");
      let methodname = new StringName("get_play_area_mode");
      this._bindings.method_get_play_area_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1615132885
      );
    }
    {
      let classname = new StringName("XRInterface");
      let methodname = new StringName("set_play_area_mode");
      this._bindings.method_set_play_area_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3429955281
      );
    }
    {
      let classname = new StringName("XRInterface");
      let methodname = new StringName("get_play_area");
      this._bindings.method_get_play_area = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        497664490
      );
    }
    {
      let classname = new StringName("XRInterface");
      let methodname = new StringName("get_anchor_detection_is_enabled");
      this._bindings.method_get_anchor_detection_is_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        36873697
      );
    }
    {
      let classname = new StringName("XRInterface");
      let methodname = new StringName("set_anchor_detection_is_enabled");
      this._bindings.method_set_anchor_detection_is_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2586408642
      );
    }
    {
      let classname = new StringName("XRInterface");
      let methodname = new StringName("get_camera_feed_id");
      this._bindings.method_get_camera_feed_id = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2455072627
      );
    }
    {
      let classname = new StringName("XRInterface");
      let methodname = new StringName("is_passthrough_supported");
      this._bindings.method_is_passthrough_supported = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2240911060
      );
    }
    {
      let classname = new StringName("XRInterface");
      let methodname = new StringName("is_passthrough_enabled");
      this._bindings.method_is_passthrough_enabled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2240911060
      );
    }
    {
      let classname = new StringName("XRInterface");
      let methodname = new StringName("start_passthrough");
      this._bindings.method_start_passthrough = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2240911060
      );
    }
    {
      let classname = new StringName("XRInterface");
      let methodname = new StringName("stop_passthrough");
      this._bindings.method_stop_passthrough = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
    {
      let classname = new StringName("XRInterface");
      let methodname = new StringName("get_transform_for_view");
      this._bindings.method_get_transform_for_view = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        518934792
      );
    }
    {
      let classname = new StringName("XRInterface");
      let methodname = new StringName("get_projection_for_view");
      this._bindings.method_get_projection_for_view = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3766090294
      );
    }
    {
      let classname = new StringName("XRInterface");
      let methodname = new StringName("get_supported_environment_blend_modes");
      this._bindings.method_get_supported_environment_blend_modes = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2915620761
      );
    }
    {
      let classname = new StringName("XRInterface");
      let methodname = new StringName("set_environment_blend_mode");
      this._bindings.method_set_environment_blend_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        551152418
      );
    }
    {
      let classname = new StringName("XRInterface");
      let methodname = new StringName("get_environment_blend_mode");
      this._bindings.method_get_environment_blend_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1984334071
      );
    }
  }
  get_name() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_name,
      this._owner,
			Variant.Type.STRING_NAME,
    
      
    );
    
  }
  get_capabilities() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_capabilities,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  is_primary() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_primary,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_primary(_primary) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_primary,
      this._owner,
      _primary
    );
    
  }
  is_initialized() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_initialized,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  initialize() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_initialize,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  uninitialize() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_uninitialize,
      this._owner,
      
    );
    
  }
  get_system_info() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_system_info,
      this._owner,
			Variant.Type.DICTIONARY,
    
      
    );
    
  }
  get_tracking_status() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_tracking_status,
      this._owner,
			Variant.INT,
      
    );
    
  }
  get_render_target_size() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_render_target_size,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  get_view_count() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_view_count,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  trigger_haptic_pulse(_action_name, _tracker_name, _frequency, _amplitude, _duration_sec, _delay_sec) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_trigger_haptic_pulse,
      this._owner,
      _action_name, _tracker_name, _frequency, _amplitude, _duration_sec, _delay_sec
    );
    
  }
  supports_play_area_mode(_mode) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_supports_play_area_mode,
      this._owner,
			Variant.Type.BOOL,
      _mode
    );
    
  }
  get_play_area_mode() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_play_area_mode,
      this._owner,
			Variant.INT,
      
    );
    
  }
  set_play_area_mode(_mode) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_set_play_area_mode,
      this._owner,
			Variant.Type.BOOL,
      _mode
    );
    
  }
  get_play_area() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_play_area,
      this._owner,
			Variant.Type.PACKED_VECTOR3_ARRAY,
    
      
    );
    
  }
  get_anchor_detection_is_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_anchor_detection_is_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  set_anchor_detection_is_enabled(_enable) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_anchor_detection_is_enabled,
      this._owner,
      _enable
    );
    
  }
  get_camera_feed_id() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_camera_feed_id,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  is_passthrough_supported() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_passthrough_supported,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  is_passthrough_enabled() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_passthrough_enabled,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  start_passthrough() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_start_passthrough,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  stop_passthrough() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_stop_passthrough,
      this._owner,
      
    );
    
  }
  get_transform_for_view(_view, _cam_transform) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_transform_for_view,
      this._owner,
			Variant.Type.TRANSFORM3D,
    
      _view, _cam_transform
    );
    
  }
  get_projection_for_view(_view, _aspect, _near, _far) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_projection_for_view,
      this._owner,
			Variant.Type.PROJECTION,
    
      _view, _aspect, _near, _far
    );
    
  }
  get_supported_environment_blend_modes() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_supported_environment_blend_modes,
      this._owner,
			Variant.Type.ARRAY,
    
      
    );
    
  }
  set_environment_blend_mode(_mode) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_set_environment_blend_mode,
      this._owner,
			Variant.Type.BOOL,
      _mode
    );
    
  }
  get_environment_blend_mode() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_environment_blend_mode,
      this._owner,
			Variant.INT,
      
    );
    
  }
  
get interface_is_primary () {
  return this.is_primary();
}
set interface_is_primary (new_value) {
  this.set_primary(new_value);
}
get xr_play_area_mode () {
  return this.get_play_area_mode();
}
set xr_play_area_mode (new_value) {
  this.set_play_area_mode(new_value);
}
get environment_blend_mode () {
  return this.get_environment_blend_mode();
}
set environment_blend_mode (new_value) {
  this.set_environment_blend_mode(new_value);
}
get ar_is_anchor_detection_enabled () {
  return this.get_anchor_detection_is_enabled();
}
set ar_is_anchor_detection_enabled (new_value) {
  this.set_anchor_detection_is_enabled(new_value);
}

  static Capabilities = {
    XR_NONE: 0,
    XR_MONO: 1,
    XR_STEREO: 2,
    XR_QUAD: 4,
    XR_VR: 8,
    XR_AR: 16,
    XR_EXTERNAL: 32,
  }
  static TrackingStatus = {
    XR_NORMAL_TRACKING: 0,
    XR_EXCESSIVE_MOTION: 1,
    XR_INSUFFICIENT_FEATURES: 2,
    XR_UNKNOWN_TRACKING: 3,
    XR_NOT_TRACKING: 4,
  }
  static PlayAreaMode = {
    XR_PLAY_AREA_UNKNOWN: 0,
    XR_PLAY_AREA_3DOF: 1,
    XR_PLAY_AREA_SITTING: 2,
    XR_PLAY_AREA_ROOMSCALE: 3,
    XR_PLAY_AREA_STAGE: 4,
  }
  static EnvironmentBlendMode = {
    XR_ENV_BLEND_MODE_OPAQUE: 0,
    XR_ENV_BLEND_MODE_ADDITIVE: 1,
    XR_ENV_BLEND_MODE_ALPHA_BLEND: 2,
  }

  static {
    this._init_bindings();
  }
}