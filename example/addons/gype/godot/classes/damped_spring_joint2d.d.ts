
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
  public get length(): number {
    get_length();
  }
  public set length(value: number): void {
    set_length(value);
  }
  public get rest_length(): number {
    get_rest_length();
  }
  public set rest_length(value: number): void {
    set_rest_length(value);
  }
  public get stiffness(): number {
    get_stiffness();
  }
  public set stiffness(value: number): void {
    set_stiffness(value);
  }
  public get damping(): number {
    get_damping();
  }
  public set damping(value: number): void {
    set_damping(value);
  }
}