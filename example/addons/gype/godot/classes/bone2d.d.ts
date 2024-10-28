
import { Node2D } from "@godot/classes/node2d";

export declare class Bone2D extends Node2D{
  public set_rest(_rest: Transform2D): void;
  public get_rest(): Transform2D;
  public apply_rest(): void;
  public get_skeleton_rest(): Transform2D;
  public get_index_in_skeleton(): number;
  public set_autocalculate_length_and_angle(_auto_calculate: boolean): void;
  public get_autocalculate_length_and_angle(): boolean;
  public set_length(_length: number): void;
  public get_length(): number;
  public set_bone_angle(_angle: number): void;
  public get_bone_angle(): number;
  public get rest(): Transform2D {
    get_rest();
  }
  public set rest(value: Transform2D): void {
    set_rest(value);
  }
}