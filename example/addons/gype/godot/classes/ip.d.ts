
import { GodotObject } from "@godot/classes/godot_object";

export declare class IP extends GodotObject{
  public resolve_hostname(_host: String | StringName | string, _ip_type: number): String;
  public resolve_hostname_addresses(_host: String | StringName | string, _ip_type: number): PackedStringArray;
  public resolve_hostname_queue_item(_host: String | StringName | string, _ip_type: number): number;
  public get_resolve_item_status(_id: number): number;
  public get_resolve_item_address(_id: number): String;
  public get_resolve_item_addresses(_id: number): GDArray;
  public erase_resolve_item(_id: number): void;
  public get_local_addresses(): PackedStringArray;
  public get_local_interfaces(): GDArray;
  public clear_cache(_hostname: String | StringName | string): void;
  static ResolverStatus = {
    RESOLVER_STATUS_NONE = 0,
    RESOLVER_STATUS_WAITING = 1,
    RESOLVER_STATUS_DONE = 2,
    RESOLVER_STATUS_ERROR = 3,
  }
  static Type = {
    TYPE_NONE = 0,
    TYPE_IPV4 = 1,
    TYPE_IPV6 = 2,
    TYPE_ANY = 3,
  }
}