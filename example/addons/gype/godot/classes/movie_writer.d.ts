
import { Image } from "@godot/classes/image";
import { Object } from "@godot/classes/object";

export declare class MovieWriter extends Object{
  public _get_audio_mix_rate(): number;
  public _get_audio_speaker_mode(): number;
  public _handles_file(_path: String): boolean;
  public _write_begin(_movie_size: Vector2i, _fps: number, _base_path: String): number;
  public _write_frame(_frame_image: Image, _audio_frame_block: const void*): number;
  public _write_end(): void;
  public add_writer(_writer: MovieWriter): void;
}