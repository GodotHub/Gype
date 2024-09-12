import * as internal from '__internal__';
import { Variant } from '@js_godot/variant/variant'
import { StringName } from '@js_godot/variant/string_name'
import { GodotObject } from '@js_godot/classes/godot_object'
import { GDArray } from '@js_godot/variant/gd_array'
import {
  call_utility_ret,
  call_utility_no_ret,
  _call_native_mb_ret,
  _call_native_mb_no_ret
} from "@js_godot/core/engine_ptrcall";

class _MethodBindings {
  method_get_openxr_api;
  method_register_extension_wrapper;
}
export class OpenXRExtensionWrapperExtension extends GodotObject{

  static #_bindings = new _MethodBindings();
  static #initialized = false;

  constructor(godot_object) {
    if (!godot_object) {
      super("OpenXRExtensionWrapperExtension");
    } else {
      super(godot_object);
    }
  }
  static init_method_get_openxr_api() {
    if (!this.#_bindings.method_get_openxr_api) {
      let classname = new StringName("OpenXRExtensionWrapperExtension");
      let methodname = new StringName("get_openxr_api");
      this.#_bindings.method_get_openxr_api = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        1637791613
      );
    }
  }
  static init_method_register_extension_wrapper() {
    if (!this.#_bindings.method_register_extension_wrapper) {
      let classname = new StringName("OpenXRExtensionWrapperExtension");
      let methodname = new StringName("register_extension_wrapper");
      this.#_bindings.method_register_extension_wrapper = internal.classdb_get_method_bind(
        classname.opaque,
        methodname.opaque,
        3218959716
      );
    }
  }

  
  
  _get_requested_extensions() {
  }
  _set_system_properties_and_get_next_pointer(_next_pointer) {
  }
  _set_instance_create_info_and_get_next_pointer(_next_pointer) {
  }
  _set_session_create_and_get_next_pointer(_next_pointer) {
  }
  _set_swapchain_create_info_and_get_next_pointer(_next_pointer) {
  }
  _set_hand_joint_locations_and_get_next_pointer(_hand_index, _next_pointer) {
  }
  _get_composition_layer_count() {
  }
  _get_composition_layer(_index) {
  }
  _get_composition_layer_order(_index) {
  }
  _get_suggested_tracker_names() {
  }
  _on_register_metadata() {
  }
  _on_before_instance_created() {
  }
  _on_instance_created(_instance) {
  }
  _on_instance_destroyed() {
  }
  _on_session_created(_session) {
  }
  _on_process() {
  }
  _on_pre_render() {
  }
  _on_main_swapchains_created() {
  }
  _on_session_destroyed() {
  }
  _on_state_idle() {
  }
  _on_state_ready() {
  }
  _on_state_synchronized() {
  }
  _on_state_visible() {
  }
  _on_state_focused() {
  }
  _on_state_stopping() {
  }
  _on_state_loss_pending() {
  }
  _on_state_exiting() {
  }
  _on_event_polled(_event) {
  }
  _set_viewport_composition_layer_and_get_next_pointer(_layer, _property_values, _next_pointer) {
  }
  _get_viewport_composition_layer_extension_properties() {
  }
  _get_viewport_composition_layer_extension_property_defaults() {
  }
  _on_viewport_composition_layer_destroyed(_layer) {
  }
  get_openxr_api() {
    OpenXRExtensionWrapperExtension.init_method_get_openxr_api();
    return _call_native_mb_ret(
      OpenXRExtensionWrapperExtension.#_bindings.method_get_openxr_api,
      this._owner,
			Variant.Type.OBJECT,
      
    );
    
  }
  register_extension_wrapper() {
    OpenXRExtensionWrapperExtension.init_method_register_extension_wrapper();
    return _call_native_mb_no_ret(
      OpenXRExtensionWrapperExtension.#_bindings.method_register_extension_wrapper,
      this._owner,
      
    );
    
  }
  

}