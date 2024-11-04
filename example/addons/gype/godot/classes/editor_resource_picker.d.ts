
import { GodotObject } from "@godot/classes/godot_object";
import { Resource } from "@godot/classes/resource";
import { HBoxContainer } from "@godot/classes/h_box_container";
export declare class EditorResourcePicker extends HBoxContainer{
  public _set_create_options(_menu_node: GodotObject): void;
  public _handle_menu_selected(_id: number): boolean;
  public set_base_type(_base_type: GDString | StringName | string): void;
  public get_base_type(): String;
  public get_allowed_types(): PackedStringArray;
  public set_edited_resource(_resource: Resource): void;
  public get_edited_resource(): Resource;
  public set_toggle_mode(_enable: boolean): void;
  public is_toggle_mode(): boolean;
  public set_toggle_pressed(_pressed: boolean): void;
  public set_editable(_enable: boolean): void;
  public is_editable(): boolean;
  public get base_type(): String;
  public set base_type(value): void;
  public get edited_resource(): Resource;
  public set edited_resource(value): void;
  public get editable(): boolean;
  public set editable(value): void;
  public get toggle_mode(): boolean;
  public set toggle_mode(value): void;
  public get resource_selected(): Signal;
  public get resource_changed(): Signal;
}