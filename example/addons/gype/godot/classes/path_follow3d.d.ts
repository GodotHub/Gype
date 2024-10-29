
import { Node3D } from "@godot/classes/node3d";

export declare class PathFollow3D extends Node3D{
  public set_progress(_progress: number): void;
  public get_progress(): number;
  public set_h_offset(_h_offset: number): void;
  public get_h_offset(): number;
  public set_v_offset(_v_offset: number): void;
  public get_v_offset(): number;
  public set_progress_ratio(_ratio: number): void;
  public get_progress_ratio(): number;
  public set_rotation_mode(_rotation_mode: number): void;
  public get_rotation_mode(): number;
  public set_cubic_interpolation(_enabled: boolean): void;
  public get_cubic_interpolation(): boolean;
  public set_use_model_front(_enabled: boolean): void;
  public is_using_model_front(): boolean;
  public set_loop(_loop: boolean): void;
  public has_loop(): boolean;
  public set_tilt_enabled(_enabled: boolean): void;
  public is_tilt_enabled(): boolean;
  public correct_posture(_transform: Transform3D, _rotation_mode: number): Transform3D;
  public get progress(): number {
    get_progress();
  }
  public set progress(value): void {
    set_progress(value);
  }
  public get progress_ratio(): number {
    get_progress_ratio();
  }
  public set progress_ratio(value): void {
    set_progress_ratio(value);
  }
  public get h_offset(): number {
    get_h_offset();
  }
  public set h_offset(value): void {
    set_h_offset(value);
  }
  public get v_offset(): number {
    get_v_offset();
  }
  public set v_offset(value): void {
    set_v_offset(value);
  }
  public get rotation_mode(): number {
    get_rotation_mode();
  }
  public set rotation_mode(value): void {
    set_rotation_mode(value);
  }
  public get use_model_front(): boolean {
    is_using_model_front();
  }
  public set use_model_front(value): void {
    set_use_model_front(value);
  }
  public get cubic_interp(): boolean {
    get_cubic_interpolation();
  }
  public set cubic_interp(value): void {
    set_cubic_interpolation(value);
  }
  public get loop(): boolean {
    has_loop();
  }
  public set loop(value): void {
    set_loop(value);
  }
  public get tilt_enabled(): boolean {
    is_tilt_enabled();
  }
  public set tilt_enabled(value): void {
    set_tilt_enabled(value);
  }
  static RotationMode = {
    ROTATION_NONE = 0,
    ROTATION_Y = 1,
    ROTATION_XY = 2,
    ROTATION_XYZ = 3,
    ROTATION_ORIENTED = 4,
  }
}