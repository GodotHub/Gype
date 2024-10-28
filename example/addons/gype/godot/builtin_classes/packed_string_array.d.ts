

declare global {
export declare class PackedStringArray {
  constructor();
  constructor(_from: PackedStringArray);
  constructor(_from: GDArray);
  public size(): void;
  public is_empty(): void;
  public set(_index: number, _value: String): void;
  public push_back(_value: String): void;
  public append(_value: String): void;
  public append_array(_array: PackedStringArray): void;
  public remove_at(_index: number): void;
  public insert(_at_index: number, _value: String): void;
  public fill(_value: String): void;
  public resize(_new_size: number): void;
  public clear(): void;
  public has(_value: String): void;
  public reverse(): void;
  public slice(_begin: number, _end: number): void;
  public to_byte_array(): void;
  public sort(): void;
  public bsearch(_value: String, _before: boolean): void;
  public duplicate(): void;
  public find(_value: String, _from: number): void;
  public rfind(_value: String, _from: number): void;
  public count(_value: String): void;
}
}

export {};