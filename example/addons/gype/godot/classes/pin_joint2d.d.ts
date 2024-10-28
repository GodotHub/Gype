
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
  public get softness(): number {
    get_softness();
  }
  public set softness(value: number): void {
    set_softness(value);
  }
  public get angular_limit_enabled(): boolean {
    is_angular_limit_enabled();
  }
  public set angular_limit_enabled(value: boolean): void {
    set_angular_limit_enabled(value);
  }
  public get angular_limit_lower(): number {
    get_angular_limit_lower();
  }
  public set angular_limit_lower(value: number): void {
    set_angular_limit_lower(value);
  }
  public get angular_limit_upper(): number {
    get_angular_limit_upper();
  }
  public set angular_limit_upper(value: number): void {
    set_angular_limit_upper(value);
  }
  public get motor_enabled(): boolean {
    is_motor_enabled();
  }
  public set motor_enabled(value: boolean): void {
    set_motor_enabled(value);
  }
  public get motor_target_velocity(): number {
    get_motor_target_velocity();
  }
  public set motor_target_velocity(value: number): void {
    set_motor_target_velocity(value);
  }
}