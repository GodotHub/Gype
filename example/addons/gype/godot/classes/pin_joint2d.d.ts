
import { Joint2D } from "@godot/classes/joint2d";


export declare class PinJoint2D extends Joint2D{
  public set_softness(_softness: number): void;
  public get_softness(): number;
  public set_angular_limit_lower(_angular_limit_lower: number): void;
  public get_angular_limit_lower(): number;
  public set_angular_limit_upper(_angular_limit_upper: number): void;
  public get_angular_limit_upper(): number;
  public set_motor_target_velocity(_motor_target_velocity: number): void;
  public get_motor_target_velocity(): number;
  public set_motor_enabled(_enabled: boolean): void;
  public is_motor_enabled(): boolean;
  public set_angular_limit_enabled(_enabled: boolean): void;
  public is_angular_limit_enabled(): boolean;
  public get softness(): number;
  public set softness(value): void;
  public get angular_limit_enabled(): boolean;
  public set angular_limit_enabled(value): void;
  public get angular_limit_lower(): number;
  public set angular_limit_lower(value): void;
  public get angular_limit_upper(): number;
  public set angular_limit_upper(value): void;
  public get motor_enabled(): boolean;
  public set motor_enabled(value): void;
  public get motor_target_velocity(): number;
  public set motor_target_velocity(value): void;
}