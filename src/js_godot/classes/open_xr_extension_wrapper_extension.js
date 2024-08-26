import * as internal from '__internal__';
import { PackedStringArray } from 'src/js_godot/variant/packed_string_array'
import { GodotObject } from 'src/js_godot/classesgodot_object'
import { Dictionary } from 'src/js_godot/variant/dictionary'
class _MethodBindings {
    method__get_requested_extensions;
    method__set_system_properties_and_get_next_pointer;
    method__set_instance_create_info_and_get_next_pointer;
    method__set_session_create_and_get_next_pointer;
    method__set_swapchain_create_info_and_get_next_pointer;
    method__set_hand_joint_locations_and_get_next_pointer;
    method__get_composition_layer_count;
    method__get_composition_layer;
    method__get_composition_layer_order;
    method__get_suggested_tracker_names;
    method__on_register_metadata;
    method__on_before_instance_created;
    method__on_instance_created;
    method__on_instance_destroyed;
    method__on_session_created;
    method__on_process;
    method__on_pre_render;
    method__on_main_swapchains_created;
    method__on_session_destroyed;
    method__on_state_idle;
    method__on_state_ready;
    method__on_state_synchronized;
    method__on_state_visible;
    method__on_state_focused;
    method__on_state_stopping;
    method__on_state_loss_pending;
    method__on_state_exiting;
    method__on_event_polled;
    method__set_viewport_composition_layer_and_get_next_pointer;
    method__get_viewport_composition_layer_extension_properties;
    method__get_viewport_composition_layer_extension_property_defaults;
    method__on_viewport_composition_layer_destroyed;
    method_get_openxr_api;
    method_register_extension_wrapper;
}


export class OpenXRExtensionWrapperExtension extends GodotObject{

  static _bindings = new _MethodBindings();

  constructor(godot_object) {
    if (!godot_object) {
      super("OpenXRExtensionWrapperExtension");
    } else {
      super(godot_object);
    }
  }
  
