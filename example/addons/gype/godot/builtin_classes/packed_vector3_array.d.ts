

declare global {
export declare class PackedVector3Array {
  constructor();
  constructor(_from: PackedVector3Array);
  constructor(_from: GDArray);
  public size(): number;
  public is_empty(): boolean;
  public set(_index: number, _value: Vector3): void;
  public push_back(_value: Vector3): boolean;
  public append(_value: Vector3): boolean;
  public append_array(_array: PackedVector3Array): void;
  public remove_at(_index: number): void;
  public insert(_at_index: number, _value: Vector3): number;
  public fill(_value: Vector3): void;
  public resize(_new_size: number): number;
  public clear(): void;
  public has(_value: Vector3): boolean;
  public reverse(): void;
  public slice(_begin: number, _end: number): PackedVector3Array;
  public to_byte_array(): PackedByteArray;
  public sort(): void;
  public bsearch(_value: Vector3, _before: boolean): number;
  public duplicate(): PackedVector3Array;
  public find(_value: Vector3, _from: number): number;
  public rfind(_value: Vector3, _from: number): number;
  public count(_value: Vector3): number;
}
}

export {};