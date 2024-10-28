
import { Object } from "@godot/classes/object";

export declare class ProjectSettings extends Object{
  public has_setting(_name: String): boolean;
  public set_setting(_name: String, _value: Variant): void;
  public get_setting(_name: String, _default_value: Variant): Variant;
  public get_setting_with_override(_name: StringName): Variant;
  public get_global_class_list(): Array;
  public set_order(_name: String, _position: number): void;
  public get_order(_name: String): number;
  public set_initial_value(_name: String, _value: Variant): void;
  public set_as_basic(_name: String, _basic: boolean): void;
  public set_as_internal(_name: String, _internal: boolean): void;
  public add_property_info(_hint: Dictionary): void;
  public set_restart_if_changed(_name: String, _restart: boolean): void;
  public clear(_name: String): void;
  public localize_path(_path: String): String;
  public globalize_path(_path: String): String;
  public save(): number;
  public load_resource_pack(_pack: String, _replace_files: boolean, _offset: number): boolean;
  public save_custom(_file: String): number;
}