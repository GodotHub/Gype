
import { CameraAttributes } from "@godot/classes/camera_attributes";


export declare class CameraAttributesPhysical extends CameraAttributes{
  public set_aperture(_aperture: number): void;
  public get_aperture(): number;
  public set_shutter_speed(_shutter_speed: number): void;
  public get_shutter_speed(): number;
  public set_focal_length(_focal_length: number): void;
  public get_focal_length(): number;
  public set_focus_distance(_focus_distance: number): void;
  public get_focus_distance(): number;
  public set_near(_near: number): void;
  public get_near(): number;
  public set_far(_far: number): void;
  public get_far(): number;
  public get_fov(): number;
  public set_auto_exposure_max_exposure_value(_exposure_value_max: number): void;
  public get_auto_exposure_max_exposure_value(): number;
  public set_auto_exposure_min_exposure_value(_exposure_value_min: number): void;
  public get_auto_exposure_min_exposure_value(): number;
  public get frustum_focus_distance(): number;
  public set frustum_focus_distance(value): void;
  public get frustum_focal_length(): number;
  public set frustum_focal_length(value): void;
  public get frustum_near(): number;
  public set frustum_near(value): void;
  public get frustum_far(): number;
  public set frustum_far(value): void;
  public get exposure_aperture(): number;
  public set exposure_aperture(value): void;
  public get exposure_shutter_speed(): number;
  public set exposure_shutter_speed(value): void;
  public get auto_exposure_min_exposure_value(): number;
  public set auto_exposure_min_exposure_value(value): void;
  public get auto_exposure_max_exposure_value(): number;
  public set auto_exposure_max_exposure_value(value): void;
}