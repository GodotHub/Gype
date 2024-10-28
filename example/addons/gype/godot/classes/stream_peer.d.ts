
import { RefCounted } from "@godot/classes/ref_counted";

export declare class StreamPeer extends RefCounted{
  public put_data(_data: PackedByteArray): number;
  public put_partial_data(_data: PackedByteArray): GDArray;
  public get_data(_bytes: number): GDArray;
  public get_partial_data(_bytes: number): GDArray;
  public get_available_bytes(): number;
  public set_big_endian(_enable: boolean): void;
  public is_big_endian_enabled(): boolean;
  public put_8(_value: number): void;
  public put_u8(_value: number): void;
  public put_16(_value: number): void;
  public put_u16(_value: number): void;
  public put_32(_value: number): void;
  public put_u32(_value: number): void;
  public put_64(_value: number): void;
  public put_u64(_value: number): void;
  public put_float(_value: number): void;
  public put_double(_value: number): void;
  public put_string(_value: String): void;
  public put_utf8_string(_value: String): void;
  public put_var(_value: Variant, _full_objects: boolean): void;
  public get_8(): number;
  public get_u8(): number;
  public get_16(): number;
  public get_u16(): number;
  public get_32(): number;
  public get_u32(): number;
  public get_64(): number;
  public get_u64(): number;
  public get_float(): number;
  public get_double(): number;
  public get_string(_bytes: number): String;
  public get_utf8_string(_bytes: number): String;
  public get_var(_allow_objects: boolean): Variant;
  public get big_endian(): boolean {
    is_big_endian_enabled();
  }
  public set big_endian(value: boolean): void {
    set_big_endian(value);
  }
}