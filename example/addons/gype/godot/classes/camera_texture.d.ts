
import { Texture2D } from "@godot/classes/texture2d";


export declare class CameraTexture extends Texture2D{
  public set_camera_feed_id(_feed_id: number): void;
  public get_camera_feed_id(): number;
  public set_which_feed(_which_feed: number): void;
  public get_which_feed(): number;
  public set_camera_active(_active: boolean): void;
  public get_camera_active(): boolean;
  public get camera_feed_id(): number;
  public set camera_feed_id(value): void;
  public get which_feed(): number;
  public set which_feed(value): void;
  public get camera_is_active(): boolean;
  public set camera_is_active(value): void;
}