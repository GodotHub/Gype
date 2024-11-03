
import { RefCounted } from "@godot/classes/ref_counted";
export declare class PacketPeer extends RefCounted{
  public get_var(_allow_objects: boolean = false): any;
  public put_var(_var: any, _full_objects: boolean = false): number;
  public get_packet(): PackedByteArray;
  public put_packet(_buffer: PackedByteArray): number;
  public get_packet_error(): number;
  public get_available_packet_count(): number;
  public get_encode_buffer_max_size(): number;
  public set_encode_buffer_max_size(_max_size: number): void;
  public get encode_buffer_max_size(): number;
  public set encode_buffer_max_size(value): void;
}