
import { CameraAttributes } from "@godot/classes/camera_attributes";

export declare class CameraAttributesPractical extends CameraAttributes{
  public set_dof_blur_far_enabled(_enabled: boolean): void;
  public is_dof_blur_far_enabled(): boolean;
  public set_dof_blur_far_distance(_distance: number): void;
  public get_dof_blur_far_distance(): number;
  public set_dof_blur_far_transition(_distance: number): void;
  public get_dof_blur_far_transition(): number;
  public set_dof_blur_near_enabled(_enabled: boolean): void;
  public is_dof_blur_near_enabled(): boolean;
  public set_dof_blur_near_distance(_distance: number): void;
  public get_dof_blur_near_distance(): number;
  public set_dof_blur_near_transition(_distance: number): void;
  public get_dof_blur_near_transition(): number;
  public set_dof_blur_amount(_amount: number): void;
  public get_dof_blur_amount(): number;
  public set_auto_exposure_max_sensitivity(_max_sensitivity: number): void;
  public get_auto_exposure_max_sensitivity(): number;
  public set_auto_exposure_min_sensitivity(_min_sensitivity: number): void;
  public get_auto_exposure_min_sensitivity(): number;
  public get dof_blur_far_enabled(): boolean {
    is_dof_blur_far_enabled();
  }
  public set dof_blur_far_enabled(value: boolean): void {
    set_dof_blur_far_enabled(value);
  }
  public get dof_blur_far_distance(): number {
    get_dof_blur_far_distance();
  }
  public set dof_blur_far_distance(value: number): void {
    set_dof_blur_far_distance(value);
  }
  public get dof_blur_far_transition(): number {
    get_dof_blur_far_transition();
  }
  public set dof_blur_far_transition(value: number): void {
    set_dof_blur_far_transition(value);
  }
  public get dof_blur_near_enabled(): boolean {
    is_dof_blur_near_enabled();
  }
  public set dof_blur_near_enabled(value: boolean): void {
    set_dof_blur_near_enabled(value);
  }
  public get dof_blur_near_distance(): number {
    get_dof_blur_near_distance();
  }
  public set dof_blur_near_distance(value: number): void {
    set_dof_blur_near_distance(value);
  }
  public get dof_blur_near_transition(): number {
    get_dof_blur_near_transition();
  }
  public set dof_blur_near_transition(value: number): void {
    set_dof_blur_near_transition(value);
  }
  public get dof_blur_amount(): number {
    get_dof_blur_amount();
  }
  public set dof_blur_amount(value: number): void {
    set_dof_blur_amount(value);
  }
  public get auto_exposure_min_sensitivity(): number {
    get_auto_exposure_min_sensitivity();
  }
  public set auto_exposure_min_sensitivity(value: number): void {
    set_auto_exposure_min_sensitivity(value);
  }
  public get auto_exposure_max_sensitivity(): number {
    get_auto_exposure_max_sensitivity();
  }
  public set auto_exposure_max_sensitivity(value: number): void {
    set_auto_exposure_max_sensitivity(value);
  }
}