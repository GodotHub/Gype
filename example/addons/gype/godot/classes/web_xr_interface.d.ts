
import { XRInterface } from "@godot/classes/xr_interface";
import { XRControllerTracker } from "@godot/classes/xr_controller_tracker";


export declare class WebXRInterface extends XRInterface{
  public is_session_supported(_session_mode: GDString | StringName | string): void;
  public set_session_mode(_session_mode: GDString | StringName | string): void;
  public get_session_mode(): String;
  public set_required_features(_required_features: GDString | StringName | string): void;
  public get_required_features(): String;
  public set_optional_features(_optional_features: GDString | StringName | string): void;
  public get_optional_features(): String;
  public get_reference_space_type(): String;
  public get_enabled_features(): String;
  public set_requested_reference_space_types(_requested_reference_space_types: GDString | StringName | string): void;
  public get_requested_reference_space_types(): String;
  public is_input_source_active(_input_source_id: number): boolean;
  public get_input_source_tracker(_input_source_id: number): XRControllerTracker;
  public get_input_source_target_ray_mode(_input_source_id: number): number;
  public get_visibility_state(): String;
  public get_display_refresh_rate(): number;
  public set_display_refresh_rate(_refresh_rate: number): void;
  public get_available_display_refresh_rates(): GDArray;
  public get session_mode(): String;
  public set session_mode(value): void;
  public get required_features(): String;
  public set required_features(value): void;
  public get optional_features(): String;
  public set optional_features(value): void;
  public get requested_reference_space_types(): String;
  public set requested_reference_space_types(value): void;
  public get reference_space_type(): String;
  public get enabled_features(): String;
  public get visibility_state(): String;
  static TargetRayMode = {
    TARGET_RAY_MODE_UNKNOWN = 0,
    TARGET_RAY_MODE_GAZE = 1,
    TARGET_RAY_MODE_TRACKED_POINTER = 2,
    TARGET_RAY_MODE_SCREEN = 3,
  }
  public get session_supported(): Signal;
  public get session_started(): Signal;
  public get session_ended(): Signal;
  public get session_failed(): Signal;
  public get selectstart(): Signal;
  public get select(): Signal;
  public get selectend(): Signal;
  public get squeezestart(): Signal;
  public get squeeze(): Signal;
  public get squeezeend(): Signal;
  public get visibility_state_changed(): Signal;
  public get reference_space_reset(): Signal;
  public get display_refresh_rate_changed(): Signal;
}