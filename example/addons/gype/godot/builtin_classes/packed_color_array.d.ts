

declare global {
export declare class PackedColorArray {
  constructor();
  constructor(_from: PackedColorArray);
  constructor(_from: GDArray);
  public size(): void;
  public is_empty(): void;
  public set(_index: number, _value: Color): void;
  public push_back(_value: Color): void;
  public append(_value: Color): void;
  public append_array(_array: PackedColorArray): void;
  public remove_at(_index: number): void;
  public insert(_at_index: number, _value: Color): void;
  public fill(_value: Color): void;
  public resize(_new_size: number): void;
  public clear(): void;
  public has(_value: Color): void;
  public reverse(): void;
  public slice(_begin: number, _end: number): void;
  public to_byte_array(): void;
  public sort(): void;
  public bsearch(_value: Color, _before: boolean): void;
  public duplicate(): void;
  public find(_value: Color, _from: number): void;
  public rfind(_value: Color, _from: number): void;
  public count(_value: Color): void;
}
}

export {};