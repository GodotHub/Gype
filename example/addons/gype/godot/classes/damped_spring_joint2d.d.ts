
import { Joint2D } from "@godot/classes/joint2d";


export declare class DampedSpringJoint2D extends Joint2D{
  public set_length(_length: number): void;
  public get_length(): number;
  public set_rest_length(_rest_length: number): void;
  public get_rest_length(): number;
  public set_stiffness(_stiffness: number): void;
  public get_stiffness(): number;
  public set_damping(_damping: number): void;
  public get_damping(): number;
  public get length(): number;
  public set length(value): void;
  public get rest_length(): number;
  public set rest_length(value): void;
  public get stiffness(): number;
  public set stiffness(value): void;
  public get damping(): number;
  public set damping(value): void;
}