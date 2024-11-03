
import { VisualInstance3D } from "@godot/classes/visual_instance3d";
export declare class VisibleOnScreenNotifier3D extends VisualInstance3D{
  public set_aabb(_rect: AABB): void;
  public is_on_screen(): boolean;
  public get aabb(): AABB;
  public set aabb(value): void;
  public get screen_entered(): Signal;
  public get screen_exited(): Signal;
}