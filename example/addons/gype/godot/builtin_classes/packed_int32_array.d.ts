

declare global {
export declare class PackedInt32Array {
  constructor();
  constructor(_from: PackedInt32Array);
  constructor(_from: GDArray);
  public size(): number;
  public is_empty(): boolean;
  public set(_index: number, _value: number): void;
  public push_back(_value: number): boolean;
  public append(_value: number): boolean;
  public append_array(_array: PackedInt32Array): void;
  public remove_at(_index: number): void;
  public insert(_at_index: number, _value: number): number;
  public fill(_value: number): void;
  public resize(_new_size: number): number;
  public clear(): void;
  public has(_value: number): boolean;
  public reverse(): void;
  public slice(_begin: number, _end: number): PackedInt32Array;
  public to_byte_array(): PackedByteArray;
  public sort(): void;
  public bsearch(_value: number, _before: boolean): number;
  public duplicate(): PackedInt32Array;
  public find(_value: number, _from: number): number;
  public rfind(_value: number, _from: number): number;
  public count(_value: number): number;
}
}

export {};