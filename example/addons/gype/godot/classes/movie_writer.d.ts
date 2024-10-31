
import { GodotObject } from "@godot/classes/godot_object";
import { Image } from "@godot/classes/image";

export declare class MovieWriter extends GodotObject{
  public _get_audio_mix_rate(): number;
  public _get_audio_speaker_mode(): number;
  public _handles_file(_path: String | StringName | string): boolean;
  public _write_begin(_movie_size: Vector2i, _fps: number, _base_path: String | StringName | string): number;
  public _write_end(): void;
  public add_writer(_writer: MovieWriter): void;
}