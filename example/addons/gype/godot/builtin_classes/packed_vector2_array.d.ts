

declare global {
export declare class PackedVector2Array {
  constructor();
  constructor(_from: PackedVector2Array);
  constructor(_from: GDArray);
  public size(): void;
  public is_empty(): void;
  public set(_index: number, _value: Vector2): void;
  public push_back(_value: Vector2): void;
  public append(_value: Vector2): void;
  public append_array(_array: PackedVector2Array): void;
  public remove_at(_index: number): void;
  public insert(_at_index: number, _value: Vector2): void;
  public fill(_value: Vector2): void;
  public resize(_new_size: number): void;
  public clear(): void;
  public has(_value: Vector2): void;
  public reverse(): void;
  public slice(_begin: number, _end: number): void;
  public to_byte_array(): void;
  public sort(): void;
  public bsearch(_value: Vector2, _before: boolean): void;
  public duplicate(): void;
  public find(_value: Vector2, _from: number): void;
  public rfind(_value: Vector2, _from: number): void;
  public count(_value: Vector2): void;
}
}

export {};