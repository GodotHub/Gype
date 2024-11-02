
import { PacketPeer } from "@godot/classes/packet_peer";
import { StreamPeer } from "@godot/classes/stream_peer";


export declare class PacketPeerStream extends PacketPeer{
  public set_stream_peer(_peer: StreamPeer): void;
  public get_stream_peer(): StreamPeer;
  public set_input_buffer_max_size(_max_size_bytes: number): void;
  public set_output_buffer_max_size(_max_size_bytes: number): void;
  public get_input_buffer_max_size(): number;
  public get_output_buffer_max_size(): number;
  public get input_buffer_max_size(): number;
  public set input_buffer_max_size(value): void;
  public get output_buffer_max_size(): number;
  public set output_buffer_max_size(value): void;
  public get stream_peer(): StreamPeer;
  public set stream_peer(value): void;
}