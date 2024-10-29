

declare global {
export declare class Callable {
  constructor();
  constructor(_from: Callable);
  constructor(_object: Object, _method: StringName);
  public create(_variant: any, _method: StringName): void;
  public callv(_arguments: GDArray): void;
  public is_null(): void;
  public is_custom(): void;
  public is_standard(): void;
  public is_valid(): void;
  public get_object(): void;
  public get_object_id(): void;
  public get_method(): void;
  public get_argument_count(): void;
  public get_bound_arguments_count(): void;
  public get_bound_arguments(): void;
  public hash(): void;
  public bindv(_arguments: GDArray): void;
  public unbind(_argcount: number): void;
  public call(): void;
  public call_deferred(): void;
  public rpc(): void;
  public rpc_id(_peer_id: number): void;
  public bind(): void;
}
}

export {};