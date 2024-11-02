
import { Resource } from "@godot/classes/resource";


export declare class OggPacketSequence extends Resource{
  public set_packet_data(_packet_data: GDArray): void;
  public get_packet_data(): GDArray;
  public set_packet_granule_positions(_granule_positions: PackedInt64Array): void;
  public get_packet_granule_positions(): PackedInt64Array;
  public set_sampling_rate(_sampling_rate: number): void;
  public get_sampling_rate(): number;
  public get_length(): number;
  public get packet_data(): GDArray;
  public set packet_data(value): void;
  public get granule_positions(): PackedInt64Array;
  public set granule_positions(value): void;
  public get sampling_rate(): number;
  public set sampling_rate(value): void;
}