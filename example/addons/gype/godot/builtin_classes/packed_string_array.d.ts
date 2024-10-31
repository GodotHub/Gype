

declare global {
export declare class PackedStringArray {
  constructor();
  constructor(_from: PackedStringArray);
  constructor(_from: GDArray);
  public size(): number;
  public is_empty(): boolean;
  public set(_index: number, _value: String | StringName | string): void;
  public push_back(_value: String | StringName | string): boolean;
  public append(_value: String | StringName | string): boolean;
  public append_array(_array: PackedStringArray): void;
  public remove_at(_index: number): void;
  public insert(_at_index: number, _value: String | StringName | string): number;
  public fill(_value: String | StringName | string): void;
  public resize(_new_size: number): number;
  public clear(): void;
  public has(_value: String | StringName | string): boolean;
  public reverse(): void;
  public slice(_begin: number, _end: number): PackedStringArray;
  public to_byte_array(): PackedByteArray;
  public sort(): void;
  public bsearch(_value: String | StringName | string, _before: boolean): number;
  public duplicate(): PackedStringArray;
  public find(_value: String | StringName | string, _from: number): number;
  public rfind(_value: String | StringName | string, _from: number): number;
  public count(_value: String | StringName | string): number;
}
}

export {};