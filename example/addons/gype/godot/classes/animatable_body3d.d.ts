
import { StaticBody3D } from "@godot/classes/static_body3d";


export declare class AnimatableBody3D extends StaticBody3D{
  public set_sync_to_physics(_enable: boolean): void;
  public is_sync_to_physics_enabled(): boolean;
  public get sync_to_physics(): boolean;
  public set sync_to_physics(value): void;
}