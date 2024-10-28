
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
  public get progress(): number {
    get_progress();
  }
  public set progress(value: number): void {
    set_progress(value);
  }
  public get progress_ratio(): number {
    get_progress_ratio();
  }
  public set progress_ratio(value: number): void {
    set_progress_ratio(value);
  }
  public get h_offset(): number {
    get_h_offset();
  }
  public set h_offset(value: number): void {
    set_h_offset(value);
  }
  public get v_offset(): number {
    get_v_offset();
  }
  public set v_offset(value: number): void {
    set_v_offset(value);
  }
  public get rotates(): boolean {
    is_rotating();
  }
  public set rotates(value: boolean): void {
    set_rotates(value);
  }
  public get cubic_interp(): boolean {
    get_cubic_interpolation();
  }
  public set cubic_interp(value: boolean): void {
    set_cubic_interpolation(value);
  }
  public get loop(): boolean {
    has_loop();
  }
  public set loop(value: boolean): void {
    set_loop(value);
  }
}