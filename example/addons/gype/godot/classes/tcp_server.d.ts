
import { StreamPeerTCP } from "@godot/classes/stream_peer_tcp";
import { RefCounted } from "@godot/classes/ref_counted";
export declare class TCPServer extends RefCounted{
  public listen(_port: number, _bind_address: GDString | StringName | string = "*"): number;
  public is_connection_available(): boolean;
  public is_listening(): boolean;
  public get_local_port(): number;
  public take_connection(): StreamPeerTCP;
  public stop(): void;
}