
import { Node2D } from "@godot/classes/node2d";

export declare class VisibleOnScreenNotifier2D extends Node2D{
  public set_rect(_rect: Rect2): void;
  public get_rect(): Rect2;
  public is_on_screen(): boolean;
  public get rect(): Rect2 {
    get_rect();
  }
  public set rect(value): void {
    set_rect(value);
  }
  public get screen_entered(): Signal;
  public get screen_exited(): Signal;
}