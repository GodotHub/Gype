
import { RigidBody3D } from "@godot/classes/rigid_body3d";


export declare class VehicleBody3D extends RigidBody3D{
  public set_engine_force(_engine_force: number): void;
  public get_engine_force(): number;
  public set_brake(_brake: number): void;
  public get_brake(): number;
  public set_steering(_steering: number): void;
  public get_steering(): number;
  public get engine_force(): number;
  public set engine_force(value): void;
  public get brake(): number;
  public set brake(value): void;
  public get steering(): number;
  public set steering(value): void;
}