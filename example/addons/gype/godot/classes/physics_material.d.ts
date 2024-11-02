
import { Resource } from "@godot/classes/resource";


export declare class PhysicsMaterial extends Resource{
  public set_friction(_friction: number): void;
  public get_friction(): number;
  public set_rough(_rough: boolean): void;
  public is_rough(): boolean;
  public set_bounce(_bounce: number): void;
  public get_bounce(): number;
  public set_absorbent(_absorbent: boolean): void;
  public is_absorbent(): boolean;
  public get friction(): number;
  public set friction(value): void;
  public get rough(): boolean;
  public set rough(value): void;
  public get bounce(): number;
  public set bounce(value): void;
  public get absorbent(): boolean;
  public set absorbent(value): void;
}