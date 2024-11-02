
import { GodotObject } from "@godot/classes/godot_object";


export declare class ProjectSettings extends GodotObject{
  public has_setting(_name: GDString | StringName | string): boolean;
  public set_setting(_name: GDString | StringName | string, _value: any): void;
  public get_setting(_name: GDString | StringName | string, _default_value: any): any;
  public get_setting_with_override(_name: GDString | StringName | string): any;
  public get_global_class_list(): GDArray;
  public set_order(_name: GDString | StringName | string, _position: number): void;
  public get_order(_name: GDString | StringName | string): number;
  public set_initial_value(_name: GDString | StringName | string, _value: any): void;
  public set_as_basic(_name: GDString | StringName | string, _basic: boolean): void;
  public set_as_internal(_name: GDString | StringName | string, _internal: boolean): void;
  public add_property_info(_hint: Dictionary): void;
  public set_restart_if_changed(_name: GDString | StringName | string, _restart: boolean): void;
  public clear(_name: GDString | StringName | string): void;
  public localize_path(_path: GDString | StringName | string): String;
  public globalize_path(_path: GDString | StringName | string): String;
  public save(): number;
  public load_resource_pack(_pack: GDString | StringName | string, _replace_files: boolean, _offset: number): boolean;
  public save_custom(_file: GDString | StringName | string): number;
  public get settings_changed(): Signal;
}