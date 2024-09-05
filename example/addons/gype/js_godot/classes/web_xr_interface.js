import * as internal from '__internal__';
import { XRInterface } from '@js_godot/classes/xr_interface'
import { StringName } from '@js_godot/variant/string_name'
import { Variant } from '@js_godot/variant/variant'
import { GDString } from '@js_godot/variant/gd_string'
import { GDArray } from '@js_godot/variant/gd_array'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_is_session_supported;
  method_set_session_mode;
  method_get_session_mode;
  method_set_required_features;
  method_get_required_features;
  method_set_optional_features;
  method_get_optional_features;
  method_get_reference_space_type;
  method_get_enabled_features;
  method_set_requested_reference_space_types;
  method_get_requested_reference_space_types;
  method_is_input_source_active;
  method_get_input_source_tracker;
  method_get_input_source_target_ray_mode;
  method_get_visibility_state;
  method_get_display_refresh_rate;
  method_set_display_refresh_rate;
  method_get_available_display_refresh_rates;
}
export class WebXRInterface extends XRInterface{

  static _bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("WebXRInterface");
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
      let classname = new StringName("WebXRInterface");
      let methodname = new StringName("is_session_supported");
      this._bindings.method_is_session_supported = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        83702148
      );
    }
    {
      let classname = new StringName("WebXRInterface");
      let methodname = new StringName("set_session_mode");
      this._bindings.method_set_session_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        83702148
      );
    }
    {
      let classname = new StringName("WebXRInterface");
      let methodname = new StringName("get_session_mode");
      this._bindings.method_get_session_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        201670096
      );
    }
    {
      let classname = new StringName("WebXRInterface");
      let methodname = new StringName("set_required_features");
      this._bindings.method_set_required_features = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        83702148
      );
    }
    {
      let classname = new StringName("WebXRInterface");
      let methodname = new StringName("get_required_features");
      this._bindings.method_get_required_features = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        201670096
      );
    }
    {
      let classname = new StringName("WebXRInterface");
      let methodname = new StringName("set_optional_features");
      this._bindings.method_set_optional_features = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        83702148
      );
    }
    {
      let classname = new StringName("WebXRInterface");
      let methodname = new StringName("get_optional_features");
      this._bindings.method_get_optional_features = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        201670096
      );
    }
    {
      let classname = new StringName("WebXRInterface");
      let methodname = new StringName("get_reference_space_type");
      this._bindings.method_get_reference_space_type = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        201670096
      );
    }
    {
      let classname = new StringName("WebXRInterface");
      let methodname = new StringName("get_enabled_features");
      this._bindings.method_get_enabled_features = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        201670096
      );
    }
    {
      let classname = new StringName("WebXRInterface");
      let methodname = new StringName("set_requested_reference_space_types");
      this._bindings.method_set_requested_reference_space_types = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        83702148
      );
    }
    {
      let classname = new StringName("WebXRInterface");
      let methodname = new StringName("get_requested_reference_space_types");
      this._bindings.method_get_requested_reference_space_types = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        201670096
      );
    }
    {
      let classname = new StringName("WebXRInterface");
      let methodname = new StringName("is_input_source_active");
      this._bindings.method_is_input_source_active = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1116898809
      );
    }
    {
      let classname = new StringName("WebXRInterface");
      let methodname = new StringName("get_input_source_tracker");
      this._bindings.method_get_input_source_tracker = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        399776966
      );
    }
    {
      let classname = new StringName("WebXRInterface");
      let methodname = new StringName("get_input_source_target_ray_mode");
      this._bindings.method_get_input_source_target_ray_mode = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        2852387453
      );
    }
    {
      let classname = new StringName("WebXRInterface");
      let methodname = new StringName("get_visibility_state");
      this._bindings.method_get_visibility_state = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        201670096
      );
    }
    {
      let classname = new StringName("WebXRInterface");
      let methodname = new StringName("get_display_refresh_rate");
      this._bindings.method_get_display_refresh_rate = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1740695150
      );
    }
    {
      let classname = new StringName("WebXRInterface");
      let methodname = new StringName("set_display_refresh_rate");
      this._bindings.method_set_display_refresh_rate = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        373806689
      );
    }
    {
      let classname = new StringName("WebXRInterface");
      let methodname = new StringName("get_available_display_refresh_rates");
      this._bindings.method_get_available_display_refresh_rates = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3995934104
      );
    }
  }
  
  is_session_supported(_session_mode) {
    return _call_native_mb_no_ret(
      WebXRInterface._bindings.method_is_session_supported,
      this._owner,
      _session_mode
    );
    
  }
  set_session_mode(_session_mode) {
    return _call_native_mb_no_ret(
      WebXRInterface._bindings.method_set_session_mode,
      this._owner,
      _session_mode
    );
    
  }
  get_session_mode() {
    return _call_native_mb_ret(
      WebXRInterface._bindings.method_get_session_mode,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  set_required_features(_required_features) {
    return _call_native_mb_no_ret(
      WebXRInterface._bindings.method_set_required_features,
      this._owner,
      _required_features
    );
    
  }
  get_required_features() {
    return _call_native_mb_ret(
      WebXRInterface._bindings.method_get_required_features,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  set_optional_features(_optional_features) {
    return _call_native_mb_no_ret(
      WebXRInterface._bindings.method_set_optional_features,
      this._owner,
      _optional_features
    );
    
  }
  get_optional_features() {
    return _call_native_mb_ret(
      WebXRInterface._bindings.method_get_optional_features,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  get_reference_space_type() {
    return _call_native_mb_ret(
      WebXRInterface._bindings.method_get_reference_space_type,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  get_enabled_features() {
    return _call_native_mb_ret(
      WebXRInterface._bindings.method_get_enabled_features,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  set_requested_reference_space_types(_requested_reference_space_types) {
    return _call_native_mb_no_ret(
      WebXRInterface._bindings.method_set_requested_reference_space_types,
      this._owner,
      _requested_reference_space_types
    );
    
  }
  get_requested_reference_space_types() {
    return _call_native_mb_ret(
      WebXRInterface._bindings.method_get_requested_reference_space_types,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  is_input_source_active(_input_source_id) {
    return _call_native_mb_ret(
      WebXRInterface._bindings.method_is_input_source_active,
      this._owner,
			Variant.Type.BOOL,
      _input_source_id
    );
    
  }
  get_input_source_tracker(_input_source_id) {
    return _call_native_mb_ret(
      WebXRInterface._bindings.method_get_input_source_tracker,
      this._owner,
			Variant.INT,
      _input_source_id
    );
    
  }
  get_input_source_target_ray_mode(_input_source_id) {
    return _call_native_mb_ret(
      WebXRInterface._bindings.method_get_input_source_target_ray_mode,
      this._owner,
			Variant.INT,
      _input_source_id
    );
    
  }
  get_visibility_state() {
    return _call_native_mb_ret(
      WebXRInterface._bindings.method_get_visibility_state,
      this._owner,
			Variant.Type.STRING,
    
      
    );
    
  }
  get_display_refresh_rate() {
    return _call_native_mb_ret(
      WebXRInterface._bindings.method_get_display_refresh_rate,
      this._owner,
			Variant.Type.FLOAT,
      
    );
    
  }
  set_display_refresh_rate(_refresh_rate) {
    return _call_native_mb_no_ret(
      WebXRInterface._bindings.method_set_display_refresh_rate,
      this._owner,
      _refresh_rate
    );
    
  }
  get_available_display_refresh_rates() {
    return _call_native_mb_ret(
      WebXRInterface._bindings.method_get_available_display_refresh_rates,
      this._owner,
			Variant.Type.ARRAY,
    
      
    );
    
  }
  
get session_mode () {
  return this.get_session_mode();
}
set session_mode (new_value) {
  this.set_session_mode(new_value);
}
get required_features () {
  return this.get_required_features();
}
set required_features (new_value) {
  this.set_required_features(new_value);
}
get optional_features () {
  return this.get_optional_features();
}
set optional_features (new_value) {
  this.set_optional_features(new_value);
}
get requested_reference_space_types () {
  return this.get_requested_reference_space_types();
}
set requested_reference_space_types (new_value) {
  this.set_requested_reference_space_types(new_value);
}
get reference_space_type () {
  return this.get_reference_space_type();
}
get enabled_features () {
  return this.get_enabled_features();
}
get visibility_state () {
  return this.get_visibility_state();
}

  static TargetRayMode = {
    TARGET_RAY_MODE_UNKNOWN: 0,
    TARGET_RAY_MODE_GAZE: 1,
    TARGET_RAY_MODE_TRACKED_POINTER: 2,
    TARGET_RAY_MODE_SCREEN: 3,
  }

  static {
    this._init_bindings();
  }
}