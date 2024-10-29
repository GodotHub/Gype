
import { Control } from "@godot/classes/control";
import { Texture2D } from "@godot/classes/texture2d";
import { VideoStream } from "@godot/classes/video_stream";

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
  public set_bus(_bus: StringName): void;
  public get_bus(): StringName;
  public get_video_texture(): Texture2D;
  public get audio_track(): number {
    get_audio_track();
  }
  public set audio_track(value): void {
    set_audio_track(value);
  }
  public get stream(): VideoStream {
    get_stream();
  }
  public set stream(value): void {
    set_stream(value);
  }
  public get volume_db(): number {
    get_volume_db();
  }
  public set volume_db(value): void {
    set_volume_db(value);
  }
  public get volume(): number {
    get_volume();
  }
  public set volume(value): void {
    set_volume(value);
  }
  public get autoplay(): boolean {
    has_autoplay();
  }
  public set autoplay(value): void {
    set_autoplay(value);
  }
  public get paused(): boolean {
    is_paused();
  }
  public set paused(value): void {
    set_paused(value);
  }
  public get expand(): boolean {
    has_expand();
  }
  public set expand(value): void {
    set_expand(value);
  }
  public get loop(): boolean {
    has_loop();
  }
  public set loop(value): void {
    set_loop(value);
  }
  public get buffering_msec(): number {
    get_buffering_msec();
  }
  public set buffering_msec(value): void {
    set_buffering_msec(value);
  }
  public get stream_position(): number {
    get_stream_position();
  }
  public set stream_position(value): void {
    set_stream_position(value);
  }
  public get bus(): StringName {
    get_bus();
  }
  public set bus(value): void {
    set_bus(value);
  }
}