
import { VisualInstance3D } from "@godot/classes/visual_instance3d";

export declare class VisibleOnScreenNotifier3D extends VisualInstance3D{
  public set_aabb(_rect: AABB): void;
  public is_on_screen(): boolean;
  public get aabb(): AABB {
    get_aabb();
  }
  public set aabb(value): void {
    set_aabb(value);
  }
  public const screen_entered: string = "screen_entered";
  public const screen_exited: string = "screen_exited";
}