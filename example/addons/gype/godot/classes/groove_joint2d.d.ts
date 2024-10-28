
import { Joint2D } from "@godot/classes/joint2d";

export declare class GrooveJoint2D extends Joint2D{
  public set_length(_length: number): void;
  public get_length(): number;
  public set_initial_offset(_offset: number): void;
  public get_initial_offset(): number;
  public get length(): number {
    get_length();
  }
  public set length(value: number): void {
    set_length(value);
  }
  public get initial_offset(): number {
    get_initial_offset();
  }
  public set initial_offset(value: number): void {
    set_initial_offset(value);
  }
}