import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { RefCounted } from '@js_godot/classes/ref_counted'
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

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("XRInterface");
    } else {
      super(godot_object);
    }
  }
  static init_method_get_name() {
    if (!this.#_bindings.method_get_name) {
      let classname = new StringName("XRInterface");
      let methodname = new StringName("get_name");
      this.#_bindings.method_get_name = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2002593661
      );
    }
  }
  static init_method_get_capabilities() {
    if (!this.#_bindings.method_get_capabilities) {
      let classname = new StringName("XRInterface");
      let methodname = new StringName("get_capabilities");
      this.#_bindings.method_get_capabilities = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3905245786
      );
    }
  }
  static init_method_is_primary() {
    if (!this.#_bindings.method_is_primary) {
      let classname = new StringName("XRInterface");
      let methodname = new StringName("is_primary");
      this.#_bindings.method_is_primary = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2240911060
      );
    }
  }
  static init_method_set_primary() {
    if (!this.#_bindings.method_set_primary) {
      let classname = new StringName("XRInterface");
      let methodname = new StringName("set_primary");
      this.#_bindings.method_set_primary = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_is_initialized() {
    if (!this.#_bindings.method_is_initialized) {
      let classname = new StringName("XRInterface");
      let methodname = new StringName("is_initialized");
      this.#_bindings.method_is_initialized = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_initialize() {
    if (!this.#_bindings.method_initialize) {
      let classname = new StringName("XRInterface");
      let methodname = new StringName("initialize");
      this.#_bindings.method_initialize = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2240911060
      );
    }
  }
  static init_method_uninitialize() {
    if (!this.#_bindings.method_uninitialize) {
      let classname = new StringName("XRInterface");
      let methodname = new StringName("uninitialize");
      this.#_bindings.method_uninitialize = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_get_system_info() {
    if (!this.#_bindings.method_get_system_info) {
      let classname = new StringName("XRInterface");
      let methodname = new StringName("get_system_info");
      this.#_bindings.method_get_system_info = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2382534195
      );
    }
  }
  static init_method_get_tracking_status() {
    if (!this.#_bindings.method_get_tracking_status) {
      let classname = new StringName("XRInterface");
      let methodname = new StringName("get_tracking_status");
      this.#_bindings.method_get_tracking_status = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        167423259
      );
    }
  }
  static init_method_get_render_target_size() {
    if (!this.#_bindings.method_get_render_target_size) {
      let classname = new StringName("XRInterface");
      let methodname = new StringName("get_render_target_size");
      this.#_bindings.method_get_render_target_size = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1497962370
      );
    }
  }
  static init_method_get_view_count() {
    if (!this.#_bindings.method_get_view_count) {
      let classname = new StringName("XRInterface");
      let methodname = new StringName("get_view_count");
      this.#_bindings.method_get_view_count = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2455072627
      );
    }
  }
  static init_method_trigger_haptic_pulse() {
    if (!this.#_bindings.method_trigger_haptic_pulse) {
      let classname = new StringName("XRInterface");
      let methodname = new StringName("trigger_haptic_pulse");
      this.#_bindings.method_trigger_haptic_pulse = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3752640163
      );
    }
  }
  static init_method_supports_play_area_mode() {
    if (!this.#_bindings.method_supports_play_area_mode) {
      let classname = new StringName("XRInterface");
      let methodname = new StringName("supports_play_area_mode");
      this.#_bindings.method_supports_play_area_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3429955281
      );
    }
  }
  static init_method_get_play_area_mode() {
    if (!this.#_bindings.method_get_play_area_mode) {
      let classname = new StringName("XRInterface");
      let methodname = new StringName("get_play_area_mode");
      this.#_bindings.method_get_play_area_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1615132885
      );
    }
  }
  static init_method_set_play_area_mode() {
    if (!this.#_bindings.method_set_play_area_mode) {
      let classname = new StringName("XRInterface");
      let methodname = new StringName("set_play_area_mode");
      this.#_bindings.method_set_play_area_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3429955281
      );
    }
  }
  static init_method_get_play_area() {
    if (!this.#_bindings.method_get_play_area) {
      let classname = new StringName("XRInterface");
      let methodname = new StringName("get_play_area");
      this.#_bindings.method_get_play_area = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        497664490
      );
    }
  }
  static init_method_get_anchor_detection_is_enabled() {
    if (!this.#_bindings.method_get_anchor_detection_is_enabled) {
      let classname = new StringName("XRInterface");
      let methodname = new StringName("get_anchor_detection_is_enabled");
      this.#_bindings.method_get_anchor_detection_is_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        36873697
      );
    }
  }
  static init_method_set_anchor_detection_is_enabled() {
    if (!this.#_bindings.method_set_anchor_detection_is_enabled) {
      let classname = new StringName("XRInterface");
      let methodname = new StringName("set_anchor_detection_is_enabled");
      this.#_bindings.method_set_anchor_detection_is_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2586408642
      );
    }
  }
  static init_method_get_camera_feed_id() {
    if (!this.#_bindings.method_get_camera_feed_id) {
      let classname = new StringName("XRInterface");
      let methodname = new StringName("get_camera_feed_id");
      this.#_bindings.method_get_camera_feed_id = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2455072627
      );
    }
  }
  static init_method_is_passthrough_supported() {
    if (!this.#_bindings.method_is_passthrough_supported) {
      let classname = new StringName("XRInterface");
      let methodname = new StringName("is_passthrough_supported");
      this.#_bindings.method_is_passthrough_supported = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2240911060
      );
    }
  }
  static init_method_is_passthrough_enabled() {
    if (!this.#_bindings.method_is_passthrough_enabled) {
      let classname = new StringName("XRInterface");
      let methodname = new StringName("is_passthrough_enabled");
      this.#_bindings.method_is_passthrough_enabled = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2240911060
      );
    }
  }
  static init_method_start_passthrough() {
    if (!this.#_bindings.method_start_passthrough) {
      let classname = new StringName("XRInterface");
      let methodname = new StringName("start_passthrough");
      this.#_bindings.method_start_passthrough = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2240911060
      );
    }
  }
  static init_method_stop_passthrough() {
    if (!this.#_bindings.method_stop_passthrough) {
      let classname = new StringName("XRInterface");
      let methodname = new StringName("stop_passthrough");
      this.#_bindings.method_stop_passthrough = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }
  static init_method_get_transform_for_view() {
    if (!this.#_bindings.method_get_transform_for_view) {
      let classname = new StringName("XRInterface");
      let methodname = new StringName("get_transform_for_view");
      this.#_bindings.method_get_transform_for_view = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        518934792
      );
    }
  }
  static init_method_get_projection_for_view() {
    if (!this.#_bindings.method_get_projection_for_view) {
      let classname = new StringName("XRInterface");
      let methodname = new StringName("get_projection_for_view");
      this.#_bindings.method_get_projection_for_view = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3766090294
      );
    }
  }
  static init_method_get_supported_environment_blend_modes() {
    if (!this.#_bindings.method_get_supported_environment_blend_modes) {
      let classname = new StringName("XRInterface");
      let methodname = new StringName("get_supported_environment_blend_modes");
      this.#_bindings.method_get_supported_environment_blend_modes = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        2915620761
      );
    }
  }
  static init_method_set_environment_blend_mode() {
    if (!this.#_bindings.method_set_environment_blend_mode) {
      let classname = new StringName("XRInterface");
      let methodname = new StringName("set_environment_blend_mode");
      this.#_bindings.method_set_environment_blend_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        551152418
      );
    }
  }
  static init_method_get_environment_blend_mode() {
    if (!this.#_bindings.method_get_environment_blend_mode) {
      let classname = new StringName("XRInterface");
      let methodname = new StringName("get_environment_blend_mode");
      this.#_bindings.method_get_environment_blend_mode = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1984334071
      );
    }
  }

  
  
  get_name() {
    XRInterface.init_method_get_name();
    return _call_native_mb_ret(
      XRInterface.#_bindings.method_get_name,
      this._owner,
			Variant.Type.STRING_NAME,
    
      
    );
    
  }
  get_capabilities() {
    XRInterface.init_method_get_capabilities();
    return _call_native_mb_ret(
      XRInterface.#_bindings.method_get_capabilities,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  is_primary() {
    XRInterface.init_method_is_primary();
    return _call_native_mb_ret(
      XRInterface.#_bindings.method_is_primary,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_primary(_primary) {
    XRInterface.init_method_set_primary();
    return _call_native_mb_no_ret(
      XRInterface.#_bindings.method_set_primary,
      this._owner,
      _primary
    );
    
  }
  is_initialized() {
    XRInterface.init_method_is_initialized();
    return _call_native_mb_ret(
      XRInterface.#_bindings.method_is_initialized,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  initialize() {
    XRInterface.init_method_initialize();
    return _call_native_mb_ret(
      XRInterface.#_bindings.method_initialize,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  uninitialize() {
    XRInterface.init_method_uninitialize();
    return _call_native_mb_no_ret(
      XRInterface.#_bindings.method_uninitialize,
      this._owner,
      
    );
    
  }
  get_system_info() {
    XRInterface.init_method_get_system_info();
    return _call_native_mb_ret(
      XRInterface.#_bindings.method_get_system_info,
      this._owner,
			Variant.Type.DICTIONARY,
    
      
    );
    
  }
  get_tracking_status() {
    XRInterface.init_method_get_tracking_status();
    return _call_native_mb_ret(
      XRInterface.#_bindings.method_get_tracking_status,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  get_render_target_size() {
    XRInterface.init_method_get_render_target_size();
    return _call_native_mb_ret(
      XRInterface.#_bindings.method_get_render_target_size,
      this._owner,
			Variant.Type.VECTOR2,
    
      
    );
    
  }
  get_view_count() {
    XRInterface.init_method_get_view_count();
    return _call_native_mb_ret(
      XRInterface.#_bindings.method_get_view_count,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  trigger_haptic_pulse(_action_name, _tracker_name, _frequency, _amplitude, _duration_sec, _delay_sec) {
    XRInterface.init_method_trigger_haptic_pulse();
    return _call_native_mb_no_ret(
      XRInterface.#_bindings.method_trigger_haptic_pulse,
      this._owner,
      _action_name, _tracker_name, _frequency, _amplitude, _duration_sec, _delay_sec
    );
    
  }
  supports_play_area_mode(_mode) {
    XRInterface.init_method_supports_play_area_mode();
    return _call_native_mb_ret(
      XRInterface.#_bindings.method_supports_play_area_mode,
      this._owner,
			Variant.Type.BOOL,
    
      _mode
    );
    
  }
  get_play_area_mode() {
    XRInterface.init_method_get_play_area_mode();
    return _call_native_mb_ret(
      XRInterface.#_bindings.method_get_play_area_mode,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  set_play_area_mode(_mode) {
    XRInterface.init_method_set_play_area_mode();
    return _call_native_mb_ret(
      XRInterface.#_bindings.method_set_play_area_mode,
      this._owner,
			Variant.Type.BOOL,
    
      _mode
    );
    
  }
  get_play_area() {
    XRInterface.init_method_get_play_area();
    return _call_native_mb_ret(
      XRInterface.#_bindings.method_get_play_area,
      this._owner,
			Variant.Type.PACKED_VECTOR3_ARRAY,
    
      
    );
    
  }
  get_anchor_detection_is_enabled() {
    XRInterface.init_method_get_anchor_detection_is_enabled();
    return _call_native_mb_ret(
      XRInterface.#_bindings.method_get_anchor_detection_is_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  set_anchor_detection_is_enabled(_enable) {
    XRInterface.init_method_set_anchor_detection_is_enabled();
    return _call_native_mb_no_ret(
      XRInterface.#_bindings.method_set_anchor_detection_is_enabled,
      this._owner,
      _enable
    );
    
  }
  get_camera_feed_id() {
    XRInterface.init_method_get_camera_feed_id();
    return _call_native_mb_ret(
      XRInterface.#_bindings.method_get_camera_feed_id,
      this._owner,
			Variant.Type.INT,
    
      
    );
    
  }
  is_passthrough_supported() {
    XRInterface.init_method_is_passthrough_supported();
    return _call_native_mb_ret(
      XRInterface.#_bindings.method_is_passthrough_supported,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  is_passthrough_enabled() {
    XRInterface.init_method_is_passthrough_enabled();
    return _call_native_mb_ret(
      XRInterface.#_bindings.method_is_passthrough_enabled,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  start_passthrough() {
    XRInterface.init_method_start_passthrough();
    return _call_native_mb_ret(
      XRInterface.#_bindings.method_start_passthrough,
      this._owner,
			Variant.Type.BOOL,
    
      
    );
    
  }
  stop_passthrough() {
    XRInterface.init_method_stop_passthrough();
    return _call_native_mb_no_ret(
      XRInterface.#_bindings.method_stop_passthrough,
      this._owner,
      
    );
    
  }
  get_transform_for_view(_view, _cam_transform) {
    XRInterface.init_method_get_transform_for_view();
    return _call_native_mb_ret(
      XRInterface.#_bindings.method_get_transform_for_view,
      this._owner,
			Variant.Type.TRANSFORM3D,
    
      _view, _cam_transform
    );
    
  }
  get_projection_for_view(_view, _aspect, _near, _far) {
    XRInterface.init_method_get_projection_for_view();
    return _call_native_mb_ret(
      XRInterface.#_bindings.method_get_projection_for_view,
      this._owner,
			Variant.Type.PROJECTION,
    
      _view, _aspect, _near, _far
    );
    
  }
  get_supported_environment_blend_modes() {
    XRInterface.init_method_get_supported_environment_blend_modes();
    return _call_native_mb_ret(
      XRInterface.#_bindings.method_get_supported_environment_blend_modes,
      this._owner,
			Variant.Type.ARRAY,
    
      
    );
    
  }
  set_environment_blend_mode(_mode) {
    XRInterface.init_method_set_environment_blend_mode();
    return _call_native_mb_ret(
      XRInterface.#_bindings.method_set_environment_blend_mode,
      this._owner,
			Variant.Type.BOOL,
    
      _mode
    );
    
  }
  get_environment_blend_mode() {
    XRInterface.init_method_get_environment_blend_mode();
    return _call_native_mb_ret(
      XRInterface.#_bindings.method_get_environment_blend_mode,
      this._owner,
			Variant.Type.INT,
    
      
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
}