
import { Joint2D } from "@godot/classes/joint2d";
export declare class GrooveJoint2D extends Joint2D{
  public set_length(_length: number): void;
  public get_length(): number;
  public set_initial_offset(_offset: number): void;
  public get_initial_offset(): number;
  public get length(): number;
  public set length(value): void;
  public get initial_offset(): number;
  public set initial_offset(value): void;
}