
import { AudioStream } from "@godot/classes/audio_stream";
import { OggPacketSequence } from "@godot/classes/ogg_packet_sequence";

export declare class AudioStreamOggVorbis extends AudioStream{
  public load_from_buffer(_buffer: PackedByteArray): AudioStreamOggVorbis;
  public load_from_file(_path: String | StringName | string): AudioStreamOggVorbis;
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
  public get packet_sequence(): Object {
    get_packet_sequence();
  }
  public set packet_sequence(value): void {
    set_packet_sequence(value);
  }
  public get bpm(): number {
    get_bpm();
  }
  public set bpm(value): void {
    set_bpm(value);
  }
  public get beat_count(): number {
    get_beat_count();
  }
  public set beat_count(value): void {
    set_beat_count(value);
  }
  public get bar_beats(): number {
    get_bar_beats();
  }
  public set bar_beats(value): void {
    set_bar_beats(value);
  }
  public get loop(): boolean {
    has_loop();
  }
  public set loop(value): void {
    set_loop(value);
  }
  public get loop_offset(): number {
    get_loop_offset();
  }
  public set loop_offset(value): void {
    set_loop_offset(value);
  }
}