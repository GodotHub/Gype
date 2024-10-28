
import { Resource } from "@godot/classes/resource";

export declare class OggPacketSequence extends Resource{
  public set_packet_data(_packet_data: typedarray::Array): void;
  public get_packet_data(): Array;
  public set_packet_granule_positions(_granule_positions: PackedInt64Array): void;
  public get_packet_granule_positions(): PackedInt64Array;
  public set_sampling_rate(_sampling_rate: number): void;
  public get_sampling_rate(): number;
  public get_length(): number;
  public get packet_data(): Array {
    get_packet_data();
  }
  public set packet_data(value: Array): void {
    set_packet_data(value);
  }
  public get granule_positions(): PackedInt64Array {
    get_packet_granule_positions();
  }
  public set granule_positions(value: PackedInt64Array): void {
    set_packet_granule_positions(value);
  }
  public get sampling_rate(): number {
    get_sampling_rate();
  }
  public set sampling_rate(value: number): void {
    set_sampling_rate(value);
  }
}