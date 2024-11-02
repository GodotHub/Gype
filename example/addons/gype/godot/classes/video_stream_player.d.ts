
import { VideoStream } from "@godot/classes/video_stream";
import { Texture2D } from "@godot/classes/texture2d";
import { Control } from "@godot/classes/control";


export declare class VideoStreamPlayer extends Control{
  public set_stream(_stream: VideoStream): void;
  public get_stream(): VideoStream;
  public play(): void;
  public stop(): void;
  public is_playing(): boolean;
  public set_paused(_paused: boolean): void;
  public is_paused(): boolean;
  public set_loop(_loop: boolean): void;
  public has_loop(): boolean;
  public set_volume(_volume: number): void;
  public get_volume(): number;
  public set_volume_db(_db: number): void;
  public get_volume_db(): number;
  public set_audio_track(_track: number): void;
  public get_audio_track(): number;
  public get_stream_name(): String;
  public get_stream_length(): number;
  public set_stream_position(_position: number): void;
  public get_stream_position(): number;
  public set_autoplay(_enabled: boolean): void;
  public has_autoplay(): boolean;
  public set_expand(_enable: boolean): void;
  public has_expand(): boolean;
  public set_buffering_msec(_msec: number): void;
  public get_buffering_msec(): number;
  public set_bus(_bus: GDString | StringName | string): void;
  public get_bus(): StringName;
  public get_video_texture(): Texture2D;
  public get audio_track(): number;
  public set audio_track(value): void;
  public get stream(): VideoStream;
  public set stream(value): void;
  public get volume_db(): number;
  public set volume_db(value): void;
  public get volume(): number;
  public set volume(value): void;
  public get autoplay(): boolean;
  public set autoplay(value): void;
  public get paused(): boolean;
  public set paused(value): void;
  public get expand(): boolean;
  public set expand(value): void;
  public get loop(): boolean;
  public set loop(value): void;
  public get buffering_msec(): number;
  public set buffering_msec(value): void;
  public get stream_position(): number;
  public set stream_position(value): void;
  public get bus(): StringName;
  public set bus(value): void;
  public get finished(): Signal;
}