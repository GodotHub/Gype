
import { Texture2D } from "@godot/classes/texture2d";

export declare class CameraTexture extends Texture2D{
  public set_camera_feed_id(_feed_id: number): void;
  public get_camera_feed_id(): number;
  public set_which_feed(_which_feed: number): void;
  public get_which_feed(): number;
  public set_camera_active(_active: boolean): void;
  public get_camera_active(): boolean;
  public get camera_feed_id(): number {
    get_camera_feed_id();
  }
  public set camera_feed_id(value): void {
    set_camera_feed_id(value);
  }
  public get which_feed(): number {
    get_which_feed();
  }
  public set which_feed(value): void {
    set_which_feed(value);
  }
  public get camera_is_active(): boolean {
    get_camera_active();
  }
  public set camera_is_active(value): void {
    set_camera_active(value);
  }
}