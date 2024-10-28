
import { Object } from "@godot/classes/object";
import { OpenXRAPIExtension } from "@godot/classes/open_xrapi_extension";

export declare class OpenXRExtensionWrapperExtension extends Object{
  public _get_requested_extensions(): Dictionary;
  public _set_system_properties_and_get_next_pointer(_next_pointer: void*): number;
  public _set_instance_create_info_and_get_next_pointer(_next_pointer: void*): number;
  public _set_session_create_and_get_next_pointer(_next_pointer: void*): number;
  public _set_swapchain_create_info_and_get_next_pointer(_next_pointer: void*): number;
  public _set_hand_joint_locations_and_get_next_pointer(_hand_index: number, _next_pointer: void*): number;
  public _get_composition_layer_count(): number;
  public _get_composition_layer(_index: number): number;
  public _get_composition_layer_order(_index: number): number;
  public _get_suggested_tracker_names(): PackedStringArray;
  public _on_register_metadata(): void;
  public _on_before_instance_created(): void;
  public _on_instance_created(_instance: number): void;
  public _on_instance_destroyed(): void;
  public _on_session_created(_session: number): void;
  public _on_process(): void;
  public _on_pre_render(): void;
  public _on_main_swapchains_created(): void;
  public _on_session_destroyed(): void;
  public _on_state_idle(): void;
  public _on_state_ready(): void;
  public _on_state_synchronized(): void;
  public _on_state_visible(): void;
  public _on_state_focused(): void;
  public _on_state_stopping(): void;
  public _on_state_loss_pending(): void;
  public _on_state_exiting(): void;
  public _on_event_polled(_event: const void*): boolean;
  public _set_viewport_composition_layer_and_get_next_pointer(_layer: const void*, _property_values: Dictionary, _next_pointer: void*): number;
  public _get_viewport_composition_layer_extension_properties(): Array;
  public _get_viewport_composition_layer_extension_property_defaults(): Dictionary;
  public _on_viewport_composition_layer_destroyed(_layer: const void*): void;
  public get_openxr_api(): OpenXRAPIExtension;
  public register_extension_wrapper(): void;
}