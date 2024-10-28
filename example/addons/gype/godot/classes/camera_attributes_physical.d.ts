
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
  public get frustum_focus_distance(): number {
    get_focus_distance();
  }
  public set frustum_focus_distance(value: number): void {
    set_focus_distance(value);
  }
  public get frustum_focal_length(): number {
    get_focal_length();
  }
  public set frustum_focal_length(value: number): void {
    set_focal_length(value);
  }
  public get frustum_near(): number {
    get_near();
  }
  public set frustum_near(value: number): void {
    set_near(value);
  }
  public get frustum_far(): number {
    get_far();
  }
  public set frustum_far(value: number): void {
    set_far(value);
  }
  public get exposure_aperture(): number {
    get_aperture();
  }
  public set exposure_aperture(value: number): void {
    set_aperture(value);
  }
  public get exposure_shutter_speed(): number {
    get_shutter_speed();
  }
  public set exposure_shutter_speed(value: number): void {
    set_shutter_speed(value);
  }
  public get auto_exposure_min_exposure_value(): number {
    get_auto_exposure_min_exposure_value();
  }
  public set auto_exposure_min_exposure_value(value: number): void {
    set_auto_exposure_min_exposure_value(value);
  }
  public get auto_exposure_max_exposure_value(): number {
    get_auto_exposure_max_exposure_value();
  }
  public set auto_exposure_max_exposure_value(value: number): void {
    set_auto_exposure_max_exposure_value(value);
  }
}