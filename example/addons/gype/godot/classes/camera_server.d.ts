
import { CameraFeed } from "@godot/classes/camera_feed";
import { GodotObject } from "@godot/classes/godot_object";
import { CameraFeed } from "@godot/classes/camera_feed";

export declare class CameraServer extends GodotObject{
  public get_feed(_index: number): CameraFeed;
  public get_feed_count(): number;
  public feeds(): GDArray;
  public add_feed(_feed: CameraFeed): void;
  public remove_feed(_feed: CameraFeed): void;
  static FeedImage = {
    FEED_RGBA_IMAGE = 0,
    FEED_YCBCR_IMAGE = 0,
    FEED_Y_IMAGE = 0,
    FEED_CBCR_IMAGE = 1,
  }
  public const camera_feed_added: string = "camera_feed_added";
  public const camera_feed_removed: string = "camera_feed_removed";
}