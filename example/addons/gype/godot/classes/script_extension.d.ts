
import { Script } from "@godot/classes/script";
import { Object } from "@godot/classes/object";
import { ScriptLanguage } from "@godot/classes/script_language";

export declare class ScriptExtension extends Script{
  public _editor_can_reload_from_file(): boolean;
  public _placeholder_erased(_placeholder: void*): void;
  public _can_instantiate(): boolean;
  public _get_base_script(): Script;
  public _get_global_name(): StringName;
  public _inherits_script(_script: Script): boolean;
  public _get_instance_base_type(): StringName;
  public _instance_create(_for_object: Object): void*;
  public _placeholder_instance_create(_for_object: Object): void*;
  public _instance_has(_object: Object): boolean;
  public _has_source_code(): boolean;
  public _get_source_code(): String;
  public _set_source_code(_code: String): void;
  public _reload(_keep_state: boolean): number;
  public _get_documentation(): Array;
  public _get_class_icon_path(): String;
  public _has_method(_method: StringName): boolean;
  public _has_static_method(_method: StringName): boolean;
  public _get_script_method_argument_count(_method: StringName): Variant;
  public _get_method_info(_method: StringName): Dictionary;
  public _is_tool(): boolean;
  public _is_valid(): boolean;
  public _is_abstract(): boolean;
  public _get_language(): ScriptLanguage;
  public _has_script_signal(_signal: StringName): boolean;
  public _get_script_signal_list(): Array;
  public _has_property_default_value(_property: StringName): boolean;
  public _get_property_default_value(_property: StringName): Variant;
  public _update_exports(): void;
  public _get_script_method_list(): Array;
  public _get_script_property_list(): Array;
  public _get_member_line(_member: StringName): number;
  public _get_constants(): Dictionary;
  public _get_members(): Array;
  public _is_placeholder_fallback_enabled(): boolean;
  public _get_rpc_config(): Variant;
}