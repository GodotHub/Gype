
import { Node3D } from "@godot/classes/node3d";
import { Curve3D } from "@godot/classes/curve3d";


export declare class Path3D extends Node3D{
  public set_curve(_curve: Curve3D): void;
  public get_curve(): Curve3D;
  public get curve(): Curve3D;
  public set curve(value): void;
  public get curve_changed(): Signal;
}