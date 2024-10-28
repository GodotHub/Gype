
import { RigidBody3D } from "@godot/classes/rigid_body3d";

export declare class VehicleBody3D extends RigidBody3D{
  public set_engine_force(_engine_force: number): void;
  public get_engine_force(): number;
  public set_brake(_brake: number): void;
  public get_brake(): number;
  public set_steering(_steering: number): void;
  public get_steering(): number;
  public get engine_force(): number {
    get_engine_force();
  }
  public set engine_force(value: number): void {
    set_engine_force(value);
  }
  public get brake(): number {
    get_brake();
  }
  public set brake(value: number): void {
    set_brake(value);
  }
  public get steering(): number {
    get_steering();
  }
  public set steering(value: number): void {
    set_steering(value);
  }
}