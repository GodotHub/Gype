
import { Resource } from "@godot/classes/resource";
import { GodotObject } from "@godot/classes/godot_object";


export declare class Script extends Resource{
  public can_instantiate(): boolean;
  public instance_has(_base_object: GodotObject): boolean;
  public has_source_code(): boolean;
  public get_source_code(): String;
  public set_source_code(_source: GDString | StringName | string): void;
  public reload(_keep_state: boolean): number;
  public get_base_script(): Script;
  public get_instance_base_type(): StringName;
  public get_global_name(): StringName;
  public has_script_signal(_signal_name: GDString | StringName | string): boolean;
  public get_script_property_list(): GDArray;
  public get_script_method_list(): GDArray;
  public get_script_signal_list(): GDArray;
  public get_script_constant_map(): Dictionary;
  public get_property_default_value(_property: GDString | StringName | string): any;
  public is_tool(): boolean;
  public is_abstract(): boolean;
  public get source_code(): String;
  public set source_code(value): void;
}