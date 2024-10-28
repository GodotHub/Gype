
import { StaticBody2D } from "@godot/classes/static_body2d";

export declare class AnimatableBody2D extends StaticBody2D{
  public set_sync_to_physics(_enable: boolean): void;
  public is_sync_to_physics_enabled(): boolean;
  public get sync_to_physics(): boolean {
    is_sync_to_physics_enabled();
  }
  public set sync_to_physics(value: boolean): void {
    set_sync_to_physics(value);
  }
}