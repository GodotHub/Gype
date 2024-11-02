
import { Resource } from "@godot/classes/resource";


export declare class CameraAttributes extends Resource{
  public set_exposure_multiplier(_multiplier: number): void;
  public get_exposure_multiplier(): number;
  public set_exposure_sensitivity(_sensitivity: number): void;
  public get_exposure_sensitivity(): number;
  public set_auto_exposure_enabled(_enabled: boolean): void;
  public is_auto_exposure_enabled(): boolean;
  public set_auto_exposure_speed(_exposure_speed: number): void;
  public get_auto_exposure_speed(): number;
  public set_auto_exposure_scale(_exposure_grey: number): void;
  public get_auto_exposure_scale(): number;
  public get exposure_sensitivity(): number;
  public set exposure_sensitivity(value): void;
  public get exposure_multiplier(): number;
  public set exposure_multiplier(value): void;
  public get auto_exposure_enabled(): boolean;
  public set auto_exposure_enabled(value): void;
  public get auto_exposure_scale(): number;
  public set auto_exposure_scale(value): void;
  public get auto_exposure_speed(): number;
  public set auto_exposure_speed(value): void;
}