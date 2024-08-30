import * as internal from '__internal__';
import { GDString } from 'src/js_godot/variant/gd_string'
import { StringName } from 'src/js_godot/variant/string_name'
import { Transform3D } from 'src/js_godot/variant/transform3d'
import { GDArray } from 'src/js_godot/variant/gd_array'
import { RefCounted } from 'src/js_godot/classes/ref_counted'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "src/js_godot/core/engine_ptrcall";

class _MethodBindings {
    method_get_instance;
    method_get_system_id;
    method_get_session;
    method_transform_from_pose;
    method_xr_result;
    method_openxr_is_enabled;
    method_get_instance_proc_addr;
    method_get_error_string;
    method_get_swapchain_format_name;
    method_is_initialized;
    method_is_running;
    method_get_play_space;
    method_get_predicted_display_time;
    method_get_next_frame_time;
    method_can_render;
    method_get_hand_tracker;
    method_register_composition_layer_provider;
    method_unregister_composition_layer_provider;
    method_set_emulate_environment_blend_mode_alpha_blend;
    method_is_environment_blend_mode_alpha_supported;
}


export class OpenXRAPIExtension extends RefCounted{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("OpenXRAPIExtension");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
      {
        let classname = new StringName("OpenXRAPIExtension");
        let methodname = new StringName("get_instance");
        this._bindings.method_get_instance = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2455072627
        );
      }
      {
        let classname = new StringName("OpenXRAPIExtension");
        let methodname = new StringName("get_system_id");
        this._bindings.method_get_system_id = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2455072627
        );
      }
      {
        let classname = new StringName("OpenXRAPIExtension");
        let methodname = new StringName("get_session");
        this._bindings.method_get_session = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2455072627
        );
      }
      {
        let classname = new StringName("OpenXRAPIExtension");
        let methodname = new StringName("transform_from_pose");
        this._bindings.method_transform_from_pose = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3255299855
        );
      }
      {
        let classname = new StringName("OpenXRAPIExtension");
        let methodname = new StringName("xr_result");
        this._bindings.method_xr_result = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3886436197
        );
      }
      {
        let classname = new StringName("OpenXRAPIExtension");
        let methodname = new StringName("openxr_is_enabled");
        this._bindings.method_openxr_is_enabled = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2703660260
        );
      }
      {
        let classname = new StringName("OpenXRAPIExtension");
        let methodname = new StringName("get_instance_proc_addr");
        this._bindings.method_get_instance_proc_addr = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1597066294
        );
      }
      {
        let classname = new StringName("OpenXRAPIExtension");
        let methodname = new StringName("get_error_string");
        this._bindings.method_get_error_string = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          990163283
        );
      }
      {
        let classname = new StringName("OpenXRAPIExtension");
        let methodname = new StringName("get_swapchain_format_name");
        this._bindings.method_get_swapchain_format_name = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          990163283
        );
      }
      {
        let classname = new StringName("OpenXRAPIExtension");
        let methodname = new StringName("is_initialized");
        this._bindings.method_is_initialized = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2240911060
        );
      }
      {
        let classname = new StringName("OpenXRAPIExtension");
        let methodname = new StringName("is_running");
        this._bindings.method_is_running = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2240911060
        );
      }
      {
        let classname = new StringName("OpenXRAPIExtension");
        let methodname = new StringName("get_play_space");
        this._bindings.method_get_play_space = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2455072627
        );
      }
      {
        let classname = new StringName("OpenXRAPIExtension");
        let methodname = new StringName("get_predicted_display_time");
        this._bindings.method_get_predicted_display_time = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2455072627
        );
      }
      {
        let classname = new StringName("OpenXRAPIExtension");
        let methodname = new StringName("get_next_frame_time");
        this._bindings.method_get_next_frame_time = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2455072627
        );
      }
      {
        let classname = new StringName("OpenXRAPIExtension");
        let methodname = new StringName("can_render");
        this._bindings.method_can_render = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2240911060
        );
      }
      {
        let classname = new StringName("OpenXRAPIExtension");
        let methodname = new StringName("get_hand_tracker");
        this._bindings.method_get_hand_tracker = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          3744713108
        );
      }
      {
        let classname = new StringName("OpenXRAPIExtension");
        let methodname = new StringName("register_composition_layer_provider");
        this._bindings.method_register_composition_layer_provider = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1997997368
        );
      }
      {
        let classname = new StringName("OpenXRAPIExtension");
        let methodname = new StringName("unregister_composition_layer_provider");
        this._bindings.method_unregister_composition_layer_provider = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1997997368
        );
      }
      {
        let classname = new StringName("OpenXRAPIExtension");
        let methodname = new StringName("set_emulate_environment_blend_mode_alpha_blend");
        this._bindings.method_set_emulate_environment_blend_mode_alpha_blend = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          2586408642
        );
      }
      {
        let classname = new StringName("OpenXRAPIExtension");
        let methodname = new StringName("is_environment_blend_mode_alpha_supported");
        this._bindings.method_is_environment_blend_mode_alpha_supported = internal.classdb_get_method_bind(
          classname.opaque, 
          methodname.opaque, 
          1579290861
        );
      }
  }
  get_instance() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_instance,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  get_system_id() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_system_id,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  get_session() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_session,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  transform_from_pose(_pose) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_transform_from_pose,
      this._owner,
			Variant.Type.TRANSFORM3D
    ,
      _pose
    );
    
  }
  xr_result(_result, _format, _args) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_xr_result,
      this._owner,
			Variant.Type.BOOL,
      _result, _format, _args
    );
    
  }
  openxr_is_enabled(_check_run_in_editor) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_openxr_is_enabled,
      this._owner,
			Variant.Type.BOOL,
      _check_run_in_editor
    );
    
  }
  get_instance_proc_addr(_name) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_instance_proc_addr,
      this._owner,
			Variant.Type.INT,
      _name
    );
    
  }
  get_error_string(_result) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_error_string,
      this._owner,
			Variant.Type.STRING
    ,
      _result
    );
    
  }
  get_swapchain_format_name(_swapchain_format) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_swapchain_format_name,
      this._owner,
			Variant.Type.STRING
    ,
      _swapchain_format
    );
    
  }
  is_initialized() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_initialized,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  is_running() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_running,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  get_play_space() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_play_space,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  get_predicted_display_time() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_predicted_display_time,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  get_next_frame_time() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_next_frame_time,
      this._owner,
			Variant.Type.INT,
      
    );
    
  }
  can_render() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_can_render,
      this._owner,
			Variant.Type.BOOL,
      
    );
    
  }
  get_hand_tracker(_hand_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_hand_tracker,
      this._owner,
			Variant.Type.INT,
      _hand_index
    );
    
  }
  register_composition_layer_provider(_extension) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_register_composition_layer_provider,
      this._owner,
      _extension
    );
    
  }
  unregister_composition_layer_provider(_extension) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_unregister_composition_layer_provider,
      this._owner,
      _extension
    );
    
  }
  set_emulate_environment_blend_mode_alpha_blend(_enabled) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_set_emulate_environment_blend_mode_alpha_blend,
      this._owner,
      _enabled
    );
    
  }
  is_environment_blend_mode_alpha_supported() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_is_environment_blend_mode_alpha_supported,
      this._owner,
			Variant.INT,
      
    );
    
  }
  static OpenXRAlphaBlendModeSupport = {
    OPENXR_ALPHA_BLEND_MODE_SUPPORT_NONE: 0,
    OPENXR_ALPHA_BLEND_MODE_SUPPORT_REAL: 1,
    OPENXR_ALPHA_BLEND_MODE_SUPPORT_EMULATING: 2,
  }
}