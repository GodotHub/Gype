

declare global {
export declare class PackedByteArray {
  constructor();
  constructor(_from: PackedByteArray);
  constructor(_from: GDArray);
  public size(): void;
  public is_empty(): void;
  public set(_index: number, _value: number): void;
  public push_back(_value: number): void;
  public append(_value: number): void;
  public append_array(_array: PackedByteArray): void;
  public remove_at(_index: number): void;
  public insert(_at_index: number, _value: number): void;
  public fill(_value: number): void;
  public resize(_new_size: number): void;
  public clear(): void;
  public has(_value: number): void;
  public reverse(): void;
  public slice(_begin: number, _end: number): void;
  public sort(): void;
  public bsearch(_value: number, _before: boolean): void;
  public duplicate(): void;
  public find(_value: number, _from: number): void;
  public rfind(_value: number, _from: number): void;
  public count(_value: number): void;
  public get_string_from_ascii(): void;
  public get_string_from_utf8(): void;
  public get_string_from_utf16(): void;
  public get_string_from_utf32(): void;
  public get_string_from_wchar(): void;
  public hex_encode(): void;
  public compress(_compression_mode: number): void;
  public decompress(_buffer_size: number, _compression_mode: number): void;
  public decompress_dynamic(_max_output_size: number, _compression_mode: number): void;
  public decode_u8(_byte_offset: number): void;
  public decode_s8(_byte_offset: number): void;
  public decode_u16(_byte_offset: number): void;
  public decode_s16(_byte_offset: number): void;
  public decode_u32(_byte_offset: number): void;
  public decode_s32(_byte_offset: number): void;
  public decode_u64(_byte_offset: number): void;
  public decode_s64(_byte_offset: number): void;
  public decode_half(_byte_offset: number): void;
  public decode_float(_byte_offset: number): void;
  public decode_double(_byte_offset: number): void;
  public has_encoded_var(_byte_offset: number, _allow_objects: boolean): void;
  public decode_var(_byte_offset: number, _allow_objects: boolean): void;
  public decode_var_size(_byte_offset: number, _allow_objects: boolean): void;
  public to_int32_array(): void;
  public to_int64_array(): void;
  public to_float32_array(): void;
  public to_float64_array(): void;
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
  public encode_var(_byte_offset: number, _value: any, _allow_objects: boolean): void;
}
}

export {};