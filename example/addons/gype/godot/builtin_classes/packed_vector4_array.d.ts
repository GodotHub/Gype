

declare global {
export declare class PackedVector4Array {
  constructor();
  constructor(_from: PackedVector4Array);
  constructor(_from: GDArray);
  public size(): number;
  public is_empty(): boolean;
  public set(_index: number, _value: Vector4): void;
  public push_back(_value: Vector4): boolean;
  public append(_value: Vector4): boolean;
  public append_array(_array: PackedVector4Array): void;
  public remove_at(_index: number): void;
  public insert(_at_index: number, _value: Vector4): number;
  public fill(_value: Vector4): void;
  public resize(_new_size: number): number;
  public clear(): void;
  public has(_value: Vector4): boolean;
  public reverse(): void;
  public slice(_begin: number, _end: number = 2147483647): PackedVector4Array;
  public to_byte_array(): PackedByteArray;
  public sort(): void;
  public bsearch(_value: Vector4, _before: boolean = true): number;
  public duplicate(): PackedVector4Array;
  public find(_value: Vector4, _from: number = 0): number;
  public rfind(_value: Vector4, _from: number = -1): number;
  public count(_value: Vector4): number;
}
}

export {};