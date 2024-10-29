
import { CameraFeed } from "@godot/classes/camera_feed";
import { Object } from "@godot/classes/object";
import { CameraFeed } from "@godot/classes/camera_feed";

export declare class CameraServer extends Object{
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
}