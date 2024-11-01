

declare global {
export declare class Callable {
  constructor();
  constructor(_from: Callable);
  constructor(_object: Object, _method: String | StringName | string);
  public create(_variant: any, _method: String | StringName | string): Callable;
  public callv(_arguments: GDArray): any;
  public is_null(): boolean;
  public is_custom(): boolean;
  public is_standard(): boolean;
  public is_valid(): boolean;
  public get_object(): GodotObject;
  public get_object_id(): number;
  public get_method(): StringName;
  public get_argument_count(): number;
  public get_bound_arguments_count(): number;
  public get_bound_arguments(): GDArray;
  public hash(): number;
  public bindv(_arguments: GDArray): Callable;
  public unbind(_argcount: number): Callable;
  public call(): any;
  public call_deferred(): void;
  public rpc(): void;
  public rpc_id(_peer_id: number): void;
  public bind(): Callable;
}
}

export {};