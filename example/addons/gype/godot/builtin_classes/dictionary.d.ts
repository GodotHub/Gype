

declare global {
export declare class Dictionary {
  constructor();
  constructor(_from: Dictionary);
  public size(): number;
  public is_empty(): boolean;
  public clear(): void;
  public merge(_dictionary: Dictionary, _overwrite: boolean = false): void;
  public merged(_dictionary: Dictionary, _overwrite: boolean = false): Dictionary;
  public has(_key: any): boolean;
  public has_all(_keys: GDArray): boolean;
  public find_key(_value: any): any;
  public erase(_key: any): boolean;
  public hash(): number;
  public keys(): GDArray;
  public values(): GDArray;
  public duplicate(_deep: boolean = false): Dictionary;
  public get(_key: any, _default: any = null): any;
  public get_or_add(_key: any, _default: any = null): any;
  public make_read_only(): void;
  public is_read_only(): boolean;
  public recursive_equal(_dictionary: Dictionary, _recursion_count: number): boolean;
}
}

export {};