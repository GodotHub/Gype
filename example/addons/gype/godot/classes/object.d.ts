

export declare class Object {
  public get_class(): String;
  public is_class(_class: String): boolean;
  public set(_property: StringName, _value: Variant): void;
  public get(_property: StringName): Variant;
  public set_indexed(_property_path: NodePath, _value: Variant): void;
  public get_indexed(_property_path: NodePath): Variant;
  public get_property_list(): Array;
  public get_method_list(): Array;
  public property_can_revert(_property: StringName): boolean;
  public property_get_revert(_property: StringName): Variant;
  public notification(_what: number, _reversed: boolean): void;
  public to_string(): String;
  public get_instance_id(): number;
  public set_script(_script: Variant): void;
  public get_script(): Variant;
  public set_meta(_name: StringName, _value: Variant): void;
  public remove_meta(_name: StringName): void;
  public get_meta(_name: StringName, _default: Variant): Variant;
  public has_meta(_name: StringName): boolean;
  public get_meta_list(): Array;
  public add_user_signal(_signal: String, _arguments: GDArray): void;
  public has_user_signal(_signal: StringName): boolean;
  public remove_user_signal(_signal: StringName): void;
  public emit_signal(_signal: StringName): number;
  public call(_method: StringName): Variant;
  public call_deferred(_method: StringName): Variant;
  public set_deferred(_property: StringName, _value: Variant): void;
  public callv(_method: StringName, _arg_array: GDArray): Variant;
  public has_method(_method: StringName): boolean;
  public get_method_argument_count(_method: StringName): number;
  public has_signal(_signal: StringName): boolean;
  public get_signal_list(): Array;
  public get_signal_connection_list(_signal: StringName): Array;
  public get_incoming_connections(): Array;
  public connect(_signal: StringName, _callable: Callable, _flags: number): number;
  public disconnect(_signal: StringName, _callable: Callable): void;
  public is_connected(_signal: StringName, _callable: Callable): boolean;
  public set_block_signals(_enable: boolean): void;
  public is_blocking_signals(): boolean;
  public notify_property_list_changed(): void;
  public set_message_translation(_enable: boolean): void;
  public can_translate_messages(): boolean;
  public tr(_message: StringName, _context: StringName): String;
  public tr_n(_message: StringName, _plural_message: StringName, _n: number, _context: StringName): String;
  public is_queued_for_deletion(): boolean;
  public cancel_free(): void;
  static ConnectFlags = {
    CONNECT_DEFERRED = 1,
    CONNECT_PERSIST = 2,
    CONNECT_ONE_SHOT = 4,
    CONNECT_REFERENCE_COUNTED = 8,
  }
}