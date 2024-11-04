
import { Resource } from "@godot/classes/resource";
import { VideoStreamPlayback } from "@godot/classes/video_stream_playback";
export declare class VideoStream extends Resource{
  public _instantiate_playback(): VideoStreamPlayback;
  public set_file(_file: GDString | StringName | string): void;
  public get_file(): String;
  public get file(): String;
  public set file(value): void;
}