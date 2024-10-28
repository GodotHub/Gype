
import { Resource } from "@godot/classes/resource";
import { Object } from "@godot/classes/object";

export declare class Script extends Resource{
  public can_instantiate(): boolean;
  public instance_has(_base_object: Object): boolean;
  public has_source_code(): boolean;
  public get_source_code(): String;
  public set_source_code(_source: String): void;
  public reload(_keep_state: boolean): number;
  public get_base_script(): Script;
  public get_instance_base_type(): StringName;
  public get_global_name(): StringName;
  public has_script_signal(_signal_name: StringName): boolean;
  public get_script_property_list(): Array;
  public get_script_method_list(): Array;
  public get_script_signal_list(): Array;
  public get_script_constant_map(): Dictionary;
  public get_property_default_value(_property: StringName): Variant;
  public is_tool(): boolean;
  public is_abstract(): boolean;
  public get source_code(): String {
    get_source_code();
  }
  public set source_code(value: String): void {
    set_source_code(value);
  }
}