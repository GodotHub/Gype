

declare global {
export declare class Array {
  constructor();
  constructor(_from: GDArray);
  constructor(_base: GDArray, _type: number, _class_name: String | StringName | string, _script: any);
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
  public size(): number;
  public is_empty(): boolean;
  public clear(): void;
  public hash(): number;
  public assign(_array: GDArray): void;
  public push_back(_value: any): void;
  public push_front(_value: any): void;
  public append(_value: any): void;
  public append_array(_array: GDArray): void;
  public resize(_size: number): number;
  public insert(_position: number, _value: any): number;
  public remove_at(_position: number): void;
  public fill(_value: any): void;
  public erase(_value: any): void;
  public front(): any;
  public back(): any;
  public pick_random(): any;
  public find(_what: any, _from: number): number;
  public rfind(_what: any, _from: number): number;
  public count(_value: any): number;
  public has(_value: any): boolean;
  public pop_back(): any;
  public pop_front(): any;
  public pop_at(_position: number): any;
  public sort(): void;
  public sort_custom(_func: Callable): void;
  public shuffle(): void;
  public bsearch(_value: any, _before: boolean): number;
  public bsearch_custom(_value: any, _func: Callable, _before: boolean): number;
  public reverse(): void;
  public duplicate(_deep: boolean): GDArray;
  public slice(_begin: number, _end: number, _step: number, _deep: boolean): GDArray;
  public filter(_method: Callable): GDArray;
  public map(_method: Callable): GDArray;
  public reduce(_method: Callable, _accum: any): any;
  public any(_method: Callable): boolean;
  public all(_method: Callable): boolean;
  public max(): any;
  public min(): any;
  public is_typed(): boolean;
  public is_same_typed(_array: GDArray): boolean;
  public get_typed_builtin(): number;
  public get_typed_class_name(): StringName;
  public get_typed_script(): any;
  public make_read_only(): void;
  public is_read_only(): boolean;
}
}

export {};