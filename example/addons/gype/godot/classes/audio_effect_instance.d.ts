
import { RefCounted } from "@godot/classes/ref_counted";

export declare class AudioEffectInstance extends RefCounted{
  public _process(_src_buffer: const void*, _dst_buffer: AudioFrame*, _frame_count: number): void;
  public _process_silence(): boolean;
}