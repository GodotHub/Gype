
import { RefCounted } from "@godot/classes/ref_counted";
export declare class CameraFeed extends RefCounted{
  public get_id(): number;
  public is_active(): boolean;
  public set_active(_active: boolean): void;
  public get_name(): String;
  public get_position(): number;
  public get_transform(): Transform2D;
  public set_transform(_transform: Transform2D): void;
  public get_datatype(): number;
  public get feed_is_active(): boolean;
  public set feed_is_active(value): void;
  public get feed_transform(): Transform2D;
  public set feed_transform(value): void;
  static FeedDataType = {
    FEED_NOIMAGE = 0,
    FEED_RGB = 1,
    FEED_YCBCR = 2,
    FEED_YCBCR_SEP = 3,
  }
  static FeedPosition = {
    FEED_UNSPECIFIED = 0,
    FEED_FRONT = 1,
    FEED_BACK = 2,
  }
}