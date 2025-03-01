

declare global {
export declare class Signal {
  constructor();
  constructor(_from: Signal);
  constructor(_object: GodotObject, _signal: GDString | StringName | string);
  public is_null(): boolean;
  public get_object(): GodotObject;
  public get_object_id(): number;
  public get_name(): StringName;
  public connect(_callable: Callable, _flags: number = 0): number;
  public disconnect(_callable: Callable): void;
  public is_connected(_callable: Callable): boolean;
  public get_connections(): GDArray;
  public emit(): void;
}
}

export {};