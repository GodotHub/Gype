
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
  public get exposure_sensitivity(): number {
    get_exposure_sensitivity();
  }
  public set exposure_sensitivity(value: number): void {
    set_exposure_sensitivity(value);
  }
  public get exposure_multiplier(): number {
    get_exposure_multiplier();
  }
  public set exposure_multiplier(value: number): void {
    set_exposure_multiplier(value);
  }
  public get auto_exposure_enabled(): boolean {
    is_auto_exposure_enabled();
  }
  public set auto_exposure_enabled(value: boolean): void {
    set_auto_exposure_enabled(value);
  }
  public get auto_exposure_scale(): number {
    get_auto_exposure_scale();
  }
  public set auto_exposure_scale(value: number): void {
    set_auto_exposure_scale(value);
  }
  public get auto_exposure_speed(): number {
    get_auto_exposure_speed();
  }
  public set auto_exposure_speed(value: number): void {
    set_auto_exposure_speed(value);
  }
}