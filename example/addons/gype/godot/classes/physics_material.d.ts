
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
  public get friction(): number {
    get_friction();
  }
  public set friction(value: number): void {
    set_friction(value);
  }
  public get rough(): boolean {
    is_rough();
  }
  public set rough(value: boolean): void {
    set_rough(value);
  }
  public get bounce(): number {
    get_bounce();
  }
  public set bounce(value: number): void {
    set_bounce(value);
  }
  public get absorbent(): boolean {
    is_absorbent();
  }
  public set absorbent(value: boolean): void {
    set_absorbent(value);
  }
}