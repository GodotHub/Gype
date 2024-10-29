
import { PacketPeer } from "@godot/classes/packet_peer";

export declare class WebRTCDataChannel extends PacketPeer{
  public poll(): number;
  public close(): void;
  public was_string_packet(): boolean;
  public set_write_mode(_write_mode: number): void;
  public get_write_mode(): number;
  public get_ready_state(): number;
  public get_label(): String;
  public is_ordered(): boolean;
  public get_id(): number;
  public get_max_packet_life_time(): number;
  public get_max_retransmits(): number;
  public get_protocol(): String;
  public is_negotiated(): boolean;
  public get_buffered_amount(): number;
  public get write_mode(): number {
    get_write_mode();
  }
  public set write_mode(value): void {
    set_write_mode(value);
  }
  static WriteMode = {
    WRITE_MODE_TEXT = 0,
    WRITE_MODE_BINARY = 1,
  }
  static ChannelState = {
    STATE_CONNECTING = 0,
    STATE_OPEN = 1,
    STATE_CLOSING = 2,
    STATE_CLOSED = 3,
  }
}