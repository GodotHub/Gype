export declare class GodotObject {
  public get_class(): GDString;
  public is_class(_class: GDString | StringName | string): boolean;
  public set(_property: GDString | StringName | string, _value: any): void;
  public get(_property: GDString | StringName | string): any;
  public set_indexed(_property_path: NodePath, _value: any): void;
  public get_indexed(_property_path: NodePath): any;
  public get_property_list(): GDArray;
  public get_method_list(): GDArray;
  public property_can_revert(_property: GDString | StringName | string): boolean;
  public property_get_revert(_property: GDString | StringName | string): any;
  public notification(_what: number, _reversed: boolean): void;
  public to_string(): GDString;
  public get_instance_id(): number;
  public set_script(_script: any): void;
  public get_script(): any;
  public set_meta(_name: GDString | StringName | string, _value: any): void;
  public remove_meta(_name: GDString | StringName | string): void;
  public get_meta(_name: GDString | StringName | string, _default: any): any;
  public has_meta(_name: GDString | StringName | string): boolean;
  public get_meta_list(): GDArray;
  public add_user_signal(
    _signal: GDString | StringName | string,
    _arguments: GDArray
  ): void;
  public has_user_signal(_signal: GDString | StringName | string): boolean;
  public remove_user_signal(_signal: GDString | StringName | string): void;
  public emit_signal(_signal: GDString | StringName | string): number;
  public call(_method: GDString | StringName | string): any;
  public call_deferred(_method: GDString | StringName | string): any;
  public set_deferred(
    _property: GDString | StringName | string,
    _value: any
  ): void;
  public callv(_method: GDString | StringName | string, _arg_array: GDArray): any;
  public has_method(_method: GDString | StringName | string): boolean;
  public get_method_argument_count(
    _method: GDString | StringName | string
  ): number;
  public has_signal(_signal: GDString | StringName | string): boolean;
  public get_signal_list(): GDArray;
  public get_signal_connection_list(
    _signal: GDString | StringName | string
  ): GDArray;
  public get_incoming_connections(): GDArray;
  public connect(
    _signal: GDString | StringName | string,
    _callable: Callable,
    _flags: number
  ): number;
  public disconnect(
    _signal: GDString | StringName | string,
    _callable: Callable
  ): void;
  public is_connected(
    _signal: GDString | StringName | string,
    _callable: Callable
  ): boolean;
  public set_block_signals(_enable: boolean): void;
  public is_blocking_signals(): boolean;
  public notify_property_list_changed(): void;
  public set_message_translation(_enable: boolean): void;
  public can_translate_messages(): boolean;
  public tr(
    _message: GDString | StringName | string,
    _context: GDString | StringName | string
  ): GDString;
  public tr_n(
    _message: GDString | StringName | string,
    _plural_message: GDString | StringName | string,
    _n: number,
    _context: GDString | StringName | string
  ): GDString;
  public is_queued_for_deletion(): boolean;
  public cancel_free(): void;
  static ConnectFlags = {
    CONNECT_DEFERRED = 1,
    CONNECT_PERSIST = 2,
    CONNECT_ONE_SHOT = 4,
    CONNECT_REFERENCE_COUNTED = 8,
  };
  public script_changed: Signal;
  public property_list_changed: Signal;
}
