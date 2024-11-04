

declare global {
export declare class PackedVector2Array {
  constructor();
  constructor(_from: PackedVector2Array);
  constructor(_from: GDArray);
  public size(): number;
  public is_empty(): boolean;
  public set(_index: number, _value: Vector2): void;
  public push_back(_value: Vector2): boolean;
  public append(_value: Vector2): boolean;
  public append_array(_array: PackedVector2Array): void;
  public remove_at(_index: number): void;
  public insert(_at_index: number, _value: Vector2): number;
  public fill(_value: Vector2): void;
  public resize(_new_size: number): number;
  public clear(): void;
  public has(_value: Vector2): boolean;
  public reverse(): void;
  public slice(_begin: number, _end: number = 2147483647): PackedVector2Array;
  public to_byte_array(): PackedByteArray;
  public sort(): void;
  public bsearch(_value: Vector2, _before: boolean = true): number;
  public duplicate(): PackedVector2Array;
  public find(_value: Vector2, _from: number = 0): number;
  public rfind(_value: Vector2, _from: number = -1): number;
  public count(_value: Vector2): number;
}
}

export {};