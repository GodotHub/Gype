

declare global {
export declare class PackedByteArray {
  constructor();
  constructor(_from: PackedByteArray);
  constructor(_from: GDArray);
  public size(): number;
  public is_empty(): boolean;
  public set(_index: number, _value: number): void;
  public push_back(_value: number): boolean;
  public append(_value: number): boolean;
  public append_array(_array: PackedByteArray): void;
  public remove_at(_index: number): void;
  public insert(_at_index: number, _value: number): number;
  public fill(_value: number): void;
  public resize(_new_size: number): number;
  public clear(): void;
  public has(_value: number): boolean;
  public reverse(): void;
  public slice(_begin: number, _end: number = 2147483647): PackedByteArray;
  public sort(): void;
  public bsearch(_value: number, _before: boolean = true): number;
  public duplicate(): PackedByteArray;
  public find(_value: number, _from: number = 0): number;
  public rfind(_value: number, _from: number = -1): number;
  public count(_value: number): number;
  public get_string_from_ascii(): String;
  public get_string_from_utf8(): String;
  public get_string_from_utf16(): String;
  public get_string_from_utf32(): String;
  public get_string_from_wchar(): String;
  public hex_encode(): String;
  public compress(_compression_mode: number = 0): PackedByteArray;
  public decompress(_buffer_size: number, _compression_mode: number = 0): PackedByteArray;
  public decompress_dynamic(_max_output_size: number, _compression_mode: number = 0): PackedByteArray;
  public decode_u8(_byte_offset: number): number;
  public decode_s8(_byte_offset: number): number;
  public decode_u16(_byte_offset: number): number;
  public decode_s16(_byte_offset: number): number;
  public decode_u32(_byte_offset: number): number;
  public decode_s32(_byte_offset: number): number;
  public decode_u64(_byte_offset: number): number;
  public decode_s64(_byte_offset: number): number;
  public decode_half(_byte_offset: number): number;
  public decode_float(_byte_offset: number): number;
  public decode_double(_byte_offset: number): number;
  public has_encoded_var(_byte_offset: number, _allow_objects: boolean = false): boolean;
  public decode_var(_byte_offset: number, _allow_objects: boolean = false): any;
  public decode_var_size(_byte_offset: number, _allow_objects: boolean = false): number;
  public to_int32_array(): PackedInt32Array;
  public to_int64_array(): PackedInt64Array;
  public to_float32_array(): PackedFloat32Array;
  public to_float64_array(): PackedFloat64Array;
  public encode_u8(_byte_offset: number, _value: number): void;
  public encode_s8(_byte_offset: number, _value: number): void;
  public encode_u16(_byte_offset: number, _value: number): void;
  public encode_s16(_byte_offset: number, _value: number): void;
  public encode_u32(_byte_offset: number, _value: number): void;
  public encode_s32(_byte_offset: number, _value: number): void;
  public encode_u64(_byte_offset: number, _value: number): void;
  public encode_s64(_byte_offset: number, _value: number): void;
  public encode_half(_byte_offset: number, _value: number): void;
  public encode_float(_byte_offset: number, _value: number): void;
  public encode_double(_byte_offset: number, _value: number): void;
  public encode_var(_byte_offset: number, _value: any, _allow_objects: boolean = false): number;
}
}

export {};