
import { Resource } from "@godot/classes/resource";
import { InputEvent } from "@godot/classes/input_event";

export declare class EditorSettings extends Resource{
  public has_setting(_name: String): boolean;
  public set_setting(_name: String, _value: Variant): void;
  public get_setting(_name: String): Variant;
  public erase(_property: String): void;
  public set_initial_value(_name: StringName, _value: Variant, _update_current: boolean): void;
  public add_property_info(_info: Dictionary): void;
  public set_project_metadata(_section: String, _key: String, _data: Variant): void;
  public get_project_metadata(_section: String, _key: String, _default: Variant): Variant;
  public set_favorites(_dirs: PackedStringArray): void;
  public get_favorites(): PackedStringArray;
  public set_recent_dirs(_dirs: PackedStringArray): void;
  public get_recent_dirs(): PackedStringArray;
  public set_builtin_action_override(_name: String, _actions_list: typedarray::InputEvent): void;
  public check_changed_settings_in_group(_setting_prefix: String): boolean;
  public get_changed_settings(): PackedStringArray;
  public mark_setting_changed(_setting: String): void;
}