

declare global {
export declare class PackedFloat64Array {
  constructor();
  constructor(_from: PackedFloat64Array);
  constructor(_from: GDArray);
  public size(): void;
  public is_empty(): void;
  public set(_index: number, _value: number): void;
  public push_back(_value: number): void;
  public append(_value: number): void;
  public append_array(_array: PackedFloat64Array): void;
  public remove_at(_index: number): void;
  public insert(_at_index: number, _value: number): void;
  public fill(_value: number): void;
  public resize(_new_size: number): void;
  public clear(): void;
  public has(_value: number): void;
  public reverse(): void;
  public slice(_begin: number, _end: number): void;
  public to_byte_array(): void;
  public sort(): void;
  public bsearch(_value: number, _before: boolean): void;
  public duplicate(): void;
  public find(_value: number, _from: number): void;
  public rfind(_value: number, _from: number): void;
  public count(_value: number): void;
}
}

export {};