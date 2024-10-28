
import { OpenXRExtensionWrapperExtension } from "@godot/classes/open_xr_extension_wrapper_extension";
import { RefCounted } from "@godot/classes/ref_counted";

export declare class OpenXRAPIExtension extends RefCounted{
  public get_instance(): number;
  public get_system_id(): number;
  public get_session(): number;
  public transform_from_pose(_pose: const void*): Transform3D;
  public xr_result(_result: number, _format: String, _args: GDArray): boolean;
  public openxr_is_enabled(_check_run_in_editor: boolean): boolean;
  public get_instance_proc_addr(_name: String): number;
  public get_error_string(_result: number): String;
  public get_swapchain_format_name(_swapchain_format: number): String;
  public is_initialized(): boolean;
  public is_running(): boolean;
  public get_play_space(): number;
  public get_predicted_display_time(): number;
  public get_next_frame_time(): number;
  public can_render(): boolean;
  public get_hand_tracker(_hand_index: number): number;
  public register_composition_layer_provider(_extension: OpenXRExtensionWrapperExtension): void;
  public unregister_composition_layer_provider(_extension: OpenXRExtensionWrapperExtension): void;
  public set_emulate_environment_blend_mode_alpha_blend(_enabled: boolean): void;
  public is_environment_blend_mode_alpha_supported(): number;
  static OpenXRAlphaBlendModeSupport = {
    OPENXR_ALPHA_BLEND_MODE_SUPPORT_NONE = 0,
    OPENXR_ALPHA_BLEND_MODE_SUPPORT_REAL = 1,
    OPENXR_ALPHA_BLEND_MODE_SUPPORT_EMULATING = 2,
  }
}