
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
  public get progress(): number;
  public set progress(value): void;
  public get progress_ratio(): number;
  public set progress_ratio(value): void;
  public get h_offset(): number;
  public set h_offset(value): void;
  public get v_offset(): number;
  public set v_offset(value): void;
  public get rotation_mode(): number;
  public set rotation_mode(value): void;
  public get use_model_front(): boolean;
  public set use_model_front(value): void;
  public get cubic_interp(): boolean;
  public set cubic_interp(value): void;
  public get loop(): boolean;
  public set loop(value): void;
  public get tilt_enabled(): boolean;
  public set tilt_enabled(value): void;
  static RotationMode = {
    ROTATION_NONE = 0,
    ROTATION_Y = 1,
    ROTATION_XY = 2,
    ROTATION_XYZ = 3,
    ROTATION_ORIENTED = 4,
  }
}