

declare global {
export declare class PackedColorArray {
  constructor();
  constructor(_from: PackedColorArray);
  constructor(_from: GDArray);
  public size(): number;
  public is_empty(): boolean;
  public set(_index: number, _value: Color): void;
  public push_back(_value: Color): boolean;
  public append(_value: Color): boolean;
  public append_array(_array: PackedColorArray): void;
  public remove_at(_index: number): void;
  public insert(_at_index: number, _value: Color): number;
  public fill(_value: Color): void;
  public resize(_new_size: number): number;
  public clear(): void;
  public has(_value: Color): boolean;
  public reverse(): void;
  public slice(_begin: number, _end: number): PackedColorArray;
  public to_byte_array(): PackedByteArray;
  public sort(): void;
  public bsearch(_value: Color, _before: boolean): number;
  public duplicate(): PackedColorArray;
  public find(_value: Color, _from: number): number;
  public rfind(_value: Color, _from: number): number;
  public count(_value: Color): number;
}
}

export {};