  static _init_bindings() {
    {
      let classname = new StringName("OpenXRExtensionWrapperExtension");
      let methodname = new StringName("_get_requested_extensions");
      this._bindings.method__get_requested_extensions = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("OpenXRExtensionWrapperExtension");
      let methodname = new StringName("_set_system_properties_and_get_next_pointer");
      this._bindings.method__set_system_properties_and_get_next_pointer = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("OpenXRExtensionWrapperExtension");
      let methodname = new StringName("_set_instance_create_info_and_get_next_pointer");
      this._bindings.method__set_instance_create_info_and_get_next_pointer = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("OpenXRExtensionWrapperExtension");
      let methodname = new StringName("_set_session_create_and_get_next_pointer");
      this._bindings.method__set_session_create_and_get_next_pointer = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("OpenXRExtensionWrapperExtension");
      let methodname = new StringName("_set_swapchain_create_info_and_get_next_pointer");
      this._bindings.method__set_swapchain_create_info_and_get_next_pointer = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("OpenXRExtensionWrapperExtension");
      let methodname = new StringName("_set_hand_joint_locations_and_get_next_pointer");
      this._bindings.method__set_hand_joint_locations_and_get_next_pointer = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("OpenXRExtensionWrapperExtension");
      let methodname = new StringName("_get_composition_layer_count");
      this._bindings.method__get_composition_layer_count = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("OpenXRExtensionWrapperExtension");
      let methodname = new StringName("_get_composition_layer");
      this._bindings.method__get_composition_layer = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("OpenXRExtensionWrapperExtension");
      let methodname = new StringName("_get_composition_layer_order");
      this._bindings.method__get_composition_layer_order = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("OpenXRExtensionWrapperExtension");
      let methodname = new StringName("_get_suggested_tracker_names");
      this._bindings.method__get_suggested_tracker_names = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("OpenXRExtensionWrapperExtension");
      let methodname = new StringName("_on_register_metadata");
      this._bindings.method__on_register_metadata = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("OpenXRExtensionWrapperExtension");
      let methodname = new StringName("_on_before_instance_created");
      this._bindings.method__on_before_instance_created = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("OpenXRExtensionWrapperExtension");
      let methodname = new StringName("_on_instance_created");
      this._bindings.method__on_instance_created = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("OpenXRExtensionWrapperExtension");
      let methodname = new StringName("_on_instance_destroyed");
      this._bindings.method__on_instance_destroyed = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("OpenXRExtensionWrapperExtension");
      let methodname = new StringName("_on_session_created");
      this._bindings.method__on_session_created = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("OpenXRExtensionWrapperExtension");
      let methodname = new StringName("_on_process");
      this._bindings.method__on_process = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("OpenXRExtensionWrapperExtension");
      let methodname = new StringName("_on_pre_render");
      this._bindings.method__on_pre_render = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("OpenXRExtensionWrapperExtension");
      let methodname = new StringName("_on_main_swapchains_created");
      this._bindings.method__on_main_swapchains_created = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("OpenXRExtensionWrapperExtension");
      let methodname = new StringName("_on_session_destroyed");
      this._bindings.method__on_session_destroyed = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("OpenXRExtensionWrapperExtension");
      let methodname = new StringName("_on_state_idle");
      this._bindings.method__on_state_idle = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("OpenXRExtensionWrapperExtension");
      let methodname = new StringName("_on_state_ready");
      this._bindings.method__on_state_ready = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("OpenXRExtensionWrapperExtension");
      let methodname = new StringName("_on_state_synchronized");
      this._bindings.method__on_state_synchronized = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("OpenXRExtensionWrapperExtension");
      let methodname = new StringName("_on_state_visible");
      this._bindings.method__on_state_visible = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("OpenXRExtensionWrapperExtension");
      let methodname = new StringName("_on_state_focused");
      this._bindings.method__on_state_focused = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("OpenXRExtensionWrapperExtension");
      let methodname = new StringName("_on_state_stopping");
      this._bindings.method__on_state_stopping = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("OpenXRExtensionWrapperExtension");
      let methodname = new StringName("_on_state_loss_pending");
      this._bindings.method__on_state_loss_pending = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("OpenXRExtensionWrapperExtension");
      let methodname = new StringName("_on_state_exiting");
      this._bindings.method__on_state_exiting = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("OpenXRExtensionWrapperExtension");
      let methodname = new StringName("_on_event_polled");
      this._bindings.method__on_event_polled = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("OpenXRExtensionWrapperExtension");
      let methodname = new StringName("_set_viewport_composition_layer_and_get_next_pointer");
      this._bindings.method__set_viewport_composition_layer_and_get_next_pointer = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("OpenXRExtensionWrapperExtension");
      let methodname = new StringName("_get_viewport_composition_layer_extension_properties");
      this._bindings.method__get_viewport_composition_layer_extension_properties = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("OpenXRExtensionWrapperExtension");
      let methodname = new StringName("_get_viewport_composition_layer_extension_property_defaults");
      this._bindings.method__get_viewport_composition_layer_extension_property_defaults = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("OpenXRExtensionWrapperExtension");
      let methodname = new StringName("_on_viewport_composition_layer_destroyed");
      this._bindings.method__on_viewport_composition_layer_destroyed = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        
      );
    }
    {
      let classname = new StringName("OpenXRExtensionWrapperExtension");
      let methodname = new StringName("get_openxr_api");
      this._bindings.method_get_openxr_api = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        1637791613
      );
    }
    {
      let classname = new StringName("OpenXRExtensionWrapperExtension");
      let methodname = new StringName("register_extension_wrapper");
      this._bindings.method_register_extension_wrapper = internal.classdb_get_method_bind(
        classname.opaque, 
        methodname.opaque, 
        3218959716
      );
    }
  }
  _get_requested_extensions() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_requested_extensions,
      this._owner,
			Variant.Type.DICTIONARY
    ,
      
    );
  }
  _set_system_properties_and_get_next_pointer(_next_pointer) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__set_system_properties_and_get_next_pointer,
      this._owner,
			Variant.Type.INT,
      _next_pointer
    );
  }
  _set_instance_create_info_and_get_next_pointer(_next_pointer) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__set_instance_create_info_and_get_next_pointer,
      this._owner,
			Variant.Type.INT,
      _next_pointer
    );
  }
  _set_session_create_and_get_next_pointer(_next_pointer) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__set_session_create_and_get_next_pointer,
      this._owner,
			Variant.Type.INT,
      _next_pointer
    );
  }
  _set_swapchain_create_info_and_get_next_pointer(_next_pointer) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__set_swapchain_create_info_and_get_next_pointer,
      this._owner,
			Variant.Type.INT,
      _next_pointer
    );
  }
  _set_hand_joint_locations_and_get_next_pointer(_hand_index, _next_pointer) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__set_hand_joint_locations_and_get_next_pointer,
      this._owner,
			Variant.Type.INT,
      _hand_index, _next_pointer
    );
  }
  _get_composition_layer_count() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_composition_layer_count,
      this._owner,
			Variant.Type.INT,
      
    );
  }
  _get_composition_layer(_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_composition_layer,
      this._owner,
			Variant.Type.INT,
      _index
    );
  }
  _get_composition_layer_order(_index) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_composition_layer_order,
      this._owner,
			Variant.Type.INT,
      _index
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
  _on_register_metadata() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__on_register_metadata,
      this._owner,
      
    );
  }
  _on_before_instance_created() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__on_before_instance_created,
      this._owner,
      
    );
  }
  _on_instance_created(_instance) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__on_instance_created,
      this._owner,
      _instance
    );
  }
  _on_instance_destroyed() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__on_instance_destroyed,
      this._owner,
      
    );
  }
  _on_session_created(_session) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__on_session_created,
      this._owner,
      _session
    );
  }
  _on_process() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__on_process,
      this._owner,
      
    );
  }
  _on_pre_render() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__on_pre_render,
      this._owner,
      
    );
  }
  _on_main_swapchains_created() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__on_main_swapchains_created,
      this._owner,
      
    );
  }
  _on_session_destroyed() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__on_session_destroyed,
      this._owner,
      
    );
  }
  _on_state_idle() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__on_state_idle,
      this._owner,
      
    );
  }
  _on_state_ready() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__on_state_ready,
      this._owner,
      
    );
  }
  _on_state_synchronized() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__on_state_synchronized,
      this._owner,
      
    );
  }
  _on_state_visible() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__on_state_visible,
      this._owner,
      
    );
  }
  _on_state_focused() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__on_state_focused,
      this._owner,
      
    );
  }
  _on_state_stopping() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__on_state_stopping,
      this._owner,
      
    );
  }
  _on_state_loss_pending() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__on_state_loss_pending,
      this._owner,
      
    );
  }
  _on_state_exiting() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__on_state_exiting,
      this._owner,
      
    );
  }
  _on_event_polled(_event) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__on_event_polled,
      this._owner,
			Variant.Type.BOOL,
      _event
    );
  }
  _set_viewport_composition_layer_and_get_next_pointer(_layer, _property_values, _next_pointer) {
    return _call_native_mb_ret(
      ClassDB._bindings.method__set_viewport_composition_layer_and_get_next_pointer,
      this._owner,
			Variant.Type.INT,
      _layer, _property_values, _next_pointer
    );
  }
  _get_viewport_composition_layer_extension_properties() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_viewport_composition_layer_extension_properties,
      this._owner,
			Variant.INT,
      
    );
  }
  _get_viewport_composition_layer_extension_property_defaults() {
    return _call_native_mb_ret(
      ClassDB._bindings.method__get_viewport_composition_layer_extension_property_defaults,
      this._owner,
			Variant.Type.DICTIONARY
    ,
      
    );
  }
  _on_viewport_composition_layer_destroyed(_layer) {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method__on_viewport_composition_layer_destroyed,
      this._owner,
      _layer
    );
  }
  get_openxr_api() {
    return _call_native_mb_ret(
      ClassDB._bindings.method_get_openxr_api,
      this._owner,
			Variant.INT,
      
    );
  }
  register_extension_wrapper() {
    return _call_native_mb_no_ret(
      ClassDB._bindings.method_register_extension_wrapper,
      this._owner,
      
    );
  }
}