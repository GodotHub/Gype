
import { AudioStream } from "@godot/classes/audio_stream";
import { OggPacketSequence } from "@godot/classes/ogg_packet_sequence";


export declare class AudioStreamOggVorbis extends AudioStream{
  public load_from_buffer(_buffer: PackedByteArray): AudioStreamOggVorbis;
  public load_from_file(_path: GDString | StringName | string): AudioStreamOggVorbis;
  public set_packet_sequence(_packet_sequence: OggPacketSequence): void;
  public get_packet_sequence(): OggPacketSequence;
  public set_loop(_enable: boolean): void;
  public has_loop(): boolean;
  public set_loop_offset(_seconds: number): void;
  public get_loop_offset(): number;
  public set_bpm(_bpm: number): void;
  public get_bpm(): number;
  public set_beat_count(_count: number): void;
  public get_beat_count(): number;
  public set_bar_beats(_count: number): void;
  public get_bar_beats(): number;
  public get packet_sequence(): GodotObject;
  public set packet_sequence(value): void;
  public get bpm(): number;
  public set bpm(value): void;
  public get beat_count(): number;
  public set beat_count(value): void;
  public get bar_beats(): number;
  public set bar_beats(value): void;
  public get loop(): boolean;
  public set loop(value): void;
  public get loop_offset(): number;
  public set loop_offset(value): void;
}