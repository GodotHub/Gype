

declare global {
export declare class Array {
  constructor();
  constructor(_from: GDArray);
  constructor(_base: GDArray, _type: number, _class_name: StringName, _script: any);
  constructor(_from: PackedByteArray);
  constructor(_from: PackedInt32Array);
  constructor(_from: PackedInt64Array);
  constructor(_from: PackedFloat32Array);
  constructor(_from: PackedFloat64Array);
  constructor(_from: PackedStringArray);
  constructor(_from: PackedVector2Array);
  constructor(_from: PackedVector3Array);
  constructor(_from: PackedColorArray);
  constructor(_from: PackedVector4Array);
  public size(): void;
  public is_empty(): void;
  public clear(): void;
  public hash(): void;
  public assign(_array: GDArray): void;
  public push_back(_value: any): void;
  public push_front(_value: any): void;
  public append(_value: any): void;
  public append_array(_array: GDArray): void;
  public resize(_size: number): void;
  public insert(_position: number, _value: any): void;
  public remove_at(_position: number): void;
  public fill(_value: any): void;
  public erase(_value: any): void;
  public front(): void;
  public back(): void;
  public pick_random(): void;
  public find(_what: any, _from: number): void;
  public rfind(_what: any, _from: number): void;
  public count(_value: any): void;
  public has(_value: any): void;
  public pop_back(): void;
  public pop_front(): void;
  public pop_at(_position: number): void;
  public sort(): void;
  public sort_custom(_func: Callable): void;
  public shuffle(): void;
  public bsearch(_value: any, _before: boolean): void;
  public bsearch_custom(_value: any, _func: Callable, _before: boolean): void;
  public reverse(): void;
  public duplicate(_deep: boolean): void;
  public slice(_begin: number, _end: number, _step: number, _deep: boolean): void;
  public filter(_method: Callable): void;
  public map(_method: Callable): void;
  public reduce(_method: Callable, _accum: any): void;
  public any(_method: Callable): void;
  public all(_method: Callable): void;
  public max(): void;
  public min(): void;
  public is_typed(): void;
  public is_same_typed(_array: GDArray): void;
  public get_typed_builtin(): void;
  public get_typed_class_name(): void;
  public get_typed_script(): void;
  public make_read_only(): void;
  public is_read_only(): void;
}
}

export {};