
import { Node2D } from "@godot/classes/node2d";


export declare class PathFollow2D extends Node2D{
  public set_progress(_progress: number): void;
  public get_progress(): number;
  public set_h_offset(_h_offset: number): void;
  public get_h_offset(): number;
  public set_v_offset(_v_offset: number): void;
  public get_v_offset(): number;
  public set_progress_ratio(_ratio: number): void;
  public get_progress_ratio(): number;
  public set_rotates(_enabled: boolean): void;
  public is_rotating(): boolean;
  public set_cubic_interpolation(_enabled: boolean): void;
  public get_cubic_interpolation(): boolean;
  public set_loop(_loop: boolean): void;
  public has_loop(): boolean;
  public get progress(): number;
  public set progress(value): void;
  public get progress_ratio(): number;
  public set progress_ratio(value): void;
  public get h_offset(): number;
  public set h_offset(value): void;
  public get v_offset(): number;
  public set v_offset(value): void;
  public get rotates(): boolean;
  public set rotates(value): void;
  public get cubic_interp(): boolean;
  public set cubic_interp(value): void;
  public get loop(): boolean;
  public set loop(value): void;
}