

declare global {
export declare class Signal {
  constructor();
  constructor(_from: Signal);
  constructor(_object: Object, _signal: StringName);
  public is_null(): void;
  public get_object(): void;
  public get_object_id(): void;
  public get_name(): void;
  public connect(_callable: Callable, _flags: number): void;
  public disconnect(_callable: Callable): void;
  public is_connected(_callable: Callable): void;
  public get_connections(): void;
  public emit(): void;
}
}

export {};